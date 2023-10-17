// Fill out your copyright notice in the Description page of Project Settings.

#include "VanagandrGameInstance.h"
#include "OnlineSubsystemUtils.h"
#include "OnlineSubsystem.h"
#include "Interfaces/OnlineIdentityInterface.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"

void UVanagandrGameInstance::LoginWithEOS(FString ID, FString Token, FString LoginType)
{
	IOnlineSubsystem* Subsystem = Online::GetSubsystem(GetWorld());
	if (!Subsystem) return;
	IOnlineIdentityPtr Identity = Subsystem->GetIdentityInterface();
	if (!Identity) return;

	FOnlineAccountCredentials Credentials;
	Credentials.Id = ID;
	Credentials.Token = Token;
	Credentials.Type = LoginType;
	if (LoginWithEOSReturnHandle.IsValid())
	{
		Identity->OnLoginCompleteDelegates->Remove(LoginWithEOSReturnHandle);
		LoginWithEOSReturnHandle.Reset();
	}
	LoginWithEOSReturnHandle = Identity->OnLoginCompleteDelegates->AddUObject(this, &UVanagandrGameInstance::LoginWithEOS_Return);
	Identity->Login(0, Credentials);
}

void UVanagandrGameInstance::LoginWithEOS_Return(int32 LocalUserNum, bool bWasSuccessful, const FUniqueNetId& UserId, const FString& Error)
{
	if (!bWasSuccessful)
	{
		UKismetSystemLibrary::PrintString(this, FString("Fail: ") + Error);
	}

	IOnlineSubsystem* Subsystem = Online::GetSubsystem(GetWorld());
	if (!Subsystem) return;
	IOnlineIdentityPtr Identity = Subsystem->GetIdentityInterface();
	if (!Identity) return;
	Identity->OnLoginCompleteDelegates->Remove(LoginWithEOSReturnHandle);
	LoginWithEOSReturnHandle.Reset();
}

FString UVanagandrGameInstance::GetPlayerUsername()
{
	IOnlineSubsystem* Subsystem = Online::GetSubsystem(GetWorld());
	if (!Subsystem) return FString();
	IOnlineIdentityPtr Identity = Subsystem->GetIdentityInterface();
	if (!Identity) return FString();

	if (Identity->GetLoginStatus(0) == ELoginStatus::LoggedIn)
	{
		return Identity->GetPlayerNickname(0);
	}

	return FString();
}

bool UVanagandrGameInstance::IsPlayerLoggedIn()
{
	IOnlineSubsystem* Subsystem = Online::GetSubsystem(GetWorld());
	if (!Subsystem) return false;
	IOnlineIdentityPtr Identity = Subsystem->GetIdentityInterface();
	if (!Identity) return false;

	return Identity->GetLoginStatus(0) == ELoginStatus::LoggedIn;
}

void UVanagandrGameInstance::CreateEOSSession(bool bIsDedicated, bool bIsLanServer, int32 NumberOfPublicConnections, FString SessionTitle)
{
	IOnlineSubsystem* Subsystem = Online::GetSubsystem(GetWorld());
	if (!Subsystem) return;
	IOnlineSessionPtr Session = Subsystem->GetSessionInterface();
	if (!Session) return;

	FOnlineSessionSettings SessionSettings;
	SessionSettings.NumPublicConnections = NumberOfPublicConnections;
	SessionSettings.bIsDedicated = bIsDedicated;
	SessionSettings.bIsLANMatch = bIsLanServer;
	SessionSettings.bAllowInvites = true;
	SessionSettings.bUseLobbiesIfAvailable = false;
	SessionSettings.bUsesPresence = false;
	SessionSettings.bShouldAdvertise = true;
	SessionSettings.Set(SEARCH_KEYWORDS, FString("AllSessions"), EOnlineDataAdvertisementType::ViaOnlineService);
	SessionSettings.Set(FName(TEXT("SessionTitle")), SessionTitle, EOnlineDataAdvertisementType::ViaOnlineService);

	Session->OnCreateSessionCompleteDelegates.AddUObject(this, &UVanagandrGameInstance::OnCreateSessionCompleted);
	Session->CreateSession(0, SESSION_NAME, SessionSettings);
}

void UVanagandrGameInstance::OnCreateSessionCompleted(FName SessionName, bool bWasSuccessful)
{
	if (bWasSuccessful)
	{
		GetWorld()->ServerTravel(OpenLevelText);
	}
}

