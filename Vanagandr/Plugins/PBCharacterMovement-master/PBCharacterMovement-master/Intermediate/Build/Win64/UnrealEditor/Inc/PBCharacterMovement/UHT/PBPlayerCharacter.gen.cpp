// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PBCharacterMovement/Public/Character/PBPlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePBPlayerCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	PBCHARACTERMOVEMENT_API UClass* Z_Construct_UClass_APBPlayerCharacter();
	PBCHARACTERMOVEMENT_API UClass* Z_Construct_UClass_APBPlayerCharacter_NoRegister();
	PBCHARACTERMOVEMENT_API UClass* Z_Construct_UClass_UPBMoveStepSound_NoRegister();
	PBCHARACTERMOVEMENT_API UClass* Z_Construct_UClass_UPBPlayerMovement_NoRegister();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	UPackage* Z_Construct_UPackage__Script_PBCharacterMovement();
// End Cross Module References
	DEFINE_FUNCTION(APBPlayerCharacter::execLookUp)
	{
		P_GET_UBOOL(Z_Param_bIsPure);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookUp(Z_Param_bIsPure,Z_Param_Rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APBPlayerCharacter::execTurn)
	{
		P_GET_UBOOL(Z_Param_bIsPure);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Turn(Z_Param_bIsPure,Z_Param_Rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APBPlayerCharacter::execMove)
	{
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Move(Z_Param_Direction,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APBPlayerCharacter::execGetMinSpeedForFallDamage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMinSpeedForFallDamage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APBPlayerCharacter::execToggleNoClip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleNoClip();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APBPlayerCharacter::execGetMovementPtr)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPBPlayerMovement**)Z_Param__Result=P_THIS->GetMovementPtr();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APBPlayerCharacter::execSetAutoBunnyhop)
	{
		P_GET_UBOOL(Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoBunnyhop(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APBPlayerCharacter::execGetAutoBunnyhop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAutoBunnyhop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APBPlayerCharacter::execSetBaseLookUpRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBaseLookUpRate(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APBPlayerCharacter::execGetBaseLookUpRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBaseLookUpRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APBPlayerCharacter::execSetBaseTurnRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBaseTurnRate(Z_Param_val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APBPlayerCharacter::execGetBaseTurnRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBaseTurnRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APBPlayerCharacter::execDoesWantToWalk)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesWantToWalk();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APBPlayerCharacter::execIsSprinting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSprinting();
		P_NATIVE_END;
	}
	void APBPlayerCharacter::StaticRegisterNativesAPBPlayerCharacter()
	{
		UClass* Class = APBPlayerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoesWantToWalk", &APBPlayerCharacter::execDoesWantToWalk },
			{ "GetAutoBunnyhop", &APBPlayerCharacter::execGetAutoBunnyhop },
			{ "GetBaseLookUpRate", &APBPlayerCharacter::execGetBaseLookUpRate },
			{ "GetBaseTurnRate", &APBPlayerCharacter::execGetBaseTurnRate },
			{ "GetMinSpeedForFallDamage", &APBPlayerCharacter::execGetMinSpeedForFallDamage },
			{ "GetMovementPtr", &APBPlayerCharacter::execGetMovementPtr },
			{ "IsSprinting", &APBPlayerCharacter::execIsSprinting },
			{ "LookUp", &APBPlayerCharacter::execLookUp },
			{ "Move", &APBPlayerCharacter::execMove },
			{ "SetAutoBunnyhop", &APBPlayerCharacter::execSetAutoBunnyhop },
			{ "SetBaseLookUpRate", &APBPlayerCharacter::execSetBaseLookUpRate },
			{ "SetBaseTurnRate", &APBPlayerCharacter::execSetBaseTurnRate },
			{ "ToggleNoClip", &APBPlayerCharacter::execToggleNoClip },
			{ "Turn", &APBPlayerCharacter::execTurn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APBPlayerCharacter_DoesWantToWalk_Statics
	{
		struct PBPlayerCharacter_eventDoesWantToWalk_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APBPlayerCharacter_DoesWantToWalk_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PBPlayerCharacter_eventDoesWantToWalk_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APBPlayerCharacter_DoesWantToWalk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PBPlayerCharacter_eventDoesWantToWalk_Parms), &Z_Construct_UFunction_APBPlayerCharacter_DoesWantToWalk_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APBPlayerCharacter_DoesWantToWalk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APBPlayerCharacter_DoesWantToWalk_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APBPlayerCharacter_DoesWantToWalk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PBPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APBPlayerCharacter_DoesWantToWalk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APBPlayerCharacter, nullptr, "DoesWantToWalk", nullptr, nullptr, sizeof(Z_Construct_UFunction_APBPlayerCharacter_DoesWantToWalk_Statics::PBPlayerCharacter_eventDoesWantToWalk_Parms), Z_Construct_UFunction_APBPlayerCharacter_DoesWantToWalk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APBPlayerCharacter_DoesWantToWalk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APBPlayerCharacter_DoesWantToWalk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APBPlayerCharacter_DoesWantToWalk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APBPlayerCharacter_DoesWantToWalk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APBPlayerCharacter_DoesWantToWalk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APBPlayerCharacter_GetAutoBunnyhop_Statics
	{
		struct PBPlayerCharacter_eventGetAutoBunnyhop_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APBPlayerCharacter_GetAutoBunnyhop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PBPlayerCharacter_eventGetAutoBunnyhop_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APBPlayerCharacter_GetAutoBunnyhop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PBPlayerCharacter_eventGetAutoBunnyhop_Parms), &Z_Construct_UFunction_APBPlayerCharacter_GetAutoBunnyhop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APBPlayerCharacter_GetAutoBunnyhop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APBPlayerCharacter_GetAutoBunnyhop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APBPlayerCharacter_GetAutoBunnyhop_Statics::Function_MetaDataParams[] = {
		{ "Category", "PB Getters" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APBPlayerCharacter_GetAutoBunnyhop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APBPlayerCharacter, nullptr, "GetAutoBunnyhop", nullptr, nullptr, sizeof(Z_Construct_UFunction_APBPlayerCharacter_GetAutoBunnyhop_Statics::PBPlayerCharacter_eventGetAutoBunnyhop_Parms), Z_Construct_UFunction_APBPlayerCharacter_GetAutoBunnyhop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APBPlayerCharacter_GetAutoBunnyhop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APBPlayerCharacter_GetAutoBunnyhop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APBPlayerCharacter_GetAutoBunnyhop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APBPlayerCharacter_GetAutoBunnyhop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APBPlayerCharacter_GetAutoBunnyhop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APBPlayerCharacter_GetBaseLookUpRate_Statics
	{
		struct PBPlayerCharacter_eventGetBaseLookUpRate_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APBPlayerCharacter_GetBaseLookUpRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PBPlayerCharacter_eventGetBaseLookUpRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APBPlayerCharacter_GetBaseLookUpRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APBPlayerCharacter_GetBaseLookUpRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APBPlayerCharacter_GetBaseLookUpRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "PB Getters" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APBPlayerCharacter_GetBaseLookUpRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APBPlayerCharacter, nullptr, "GetBaseLookUpRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_APBPlayerCharacter_GetBaseLookUpRate_Statics::PBPlayerCharacter_eventGetBaseLookUpRate_Parms), Z_Construct_UFunction_APBPlayerCharacter_GetBaseLookUpRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APBPlayerCharacter_GetBaseLookUpRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APBPlayerCharacter_GetBaseLookUpRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APBPlayerCharacter_GetBaseLookUpRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APBPlayerCharacter_GetBaseLookUpRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APBPlayerCharacter_GetBaseLookUpRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APBPlayerCharacter_GetBaseTurnRate_Statics
	{
		struct PBPlayerCharacter_eventGetBaseTurnRate_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APBPlayerCharacter_GetBaseTurnRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PBPlayerCharacter_eventGetBaseTurnRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APBPlayerCharacter_GetBaseTurnRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APBPlayerCharacter_GetBaseTurnRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APBPlayerCharacter_GetBaseTurnRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "PB Getters" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APBPlayerCharacter_GetBaseTurnRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APBPlayerCharacter, nullptr, "GetBaseTurnRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_APBPlayerCharacter_GetBaseTurnRate_Statics::PBPlayerCharacter_eventGetBaseTurnRate_Parms), Z_Construct_UFunction_APBPlayerCharacter_GetBaseTurnRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APBPlayerCharacter_GetBaseTurnRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APBPlayerCharacter_GetBaseTurnRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APBPlayerCharacter_GetBaseTurnRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APBPlayerCharacter_GetBaseTurnRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APBPlayerCharacter_GetBaseTurnRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APBPlayerCharacter_GetMinSpeedForFallDamage_Statics
	{
		struct PBPlayerCharacter_eventGetMinSpeedForFallDamage_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APBPlayerCharacter_GetMinSpeedForFallDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PBPlayerCharacter_eventGetMinSpeedForFallDamage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APBPlayerCharacter_GetMinSpeedForFallDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APBPlayerCharacter_GetMinSpeedForFallDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APBPlayerCharacter_GetMinSpeedForFallDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Movement" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APBPlayerCharacter_GetMinSpeedForFallDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APBPlayerCharacter, nullptr, "GetMinSpeedForFallDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_APBPlayerCharacter_GetMinSpeedForFallDamage_Statics::PBPlayerCharacter_eventGetMinSpeedForFallDamage_Parms), Z_Construct_UFunction_APBPlayerCharacter_GetMinSpeedForFallDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APBPlayerCharacter_GetMinSpeedForFallDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APBPlayerCharacter_GetMinSpeedForFallDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APBPlayerCharacter_GetMinSpeedForFallDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APBPlayerCharacter_GetMinSpeedForFallDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APBPlayerCharacter_GetMinSpeedForFallDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APBPlayerCharacter_GetMovementPtr_Statics
	{
		struct PBPlayerCharacter_eventGetMovementPtr_Parms
		{
			UPBPlayerMovement* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APBPlayerCharacter_GetMovementPtr_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APBPlayerCharacter_GetMovementPtr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PBPlayerCharacter_eventGetMovementPtr_Parms, ReturnValue), Z_Construct_UClass_UPBPlayerMovement_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APBPlayerCharacter_GetMovementPtr_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APBPlayerCharacter_GetMovementPtr_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APBPlayerCharacter_GetMovementPtr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APBPlayerCharacter_GetMovementPtr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APBPlayerCharacter_GetMovementPtr_Statics::Function_MetaDataParams[] = {
		{ "Category", "PB Getters" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APBPlayerCharacter_GetMovementPtr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APBPlayerCharacter, nullptr, "GetMovementPtr", nullptr, nullptr, sizeof(Z_Construct_UFunction_APBPlayerCharacter_GetMovementPtr_Statics::PBPlayerCharacter_eventGetMovementPtr_Parms), Z_Construct_UFunction_APBPlayerCharacter_GetMovementPtr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APBPlayerCharacter_GetMovementPtr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APBPlayerCharacter_GetMovementPtr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APBPlayerCharacter_GetMovementPtr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APBPlayerCharacter_GetMovementPtr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APBPlayerCharacter_GetMovementPtr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APBPlayerCharacter_IsSprinting_Statics
	{
		struct PBPlayerCharacter_eventIsSprinting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APBPlayerCharacter_IsSprinting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PBPlayerCharacter_eventIsSprinting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APBPlayerCharacter_IsSprinting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PBPlayerCharacter_eventIsSprinting_Parms), &Z_Construct_UFunction_APBPlayerCharacter_IsSprinting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APBPlayerCharacter_IsSprinting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APBPlayerCharacter_IsSprinting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APBPlayerCharacter_IsSprinting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PBPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APBPlayerCharacter_IsSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APBPlayerCharacter, nullptr, "IsSprinting", nullptr, nullptr, sizeof(Z_Construct_UFunction_APBPlayerCharacter_IsSprinting_Statics::PBPlayerCharacter_eventIsSprinting_Parms), Z_Construct_UFunction_APBPlayerCharacter_IsSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APBPlayerCharacter_IsSprinting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APBPlayerCharacter_IsSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APBPlayerCharacter_IsSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APBPlayerCharacter_IsSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APBPlayerCharacter_IsSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APBPlayerCharacter_LookUp_Statics
	{
		struct PBPlayerCharacter_eventLookUp_Parms
		{
			bool bIsPure;
			float Rate;
		};
		static void NewProp_bIsPure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPure;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APBPlayerCharacter_LookUp_Statics::NewProp_bIsPure_SetBit(void* Obj)
	{
		((PBPlayerCharacter_eventLookUp_Parms*)Obj)->bIsPure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APBPlayerCharacter_LookUp_Statics::NewProp_bIsPure = { "bIsPure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PBPlayerCharacter_eventLookUp_Parms), &Z_Construct_UFunction_APBPlayerCharacter_LookUp_Statics::NewProp_bIsPure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APBPlayerCharacter_LookUp_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PBPlayerCharacter_eventLookUp_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APBPlayerCharacter_LookUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APBPlayerCharacter_LookUp_Statics::NewProp_bIsPure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APBPlayerCharacter_LookUp_Statics::NewProp_Rate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APBPlayerCharacter_LookUp_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called via input to turn look up/down at a given rate.\n\x09 * @param Rate\x09This is a normalized rate, i.e. 1.0 means 100% of desired\n\x09 * turn rate\n\x09 */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerCharacter.h" },
		{ "ToolTip", "Called via input to turn look up/down at a given rate.\n@param Rate  This is a normalized rate, i.e. 1.0 means 100% of desired\nturn rate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APBPlayerCharacter_LookUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APBPlayerCharacter, nullptr, "LookUp", nullptr, nullptr, sizeof(Z_Construct_UFunction_APBPlayerCharacter_LookUp_Statics::PBPlayerCharacter_eventLookUp_Parms), Z_Construct_UFunction_APBPlayerCharacter_LookUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APBPlayerCharacter_LookUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APBPlayerCharacter_LookUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APBPlayerCharacter_LookUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APBPlayerCharacter_LookUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APBPlayerCharacter_LookUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APBPlayerCharacter_Move_Statics
	{
		struct PBPlayerCharacter_eventMove_Parms
		{
			FVector Direction;
			float Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APBPlayerCharacter_Move_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PBPlayerCharacter_eventMove_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APBPlayerCharacter_Move_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PBPlayerCharacter_eventMove_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APBPlayerCharacter_Move_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APBPlayerCharacter_Move_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APBPlayerCharacter_Move_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APBPlayerCharacter_Move_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Handles stafing movement, left and right */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerCharacter.h" },
		{ "ToolTip", "Handles stafing movement, left and right" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APBPlayerCharacter_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APBPlayerCharacter, nullptr, "Move", nullptr, nullptr, sizeof(Z_Construct_UFunction_APBPlayerCharacter_Move_Statics::PBPlayerCharacter_eventMove_Parms), Z_Construct_UFunction_APBPlayerCharacter_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APBPlayerCharacter_Move_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APBPlayerCharacter_Move_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APBPlayerCharacter_Move_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APBPlayerCharacter_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APBPlayerCharacter_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APBPlayerCharacter_SetAutoBunnyhop_Statics
	{
		struct PBPlayerCharacter_eventSetAutoBunnyhop_Parms
		{
			bool val;
		};
		static void NewProp_val_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APBPlayerCharacter_SetAutoBunnyhop_Statics::NewProp_val_SetBit(void* Obj)
	{
		((PBPlayerCharacter_eventSetAutoBunnyhop_Parms*)Obj)->val = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APBPlayerCharacter_SetAutoBunnyhop_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PBPlayerCharacter_eventSetAutoBunnyhop_Parms), &Z_Construct_UFunction_APBPlayerCharacter_SetAutoBunnyhop_Statics::NewProp_val_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APBPlayerCharacter_SetAutoBunnyhop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APBPlayerCharacter_SetAutoBunnyhop_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APBPlayerCharacter_SetAutoBunnyhop_Statics::Function_MetaDataParams[] = {
		{ "Category", "PB Setters" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APBPlayerCharacter_SetAutoBunnyhop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APBPlayerCharacter, nullptr, "SetAutoBunnyhop", nullptr, nullptr, sizeof(Z_Construct_UFunction_APBPlayerCharacter_SetAutoBunnyhop_Statics::PBPlayerCharacter_eventSetAutoBunnyhop_Parms), Z_Construct_UFunction_APBPlayerCharacter_SetAutoBunnyhop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APBPlayerCharacter_SetAutoBunnyhop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APBPlayerCharacter_SetAutoBunnyhop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APBPlayerCharacter_SetAutoBunnyhop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APBPlayerCharacter_SetAutoBunnyhop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APBPlayerCharacter_SetAutoBunnyhop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APBPlayerCharacter_SetBaseLookUpRate_Statics
	{
		struct PBPlayerCharacter_eventSetBaseLookUpRate_Parms
		{
			float val;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APBPlayerCharacter_SetBaseLookUpRate_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PBPlayerCharacter_eventSetBaseLookUpRate_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APBPlayerCharacter_SetBaseLookUpRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APBPlayerCharacter_SetBaseLookUpRate_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APBPlayerCharacter_SetBaseLookUpRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "PB Setters" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APBPlayerCharacter_SetBaseLookUpRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APBPlayerCharacter, nullptr, "SetBaseLookUpRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_APBPlayerCharacter_SetBaseLookUpRate_Statics::PBPlayerCharacter_eventSetBaseLookUpRate_Parms), Z_Construct_UFunction_APBPlayerCharacter_SetBaseLookUpRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APBPlayerCharacter_SetBaseLookUpRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APBPlayerCharacter_SetBaseLookUpRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APBPlayerCharacter_SetBaseLookUpRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APBPlayerCharacter_SetBaseLookUpRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APBPlayerCharacter_SetBaseLookUpRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APBPlayerCharacter_SetBaseTurnRate_Statics
	{
		struct PBPlayerCharacter_eventSetBaseTurnRate_Parms
		{
			float val;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APBPlayerCharacter_SetBaseTurnRate_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PBPlayerCharacter_eventSetBaseTurnRate_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APBPlayerCharacter_SetBaseTurnRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APBPlayerCharacter_SetBaseTurnRate_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APBPlayerCharacter_SetBaseTurnRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "PB Setters" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APBPlayerCharacter_SetBaseTurnRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APBPlayerCharacter, nullptr, "SetBaseTurnRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_APBPlayerCharacter_SetBaseTurnRate_Statics::PBPlayerCharacter_eventSetBaseTurnRate_Parms), Z_Construct_UFunction_APBPlayerCharacter_SetBaseTurnRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APBPlayerCharacter_SetBaseTurnRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APBPlayerCharacter_SetBaseTurnRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APBPlayerCharacter_SetBaseTurnRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APBPlayerCharacter_SetBaseTurnRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APBPlayerCharacter_SetBaseTurnRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APBPlayerCharacter_ToggleNoClip_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APBPlayerCharacter_ToggleNoClip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/PBPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APBPlayerCharacter_ToggleNoClip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APBPlayerCharacter, nullptr, "ToggleNoClip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APBPlayerCharacter_ToggleNoClip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APBPlayerCharacter_ToggleNoClip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APBPlayerCharacter_ToggleNoClip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APBPlayerCharacter_ToggleNoClip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APBPlayerCharacter_Turn_Statics
	{
		struct PBPlayerCharacter_eventTurn_Parms
		{
			bool bIsPure;
			float Rate;
		};
		static void NewProp_bIsPure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPure;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APBPlayerCharacter_Turn_Statics::NewProp_bIsPure_SetBit(void* Obj)
	{
		((PBPlayerCharacter_eventTurn_Parms*)Obj)->bIsPure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APBPlayerCharacter_Turn_Statics::NewProp_bIsPure = { "bIsPure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PBPlayerCharacter_eventTurn_Parms), &Z_Construct_UFunction_APBPlayerCharacter_Turn_Statics::NewProp_bIsPure_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APBPlayerCharacter_Turn_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PBPlayerCharacter_eventTurn_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APBPlayerCharacter_Turn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APBPlayerCharacter_Turn_Statics::NewProp_bIsPure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APBPlayerCharacter_Turn_Statics::NewProp_Rate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APBPlayerCharacter_Turn_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called via input to turn at a given rate.\n\x09 * @param Rate\x09This is a normalized rate, i.e. 1.0 means 100% of desired\n\x09 * turn rate\n\x09 */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerCharacter.h" },
		{ "ToolTip", "Called via input to turn at a given rate.\n@param Rate  This is a normalized rate, i.e. 1.0 means 100% of desired\nturn rate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APBPlayerCharacter_Turn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APBPlayerCharacter, nullptr, "Turn", nullptr, nullptr, sizeof(Z_Construct_UFunction_APBPlayerCharacter_Turn_Statics::PBPlayerCharacter_eventTurn_Parms), Z_Construct_UFunction_APBPlayerCharacter_Turn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APBPlayerCharacter_Turn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APBPlayerCharacter_Turn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APBPlayerCharacter_Turn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APBPlayerCharacter_Turn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APBPlayerCharacter_Turn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APBPlayerCharacter);
	UClass* Z_Construct_UClass_APBPlayerCharacter_NoRegister()
	{
		return APBPlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_APBPlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoBunnyhop_MetaData[];
#endif
		static void NewProp_bAutoBunnyhop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoBunnyhop;
		static const UECodeGen_Private::FClassPropertyParams NewProp_MoveStepSounds_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MoveStepSounds_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveStepSounds_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MoveStepSounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLandBounceSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinLandBounceSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeedForFallDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeedForFallDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapDamageMomentumZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CapDamageMomentumZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APBPlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PBCharacterMovement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APBPlayerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APBPlayerCharacter_DoesWantToWalk, "DoesWantToWalk" }, // 2793366103
		{ &Z_Construct_UFunction_APBPlayerCharacter_GetAutoBunnyhop, "GetAutoBunnyhop" }, // 1934773322
		{ &Z_Construct_UFunction_APBPlayerCharacter_GetBaseLookUpRate, "GetBaseLookUpRate" }, // 2493090770
		{ &Z_Construct_UFunction_APBPlayerCharacter_GetBaseTurnRate, "GetBaseTurnRate" }, // 476327050
		{ &Z_Construct_UFunction_APBPlayerCharacter_GetMinSpeedForFallDamage, "GetMinSpeedForFallDamage" }, // 3307559882
		{ &Z_Construct_UFunction_APBPlayerCharacter_GetMovementPtr, "GetMovementPtr" }, // 4179643926
		{ &Z_Construct_UFunction_APBPlayerCharacter_IsSprinting, "IsSprinting" }, // 1564332847
		{ &Z_Construct_UFunction_APBPlayerCharacter_LookUp, "LookUp" }, // 615747227
		{ &Z_Construct_UFunction_APBPlayerCharacter_Move, "Move" }, // 4202094040
		{ &Z_Construct_UFunction_APBPlayerCharacter_SetAutoBunnyhop, "SetAutoBunnyhop" }, // 2101361608
		{ &Z_Construct_UFunction_APBPlayerCharacter_SetBaseLookUpRate, "SetBaseLookUpRate" }, // 1348099358
		{ &Z_Construct_UFunction_APBPlayerCharacter_SetBaseTurnRate, "SetBaseTurnRate" }, // 1667253150
		{ &Z_Construct_UFunction_APBPlayerCharacter_ToggleNoClip, "ToggleNoClip" }, // 1735234410
		{ &Z_Construct_UFunction_APBPlayerCharacter_Turn, "Turn" }, // 352565963
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APBPlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/PBPlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PB Player|Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APBPlayerCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PB Player|Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate.*/" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APBPlayerCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_bAutoBunnyhop_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PB Player|Gameplay" },
		{ "Comment", "/** Automatic bunnyhopping */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerCharacter.h" },
		{ "ToolTip", "Automatic bunnyhopping" },
	};
#endif
	void Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_bAutoBunnyhop_SetBit(void* Obj)
	{
		((APBPlayerCharacter*)Obj)->bAutoBunnyhop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_bAutoBunnyhop = { "bAutoBunnyhop", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(APBPlayerCharacter), &Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_bAutoBunnyhop_SetBit, METADATA_PARAMS(Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_bAutoBunnyhop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_bAutoBunnyhop_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_MoveStepSounds_ValueProp = { "MoveStepSounds", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UPBMoveStepSound_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_MoveStepSounds_Key_KeyProp = { "MoveStepSounds_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) }; // 455643187
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_MoveStepSounds_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PB Player|Sounds" },
		{ "Comment", "/** Move step sounds by physical surface */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerCharacter.h" },
		{ "ToolTip", "Move step sounds by physical surface" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_MoveStepSounds = { "MoveStepSounds", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APBPlayerCharacter, MoveStepSounds), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_MoveStepSounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_MoveStepSounds_MetaData)) }; // 455643187
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_MinLandBounceSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PB Player|Damage" },
		{ "Comment", "/** Minimum speed to play the camera shake for landing */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerCharacter.h" },
		{ "ToolTip", "Minimum speed to play the camera shake for landing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_MinLandBounceSpeed = { "MinLandBounceSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APBPlayerCharacter, MinLandBounceSpeed), METADATA_PARAMS(Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_MinLandBounceSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_MinLandBounceSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_MinSpeedForFallDamage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PB Player|Damage" },
		{ "Comment", "/** Don't take damage below this speed - so jumping doesn't damage */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerCharacter.h" },
		{ "ToolTip", "Don't take damage below this speed - so jumping doesn't damage" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_MinSpeedForFallDamage = { "MinSpeedForFallDamage", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APBPlayerCharacter, MinSpeedForFallDamage), METADATA_PARAMS(Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_MinSpeedForFallDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_MinSpeedForFallDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_CapDamageMomentumZ_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PB Player|Damage" },
		{ "Comment", "// In HL2, the player has the Z component for applying momentum to the capsule capped\n" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerCharacter.h" },
		{ "ToolTip", "In HL2, the player has the Z component for applying momentum to the capsule capped" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_CapDamageMomentumZ = { "CapDamageMomentumZ", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APBPlayerCharacter, CapDamageMomentumZ), METADATA_PARAMS(Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_CapDamageMomentumZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_CapDamageMomentumZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APBPlayerCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_BaseTurnRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_BaseLookUpRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_bAutoBunnyhop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_MoveStepSounds_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_MoveStepSounds_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_MoveStepSounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_MinLandBounceSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_MinSpeedForFallDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APBPlayerCharacter_Statics::NewProp_CapDamageMomentumZ,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APBPlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APBPlayerCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APBPlayerCharacter_Statics::ClassParams = {
		&APBPlayerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APBPlayerCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APBPlayerCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APBPlayerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APBPlayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APBPlayerCharacter()
	{
		if (!Z_Registration_Info_UClass_APBPlayerCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APBPlayerCharacter.OuterSingleton, Z_Construct_UClass_APBPlayerCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APBPlayerCharacter.OuterSingleton;
	}
	template<> PBCHARACTERMOVEMENT_API UClass* StaticClass<APBPlayerCharacter>()
	{
		return APBPlayerCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APBPlayerCharacter);
	APBPlayerCharacter::~APBPlayerCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APBPlayerCharacter, APBPlayerCharacter::StaticClass, TEXT("APBPlayerCharacter"), &Z_Registration_Info_UClass_APBPlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APBPlayerCharacter), 3708155694U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerCharacter_h_1963762223(TEXT("/Script/PBCharacterMovement"),
		Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
