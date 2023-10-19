// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "OnlineSessionSettings.h"
#include "Delegates/IDelegateInstance.h"
#include "VanagandrGameInstance.generated.h"


#define SESSION_NAME FName("GameSession")
#define PRINT(msg) UKismetSystemLibrary::PrintString(this, msg);

USTRUCT(BlueprintType)
struct FSessionDetails {
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
		FString SessionName;
};

USTRUCT(BlueprintType)
struct FSessionSearchResults {
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
		TArray<FSessionDetails> Sessions;
};

/**
 * 
 */
UCLASS()
class VANAGANDR_API UVanagandrGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

#pragma region Logging_In_Logic
	UFUNCTION(BlueprintCallable, Category = "EOS")
		void LoginWithEOS(FString ID, FString Token, FString LoginType);

	void LoginWithEOS_Return(int32 LocalUserNum, bool bWasSuccessful, const FUniqueNetId& UserId, const FString& Error);
	FDelegateHandle LoginWithEOSReturnHandle;

	UFUNCTION(BlueprintCallable, Category = "EOS")
		bool IsWaitingForLoginAttempt() { return LoginWithEOSReturnHandle.IsValid(); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOS")
		bool IsPlayerLoggedIn();

#pragma endregion Logging_In_Logic

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOS")
		FString GetPlayerUsername();

	UFUNCTION(BlueprintCallable, Category = "EOS")
		void CreateEOSSession(bool bIsDedicated, bool bIsLanServer, int32 NumberOfPublicConnections, FString SessionTitle);

	UFUNCTION(BlueprintCallable, Category = "EOS")
		void FindSessions();

	UPROPERTY(BlueprintReadOnly, Category = "EOS")
		FSessionSearchResults SessionSearchResults;

	UFUNCTION(BlueprintCallable, Category = "EOS")
		void JoinEoSSession(int Index);

	UFUNCTION(BlueprintCallable, Category = "EOS")
		void DestroyEoSSession();

	TSharedPtr<FOnlineSessionSearch> SessionSearch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EOS")
	FString OpenLevelText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EOS")
	FString MainMenuURL;

	UFUNCTION(BlueprintCallable, Category = "EOS")
	void SetSessionInProgress(bool bIsInProgress);

	//Delegate functions
	void OnCreateSessionCompleted(FName SessionName, bool bWasSuccessful);
	void OnFindSessionCompleted(bool bWasSuccessful);
	void OnJoinEoSSessionCompleted(FName SessionName, EOnJoinSessionCompleteResult::Type Result);
	void OnDestroySessionCompleted(FName SessionName, bool bWasSuccessful);
	void OnEndSessionCompleted(FName SessionName, bool bWasSuccessful);
	void OnStartSessionCompleted(FName SessionName, bool bWasSuccessful);
	
};
