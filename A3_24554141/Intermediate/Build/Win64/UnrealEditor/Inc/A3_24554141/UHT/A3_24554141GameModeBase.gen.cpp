// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "A3_24554141/A3_24554141GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeA3_24554141GameModeBase() {}
// Cross Module References
	A3_24554141_API UClass* Z_Construct_UClass_AA3_24554141GameModeBase();
	A3_24554141_API UClass* Z_Construct_UClass_AA3_24554141GameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_A3_24554141();
// End Cross Module References
	void AA3_24554141GameModeBase::StaticRegisterNativesAA3_24554141GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AA3_24554141GameModeBase);
	UClass* Z_Construct_UClass_AA3_24554141GameModeBase_NoRegister()
	{
		return AA3_24554141GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AA3_24554141GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AA3_24554141GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_A3_24554141,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AA3_24554141GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "A3_24554141GameModeBase.h" },
		{ "ModuleRelativePath", "A3_24554141GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AA3_24554141GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AA3_24554141GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AA3_24554141GameModeBase_Statics::ClassParams = {
		&AA3_24554141GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AA3_24554141GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AA3_24554141GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AA3_24554141GameModeBase()
	{
		if (!Z_Registration_Info_UClass_AA3_24554141GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AA3_24554141GameModeBase.OuterSingleton, Z_Construct_UClass_AA3_24554141GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AA3_24554141GameModeBase.OuterSingleton;
	}
	template<> A3_24554141_API UClass* StaticClass<AA3_24554141GameModeBase>()
	{
		return AA3_24554141GameModeBase::StaticClass();
	}
	AA3_24554141GameModeBase::AA3_24554141GameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AA3_24554141GameModeBase);
	AA3_24554141GameModeBase::~AA3_24554141GameModeBase() {}
	struct Z_CompiledInDeferFile_FID_A3_24554141_Source_A3_24554141_A3_24554141GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_A3_24554141_Source_A3_24554141_A3_24554141GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AA3_24554141GameModeBase, AA3_24554141GameModeBase::StaticClass, TEXT("AA3_24554141GameModeBase"), &Z_Registration_Info_UClass_AA3_24554141GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AA3_24554141GameModeBase), 1363132708U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_A3_24554141_Source_A3_24554141_A3_24554141GameModeBase_h_2196725924(TEXT("/Script/A3_24554141"),
		Z_CompiledInDeferFile_FID_A3_24554141_Source_A3_24554141_A3_24554141GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_A3_24554141_Source_A3_24554141_A3_24554141GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
