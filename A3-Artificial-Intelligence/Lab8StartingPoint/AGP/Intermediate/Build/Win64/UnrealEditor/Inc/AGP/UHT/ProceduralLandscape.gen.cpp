// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/Landscape/ProceduralLandscape.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralLandscape() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_AProceduralLandscape();
	AGP_API UClass* Z_Construct_UClass_AProceduralLandscape_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void AProceduralLandscape::StaticRegisterNativesAProceduralLandscape()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProceduralLandscape);
	UClass* Z_Construct_UClass_AProceduralLandscape_NoRegister()
	{
		return AProceduralLandscape::StaticClass();
	}
	struct Z_Construct_UClass_AProceduralLandscape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVCoords_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVCoords_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UVCoords;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerlinScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PerlinScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerlinRoughness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PerlinRoughness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerlinOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PerlinOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldRegenerate_MetaData[];
#endif
		static void NewProp_bShouldRegenerate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldRegenerate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProceduralLandscape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLandscape_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Landscape/ProceduralLandscape.h" },
		{ "ModuleRelativePath", "Landscape/ProceduralLandscape.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_ProceduralMesh_MetaData[] = {
		{ "Category", "ProceduralLandscape" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Landscape/ProceduralLandscape.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_ProceduralMesh = { "ProceduralMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AProceduralLandscape, ProceduralMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_ProceduralMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_ProceduralMesh_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_Vertices_MetaData[] = {
		{ "ModuleRelativePath", "Landscape/ProceduralLandscape.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AProceduralLandscape, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_Vertices_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_Triangles_MetaData[] = {
		{ "ModuleRelativePath", "Landscape/ProceduralLandscape.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AProceduralLandscape, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_Triangles_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_UVCoords_Inner = { "UVCoords", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_UVCoords_MetaData[] = {
		{ "ModuleRelativePath", "Landscape/ProceduralLandscape.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_UVCoords = { "UVCoords", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AProceduralLandscape, UVCoords), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_UVCoords_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_UVCoords_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "ProceduralLandscape" },
		{ "Comment", "// Landscape Generation Settings.\n" },
		{ "ModuleRelativePath", "Landscape/ProceduralLandscape.h" },
		{ "ToolTip", "Landscape Generation Settings." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AProceduralLandscape, Width), METADATA_PARAMS(Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "ProceduralLandscape" },
		{ "ModuleRelativePath", "Landscape/ProceduralLandscape.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AProceduralLandscape, Height), METADATA_PARAMS(Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_VertexSpacing_MetaData[] = {
		{ "Category", "ProceduralLandscape" },
		{ "ModuleRelativePath", "Landscape/ProceduralLandscape.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_VertexSpacing = { "VertexSpacing", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AProceduralLandscape, VertexSpacing), METADATA_PARAMS(Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_VertexSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_VertexSpacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_PerlinScale_MetaData[] = {
		{ "Category", "ProceduralLandscape" },
		{ "ModuleRelativePath", "Landscape/ProceduralLandscape.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_PerlinScale = { "PerlinScale", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AProceduralLandscape, PerlinScale), METADATA_PARAMS(Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_PerlinScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_PerlinScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_PerlinRoughness_MetaData[] = {
		{ "Category", "ProceduralLandscape" },
		{ "ModuleRelativePath", "Landscape/ProceduralLandscape.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_PerlinRoughness = { "PerlinRoughness", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AProceduralLandscape, PerlinRoughness), METADATA_PARAMS(Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_PerlinRoughness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_PerlinRoughness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_PerlinOffset_MetaData[] = {
		{ "Category", "ProceduralLandscape" },
		{ "ModuleRelativePath", "Landscape/ProceduralLandscape.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_PerlinOffset = { "PerlinOffset", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AProceduralLandscape, PerlinOffset), METADATA_PARAMS(Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_PerlinOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_PerlinOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_bShouldRegenerate_MetaData[] = {
		{ "Category", "ProceduralLandscape" },
		{ "ModuleRelativePath", "Landscape/ProceduralLandscape.h" },
	};
#endif
	void Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_bShouldRegenerate_SetBit(void* Obj)
	{
		((AProceduralLandscape*)Obj)->bShouldRegenerate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_bShouldRegenerate = { "bShouldRegenerate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AProceduralLandscape), &Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_bShouldRegenerate_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_bShouldRegenerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_bShouldRegenerate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProceduralLandscape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_ProceduralMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_UVCoords_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_UVCoords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_VertexSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_PerlinScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_PerlinRoughness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_PerlinOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralLandscape_Statics::NewProp_bShouldRegenerate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProceduralLandscape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceduralLandscape>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProceduralLandscape_Statics::ClassParams = {
		&AProceduralLandscape::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProceduralLandscape_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLandscape_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProceduralLandscape_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralLandscape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProceduralLandscape()
	{
		if (!Z_Registration_Info_UClass_AProceduralLandscape.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProceduralLandscape.OuterSingleton, Z_Construct_UClass_AProceduralLandscape_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProceduralLandscape.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<AProceduralLandscape>()
	{
		return AProceduralLandscape::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProceduralLandscape);
	AProceduralLandscape::~AProceduralLandscape() {}
	struct Z_CompiledInDeferFile_FID_AGP_Source_AGP_Landscape_ProceduralLandscape_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Landscape_ProceduralLandscape_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProceduralLandscape, AProceduralLandscape::StaticClass, TEXT("AProceduralLandscape"), &Z_Registration_Info_UClass_AProceduralLandscape, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProceduralLandscape), 400506919U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Landscape_ProceduralLandscape_h_2327875365(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_AGP_Source_AGP_Landscape_ProceduralLandscape_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AGP_Source_AGP_Landscape_ProceduralLandscape_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
