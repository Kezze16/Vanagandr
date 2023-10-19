// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Uiana/Public/HismActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHismActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	UIANA_API UClass* Z_Construct_UClass_AHismActor();
	UIANA_API UClass* Z_Construct_UClass_AHismActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Uiana();
// End Cross Module References
	void AHismActor::StaticRegisterNativesAHismActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHismActor);
	UClass* Z_Construct_UClass_AHismActor_NoRegister()
	{
		return AHismActor::StaticClass();
	}
	struct Z_Construct_UClass_AHismActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HismComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HismComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHismActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Uiana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHismActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HismActor.h" },
		{ "ModuleRelativePath", "Public/HismActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHismActor_Statics::NewProp_HismComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InstancedStaticMeshActor" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|StaticMesh" },
		{ "ModuleRelativePath", "Public/HismActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AHismActor_Statics::NewProp_HismComponent = { "HismComponent", nullptr, (EPropertyFlags)0x00140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHismActor, HismComponent), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHismActor_Statics::NewProp_HismComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHismActor_Statics::NewProp_HismComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHismActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHismActor_Statics::NewProp_HismComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHismActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHismActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHismActor_Statics::ClassParams = {
		&AHismActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHismActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHismActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHismActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHismActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHismActor()
	{
		if (!Z_Registration_Info_UClass_AHismActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHismActor.OuterSingleton, Z_Construct_UClass_AHismActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHismActor.OuterSingleton;
	}
	template<> UIANA_API UClass* StaticClass<AHismActor>()
	{
		return AHismActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHismActor);
	AHismActor::~AHismActor() {}
	struct Z_CompiledInDeferFile_FID_Users_gusta_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_Uiana_Source_Uiana_Public_HismActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gusta_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_Uiana_Source_Uiana_Public_HismActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHismActor, AHismActor::StaticClass, TEXT("AHismActor"), &Z_Registration_Info_UClass_AHismActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHismActor), 3125715118U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gusta_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_Uiana_Source_Uiana_Public_HismActor_h_1292272288(TEXT("/Script/Uiana"),
		Z_CompiledInDeferFile_FID_Users_gusta_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_Uiana_Source_Uiana_Public_HismActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gusta_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_Uiana_Source_Uiana_Public_HismActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
