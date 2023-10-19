// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BPFL.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActorComponent;
class UMaterialInterface;
class UObject;
class USCS_Node;
class UStaticMeshComponent;
struct FColor;
#ifdef UNREALPSKPSA_BPFL_generated_h
#error "BPFL.generated.h already included, missing '#pragma once' in BPFL.h"
#endif
#define UNREALPSKPSA_BPFL_generated_h

#define FID_Users_gusta_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_UnrealPSKPSA_Source_UnrealPSKPSA_Public_BPFL_h_20_SPARSE_DATA
#define FID_Users_gusta_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_UnrealPSKPSA_Source_UnrealPSKPSA_Public_BPFL_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMeshReference); \
	DECLARE_FUNCTION(execExecuteConsoleCommand); \
	DECLARE_FUNCTION(execImportMeshes); \
	DECLARE_FUNCTION(execImportTextures); \
	DECLARE_FUNCTION(execGetComponent); \
	DECLARE_FUNCTION(execChangeProjectSettings); \
	DECLARE_FUNCTION(execReturnFromHex); \
	DECLARE_FUNCTION(execPaintSMVertices); \
	DECLARE_FUNCTION(execCreateBPComp); \
	DECLARE_FUNCTION(execCreateNode); \
	DECLARE_FUNCTION(execSetOverrideMaterial); \
	DECLARE_FUNCTION(execGetComponentByName);


#define FID_Users_gusta_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_UnrealPSKPSA_Source_UnrealPSKPSA_Public_BPFL_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMeshReference); \
	DECLARE_FUNCTION(execExecuteConsoleCommand); \
	DECLARE_FUNCTION(execImportMeshes); \
	DECLARE_FUNCTION(execImportTextures); \
	DECLARE_FUNCTION(execGetComponent); \
	DECLARE_FUNCTION(execChangeProjectSettings); \
	DECLARE_FUNCTION(execReturnFromHex); \
	DECLARE_FUNCTION(execPaintSMVertices); \
	DECLARE_FUNCTION(execCreateBPComp); \
	DECLARE_FUNCTION(execCreateNode); \
	DECLARE_FUNCTION(execSetOverrideMaterial); \
	DECLARE_FUNCTION(execGetComponentByName);


#define FID_Users_gusta_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_UnrealPSKPSA_Source_UnrealPSKPSA_Public_BPFL_h_20_ACCESSORS
#define FID_Users_gusta_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_UnrealPSKPSA_Source_UnrealPSKPSA_Public_BPFL_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBPFL(); \
	friend struct Z_Construct_UClass_UBPFL_Statics; \
public: \
	DECLARE_CLASS(UBPFL, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealPSKPSA"), NO_API) \
	DECLARE_SERIALIZER(UBPFL)


#define FID_Users_gusta_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_UnrealPSKPSA_Source_UnrealPSKPSA_Public_BPFL_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUBPFL(); \
	friend struct Z_Construct_UClass_UBPFL_Statics; \
public: \
	DECLARE_CLASS(UBPFL, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealPSKPSA"), NO_API) \
	DECLARE_SERIALIZER(UBPFL)


#define FID_Users_gusta_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_UnrealPSKPSA_Source_UnrealPSKPSA_Public_BPFL_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPFL(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPFL) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPFL); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPFL); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBPFL(UBPFL&&); \
	NO_API UBPFL(const UBPFL&); \
public: \
	NO_API virtual ~UBPFL();


#define FID_Users_gusta_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_UnrealPSKPSA_Source_UnrealPSKPSA_Public_BPFL_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPFL(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBPFL(UBPFL&&); \
	NO_API UBPFL(const UBPFL&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPFL); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPFL); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPFL) \
	NO_API virtual ~UBPFL();


#define FID_Users_gusta_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_UnrealPSKPSA_Source_UnrealPSKPSA_Public_BPFL_h_17_PROLOG
#define FID_Users_gusta_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_UnrealPSKPSA_Source_UnrealPSKPSA_Public_BPFL_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_gusta_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_UnrealPSKPSA_Source_UnrealPSKPSA_Public_BPFL_h_20_SPARSE_DATA \
	FID_Users_gusta_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_UnrealPSKPSA_Source_UnrealPSKPSA_Public_BPFL_h_20_RPC_WRAPPERS \
	FID_Users_gusta_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_UnrealPSKPSA_Source_UnrealPSKPSA_Public_BPFL_h_20_ACCESSORS \
	FID_Users_gusta_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_UnrealPSKPSA_Source_UnrealPSKPSA_Public_BPFL_h_20_INCLASS \
	FID_Users_gusta_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_UnrealPSKPSA_Source_UnrealPSKPSA_Public_BPFL_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_gusta_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_UnrealPSKPSA_Source_UnrealPSKPSA_Public_BPFL_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_gusta_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_UnrealPSKPSA_Source_UnrealPSKPSA_Public_BPFL_h_20_SPARSE_DATA \
	FID_Users_gusta_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_UnrealPSKPSA_Source_UnrealPSKPSA_Public_BPFL_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_gusta_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_UnrealPSKPSA_Source_UnrealPSKPSA_Public_BPFL_h_20_ACCESSORS \
	FID_Users_gusta_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_UnrealPSKPSA_Source_UnrealPSKPSA_Public_BPFL_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_gusta_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_UnrealPSKPSA_Source_UnrealPSKPSA_Public_BPFL_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALPSKPSA_API UClass* StaticClass<class UBPFL>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_gusta_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_Uiana_1_09_UnrealPSKPSA_Source_UnrealPSKPSA_Public_BPFL_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
