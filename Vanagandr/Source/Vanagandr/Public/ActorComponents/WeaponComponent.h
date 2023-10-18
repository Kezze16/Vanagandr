// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "WeaponComponent.generated.h"

class UWeaponConstraint;
class 

#pragma region Structs

USTRUCT(Blueprintable)
struct VANAGANDR_API FFireParams
{
	GENERATED_BODY()

	FFireParams();

public:


};

#pragma endregion


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
	TEnumAsByte<EWeaponFirePattern>FirePattern;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponInfo")
	TEnumAsByte<EWeaponPriority> WeaponPriority;

	UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite, Category = "Weapon Functionality")
	TArray<TObjectPtr<UWeaponConstraint>> FireConstraints;

public:
	FORCEINLINE void GetCharacter() { return  }


private:


protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

};


