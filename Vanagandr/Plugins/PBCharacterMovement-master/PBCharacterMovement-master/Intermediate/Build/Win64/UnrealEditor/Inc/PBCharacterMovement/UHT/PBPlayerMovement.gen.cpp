// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PBCharacterMovement/Public/Character/PBPlayerMovement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePBPlayerMovement() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	PBCHARACTERMOVEMENT_API UClass* Z_Construct_UClass_UPBPlayerMovement();
	PBCHARACTERMOVEMENT_API UClass* Z_Construct_UClass_UPBPlayerMovement_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PBCharacterMovement();
// End Cross Module References
	DEFINE_FUNCTION(UPBPlayerMovement::execIsOnLadder)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOnLadder();
		P_NATIVE_END;
	}
	void UPBPlayerMovement::StaticRegisterNativesUPBPlayerMovement()
	{
		UClass* Class = UPBPlayerMovement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsOnLadder", &UPBPlayerMovement::execIsOnLadder },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPBPlayerMovement_IsOnLadder_Statics
	{
		struct PBPlayerMovement_eventIsOnLadder_Parms
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
	void Z_Construct_UFunction_UPBPlayerMovement_IsOnLadder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PBPlayerMovement_eventIsOnLadder_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPBPlayerMovement_IsOnLadder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PBPlayerMovement_eventIsOnLadder_Parms), &Z_Construct_UFunction_UPBPlayerMovement_IsOnLadder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPBPlayerMovement_IsOnLadder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPBPlayerMovement_IsOnLadder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPBPlayerMovement_IsOnLadder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Is this player on a ladder? */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerMovement.h" },
		{ "ToolTip", "Is this player on a ladder?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPBPlayerMovement_IsOnLadder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPBPlayerMovement, nullptr, "IsOnLadder", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPBPlayerMovement_IsOnLadder_Statics::PBPlayerMovement_eventIsOnLadder_Parms), Z_Construct_UFunction_UPBPlayerMovement_IsOnLadder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPBPlayerMovement_IsOnLadder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPBPlayerMovement_IsOnLadder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPBPlayerMovement_IsOnLadder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPBPlayerMovement_IsOnLadder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPBPlayerMovement_IsOnLadder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPBPlayerMovement);
	UClass* Z_Construct_UClass_UPBPlayerMovement_NoRegister()
	{
		return UPBPlayerMovement::StaticClass();
	}
	struct Z_Construct_UClass_UPBPlayerMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnLadder_MetaData[];
#endif
		static void NewProp_bOnLadder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnLadder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundAccelerationMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundAccelerationMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AirAccelerationMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AirAccelerationMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AirSpeedCap_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AirSpeedCap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UncrouchTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UncrouchTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchJumpTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchJumpTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UncrouchJumpTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UncrouchJumpTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinStepHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinStepHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrakingWindow_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakingWindow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LadderSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LadderSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedMultMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedMultMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedMultMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedMultMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RollAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RollSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BounceMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BounceMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisSpeedLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisSpeedLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlideLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlideLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundUncrouchCheckFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundUncrouchCheckFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowPos_MetaData[];
#endif
		static void NewProp_bShowPos_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPBPlayerMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PBCharacterMovement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPBPlayerMovement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPBPlayerMovement_IsOnLadder, "IsOnLadder" }, // 1099929076
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBPlayerMovement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Character/PBPlayerMovement.h" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerMovement.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_bOnLadder_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** If the player is using a ladder */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerMovement.h" },
		{ "ToolTip", "If the player is using a ladder" },
	};
