// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CityBLDRuntimeSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeCityBLDRuntimeSettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionEnabled(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDRuntime(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UCityBLDRuntimeSettings(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UCityBLDRuntimeSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UCityBLDRuntimeSettings Function Get *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCityBLDRuntimeSettings_Get_Statics
struct UHT_STATICS
{
	struct CityBLDRuntimeSettings_eventGet_Parms
	{
		UCityBLDRuntimeSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD" },
		{ "DisplayName", "CityBLD Settings" },
		{ "ModuleRelativePath", "Public/CityBLDRuntimeSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Get constinit property declarations ***********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Get constinit property declarations *************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Get Property Definitions **********************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(CityBLDRuntimeSettings_eventGet_Parms, ReturnValue), Z_Construct_UClass_UCityBLDRuntimeSettings, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function Get Property Definitions ************************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCityBLDRuntimeSettings, nullptr, "Get", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CityBLDRuntimeSettings_eventGet_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CityBLDRuntimeSettings_eventGet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCityBLDRuntimeSettings_Get(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCityBLDRuntimeSettings::execGet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCityBLDRuntimeSettings**)Z_Param__Result=UCityBLDRuntimeSettings::Get();
	P_NATIVE_END;
}
// ********** End Class UCityBLDRuntimeSettings Function Get ***************************************

// ********** Begin Class UCityBLDRuntimeSettings **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UCityBLDRuntimeSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "CityBLDRuntimeSettings.h" },
		{ "ModuleRelativePath", "Public/CityBLDRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingCollisionType_MetaData[] = {
		{ "Category", "Building Collision Settings" },
		{ "Comment", "/** Default collision enabled state for spawned building actors/components. */" },
		{ "DisplayName", "Building Collision" },
		{ "ModuleRelativePath", "Public/CityBLDRuntimeSettings.h" },
		{ "ToolTip", "Default collision enabled state for spawned building actors/components." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBrickMaterial_MetaData[] = {
		{ "Category", "Building Materials" },
		{ "Comment", "/** Default \"brick\" labeled for building mesh creator, just for preview purposes. */" },
		{ "ModuleRelativePath", "Public/CityBLDRuntimeSettings.h" },
		{ "ToolTip", "Default \"brick\" labeled for building mesh creator, just for preview purposes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPlasterMaterial_MetaData[] = {
		{ "Category", "Building Materials" },
		{ "Comment", "/** Default \"plaster\" labeled for building mesh creator, just for preview purposes. */" },
		{ "ModuleRelativePath", "Public/CityBLDRuntimeSettings.h" },
		{ "ToolTip", "Default \"plaster\" labeled for building mesh creator, just for preview purposes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultStoneMaterial_MetaData[] = {
		{ "Category", "Building Materials" },
		{ "Comment", "/** Default \"stone\" labeled for building mesh creator, just for preview purposes. */" },
		{ "ModuleRelativePath", "Public/CityBLDRuntimeSettings.h" },
		{ "ToolTip", "Default \"stone\" labeled for building mesh creator, just for preview purposes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTileMaterial_MetaData[] = {
		{ "Category", "Building Materials" },
		{ "Comment", "/** Default \"tile\" labeled for building mesh creator, just for preview purposes. */" },
		{ "ModuleRelativePath", "Public/CityBLDRuntimeSettings.h" },
		{ "ToolTip", "Default \"tile\" labeled for building mesh creator, just for preview purposes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CityBlockDelaunayGridSpacing_MetaData[] = {
		{ "Category", "City Block Mesh Settings" },
		{ "ClampMax", "5000.0" },
		{ "ClampMin", "10.0" },
		{ "Comment", "/** Grid spacing (cm) for interior points in CityBlock Delaunay triangulation. Smaller values create denser meshes. */" },
		{ "DisplayName", "City Block Delaunay Grid Spacing" },
		{ "ModuleRelativePath", "Public/CityBLDRuntimeSettings.h" },
		{ "ToolTip", "Grid spacing (cm) for interior points in CityBlock Delaunay triangulation. Smaller values create denser meshes." },
		{ "UIMax", "2000.0" },
		{ "UIMin", "10.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedGableClusterTolerance_MetaData[] = {
		{ "Category", "Advanced Gable Roof" },
		{ "ClampMax", "200.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Vertex cluster distance (cm) applied before Advanced Gable decomposition. */" },
		{ "ModuleRelativePath", "Public/CityBLDRuntimeSettings.h" },
		{ "ToolTip", "Vertex cluster distance (cm) applied before Advanced Gable decomposition." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedGableLineDeviationTolerance_MetaData[] = {
		{ "Category", "Advanced Gable Roof" },
		{ "ClampMax", "200.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Douglas-Peucker deviation (cm) used when simplifying an Advanced Gable footprint. */" },
		{ "ModuleRelativePath", "Public/CityBLDRuntimeSettings.h" },
		{ "ToolTip", "Douglas-Peucker deviation (cm) used when simplifying an Advanced Gable footprint." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedGableSpikeAngleDegrees_MetaData[] = {
		{ "Category", "Advanced Gable Roof" },
		{ "ClampMax", "45.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Drop spikes whose interior angle is within this many degrees of 0 or 360. */" },
		{ "ModuleRelativePath", "Public/CityBLDRuntimeSettings.h" },
		{ "ToolTip", "Drop spikes whose interior angle is within this many degrees of 0 or 360." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedGableMinPartArea_MetaData[] = {
		{ "Category", "Advanced Gable Roof" },
		{ "ClampMin", "100.0" },
		{ "Comment", "/** Minimum part area (cm^2). Smaller remainder components are discarded. */" },
		{ "ModuleRelativePath", "Public/CityBLDRuntimeSettings.h" },
		{ "ToolTip", "Minimum part area (cm^2). Smaller remainder components are discarded." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedGableRectangularityThreshold_MetaData[] = {
		{ "Category", "Advanced Gable Roof" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.5" },
		{ "Comment", "/** Emit the whole polygon as one part when PolyArea / OBBArea is at least this. */" },
		{ "ModuleRelativePath", "Public/CityBLDRuntimeSettings.h" },
		{ "ToolTip", "Emit the whole polygon as one part when PolyArea / OBBArea is at least this." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedGableMaxDecompositionDepth_MetaData[] = {
		{ "Category", "Advanced Gable Roof" },
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum recursion depth for OBB wing decomposition. */" },
		{ "ModuleRelativePath", "Public/CityBLDRuntimeSettings.h" },
		{ "ToolTip", "Maximum recursion depth for OBB wing decomposition." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedGableWingCoverageFraction_MetaData[] = {
		{ "Category", "Advanced Gable Roof" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.5" },
		{ "Comment", "/** Grow the dominant-wing band while coverage stays above this fraction of the peak. */" },
		{ "ModuleRelativePath", "Public/CityBLDRuntimeSettings.h" },
		{ "ToolTip", "Grow the dominant-wing band while coverage stays above this fraction of the peak." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedGableMinWingAreaFraction_MetaData[] = {
		{ "Category", "Advanced Gable Roof" },
		{ "ClampMax", "0.5" },
		{ "ClampMin", "0.05" },
		{ "Comment", "/** Abandon a split when the carved wing is under this fraction of the parent area. */" },
		{ "ModuleRelativePath", "Public/CityBLDRuntimeSettings.h" },
		{ "ToolTip", "Abandon a split when the carved wing is under this fraction of the parent area." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedGableAxisSnapAngleDegrees_MetaData[] = {
		{ "Category", "Advanced Gable Roof" },
		{ "ClampMax", "45.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Snap sibling ridge axes that differ by less than this many degrees. */" },
		{ "ModuleRelativePath", "Public/CityBLDRuntimeSettings.h" },
		{ "ToolTip", "Snap sibling ridge axes that differ by less than this many degrees." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedGableSquareAspectThreshold_MetaData[] = {
		{ "Category", "Advanced Gable Roof" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Parts with long/short aspect below this are classified as hip rather than gable. */" },
		{ "ModuleRelativePath", "Public/CityBLDRuntimeSettings.h" },
		{ "ToolTip", "Parts with long/short aspect below this are classified as hip rather than gable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedGableMinGableEdgeLength_MetaData[] = {
		{ "Category", "Advanced Gable Roof" },
		{ "ClampMax", "2000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Footprint collinear runs shorter than this (cm) are not emitted as vertical gable faces. */" },
		{ "ModuleRelativePath", "Public/CityBLDRuntimeSettings.h" },
		{ "ToolTip", "Footprint collinear runs shorter than this (cm) are not emitted as vertical gable faces." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedGableGableAlignAngleDegrees_MetaData[] = {
		{ "Category", "Advanced Gable Roof" },
		{ "ClampMax", "45.0" },
		{ "ClampMin", "5.0" },
		{ "Comment", "/** A boundary edge may become a gable face only if it is within this many degrees of perpendicular to the ridge. */" },
		{ "ModuleRelativePath", "Public/CityBLDRuntimeSettings.h" },
		{ "ToolTip", "A boundary edge may become a gable face only if it is within this many degrees of perpendicular to the ridge." },
	};
#endif // WITH_METADATA

// ********** Begin Class UCityBLDRuntimeSettings constinit property declarations ******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_BuildingCollisionType;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultBrickMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultPlasterMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultStoneMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultTileMaterial;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CityBlockDelaunayGridSpacing;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AdvancedGableClusterTolerance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AdvancedGableLineDeviationTolerance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AdvancedGableSpikeAngleDegrees;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AdvancedGableMinPartArea;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AdvancedGableRectangularityThreshold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AdvancedGableMaxDecompositionDepth;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AdvancedGableWingCoverageFraction;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AdvancedGableMinWingAreaFraction;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AdvancedGableAxisSnapAngleDegrees;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AdvancedGableSquareAspectThreshold;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AdvancedGableMinGableEdgeLength;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AdvancedGableGableAlignAngleDegrees;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCityBLDRuntimeSettings constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Get"), .Pointer = &UCityBLDRuntimeSettings::execGet },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCityBLDRuntimeSettings_Get, "Get" }, // 2ebc651e6254924f2310780c4e05f9767d37f2bd
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCityBLDRuntimeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UCityBLDRuntimeSettings Property Definitions *****************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_BuildingCollisionType = { "BuildingCollisionType", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(UCityBLDRuntimeSettings, BuildingCollisionType), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingCollisionType_MetaData), NewProp_BuildingCollisionType_MetaData) }; // c8a7ab99d1a880814023560b6b0d1971eef51d4c
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_DefaultBrickMaterial = { "DefaultBrickMaterial", nullptr, (EPropertyFlags)0x0014000000004005, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(UCityBLDRuntimeSettings, DefaultBrickMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBrickMaterial_MetaData), NewProp_DefaultBrickMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_DefaultPlasterMaterial = { "DefaultPlasterMaterial", nullptr, (EPropertyFlags)0x0014000000004005, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(UCityBLDRuntimeSettings, DefaultPlasterMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPlasterMaterial_MetaData), NewProp_DefaultPlasterMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_DefaultStoneMaterial = { "DefaultStoneMaterial", nullptr, (EPropertyFlags)0x0014000000004005, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(UCityBLDRuntimeSettings, DefaultStoneMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultStoneMaterial_MetaData), NewProp_DefaultStoneMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_DefaultTileMaterial = { "DefaultTileMaterial", nullptr, (EPropertyFlags)0x0014000000004005, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(UCityBLDRuntimeSettings, DefaultTileMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTileMaterial_MetaData), NewProp_DefaultTileMaterial_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_CityBlockDelaunayGridSpacing = { "CityBlockDelaunayGridSpacing", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UCityBLDRuntimeSettings, CityBlockDelaunayGridSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CityBlockDelaunayGridSpacing_MetaData), NewProp_CityBlockDelaunayGridSpacing_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_AdvancedGableClusterTolerance = { "AdvancedGableClusterTolerance", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UCityBLDRuntimeSettings, AdvancedGableClusterTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedGableClusterTolerance_MetaData), NewProp_AdvancedGableClusterTolerance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_AdvancedGableLineDeviationTolerance = { "AdvancedGableLineDeviationTolerance", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UCityBLDRuntimeSettings, AdvancedGableLineDeviationTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedGableLineDeviationTolerance_MetaData), NewProp_AdvancedGableLineDeviationTolerance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_AdvancedGableSpikeAngleDegrees = { "AdvancedGableSpikeAngleDegrees", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UCityBLDRuntimeSettings, AdvancedGableSpikeAngleDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedGableSpikeAngleDegrees_MetaData), NewProp_AdvancedGableSpikeAngleDegrees_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_AdvancedGableMinPartArea = { "AdvancedGableMinPartArea", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UCityBLDRuntimeSettings, AdvancedGableMinPartArea), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedGableMinPartArea_MetaData), NewProp_AdvancedGableMinPartArea_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_AdvancedGableRectangularityThreshold = { "AdvancedGableRectangularityThreshold", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UCityBLDRuntimeSettings, AdvancedGableRectangularityThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedGableRectangularityThreshold_MetaData), NewProp_AdvancedGableRectangularityThreshold_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_AdvancedGableMaxDecompositionDepth = { "AdvancedGableMaxDecompositionDepth", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UCityBLDRuntimeSettings, AdvancedGableMaxDecompositionDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedGableMaxDecompositionDepth_MetaData), NewProp_AdvancedGableMaxDecompositionDepth_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_AdvancedGableWingCoverageFraction = { "AdvancedGableWingCoverageFraction", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UCityBLDRuntimeSettings, AdvancedGableWingCoverageFraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedGableWingCoverageFraction_MetaData), NewProp_AdvancedGableWingCoverageFraction_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_AdvancedGableMinWingAreaFraction = { "AdvancedGableMinWingAreaFraction", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UCityBLDRuntimeSettings, AdvancedGableMinWingAreaFraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedGableMinWingAreaFraction_MetaData), NewProp_AdvancedGableMinWingAreaFraction_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_AdvancedGableAxisSnapAngleDegrees = { "AdvancedGableAxisSnapAngleDegrees", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UCityBLDRuntimeSettings, AdvancedGableAxisSnapAngleDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedGableAxisSnapAngleDegrees_MetaData), NewProp_AdvancedGableAxisSnapAngleDegrees_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_AdvancedGableSquareAspectThreshold = { "AdvancedGableSquareAspectThreshold", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UCityBLDRuntimeSettings, AdvancedGableSquareAspectThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedGableSquareAspectThreshold_MetaData), NewProp_AdvancedGableSquareAspectThreshold_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_AdvancedGableMinGableEdgeLength = { "AdvancedGableMinGableEdgeLength", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UCityBLDRuntimeSettings, AdvancedGableMinGableEdgeLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedGableMinGableEdgeLength_MetaData), NewProp_AdvancedGableMinGableEdgeLength_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_AdvancedGableGableAlignAngleDegrees = { "AdvancedGableGableAlignAngleDegrees", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UCityBLDRuntimeSettings, AdvancedGableGableAlignAngleDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedGableGableAlignAngleDegrees_MetaData), NewProp_AdvancedGableGableAlignAngleDegrees_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingCollisionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultBrickMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultPlasterMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultStoneMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultTileMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CityBlockDelaunayGridSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdvancedGableClusterTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdvancedGableLineDeviationTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdvancedGableSpikeAngleDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdvancedGableMinPartArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdvancedGableRectangularityThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdvancedGableMaxDecompositionDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdvancedGableWingCoverageFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdvancedGableMinWingAreaFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdvancedGableAxisSnapAngleDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdvancedGableSquareAspectThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdvancedGableMinGableEdgeLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdvancedGableGableAlignAngleDegrees,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UCityBLDRuntimeSettings Property Definitions *******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDeveloperSettings,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UCityBLDRuntimeSettings,
	"CityBLD",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UCityBLDRuntimeSettings_StaticRegisterNativesUCityBLDRuntimeSettings()
{
	UClass* Class = UCityBLDRuntimeSettings::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCityBLDRuntimeSettings;
UClass* Z_Construct_UClass_UCityBLDRuntimeSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UCityBLDRuntimeSettings;
		if (!Z_Registration_Info_UClass_UCityBLDRuntimeSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CityBLDRuntimeSettings"),
				Z_Registration_Info_UClass_UCityBLDRuntimeSettings.InnerSingleton,
				UCityBLDRuntimeSettings_StaticRegisterNativesUCityBLDRuntimeSettings,
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
		return Z_Registration_Info_UClass_UCityBLDRuntimeSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UCityBLDRuntimeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCityBLDRuntimeSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UCityBLDRuntimeSettings.OuterSingleton;
}
#undef UHT_STATICS
UCityBLDRuntimeSettings::UCityBLDRuntimeSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCityBLDRuntimeSettings);
UCityBLDRuntimeSettings::~UCityBLDRuntimeSettings() {}
// ********** End Class UCityBLDRuntimeSettings ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBLDRuntimeSettings_h__Script_CityBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCityBLDRuntimeSettings, TEXT("UCityBLDRuntimeSettings"), &Z_Registration_Info_UClass_UCityBLDRuntimeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCityBLDRuntimeSettings), 3524131548U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBLDRuntimeSettings_h__Script_CityBLDRuntime_8bfb8b83985e101b25965376dc42826db6eecd96{
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
