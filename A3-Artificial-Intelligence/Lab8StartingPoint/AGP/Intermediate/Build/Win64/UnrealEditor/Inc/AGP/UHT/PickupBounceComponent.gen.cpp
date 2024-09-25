// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/PickupBounceComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupBounceComponent() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_UPickupBounceComponent();
	AGP_API UClass* Z_Construct_UClass_UPickupBounceComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void UPickupBounceComponent::StaticRegisterNativesUPickupBounceComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPickupBounceComponent);
	UClass* Z_Construct_UClass_UPickupBounceComponent_NoRegister()
	{
		return UPickupBounceComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPickupBounceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BounceSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BounceSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BounceExtent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BounceExtent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPickupBounceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickupBounceComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PickupBounceComponent.h" },
		{ "ModuleRelativePath", "PickupBounceComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickupBounceComponent_Statics::NewProp_BounceSpeed_MetaData[] = {
		{ "Category", "PickupBounceComponent" },
		{ "Comment", "/**\n\x09 * The speed that the object will move.\n\x09 */" },
		{ "ModuleRelativePath", "PickupBounceComponent.h" },
		{ "ToolTip", "The speed that the object will move." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPickupBounceComponent_Statics::NewProp_BounceSpeed = { "BounceSpeed", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPickupBounceComponent, BounceSpeed), METADATA_PARAMS(Z_Construct_UClass_UPickupBounceComponent_Statics::NewProp_BounceSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPickupBounceComponent_Statics::NewProp_BounceSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickupBounceComponent_Statics::NewProp_BounceExtent_MetaData[] = {
		{ "Category", "PickupBounceComponent" },
		{ "Comment", "/**\n\x09 * The bounce extent defines how far from its initial position it will move up and down.\n\x09 */" },
		{ "ModuleRelativePath", "PickupBounceComponent.h" },
		{ "ToolTip", "The bounce extent defines how far from its initial position it will move up and down." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPickupBounceComponent_Statics::NewProp_BounceExtent = { "BounceExtent", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPickupBounceComponent, BounceExtent), METADATA_PARAMS(Z_Construct_UClass_UPickupBounceComponent_Statics::NewProp_BounceExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPickupBounceComponent_Statics::NewProp_BounceExtent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPickupBounceComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPickupBounceComponent_Statics::NewProp_BounceSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPickupBounceComponent_Statics::NewProp_BounceExtent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPickupBounceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPickupBounceComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPickupBounceComponent_Statics::ClassParams = {
		&UPickupBounceComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPickupBounceComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPickupBounceComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPickupBounceComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPickupBounceComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPickupBounceComponent()
	{
		if (!Z_Registration_Info_UClass_UPickupBounceComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPickupBounceComponent.OuterSingleton, Z_Construct_UClass_UPickupBounceComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPickupBounceComponent.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<UPickupBounceComponent>()
	{
		return UPickupBounceComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPickupBounceComponent);
	UPickupBounceComponent::~UPickupBounceComponent() {}
	struct Z_CompiledInDeferFile_FID_AGP_Source_AGP_PickupBounceComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_PickupBounceComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPickupBounceComponent, UPickupBounceComponent::StaticClass, TEXT("UPickupBounceComponent"), &Z_Registration_Info_UClass_UPickupBounceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPickupBounceComponent), 3144337859U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_PickupBounceComponent_h_1796061481(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_AGP_Source_AGP_PickupBounceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AGP_Source_AGP_PickupBounceComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
