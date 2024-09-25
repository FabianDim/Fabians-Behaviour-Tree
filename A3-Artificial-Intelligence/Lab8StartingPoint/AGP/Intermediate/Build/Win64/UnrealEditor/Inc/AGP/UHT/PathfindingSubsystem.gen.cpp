// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/Pathfinding/PathfindingSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathfindingSubsystem() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_UPathfindingSubsystem();
	AGP_API UClass* Z_Construct_UClass_UPathfindingSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void UPathfindingSubsystem::StaticRegisterNativesUPathfindingSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPathfindingSubsystem);
	UClass* Z_Construct_UClass_UPathfindingSubsystem_NoRegister()
	{
		return UPathfindingSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UPathfindingSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPathfindingSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathfindingSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Pathfinding/PathfindingSubsystem.h" },
		{ "ModuleRelativePath", "Pathfinding/PathfindingSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPathfindingSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathfindingSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPathfindingSubsystem_Statics::ClassParams = {
		&UPathfindingSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPathfindingSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPathfindingSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPathfindingSubsystem()
	{
		if (!Z_Registration_Info_UClass_UPathfindingSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPathfindingSubsystem.OuterSingleton, Z_Construct_UClass_UPathfindingSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPathfindingSubsystem.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<UPathfindingSubsystem>()
	{
		return UPathfindingSubsystem::StaticClass();
	}
	UPathfindingSubsystem::UPathfindingSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPathfindingSubsystem);
	UPathfindingSubsystem::~UPathfindingSubsystem() {}
	struct Z_CompiledInDeferFile_FID_AGP_Source_AGP_Pathfinding_PathfindingSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Pathfinding_PathfindingSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPathfindingSubsystem, UPathfindingSubsystem::StaticClass, TEXT("UPathfindingSubsystem"), &Z_Registration_Info_UClass_UPathfindingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPathfindingSubsystem), 591851251U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Pathfinding_PathfindingSubsystem_h_3749182418(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_AGP_Source_AGP_Pathfinding_PathfindingSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AGP_Source_AGP_Pathfinding_PathfindingSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
