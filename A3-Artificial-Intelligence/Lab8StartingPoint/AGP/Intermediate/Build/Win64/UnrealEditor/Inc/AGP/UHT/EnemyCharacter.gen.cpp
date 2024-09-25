// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/Characters/EnemyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyCharacter() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_ABaseCharacter();
	AGP_API UClass* Z_Construct_UClass_AEnemyCharacter();
	AGP_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();
	AGP_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
	AGP_API UClass* Z_Construct_UClass_UPathfindingSubsystem_NoRegister();
	AGP_API UEnum* Z_Construct_UEnum_AGP_EEnemyState();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnemyState;
	static UEnum* EEnemyState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnemyState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnemyState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AGP_EEnemyState, (UObject*)Z_Construct_UPackage__Script_AGP(), TEXT("EEnemyState"));
		}
		return Z_Registration_Info_UEnum_EEnemyState.OuterSingleton;
	}
	template<> AGP_API UEnum* StaticEnum<EEnemyState>()
	{
		return EEnemyState_StaticEnum();
	}
	struct Z_Construct_UEnum_AGP_EEnemyState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AGP_EEnemyState_Statics::Enumerators[] = {
		{ "EEnemyState::Patrol", (int64)EEnemyState::Patrol },
		{ "EEnemyState::Engage", (int64)EEnemyState::Engage },
		{ "EEnemyState::Evade", (int64)EEnemyState::Evade },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AGP_EEnemyState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An enum to hold the current state of the enemy character.\n */" },
		{ "Engage.Name", "EEnemyState::Engage" },
		{ "Evade.Name", "EEnemyState::Evade" },
		{ "ModuleRelativePath", "Characters/EnemyCharacter.h" },
		{ "Patrol.Name", "EEnemyState::Patrol" },
		{ "ToolTip", "An enum to hold the current state of the enemy character." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AGP_EEnemyState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AGP,
		nullptr,
		"EEnemyState",
		"EEnemyState",
		Z_Construct_UEnum_AGP_EEnemyState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AGP_EEnemyState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AGP_EEnemyState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AGP_EEnemyState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AGP_EEnemyState()
	{
		if (!Z_Registration_Info_UEnum_EEnemyState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnemyState.InnerSingleton, Z_Construct_UEnum_AGP_EEnemyState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnemyState.InnerSingleton;
	}
	DEFINE_FUNCTION(AEnemyCharacter::execOnSensedPawn)
	{
		P_GET_OBJECT(APawn,Z_Param_SensedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSensedPawn(Z_Param_SensedActor);
		P_NATIVE_END;
	}
	void AEnemyCharacter::StaticRegisterNativesAEnemyCharacter()
	{
		UClass* Class = AEnemyCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSensedPawn", &AEnemyCharacter::execOnSensedPawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemyCharacter_OnSensedPawn_Statics
	{
		struct EnemyCharacter_eventOnSensedPawn_Parms
		{
			APawn* SensedActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SensedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyCharacter_OnSensedPawn_Statics::NewProp_SensedActor = { "SensedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EnemyCharacter_eventOnSensedPawn_Parms, SensedActor), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyCharacter_OnSensedPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_OnSensedPawn_Statics::NewProp_SensedActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyCharacter_OnSensedPawn_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * A function bound to the UPawnSensingComponent's OnSeePawn event. This will set the SensedCharacter variable\n\x09 * if the pawn that was sensed was of type APlayerCharacter.\n\x09 * @param SensedActor The pawn that was sensed by the UPawnSensingComponent.\n\x09 */" },
		{ "ModuleRelativePath", "Characters/EnemyCharacter.h" },
		{ "ToolTip", "A function bound to the UPawnSensingComponent's OnSeePawn event. This will set the SensedCharacter variable\nif the pawn that was sensed was of type APlayerCharacter.\n@param SensedActor The pawn that was sensed by the UPawnSensingComponent." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_OnSensedPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter, nullptr, "OnSensedPawn", nullptr, nullptr, sizeof(Z_Construct_UFunction_AEnemyCharacter_OnSensedPawn_Statics::EnemyCharacter_eventOnSensedPawn_Parms), Z_Construct_UFunction_AEnemyCharacter_OnSensedPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_OnSensedPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemyCharacter_OnSensedPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_OnSensedPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemyCharacter_OnSensedPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_OnSensedPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyCharacter);
	UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister()
	{
		return AEnemyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathfindingSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PathfindingSubsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SensedCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SensedCharacter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentPath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentPath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathfindingError_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PathfindingError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyCharacter_OnSensedPawn, "OnSensedPawn" }, // 2033150074
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A class representing the logic for an AI controlled enemy character. \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/EnemyCharacter.h" },
		{ "ModuleRelativePath", "Characters/EnemyCharacter.h" },
		{ "ToolTip", "A class representing the logic for an AI controlled enemy character." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_PathfindingSubsystem_MetaData[] = {
		{ "Comment", "/**\n\x09 * A pointer to the Pathfinding Subsystem.\n\x09 */" },
		{ "ModuleRelativePath", "Characters/EnemyCharacter.h" },
		{ "ToolTip", "A pointer to the Pathfinding Subsystem." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_PathfindingSubsystem = { "PathfindingSubsystem", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEnemyCharacter, PathfindingSubsystem), Z_Construct_UClass_UPathfindingSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_PathfindingSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_PathfindingSubsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_PawnSensingComponent_MetaData[] = {
		{ "Category", "EnemyCharacter" },
		{ "Comment", "/**\n\x09 * A pointer to the PawnSensingComponent attached to this enemy character.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/EnemyCharacter.h" },
		{ "ToolTip", "A pointer to the PawnSensingComponent attached to this enemy character." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_PawnSensingComponent = { "PawnSensingComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEnemyCharacter, PawnSensingComponent), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_PawnSensingComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_PawnSensingComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_SensedCharacter_MetaData[] = {
		{ "Comment", "/**\n\x09 * A pointer to a PlayerCharacter that can be seen by this enemy character. If this is nullptr then the enemy cannot\n\x09 * see any PlayerCharacter.\n\x09 */" },
		{ "ModuleRelativePath", "Characters/EnemyCharacter.h" },
		{ "ToolTip", "A pointer to a PlayerCharacter that can be seen by this enemy character. If this is nullptr then the enemy cannot\nsee any PlayerCharacter." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_SensedCharacter = { "SensedCharacter", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEnemyCharacter, SensedCharacter), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_SensedCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_SensedCharacter_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_CurrentPath_Inner = { "CurrentPath", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_CurrentPath_MetaData[] = {
		{ "Category", "EnemyCharacter" },
		{ "Comment", "/**\n\x09 * An array of vectors representing the current path that the agent is traversing along.\n\x09 */" },
		{ "ModuleRelativePath", "Characters/EnemyCharacter.h" },
		{ "ToolTip", "An array of vectors representing the current path that the agent is traversing along." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_CurrentPath = { "CurrentPath", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEnemyCharacter, CurrentPath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_CurrentPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_CurrentPath_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_CurrentState_MetaData[] = {
		{ "Category", "EnemyCharacter" },
		{ "Comment", "/**\n\x09 * The current state of the enemy character. This determines which logic to use when executing the finite state machine\n\x09 * found in the tick function of this enemy character.\n\x09 */" },
		{ "ModuleRelativePath", "Characters/EnemyCharacter.h" },
		{ "ToolTip", "The current state of the enemy character. This determines which logic to use when executing the finite state machine\nfound in the tick function of this enemy character." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEnemyCharacter, CurrentState), Z_Construct_UEnum_AGP_EEnemyState, METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_CurrentState_MetaData)) }; // 2484316000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_PathfindingError_MetaData[] = {
		{ "Category", "EnemyCharacter" },
		{ "Comment", "/**\n\x09 * Some arbitrary error value for determining how close is close enough before moving onto the next step in the path.\n\x09 */" },
		{ "ModuleRelativePath", "Characters/EnemyCharacter.h" },
		{ "ToolTip", "Some arbitrary error value for determining how close is close enough before moving onto the next step in the path." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_PathfindingError = { "PathfindingError", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEnemyCharacter, PathfindingError), METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_PathfindingError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_PathfindingError_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_PathfindingSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_PawnSensingComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_SensedCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_CurrentPath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_CurrentPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_CurrentState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_CurrentState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Statics::NewProp_PathfindingError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyCharacter_Statics::ClassParams = {
		&AEnemyCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyCharacter()
	{
		if (!Z_Registration_Info_UClass_AEnemyCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyCharacter.OuterSingleton, Z_Construct_UClass_AEnemyCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyCharacter.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<AEnemyCharacter>()
	{
		return AEnemyCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyCharacter);
	AEnemyCharacter::~AEnemyCharacter() {}
	struct Z_CompiledInDeferFile_FID_AGP_Source_AGP_Characters_EnemyCharacter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Characters_EnemyCharacter_h_Statics::EnumInfo[] = {
		{ EEnemyState_StaticEnum, TEXT("EEnemyState"), &Z_Registration_Info_UEnum_EEnemyState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2484316000U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Characters_EnemyCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyCharacter, AEnemyCharacter::StaticClass, TEXT("AEnemyCharacter"), &Z_Registration_Info_UClass_AEnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyCharacter), 2778355886U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Characters_EnemyCharacter_h_1731764986(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_AGP_Source_AGP_Characters_EnemyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AGP_Source_AGP_Characters_EnemyCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_AGP_Source_AGP_Characters_EnemyCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AGP_Source_AGP_Characters_EnemyCharacter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
