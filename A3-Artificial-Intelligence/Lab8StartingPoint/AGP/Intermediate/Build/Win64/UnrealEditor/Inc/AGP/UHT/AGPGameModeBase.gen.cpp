// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/AGPGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGPGameModeBase() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_AAGPGameModeBase();
	AGP_API UClass* Z_Construct_UClass_AAGPGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void AAGPGameModeBase::StaticRegisterNativesAAGPGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAGPGameModeBase);
	UClass* Z_Construct_UClass_AAGPGameModeBase_NoRegister()
	{
		return AAGPGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AAGPGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAGPGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAGPGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AGPGameModeBase.h" },
		{ "ModuleRelativePath", "AGPGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAGPGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAGPGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAGPGameModeBase_Statics::ClassParams = {
		&AAGPGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAGPGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAGPGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAGPGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AAGPGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAGPGameModeBase.OuterSingleton, Z_Construct_UClass_AAGPGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAGPGameModeBase.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<AAGPGameModeBase>()
	{
		return AAGPGameModeBase::StaticClass();
	}
	AAGPGameModeBase::AAGPGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAGPGameModeBase);
	AAGPGameModeBase::~AAGPGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_AGP_Source_AGP_AGPGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_AGPGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAGPGameModeBase, AAGPGameModeBase::StaticClass, TEXT("AAGPGameModeBase"), &Z_Registration_Info_UClass_AAGPGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAGPGameModeBase), 3094602550U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_AGPGameModeBase_h_3726987486(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_AGP_Source_AGP_AGPGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AGP_Source_AGP_AGPGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
