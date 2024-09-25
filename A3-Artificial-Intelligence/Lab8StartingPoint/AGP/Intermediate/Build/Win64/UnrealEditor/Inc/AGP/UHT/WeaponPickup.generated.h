// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pickups/WeaponPickup.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AGP_WeaponPickup_generated_h
#error "WeaponPickup.generated.h already included, missing '#pragma once' in WeaponPickup.h"
#endif
#define AGP_WeaponPickup_generated_h

#define FID_AGP_Source_AGP_Pickups_WeaponPickup_h_25_SPARSE_DATA
#define FID_AGP_Source_AGP_Pickups_WeaponPickup_h_25_RPC_WRAPPERS
#define FID_AGP_Source_AGP_Pickups_WeaponPickup_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_AGP_Source_AGP_Pickups_WeaponPickup_h_25_ACCESSORS
#define FID_AGP_Source_AGP_Pickups_WeaponPickup_h_25_CALLBACK_WRAPPERS
#define FID_AGP_Source_AGP_Pickups_WeaponPickup_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponPickup(); \
	friend struct Z_Construct_UClass_AWeaponPickup_Statics; \
public: \
	DECLARE_CLASS(AWeaponPickup, APickupBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGP"), NO_API) \
	DECLARE_SERIALIZER(AWeaponPickup)


#define FID_AGP_Source_AGP_Pickups_WeaponPickup_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponPickup(); \
	friend struct Z_Construct_UClass_AWeaponPickup_Statics; \
public: \
	DECLARE_CLASS(AWeaponPickup, APickupBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGP"), NO_API) \
	DECLARE_SERIALIZER(AWeaponPickup)


#define FID_AGP_Source_AGP_Pickups_WeaponPickup_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponPickup(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponPickup(AWeaponPickup&&); \
	NO_API AWeaponPickup(const AWeaponPickup&); \
public: \
	NO_API virtual ~AWeaponPickup();


#define FID_AGP_Source_AGP_Pickups_WeaponPickup_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponPickup(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponPickup(AWeaponPickup&&); \
	NO_API AWeaponPickup(const AWeaponPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponPickup) \
	NO_API virtual ~AWeaponPickup();


#define FID_AGP_Source_AGP_Pickups_WeaponPickup_h_22_PROLOG
#define FID_AGP_Source_AGP_Pickups_WeaponPickup_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AGP_Source_AGP_Pickups_WeaponPickup_h_25_SPARSE_DATA \
	FID_AGP_Source_AGP_Pickups_WeaponPickup_h_25_RPC_WRAPPERS \
	FID_AGP_Source_AGP_Pickups_WeaponPickup_h_25_ACCESSORS \
	FID_AGP_Source_AGP_Pickups_WeaponPickup_h_25_CALLBACK_WRAPPERS \
	FID_AGP_Source_AGP_Pickups_WeaponPickup_h_25_INCLASS \
	FID_AGP_Source_AGP_Pickups_WeaponPickup_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AGP_Source_AGP_Pickups_WeaponPickup_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AGP_Source_AGP_Pickups_WeaponPickup_h_25_SPARSE_DATA \
	FID_AGP_Source_AGP_Pickups_WeaponPickup_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AGP_Source_AGP_Pickups_WeaponPickup_h_25_ACCESSORS \
	FID_AGP_Source_AGP_Pickups_WeaponPickup_h_25_CALLBACK_WRAPPERS \
	FID_AGP_Source_AGP_Pickups_WeaponPickup_h_25_INCLASS_NO_PURE_DECLS \
	FID_AGP_Source_AGP_Pickups_WeaponPickup_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGP_API UClass* StaticClass<class AWeaponPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AGP_Source_AGP_Pickups_WeaponPickup_h


#define FOREACH_ENUM_EWEAPONRARITY(op) \
	op(EWeaponRarity::Common) \
	op(EWeaponRarity::Rare) \
	op(EWeaponRarity::Master) \
	op(EWeaponRarity::Legendary) 

enum class EWeaponRarity : uint8;
template<> struct TIsUEnumClass<EWeaponRarity> { enum { Value = true }; };
template<> AGP_API UEnum* StaticEnum<EWeaponRarity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
