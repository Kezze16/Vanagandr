// Fill out your copyright notice in the Description page of Project Settings.


#include "VanagandrPlayerController.h"
#include "VanagandrGameInstance.h"

void AVanagandrPlayerController::OnNetCleanup(UNetConnection* Connection)
{
	UVanagandrGameInstance* GameInstance = Cast<UVanagandrGameInstance>(GetWorld()->GetGameInstance());

	if (GameInstance)
	{
		GameInstance->DestroyEoSSession();
	}

	Super::OnNetCleanup(Connection);
}