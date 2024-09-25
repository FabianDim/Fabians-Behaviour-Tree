// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/WeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AGP_WeaponComponent_generated_h
#error "WeaponComponent.generated.h already included, missing '#pragma once' in WeaponComponent.h"
#endif
#define AGP_WeaponComponent_generated_h

#define FID_AGP_Source_AGP_Characters_WeaponComponent_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponStats_Statics; \
	AGP_API static class UScriptStruct* StaticStruct();


template<> AGP_API UScriptStruct* StaticStruct<struct FWeaponStats>();

#define FID_AGP_Source_AGP_Characters_WeaponComponent_h_47_SPARSE_DATA
#define FID_AGP_Source_AGP_Characters_WeaponComponent_h_47_RPC_WRAPPERS
#define FID_AGP_Source_AGP_Characters_WeaponComponent_h_47_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_AGP_Source_AGP_Characters_WeaponComponent_h_47_ACCESSORS
#define FID_AGP_Source_AGP_Characters_WeaponComponent_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponComponent(); \
	friend struct Z_Construct_UClass_UWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGP"), NO_API) \
	DECLARE_SERIALIZER(UWeaponComponent)


#define FID_AGP_Source_AGP_Characters_WeaponComponent_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUWeaponComponent(); \
	friend struct Z_Construct_UClass_UWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGP"), NO_API) \
	DECLARE_SERIALIZER(UWeaponComponent)


#define FID_AGP_Source_AGP_Characters_WeaponComponent_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponComponent(UWeaponComponent&&); \
	NO_API UWeaponComponent(const UWeaponComponent&); \
public: \
	NO_API virtual ~UWeaponComponent();


#define FID_AGP_Source_AGP_Characters_WeaponComponent_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponComponent(UWeaponComponent&&); \
	NO_API UWeaponComponent(const UWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponComponent) \
	NO_API virtual ~UWeaponComponent();


#define FID_AGP_Source_AGP_Characters_WeaponComponent_h_44_PROLOG
#define FID_AGP_Source_AGP_Characters_WeaponComponent_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AGP_Source_AGP_Characters_WeaponComponent_h_47_SPARSE_DATA \
	FID_AGP_Source_AGP_Characters_WeaponComponent_h_47_RPC_WRAPPERS \
	FID_AGP_Source_AGP_Characters_WeaponComponent_h_47_ACCESSORS \
	FID_AGP_Source_AGP_Characters_WeaponComponent_h_47_INCLASS \
	FID_AGP_Source_AGP_Characters_WeaponComponent_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AGP_Source_AGP_Characters_WeaponComponent_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AGP_Source_AGP_Characters_WeaponComponent_h_47_SPARSE_DATA \
	FID_AGP_Source_AGP_Characters_WeaponComponent_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AGP_Source_AGP_Characters_WeaponComponent_h_47_ACCESSORS \
	FID_AGP_Source_AGP_Characters_WeaponComponent_h_47_INCLASS_NO_PURE_DECLS \
	FID_AGP_Source_AGP_Characters_WeaponComponent_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGP_API UClass* StaticClass<class UWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AGP_Source_AGP_Characters_WeaponComponent_h


#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::Rifle) \
	op(EWeaponType::Pistol) 

enum class EWeaponType : uint8;
template<> struct TIsUEnumClass<EWeaponType> { enum { Value = true }; };
template<> AGP_API UEnum* StaticEnum<EWeaponType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
