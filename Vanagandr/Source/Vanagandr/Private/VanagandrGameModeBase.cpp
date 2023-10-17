// Fill out your copyright notice in the Description page of Project Settings.


#include "VanagandrGameModeBase.h"
#include "VanagandrGameInstance.h"
#include "OnlineSubsystemUtils.h"
#include "OnlineSubsystem.h"
#include "Interfaces/OnlineIdentityInterface.h"
#include "GameFramework/OnlineReplStructs.h"


void AVanagandrGameModeBase::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	if (NewPlayer)
	{
		FUniqueNetIdRepl UniqueNetIDRepl;
		if (NewPlayer->IsLocalController())
		{
			ULocalPlayer* LocalPlayer = NewPlayer->GetLocalPlayer();
			if (LocalPlayer)
			{
				UniqueNetIDRepl = LocalPlayer->GetPreferredUniqueNetId();
			}
			else
			{
				UNetConnection* RemoteNetConnection = Cast<UNetConnection>(NewPlayer->Player);
				check(IsValid(RemoteNetConnection));
				UniqueNetIDRepl = RemoteNetConnection->PlayerId;
			}
		}
		else
		{
			UNetConnection* RemoteNetConnection = Cast<UNetConnection>(NewPlayer->Player);
			check(IsValid(RemoteNetConnection));
			UniqueNetIDRepl = RemoteNetConnection->PlayerId;
		}

		FUniqueNetIdPtr UniqueNetId = UniqueNetIDRepl.GetUniqueNetId();
		if (UniqueNetId.IsValid())
		{
			IOnlineSubsystem* Subsystem = Online::GetSubsystem(NewPlayer->GetWorld());
			IOnlineSessionPtr Session = Subsystem->GetSessionInterface();
			bool bRegistrationSuccess = Session->RegisterPlayer(SESSION_NAME, *UniqueNetId, false);
		}
	}
}
