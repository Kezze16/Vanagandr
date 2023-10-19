// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PlayableMaps.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class VANAGANDR_API UPlayableMaps : public UDataAsset
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> PlayableMaps;

	UFUNCTION(BlueprintCallable)
	FString GetRandomMap();

};
