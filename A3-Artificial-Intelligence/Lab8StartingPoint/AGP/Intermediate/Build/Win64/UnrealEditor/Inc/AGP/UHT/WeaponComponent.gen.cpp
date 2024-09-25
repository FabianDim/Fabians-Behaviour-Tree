// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/Characters/WeaponComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponComponent() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_UWeaponComponent();
	AGP_API UClass* Z_Construct_UClass_UWeaponComponent_NoRegister();
	AGP_API UEnum* Z_Construct_UEnum_AGP_EWeaponType();
	AGP_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponStats();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponType;
	static UEnum* EWeaponType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWeaponType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWeaponType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AGP_EWeaponType, (UObject*)Z_Construct_UPackage__Script_AGP(), TEXT("EWeaponType"));
		}
		return Z_Registration_Info_UEnum_EWeaponType.OuterSingleton;
	}
	template<> AGP_API UEnum* StaticEnum<EWeaponType>()
	{
		return EWeaponType_StaticEnum();
	}
	struct Z_Construct_UEnum_AGP_EWeaponType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AGP_EWeaponType_Statics::Enumerators[] = {
		{ "EWeaponType::Rifle", (int64)EWeaponType::Rifle },
		{ "EWeaponType::Pistol", (int64)EWeaponType::Pistol },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AGP_EWeaponType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Characters/WeaponComponent.h" },
		{ "Pistol.Name", "EWeaponType::Pistol" },
		{ "Rifle.Name", "EWeaponType::Rifle" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AGP_EWeaponType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AGP,
		nullptr,
		"EWeaponType",
		"EWeaponType",
		Z_Construct_UEnum_AGP_EWeaponType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AGP_EWeaponType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AGP_EWeaponType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AGP_EWeaponType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AGP_EWeaponType()
	{
		if (!Z_Registration_Info_UEnum_EWeaponType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponType.InnerSingleton, Z_Construct_UEnum_AGP_EWeaponType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWeaponType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeaponStats;
class UScriptStruct* FWeaponStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeaponStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponStats, (UObject*)Z_Construct_UPackage__Script_AGP(), TEXT("WeaponStats"));
	}
	return Z_Registration_Info_UScriptStruct_WeaponStats.OuterSingleton;
}
template<> AGP_API UScriptStruct* StaticStruct<FWeaponStats>()
{
	return FWeaponStats::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWeaponStats_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponStats_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Characters/WeaponComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponStats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponStats>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponStats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
		nullptr,
		&NewStructOps,
		"WeaponStats",
		sizeof(FWeaponStats),
		alignof(FWeaponStats),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponStats_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponStats_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponStats()
	{
		if (!Z_Registration_Info_UScriptStruct_WeaponStats.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeaponStats.InnerSingleton, Z_Construct_UScriptStruct_FWeaponStats_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WeaponStats.InnerSingleton;
	}
	void UWeaponComponent::StaticRegisterNativesUWeaponComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeaponComponent);
	UClass* Z_Construct_UClass_UWeaponComponent_NoRegister()
	{
		return UWeaponComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Characters/WeaponComponent.h" },
		{ "ModuleRelativePath", "Characters/WeaponComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponComponent_Statics::ClassParams = {
		&UWeaponComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWeaponComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponComponent()
	{
		if (!Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton, Z_Construct_UClass_UWeaponComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWeaponComponent.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<UWeaponComponent>()
	{
		return UWeaponComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponComponent);
	UWeaponComponent::~UWeaponComponent() {}
	struct Z_CompiledInDeferFile_FID_AGP_Source_AGP_Characters_WeaponComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Characters_WeaponComponent_h_Statics::EnumInfo[] = {
		{ EWeaponType_StaticEnum, TEXT("EWeaponType"), &Z_Registration_Info_UEnum_EWeaponType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1388443149U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Characters_WeaponComponent_h_Statics::ScriptStructInfo[] = {
		{ FWeaponStats::StaticStruct, Z_Construct_UScriptStruct_FWeaponStats_Statics::NewStructOps, TEXT("WeaponStats"), &Z_Registration_Info_UScriptStruct_WeaponStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponStats), 3548362594U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Characters_WeaponComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponComponent, UWeaponComponent::StaticClass, TEXT("UWeaponComponent"), &Z_Registration_Info_UClass_UWeaponComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponComponent), 3304770624U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Characters_WeaponComponent_h_2860899301(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_AGP_Source_AGP_Characters_WeaponComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AGP_Source_AGP_Characters_WeaponComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_AGP_Source_AGP_Characters_WeaponComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AGP_Source_AGP_Characters_WeaponComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_AGP_Source_AGP_Characters_WeaponComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AGP_Source_AGP_Characters_WeaponComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
