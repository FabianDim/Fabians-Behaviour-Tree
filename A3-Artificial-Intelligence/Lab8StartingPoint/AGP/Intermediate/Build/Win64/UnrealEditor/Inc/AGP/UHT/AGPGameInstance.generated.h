// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AGPGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AGP_AGPGameInstance_generated_h
#error "AGPGameInstance.generated.h already included, missing '#pragma once' in AGPGameInstance.h"
#endif
#define AGP_AGPGameInstance_generated_h

#define FID_AGP_Source_AGP_AGPGameInstance_h_15_SPARSE_DATA
#define FID_AGP_Source_AGP_AGPGameInstance_h_15_RPC_WRAPPERS
#define FID_AGP_Source_AGP_AGPGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_AGP_Source_AGP_AGPGameInstance_h_15_ACCESSORS
#define FID_AGP_Source_AGP_AGPGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAGPGameInstance(); \
	friend struct Z_Construct_UClass_UAGPGameInstance_Statics; \
public: \
	DECLARE_CLASS(UAGPGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AGP"), NO_API) \
	DECLARE_SERIALIZER(UAGPGameInstance)


#define FID_AGP_Source_AGP_AGPGameInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAGPGameInstance(); \
	friend struct Z_Construct_UClass_UAGPGameInstance_Statics; \
public: \
	DECLARE_CLASS(UAGPGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AGP"), NO_API) \
	DECLARE_SERIALIZER(UAGPGameInstance)


#define FID_AGP_Source_AGP_AGPGameInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAGPGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAGPGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAGPGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAGPGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAGPGameInstance(UAGPGameInstance&&); \
	NO_API UAGPGameInstance(const UAGPGameInstance&); \
public: \
	NO_API virtual ~UAGPGameInstance();


#define FID_AGP_Source_AGP_AGPGameInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAGPGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAGPGameInstance(UAGPGameInstance&&); \
	NO_API UAGPGameInstance(const UAGPGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAGPGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAGPGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAGPGameInstance) \
	NO_API virtual ~UAGPGameInstance();


#define FID_AGP_Source_AGP_AGPGameInstance_h_12_PROLOG
#define FID_AGP_Source_AGP_AGPGameInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AGP_Source_AGP_AGPGameInstance_h_15_SPARSE_DATA \
	FID_AGP_Source_AGP_AGPGameInstance_h_15_RPC_WRAPPERS \
	FID_AGP_Source_AGP_AGPGameInstance_h_15_ACCESSORS \
	FID_AGP_Source_AGP_AGPGameInstance_h_15_INCLASS \
	FID_AGP_Source_AGP_AGPGameInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AGP_Source_AGP_AGPGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AGP_Source_AGP_AGPGameInstance_h_15_SPARSE_DATA \
	FID_AGP_Source_AGP_AGPGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AGP_Source_AGP_AGPGameInstance_h_15_ACCESSORS \
	FID_AGP_Source_AGP_AGPGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_AGP_Source_AGP_AGPGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGP_API UClass* StaticClass<class UAGPGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AGP_Source_AGP_AGPGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
