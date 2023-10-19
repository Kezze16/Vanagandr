// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WeaponConstraint.generated.h"


class UWeapon;
/**
 * 
 */
UCLASS(Abstract, Blueprintable, EditInlineNew, CollapseCategories, Config = Input, defaultconfig, configdonotcheckdefaults)
class VANAGANDR_API UWeaponConstraint : public UObject
{
	GENERATED_BODY()
public:
	UWeaponConstraint();
	~UWeaponConstraint();

public:
	UPROPERTY(Config, BlueprintReadOnly, Category = "Contraint Settings")
	bool bShouldTick = true;


public:
	virtual void Begin(TObjectPtr<UWeapon> weapon, UWorld* world);
	virtual void Tick(float DeltaTime, UWeapon* weapon);
	virtual bool CheckConstraint() { return true; }

public:
	//Should probly be removed and just use UObject::GetWorld()
	void SetWorld(TObjectPtr<UWorld> world) { World = world; }
	FORCEINLINE TObjectPtr<UWorld> GetWorld() { return World; }

	void SetWeapon(TObjectPtr<UWeapon> weapon) { Weapon = weapon; }
	FORCEINLINE TObjectPtr<UWeapon> GetWeapon() { return Weapon; }

protected:
	TObjectPtr<UWorld> World;
	TObjectPtr<UWeapon> Weapon;
};


UCLASS(NotBlueprintable, meta = (DisplayName = "Firerate"))
class VANAGANDR_API UFirerateConstraint : public UWeaponConstraint
{
	GENERATED_BODY()
public:
	UFirerateConstraint();
	~UFirerateConstraint();

public:
	UPROPERTY(Config, EditAnywhere, Category = "Firerate")
	float FireRate;
};

UCLASS(NotBlueprintable, meta = (DisplayName = "Magazine"))
class VANAGANDR_API UMagazineConstraint : public UWeaponConstraint
{
	GENERATED_BODY()
public:
	UMagazineConstraint();
	~UMagazineConstraint();

public:
	UPROPERTY(Config, EditAnywhere, Category = "Magazine")
	float MagazineSize;
};

