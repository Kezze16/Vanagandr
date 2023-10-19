// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponents/WeaponComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "ActorComponents/WeaponComponents/WeaponConstraint.h"


UWeaponComponent::UWeaponComponent()
{

	PrimaryComponentTick.bCanEverTick = true;

}


void UWeaponComponent::TryFire(APlayerController* Controller, ACharacter* ShootingCharacter, FVector ShootWorldStartPoint, FVector AimDirection)
{
	if (!CheckConstraints())
		return;

	Fire(Controller, ShootingCharacter, FireParams, ShootWorldStartPoint, AimDirection);
}

void UWeaponComponent::Fire(APlayerController* Controller, ACharacter* ShootingCharacter,
	FFireParams& Params, FVector ShootWorldStartPoint, FVector AimDirection)
{
	OnFire.Broadcast(Controller, ShootingCharacter, Params, ShootWorldStartPoint, AimDirection);


}

bool UWeaponComponent::CheckConstraints()
{
	for (int i = 0; i < FireConstraints.Num(); i++)
	{
		if (FireConstraints[i] != nullptr) {
			if (!FireConstraints[i]->CheckConstraint())
				return false;
		} else PRINT(FString("Constraint is nullptr"))
	}

	return true;
}

void UWeaponComponent::BeginPlay()
{
	Super::BeginPlay();

	
}


void UWeaponComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

FFireParams::FFireParams()
{
}
