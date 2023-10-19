// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "WeaponComponent.generated.h"

#define PRINT(msg) UKismetSystemLibrary::PrintString(this, msg);

class UWeaponConstraint;

#pragma region Enums

UENUM(BlueprintType)
enum EWeaponType : uint8
{
	Rifle,
	Pistol,
	Sniper UMETA(ToolTip = "use a rifle you casual"),
	Shotgun,
	Melee
};

UENUM(BlueprintType)
enum EWeaponPriority : uint8
{
	Primary,
	Secondary,
	Tertiary,
};

UENUM(BlueprintType)
enum EWeaponFirePattern : uint8
{
	Single,
	Automatic,
	Burst,
};


#pragma endregion

#pragma region Structs


//We change this depending on how we want weapons to work (falloff etc)
USTRUCT(Blueprintable)
struct VANAGANDR_API FFireParams
{
	GENERATED_BODY()

	FFireParams();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EWeaponFirePattern>FirePattern;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DamageFallOffStartRange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BaseDamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DamageFallOffMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HeadshotMultiplier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LegshotMultiplier;
};

#pragma endregion


DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOnFire, APlayerController*, Controller, ACharacter*, ShootingCharacter,
	FFireParams&, Params, FVector, ShootWorldStartPoint, FVector, AimDirection);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VANAGANDR_API UWeaponComponent : public USkeletalMeshComponent
{
	GENERATED_BODY()

public:	
	UWeaponComponent();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponInfo")
	FText Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponInfo")
	int Cost;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponInfo")
	TEnumAsByte<EWeaponType> Type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponInfo")
	TEnumAsByte<EWeaponPriority> WeaponPriority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Functionality")
	FFireParams FireParams;
	UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite, Category = "Weapon Functionality")
	TArray<TObjectPtr<UWeaponConstraint>> FireConstraints;

public:

	UFUNCTION()
	void TryFire(APlayerController* Controller, ACharacter* ShootingCharacter,
		FVector ShootWorldStartPoint, FVector AimDirection);
	UFUNCTION()
	void Fire(APlayerController* Controller, ACharacter* ShootingCharacter, FFireParams& Params,
		FVector ShootWorldStartPoint, FVector AimDirection);

	UPROPERTY(BlueprintAssignable, Category = "OnFire")
	FOnFire OnFire;

private:
	bool CheckConstraints();


public:
	UFUNCTION(BlueprintCallable)
	FORCEINLINE ACharacter* GetCharacter() { return Character; }

private:
	ACharacter* Character;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

};


