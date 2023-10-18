// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Uiana/Public/UianaDataSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUianaDataSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	UIANA_API UClass* Z_Construct_UClass_UUianaDataSettings();
	UIANA_API UClass* Z_Construct_UClass_UUianaDataSettings_NoRegister();
	UIANA_API UEnum* Z_Construct_UEnum_Uiana_WeaponRole();
	UPackage* Z_Construct_UPackage__Script_Uiana();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_WeaponRole;
	static UEnum* WeaponRole_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_WeaponRole.OuterSingleton)
		{
			Z_Registration_Info_UEnum_WeaponRole.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Uiana_WeaponRole, (UObject*)Z_Construct_UPackage__Script_Uiana(), TEXT("WeaponRole"));
		}
		return Z_Registration_Info_UEnum_WeaponRole.OuterSingleton;
	}
	template<> UIANA_API UEnum* StaticEnum<WeaponRole>()
	{
		return WeaponRole_StaticEnum();
	}
	struct Z_Construct_UEnum_Uiana_WeaponRole_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Uiana_WeaponRole_Statics::Enumerators[] = {
		{ "Ascent", (int64)Ascent },
		{ "Split", (int64)Split },
		{ "Bind", (int64)Bind },
		{ "Icebox", (int64)Icebox },
		{ "Breeze", (int64)Breeze },
		{ "Haven", (int64)Haven },
		{ "Fracture", (int64)Fracture },
		{ "Range", (int64)Range },
		{ "Pearl", (int64)Pearl },
		{ "CharacterSelect", (int64)CharacterSelect },
		{ "Menu", (int64)Menu },
		{ "Lotus", (int64)Lotus },
		{ "Sunset", (int64)Sunset },
		{ "District", (int64)District },
		{ "Kasbah", (int64)Kasbah },
		{ "Piazza", (int64)Piazza },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Uiana_WeaponRole_Statics::Enum_MetaDataParams[] = {
		{ "Ascent.DisplayName", "Ascent" },
		{ "Ascent.Name", "Ascent" },
		{ "Bind.DisplayName", "Bind" },
		{ "Bind.Name", "Bind" },
		{ "Breeze.DisplayName", "Breeze" },
		{ "Breeze.Name", "Breeze" },
		{ "CharacterSelect.DisplayName", "CharacterSelect" },
		{ "CharacterSelect.Name", "CharacterSelect" },
		{ "District.DisplayName", "District" },
		{ "District.Name", "District" },
		{ "Fracture.DisplayName", "Fracture" },
		{ "Fracture.Name", "Fracture" },
		{ "Haven.DisplayName", "Haven" },
		{ "Haven.Name", "Haven" },
		{ "Icebox.DisplayName", "Icebox" },
		{ "Icebox.Name", "Icebox" },
		{ "Kasbah.DisplayName", "Kasbah" },
		{ "Kasbah.Name", "Kasbah" },
		{ "Lotus.DisplayName", "Lotus" },
		{ "Lotus.Name", "Lotus" },
		{ "Menu.DisplayName", "Menu" },
		{ "Menu.Name", "Menu" },
		{ "ModuleRelativePath", "Public/UianaDataSettings.h" },
		{ "Pearl.DisplayName", "Pearl" },
		{ "Pearl.Name", "Pearl" },
		{ "Piazza.DisplayName", "Piazza" },
		{ "Piazza.Name", "Piazza" },
		{ "Range.DisplayName", "Range" },
		{ "Range.Name", "Range" },
		{ "Split.DisplayName", "Split" },
		{ "Split.Name", "Split" },
		{ "Sunset.DisplayName", "Sunset" },
		{ "Sunset.Name", "Sunset" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Uiana_WeaponRole_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Uiana,
		nullptr,
		"WeaponRole",
		"WeaponRole",
		Z_Construct_UEnum_Uiana_WeaponRole_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Uiana_WeaponRole_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Uiana_WeaponRole_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Uiana_WeaponRole_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Uiana_WeaponRole()
	{
		if (!Z_Registration_Info_UEnum_WeaponRole.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_WeaponRole.InnerSingleton, Z_Construct_UEnum_Uiana_WeaponRole_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_WeaponRole.InnerSingleton;
	}
	void UUianaDataSettings::StaticRegisterNativesUUianaDataSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUianaDataSettings);
	UClass* Z_Construct_UClass_UUianaDataSettings_NoRegister()
	{
		return UUianaDataSettings::StaticClass();
	}
	struct Z_Construct_UClass_UUianaDataSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExportFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExportFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaksFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PaksFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Map;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportMeshes_MetaData[];
#endif
		static void NewProp_ImportMeshes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ImportMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseSubLevels_MetaData[];
#endif
		static void NewProp_UseSubLevels_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseSubLevels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportMaterials_MetaData[];
#endif
		static void NewProp_ImportMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ImportMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportDecals_MetaData[];
#endif
		static void NewProp_ImportDecals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ImportDecals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportLights_MetaData[];
#endif
		static void NewProp_ImportLights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ImportLights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportBlueprints_MetaData[];
#endif
		static void NewProp_ImportBlueprints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ImportBlueprints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightmapResolutionMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LightmapResolutionMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUianaDataSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Uiana,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUianaDataSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UianaDataSettings.h" },
		{ "ModuleRelativePath", "Public/UianaDataSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ExportFolder_MetaData[] = {
		{ "Category", "Settings Folders" },
		{ "ContentDir", "" },
		{ "ModuleRelativePath", "Public/UianaDataSettings.h" },
		{ "RelativeToGameContentDir", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ExportFolder = { "ExportFolder", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUianaDataSettings, ExportFolder), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ExportFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ExportFolder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_PaksFolder_MetaData[] = {
		{ "Category", "Settings Folders" },
		{ "ContentDir", "" },
		{ "ModuleRelativePath", "Public/UianaDataSettings.h" },
		{ "RelativeToGameContentDir", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_PaksFolder = { "PaksFolder", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUianaDataSettings, PaksFolder), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_PaksFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_PaksFolder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_Map_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "ModuleRelativePath", "Public/UianaDataSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUianaDataSettings, Map), Z_Construct_UEnum_Uiana_WeaponRole, METADATA_PARAMS(Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_Map_MetaData)) }; // 4290794064
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportMeshes_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "ModuleRelativePath", "Public/UianaDataSettings.h" },
	};
#endif
	void Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportMeshes_SetBit(void* Obj)
	{
		((UUianaDataSettings*)Obj)->ImportMeshes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportMeshes = { "ImportMeshes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUianaDataSettings), &Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportMeshes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportMeshes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_UseSubLevels_MetaData[] = {
		{ "Category", "SubLevels" },
		{ "ModuleRelativePath", "Public/UianaDataSettings.h" },
	};
#endif
	void Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_UseSubLevels_SetBit(void* Obj)
	{
		((UUianaDataSettings*)Obj)->UseSubLevels = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_UseSubLevels = { "UseSubLevels", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUianaDataSettings), &Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_UseSubLevels_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_UseSubLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_UseSubLevels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportMaterials_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "ModuleRelativePath", "Public/UianaDataSettings.h" },
	};
#endif
	void Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportMaterials_SetBit(void* Obj)
	{
		((UUianaDataSettings*)Obj)->ImportMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportMaterials = { "ImportMaterials", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUianaDataSettings), &Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportDecals_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "ModuleRelativePath", "Public/UianaDataSettings.h" },
	};
#endif
	void Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportDecals_SetBit(void* Obj)
	{
		((UUianaDataSettings*)Obj)->ImportDecals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportDecals = { "ImportDecals", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUianaDataSettings), &Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportDecals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportDecals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportLights_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "ModuleRelativePath", "Public/UianaDataSettings.h" },
	};
#endif
	void Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportLights_SetBit(void* Obj)
	{
		((UUianaDataSettings*)Obj)->ImportLights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportLights = { "ImportLights", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUianaDataSettings), &Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportLights_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportLights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportLights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportBlueprints_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "ModuleRelativePath", "Public/UianaDataSettings.h" },
	};
#endif
	void Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportBlueprints_SetBit(void* Obj)
	{
		((UUianaDataSettings*)Obj)->ImportBlueprints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportBlueprints = { "ImportBlueprints", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUianaDataSettings), &Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportBlueprints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportBlueprints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportBlueprints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_LightmapResolutionMultiplier_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0.010000" },
		{ "ModuleRelativePath", "Public/UianaDataSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_LightmapResolutionMultiplier = { "LightmapResolutionMultiplier", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUianaDataSettings, LightmapResolutionMultiplier), METADATA_PARAMS(Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_LightmapResolutionMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_LightmapResolutionMultiplier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUianaDataSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ExportFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_PaksFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_Map,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_UseSubLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportDecals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportLights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_ImportBlueprints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUianaDataSettings_Statics::NewProp_LightmapResolutionMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUianaDataSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUianaDataSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUianaDataSettings_Statics::ClassParams = {
		&UUianaDataSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUianaDataSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUianaDataSettings_Statics::PropPointers),
		0,
		0x001000AEu,
		METADATA_PARAMS(Z_Construct_UClass_UUianaDataSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUianaDataSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUianaDataSettings()
	{
		if (!Z_Registration_Info_UClass_UUianaDataSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUianaDataSettings.OuterSingleton, Z_Construct_UClass_UUianaDataSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUianaDataSettings.OuterSingleton;
	}
	template<> UIANA_API UClass* StaticClass<UUianaDataSettings>()
	{
		return UUianaDataSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUianaDataSettings);
	UUianaDataSettings::~UUianaDataSettings() {}
	struct Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_Uiana_Source_Uiana_Public_UianaDataSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_Uiana_Source_Uiana_Public_UianaDataSettings_h_Statics::EnumInfo[] = {
		{ WeaponRole_StaticEnum, TEXT("WeaponRole"), &Z_Registration_Info_UEnum_WeaponRole, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4290794064U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_Uiana_Source_Uiana_Public_UianaDataSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUianaDataSettings, UUianaDataSettings::StaticClass, TEXT("UUianaDataSettings"), &Z_Registration_Info_UClass_UUianaDataSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUianaDataSettings), 2998408557U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_Uiana_Source_Uiana_Public_UianaDataSettings_h_43240135(TEXT("/Script/Uiana"),
		Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_Uiana_Source_Uiana_Public_UianaDataSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_Uiana_Source_Uiana_Public_UianaDataSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_Uiana_Source_Uiana_Public_UianaDataSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_Uiana_Source_Uiana_Public_UianaDataSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
