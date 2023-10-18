// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Uiana/Public/ValActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeValActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UIANA_API UClass* Z_Construct_UClass_AValActor();
	UIANA_API UClass* Z_Construct_UClass_AValActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Uiana();
// End Cross Module References
	DEFINE_FUNCTION(AValActor::execCreateStaticComponent)
	{
		P_GET_OBJECT_REF(UStaticMeshComponent,Z_Param_Out_NewComp);
		P_GET_OBJECT(UStaticMesh,Z_Param_MeshToUSE);
		P_GET_STRUCT(FTransform,Z_Param_TForm);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateStaticComponent(Z_Param_Out_NewComp,Z_Param_MeshToUSE,Z_Param_TForm);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AValActor::execCreateInstanceComponent)
	{
		P_GET_OBJECT_REF(UHierarchicalInstancedStaticMeshComponent,Z_Param_Out_NewComp);
		P_GET_OBJECT(UStaticMesh,Z_Param_MeshToUSE);
		P_GET_STRUCT(FTransform,Z_Param_TForm);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateInstanceComponent(Z_Param_Out_NewComp,Z_Param_MeshToUSE,Z_Param_TForm);
		P_NATIVE_END;
	}
	void AValActor::StaticRegisterNativesAValActor()
	{
		UClass* Class = AValActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateInstanceComponent", &AValActor::execCreateInstanceComponent },
			{ "CreateStaticComponent", &AValActor::execCreateStaticComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AValActor_CreateInstanceComponent_Statics
	{
		struct ValActor_eventCreateInstanceComponent_Parms
		{
			UHierarchicalInstancedStaticMeshComponent* NewComp;
			UStaticMesh* MeshToUSE;
			FTransform TForm;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshToUSE;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TForm;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AValActor_CreateInstanceComponent_Statics::NewProp_NewComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AValActor_CreateInstanceComponent_Statics::NewProp_NewComp = { "NewComp", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ValActor_eventCreateInstanceComponent_Parms, NewComp), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AValActor_CreateInstanceComponent_Statics::NewProp_NewComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AValActor_CreateInstanceComponent_Statics::NewProp_NewComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AValActor_CreateInstanceComponent_Statics::NewProp_MeshToUSE = { "MeshToUSE", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ValActor_eventCreateInstanceComponent_Parms, MeshToUSE), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AValActor_CreateInstanceComponent_Statics::NewProp_TForm = { "TForm", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ValActor_eventCreateInstanceComponent_Parms, TForm), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AValActor_CreateInstanceComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AValActor_CreateInstanceComponent_Statics::NewProp_NewComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AValActor_CreateInstanceComponent_Statics::NewProp_MeshToUSE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AValActor_CreateInstanceComponent_Statics::NewProp_TForm,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AValActor_CreateInstanceComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ValActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AValActor_CreateInstanceComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AValActor, nullptr, "CreateInstanceComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AValActor_CreateInstanceComponent_Statics::ValActor_eventCreateInstanceComponent_Parms), Z_Construct_UFunction_AValActor_CreateInstanceComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AValActor_CreateInstanceComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AValActor_CreateInstanceComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AValActor_CreateInstanceComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AValActor_CreateInstanceComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AValActor_CreateInstanceComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AValActor_CreateStaticComponent_Statics
	{
		struct ValActor_eventCreateStaticComponent_Parms
		{
			UStaticMeshComponent* NewComp;
			UStaticMesh* MeshToUSE;
			FTransform TForm;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshToUSE;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TForm;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AValActor_CreateStaticComponent_Statics::NewProp_NewComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AValActor_CreateStaticComponent_Statics::NewProp_NewComp = { "NewComp", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ValActor_eventCreateStaticComponent_Parms, NewComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AValActor_CreateStaticComponent_Statics::NewProp_NewComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AValActor_CreateStaticComponent_Statics::NewProp_NewComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AValActor_CreateStaticComponent_Statics::NewProp_MeshToUSE = { "MeshToUSE", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ValActor_eventCreateStaticComponent_Parms, MeshToUSE), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AValActor_CreateStaticComponent_Statics::NewProp_TForm = { "TForm", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ValActor_eventCreateStaticComponent_Parms, TForm), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AValActor_CreateStaticComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AValActor_CreateStaticComponent_Statics::NewProp_NewComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AValActor_CreateStaticComponent_Statics::NewProp_MeshToUSE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AValActor_CreateStaticComponent_Statics::NewProp_TForm,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AValActor_CreateStaticComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ValActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AValActor_CreateStaticComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AValActor, nullptr, "CreateStaticComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AValActor_CreateStaticComponent_Statics::ValActor_eventCreateStaticComponent_Parms), Z_Construct_UFunction_AValActor_CreateStaticComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AValActor_CreateStaticComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AValActor_CreateStaticComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AValActor_CreateStaticComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AValActor_CreateStaticComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AValActor_CreateStaticComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AValActor);
	UClass* Z_Construct_UClass_AValActor_NoRegister()
	{
		return AValActor::StaticClass();
	}
	struct Z_Construct_UClass_AValActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AValActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Uiana,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AValActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AValActor_CreateInstanceComponent, "CreateInstanceComponent" }, // 153063759
		{ &Z_Construct_UFunction_AValActor_CreateStaticComponent, "CreateStaticComponent" }, // 3106460477
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AValActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ValActor.h" },
		{ "ModuleRelativePath", "Public/ValActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AValActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AValActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AValActor_Statics::ClassParams = {
		&AValActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AValActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AValActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AValActor()
	{
		if (!Z_Registration_Info_UClass_AValActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AValActor.OuterSingleton, Z_Construct_UClass_AValActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AValActor.OuterSingleton;
	}
	template<> UIANA_API UClass* StaticClass<AValActor>()
	{
		return AValActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AValActor);
	AValActor::~AValActor() {}
	struct Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_Uiana_Source_Uiana_Public_ValActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_Uiana_Source_Uiana_Public_ValActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AValActor, AValActor::StaticClass, TEXT("AValActor"), &Z_Registration_Info_UClass_AValActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AValActor), 835361050U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_Uiana_Source_Uiana_Public_ValActor_h_3989267577(TEXT("/Script/Uiana"),
		Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_Uiana_Source_Uiana_Public_ValActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_Uiana_Source_Uiana_Public_ValActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
