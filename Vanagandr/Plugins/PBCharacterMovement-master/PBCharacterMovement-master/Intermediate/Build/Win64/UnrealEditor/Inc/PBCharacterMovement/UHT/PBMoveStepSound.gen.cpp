// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PBCharacterMovement/Public/Sound/PBMoveStepSound.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePBMoveStepSound() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	PBCHARACTERMOVEMENT_API UClass* Z_Construct_UClass_UPBMoveStepSound();
	PBCHARACTERMOVEMENT_API UClass* Z_Construct_UClass_UPBMoveStepSound_NoRegister();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	UPackage* Z_Construct_UPackage__Script_PBCharacterMovement();
// End Cross Module References
	DEFINE_FUNCTION(UPBMoveStepSound::execGetSprintVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSprintVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPBMoveStepSound::execGetWalkVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWalkVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPBMoveStepSound::execGetLandSounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<USoundCue*>*)Z_Param__Result=P_THIS->GetLandSounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPBMoveStepSound::execGetJumpSounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<USoundCue*>*)Z_Param__Result=P_THIS->GetJumpSounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPBMoveStepSound::execGetSprintRightSounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<USoundCue*>*)Z_Param__Result=P_THIS->GetSprintRightSounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPBMoveStepSound::execGetSprintLeftSounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<USoundCue*>*)Z_Param__Result=P_THIS->GetSprintLeftSounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPBMoveStepSound::execGetStepRightSounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<USoundCue*>*)Z_Param__Result=P_THIS->GetStepRightSounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPBMoveStepSound::execGetStepLeftSounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<USoundCue*>*)Z_Param__Result=P_THIS->GetStepLeftSounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPBMoveStepSound::execGetSurfaceMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EPhysicalSurface>*)Z_Param__Result=P_THIS->GetSurfaceMaterial();
		P_NATIVE_END;
	}
	void UPBMoveStepSound::StaticRegisterNativesUPBMoveStepSound()
	{
		UClass* Class = UPBMoveStepSound::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetJumpSounds", &UPBMoveStepSound::execGetJumpSounds },
			{ "GetLandSounds", &UPBMoveStepSound::execGetLandSounds },
			{ "GetSprintLeftSounds", &UPBMoveStepSound::execGetSprintLeftSounds },
			{ "GetSprintRightSounds", &UPBMoveStepSound::execGetSprintRightSounds },
			{ "GetSprintVolume", &UPBMoveStepSound::execGetSprintVolume },
			{ "GetStepLeftSounds", &UPBMoveStepSound::execGetStepLeftSounds },
			{ "GetStepRightSounds", &UPBMoveStepSound::execGetStepRightSounds },
			{ "GetSurfaceMaterial", &UPBMoveStepSound::execGetSurfaceMaterial },
			{ "GetWalkVolume", &UPBMoveStepSound::execGetWalkVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPBMoveStepSound_GetJumpSounds_Statics
	{
		struct PBMoveStepSound_eventGetJumpSounds_Parms
		{
			TArray<USoundCue*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPBMoveStepSound_GetJumpSounds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPBMoveStepSound_GetJumpSounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PBMoveStepSound_eventGetJumpSounds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPBMoveStepSound_GetJumpSounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPBMoveStepSound_GetJumpSounds_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPBMoveStepSound_GetJumpSounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPBMoveStepSound_GetJumpSounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sound/PBMoveStepSound.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPBMoveStepSound_GetJumpSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPBMoveStepSound, nullptr, "GetJumpSounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPBMoveStepSound_GetJumpSounds_Statics::PBMoveStepSound_eventGetJumpSounds_Parms), Z_Construct_UFunction_UPBMoveStepSound_GetJumpSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPBMoveStepSound_GetJumpSounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPBMoveStepSound_GetJumpSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPBMoveStepSound_GetJumpSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPBMoveStepSound_GetJumpSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPBMoveStepSound_GetJumpSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPBMoveStepSound_GetLandSounds_Statics
	{
		struct PBMoveStepSound_eventGetLandSounds_Parms
		{
			TArray<USoundCue*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPBMoveStepSound_GetLandSounds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPBMoveStepSound_GetLandSounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PBMoveStepSound_eventGetLandSounds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPBMoveStepSound_GetLandSounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPBMoveStepSound_GetLandSounds_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPBMoveStepSound_GetLandSounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPBMoveStepSound_GetLandSounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sound/PBMoveStepSound.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPBMoveStepSound_GetLandSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPBMoveStepSound, nullptr, "GetLandSounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPBMoveStepSound_GetLandSounds_Statics::PBMoveStepSound_eventGetLandSounds_Parms), Z_Construct_UFunction_UPBMoveStepSound_GetLandSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPBMoveStepSound_GetLandSounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPBMoveStepSound_GetLandSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPBMoveStepSound_GetLandSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPBMoveStepSound_GetLandSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPBMoveStepSound_GetLandSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPBMoveStepSound_GetSprintLeftSounds_Statics
	{
		struct PBMoveStepSound_eventGetSprintLeftSounds_Parms
		{
			TArray<USoundCue*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPBMoveStepSound_GetSprintLeftSounds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPBMoveStepSound_GetSprintLeftSounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PBMoveStepSound_eventGetSprintLeftSounds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPBMoveStepSound_GetSprintLeftSounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPBMoveStepSound_GetSprintLeftSounds_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPBMoveStepSound_GetSprintLeftSounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPBMoveStepSound_GetSprintLeftSounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sound/PBMoveStepSound.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPBMoveStepSound_GetSprintLeftSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPBMoveStepSound, nullptr, "GetSprintLeftSounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPBMoveStepSound_GetSprintLeftSounds_Statics::PBMoveStepSound_eventGetSprintLeftSounds_Parms), Z_Construct_UFunction_UPBMoveStepSound_GetSprintLeftSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPBMoveStepSound_GetSprintLeftSounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPBMoveStepSound_GetSprintLeftSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPBMoveStepSound_GetSprintLeftSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPBMoveStepSound_GetSprintLeftSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPBMoveStepSound_GetSprintLeftSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPBMoveStepSound_GetSprintRightSounds_Statics
	{
		struct PBMoveStepSound_eventGetSprintRightSounds_Parms
		{
			TArray<USoundCue*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPBMoveStepSound_GetSprintRightSounds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPBMoveStepSound_GetSprintRightSounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PBMoveStepSound_eventGetSprintRightSounds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPBMoveStepSound_GetSprintRightSounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPBMoveStepSound_GetSprintRightSounds_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPBMoveStepSound_GetSprintRightSounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPBMoveStepSound_GetSprintRightSounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sound/PBMoveStepSound.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPBMoveStepSound_GetSprintRightSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPBMoveStepSound, nullptr, "GetSprintRightSounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPBMoveStepSound_GetSprintRightSounds_Statics::PBMoveStepSound_eventGetSprintRightSounds_Parms), Z_Construct_UFunction_UPBMoveStepSound_GetSprintRightSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPBMoveStepSound_GetSprintRightSounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPBMoveStepSound_GetSprintRightSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPBMoveStepSound_GetSprintRightSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPBMoveStepSound_GetSprintRightSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPBMoveStepSound_GetSprintRightSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPBMoveStepSound_GetSprintVolume_Statics
	{
		struct PBMoveStepSound_eventGetSprintVolume_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPBMoveStepSound_GetSprintVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PBMoveStepSound_eventGetSprintVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPBMoveStepSound_GetSprintVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPBMoveStepSound_GetSprintVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPBMoveStepSound_GetSprintVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sound/PBMoveStepSound.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPBMoveStepSound_GetSprintVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPBMoveStepSound, nullptr, "GetSprintVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPBMoveStepSound_GetSprintVolume_Statics::PBMoveStepSound_eventGetSprintVolume_Parms), Z_Construct_UFunction_UPBMoveStepSound_GetSprintVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPBMoveStepSound_GetSprintVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPBMoveStepSound_GetSprintVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPBMoveStepSound_GetSprintVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPBMoveStepSound_GetSprintVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPBMoveStepSound_GetSprintVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPBMoveStepSound_GetStepLeftSounds_Statics
	{
		struct PBMoveStepSound_eventGetStepLeftSounds_Parms
		{
			TArray<USoundCue*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPBMoveStepSound_GetStepLeftSounds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPBMoveStepSound_GetStepLeftSounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PBMoveStepSound_eventGetStepLeftSounds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPBMoveStepSound_GetStepLeftSounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPBMoveStepSound_GetStepLeftSounds_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPBMoveStepSound_GetStepLeftSounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPBMoveStepSound_GetStepLeftSounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sound/PBMoveStepSound.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPBMoveStepSound_GetStepLeftSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPBMoveStepSound, nullptr, "GetStepLeftSounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPBMoveStepSound_GetStepLeftSounds_Statics::PBMoveStepSound_eventGetStepLeftSounds_Parms), Z_Construct_UFunction_UPBMoveStepSound_GetStepLeftSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPBMoveStepSound_GetStepLeftSounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPBMoveStepSound_GetStepLeftSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPBMoveStepSound_GetStepLeftSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPBMoveStepSound_GetStepLeftSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPBMoveStepSound_GetStepLeftSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPBMoveStepSound_GetStepRightSounds_Statics
	{
		struct PBMoveStepSound_eventGetStepRightSounds_Parms
		{
			TArray<USoundCue*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPBMoveStepSound_GetStepRightSounds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPBMoveStepSound_GetStepRightSounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PBMoveStepSound_eventGetStepRightSounds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPBMoveStepSound_GetStepRightSounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPBMoveStepSound_GetStepRightSounds_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPBMoveStepSound_GetStepRightSounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPBMoveStepSound_GetStepRightSounds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sound/PBMoveStepSound.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPBMoveStepSound_GetStepRightSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPBMoveStepSound, nullptr, "GetStepRightSounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPBMoveStepSound_GetStepRightSounds_Statics::PBMoveStepSound_eventGetStepRightSounds_Parms), Z_Construct_UFunction_UPBMoveStepSound_GetStepRightSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPBMoveStepSound_GetStepRightSounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPBMoveStepSound_GetStepRightSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPBMoveStepSound_GetStepRightSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPBMoveStepSound_GetStepRightSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPBMoveStepSound_GetStepRightSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPBMoveStepSound_GetSurfaceMaterial_Statics
	{
		struct PBMoveStepSound_eventGetSurfaceMaterial_Parms
		{
			TEnumAsByte<EPhysicalSurface> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPBMoveStepSound_GetSurfaceMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PBMoveStepSound_eventGetSurfaceMaterial_Parms, ReturnValue), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) }; // 455643187
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPBMoveStepSound_GetSurfaceMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPBMoveStepSound_GetSurfaceMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPBMoveStepSound_GetSurfaceMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sound/PBMoveStepSound.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPBMoveStepSound_GetSurfaceMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPBMoveStepSound, nullptr, "GetSurfaceMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPBMoveStepSound_GetSurfaceMaterial_Statics::PBMoveStepSound_eventGetSurfaceMaterial_Parms), Z_Construct_UFunction_UPBMoveStepSound_GetSurfaceMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPBMoveStepSound_GetSurfaceMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPBMoveStepSound_GetSurfaceMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPBMoveStepSound_GetSurfaceMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPBMoveStepSound_GetSurfaceMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPBMoveStepSound_GetSurfaceMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPBMoveStepSound_GetWalkVolume_Statics
	{
		struct PBMoveStepSound_eventGetWalkVolume_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPBMoveStepSound_GetWalkVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PBMoveStepSound_eventGetWalkVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPBMoveStepSound_GetWalkVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPBMoveStepSound_GetWalkVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPBMoveStepSound_GetWalkVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sound/PBMoveStepSound.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPBMoveStepSound_GetWalkVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPBMoveStepSound, nullptr, "GetWalkVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPBMoveStepSound_GetWalkVolume_Statics::PBMoveStepSound_eventGetWalkVolume_Parms), Z_Construct_UFunction_UPBMoveStepSound_GetWalkVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPBMoveStepSound_GetWalkVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPBMoveStepSound_GetWalkVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPBMoveStepSound_GetWalkVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPBMoveStepSound_GetWalkVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPBMoveStepSound_GetWalkVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPBMoveStepSound);
	UClass* Z_Construct_UClass_UPBMoveStepSound_NoRegister()
	{
		return UPBMoveStepSound::StaticClass();
	}
	struct Z_Construct_UClass_UPBMoveStepSound_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SurfaceMaterial;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StepLeftSounds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepLeftSounds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StepLeftSounds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StepRightSounds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepRightSounds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StepRightSounds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SprintLeftSounds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintLeftSounds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SprintLeftSounds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SprintRightSounds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintRightSounds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SprintRightSounds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpSounds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpSounds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_JumpSounds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LandSounds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandSounds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LandSounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPBMoveStepSound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PBCharacterMovement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPBMoveStepSound_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPBMoveStepSound_GetJumpSounds, "GetJumpSounds" }, // 3625348267
		{ &Z_Construct_UFunction_UPBMoveStepSound_GetLandSounds, "GetLandSounds" }, // 3900563644
		{ &Z_Construct_UFunction_UPBMoveStepSound_GetSprintLeftSounds, "GetSprintLeftSounds" }, // 2629560436
		{ &Z_Construct_UFunction_UPBMoveStepSound_GetSprintRightSounds, "GetSprintRightSounds" }, // 1257907119
		{ &Z_Construct_UFunction_UPBMoveStepSound_GetSprintVolume, "GetSprintVolume" }, // 2360832980
		{ &Z_Construct_UFunction_UPBMoveStepSound_GetStepLeftSounds, "GetStepLeftSounds" }, // 1164908900
		{ &Z_Construct_UFunction_UPBMoveStepSound_GetStepRightSounds, "GetStepRightSounds" }, // 1381850843
		{ &Z_Construct_UFunction_UPBMoveStepSound_GetSurfaceMaterial, "GetSurfaceMaterial" }, // 1618811579
		{ &Z_Construct_UFunction_UPBMoveStepSound_GetWalkVolume, "GetWalkVolume" }, // 1603110135
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBMoveStepSound_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Sound/PBMoveStepSound.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Sound/PBMoveStepSound.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_SurfaceMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** The physical material associated with this move step sound */" },
		{ "ModuleRelativePath", "Public/Sound/PBMoveStepSound.h" },
		{ "ToolTip", "The physical material associated with this move step sound" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_SurfaceMaterial = { "SurfaceMaterial", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBMoveStepSound, SurfaceMaterial), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_SurfaceMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_SurfaceMaterial_MetaData)) }; // 455643187
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_StepLeftSounds_Inner = { "StepLeftSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_StepLeftSounds_MetaData[] = {
		{ "Category", "Sounds" },
		{ "Comment", "/** The list of sounds to randomly choose from when stepping left */" },
		{ "ModuleRelativePath", "Public/Sound/PBMoveStepSound.h" },
		{ "ToolTip", "The list of sounds to randomly choose from when stepping left" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_StepLeftSounds = { "StepLeftSounds", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBMoveStepSound, StepLeftSounds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_StepLeftSounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_StepLeftSounds_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_StepRightSounds_Inner = { "StepRightSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_StepRightSounds_MetaData[] = {
		{ "Category", "Sounds" },
		{ "Comment", "/** The list of sounds to randomly choose from when stepping right */" },
		{ "ModuleRelativePath", "Public/Sound/PBMoveStepSound.h" },
		{ "ToolTip", "The list of sounds to randomly choose from when stepping right" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_StepRightSounds = { "StepRightSounds", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBMoveStepSound, StepRightSounds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_StepRightSounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_StepRightSounds_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_SprintLeftSounds_Inner = { "SprintLeftSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_SprintLeftSounds_MetaData[] = {
		{ "Category", "Sounds" },
		{ "Comment", "/** The list of sounds to randomly choose from when sprinting left */" },
		{ "ModuleRelativePath", "Public/Sound/PBMoveStepSound.h" },
		{ "ToolTip", "The list of sounds to randomly choose from when sprinting left" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_SprintLeftSounds = { "SprintLeftSounds", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBMoveStepSound, SprintLeftSounds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_SprintLeftSounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_SprintLeftSounds_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_SprintRightSounds_Inner = { "SprintRightSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_SprintRightSounds_MetaData[] = {
		{ "Category", "Sounds" },
		{ "Comment", "/** The list of sounds to randomly choose from when sprinting right */" },
		{ "ModuleRelativePath", "Public/Sound/PBMoveStepSound.h" },
		{ "ToolTip", "The list of sounds to randomly choose from when sprinting right" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_SprintRightSounds = { "SprintRightSounds", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBMoveStepSound, SprintRightSounds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_SprintRightSounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_SprintRightSounds_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_JumpSounds_Inner = { "JumpSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_JumpSounds_MetaData[] = {
		{ "Category", "Sounds" },
		{ "Comment", "/** The list of sounds to randomly choose from when jumping */" },
		{ "ModuleRelativePath", "Public/Sound/PBMoveStepSound.h" },
		{ "ToolTip", "The list of sounds to randomly choose from when jumping" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_JumpSounds = { "JumpSounds", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBMoveStepSound, JumpSounds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_JumpSounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_JumpSounds_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_LandSounds_Inner = { "LandSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_LandSounds_MetaData[] = {
		{ "Category", "Sounds" },
		{ "Comment", "/** The list of sounds to randomly choose from when landing */" },
		{ "ModuleRelativePath", "Public/Sound/PBMoveStepSound.h" },
		{ "ToolTip", "The list of sounds to randomly choose from when landing" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_LandSounds = { "LandSounds", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBMoveStepSound, LandSounds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_LandSounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_LandSounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_WalkVolume_MetaData[] = {
		{ "Category", "Volume" },
		{ "ModuleRelativePath", "Public/Sound/PBMoveStepSound.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_WalkVolume = { "WalkVolume", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBMoveStepSound, WalkVolume), METADATA_PARAMS(Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_WalkVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_WalkVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_SprintVolume_MetaData[] = {
		{ "Category", "Volume" },
		{ "ModuleRelativePath", "Public/Sound/PBMoveStepSound.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_SprintVolume = { "SprintVolume", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBMoveStepSound, SprintVolume), METADATA_PARAMS(Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_SprintVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_SprintVolume_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPBMoveStepSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_SurfaceMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_StepLeftSounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_StepLeftSounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_StepRightSounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_StepRightSounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_SprintLeftSounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_SprintLeftSounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_SprintRightSounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_SprintRightSounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_JumpSounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_JumpSounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_LandSounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_LandSounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_WalkVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBMoveStepSound_Statics::NewProp_SprintVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPBMoveStepSound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPBMoveStepSound>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPBMoveStepSound_Statics::ClassParams = {
		&UPBMoveStepSound::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPBMoveStepSound_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPBMoveStepSound_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPBMoveStepSound_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPBMoveStepSound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPBMoveStepSound()
	{
		if (!Z_Registration_Info_UClass_UPBMoveStepSound.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPBMoveStepSound.OuterSingleton, Z_Construct_UClass_UPBMoveStepSound_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPBMoveStepSound.OuterSingleton;
	}
	template<> PBCHARACTERMOVEMENT_API UClass* StaticClass<UPBMoveStepSound>()
	{
		return UPBMoveStepSound::StaticClass();
	}
	UPBMoveStepSound::UPBMoveStepSound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPBMoveStepSound);
	UPBMoveStepSound::~UPBMoveStepSound() {}
	struct Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Sound_PBMoveStepSound_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Sound_PBMoveStepSound_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPBMoveStepSound, UPBMoveStepSound::StaticClass, TEXT("UPBMoveStepSound"), &Z_Registration_Info_UClass_UPBMoveStepSound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPBMoveStepSound), 2885261863U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Sound_PBMoveStepSound_h_2899930526(TEXT("/Script/PBCharacterMovement"),
		Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Sound_PBMoveStepSound_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Sound_PBMoveStepSound_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
