// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealPSKPSA/Public/BPFL.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPFL() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USCS_Node_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UNREALPSKPSA_API UClass* Z_Construct_UClass_UBPFL();
	UNREALPSKPSA_API UClass* Z_Construct_UClass_UBPFL_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealPSKPSA();
// End Cross Module References
	DEFINE_FUNCTION(UBPFL::execSetMeshReference)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MeshObjectName);
		P_GET_PROPERTY(FStrProperty,Z_Param_MeshType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UBPFL::SetMeshReference(Z_Param_MeshObjectName,Z_Param_MeshType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPFL::execExecuteConsoleCommand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ConsoleCommand);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPFL::ExecuteConsoleCommand(Z_Param_ConsoleCommand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPFL::execImportMeshes)
	{
		P_GET_TARRAY(FString,Z_Param_AllMeshesPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_ObjectsPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPFL::ImportMeshes(Z_Param_AllMeshesPath,Z_Param_ObjectsPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPFL::execImportTextures)
	{
		P_GET_TARRAY(FString,Z_Param_AllTexturesPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPFL::ImportTextures(Z_Param_AllTexturesPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPFL::execGetComponent)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActorComponent**)Z_Param__Result=UBPFL::GetComponent(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPFL::execChangeProjectSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPFL::ChangeProjectSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPFL::execReturnFromHex)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Beka);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=UBPFL::ReturnFromHex(Z_Param_Beka);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPFL::execPaintSMVertices)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_SMComp);
		P_GET_TARRAY(FColor,Z_Param_VtxColorsArray);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPFL::PaintSMVertices(Z_Param_SMComp,Z_Param_VtxColorsArray,Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPFL::execCreateBPComp)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_OBJECT(UClass,Z_Param_ClassToUse);
		P_GET_PROPERTY(FNameProperty,Z_Param_CompName);
		P_GET_TARRAY(USCS_Node*,Z_Param_AttachNodes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActorComponent**)Z_Param__Result=UBPFL::CreateBPComp(Z_Param_Object,Z_Param_ClassToUse,Z_Param_CompName,Z_Param_AttachNodes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPFL::execCreateNode)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_OBJECT(UClass,Z_Param_ClassToUse);
		P_GET_PROPERTY(FNameProperty,Z_Param_CompName);
		P_GET_OBJECT_REF(UActorComponent,Z_Param_Out_ComponentReturn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USCS_Node**)Z_Param__Result=UBPFL::CreateNode(Z_Param_Object,Z_Param_ClassToUse,Z_Param_CompName,Z_Param_Out_ComponentReturn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPFL::execSetOverrideMaterial)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FNameProperty,Z_Param_CompName);
		P_GET_TARRAY(UMaterialInterface*,Z_Param_MatOvr);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBPFL::SetOverrideMaterial(Z_Param_Actor,Z_Param_CompName,Z_Param_MatOvr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBPFL::execGetComponentByName)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FNameProperty,Z_Param_CompName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActorComponent**)Z_Param__Result=UBPFL::GetComponentByName(Z_Param_Actor,Z_Param_CompName);
		P_NATIVE_END;
	}
	void UBPFL::StaticRegisterNativesUBPFL()
	{
		UClass* Class = UBPFL::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeProjectSettings", &UBPFL::execChangeProjectSettings },
			{ "CreateBPComp", &UBPFL::execCreateBPComp },
			{ "CreateNode", &UBPFL::execCreateNode },
			{ "ExecuteConsoleCommand", &UBPFL::execExecuteConsoleCommand },
			{ "GetComponent", &UBPFL::execGetComponent },
			{ "GetComponentByName", &UBPFL::execGetComponentByName },
			{ "ImportMeshes", &UBPFL::execImportMeshes },
			{ "ImportTextures", &UBPFL::execImportTextures },
			{ "PaintSMVertices", &UBPFL::execPaintSMVertices },
			{ "ReturnFromHex", &UBPFL::execReturnFromHex },
			{ "SetMeshReference", &UBPFL::execSetMeshReference },
			{ "SetOverrideMaterial", &UBPFL::execSetOverrideMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBPFL_ChangeProjectSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFL_ChangeProjectSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectSettings" },
		{ "ModuleRelativePath", "Public/BPFL.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFL_ChangeProjectSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFL, nullptr, "ChangeProjectSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFL_ChangeProjectSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_ChangeProjectSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFL_ChangeProjectSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPFL_ChangeProjectSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPFL_CreateBPComp_Statics
	{
		struct BPFL_eventCreateBPComp_Parms
		{
			UObject* Object;
			UClass* ClassToUse;
			FName CompName;
			TArray<USCS_Node*> AttachNodes;
			UActorComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ClassToUse;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CompName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachNodes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttachNodes;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPFL_CreateBPComp_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventCreateBPComp_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBPFL_CreateBPComp_Statics::NewProp_ClassToUse = { "ClassToUse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventCreateBPComp_Parms, ClassToUse), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBPFL_CreateBPComp_Statics::NewProp_CompName = { "CompName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventCreateBPComp_Parms, CompName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPFL_CreateBPComp_Statics::NewProp_AttachNodes_Inner = { "AttachNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USCS_Node_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBPFL_CreateBPComp_Statics::NewProp_AttachNodes = { "AttachNodes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventCreateBPComp_Parms, AttachNodes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFL_CreateBPComp_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPFL_CreateBPComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventCreateBPComp_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBPFL_CreateBPComp_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_CreateBPComp_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFL_CreateBPComp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_CreateBPComp_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_CreateBPComp_Statics::NewProp_ClassToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_CreateBPComp_Statics::NewProp_CompName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_CreateBPComp_Statics::NewProp_AttachNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_CreateBPComp_Statics::NewProp_AttachNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_CreateBPComp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFL_CreateBPComp_Statics::Function_MetaDataParams[] = {
		{ "Category", "BPFL" },
		{ "ModuleRelativePath", "Public/BPFL.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFL_CreateBPComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFL, nullptr, "CreateBPComp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBPFL_CreateBPComp_Statics::BPFL_eventCreateBPComp_Parms), Z_Construct_UFunction_UBPFL_CreateBPComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_CreateBPComp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFL_CreateBPComp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_CreateBPComp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFL_CreateBPComp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPFL_CreateBPComp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPFL_CreateNode_Statics
	{
		struct BPFL_eventCreateNode_Parms
		{
			UObject* Object;
			UClass* ClassToUse;
			FName CompName;
			UActorComponent* ComponentReturn;
			USCS_Node* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ClassToUse;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CompName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentReturn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentReturn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPFL_CreateNode_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventCreateNode_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBPFL_CreateNode_Statics::NewProp_ClassToUse = { "ClassToUse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventCreateNode_Parms, ClassToUse), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBPFL_CreateNode_Statics::NewProp_CompName = { "CompName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventCreateNode_Parms, CompName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFL_CreateNode_Statics::NewProp_ComponentReturn_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPFL_CreateNode_Statics::NewProp_ComponentReturn = { "ComponentReturn", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventCreateNode_Parms, ComponentReturn), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBPFL_CreateNode_Statics::NewProp_ComponentReturn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_CreateNode_Statics::NewProp_ComponentReturn_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPFL_CreateNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventCreateNode_Parms, ReturnValue), Z_Construct_UClass_USCS_Node_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFL_CreateNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_CreateNode_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_CreateNode_Statics::NewProp_ClassToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_CreateNode_Statics::NewProp_CompName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_CreateNode_Statics::NewProp_ComponentReturn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_CreateNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFL_CreateNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "BPFL" },
		{ "ModuleRelativePath", "Public/BPFL.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFL_CreateNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFL, nullptr, "CreateNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBPFL_CreateNode_Statics::BPFL_eventCreateNode_Parms), Z_Construct_UFunction_UBPFL_CreateNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_CreateNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFL_CreateNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_CreateNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFL_CreateNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPFL_CreateNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPFL_ExecuteConsoleCommand_Statics
	{
		struct BPFL_eventExecuteConsoleCommand_Parms
		{
			FString ConsoleCommand;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConsoleCommand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFL_ExecuteConsoleCommand_Statics::NewProp_ConsoleCommand = { "ConsoleCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventExecuteConsoleCommand_Parms, ConsoleCommand), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFL_ExecuteConsoleCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_ExecuteConsoleCommand_Statics::NewProp_ConsoleCommand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFL_ExecuteConsoleCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unreal Python" },
		{ "ModuleRelativePath", "Public/BPFL.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFL_ExecuteConsoleCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFL, nullptr, "ExecuteConsoleCommand", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBPFL_ExecuteConsoleCommand_Statics::BPFL_eventExecuteConsoleCommand_Parms), Z_Construct_UFunction_UBPFL_ExecuteConsoleCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_ExecuteConsoleCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFL_ExecuteConsoleCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_ExecuteConsoleCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFL_ExecuteConsoleCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPFL_ExecuteConsoleCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPFL_GetComponent_Statics
	{
		struct BPFL_eventGetComponent_Parms
		{
			AActor* Actor;
			UActorComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPFL_GetComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventGetComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFL_GetComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPFL_GetComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventGetComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBPFL_GetComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_GetComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFL_GetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_GetComponent_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_GetComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFL_GetComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectSettings" },
		{ "ModuleRelativePath", "Public/BPFL.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFL_GetComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFL, nullptr, "GetComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBPFL_GetComponent_Statics::BPFL_eventGetComponent_Parms), Z_Construct_UFunction_UBPFL_GetComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_GetComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFL_GetComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_GetComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFL_GetComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPFL_GetComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPFL_GetComponentByName_Statics
	{
		struct BPFL_eventGetComponentByName_Parms
		{
			AActor* Actor;
			FName CompName;
			UActorComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CompName;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPFL_GetComponentByName_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventGetComponentByName_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBPFL_GetComponentByName_Statics::NewProp_CompName = { "CompName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventGetComponentByName_Parms, CompName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFL_GetComponentByName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPFL_GetComponentByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventGetComponentByName_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBPFL_GetComponentByName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_GetComponentByName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFL_GetComponentByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_GetComponentByName_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_GetComponentByName_Statics::NewProp_CompName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_GetComponentByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFL_GetComponentByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "BPFL" },
		{ "ModuleRelativePath", "Public/BPFL.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFL_GetComponentByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFL, nullptr, "GetComponentByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBPFL_GetComponentByName_Statics::BPFL_eventGetComponentByName_Parms), Z_Construct_UFunction_UBPFL_GetComponentByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_GetComponentByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFL_GetComponentByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_GetComponentByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFL_GetComponentByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPFL_GetComponentByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPFL_ImportMeshes_Statics
	{
		struct BPFL_eventImportMeshes_Parms
		{
			TArray<FString> AllMeshesPath;
			FString ObjectsPath;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AllMeshesPath_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllMeshesPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectsPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFL_ImportMeshes_Statics::NewProp_AllMeshesPath_Inner = { "AllMeshesPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBPFL_ImportMeshes_Statics::NewProp_AllMeshesPath = { "AllMeshesPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventImportMeshes_Parms, AllMeshesPath), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFL_ImportMeshes_Statics::NewProp_ObjectsPath = { "ObjectsPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventImportMeshes_Parms, ObjectsPath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFL_ImportMeshes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_ImportMeshes_Statics::NewProp_AllMeshesPath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_ImportMeshes_Statics::NewProp_AllMeshesPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_ImportMeshes_Statics::NewProp_ObjectsPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFL_ImportMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectSettings" },
		{ "ModuleRelativePath", "Public/BPFL.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFL_ImportMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFL, nullptr, "ImportMeshes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBPFL_ImportMeshes_Statics::BPFL_eventImportMeshes_Parms), Z_Construct_UFunction_UBPFL_ImportMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_ImportMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFL_ImportMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_ImportMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFL_ImportMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPFL_ImportMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPFL_ImportTextures_Statics
	{
		struct BPFL_eventImportTextures_Parms
		{
			TArray<FString> AllTexturesPath;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AllTexturesPath_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllTexturesPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFL_ImportTextures_Statics::NewProp_AllTexturesPath_Inner = { "AllTexturesPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBPFL_ImportTextures_Statics::NewProp_AllTexturesPath = { "AllTexturesPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventImportTextures_Parms, AllTexturesPath), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFL_ImportTextures_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_ImportTextures_Statics::NewProp_AllTexturesPath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_ImportTextures_Statics::NewProp_AllTexturesPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFL_ImportTextures_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectSettings" },
		{ "ModuleRelativePath", "Public/BPFL.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFL_ImportTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFL, nullptr, "ImportTextures", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBPFL_ImportTextures_Statics::BPFL_eventImportTextures_Parms), Z_Construct_UFunction_UBPFL_ImportTextures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_ImportTextures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFL_ImportTextures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_ImportTextures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFL_ImportTextures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPFL_ImportTextures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPFL_PaintSMVertices_Statics
	{
		struct BPFL_eventPaintSMVertices_Parms
		{
			UStaticMeshComponent* SMComp;
			TArray<FColor> VtxColorsArray;
			FString FileName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SMComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SMComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VtxColorsArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VtxColorsArray;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFL_PaintSMVertices_Statics::NewProp_SMComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPFL_PaintSMVertices_Statics::NewProp_SMComp = { "SMComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventPaintSMVertices_Parms, SMComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBPFL_PaintSMVertices_Statics::NewProp_SMComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_PaintSMVertices_Statics::NewProp_SMComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBPFL_PaintSMVertices_Statics::NewProp_VtxColorsArray_Inner = { "VtxColorsArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBPFL_PaintSMVertices_Statics::NewProp_VtxColorsArray = { "VtxColorsArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventPaintSMVertices_Parms, VtxColorsArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFL_PaintSMVertices_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventPaintSMVertices_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFL_PaintSMVertices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_PaintSMVertices_Statics::NewProp_SMComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_PaintSMVertices_Statics::NewProp_VtxColorsArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_PaintSMVertices_Statics::NewProp_VtxColorsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_PaintSMVertices_Statics::NewProp_FileName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFL_PaintSMVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "VertexPainting" },
		{ "ModuleRelativePath", "Public/BPFL.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFL_PaintSMVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFL, nullptr, "PaintSMVertices", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBPFL_PaintSMVertices_Statics::BPFL_eventPaintSMVertices_Parms), Z_Construct_UFunction_UBPFL_PaintSMVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_PaintSMVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFL_PaintSMVertices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_PaintSMVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFL_PaintSMVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPFL_PaintSMVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPFL_ReturnFromHex_Statics
	{
		struct BPFL_eventReturnFromHex_Parms
		{
			FString Beka;
			FColor ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Beka;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFL_ReturnFromHex_Statics::NewProp_Beka = { "Beka", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventReturnFromHex_Parms, Beka), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBPFL_ReturnFromHex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventReturnFromHex_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFL_ReturnFromHex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_ReturnFromHex_Statics::NewProp_Beka,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_ReturnFromHex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFL_ReturnFromHex_Statics::Function_MetaDataParams[] = {
		{ "Category", "VertexPainting" },
		{ "ModuleRelativePath", "Public/BPFL.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFL_ReturnFromHex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFL, nullptr, "ReturnFromHex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBPFL_ReturnFromHex_Statics::BPFL_eventReturnFromHex_Parms), Z_Construct_UFunction_UBPFL_ReturnFromHex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_ReturnFromHex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFL_ReturnFromHex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_ReturnFromHex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFL_ReturnFromHex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPFL_ReturnFromHex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPFL_SetMeshReference_Statics
	{
		struct BPFL_eventSetMeshReference_Parms
		{
			FString MeshObjectName;
			FString MeshType;
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshObjectName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFL_SetMeshReference_Statics::NewProp_MeshObjectName = { "MeshObjectName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventSetMeshReference_Parms, MeshObjectName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPFL_SetMeshReference_Statics::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventSetMeshReference_Parms, MeshType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPFL_SetMeshReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventSetMeshReference_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFL_SetMeshReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_SetMeshReference_Statics::NewProp_MeshObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_SetMeshReference_Statics::NewProp_MeshType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_SetMeshReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFL_SetMeshReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectSettings" },
		{ "ModuleRelativePath", "Public/BPFL.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFL_SetMeshReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFL, nullptr, "SetMeshReference", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBPFL_SetMeshReference_Statics::BPFL_eventSetMeshReference_Parms), Z_Construct_UFunction_UBPFL_SetMeshReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_SetMeshReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFL_SetMeshReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_SetMeshReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFL_SetMeshReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPFL_SetMeshReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBPFL_SetOverrideMaterial_Statics
	{
		struct BPFL_eventSetOverrideMaterial_Parms
		{
			AActor* Actor;
			FName CompName;
			TArray<UMaterialInterface*> MatOvr;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CompName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MatOvr_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MatOvr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPFL_SetOverrideMaterial_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventSetOverrideMaterial_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBPFL_SetOverrideMaterial_Statics::NewProp_CompName = { "CompName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventSetOverrideMaterial_Parms, CompName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPFL_SetOverrideMaterial_Statics::NewProp_MatOvr_Inner = { "MatOvr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBPFL_SetOverrideMaterial_Statics::NewProp_MatOvr = { "MatOvr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BPFL_eventSetOverrideMaterial_Parms, MatOvr), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPFL_SetOverrideMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_SetOverrideMaterial_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_SetOverrideMaterial_Statics::NewProp_CompName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_SetOverrideMaterial_Statics::NewProp_MatOvr_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPFL_SetOverrideMaterial_Statics::NewProp_MatOvr,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPFL_SetOverrideMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "BPFL" },
		{ "ModuleRelativePath", "Public/BPFL.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPFL_SetOverrideMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPFL, nullptr, "SetOverrideMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBPFL_SetOverrideMaterial_Statics::BPFL_eventSetOverrideMaterial_Parms), Z_Construct_UFunction_UBPFL_SetOverrideMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_SetOverrideMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPFL_SetOverrideMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPFL_SetOverrideMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPFL_SetOverrideMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBPFL_SetOverrideMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBPFL);
	UClass* Z_Construct_UClass_UBPFL_NoRegister()
	{
		return UBPFL::StaticClass();
	}
	struct Z_Construct_UClass_UBPFL_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPFL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealPSKPSA,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBPFL_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPFL_ChangeProjectSettings, "ChangeProjectSettings" }, // 27338180
		{ &Z_Construct_UFunction_UBPFL_CreateBPComp, "CreateBPComp" }, // 33613206
		{ &Z_Construct_UFunction_UBPFL_CreateNode, "CreateNode" }, // 1698266563
		{ &Z_Construct_UFunction_UBPFL_ExecuteConsoleCommand, "ExecuteConsoleCommand" }, // 3478372291
		{ &Z_Construct_UFunction_UBPFL_GetComponent, "GetComponent" }, // 1908636764
		{ &Z_Construct_UFunction_UBPFL_GetComponentByName, "GetComponentByName" }, // 219749383
		{ &Z_Construct_UFunction_UBPFL_ImportMeshes, "ImportMeshes" }, // 3098532591
		{ &Z_Construct_UFunction_UBPFL_ImportTextures, "ImportTextures" }, // 3647231152
		{ &Z_Construct_UFunction_UBPFL_PaintSMVertices, "PaintSMVertices" }, // 2149239332
		{ &Z_Construct_UFunction_UBPFL_ReturnFromHex, "ReturnFromHex" }, // 77321051
		{ &Z_Construct_UFunction_UBPFL_SetMeshReference, "SetMeshReference" }, // 1211030732
		{ &Z_Construct_UFunction_UBPFL_SetOverrideMaterial, "SetOverrideMaterial" }, // 1218073405
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPFL_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BPFL.h" },
		{ "ModuleRelativePath", "Public/BPFL.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPFL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBPFL>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBPFL_Statics::ClassParams = {
		&UBPFL::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBPFL_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBPFL_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPFL()
	{
		if (!Z_Registration_Info_UClass_UBPFL.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBPFL.OuterSingleton, Z_Construct_UClass_UBPFL_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBPFL.OuterSingleton;
	}
	template<> UNREALPSKPSA_API UClass* StaticClass<UBPFL>()
	{
		return UBPFL::StaticClass();
	}
	UBPFL::UBPFL(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPFL);
	UBPFL::~UBPFL() {}
	struct Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_UnrealPSKPSA_Source_UnrealPSKPSA_Public_BPFL_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_UnrealPSKPSA_Source_UnrealPSKPSA_Public_BPFL_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBPFL, UBPFL::StaticClass, TEXT("UBPFL"), &Z_Registration_Info_UClass_UBPFL, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBPFL), 3114882836U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_UnrealPSKPSA_Source_UnrealPSKPSA_Public_BPFL_h_955089605(TEXT("/Script/UnrealPSKPSA"),
		Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_UnrealPSKPSA_Source_UnrealPSKPSA_Public_BPFL_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_UnrealPSKPSA_Source_UnrealPSKPSA_Public_BPFL_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