#endif
	void Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_bOnLadder_SetBit(void* Obj)
	{
		((UPBPlayerMovement*)Obj)->bOnLadder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_bOnLadder = { "bOnLadder", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPBPlayerMovement), &Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_bOnLadder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_bOnLadder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_bOnLadder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_GroundAccelerationMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "Comment", "/** The multiplier for acceleration when on ground. */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerMovement.h" },
		{ "ToolTip", "The multiplier for acceleration when on ground." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_GroundAccelerationMultiplier = { "GroundAccelerationMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBPlayerMovement, GroundAccelerationMultiplier), METADATA_PARAMS(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_GroundAccelerationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_GroundAccelerationMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_AirAccelerationMultiplier_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "Comment", "/** The multiplier for acceleration when in air. */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerMovement.h" },
		{ "ToolTip", "The multiplier for acceleration when in air." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_AirAccelerationMultiplier = { "AirAccelerationMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBPlayerMovement, AirAccelerationMultiplier), METADATA_PARAMS(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_AirAccelerationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_AirAccelerationMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_AirSpeedCap_MetaData[] = {
		{ "Category", "Character Movement: Jumping / Falling" },
		{ "Comment", "/* The vector differential magnitude cap when in air. */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerMovement.h" },
		{ "ToolTip", "The vector differential magnitude cap when in air." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_AirSpeedCap = { "AirSpeedCap", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBPlayerMovement, AirSpeedCap), METADATA_PARAMS(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_AirSpeedCap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_AirSpeedCap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_CrouchTime_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "Comment", "/** Time to crouch on ground in seconds */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerMovement.h" },
		{ "ToolTip", "Time to crouch on ground in seconds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_CrouchTime = { "CrouchTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBPlayerMovement, CrouchTime), METADATA_PARAMS(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_CrouchTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_CrouchTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_UncrouchTime_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "Comment", "/** Time to uncrouch on ground in seconds */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerMovement.h" },
		{ "ToolTip", "Time to uncrouch on ground in seconds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_UncrouchTime = { "UncrouchTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBPlayerMovement, UncrouchTime), METADATA_PARAMS(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_UncrouchTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_UncrouchTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_CrouchJumpTime_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "Comment", "/** Time to crouch in air in seconds */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerMovement.h" },
		{ "ToolTip", "Time to crouch in air in seconds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_CrouchJumpTime = { "CrouchJumpTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBPlayerMovement, CrouchJumpTime), METADATA_PARAMS(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_CrouchJumpTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_CrouchJumpTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_UncrouchJumpTime_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "Comment", "/** Time to uncrouch in air in seconds */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerMovement.h" },
		{ "ToolTip", "Time to uncrouch in air in seconds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_UncrouchJumpTime = { "UncrouchJumpTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBPlayerMovement, UncrouchJumpTime), METADATA_PARAMS(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_UncrouchJumpTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_UncrouchJumpTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_MinStepHeight_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "Comment", "/** the minimum step height from moving fast */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerMovement.h" },
		{ "ToolTip", "the minimum step height from moving fast" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_MinStepHeight = { "MinStepHeight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBPlayerMovement, MinStepHeight), METADATA_PARAMS(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_MinStepHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_MinStepHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_BrakingWindow_MetaData[] = {
		{ "Category", "Character Movement: Jumping / Falling" },
		{ "Comment", "/** Time (in millis) the player has to rejump without applying friction. */" },
		{ "DisplayName", "Rejump Window" },
		{ "ForceUnits", "ms" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerMovement.h" },
		{ "ToolTip", "Time (in millis) the player has to rejump without applying friction." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_BrakingWindow = { "BrakingWindow", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBPlayerMovement, BrakingWindow), METADATA_PARAMS(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_BrakingWindow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_BrakingWindow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_RunSpeed_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The target ground speed when running. */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerMovement.h" },
		{ "ToolTip", "The target ground speed when running." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBPlayerMovement, RunSpeed), METADATA_PARAMS(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_RunSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_RunSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The target ground speed when sprinting.  */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerMovement.h" },
		{ "ToolTip", "The target ground speed when sprinting." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBPlayerMovement, SprintSpeed), METADATA_PARAMS(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_SprintSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_SprintSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The target ground speed when walking slowly. */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerMovement.h" },
		{ "ToolTip", "The target ground speed when walking slowly." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBPlayerMovement, WalkSpeed), METADATA_PARAMS(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_WalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_WalkSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_LadderSpeed_MetaData[] = {
		{ "Category", "Character Movement: Ladder" },
		{ "Comment", "/** Speed on a ladder */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerMovement.h" },
		{ "ToolTip", "Speed on a ladder" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_LadderSpeed = { "LadderSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBPlayerMovement, LadderSpeed), METADATA_PARAMS(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_LadderSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_LadderSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_SpeedMultMin_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The minimum speed to scale up from for slope movement  */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerMovement.h" },
		{ "ToolTip", "The minimum speed to scale up from for slope movement" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_SpeedMultMin = { "SpeedMultMin", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBPlayerMovement, SpeedMultMin), METADATA_PARAMS(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_SpeedMultMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_SpeedMultMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_SpeedMultMax_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The maximum speed to scale up to for slope movement */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerMovement.h" },
		{ "ToolTip", "The maximum speed to scale up to for slope movement" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_SpeedMultMax = { "SpeedMultMax", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBPlayerMovement, SpeedMultMax), METADATA_PARAMS(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_SpeedMultMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_SpeedMultMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_RollAngle_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "Comment", "/** The maximum angle we can roll for camera adjust */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerMovement.h" },
		{ "ToolTip", "The maximum angle we can roll for camera adjust" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_RollAngle = { "RollAngle", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBPlayerMovement, RollAngle), METADATA_PARAMS(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_RollAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_RollAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_RollSpeed_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "Comment", "/** Speed of rolling the camera */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerMovement.h" },
		{ "ToolTip", "Speed of rolling the camera" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_RollSpeed = { "RollSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBPlayerMovement, RollSpeed), METADATA_PARAMS(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_RollSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_RollSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_BounceMultiplier_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "Comment", "/** Speed of rolling the camera */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerMovement.h" },
		{ "ToolTip", "Speed of rolling the camera" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_BounceMultiplier = { "BounceMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBPlayerMovement, BounceMultiplier), METADATA_PARAMS(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_BounceMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_BounceMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_AxisSpeedLimit_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerMovement.h" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_AxisSpeedLimit = { "AxisSpeedLimit", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBPlayerMovement, AxisSpeedLimit), METADATA_PARAMS(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_AxisSpeedLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_AxisSpeedLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_SlideLimit_MetaData[] = {
		{ "Category", "Character Movement: Walking" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Threshold relating to speed ratio and friction which causes us to catch air */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerMovement.h" },
		{ "ToolTip", "Threshold relating to speed ratio and friction which causes us to catch air" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_SlideLimit = { "SlideLimit", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBPlayerMovement, SlideLimit), METADATA_PARAMS(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_SlideLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_SlideLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_GroundUncrouchCheckFactor_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "Comment", "/** Fraction of uncrouch half-height to check for before doing starting an uncrouch. */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerMovement.h" },
		{ "ToolTip", "Fraction of uncrouch half-height to check for before doing starting an uncrouch." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_GroundUncrouchCheckFactor = { "GroundUncrouchCheckFactor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPBPlayerMovement, GroundUncrouchCheckFactor), METADATA_PARAMS(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_GroundUncrouchCheckFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_GroundUncrouchCheckFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_bShowPos_MetaData[] = {
		{ "Category", "Character Movement (General Settings)" },
		{ "Comment", "/** Print pos and vel (Source: cl_showpos) */" },
		{ "ModuleRelativePath", "Public/Character/PBPlayerMovement.h" },
		{ "ToolTip", "Print pos and vel (Source: cl_showpos)" },
	};
#endif
	void Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_bShowPos_SetBit(void* Obj)
	{
		((UPBPlayerMovement*)Obj)->bShowPos = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_bShowPos = { "bShowPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UPBPlayerMovement), &Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_bShowPos_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_bShowPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_bShowPos_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPBPlayerMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_bOnLadder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_GroundAccelerationMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_AirAccelerationMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_AirSpeedCap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_CrouchTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_UncrouchTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_CrouchJumpTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_UncrouchJumpTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_MinStepHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_BrakingWindow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_RunSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_SprintSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_WalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_LadderSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_SpeedMultMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_SpeedMultMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_RollAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_RollSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_BounceMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_AxisSpeedLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_SlideLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_GroundUncrouchCheckFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPBPlayerMovement_Statics::NewProp_bShowPos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPBPlayerMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPBPlayerMovement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPBPlayerMovement_Statics::ClassParams = {
		&UPBPlayerMovement::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPBPlayerMovement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPBPlayerMovement_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPBPlayerMovement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPBPlayerMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPBPlayerMovement()
	{
		if (!Z_Registration_Info_UClass_UPBPlayerMovement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPBPlayerMovement.OuterSingleton, Z_Construct_UClass_UPBPlayerMovement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPBPlayerMovement.OuterSingleton;
	}
	template<> PBCHARACTERMOVEMENT_API UClass* StaticClass<UPBPlayerMovement>()
	{
		return UPBPlayerMovement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPBPlayerMovement);
	UPBPlayerMovement::~UPBPlayerMovement() {}
	struct Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerMovement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerMovement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPBPlayerMovement, UPBPlayerMovement::StaticClass, TEXT("UPBPlayerMovement"), &Z_Registration_Info_UClass_UPBPlayerMovement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPBPlayerMovement), 1029656472U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerMovement_h_1098734845(TEXT("/Script/PBCharacterMovement"),
		Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerMovement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerMovement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
