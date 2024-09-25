// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/Pickups/WeaponPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponPickup() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_APickupBase();
	AGP_API UClass* Z_Construct_UClass_AWeaponPickup();
	AGP_API UClass* Z_Construct_UClass_AWeaponPickup_NoRegister();
	AGP_API UEnum* Z_Construct_UEnum_AGP_EWeaponRarity();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponRarity;
	static UEnum* EWeaponRarity_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWeaponRarity.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWeaponRarity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AGP_EWeaponRarity, (UObject*)Z_Construct_UPackage__Script_AGP(), TEXT("EWeaponRarity"));
		}
		return Z_Registration_Info_UEnum_EWeaponRarity.OuterSingleton;
	}
	template<> AGP_API UEnum* StaticEnum<EWeaponRarity>()
	{
		return EWeaponRarity_StaticEnum();
	}
	struct Z_Construct_UEnum_AGP_EWeaponRarity_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AGP_EWeaponRarity_Statics::Enumerators[] = {
		{ "EWeaponRarity::Common", (int64)EWeaponRarity::Common },
		{ "EWeaponRarity::Rare", (int64)EWeaponRarity::Rare },
		{ "EWeaponRarity::Master", (int64)EWeaponRarity::Master },
		{ "EWeaponRarity::Legendary", (int64)EWeaponRarity::Legendary },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AGP_EWeaponRarity_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Common.Name", "EWeaponRarity::Common" },
		{ "Legendary.Name", "EWeaponRarity::Legendary" },
		{ "Master.Name", "EWeaponRarity::Master" },
		{ "ModuleRelativePath", "Pickups/WeaponPickup.h" },
		{ "Rare.Name", "EWeaponRarity::Rare" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AGP_EWeaponRarity_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AGP,
		nullptr,
		"EWeaponRarity",
		"EWeaponRarity",
		Z_Construct_UEnum_AGP_EWeaponRarity_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AGP_EWeaponRarity_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AGP_EWeaponRarity_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AGP_EWeaponRarity_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AGP_EWeaponRarity()
	{
		if (!Z_Registration_Info_UEnum_EWeaponRarity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponRarity.InnerSingleton, Z_Construct_UEnum_AGP_EWeaponRarity_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWeaponRarity.InnerSingleton;
	}
	static FName NAME_AWeaponPickup_UpdateWeaponPickupMaterial = FName(TEXT("UpdateWeaponPickupMaterial"));
	void AWeaponPickup::UpdateWeaponPickupMaterial()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWeaponPickup_UpdateWeaponPickupMaterial),NULL);
	}
	void AWeaponPickup::StaticRegisterNativesAWeaponPickup()
	{
	}
	struct Z_Construct_UFunction_AWeaponPickup_UpdateWeaponPickupMaterial_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponPickup_UpdateWeaponPickupMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickups/WeaponPickup.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponPickup_UpdateWeaponPickupMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponPickup, nullptr, "UpdateWeaponPickupMaterial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponPickup_UpdateWeaponPickupMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponPickup_UpdateWeaponPickupMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponPickup_UpdateWeaponPickupMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeaponPickup_UpdateWeaponPickupMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeaponPickup);
	UClass* Z_Construct_UClass_AWeaponPickup_NoRegister()
	{
		return AWeaponPickup::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_WeaponRarity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponRarity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WeaponRarity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickupBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeaponPickup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponPickup_UpdateWeaponPickupMaterial, "UpdateWeaponPickupMaterial" }, // 1375589378
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Pickups/WeaponPickup.h" },
		{ "ModuleRelativePath", "Pickups/WeaponPickup.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponRarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponRarity_MetaData[] = {
		{ "Category", "WeaponPickup" },
		{ "ModuleRelativePath", "Pickups/WeaponPickup.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponRarity = { "WeaponRarity", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWeaponPickup, WeaponRarity), Z_Construct_UEnum_AGP_EWeaponRarity, METADATA_PARAMS(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponRarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponRarity_MetaData)) }; // 2441037178
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponPickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponRarity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponRarity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponPickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeaponPickup_Statics::ClassParams = {
		&AWeaponPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeaponPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeaponPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponPickup()
	{
		if (!Z_Registration_Info_UClass_AWeaponPickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeaponPickup.OuterSingleton, Z_Construct_UClass_AWeaponPickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWeaponPickup.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<AWeaponPickup>()
	{
		return AWeaponPickup::StaticClass();
	}
	AWeaponPickup::AWeaponPickup() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponPickup);
	AWeaponPickup::~AWeaponPickup() {}
	struct Z_CompiledInDeferFile_FID_AGP_Source_AGP_Pickups_WeaponPickup_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Pickups_WeaponPickup_h_Statics::EnumInfo[] = {
		{ EWeaponRarity_StaticEnum, TEXT("EWeaponRarity"), &Z_Registration_Info_UEnum_EWeaponRarity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2441037178U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Pickups_WeaponPickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWeaponPickup, AWeaponPickup::StaticClass, TEXT("AWeaponPickup"), &Z_Registration_Info_UClass_AWeaponPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeaponPickup), 369035739U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Pickups_WeaponPickup_h_2693119641(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_AGP_Source_AGP_Pickups_WeaponPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AGP_Source_AGP_Pickups_WeaponPickup_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AGP_Source_AGP_Pickups_WeaponPickup_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AGP_Source_AGP_Pickups_WeaponPickup_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
