// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorComponents/PickUpComponent.h"

void UPickUpComponent::BeginPlay()
{

	OnComponentBeginOverlap.AddDynamic(this, &UPickUpComponent::OnSphereBeginOverlap);
}

void UPickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!bCanBePickedUp)
		return;

	ACharacter* Character = Cast<ACharacter>(OtherActor);
	if (Character != nullptr)
	{
		OnPickUp.Broadcast(Character);
	}
}
