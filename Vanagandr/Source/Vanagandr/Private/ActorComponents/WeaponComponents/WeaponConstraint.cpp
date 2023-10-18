// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponents/WeaponComponents/WeaponConstraint.h"


/////////////////////////// Weapon Constraint ///////////////////////////

UWeaponConstraint::UWeaponConstraint()
{
}

UWeaponConstraint::~UWeaponConstraint()
{
}

void UWeaponConstraint::Tick(float DeltaTime, UWeapon* weapon)
{
	if (!bShouldTick)
		return;
}

/////////////////////////// Firerate Constrain ///////////////////////////

UFirerateConstraint::UFirerateConstraint()
{
}

UFirerateConstraint::~UFirerateConstraint()
{
}

/////////////////////////// Magazine Constraint ///////////////////////////


UMagazineConstraint::UMagazineConstraint()
{
}

UMagazineConstraint::~UMagazineConstraint()
{
}
