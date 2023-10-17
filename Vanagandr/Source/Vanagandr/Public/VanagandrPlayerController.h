// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "VanagandrPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class VANAGANDR_API AVanagandrPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void OnNetCleanup(UNetConnection* Connection) override;
	
};
