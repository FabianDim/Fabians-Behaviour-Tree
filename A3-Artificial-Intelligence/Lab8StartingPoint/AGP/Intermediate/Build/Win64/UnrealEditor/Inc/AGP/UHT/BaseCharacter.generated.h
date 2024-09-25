// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/BaseCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AGP_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define AGP_BaseCharacter_generated_h

#define FID_AGP_Source_AGP_Characters_BaseCharacter_h_15_SPARSE_DATA
#define FID_AGP_Source_AGP_Characters_BaseCharacter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasWeapon);


#define FID_AGP_Source_AGP_Characters_BaseCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasWeapon);


#define FID_AGP_Source_AGP_Characters_BaseCharacter_h_15_ACCESSORS
#define FID_AGP_Source_AGP_Characters_BaseCharacter_h_15_CALLBACK_WRAPPERS
#define FID_AGP_Source_AGP_Characters_BaseCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGP"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define FID_AGP_Source_AGP_Characters_BaseCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGP"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define FID_AGP_Source_AGP_Characters_BaseCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	NO_API virtual ~ABaseCharacter();


#define FID_AGP_Source_AGP_Characters_BaseCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter) \
	NO_API virtual ~ABaseCharacter();


#define FID_AGP_Source_AGP_Characters_BaseCharacter_h_12_PROLOG
#define FID_AGP_Source_AGP_Characters_BaseCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AGP_Source_AGP_Characters_BaseCharacter_h_15_SPARSE_DATA \
	FID_AGP_Source_AGP_Characters_BaseCharacter_h_15_RPC_WRAPPERS \
	FID_AGP_Source_AGP_Characters_BaseCharacter_h_15_ACCESSORS \
	FID_AGP_Source_AGP_Characters_BaseCharacter_h_15_CALLBACK_WRAPPERS \
	FID_AGP_Source_AGP_Characters_BaseCharacter_h_15_INCLASS \
	FID_AGP_Source_AGP_Characters_BaseCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AGP_Source_AGP_Characters_BaseCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AGP_Source_AGP_Characters_BaseCharacter_h_15_SPARSE_DATA \
	FID_AGP_Source_AGP_Characters_BaseCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AGP_Source_AGP_Characters_BaseCharacter_h_15_ACCESSORS \
	FID_AGP_Source_AGP_Characters_BaseCharacter_h_15_CALLBACK_WRAPPERS \
	FID_AGP_Source_AGP_Characters_BaseCharacter_h_15_INCLASS_NO_PURE_DECLS \
	FID_AGP_Source_AGP_Characters_BaseCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGP_API UClass* StaticClass<class ABaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AGP_Source_AGP_Characters_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
