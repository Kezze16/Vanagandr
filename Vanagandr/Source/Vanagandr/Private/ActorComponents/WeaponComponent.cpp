// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponents/WeaponComponent.h"
#include "Components/SkeletalMeshComponent.h"


UWeaponComponent::UWeaponComponent()
{

	PrimaryComponentTick.bCanEverTick = true;

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
