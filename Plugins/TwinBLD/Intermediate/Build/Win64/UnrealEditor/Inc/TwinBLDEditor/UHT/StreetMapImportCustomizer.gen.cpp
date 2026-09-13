// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreetMap/StreetMapImportCustomizer.h"
#include "ShapefileReader.h"
#include "StreetMap/StreetMap.h"
#include "StreetMap/StreetMapUtils.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeStreetMapImportCustomizer() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESplinePointType(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UBuildingStyle(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_ACityBlock(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_AModularBuildingActor(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoad(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadDrawPreset(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoadNetwork(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase);
TWINBLDEDITOR_API UEnum* Z_Construct_UEnum_TwinBLDEditor_EOSMGeometryRole(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapBuilding(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UStreetMapImportCustomizer(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UStreetMapImportCustomizerBase(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoad(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoadStrip(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoadStripSettings(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDShapeFeature(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UStreetMap(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UStreetMapImportCustomizer(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UStreetMapImportCustomizer Function CustomizeBuilding ********************
struct StreetMapImportCustomizer_eventCustomizeBuilding_Parms
{
	AActor* BuildingActor;
	FStreetMapBuilding Building;
};
static FName NAME_UStreetMapImportCustomizer_CustomizeBuilding = FName(TEXT("CustomizeBuilding"));
void UStreetMapImportCustomizer::CustomizeBuilding(AActor* BuildingActor, FStreetMapBuilding const& Building)
{
	UFunction* Func = FindFunctionChecked(NAME_UStreetMapImportCustomizer_CustomizeBuilding);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		StreetMapImportCustomizer_eventCustomizeBuilding_Parms Parms;
		Parms.BuildingActor=BuildingActor;
		Parms.Building=Building;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		CustomizeBuilding_Implementation(BuildingActor, Building);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStreetMapImportCustomizer_CustomizeBuilding_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Customization" },
		{ "Comment", "// Called after ProcessStreetMapBuilding() on each resulting actor in GeneratedActors.\n// Building contains the full OSM data (Tags, Height, BuildingLevels, etc.) for the building being processed.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
		{ "ToolTip", "Called after ProcessStreetMapBuilding() on each resulting actor in GeneratedActors.\nBuilding contains the full OSM data (Tags, Height, BuildingLevels, etc.) for the building being processed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Building_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CustomizeBuilding constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BuildingActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Building;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CustomizeBuilding constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CustomizeBuilding Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_BuildingActor = { "BuildingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapImportCustomizer_eventCustomizeBuilding_Parms, BuildingActor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Building = { "Building", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapImportCustomizer_eventCustomizeBuilding_Parms, Building), Z_Construct_UScriptStruct_FStreetMapBuilding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Building_MetaData), NewProp_Building_MetaData) }; // 9c80cd0a6043d885eef18e6aeb7753379022d92d
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Building,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CustomizeBuilding Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStreetMapImportCustomizer, nullptr, "CustomizeBuilding", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<StreetMapImportCustomizer_eventCustomizeBuilding_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(StreetMapImportCustomizer_eventCustomizeBuilding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreetMapImportCustomizer_CustomizeBuilding(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStreetMapImportCustomizer::execCustomizeBuilding)
{
	P_GET_OBJECT(AActor,Z_Param_BuildingActor);
	P_GET_STRUCT_REF(FStreetMapBuilding,Z_Param_Out_Building);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CustomizeBuilding_Implementation(Z_Param_BuildingActor,Z_Param_Out_Building);
	P_NATIVE_END;
}
// ********** End Class UStreetMapImportCustomizer Function CustomizeBuilding **********************

// ********** Begin Class UStreetMapImportCustomizer Function CustomizeGeneratedBuildingActor ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStreetMapImportCustomizer_CustomizeGeneratedBuildingActor_Statics
struct UHT_STATICS
{
	struct StreetMapImportCustomizer_eventCustomizeGeneratedBuildingActor_Parms
	{
		AActor* BuildingActor;
		FStreetMapBuilding Building;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Building_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CustomizeGeneratedBuildingActor constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BuildingActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Building;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CustomizeGeneratedBuildingActor constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CustomizeGeneratedBuildingActor Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_BuildingActor = { "BuildingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapImportCustomizer_eventCustomizeGeneratedBuildingActor_Parms, BuildingActor), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Building = { "Building", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapImportCustomizer_eventCustomizeGeneratedBuildingActor_Parms, Building), Z_Construct_UScriptStruct_FStreetMapBuilding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Building_MetaData), NewProp_Building_MetaData) }; // 9c80cd0a6043d885eef18e6aeb7753379022d92d
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Building,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CustomizeGeneratedBuildingActor Property Definitions ********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStreetMapImportCustomizer, nullptr, "CustomizeGeneratedBuildingActor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::StreetMapImportCustomizer_eventCustomizeGeneratedBuildingActor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::StreetMapImportCustomizer_eventCustomizeGeneratedBuildingActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreetMapImportCustomizer_CustomizeGeneratedBuildingActor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStreetMapImportCustomizer::execCustomizeGeneratedBuildingActor)
{
	P_GET_OBJECT(AActor,Z_Param_BuildingActor);
	P_GET_STRUCT_REF(FStreetMapBuilding,Z_Param_Out_Building);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CustomizeGeneratedBuildingActor(Z_Param_BuildingActor,Z_Param_Out_Building);
	P_NATIVE_END;
}
// ********** End Class UStreetMapImportCustomizer Function CustomizeGeneratedBuildingActor ********

// ********** Begin Class UStreetMapImportCustomizer Function CustomizeParcel **********************
struct StreetMapImportCustomizer_eventCustomizeParcel_Parms
{
	ACityBlock* Block;
	FTwinBLDShapeFeature Feature;
};
static FName NAME_UStreetMapImportCustomizer_CustomizeParcel = FName(TEXT("CustomizeParcel"));
void UStreetMapImportCustomizer::CustomizeParcel(ACityBlock* Block, FTwinBLDShapeFeature const& Feature)
{
	UFunction* Func = FindFunctionChecked(NAME_UStreetMapImportCustomizer_CustomizeParcel);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		StreetMapImportCustomizer_eventCustomizeParcel_Parms Parms;
		Parms.Block=Block;
		Parms.Feature=Feature;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		CustomizeParcel_Implementation(Block, Feature);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStreetMapImportCustomizer_CustomizeParcel_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Customization|Parcel" },
		{ "Comment", "/**\n\x09 * Called for each spawned ACityBlock right BEFORE Generate() runs.\n\x09 * Override in Blueprints to assign Block->DistrictClass (and any other per-parcel setup) based on\n\x09 * the shapefile feature's projected polygon Points and DBF Attributes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
		{ "ToolTip", "Called for each spawned ACityBlock right BEFORE Generate() runs.\nOverride in Blueprints to assign Block->DistrictClass (and any other per-parcel setup) based on\nthe shapefile feature's projected polygon Points and DBF Attributes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Feature_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CustomizeParcel constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Block;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Feature;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CustomizeParcel constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CustomizeParcel Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Block = { "Block", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapImportCustomizer_eventCustomizeParcel_Parms, Block), Z_Construct_UClass_ACityBlock, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Feature = { "Feature", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapImportCustomizer_eventCustomizeParcel_Parms, Feature), Z_Construct_UScriptStruct_FTwinBLDShapeFeature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Feature_MetaData), NewProp_Feature_MetaData) }; // 56811273e47c969b7aa1d579244c9e2da99a3fc7
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Block,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Feature,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CustomizeParcel Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStreetMapImportCustomizer, nullptr, "CustomizeParcel", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<StreetMapImportCustomizer_eventCustomizeParcel_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(StreetMapImportCustomizer_eventCustomizeParcel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreetMapImportCustomizer_CustomizeParcel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStreetMapImportCustomizer::execCustomizeParcel)
{
	P_GET_OBJECT(ACityBlock,Z_Param_Block);
	P_GET_STRUCT_REF(FTwinBLDShapeFeature,Z_Param_Out_Feature);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CustomizeParcel_Implementation(Z_Param_Block,Z_Param_Out_Feature);
	P_NATIVE_END;
}
// ********** End Class UStreetMapImportCustomizer Function CustomizeParcel ************************

// ********** Begin Class UStreetMapImportCustomizer Function FindRoadFacingFaces ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStreetMapImportCustomizer_FindRoadFacingFaces_Statics
struct UHT_STATICS
{
	struct StreetMapImportCustomizer_eventFindRoadFacingFaces_Parms
	{
		TArray<FVector2D> Points;
		TArray<int32> StreetFacingFaces;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindRoadFacingFaces constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StreetFacingFaces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StreetFacingFaces;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindRoadFacingFaces constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindRoadFacingFaces Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapImportCustomizer_eventFindRoadFacingFaces_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_StreetFacingFaces_Inner = { "StreetFacingFaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_StreetFacingFaces = { "StreetFacingFaces", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapImportCustomizer_eventFindRoadFacingFaces_Parms, StreetFacingFaces), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StreetFacingFaces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StreetFacingFaces,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function FindRoadFacingFaces Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStreetMapImportCustomizer, nullptr, "FindRoadFacingFaces", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::StreetMapImportCustomizer_eventFindRoadFacingFaces_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::StreetMapImportCustomizer_eventFindRoadFacingFaces_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreetMapImportCustomizer_FindRoadFacingFaces(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStreetMapImportCustomizer::execFindRoadFacingFaces)
{
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_Points);
	P_GET_TARRAY_REF(int32,Z_Param_Out_StreetFacingFaces);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindRoadFacingFaces(Z_Param_Out_Points,Z_Param_Out_StreetFacingFaces);
	P_NATIVE_END;
}
// ********** End Class UStreetMapImportCustomizer Function FindRoadFacingFaces ********************

// ********** Begin Class UStreetMapImportCustomizer Function ProcessBuilding **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStreetMapImportCustomizer_ProcessBuilding_Statics
struct UHT_STATICS
{
	struct StreetMapImportCustomizer_eventProcessBuilding_Parms
	{
		FStreetMapBuilding Building;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Customization" },
		{ "Comment", "// Called when processing a single street map building. This is the place where you should spawn actors representing the building.\n// Store these actors inside of GeneratedActors.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
		{ "ToolTip", "Called when processing a single street map building. This is the place where you should spawn actors representing the building.\nStore these actors inside of GeneratedActors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Building_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ProcessBuilding constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Building;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ProcessBuilding constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ProcessBuilding Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Building = { "Building", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapImportCustomizer_eventProcessBuilding_Parms, Building), Z_Construct_UScriptStruct_FStreetMapBuilding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Building_MetaData), NewProp_Building_MetaData) }; // 9c80cd0a6043d885eef18e6aeb7753379022d92d
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Building,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ProcessBuilding Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStreetMapImportCustomizer, nullptr, "ProcessBuilding", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::StreetMapImportCustomizer_eventProcessBuilding_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::StreetMapImportCustomizer_eventProcessBuilding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreetMapImportCustomizer_ProcessBuilding(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStreetMapImportCustomizer::execProcessBuilding)
{
	P_GET_STRUCT_REF(FStreetMapBuilding,Z_Param_Out_Building);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessBuilding(Z_Param_Out_Building);
	P_NATIVE_END;
}
// ********** End Class UStreetMapImportCustomizer Function ProcessBuilding ************************

// ********** Begin Class UStreetMapImportCustomizer Function ProcessRoadStrip *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStreetMapImportCustomizer_ProcessRoadStrip_Statics
struct UHT_STATICS
{
	struct StreetMapImportCustomizer_eventProcessRoadStrip_Parms
	{
		FStreetMapRoadStrip Strip;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Customization" },
		{ "Comment", "// Called for generating a representation of this road strip. Once all of the initial actors are generated, they will go\n// through another pass where they are joined together. Store these actors inside of GeneratedActors.\n// Road contains the primary OSM road data (Tags, RoadType, RoadName, etc.) for this strip.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
		{ "ToolTip", "Called for generating a representation of this road strip. Once all of the initial actors are generated, they will go\nthrough another pass where they are joined together. Store these actors inside of GeneratedActors.\nRoad contains the primary OSM road data (Tags, RoadType, RoadName, etc.) for this strip." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ProcessRoadStrip constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Strip;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ProcessRoadStrip constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ProcessRoadStrip Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Strip = { "Strip", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapImportCustomizer_eventProcessRoadStrip_Parms, Strip), Z_Construct_UScriptStruct_FStreetMapRoadStrip, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strip_MetaData), NewProp_Strip_MetaData) }; // a74a443d3a42b75c1ed2b2ff33a39d1db070153c
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Strip,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ProcessRoadStrip Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStreetMapImportCustomizer, nullptr, "ProcessRoadStrip", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::StreetMapImportCustomizer_eventProcessRoadStrip_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::StreetMapImportCustomizer_eventProcessRoadStrip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreetMapImportCustomizer_ProcessRoadStrip(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStreetMapImportCustomizer::execProcessRoadStrip)
{
	P_GET_STRUCT_REF(FStreetMapRoadStrip,Z_Param_Out_Strip);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessRoadStrip(Z_Param_Out_Strip);
	P_NATIVE_END;
}
// ********** End Class UStreetMapImportCustomizer Function ProcessRoadStrip ***********************

// ********** Begin Class UStreetMapImportCustomizer Function ProcessStreetMapBuilding *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStreetMapImportCustomizer_ProcessStreetMapBuilding_Statics
struct UHT_STATICS
{
	struct StreetMapImportCustomizer_eventProcessStreetMapBuilding_Parms
	{
		int32 BuildingIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "Comment", "// Compatibility helpers used by UTwinBLD.cpp\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
		{ "ToolTip", "Compatibility helpers used by UTwinBLD.cpp" },
	};
#endif // WITH_METADATA

// ********** Begin Function ProcessStreetMapBuilding constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_BuildingIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ProcessStreetMapBuilding constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ProcessStreetMapBuilding Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_BuildingIndex = { "BuildingIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapImportCustomizer_eventProcessStreetMapBuilding_Parms, BuildingIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ProcessStreetMapBuilding Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStreetMapImportCustomizer, nullptr, "ProcessStreetMapBuilding", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::StreetMapImportCustomizer_eventProcessStreetMapBuilding_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::StreetMapImportCustomizer_eventProcessStreetMapBuilding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreetMapImportCustomizer_ProcessStreetMapBuilding(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStreetMapImportCustomizer::execProcessStreetMapBuilding)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_BuildingIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessStreetMapBuilding(Z_Param_BuildingIndex);
	P_NATIVE_END;
}
// ********** End Class UStreetMapImportCustomizer Function ProcessStreetMapBuilding ***************

// ********** Begin Class UStreetMapImportCustomizer Function SetRoadPresetClass *******************
struct StreetMapImportCustomizer_eventSetRoadPresetClass_Parms
{
	FStreetMapRoadStrip Strip;
	FStreetMapRoad Road;
	float StripLengthCm;
	TSubclassOf<UDynamicRoadDrawPreset> InOutRoadPresetClass;
};
static FName NAME_UStreetMapImportCustomizer_SetRoadPresetClass = FName(TEXT("SetRoadPresetClass"));
void UStreetMapImportCustomizer::SetRoadPresetClass(FStreetMapRoadStrip const& Strip, FStreetMapRoad const& Road, float StripLengthCm, TSubclassOf<UDynamicRoadDrawPreset>& InOutRoadPresetClass)
{
	UFunction* Func = FindFunctionChecked(NAME_UStreetMapImportCustomizer_SetRoadPresetClass);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		StreetMapImportCustomizer_eventSetRoadPresetClass_Parms Parms;
		Parms.Strip=Strip;
		Parms.Road=Road;
		Parms.StripLengthCm=StripLengthCm;
		Parms.InOutRoadPresetClass=InOutRoadPresetClass;
	ProcessEvent(Func,&Parms);
		InOutRoadPresetClass=Parms.InOutRoadPresetClass;
	}
	else
	{
		SetRoadPresetClass_Implementation(Strip, Road, StripLengthCm, InOutRoadPresetClass);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStreetMapImportCustomizer_SetRoadPresetClass_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Customization|Road" },
		{ "Comment", "// Gives customizers a narrow hook for selecting which road preset class should be used for a strip.\n// Strip provides generated world-space positions and merged-source metadata, while Road contains the primary OSM tags.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
		{ "ToolTip", "Gives customizers a narrow hook for selecting which road preset class should be used for a strip.\nStrip provides generated world-space positions and merged-source metadata, while Road contains the primary OSM tags." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strip_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Road_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetRoadPresetClass constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Strip;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Road;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StripLengthCm;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InOutRoadPresetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetRoadPresetClass constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetRoadPresetClass Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Strip = { "Strip", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapImportCustomizer_eventSetRoadPresetClass_Parms, Strip), Z_Construct_UScriptStruct_FStreetMapRoadStrip, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strip_MetaData), NewProp_Strip_MetaData) }; // a74a443d3a42b75c1ed2b2ff33a39d1db070153c
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Road = { "Road", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapImportCustomizer_eventSetRoadPresetClass_Parms, Road), Z_Construct_UScriptStruct_FStreetMapRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Road_MetaData), NewProp_Road_MetaData) }; // 6c8508bd7d96d0a405df0ec09f79a18dcc8f2b44
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StripLengthCm = { "StripLengthCm", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapImportCustomizer_eventSetRoadPresetClass_Parms, StripLengthCm), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_InOutRoadPresetClass = { "InOutRoadPresetClass", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapImportCustomizer_eventSetRoadPresetClass_Parms, InOutRoadPresetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDynamicRoadDrawPreset, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Strip,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Road,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StripLengthCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InOutRoadPresetClass,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetRoadPresetClass Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStreetMapImportCustomizer, nullptr, "SetRoadPresetClass", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<StreetMapImportCustomizer_eventSetRoadPresetClass_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(StreetMapImportCustomizer_eventSetRoadPresetClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreetMapImportCustomizer_SetRoadPresetClass(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStreetMapImportCustomizer::execSetRoadPresetClass)
{
	P_GET_STRUCT_REF(FStreetMapRoadStrip,Z_Param_Out_Strip);
	P_GET_STRUCT_REF(FStreetMapRoad,Z_Param_Out_Road);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StripLengthCm);
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UDynamicRoadDrawPreset>,Z_Param_Out_InOutRoadPresetClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRoadPresetClass_Implementation(Z_Param_Out_Strip,Z_Param_Out_Road,Z_Param_StripLengthCm,Z_Param_Out_InOutRoadPresetClass);
	P_NATIVE_END;
}
// ********** End Class UStreetMapImportCustomizer Function SetRoadPresetClass *********************

// ********** Begin Class UStreetMapImportCustomizer Function SetStreetMapContext ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStreetMapImportCustomizer_SetStreetMapContext_Statics
struct UHT_STATICS
{
	struct StreetMapImportCustomizer_eventSetStreetMapContext_Parms
	{
		const UStreetMap* InStreetMap;
		FBox2D BoundsUE;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStreetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsUE_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetStreetMapContext constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InStreetMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundsUE;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetStreetMapContext constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetStreetMapContext Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InStreetMap = { "InStreetMap", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapImportCustomizer_eventSetStreetMapContext_Parms, InStreetMap), Z_Construct_UClass_UStreetMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStreetMap_MetaData), NewProp_InStreetMap_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BoundsUE = { "BoundsUE", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapImportCustomizer_eventSetStreetMapContext_Parms, BoundsUE), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsUE_MetaData), NewProp_BoundsUE_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InStreetMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoundsUE,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetStreetMapContext Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStreetMapImportCustomizer, nullptr, "SetStreetMapContext", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::StreetMapImportCustomizer_eventSetStreetMapContext_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::StreetMapImportCustomizer_eventSetStreetMapContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreetMapImportCustomizer_SetStreetMapContext(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStreetMapImportCustomizer::execSetStreetMapContext)
{
	P_GET_OBJECT(UStreetMap,Z_Param_InStreetMap);
	P_GET_STRUCT_REF(FBox2D,Z_Param_Out_BoundsUE);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStreetMapContext(Z_Param_InStreetMap,Z_Param_Out_BoundsUE);
	P_NATIVE_END;
}
// ********** End Class UStreetMapImportCustomizer Function SetStreetMapContext ********************

// ********** Begin Class UStreetMapImportCustomizer Function SplitSelfIntersectingRoads ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStreetMapImportCustomizer_SplitSelfIntersectingRoads_Statics
struct UHT_STATICS
{
	struct StreetMapImportCustomizer_eventSplitSelfIntersectingRoads_Parms
	{
		TArray<AActor*> RoadActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SplitSelfIntersectingRoads constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoadActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoadActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SplitSelfIntersectingRoads constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SplitSelfIntersectingRoads Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoadActors_Inner = { "RoadActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RoadActors = { "RoadActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapImportCustomizer_eventSplitSelfIntersectingRoads_Parms, RoadActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadActors,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SplitSelfIntersectingRoads Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStreetMapImportCustomizer, nullptr, "SplitSelfIntersectingRoads", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::StreetMapImportCustomizer_eventSplitSelfIntersectingRoads_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::StreetMapImportCustomizer_eventSplitSelfIntersectingRoads_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreetMapImportCustomizer_SplitSelfIntersectingRoads(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStreetMapImportCustomizer::execSplitSelfIntersectingRoads)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_RoadActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SplitSelfIntersectingRoads(Z_Param_Out_RoadActors);
	P_NATIVE_END;
}
// ********** End Class UStreetMapImportCustomizer Function SplitSelfIntersectingRoads *************

// ********** Begin Class UStreetMapImportCustomizer ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UStreetMapImportCustomizer_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StreetMap/StreetMapImportCustomizer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingClass_MetaData[] = {
		{ "Category", "Customization|Building" },
		{ "Comment", "// Default building actor class used by the base ProcessStreetMapBuilding implementation.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
		{ "ToolTip", "Default building actor class used by the base ProcessStreetMapBuilding implementation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingStyleClass_MetaData[] = {
		{ "Category", "Customization|Building" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadClass_MetaData[] = {
		{ "Category", "Customization|Road" },
		{ "Comment", "// Default road actor class used by the base ProcessRoadStrip implementation.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
		{ "ToolTip", "Default road actor class used by the base ProcessRoadStrip implementation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParcelBlockClass_MetaData[] = {
		{ "Category", "Customization|Parcel" },
		{ "Comment", "// Default ACityBlock subclass spawned by ProcessParcels when no override is provided.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
		{ "ToolTip", "Default ACityBlock subclass spawned by ProcessParcels when no override is provided." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadPresetClass_MetaData[] = {
		{ "Category", "Customization|Road" },
		{ "Comment", "// Default draw preset class used when spawning roads into a network.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
		{ "ToolTip", "Default draw preset class used when spawning roads into a network." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Landscape_MetaData[] = {
		{ "Category", "Customization|Building" },
		{ "Comment", "// Optional landscape used to snap spawned buildings to terrain.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
		{ "ToolTip", "Optional landscape used to snap spawned buildings to terrain." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSnapBuildingsToLandscape_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSnapParcelsToLandscape_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFloorPlates_MetaData[] = {
		{ "Category", "Customization|Building" },
		{ "Comment", "// If true, geometry parts are merged into a single footprint before spawning.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
		{ "ToolTip", "If true, geometry parts are merged into a single footprint before spawning." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingLevelFloorFactor_MetaData[] = {
		{ "Category", "Customization|Building" },
		{ "Comment", "// Conversion factor used when OSM data only provides building:levels.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
		{ "ToolTip", "Conversion factor used when OSM data only provides building:levels." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedGeometryRoles_MetaData[] = {
		{ "Category", "Customization|Building" },
		{ "Comment", "/**\n\x09 * Geometry roles that contribute solid area when constructing authored floor plates.\n\x09 *\n\x09 * Outer/outline rings only apply to buildings with no parts (typically `type=multipolygon`);\n\x09 * once any part exists it defines the massing on its own. Inner rings are always subtracted and\n\x09 * are not affected by this list.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
		{ "ToolTip", "Geometry roles that contribute solid area when constructing authored floor plates.\n\nOuter/outline rings only apply to buildings with no parts (typically `type=multipolygon`);\nonce any part exists it defines the massing on its own. Inner rings are always subtracted and\nare not affected by this list." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportRoofShapes_MetaData[] = {
		{ "Category", "Customization|Building" },
		{ "Comment", "/**\n\x09 * Translate OSM `roof:*` tags into per-building and per-plate roof overrides.\n\x09 * Disable to let the BuildingStyle's URoofStyle decide every roof.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
		{ "ToolTip", "Translate OSM `roof:*` tags into per-building and per-plate roof overrides.\nDisable to let the BuildingStyle's URoofStyle decide every roof." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreciseHeight_MetaData[] = {
		{ "Category", "Customization|Building" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
		{ "ToolTip", "Stretch modular floor meshes so building height matches OSM/authored height exactly." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoofLevelHeightFactor_MetaData[] = {
		{ "Category", "Customization|Building" },
		{ "Comment", "// Centimetres of roof height contributed by one `roof:levels` step when `roof:height` is absent.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
		{ "ToolTip", "Centimetres of roof height contributed by one `roof:levels` step when `roof:height` is absent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRoofRidgeHeight_MetaData[] = {
		{ "Category", "Customization|Building" },
		{ "Comment", "/**\n\x09 * Ridge height (cm) used for a sloped `roof:shape` that carries no height information.\n\x09 * Without this such roofs would collapse back to flat.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
		{ "ToolTip", "Ridge height (cm) used for a sloped `roof:shape` that carries no height information.\nWithout this such roofs would collapse back to flat." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreetFacingDistance_MetaData[] = {
		{ "Category", "Customization|Building" },
		{ "Comment", "// Maximum search distance for identifying road-facing building edges.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
		{ "ToolTip", "Maximum search distance for identifying road-facing building edges." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreetFacingAngle_MetaData[] = {
		{ "Category", "Customization|Building" },
		{ "Comment", "// How closely a footprint edge must face a nearby road to count as street-facing.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
		{ "ToolTip", "How closely a footprint edge must face a nearby road to count as street-facing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreetFacingParallel_MetaData[] = {
		{ "Category", "Customization|Building" },
		{ "Comment", "// How parallel a road segment must be to a footprint edge to count as a facade match.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
		{ "ToolTip", "How parallel a road segment must be to a footprint edge to count as a facade match." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStreetFacingFacesEnabled_MetaData[] = {
		{ "Category", "Customization|Building" },
		{ "Comment", "// Enables automatic population of AModularBuildingActor::StreetFacingFaces.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
		{ "ToolTip", "Enables automatic population of AModularBuildingActor::StreetFacingFaces." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStreetFacingAllowSelfIntersections_MetaData[] = {
		{ "Category", "Customization|Building" },
		{ "Comment", "// When disabled, candidate facade rays that cross the footprint are rejected.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
		{ "ToolTip", "When disabled, candidate facade rays that cross the footprint are rejected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRoadsLandscapeSplineMirroring_MetaData[] = {
		{ "Category", "Customization|Road" },
		{ "Comment", "// When true, generated roads mirror themselves onto the landscape spline system.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
		{ "ToolTip", "When true, generated roads mirror themselves onto the landscape spline system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadSplinePointType_MetaData[] = {
		{ "Category", "Customization|Road" },
		{ "Comment", "// Spline point type assigned to the generated control spline.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
		{ "ToolTip", "Spline point type assigned to the generated control spline." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadControlSplineZOffset_MetaData[] = {
		{ "Category", "Customization|Road" },
		{ "Comment", "// Lift roads slightly above the ground to avoid z-fighting/overlap.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
		{ "ToolTip", "Lift roads slightly above the ground to avoid z-fighting/overlap." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePreviewActorTransform_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewActor_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadStripSettings_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadNetwork_MetaData[] = {
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadPreset_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizer.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UStreetMapImportCustomizer constinit property declarations ***************
	static const UECodeGen_Private::FClassPropertyParams NewProp_BuildingClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BuildingStyleClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RoadClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ParcelBlockClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RoadPresetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Landscape;
	static void NewProp_bAutoSnapBuildingsToLandscape_SetBit(void* Obj)
	{
		((UStreetMapImportCustomizer*)Obj)->bAutoSnapBuildingsToLandscape = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSnapBuildingsToLandscape;
	static void NewProp_bAutoSnapParcelsToLandscape_SetBit(void* Obj)
	{
		((UStreetMapImportCustomizer*)Obj)->bAutoSnapParcelsToLandscape = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSnapParcelsToLandscape;
	static void NewProp_bUseFloorPlates_SetBit(void* Obj)
	{
		((UStreetMapImportCustomizer*)Obj)->bUseFloorPlates = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFloorPlates;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BuildingLevelFloorFactor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AllowedGeometryRoles_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowedGeometryRoles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedGeometryRoles;
	static void NewProp_bImportRoofShapes_SetBit(void* Obj)
	{
		((UStreetMapImportCustomizer*)Obj)->bImportRoofShapes = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportRoofShapes;
	static void NewProp_bPreciseHeight_SetBit(void* Obj)
	{
		((UStreetMapImportCustomizer*)Obj)->bPreciseHeight = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreciseHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoofLevelHeightFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultRoofRidgeHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StreetFacingDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StreetFacingAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StreetFacingParallel;
	static void NewProp_bStreetFacingFacesEnabled_SetBit(void* Obj)
	{
		((UStreetMapImportCustomizer*)Obj)->bStreetFacingFacesEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStreetFacingFacesEnabled;
	static void NewProp_bStreetFacingAllowSelfIntersections_SetBit(void* Obj)
	{
		((UStreetMapImportCustomizer*)Obj)->bStreetFacingAllowSelfIntersections = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStreetFacingAllowSelfIntersections;
	static void NewProp_bEnableRoadsLandscapeSplineMirroring_SetBit(void* Obj)
	{
		((UStreetMapImportCustomizer*)Obj)->bEnableRoadsLandscapeSplineMirroring = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRoadsLandscapeSplineMirroring;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RoadSplinePointType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoadControlSplineZOffset;
	static void NewProp_bUsePreviewActorTransform_SetBit(void* Obj)
	{
		((UStreetMapImportCustomizer*)Obj)->bUsePreviewActorTransform = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePreviewActorTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoadStripSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoadNetwork;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoadPreset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UStreetMapImportCustomizer constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CustomizeBuilding"), .Pointer = &UStreetMapImportCustomizer::execCustomizeBuilding },
		{ .NameUTF8 = UTF8TEXT("CustomizeGeneratedBuildingActor"), .Pointer = &UStreetMapImportCustomizer::execCustomizeGeneratedBuildingActor },
		{ .NameUTF8 = UTF8TEXT("CustomizeParcel"), .Pointer = &UStreetMapImportCustomizer::execCustomizeParcel },
		{ .NameUTF8 = UTF8TEXT("FindRoadFacingFaces"), .Pointer = &UStreetMapImportCustomizer::execFindRoadFacingFaces },
		{ .NameUTF8 = UTF8TEXT("ProcessBuilding"), .Pointer = &UStreetMapImportCustomizer::execProcessBuilding },
		{ .NameUTF8 = UTF8TEXT("ProcessRoadStrip"), .Pointer = &UStreetMapImportCustomizer::execProcessRoadStrip },
		{ .NameUTF8 = UTF8TEXT("ProcessStreetMapBuilding"), .Pointer = &UStreetMapImportCustomizer::execProcessStreetMapBuilding },
		{ .NameUTF8 = UTF8TEXT("SetRoadPresetClass"), .Pointer = &UStreetMapImportCustomizer::execSetRoadPresetClass },
		{ .NameUTF8 = UTF8TEXT("SetStreetMapContext"), .Pointer = &UStreetMapImportCustomizer::execSetStreetMapContext },
		{ .NameUTF8 = UTF8TEXT("SplitSelfIntersectingRoads"), .Pointer = &UStreetMapImportCustomizer::execSplitSelfIntersectingRoads },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStreetMapImportCustomizer_CustomizeBuilding, "CustomizeBuilding" }, // 3414a09568b592c533aaecd8d8c0729919bf094c
		{ &Z_Construct_UFunction_UStreetMapImportCustomizer_CustomizeGeneratedBuildingActor, "CustomizeGeneratedBuildingActor" }, // c5e1c90dbed3cf481ebf52c4946303def629c565
		{ &Z_Construct_UFunction_UStreetMapImportCustomizer_CustomizeParcel, "CustomizeParcel" }, // d351261a70f4e3d9b16eb7388b7dde3938a3aa0a
		{ &Z_Construct_UFunction_UStreetMapImportCustomizer_FindRoadFacingFaces, "FindRoadFacingFaces" }, // 87c77735fd89e05f15dd496dc581c352fa0d4a2b
		{ &Z_Construct_UFunction_UStreetMapImportCustomizer_ProcessBuilding, "ProcessBuilding" }, // 4ec32f74eec3ad66814d564360bc368974a0cca8
		{ &Z_Construct_UFunction_UStreetMapImportCustomizer_ProcessRoadStrip, "ProcessRoadStrip" }, // 10eb96514a03e490a25c2a7f66784e10804a6ed4
		{ &Z_Construct_UFunction_UStreetMapImportCustomizer_ProcessStreetMapBuilding, "ProcessStreetMapBuilding" }, // 9cd498194f346b18f83085558f0715521c1dacf0
		{ &Z_Construct_UFunction_UStreetMapImportCustomizer_SetRoadPresetClass, "SetRoadPresetClass" }, // 539e1c5a6ed61a97f1904ac655a406636c6e0ee7
		{ &Z_Construct_UFunction_UStreetMapImportCustomizer_SetStreetMapContext, "SetStreetMapContext" }, // b879a936300a6a3d0f883ee252b5a8eb59cf5154
		{ &Z_Construct_UFunction_UStreetMapImportCustomizer_SplitSelfIntersectingRoads, "SplitSelfIntersectingRoads" }, // ba3d00922455dd3b06b5fc7de3ee33e551923369
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreetMapImportCustomizer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UStreetMapImportCustomizer Property Definitions **************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_BuildingClass = { "BuildingClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMapImportCustomizer, BuildingClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AModularBuildingActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingClass_MetaData), NewProp_BuildingClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_BuildingStyleClass = { "BuildingStyleClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMapImportCustomizer, BuildingStyleClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBuildingStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingStyleClass_MetaData), NewProp_BuildingStyleClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_RoadClass = { "RoadClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMapImportCustomizer, RoadClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadClass_MetaData), NewProp_RoadClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ParcelBlockClass = { "ParcelBlockClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMapImportCustomizer, ParcelBlockClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACityBlock, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParcelBlockClass_MetaData), NewProp_ParcelBlockClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_RoadPresetClass = { "RoadPresetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMapImportCustomizer, RoadPresetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDynamicRoadDrawPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadPresetClass_MetaData), NewProp_RoadPresetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Landscape = { "Landscape", nullptr, (EPropertyFlags)0x0010040000002005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMapImportCustomizer, Landscape), Z_Construct_UClass_ALandscape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Landscape_MetaData), NewProp_Landscape_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoSnapBuildingsToLandscape = { "bAutoSnapBuildingsToLandscape", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UStreetMapImportCustomizer), &UHT_STATICS::NewProp_bAutoSnapBuildingsToLandscape_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoSnapBuildingsToLandscape_MetaData), NewProp_bAutoSnapBuildingsToLandscape_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoSnapParcelsToLandscape = { "bAutoSnapParcelsToLandscape", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UStreetMapImportCustomizer), &UHT_STATICS::NewProp_bAutoSnapParcelsToLandscape_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoSnapParcelsToLandscape_MetaData), NewProp_bAutoSnapParcelsToLandscape_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseFloorPlates = { "bUseFloorPlates", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UStreetMapImportCustomizer), &UHT_STATICS::NewProp_bUseFloorPlates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFloorPlates_MetaData), NewProp_bUseFloorPlates_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BuildingLevelFloorFactor = { "BuildingLevelFloorFactor", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMapImportCustomizer, BuildingLevelFloorFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingLevelFloorFactor_MetaData), NewProp_BuildingLevelFloorFactor_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_AllowedGeometryRoles_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_AllowedGeometryRoles_Inner = { "AllowedGeometryRoles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, 0, Z_Construct_UEnum_TwinBLDEditor_EOSMGeometryRole, METADATA_PARAMS(0, nullptr) }; // 48f2403b032f9934abfed637846abe7589d894ac
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_AllowedGeometryRoles = { "AllowedGeometryRoles", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMapImportCustomizer, AllowedGeometryRoles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedGeometryRoles_MetaData), NewProp_AllowedGeometryRoles_MetaData) }; // 48f2403b032f9934abfed637846abe7589d894ac
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bImportRoofShapes = { "bImportRoofShapes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UStreetMapImportCustomizer), &UHT_STATICS::NewProp_bImportRoofShapes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportRoofShapes_MetaData), NewProp_bImportRoofShapes_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPreciseHeight = { "bPreciseHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UStreetMapImportCustomizer), &UHT_STATICS::NewProp_bPreciseHeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreciseHeight_MetaData), NewProp_bPreciseHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RoofLevelHeightFactor = { "RoofLevelHeightFactor", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMapImportCustomizer, RoofLevelHeightFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoofLevelHeightFactor_MetaData), NewProp_RoofLevelHeightFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DefaultRoofRidgeHeight = { "DefaultRoofRidgeHeight", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMapImportCustomizer, DefaultRoofRidgeHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultRoofRidgeHeight_MetaData), NewProp_DefaultRoofRidgeHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StreetFacingDistance = { "StreetFacingDistance", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMapImportCustomizer, StreetFacingDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreetFacingDistance_MetaData), NewProp_StreetFacingDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StreetFacingAngle = { "StreetFacingAngle", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMapImportCustomizer, StreetFacingAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreetFacingAngle_MetaData), NewProp_StreetFacingAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StreetFacingParallel = { "StreetFacingParallel", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMapImportCustomizer, StreetFacingParallel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreetFacingParallel_MetaData), NewProp_StreetFacingParallel_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bStreetFacingFacesEnabled = { "bStreetFacingFacesEnabled", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UStreetMapImportCustomizer), &UHT_STATICS::NewProp_bStreetFacingFacesEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStreetFacingFacesEnabled_MetaData), NewProp_bStreetFacingFacesEnabled_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bStreetFacingAllowSelfIntersections = { "bStreetFacingAllowSelfIntersections", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UStreetMapImportCustomizer), &UHT_STATICS::NewProp_bStreetFacingAllowSelfIntersections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStreetFacingAllowSelfIntersections_MetaData), NewProp_bStreetFacingAllowSelfIntersections_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableRoadsLandscapeSplineMirroring = { "bEnableRoadsLandscapeSplineMirroring", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UStreetMapImportCustomizer), &UHT_STATICS::NewProp_bEnableRoadsLandscapeSplineMirroring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRoadsLandscapeSplineMirroring_MetaData), NewProp_bEnableRoadsLandscapeSplineMirroring_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_RoadSplinePointType = { "RoadSplinePointType", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMapImportCustomizer, RoadSplinePointType), Z_Construct_UEnum_Engine_ESplinePointType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadSplinePointType_MetaData), NewProp_RoadSplinePointType_MetaData) }; // a36fe1683c8c90d7da2ea8b7d1336029399b5336
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RoadControlSplineZOffset = { "RoadControlSplineZOffset", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMapImportCustomizer, RoadControlSplineZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadControlSplineZOffset_MetaData), NewProp_RoadControlSplineZOffset_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUsePreviewActorTransform = { "bUsePreviewActorTransform", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UStreetMapImportCustomizer), &UHT_STATICS::NewProp_bUsePreviewActorTransform_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePreviewActorTransform_MetaData), NewProp_bUsePreviewActorTransform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PreviewActor = { "PreviewActor", nullptr, (EPropertyFlags)0x0010040000002005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMapImportCustomizer, PreviewActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewActor_MetaData), NewProp_PreviewActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RoadStripSettings = { "RoadStripSettings", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMapImportCustomizer, RoadStripSettings), Z_Construct_UScriptStruct_FStreetMapRoadStripSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadStripSettings_MetaData), NewProp_RoadStripSettings_MetaData) }; // b801dcef2552d12a234bd4425015d26813a95616
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoadNetwork = { "RoadNetwork", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMapImportCustomizer, RoadNetwork), Z_Construct_UClass_ADynamicRoadNetwork, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadNetwork_MetaData), NewProp_RoadNetwork_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoadPreset = { "RoadPreset", nullptr, (EPropertyFlags)0x0022080000082008, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMapImportCustomizer, RoadPreset), Z_Construct_UClass_UDynamicRoadDrawPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadPreset_MetaData), NewProp_RoadPreset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingStyleClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParcelBlockClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadPresetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Landscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoSnapBuildingsToLandscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoSnapParcelsToLandscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseFloorPlates,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingLevelFloorFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AllowedGeometryRoles_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AllowedGeometryRoles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AllowedGeometryRoles,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bImportRoofShapes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPreciseHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoofLevelHeightFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultRoofRidgeHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StreetFacingDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StreetFacingAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StreetFacingParallel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bStreetFacingFacesEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bStreetFacingAllowSelfIntersections,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableRoadsLandscapeSplineMirroring,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadSplinePointType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadControlSplineZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUsePreviewActorTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviewActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadStripSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadNetwork,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadPreset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UStreetMapImportCustomizer Property Definitions ****************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UStreetMapImportCustomizerBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UStreetMapImportCustomizer,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UStreetMapImportCustomizer_StaticRegisterNativesUStreetMapImportCustomizer()
{
	UClass* Class = UStreetMapImportCustomizer::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStreetMapImportCustomizer;
UClass* Z_Construct_UClass_UStreetMapImportCustomizer(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UStreetMapImportCustomizer;
		if (!Z_Registration_Info_UClass_UStreetMapImportCustomizer.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("StreetMapImportCustomizer"),
				Z_Registration_Info_UClass_UStreetMapImportCustomizer.InnerSingleton,
				UStreetMapImportCustomizer_StaticRegisterNativesUStreetMapImportCustomizer,
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
		return Z_Registration_Info_UClass_UStreetMapImportCustomizer.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UStreetMapImportCustomizer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStreetMapImportCustomizer.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UStreetMapImportCustomizer.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UStreetMapImportCustomizer);
UStreetMapImportCustomizer::~UStreetMapImportCustomizer() {}
// ********** End Class UStreetMapImportCustomizer *************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapImportCustomizer_h__Script_TwinBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStreetMapImportCustomizer, TEXT("UStreetMapImportCustomizer"), &Z_Registration_Info_UClass_UStreetMapImportCustomizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStreetMapImportCustomizer), 2278835145U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapImportCustomizer_h__Script_TwinBLDEditor_5257a093bddc4c27d5dee5c9dbd5f3f24df6128d{
	TEXT("/Script/TwinBLDEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
