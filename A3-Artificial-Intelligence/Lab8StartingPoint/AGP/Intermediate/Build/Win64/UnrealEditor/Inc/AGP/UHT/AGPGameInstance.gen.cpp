// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/AGPGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGPGameInstance() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_AWeaponPickup_NoRegister();
	AGP_API UClass* Z_Construct_UClass_UAGPGameInstance();
	AGP_API UClass* Z_Construct_UClass_UAGPGameInstance_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void UAGPGameInstance::StaticRegisterNativesUAGPGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAGPGameInstance);
	UClass* Z_Construct_UClass_UAGPGameInstance_NoRegister()
	{
		return UAGPGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAGPGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponPickupClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponPickupClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAGPGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGPGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AGPGameInstance.h" },
		{ "ModuleRelativePath", "AGPGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAGPGameInstance_Statics::NewProp_WeaponPickupClass_MetaData[] = {
		{ "Category", "Pickup Classes" },
		{ "ModuleRelativePath", "AGPGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAGPGameInstance_Statics::NewProp_WeaponPickupClass = { "WeaponPickupClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAGPGameInstance, WeaponPickupClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AWeaponPickup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAGPGameInstance_Statics::NewProp_WeaponPickupClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAGPGameInstance_Statics::NewProp_WeaponPickupClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAGPGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGPGameInstance_Statics::NewProp_WeaponPickupClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAGPGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAGPGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAGPGameInstance_Statics::ClassParams = {
		&UAGPGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAGPGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAGPGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAGPGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAGPGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAGPGameInstance()
	{
		if (!Z_Registration_Info_UClass_UAGPGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAGPGameInstance.OuterSingleton, Z_Construct_UClass_UAGPGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAGPGameInstance.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<UAGPGameInstance>()
	{
		return UAGPGameInstance::StaticClass();
	}
	UAGPGameInstance::UAGPGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAGPGameInstance);
	UAGPGameInstance::~UAGPGameInstance() {}
	struct Z_CompiledInDeferFile_FID_AGP_Source_AGP_AGPGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_AGPGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAGPGameInstance, UAGPGameInstance::StaticClass, TEXT("UAGPGameInstance"), &Z_Registration_Info_UClass_UAGPGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAGPGameInstance), 2422302090U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_AGPGameInstance_h_965781827(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_AGP_Source_AGP_AGPGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AGP_Source_AGP_AGPGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
