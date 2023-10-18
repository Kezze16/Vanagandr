// Fill out your copyright notice in the Description page of Project Settings.


#include "SpeedCalculator.h"

// Sets default values
ASpeedCalculator::ASpeedCalculator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpeedCalculator::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpeedCalculator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

