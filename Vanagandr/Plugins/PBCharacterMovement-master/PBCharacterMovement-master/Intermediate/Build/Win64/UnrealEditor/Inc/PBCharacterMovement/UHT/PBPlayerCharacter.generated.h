// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/PBPlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPBPlayerMovement;
#ifdef PBCHARACTERMOVEMENT_PBPlayerCharacter_generated_h
#error "PBPlayerCharacter.generated.h already included, missing '#pragma once' in PBPlayerCharacter.h"
#endif
#define PBCHARACTERMOVEMENT_PBPlayerCharacter_generated_h

#define FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerCharacter_h_24_SPARSE_DATA
#define FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerCharacter_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLookUp); \
	DECLARE_FUNCTION(execTurn); \
	DECLARE_FUNCTION(execMove); \
	DECLARE_FUNCTION(execGetMinSpeedForFallDamage); \
	DECLARE_FUNCTION(execToggleNoClip); \
	DECLARE_FUNCTION(execGetMovementPtr); \
	DECLARE_FUNCTION(execSetAutoBunnyhop); \
	DECLARE_FUNCTION(execGetAutoBunnyhop); \
	DECLARE_FUNCTION(execSetBaseLookUpRate); \
	DECLARE_FUNCTION(execGetBaseLookUpRate); \
	DECLARE_FUNCTION(execSetBaseTurnRate); \
	DECLARE_FUNCTION(execGetBaseTurnRate); \
	DECLARE_FUNCTION(execDoesWantToWalk); \
	DECLARE_FUNCTION(execIsSprinting);


#define FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLookUp); \
	DECLARE_FUNCTION(execTurn); \
	DECLARE_FUNCTION(execMove); \
	DECLARE_FUNCTION(execGetMinSpeedForFallDamage); \
	DECLARE_FUNCTION(execToggleNoClip); \
	DECLARE_FUNCTION(execGetMovementPtr); \
	DECLARE_FUNCTION(execSetAutoBunnyhop); \
	DECLARE_FUNCTION(execGetAutoBunnyhop); \
	DECLARE_FUNCTION(execSetBaseLookUpRate); \
	DECLARE_FUNCTION(execGetBaseLookUpRate); \
	DECLARE_FUNCTION(execSetBaseTurnRate); \
	DECLARE_FUNCTION(execGetBaseTurnRate); \
	DECLARE_FUNCTION(execDoesWantToWalk); \
	DECLARE_FUNCTION(execIsSprinting);


#define FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerCharacter_h_24_ACCESSORS
#define FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPBPlayerCharacter(); \
	friend struct Z_Construct_UClass_APBPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APBPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PBCharacterMovement"), NO_API) \
	DECLARE_SERIALIZER(APBPlayerCharacter)


#define FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerCharacter_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAPBPlayerCharacter(); \
	friend struct Z_Construct_UClass_APBPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APBPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PBCharacterMovement"), NO_API) \
	DECLARE_SERIALIZER(APBPlayerCharacter)


#define FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerCharacter_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APBPlayerCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APBPlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APBPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APBPlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APBPlayerCharacter(APBPlayerCharacter&&); \
	NO_API APBPlayerCharacter(const APBPlayerCharacter&); \
public: \
	NO_API virtual ~APBPlayerCharacter();


#define FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APBPlayerCharacter(APBPlayerCharacter&&); \
	NO_API APBPlayerCharacter(const APBPlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APBPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APBPlayerCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APBPlayerCharacter) \
	NO_API virtual ~APBPlayerCharacter();


#define FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerCharacter_h_21_PROLOG
#define FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerCharacter_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerCharacter_h_24_SPARSE_DATA \
	FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerCharacter_h_24_RPC_WRAPPERS \
	FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerCharacter_h_24_ACCESSORS \
	FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerCharacter_h_24_INCLASS \
	FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerCharacter_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerCharacter_h_24_SPARSE_DATA \
	FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerCharacter_h_24_ACCESSORS \
	FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PBCHARACTERMOVEMENT_API UClass* StaticClass<class APBPlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_elliot_birgell_Documents_Unreal_Projects_Vanagandr_Vanagandr_Plugins_PBCharacterMovement_master_PBCharacterMovement_master_Source_PBCharacterMovement_Public_Character_PBPlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
