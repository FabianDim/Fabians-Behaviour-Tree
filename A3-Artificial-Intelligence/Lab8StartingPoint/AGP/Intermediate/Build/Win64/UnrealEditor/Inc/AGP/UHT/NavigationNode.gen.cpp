// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/Pathfinding/NavigationNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationNode() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_ANavigationNode();
	AGP_API UClass* Z_Construct_UClass_ANavigationNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void ANavigationNode::StaticRegisterNativesANavigationNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANavigationNode);
	UClass* Z_Construct_UClass_ANavigationNode_NoRegister()
	{
		return ANavigationNode::StaticClass();
	}
	struct Z_Construct_UClass_ANavigationNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectedNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectedNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConnectedNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LocationComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavigationNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pathfinding/NavigationNode.h" },
		{ "ModuleRelativePath", "Pathfinding/NavigationNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavigationNode_Statics::NewProp_ConnectedNodes_Inner = { "ConnectedNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ANavigationNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationNode_Statics::NewProp_ConnectedNodes_MetaData[] = {
		{ "Category", "NavigationNode" },
		{ "ModuleRelativePath", "Pathfinding/NavigationNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANavigationNode_Statics::NewProp_ConnectedNodes = { "ConnectedNodes", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationNode, ConnectedNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANavigationNode_Statics::NewProp_ConnectedNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationNode_Statics::NewProp_ConnectedNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationNode_Statics::NewProp_LocationComponent_MetaData[] = {
		{ "Category", "NavigationNode" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pathfinding/NavigationNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANavigationNode_Statics::NewProp_LocationComponent = { "LocationComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationNode, LocationComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavigationNode_Statics::NewProp_LocationComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationNode_Statics::NewProp_LocationComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavigationNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationNode_Statics::NewProp_ConnectedNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationNode_Statics::NewProp_ConnectedNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationNode_Statics::NewProp_LocationComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavigationNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavigationNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANavigationNode_Statics::ClassParams = {
		&ANavigationNode::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANavigationNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationNode_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANavigationNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavigationNode()
	{
		if (!Z_Registration_Info_UClass_ANavigationNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANavigationNode.OuterSingleton, Z_Construct_UClass_ANavigationNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANavigationNode.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<ANavigationNode>()
	{
		return ANavigationNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavigationNode);
	ANavigationNode::~ANavigationNode() {}
	struct Z_CompiledInDeferFile_FID_AGP_Source_AGP_Pathfinding_NavigationNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Pathfinding_NavigationNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANavigationNode, ANavigationNode::StaticClass, TEXT("ANavigationNode"), &Z_Registration_Info_UClass_ANavigationNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANavigationNode), 85382825U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Pathfinding_NavigationNode_h_73301221(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_AGP_Source_AGP_Pathfinding_NavigationNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AGP_Source_AGP_Pathfinding_NavigationNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
