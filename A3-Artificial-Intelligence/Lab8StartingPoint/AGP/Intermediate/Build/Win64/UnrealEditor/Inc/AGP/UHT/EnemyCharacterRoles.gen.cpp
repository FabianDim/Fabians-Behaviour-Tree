// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/Characters/EnemyCharacterRoles.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyCharacterRoles() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_AEnemyCharacter();
	AGP_API UClass* Z_Construct_UClass_AEnemyCharacterRoles();
	AGP_API UClass* Z_Construct_UClass_AEnemyCharacterRoles_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void AEnemyCharacterRoles::StaticRegisterNativesAEnemyCharacterRoles()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyCharacterRoles);
	UClass* Z_Construct_UClass_AEnemyCharacterRoles_NoRegister()
	{
		return AEnemyCharacterRoles::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyCharacterRoles_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyCharacterRoles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacterRoles_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/EnemyCharacterRoles.h" },
		{ "ModuleRelativePath", "Characters/EnemyCharacterRoles.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyCharacterRoles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyCharacterRoles>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyCharacterRoles_Statics::ClassParams = {
		&AEnemyCharacterRoles::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacterRoles_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacterRoles_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyCharacterRoles()
	{
		if (!Z_Registration_Info_UClass_AEnemyCharacterRoles.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyCharacterRoles.OuterSingleton, Z_Construct_UClass_AEnemyCharacterRoles_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyCharacterRoles.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<AEnemyCharacterRoles>()
	{
		return AEnemyCharacterRoles::StaticClass();
	}
	AEnemyCharacterRoles::AEnemyCharacterRoles() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyCharacterRoles);
	AEnemyCharacterRoles::~AEnemyCharacterRoles() {}
	struct Z_CompiledInDeferFile_FID_AGP_Source_AGP_Characters_EnemyCharacterRoles_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Characters_EnemyCharacterRoles_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyCharacterRoles, AEnemyCharacterRoles::StaticClass, TEXT("AEnemyCharacterRoles"), &Z_Registration_Info_UClass_AEnemyCharacterRoles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyCharacterRoles), 1182519068U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Characters_EnemyCharacterRoles_h_2828813289(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_AGP_Source_AGP_Characters_EnemyCharacterRoles_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AGP_Source_AGP_Characters_EnemyCharacterRoles_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
