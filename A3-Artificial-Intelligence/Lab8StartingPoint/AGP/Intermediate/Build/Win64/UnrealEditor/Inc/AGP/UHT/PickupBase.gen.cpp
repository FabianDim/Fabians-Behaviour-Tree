// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/Pickups/PickupBase.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupBase() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_APickupBase();
	AGP_API UClass* Z_Construct_UClass_APickupBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	DEFINE_FUNCTION(APickupBase::execOnPickupOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPickupOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_HitInfo);
		P_NATIVE_END;
	}
	void APickupBase::StaticRegisterNativesAPickupBase()
	{
		UClass* Class = APickupBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPickupOverlap", &APickupBase::execOnPickupOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics
	{
		struct PickupBase_eventOnPickupOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult HitInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PickupBase_eventOnPickupOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PickupBase_eventOnPickupOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PickupBase_eventOnPickupOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PickupBase_eventOnPickupOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((PickupBase_eventOnPickupOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PickupBase_eventOnPickupOverlap_Parms), &Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::NewProp_HitInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PickupBase_eventOnPickupOverlap_Parms, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::NewProp_HitInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::NewProp_HitInfo_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::NewProp_OtherComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::NewProp_HitInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Pickups/PickupBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupBase, nullptr, "OnPickupOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::PickupBase_eventOnPickupOverlap_Parms), Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickupBase_OnPickupOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickupBase_OnPickupOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickupBase);
	UClass* Z_Construct_UClass_APickupBase_NoRegister()
	{
		return APickupBase::StaticClass();
	}
	struct Z_Construct_UClass_APickupBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupCollider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupCollider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupRoot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickupBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickupBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickupBase_OnPickupOverlap, "OnPickupOverlap" }, // 2150764497
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickups/PickupBase.h" },
		{ "ModuleRelativePath", "Pickups/PickupBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupBase_Statics::NewProp_PickupMesh_MetaData[] = {
		{ "Category", "PickupBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickups/PickupBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupBase_Statics::NewProp_PickupMesh = { "PickupMesh", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APickupBase, PickupMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickupBase_Statics::NewProp_PickupMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupBase_Statics::NewProp_PickupMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupBase_Statics::NewProp_PickupCollider_MetaData[] = {
		{ "Category", "PickupBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickups/PickupBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupBase_Statics::NewProp_PickupCollider = { "PickupCollider", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APickupBase, PickupCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickupBase_Statics::NewProp_PickupCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupBase_Statics::NewProp_PickupCollider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupBase_Statics::NewProp_PickupRoot_MetaData[] = {
		{ "Category", "PickupBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickups/PickupBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupBase_Statics::NewProp_PickupRoot = { "PickupRoot", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APickupBase, PickupRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickupBase_Statics::NewProp_PickupRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupBase_Statics::NewProp_PickupRoot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickupBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupBase_Statics::NewProp_PickupMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupBase_Statics::NewProp_PickupCollider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupBase_Statics::NewProp_PickupRoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickupBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APickupBase_Statics::ClassParams = {
		&APickupBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APickupBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APickupBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APickupBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickupBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickupBase()
	{
		if (!Z_Registration_Info_UClass_APickupBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickupBase.OuterSingleton, Z_Construct_UClass_APickupBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APickupBase.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<APickupBase>()
	{
		return APickupBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupBase);
	APickupBase::~APickupBase() {}
	struct Z_CompiledInDeferFile_FID_AGP_Source_AGP_Pickups_PickupBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Pickups_PickupBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APickupBase, APickupBase::StaticClass, TEXT("APickupBase"), &Z_Registration_Info_UClass_APickupBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickupBase), 661886983U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Pickups_PickupBase_h_1149331421(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_AGP_Source_AGP_Pickups_PickupBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AGP_Source_AGP_Pickups_PickupBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
