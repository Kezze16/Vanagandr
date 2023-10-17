// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "VanagandrGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class VANAGANDR_API AVanagandrGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:

	UFUNCTION()
	virtual void PostLogin(APlayerController* NewPlayer) override;

};
