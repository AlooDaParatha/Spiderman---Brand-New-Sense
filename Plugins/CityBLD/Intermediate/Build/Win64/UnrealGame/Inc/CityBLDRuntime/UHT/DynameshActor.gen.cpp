// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynameshActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDynameshActor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem(ETypeConstructPhase);
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_ADynamicMeshActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor(ETypeConstructPhase);
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDRuntime(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_ADynameshActor(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UDynameshGenerationManager(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UDynameshGenerationSubsystem(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_ADynameshActor(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UDynameshGenerationManager(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UDynameshGenerationSubsystem(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class ADynameshActor Function CopyPropertiesFromStaticMesh *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynameshActor_CopyPropertiesFromStaticMesh_Statics
struct UHT_STATICS
{
	struct DynameshActor_eventCopyPropertiesFromStaticMesh_Parms
	{
		AStaticMeshActor* StaticMeshActor;
		bool bCopyComponentMaterials;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicMeshActor" },
		{ "Comment", "/**\n\x09 * Attempt to copy Actor Properties from a StaticMeshActor. Optionally copy DynamicMeshComponent material list to the StaticMeshComponent.\n\x09 * This function is useful when (eg) swapping from a StaticMeshActor to a DynamicMeshActor as it will allow\n\x09 * many configured Actor settings to be preserved (like assigned DataLayers, etc) \n\x09 */" },
		{ "CPP_Default_bCopyComponentMaterials", "false" },
		{ "ModuleRelativePath", "Public/DynameshActor.h" },
		{ "ToolTip", "Attempt to copy Actor Properties from a StaticMeshActor. Optionally copy DynamicMeshComponent material list to the StaticMeshComponent.\nThis function is useful when (eg) swapping from a StaticMeshActor to a DynamicMeshActor as it will allow\nmany configured Actor settings to be preserved (like assigned DataLayers, etc)" },
	};
#endif // WITH_METADATA

// ********** Begin Function CopyPropertiesFromStaticMesh constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshActor;
	static void NewProp_bCopyComponentMaterials_SetBit(void* Obj)
	{
		((DynameshActor_eventCopyPropertiesFromStaticMesh_Parms*)Obj)->bCopyComponentMaterials = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyComponentMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CopyPropertiesFromStaticMesh constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CopyPropertiesFromStaticMesh Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StaticMeshActor = { "StaticMeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DynameshActor_eventCopyPropertiesFromStaticMesh_Parms, StaticMeshActor), Z_Construct_UClass_AStaticMeshActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCopyComponentMaterials = { "bCopyComponentMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DynameshActor_eventCopyPropertiesFromStaticMesh_Parms), &UHT_STATICS::NewProp_bCopyComponentMaterials_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StaticMeshActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCopyComponentMaterials,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CopyPropertiesFromStaticMesh Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynameshActor, nullptr, "CopyPropertiesFromStaticMesh", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynameshActor_eventCopyPropertiesFromStaticMesh_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynameshActor_eventCopyPropertiesFromStaticMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynameshActor_CopyPropertiesFromStaticMesh(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynameshActor::execCopyPropertiesFromStaticMesh)
{
	P_GET_OBJECT(AStaticMeshActor,Z_Param_StaticMeshActor);
	P_GET_UBOOL(Z_Param_bCopyComponentMaterials);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CopyPropertiesFromStaticMesh(Z_Param_StaticMeshActor,Z_Param_bCopyComponentMaterials);
	P_NATIVE_END;
}
// ********** End Class ADynameshActor Function CopyPropertiesFromStaticMesh ***********************

// ********** Begin Class ADynameshActor Function CopyPropertiesToStaticMesh ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynameshActor_CopyPropertiesToStaticMesh_Statics
struct UHT_STATICS
{
	struct DynameshActor_eventCopyPropertiesToStaticMesh_Parms
	{
		AStaticMeshActor* StaticMeshActor;
		bool bCopyComponentMaterials;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicMeshActor" },
		{ "Comment", "/** \n\x09 * Attempt to copy Actor Properties to a StaticMeshActor. Optionally copy DynamicMeshComponent material list to the StaticMeshComponent.\n\x09 * This function is useful when (eg) swapping from a DynamicMeshActor to a StaticMeshActor as it will allow\n\x09 * many configured Actor settings to be preserved (like assigned DataLayers, etc)\n\x09 */" },
		{ "CPP_Default_bCopyComponentMaterials", "false" },
		{ "ModuleRelativePath", "Public/DynameshActor.h" },
		{ "ToolTip", "Attempt to copy Actor Properties to a StaticMeshActor. Optionally copy DynamicMeshComponent material list to the StaticMeshComponent.\nThis function is useful when (eg) swapping from a DynamicMeshActor to a StaticMeshActor as it will allow\nmany configured Actor settings to be preserved (like assigned DataLayers, etc)" },
	};
#endif // WITH_METADATA

// ********** Begin Function CopyPropertiesToStaticMesh constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshActor;
	static void NewProp_bCopyComponentMaterials_SetBit(void* Obj)
	{
		((DynameshActor_eventCopyPropertiesToStaticMesh_Parms*)Obj)->bCopyComponentMaterials = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyComponentMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CopyPropertiesToStaticMesh constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CopyPropertiesToStaticMesh Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StaticMeshActor = { "StaticMeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DynameshActor_eventCopyPropertiesToStaticMesh_Parms, StaticMeshActor), Z_Construct_UClass_AStaticMeshActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCopyComponentMaterials = { "bCopyComponentMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DynameshActor_eventCopyPropertiesToStaticMesh_Parms), &UHT_STATICS::NewProp_bCopyComponentMaterials_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StaticMeshActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCopyComponentMaterials,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CopyPropertiesToStaticMesh Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynameshActor, nullptr, "CopyPropertiesToStaticMesh", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynameshActor_eventCopyPropertiesToStaticMesh_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynameshActor_eventCopyPropertiesToStaticMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynameshActor_CopyPropertiesToStaticMesh(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynameshActor::execCopyPropertiesToStaticMesh)
{
	P_GET_OBJECT(AStaticMeshActor,Z_Param_StaticMeshActor);
	P_GET_UBOOL(Z_Param_bCopyComponentMaterials);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CopyPropertiesToStaticMesh(Z_Param_StaticMeshActor,Z_Param_bCopyComponentMaterials);
	P_NATIVE_END;
}
// ********** End Class ADynameshActor Function CopyPropertiesToStaticMesh *************************

// ********** Begin Class ADynameshActor Function IncrementProgress ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynameshActor_IncrementProgress_Statics
struct UHT_STATICS
{
	struct DynameshActor_eventIncrementProgress_Parms
	{
		int32 NumSteps;
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicMeshActor|Progress" },
		{ "Comment", "/** Call this function from within OnRebuildGeneratedMesh to update progress tracking. */" },
		{ "ModuleRelativePath", "Public/DynameshActor.h" },
		{ "ToolTip", "Call this function from within OnRebuildGeneratedMesh to update progress tracking." },
	};
#endif // WITH_METADATA

// ********** Begin Function IncrementProgress constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSteps;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IncrementProgress constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IncrementProgress Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NumSteps = { "NumSteps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DynameshActor_eventIncrementProgress_Parms, NumSteps), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(DynameshActor_eventIncrementProgress_Parms, Message), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NumSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IncrementProgress Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynameshActor, nullptr, "IncrementProgress", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynameshActor_eventIncrementProgress_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynameshActor_eventIncrementProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynameshActor_IncrementProgress(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynameshActor::execIncrementProgress)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumSteps);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncrementProgress(Z_Param_NumSteps,Z_Param_Message);
	P_NATIVE_END;
}
// ********** End Class ADynameshActor Function IncrementProgress **********************************

// ********** Begin Class ADynameshActor Function OnRebuildGeneratedMesh ***************************
struct DynameshActor_eventOnRebuildGeneratedMesh_Parms
{
	UDynamicMesh* TargetMesh;
};
static FName NAME_ADynameshActor_OnRebuildGeneratedMesh = FName(TEXT("OnRebuildGeneratedMesh"));
void ADynameshActor::OnRebuildGeneratedMesh(UDynamicMesh* TargetMesh)
{
	DynameshActor_eventOnRebuildGeneratedMesh_Parms Parms;
	Parms.TargetMesh=TargetMesh;
	UFunction* Func = FindFunctionChecked(NAME_ADynameshActor_OnRebuildGeneratedMesh);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynameshActor_OnRebuildGeneratedMesh_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Events" },
		{ "Comment", "/**\n\x09 * This event will be fired to notify the BP that the generated Mesh should\n\x09 * be rebuilt. GeneratedDynamicMeshActor BP subclasses should rebuild their \n\x09 * meshes on this event, instead of doing so directly from the Construction Script.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynameshActor.h" },
		{ "ToolTip", "This event will be fired to notify the BP that the generated Mesh should\nbe rebuilt. GeneratedDynamicMeshActor BP subclasses should rebuild their\nmeshes on this event, instead of doing so directly from the Construction Script." },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRebuildGeneratedMesh constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRebuildGeneratedMesh constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRebuildGeneratedMesh Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DynameshActor_eventOnRebuildGeneratedMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetMesh,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRebuildGeneratedMesh Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynameshActor, nullptr, "OnRebuildGeneratedMesh", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DynameshActor_eventOnRebuildGeneratedMesh_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DynameshActor_eventOnRebuildGeneratedMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynameshActor_OnRebuildGeneratedMesh(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynameshActor::execOnRebuildGeneratedMesh)
{
	P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRebuildGeneratedMesh_Implementation(Z_Param_TargetMesh);
	P_NATIVE_END;
}
// ********** End Class ADynameshActor Function OnRebuildGeneratedMesh *****************************

// ********** Begin Class ADynameshActor Function OnTotalRebuild ***********************************
static FName NAME_ADynameshActor_OnTotalRebuild = FName(TEXT("OnTotalRebuild"));
void ADynameshActor::OnTotalRebuild()
{
	UFunction* Func = FindFunctionChecked(NAME_ADynameshActor_OnTotalRebuild);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnTotalRebuild_Implementation();
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynameshActor_OnTotalRebuild_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "// This function fires when the entire mesh and related systems should be completely rebuilt.\n" },
		{ "ModuleRelativePath", "Public/DynameshActor.h" },
		{ "ToolTip", "This function fires when the entire mesh and related systems should be completely rebuilt." },
	};
#endif // WITH_METADATA

// ********** Begin Function OnTotalRebuild constinit property declarations ************************
// ********** End Function OnTotalRebuild constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynameshActor, nullptr, "OnTotalRebuild", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ADynameshActor_OnTotalRebuild(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynameshActor::execOnTotalRebuild)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTotalRebuild_Implementation();
	P_NATIVE_END;
}
// ********** End Class ADynameshActor Function OnTotalRebuild *************************************

// ********** Begin Class ADynameshActor Function TriggerMeshRebuild *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynameshActor_TriggerMeshRebuild_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "// Queues up a rebuild (of just the mesh) on the next frame.\n" },
		{ "ModuleRelativePath", "Public/DynameshActor.h" },
		{ "ToolTip", "Queues up a rebuild (of just the mesh) on the next frame." },
	};
#endif // WITH_METADATA

// ********** Begin Function TriggerMeshRebuild constinit property declarations ********************
// ********** End Function TriggerMeshRebuild constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynameshActor, nullptr, "TriggerMeshRebuild", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ADynameshActor_TriggerMeshRebuild(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynameshActor::execTriggerMeshRebuild)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerMeshRebuild();
	P_NATIVE_END;
}
// ********** End Class ADynameshActor Function TriggerMeshRebuild *********************************

// ********** Begin Class ADynameshActor Function TriggerTotalRebuild ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynameshActor_TriggerTotalRebuild_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "// Queues up a rebuild (of all of the internal derived data) on the next frame.\n" },
		{ "ModuleRelativePath", "Public/DynameshActor.h" },
		{ "ToolTip", "Queues up a rebuild (of all of the internal derived data) on the next frame." },
	};
#endif // WITH_METADATA

// ********** Begin Function TriggerTotalRebuild constinit property declarations *******************
// ********** End Function TriggerTotalRebuild constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynameshActor, nullptr, "TriggerTotalRebuild", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ADynameshActor_TriggerTotalRebuild(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynameshActor::execTriggerTotalRebuild)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerTotalRebuild();
	P_NATIVE_END;
}
// ********** End Class ADynameshActor Function TriggerTotalRebuild ********************************

// ********** Begin Class ADynameshActor ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ADynameshActor_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// NOTE: This is a copy of AGeneratedDynamicMeshActor that can be used both in the Editor and at Runtime.\n// \n// ADynameshActor is an (mostly) Editor-only subclass of ADynamicMeshActor that provides \n// special support for dynamic procedural generation of meshes in the Editor, eg via Blueprints. \n// Expensive procedural generation implemented via BP can potentially cause major problems in \n// the Editor, in particular with interactive performance. AGeneratedDynamicMeshActor provides\n// special infrastructure for this use case. Essentially, instead of doing procedural generation\n// in the Construction Script, a BP-implementable event OnRebuildGeneratedMesh is available,\n// and doing the procedural mesh regeneration when that function fires will generally provide\n// better in-Editor interactive performance.\n" },
		{ "IncludePath", "DynameshActor.h" },
		{ "ModuleRelativePath", "Public/DynameshActor.h" },
		{ "ToolTip", "NOTE: This is a copy of AGeneratedDynamicMeshActor that can be used both in the Editor and at Runtime.\n\nADynameshActor is an (mostly) Editor-only subclass of ADynamicMeshActor that provides\nspecial support for dynamic procedural generation of meshes in the Editor, eg via Blueprints.\nExpensive procedural generation implemented via BP can potentially cause major problems in\nthe Editor, in particular with interactive performance. AGeneratedDynamicMeshActor provides\nspecial infrastructure for this use case. Essentially, instead of doing procedural generation\nin the Construction Script, a BP-implementable event OnRebuildGeneratedMesh is available,\nand doing the procedural mesh regeneration when that function fires will generally provide\nbetter in-Editor interactive performance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFrozen_MetaData[] = {
		{ "Category", "DynamicMeshActor" },
		{ "Comment", "/** If true, the DynamicMeshComponent will be \"Frozen\" in its current state, and automatic rebuilding will be disabled. However the DynamicMesh can still be modified by explicitly-called functions/etc. */" },
		{ "ModuleRelativePath", "Public/DynameshActor.h" },
		{ "ToolTip", "If true, the DynamicMeshComponent will be \"Frozen\" in its current state, and automatic rebuilding will be disabled. However the DynamicMesh can still be modified by explicitly-called functions/etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResetOnRebuild_MetaData[] = {
		{ "Category", "DynamicMeshActor|Advanced" },
		{ "Comment", "/** If true, the DynamicMeshComponent will be cleared before the OnRebuildGeneratedMesh event is executed. */" },
		{ "ModuleRelativePath", "Public/DynameshActor.h" },
		{ "ToolTip", "If true, the DynamicMeshComponent will be cleared before the OnRebuildGeneratedMesh event is executed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRebuildProgress_MetaData[] = {
		{ "Category", "DynamicMeshActor|Progress" },
		{ "Comment", "/** If enabled, a long-running OnRebuildGeneratedMesh event will show a progress dialog (The Script being executed must call IncrementProgress regularly) */" },
		{ "ModuleRelativePath", "Public/DynameshActor.h" },
		{ "ToolTip", "If enabled, a long-running OnRebuildGeneratedMesh event will show a progress dialog (The Script being executed must call IncrementProgress regularly)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogDelay_MetaData[] = {
		{ "Category", "DynamicMeshActor|Progress" },
		{ "Comment", "/** Delay in seconds before the progress dialog is shown, if enabled */" },
		{ "ModuleRelativePath", "Public/DynameshActor.h" },
		{ "ToolTip", "Delay in seconds before the progress dialog is shown, if enabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumProgressSteps_MetaData[] = {
		{ "Category", "DynamicMeshActor|Progress" },
		{ "Comment", "/** Number of progress steps/ticks that the progress bar will be subdivided into */" },
		{ "ModuleRelativePath", "Public/DynameshActor.h" },
		{ "ToolTip", "Number of progress steps/ticks that the progress bar will be subdivided into" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressMessage_MetaData[] = {
		{ "Category", "DynamicMeshActor|Progress" },
		{ "Comment", "/** The default progress message */" },
		{ "ModuleRelativePath", "Public/DynameshActor.h" },
		{ "ToolTip", "The default progress message" },
	};
#endif // WITH_METADATA

// ********** Begin Class ADynameshActor constinit property declarations ***************************
	static void NewProp_bFrozen_SetBit(void* Obj)
	{
		((ADynameshActor*)Obj)->bFrozen = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFrozen;
	static void NewProp_bResetOnRebuild_SetBit(void* Obj)
	{
		((ADynameshActor*)Obj)->bResetOnRebuild = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetOnRebuild;
	static void NewProp_bEnableRebuildProgress_SetBit(void* Obj)
	{
		((ADynameshActor*)Obj)->bEnableRebuildProgress = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRebuildProgress;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DialogDelay;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumProgressSteps;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ProgressMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ADynameshActor constinit property declarations *****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CopyPropertiesFromStaticMesh"), .Pointer = &ADynameshActor::execCopyPropertiesFromStaticMesh },
		{ .NameUTF8 = UTF8TEXT("CopyPropertiesToStaticMesh"), .Pointer = &ADynameshActor::execCopyPropertiesToStaticMesh },
		{ .NameUTF8 = UTF8TEXT("IncrementProgress"), .Pointer = &ADynameshActor::execIncrementProgress },
		{ .NameUTF8 = UTF8TEXT("OnRebuildGeneratedMesh"), .Pointer = &ADynameshActor::execOnRebuildGeneratedMesh },
		{ .NameUTF8 = UTF8TEXT("OnTotalRebuild"), .Pointer = &ADynameshActor::execOnTotalRebuild },
		{ .NameUTF8 = UTF8TEXT("TriggerMeshRebuild"), .Pointer = &ADynameshActor::execTriggerMeshRebuild },
		{ .NameUTF8 = UTF8TEXT("TriggerTotalRebuild"), .Pointer = &ADynameshActor::execTriggerTotalRebuild },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADynameshActor_CopyPropertiesFromStaticMesh, "CopyPropertiesFromStaticMesh" }, // b07dc5e83aa524db38a76a34d1610bb97c2bc603
		{ &Z_Construct_UFunction_ADynameshActor_CopyPropertiesToStaticMesh, "CopyPropertiesToStaticMesh" }, // a504e5e6da8a01651df8fbcd5a4de7dd53271634
		{ &Z_Construct_UFunction_ADynameshActor_IncrementProgress, "IncrementProgress" }, // 2ec214a6869f80e2d4fa7a7c285a2bab4818f4db
		{ &Z_Construct_UFunction_ADynameshActor_OnRebuildGeneratedMesh, "OnRebuildGeneratedMesh" }, // 684313651dd58ce92837853adef2c1f1cb7fe87c
		{ &Z_Construct_UFunction_ADynameshActor_OnTotalRebuild, "OnTotalRebuild" }, // b72a1bac4202186b7c25be3122c4bd965f2f6ccb
		{ &Z_Construct_UFunction_ADynameshActor_TriggerMeshRebuild, "TriggerMeshRebuild" }, // fe4b6dfc3a72da815a3de4727fe9ae1bab5ecfa7
		{ &Z_Construct_UFunction_ADynameshActor_TriggerTotalRebuild, "TriggerTotalRebuild" }, // 9c3fd7d8abad9d16507152803c6bc23bbf872309
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADynameshActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ADynameshActor Property Definitions **************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFrozen = { "bFrozen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ADynameshActor), &UHT_STATICS::NewProp_bFrozen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFrozen_MetaData), NewProp_bFrozen_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bResetOnRebuild = { "bResetOnRebuild", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ADynameshActor), &UHT_STATICS::NewProp_bResetOnRebuild_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResetOnRebuild_MetaData), NewProp_bResetOnRebuild_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableRebuildProgress = { "bEnableRebuildProgress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ADynameshActor), &UHT_STATICS::NewProp_bEnableRebuildProgress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRebuildProgress_MetaData), NewProp_bEnableRebuildProgress_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DialogDelay = { "DialogDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ADynameshActor, DialogDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogDelay_MetaData), NewProp_DialogDelay_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NumProgressSteps = { "NumProgressSteps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ADynameshActor, NumProgressSteps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumProgressSteps_MetaData), NewProp_NumProgressSteps_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ProgressMessage = { "ProgressMessage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(ADynameshActor, ProgressMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressMessage_MetaData), NewProp_ProgressMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFrozen,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bResetOnRebuild,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableRebuildProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialogDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NumProgressSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProgressMessage,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ADynameshActor Property Definitions ****************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_ADynamicMeshActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ADynameshActor,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void ADynameshActor_StaticRegisterNativesADynameshActor()
{
	UClass* Class = ADynameshActor::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADynameshActor;
UClass* Z_Construct_UClass_ADynameshActor(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ADynameshActor;
		if (!Z_Registration_Info_UClass_ADynameshActor.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DynameshActor"),
				Z_Registration_Info_UClass_ADynameshActor.InnerSingleton,
				ADynameshActor_StaticRegisterNativesADynameshActor,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_ADynameshActor.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ADynameshActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADynameshActor.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ADynameshActor.OuterSingleton;
}
#undef UHT_STATICS
ADynameshActor::ADynameshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ADynameshActor);
// ********** End Class ADynameshActor *************************************************************

// ********** Begin Class UDynameshGenerationSubsystem *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDynameshGenerationSubsystem_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * UDynameshGenerationSubsystem manages recomputation of \"generated\" mesh actors, eg\n * to provide procedural mesh generation in-Editor. Generally such procedural mesh generation\n * is expensive, and if many objects need to be generated, the regeneration needs to be \n * managed at a higher level to ensure that the Editor remains responsive/interactive.\n * \n * ADynameshActors register themselves with this Subsystem, and\n * allow the Subsystem to tell them when they should regenerate themselves (if necessary).\n * The current behavior is to run all pending generations on a Tick, however in future\n * this regeneration will be more carefully managed via throttling / timeslicing / etc.\n * \n */" },
		{ "IncludePath", "DynameshActor.h" },
		{ "ModuleRelativePath", "Public/DynameshActor.h" },
		{ "ToolTip", "UDynameshGenerationSubsystem manages recomputation of \"generated\" mesh actors, eg\nto provide procedural mesh generation in-Editor. Generally such procedural mesh generation\nis expensive, and if many objects need to be generated, the regeneration needs to be\nmanaged at a higher level to ensure that the Editor remains responsive/interactive.\n\nADynameshActors register themselves with this Subsystem, and\nallow the Subsystem to tell them when they should regenerate themselves (if necessary).\nThe current behavior is to run all pending generations on a Tick, however in future\nthis regeneration will be more carefully managed via throttling / timeslicing / etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynameshActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDynameshGenerationSubsystem constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GenerationManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDynameshGenerationSubsystem constinit property declarations ***************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynameshGenerationSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UDynameshGenerationSubsystem Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GenerationManager = { "GenerationManager", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UDynameshGenerationSubsystem, GenerationManager), Z_Construct_UClass_UDynameshGenerationManager, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationManager_MetaData), NewProp_GenerationManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GenerationManager,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UDynameshGenerationSubsystem Property Definitions **************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UEngineSubsystem,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDynameshGenerationSubsystem,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UDynameshGenerationSubsystem;
UClass* Z_Construct_UClass_UDynameshGenerationSubsystem(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDynameshGenerationSubsystem;
		if (!Z_Registration_Info_UClass_UDynameshGenerationSubsystem.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DynameshGenerationSubsystem"),
				Z_Registration_Info_UClass_UDynameshGenerationSubsystem.InnerSingleton,
				nullptr,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UDynameshGenerationSubsystem.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDynameshGenerationSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynameshGenerationSubsystem.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDynameshGenerationSubsystem.OuterSingleton;
}
#undef UHT_STATICS
UDynameshGenerationSubsystem::UDynameshGenerationSubsystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDynameshGenerationSubsystem);
UDynameshGenerationSubsystem::~UDynameshGenerationSubsystem() {}
// ********** End Class UDynameshGenerationSubsystem ***********************************************

// ********** Begin Class UDynameshGenerationManager ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDynameshGenerationManager_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * UDynameshGenerationManager is a class used by UDynameshGenerationSubsystem to\n * store registrations and provide a Tick()\n */" },
		{ "IncludePath", "DynameshActor.h" },
		{ "ModuleRelativePath", "Public/DynameshActor.h" },
		{ "ToolTip", "UDynameshGenerationManager is a class used by UDynameshGenerationSubsystem to\nstore registrations and provide a Tick()" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDynameshGenerationManager constinit property declarations ***************
// ********** End Class UDynameshGenerationManager constinit property declarations *****************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynameshGenerationManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDynameshGenerationManager,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UDynameshGenerationManager;
UClass* Z_Construct_UClass_UDynameshGenerationManager(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDynameshGenerationManager;
		if (!Z_Registration_Info_UClass_UDynameshGenerationManager.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DynameshGenerationManager"),
				Z_Registration_Info_UClass_UDynameshGenerationManager.InnerSingleton,
				nullptr,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UDynameshGenerationManager.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDynameshGenerationManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynameshGenerationManager.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDynameshGenerationManager.OuterSingleton;
}
#undef UHT_STATICS
UDynameshGenerationManager::UDynameshGenerationManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDynameshGenerationManager);
UDynameshGenerationManager::~UDynameshGenerationManager() {}
// ********** End Class UDynameshGenerationManager *************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_DynameshActor_h__Script_CityBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADynameshActor, TEXT("ADynameshActor"), &Z_Registration_Info_UClass_ADynameshActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADynameshActor), 2409264517U) },
		{ Z_Construct_UClass_UDynameshGenerationSubsystem, TEXT("UDynameshGenerationSubsystem"), &Z_Registration_Info_UClass_UDynameshGenerationSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynameshGenerationSubsystem), 3509603872U) },
		{ Z_Construct_UClass_UDynameshGenerationManager, TEXT("UDynameshGenerationManager"), &Z_Registration_Info_UClass_UDynameshGenerationManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynameshGenerationManager), 4252040555U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_DynameshActor_h__Script_CityBLDRuntime_b96235ba09607168b059189568aea3ee15452114{
	TEXT("/Script/CityBLDRuntime"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
