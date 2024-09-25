// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pickups/PickupBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef AGP_PickupBase_generated_h
#error "PickupBase.generated.h already included, missing '#pragma once' in PickupBase.h"
#endif
#define AGP_PickupBase_generated_h

#define FID_AGP_Source_AGP_Pickups_PickupBase_h_14_SPARSE_DATA
#define FID_AGP_Source_AGP_Pickups_PickupBase_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPickupOverlap);


#define FID_AGP_Source_AGP_Pickups_PickupBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPickupOverlap);


#define FID_AGP_Source_AGP_Pickups_PickupBase_h_14_ACCESSORS
#define FID_AGP_Source_AGP_Pickups_PickupBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickupBase(); \
	friend struct Z_Construct_UClass_APickupBase_Statics; \
public: \
	DECLARE_CLASS(APickupBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGP"), NO_API) \
	DECLARE_SERIALIZER(APickupBase)


#define FID_AGP_Source_AGP_Pickups_PickupBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPickupBase(); \
	friend struct Z_Construct_UClass_APickupBase_Statics; \
public: \
	DECLARE_CLASS(APickupBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGP"), NO_API) \
	DECLARE_SERIALIZER(APickupBase)


#define FID_AGP_Source_AGP_Pickups_PickupBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickupBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickupBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupBase(APickupBase&&); \
	NO_API APickupBase(const APickupBase&); \
public: \
	NO_API virtual ~APickupBase();


#define FID_AGP_Source_AGP_Pickups_PickupBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupBase(APickupBase&&); \
	NO_API APickupBase(const APickupBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickupBase) \
	NO_API virtual ~APickupBase();


#define FID_AGP_Source_AGP_Pickups_PickupBase_h_11_PROLOG
#define FID_AGP_Source_AGP_Pickups_PickupBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AGP_Source_AGP_Pickups_PickupBase_h_14_SPARSE_DATA \
	FID_AGP_Source_AGP_Pickups_PickupBase_h_14_RPC_WRAPPERS \
	FID_AGP_Source_AGP_Pickups_PickupBase_h_14_ACCESSORS \
	FID_AGP_Source_AGP_Pickups_PickupBase_h_14_INCLASS \
	FID_AGP_Source_AGP_Pickups_PickupBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AGP_Source_AGP_Pickups_PickupBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AGP_Source_AGP_Pickups_PickupBase_h_14_SPARSE_DATA \
	FID_AGP_Source_AGP_Pickups_PickupBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AGP_Source_AGP_Pickups_PickupBase_h_14_ACCESSORS \
	FID_AGP_Source_AGP_Pickups_PickupBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_AGP_Source_AGP_Pickups_PickupBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGP_API UClass* StaticClass<class APickupBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AGP_Source_AGP_Pickups_PickupBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
