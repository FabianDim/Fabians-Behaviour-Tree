// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/Pickups/PickupManagerSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupManagerSubsystem() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_UPickupManagerSubsystem();
	AGP_API UClass* Z_Construct_UClass_UPickupManagerSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void UPickupManagerSubsystem::StaticRegisterNativesUPickupManagerSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPickupManagerSubsystem);
	UClass* Z_Construct_UClass_UPickupManagerSubsystem_NoRegister()
	{
		return UPickupManagerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UPickupManagerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPickupManagerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickupManagerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Pickups/PickupManagerSubsystem.h" },
		{ "ModuleRelativePath", "Pickups/PickupManagerSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPickupManagerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPickupManagerSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPickupManagerSubsystem_Statics::ClassParams = {
		&UPickupManagerSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPickupManagerSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPickupManagerSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPickupManagerSubsystem()
	{
		if (!Z_Registration_Info_UClass_UPickupManagerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPickupManagerSubsystem.OuterSingleton, Z_Construct_UClass_UPickupManagerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPickupManagerSubsystem.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<UPickupManagerSubsystem>()
	{
		return UPickupManagerSubsystem::StaticClass();
	}
	UPickupManagerSubsystem::UPickupManagerSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPickupManagerSubsystem);
	UPickupManagerSubsystem::~UPickupManagerSubsystem() {}
	struct Z_CompiledInDeferFile_FID_AGP_Source_AGP_Pickups_PickupManagerSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Pickups_PickupManagerSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPickupManagerSubsystem, UPickupManagerSubsystem::StaticClass, TEXT("UPickupManagerSubsystem"), &Z_Registration_Info_UClass_UPickupManagerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPickupManagerSubsystem), 646655357U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Pickups_PickupManagerSubsystem_h_3062623811(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_AGP_Source_AGP_Pickups_PickupManagerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AGP_Source_AGP_Pickups_PickupManagerSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
