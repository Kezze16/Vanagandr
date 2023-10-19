// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayableMaps.h"

FString UPlayableMaps::GetRandomMap()
{
	if (PlayableMaps.Num() == 0) return FString();

	int RandomIndex = FMath::RandRange(0, PlayableMaps.Num() - 1);
	return PlayableMaps[RandomIndex].Append(FString("?listen?port=7779"));
}