// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/EnemyCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef AGP_EnemyCharacter_generated_h
#error "EnemyCharacter.generated.h already included, missing '#pragma once' in EnemyCharacter.h"
#endif
#define AGP_EnemyCharacter_generated_h

#define FID_AGP_Source_AGP_Characters_EnemyCharacter_h_34_SPARSE_DATA
#define FID_AGP_Source_AGP_Characters_EnemyCharacter_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSensedPawn);


#define FID_AGP_Source_AGP_Characters_EnemyCharacter_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSensedPawn);


#define FID_AGP_Source_AGP_Characters_EnemyCharacter_h_34_ACCESSORS
#define FID_AGP_Source_AGP_Characters_EnemyCharacter_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyCharacter(); \
	friend struct Z_Construct_UClass_AEnemyCharacter_Statics; \
public: \
	DECLARE_CLASS(AEnemyCharacter, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGP"), NO_API) \
	DECLARE_SERIALIZER(AEnemyCharacter)


#define FID_AGP_Source_AGP_Characters_EnemyCharacter_h_34_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyCharacter(); \
	friend struct Z_Construct_UClass_AEnemyCharacter_Statics; \
public: \
	DECLARE_CLASS(AEnemyCharacter, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGP"), NO_API) \
	DECLARE_SERIALIZER(AEnemyCharacter)


#define FID_AGP_Source_AGP_Characters_EnemyCharacter_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyCharacter(AEnemyCharacter&&); \
	NO_API AEnemyCharacter(const AEnemyCharacter&); \
public: \
	NO_API virtual ~AEnemyCharacter();


#define FID_AGP_Source_AGP_Characters_EnemyCharacter_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyCharacter(AEnemyCharacter&&); \
	NO_API AEnemyCharacter(const AEnemyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyCharacter) \
	NO_API virtual ~AEnemyCharacter();


#define FID_AGP_Source_AGP_Characters_EnemyCharacter_h_31_PROLOG
#define FID_AGP_Source_AGP_Characters_EnemyCharacter_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AGP_Source_AGP_Characters_EnemyCharacter_h_34_SPARSE_DATA \
	FID_AGP_Source_AGP_Characters_EnemyCharacter_h_34_RPC_WRAPPERS \
	FID_AGP_Source_AGP_Characters_EnemyCharacter_h_34_ACCESSORS \
	FID_AGP_Source_AGP_Characters_EnemyCharacter_h_34_INCLASS \
	FID_AGP_Source_AGP_Characters_EnemyCharacter_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AGP_Source_AGP_Characters_EnemyCharacter_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AGP_Source_AGP_Characters_EnemyCharacter_h_34_SPARSE_DATA \
	FID_AGP_Source_AGP_Characters_EnemyCharacter_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AGP_Source_AGP_Characters_EnemyCharacter_h_34_ACCESSORS \
	FID_AGP_Source_AGP_Characters_EnemyCharacter_h_34_INCLASS_NO_PURE_DECLS \
	FID_AGP_Source_AGP_Characters_EnemyCharacter_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGP_API UClass* StaticClass<class AEnemyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AGP_Source_AGP_Characters_EnemyCharacter_h


#define FOREACH_ENUM_EENEMYSTATE(op) \
	op(EEnemyState::Patrol) \
	op(EEnemyState::Engage) \
	op(EEnemyState::Evade) 

enum class EEnemyState : uint8;
template<> struct TIsUEnumClass<EEnemyState> { enum { Value = true }; };
template<> AGP_API UEnum* StaticEnum<EEnemyState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