void UVanagandrGameInstance::FindSessions()
{
	IOnlineSubsystem* Subsystem = Online::GetSubsystem(GetWorld());
	if (!Subsystem) return;
	IOnlineSessionPtr Session = Subsystem->GetSessionInterface();
	if (!Session) return;

	SessionSearch = MakeShareable(new FOnlineSessionSearch());
	SessionSearch->bIsLanQuery = false;
	SessionSearch->MaxSearchResults = 20;
	SessionSearch->QuerySettings.SearchParams.Empty();
	Session->OnFindSessionsCompleteDelegates.AddUObject(this, &UVanagandrGameInstance::OnFindSessionCompleted);
	Session->FindSessions(0, SessionSearch.ToSharedRef());
}

void UVanagandrGameInstance::OnFindSessionCompleted(bool bWasSuccessful)
{
	if (bWasSuccessful)
	{
		IOnlineSubsystem* Subsystem = Online::GetSubsystem(GetWorld());
		if (!Subsystem) return;
		IOnlineSessionPtr Session = Subsystem->GetSessionInterface();
		if (!Session) return;


		if (SessionSearch->SearchResults.Num() > 0) // && SessionSearch->SearchResults[0].IsValid()
		{
			SessionSearchResults.Sessions.Empty();
			for (int i = 0; i < FMath::Min(10, SessionSearch->SearchResults.Num()); i++)
			{
				FSessionDetails Details;
				FString GetName;
				SessionSearch->SearchResults[i].Session.SessionSettings.Get<FString>(FName(TEXT("SessionTitle")), GetName);
				Details.SessionName = GetName;
				SessionSearchResults.Sessions.Add(Details);
			}
		}
		else
		{
			PRINT(FString("No sessions to join"))
		}
	}
	else
	{
		PRINT(FString("Failed to search"))
	}
}

void UVanagandrGameInstance::JoinEoSSession(int Index)
{
	IOnlineSubsystem* Subsystem = Online::GetSubsystem(GetWorld());
	if (!Subsystem) return;
	IOnlineSessionPtr Session = Subsystem->GetSessionInterface();
	if (!Session) return;

	if (SessionSearch->SearchResults.Num() > 0 && SessionSearch->SearchResults.Num() > Index)
	{
		FString SessionName;
		SessionSearch->SearchResults[Index].Session.SessionSettings.Get<FString>(FName(TEXT("SessionTitle")), SessionName);
		Session->OnJoinSessionCompleteDelegates.AddUObject(this, &UVanagandrGameInstance::OnJoinEoSSessionCompleted);
		Session->JoinSession(0, SESSION_NAME, SessionSearch->SearchResults[Index]);
	}
}

void UVanagandrGameInstance::DestroyEoSSession()
{
	IOnlineSubsystem* Subsystem = Online::GetSubsystem(GetWorld());
	if (!Subsystem) return;
	IOnlineSessionPtr Session = Subsystem->GetSessionInterface();
	if (!Session) return;

	Session->OnDestroySessionCompleteDelegates.AddUObject(this, &UVanagandrGameInstance::OnDestroySessionCompleted);
	Session->DestroySession(SESSION_NAME);
}

void UVanagandrGameInstance::OnDestroySessionCompleted(FName SessionName, bool bWasSuccessful)
{
	PRINT(FString("Destroyed Session: ") + SessionName.ToString())

		IOnlineSubsystem* Subsystem = Online::GetSubsystem(GetWorld());
	if (!Subsystem) return;
	IOnlineSessionPtr Session = Subsystem->GetSessionInterface();
	if (!Session) return;

	Session->ClearOnDestroySessionCompleteDelegates(this);

}

void UVanagandrGameInstance::OnJoinEoSSessionCompleted(FName SessionName, EOnJoinSessionCompleteResult::Type Result)
{
	if (Result == EOnJoinSessionCompleteResult::Success)
	{
		if (APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0))
		{
			IOnlineSubsystem* Subsystem = Online::GetSubsystem(GetWorld());
			if (!Subsystem) return;
			IOnlineSessionPtr Session = Subsystem->GetSessionInterface();
			if (!Session) return;

			FString JoinAddress;
			Session->GetResolvedConnectString(SessionName, JoinAddress);
			if (!JoinAddress.IsEmpty())
			{
				UKismetSystemLibrary::PrintString(this, FString("Join address: ") + JoinAddress);
				PlayerController->ClientTravel(JoinAddress, ETravelType::TRAVEL_Absolute);
			}
		}
	}
	else
	{
		PRINT(FString("Couldn't join session"))
	}
}