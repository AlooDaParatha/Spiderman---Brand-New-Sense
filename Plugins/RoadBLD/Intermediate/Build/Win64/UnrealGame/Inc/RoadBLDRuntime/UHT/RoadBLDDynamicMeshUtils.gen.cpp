// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoadBLDDynamicMeshUtils.h"
#include "GeometryScript/MeshPrimitiveFunctions.h"
#include "IWorldBLDKitElementInterface.h"
#include "UDynamicMesh.h"
#include "WorldBLDRuntimeUtilsLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRoadBLDDynamicMeshUtils() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions(ETypeConstructPhase);
WORLDBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FExtractCurveParams(ETypeConstructPhase);
WORLDBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPolylineModifierSpec(ETypeConstructPhase);
WORLDBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSplineSamplingParams(ETypeConstructPhase);
WORLDBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWorldBLDKitElementEdge(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USplineComponent(ETypeConstructPhase);
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAppendSweepPolylineParameters(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadBLDDynamicMeshUtils(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadBLDDynamicMeshUtils(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FAppendSweepPolylineParameters ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAppendSweepPolylineParameters_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAppendSweepPolylineParameters>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAppendSweepPolylineParameters); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RoadBLDDynamicMeshUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveOptions_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RoadBLDDynamicMeshUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepPathSampleParams_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RoadBLDDynamicMeshUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepPath_MetaData[] = {
		{ "Category", "Input" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RoadBLDDynamicMeshUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepShape_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RoadBLDDynamicMeshUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepShapePoints_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RoadBLDDynamicMeshUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSweepShapePoints_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RoadBLDDynamicMeshUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSweepShapeIsClosedLoop_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RoadBLDDynamicMeshUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepShapeSampleParams_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RoadBLDDynamicMeshUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepShapeScale_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RoadBLDDynamicMeshUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossSectionSideOffset_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Added to each cross-section lateral (local Y) after scale and optional mirror. */" },
		{ "ModuleRelativePath", "Public/RoadBLDDynamicMeshUtils.h" },
		{ "ToolTip", "Added to each cross-section lateral (local Y) after scale and optional mirror." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlipCrossSectionOnSideAxis_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** If true, flips cross-section height around the side axis (local Y), i.e. Height *= -1. */" },
		{ "ModuleRelativePath", "Public/RoadBLDDynamicMeshUtils.h" },
		{ "ToolTip", "If true, flips cross-section height around the side axis (local Y), i.e. Height *= -1." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlipCrossSectionOnVerticalAxis_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** If true, flips cross-section lateral around the vertical axis (local Z), i.e. Lateral *= -1. */" },
		{ "ModuleRelativePath", "Public/RoadBLDDynamicMeshUtils.h" },
		{ "ToolTip", "If true, flips cross-section lateral around the vertical axis (local Z), i.e. Lateral *= -1." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceWorldUpNoBankFrame_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * If true, rebuild the sweep frame from the full 3D path tangent using a fixed world-up reference,\n\x09 * preventing bank/roll from accumulating on sloped curved paths while preserving longitudinal pitch.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RoadBLDDynamicMeshUtils.h" },
		{ "ToolTip", "If true, rebuild the sweep frame from the full 3D path tangent using a fixed world-up reference,\npreventing bank/roll from accumulating on sloped curved paths while preserving longitudinal pitch." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAllowedQuadTwistAngle_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RoadBLDDynamicMeshUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCollapsedLoops_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RoadBLDDynamicMeshUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddEndCaps_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RoadBLDDynamicMeshUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlipEndCaps_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RoadBLDDynamicMeshUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMinEdgeIsPrimary_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RoadBLDDynamicMeshUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMaxEdgeIsPrimary_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RoadBLDDynamicMeshUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolylineModifiers_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RoadBLDDynamicMeshUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAppendSweepPolylineParameters constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepPathSampleParams;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SweepPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SweepShape;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepShapePoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SweepShapePoints;
	static void NewProp_bUseSweepShapePoints_SetBit(void* Obj)
	{
		((FAppendSweepPolylineParameters*)Obj)->bUseSweepShapePoints = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSweepShapePoints;
	static void NewProp_bSweepShapeIsClosedLoop_SetBit(void* Obj)
	{
		((FAppendSweepPolylineParameters*)Obj)->bSweepShapeIsClosedLoop = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweepShapeIsClosedLoop;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepShapeSampleParams;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SweepShapeScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrossSectionSideOffset;
	static void NewProp_bFlipCrossSectionOnSideAxis_SetBit(void* Obj)
	{
		((FAppendSweepPolylineParameters*)Obj)->bFlipCrossSectionOnSideAxis = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipCrossSectionOnSideAxis;
	static void NewProp_bFlipCrossSectionOnVerticalAxis_SetBit(void* Obj)
	{
		((FAppendSweepPolylineParameters*)Obj)->bFlipCrossSectionOnVerticalAxis = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipCrossSectionOnVerticalAxis;
	static void NewProp_bForceWorldUpNoBankFrame_SetBit(void* Obj)
	{
		((FAppendSweepPolylineParameters*)Obj)->bForceWorldUpNoBankFrame = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceWorldUpNoBankFrame;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAllowedQuadTwistAngle;
	static void NewProp_bAllowCollapsedLoops_SetBit(void* Obj)
	{
		((FAppendSweepPolylineParameters*)Obj)->bAllowCollapsedLoops = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCollapsedLoops;
	static void NewProp_bAddEndCaps_SetBit(void* Obj)
	{
		((FAppendSweepPolylineParameters*)Obj)->bAddEndCaps = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddEndCaps;
	static void NewProp_bFlipEndCaps_SetBit(void* Obj)
	{
		((FAppendSweepPolylineParameters*)Obj)->bFlipEndCaps = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipEndCaps;
	static void NewProp_bMinEdgeIsPrimary_SetBit(void* Obj)
	{
		((FAppendSweepPolylineParameters*)Obj)->bMinEdgeIsPrimary = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMinEdgeIsPrimary;
	static void NewProp_bMaxEdgeIsPrimary_SetBit(void* Obj)
	{
		((FAppendSweepPolylineParameters*)Obj)->bMaxEdgeIsPrimary = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaxEdgeIsPrimary;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolylineModifiers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PolylineModifiers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAppendSweepPolylineParameters constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAppendSweepPolylineParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FAppendSweepPolylineParameters Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PrimitiveOptions = { "PrimitiveOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FAppendSweepPolylineParameters, PrimitiveOptions), Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimitiveOptions_MetaData), NewProp_PrimitiveOptions_MetaData) }; // 4c6163c1ecc06044461d2fbe3fac94d444485f4c
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SweepPathSampleParams = { "SweepPathSampleParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FAppendSweepPolylineParameters, SweepPathSampleParams), Z_Construct_UScriptStruct_FSplineSamplingParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepPathSampleParams_MetaData), NewProp_SweepPathSampleParams_MetaData) }; // c0ed29f3642ee659149a37945f7884ee8541e470
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SweepPath = { "SweepPath", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FAppendSweepPolylineParameters, SweepPath), Z_Construct_UClass_USplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepPath_MetaData), NewProp_SweepPath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SweepShape = { "SweepShape", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FAppendSweepPolylineParameters, SweepShape), Z_Construct_UClass_UCurveFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepShape_MetaData), NewProp_SweepShape_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SweepShapePoints_Inner = { "SweepShapePoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SweepShapePoints = { "SweepShapePoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FAppendSweepPolylineParameters, SweepShapePoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepShapePoints_MetaData), NewProp_SweepShapePoints_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseSweepShapePoints = { "bUseSweepShapePoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAppendSweepPolylineParameters), &UHT_STATICS::NewProp_bUseSweepShapePoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSweepShapePoints_MetaData), NewProp_bUseSweepShapePoints_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSweepShapeIsClosedLoop = { "bSweepShapeIsClosedLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAppendSweepPolylineParameters), &UHT_STATICS::NewProp_bSweepShapeIsClosedLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSweepShapeIsClosedLoop_MetaData), NewProp_bSweepShapeIsClosedLoop_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SweepShapeSampleParams = { "SweepShapeSampleParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FAppendSweepPolylineParameters, SweepShapeSampleParams), Z_Construct_UScriptStruct_FExtractCurveParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepShapeSampleParams_MetaData), NewProp_SweepShapeSampleParams_MetaData) }; // 26fadedb90a23be257576216febb8bd1a397378f
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SweepShapeScale = { "SweepShapeScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAppendSweepPolylineParameters, SweepShapeScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepShapeScale_MetaData), NewProp_SweepShapeScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CrossSectionSideOffset = { "CrossSectionSideOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAppendSweepPolylineParameters, CrossSectionSideOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossSectionSideOffset_MetaData), NewProp_CrossSectionSideOffset_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFlipCrossSectionOnSideAxis = { "bFlipCrossSectionOnSideAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAppendSweepPolylineParameters), &UHT_STATICS::NewProp_bFlipCrossSectionOnSideAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlipCrossSectionOnSideAxis_MetaData), NewProp_bFlipCrossSectionOnSideAxis_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFlipCrossSectionOnVerticalAxis = { "bFlipCrossSectionOnVerticalAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAppendSweepPolylineParameters), &UHT_STATICS::NewProp_bFlipCrossSectionOnVerticalAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlipCrossSectionOnVerticalAxis_MetaData), NewProp_bFlipCrossSectionOnVerticalAxis_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bForceWorldUpNoBankFrame = { "bForceWorldUpNoBankFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAppendSweepPolylineParameters), &UHT_STATICS::NewProp_bForceWorldUpNoBankFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceWorldUpNoBankFrame_MetaData), NewProp_bForceWorldUpNoBankFrame_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaxAllowedQuadTwistAngle = { "MaxAllowedQuadTwistAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAppendSweepPolylineParameters, MaxAllowedQuadTwistAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAllowedQuadTwistAngle_MetaData), NewProp_MaxAllowedQuadTwistAngle_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAllowCollapsedLoops = { "bAllowCollapsedLoops", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAppendSweepPolylineParameters), &UHT_STATICS::NewProp_bAllowCollapsedLoops_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowCollapsedLoops_MetaData), NewProp_bAllowCollapsedLoops_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAddEndCaps = { "bAddEndCaps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAppendSweepPolylineParameters), &UHT_STATICS::NewProp_bAddEndCaps_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddEndCaps_MetaData), NewProp_bAddEndCaps_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFlipEndCaps = { "bFlipEndCaps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAppendSweepPolylineParameters), &UHT_STATICS::NewProp_bFlipEndCaps_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlipEndCaps_MetaData), NewProp_bFlipEndCaps_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bMinEdgeIsPrimary = { "bMinEdgeIsPrimary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAppendSweepPolylineParameters), &UHT_STATICS::NewProp_bMinEdgeIsPrimary_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMinEdgeIsPrimary_MetaData), NewProp_bMinEdgeIsPrimary_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bMaxEdgeIsPrimary = { "bMaxEdgeIsPrimary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FAppendSweepPolylineParameters), &UHT_STATICS::NewProp_bMaxEdgeIsPrimary_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMaxEdgeIsPrimary_MetaData), NewProp_bMaxEdgeIsPrimary_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PolylineModifiers_Inner = { "PolylineModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPolylineModifierSpec, METADATA_PARAMS(0, nullptr) }; // c3f4e321ac82f11d252e06e3e8e6560cf38d9ba9
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PolylineModifiers = { "PolylineModifiers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FAppendSweepPolylineParameters, PolylineModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolylineModifiers_MetaData), NewProp_PolylineModifiers_MetaData) }; // c3f4e321ac82f11d252e06e3e8e6560cf38d9ba9
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PrimitiveOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SweepPathSampleParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SweepPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SweepShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SweepShapePoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SweepShapePoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseSweepShapePoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSweepShapeIsClosedLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SweepShapeSampleParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SweepShapeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CrossSectionSideOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFlipCrossSectionOnSideAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFlipCrossSectionOnVerticalAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bForceWorldUpNoBankFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxAllowedQuadTwistAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAllowCollapsedLoops,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAddEndCaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFlipEndCaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bMinEdgeIsPrimary,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bMaxEdgeIsPrimary,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PolylineModifiers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PolylineModifiers,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAppendSweepPolylineParameters Property Definitions *****************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"AppendSweepPolylineParameters",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAppendSweepPolylineParameters>(),
	alignof(FAppendSweepPolylineParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAppendSweepPolylineParameters;
UScriptStruct* Z_Construct_UScriptStruct_FAppendSweepPolylineParameters(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAppendSweepPolylineParameters.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAppendSweepPolylineParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAppendSweepPolylineParameters, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("AppendSweepPolylineParameters"));
		}
		return Z_Registration_Info_UScriptStruct_FAppendSweepPolylineParameters.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAppendSweepPolylineParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAppendSweepPolylineParameters.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAppendSweepPolylineParameters.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAppendSweepPolylineParameters **************************************

// ********** Begin Class URoadBLDDynamicMeshUtils Function AppendSweepPolylineToDynamicMeshInRanges 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadBLDDynamicMeshUtils_AppendSweepPolylineToDynamicMeshInRanges_Statics
struct UHT_STATICS
{
	struct RoadBLDDynamicMeshUtils_eventAppendSweepPolylineToDynamicMeshInRanges_Parms
	{
		UDynamicMesh* TargetMesh;
		TArray<FVector2D> GenerationRanges;
		TArray<FTransform> Samples;
		TArray<double> SampleDistances;
		FGeometryScriptPrimitiveOptions PrimitiveOptions;
		FTransform PolyLineTransform;
		TArray<FVector2D> ProfilePoints;
		TArray<float> PolyLineTexParamU;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Utils" },
		{ "ModuleRelativePath", "Public/RoadBLDDynamicMeshUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolyLineTexParamU_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AppendSweepPolylineToDynamicMeshInRanges constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GenerationRanges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GenerationRanges;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Samples_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Samples;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SampleDistances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SampleDistances;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimitiveOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolyLineTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProfilePoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProfilePoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PolyLineTexParamU_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PolyLineTexParamU;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AppendSweepPolylineToDynamicMeshInRanges constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AppendSweepPolylineToDynamicMeshInRanges Property Definitions *********
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBLDDynamicMeshUtils_eventAppendSweepPolylineToDynamicMeshInRanges_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GenerationRanges_Inner = { "GenerationRanges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_GenerationRanges = { "GenerationRanges", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBLDDynamicMeshUtils_eventAppendSweepPolylineToDynamicMeshInRanges_Parms, GenerationRanges), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Samples_Inner = { "Samples", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Samples = { "Samples", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBLDDynamicMeshUtils_eventAppendSweepPolylineToDynamicMeshInRanges_Parms, Samples), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_SampleDistances_Inner = { "SampleDistances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SampleDistances = { "SampleDistances", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBLDDynamicMeshUtils_eventAppendSweepPolylineToDynamicMeshInRanges_Parms, SampleDistances), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PrimitiveOptions = { "PrimitiveOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBLDDynamicMeshUtils_eventAppendSweepPolylineToDynamicMeshInRanges_Parms, PrimitiveOptions), Z_Construct_UScriptStruct_FGeometryScriptPrimitiveOptions, METADATA_PARAMS(0, nullptr) }; // 4c6163c1ecc06044461d2fbe3fac94d444485f4c
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PolyLineTransform = { "PolyLineTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBLDDynamicMeshUtils_eventAppendSweepPolylineToDynamicMeshInRanges_Parms, PolyLineTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ProfilePoints_Inner = { "ProfilePoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ProfilePoints = { "ProfilePoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBLDDynamicMeshUtils_eventAppendSweepPolylineToDynamicMeshInRanges_Parms, ProfilePoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PolyLineTexParamU_Inner = { "PolyLineTexParamU", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PolyLineTexParamU = { "PolyLineTexParamU", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBLDDynamicMeshUtils_eventAppendSweepPolylineToDynamicMeshInRanges_Parms, PolyLineTexParamU), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolyLineTexParamU_MetaData), NewProp_PolyLineTexParamU_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GenerationRanges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GenerationRanges,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Samples_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Samples,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SampleDistances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SampleDistances,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PrimitiveOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PolyLineTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProfilePoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProfilePoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PolyLineTexParamU_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PolyLineTexParamU,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AppendSweepPolylineToDynamicMeshInRanges Property Definitions ***********
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadBLDDynamicMeshUtils, nullptr, "AppendSweepPolylineToDynamicMeshInRanges", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadBLDDynamicMeshUtils_eventAppendSweepPolylineToDynamicMeshInRanges_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadBLDDynamicMeshUtils_eventAppendSweepPolylineToDynamicMeshInRanges_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadBLDDynamicMeshUtils_AppendSweepPolylineToDynamicMeshInRanges(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadBLDDynamicMeshUtils::execAppendSweepPolylineToDynamicMeshInRanges)
{
	P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
	P_GET_TARRAY(FVector2D,Z_Param_GenerationRanges);
	P_GET_TARRAY(FTransform,Z_Param_Samples);
	P_GET_TARRAY(double,Z_Param_SampleDistances);
	P_GET_STRUCT(FGeometryScriptPrimitiveOptions,Z_Param_PrimitiveOptions);
	P_GET_STRUCT(FTransform,Z_Param_PolyLineTransform);
	P_GET_TARRAY(FVector2D,Z_Param_ProfilePoints);
	P_GET_TARRAY_REF(float,Z_Param_Out_PolyLineTexParamU);
	P_FINISH;
	P_NATIVE_BEGIN;
	URoadBLDDynamicMeshUtils::AppendSweepPolylineToDynamicMeshInRanges(Z_Param_TargetMesh,Z_Param_GenerationRanges,Z_Param_Samples,Z_Param_SampleDistances,Z_Param_PrimitiveOptions,Z_Param_PolyLineTransform,Z_Param_ProfilePoints,Z_Param_Out_PolyLineTexParamU);
	P_NATIVE_END;
}
// ********** End Class URoadBLDDynamicMeshUtils Function AppendSweepPolylineToDynamicMeshInRanges *

// ********** Begin Class URoadBLDDynamicMeshUtils Function AppendSweepPolylineToDynamicMeshV2 *****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadBLDDynamicMeshUtils_AppendSweepPolylineToDynamicMeshV2_Statics
struct UHT_STATICS
{
	struct RoadBLDDynamicMeshUtils_eventAppendSweepPolylineToDynamicMeshV2_Parms
	{
		UDynamicMesh* TargetMesh;
		FAppendSweepPolylineParameters Parameters;
		UDynamicMesh* OutTargetMesh;
		TArray<FTransform> OutSweptPath;
		FWorldBLDKitElementEdge OutMinEdge;
		FWorldBLDKitElementEdge OutMaxEdge;
		float TextureVScale;
		bool bRotateUVs90Degrees;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Utils" },
		{ "CPP_Default_bRotateUVs90Degrees", "false" },
		{ "CPP_Default_TextureVScale", "200.000000" },
		{ "ModuleRelativePath", "Public/RoadBLDDynamicMeshUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AppendSweepPolylineToDynamicMeshV2 constinit property declarations ****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutTargetMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSweptPath_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutSweptPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutMinEdge;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutMaxEdge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TextureVScale;
	static void NewProp_bRotateUVs90Degrees_SetBit(void* Obj)
	{
		((RoadBLDDynamicMeshUtils_eventAppendSweepPolylineToDynamicMeshV2_Parms*)Obj)->bRotateUVs90Degrees = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateUVs90Degrees;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AppendSweepPolylineToDynamicMeshV2 constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AppendSweepPolylineToDynamicMeshV2 Property Definitions ***************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBLDDynamicMeshUtils_eventAppendSweepPolylineToDynamicMeshV2_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBLDDynamicMeshUtils_eventAppendSweepPolylineToDynamicMeshV2_Parms, Parameters), Z_Construct_UScriptStruct_FAppendSweepPolylineParameters, METADATA_PARAMS(0, nullptr) }; // 095e1dfb6d5d39b8529a6cd510fd984b704b1eb2
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OutTargetMesh = { "OutTargetMesh", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBLDDynamicMeshUtils_eventAppendSweepPolylineToDynamicMeshV2_Parms, OutTargetMesh), Z_Construct_UClass_UDynamicMesh, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutSweptPath_Inner = { "OutSweptPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutSweptPath = { "OutSweptPath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBLDDynamicMeshUtils_eventAppendSweepPolylineToDynamicMeshV2_Parms, OutSweptPath), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutMinEdge = { "OutMinEdge", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBLDDynamicMeshUtils_eventAppendSweepPolylineToDynamicMeshV2_Parms, OutMinEdge), Z_Construct_UScriptStruct_FWorldBLDKitElementEdge, METADATA_PARAMS(0, nullptr) }; // b1f8883034d7f9c21a93812f1c21f4f4628ab313
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutMaxEdge = { "OutMaxEdge", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBLDDynamicMeshUtils_eventAppendSweepPolylineToDynamicMeshV2_Parms, OutMaxEdge), Z_Construct_UScriptStruct_FWorldBLDKitElementEdge, METADATA_PARAMS(0, nullptr) }; // b1f8883034d7f9c21a93812f1c21f4f4628ab313
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TextureVScale = { "TextureVScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBLDDynamicMeshUtils_eventAppendSweepPolylineToDynamicMeshV2_Parms, TextureVScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRotateUVs90Degrees = { "bRotateUVs90Degrees", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadBLDDynamicMeshUtils_eventAppendSweepPolylineToDynamicMeshV2_Parms), &UHT_STATICS::NewProp_bRotateUVs90Degrees_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutTargetMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSweptPath_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSweptPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutMinEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutMaxEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextureVScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRotateUVs90Degrees,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AppendSweepPolylineToDynamicMeshV2 Property Definitions *****************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadBLDDynamicMeshUtils, nullptr, "AppendSweepPolylineToDynamicMeshV2", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadBLDDynamicMeshUtils_eventAppendSweepPolylineToDynamicMeshV2_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadBLDDynamicMeshUtils_eventAppendSweepPolylineToDynamicMeshV2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadBLDDynamicMeshUtils_AppendSweepPolylineToDynamicMeshV2(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadBLDDynamicMeshUtils::execAppendSweepPolylineToDynamicMeshV2)
{
	P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
	P_GET_STRUCT(FAppendSweepPolylineParameters,Z_Param_Parameters);
	P_GET_OBJECT_REF(UDynamicMesh,Z_Param_Out_OutTargetMesh);
	P_GET_TARRAY_REF(FTransform,Z_Param_Out_OutSweptPath);
	P_GET_STRUCT_REF(FWorldBLDKitElementEdge,Z_Param_Out_OutMinEdge);
	P_GET_STRUCT_REF(FWorldBLDKitElementEdge,Z_Param_Out_OutMaxEdge);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TextureVScale);
	P_GET_UBOOL(Z_Param_bRotateUVs90Degrees);
	P_FINISH;
	P_NATIVE_BEGIN;
	URoadBLDDynamicMeshUtils::AppendSweepPolylineToDynamicMeshV2(Z_Param_TargetMesh,Z_Param_Parameters,P_ARG_GC_BARRIER(Z_Param_Out_OutTargetMesh),Z_Param_Out_OutSweptPath,Z_Param_Out_OutMinEdge,Z_Param_Out_OutMaxEdge,Z_Param_TextureVScale,Z_Param_bRotateUVs90Degrees);
	P_NATIVE_END;
}
// ********** End Class URoadBLDDynamicMeshUtils Function AppendSweepPolylineToDynamicMeshV2 *******

// ********** Begin Class URoadBLDDynamicMeshUtils Function CalculateAdaptivePolylineUVs ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadBLDDynamicMeshUtils_CalculateAdaptivePolylineUVs_Statics
struct UHT_STATICS
{
	struct RoadBLDDynamicMeshUtils_eventCalculateAdaptivePolylineUVs_Parms
	{
		TArray<FTransform> SweepPath;
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Utils" },
		{ "ModuleRelativePath", "Public/RoadBLDDynamicMeshUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CalculateAdaptivePolylineUVs constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepPath_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SweepPath;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CalculateAdaptivePolylineUVs constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CalculateAdaptivePolylineUVs Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SweepPath_Inner = { "SweepPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SweepPath = { "SweepPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBLDDynamicMeshUtils_eventCalculateAdaptivePolylineUVs_Parms, SweepPath), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBLDDynamicMeshUtils_eventCalculateAdaptivePolylineUVs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SweepPath_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SweepPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CalculateAdaptivePolylineUVs Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadBLDDynamicMeshUtils, nullptr, "CalculateAdaptivePolylineUVs", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadBLDDynamicMeshUtils_eventCalculateAdaptivePolylineUVs_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadBLDDynamicMeshUtils_eventCalculateAdaptivePolylineUVs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadBLDDynamicMeshUtils_CalculateAdaptivePolylineUVs(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadBLDDynamicMeshUtils::execCalculateAdaptivePolylineUVs)
{
	P_GET_TARRAY(FTransform,Z_Param_SweepPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=URoadBLDDynamicMeshUtils::CalculateAdaptivePolylineUVs(Z_Param_SweepPath);
	P_NATIVE_END;
}
// ********** End Class URoadBLDDynamicMeshUtils Function CalculateAdaptivePolylineUVs *************

// ********** Begin Class URoadBLDDynamicMeshUtils Function CalculateConsistentPolylineUVs *********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadBLDDynamicMeshUtils_CalculateConsistentPolylineUVs_Statics
struct UHT_STATICS
{
	struct RoadBLDDynamicMeshUtils_eventCalculateConsistentPolylineUVs_Parms
	{
		TArray<FTransform> SweepPath;
		float TextureScale;
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Utils" },
		{ "CPP_Default_TextureScale", "200.000000" },
		{ "ModuleRelativePath", "Public/RoadBLDDynamicMeshUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CalculateConsistentPolylineUVs constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepPath_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SweepPath;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TextureScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CalculateConsistentPolylineUVs constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CalculateConsistentPolylineUVs Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SweepPath_Inner = { "SweepPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SweepPath = { "SweepPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBLDDynamicMeshUtils_eventCalculateConsistentPolylineUVs_Parms, SweepPath), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TextureScale = { "TextureScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBLDDynamicMeshUtils_eventCalculateConsistentPolylineUVs_Parms, TextureScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBLDDynamicMeshUtils_eventCalculateConsistentPolylineUVs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SweepPath_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SweepPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextureScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CalculateConsistentPolylineUVs Property Definitions *********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadBLDDynamicMeshUtils, nullptr, "CalculateConsistentPolylineUVs", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadBLDDynamicMeshUtils_eventCalculateConsistentPolylineUVs_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadBLDDynamicMeshUtils_eventCalculateConsistentPolylineUVs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadBLDDynamicMeshUtils_CalculateConsistentPolylineUVs(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadBLDDynamicMeshUtils::execCalculateConsistentPolylineUVs)
{
	P_GET_TARRAY(FTransform,Z_Param_SweepPath);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TextureScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=URoadBLDDynamicMeshUtils::CalculateConsistentPolylineUVs(Z_Param_SweepPath,Z_Param_TextureScale);
	P_NATIVE_END;
}
// ********** End Class URoadBLDDynamicMeshUtils Function CalculateConsistentPolylineUVs ***********

// ********** Begin Class URoadBLDDynamicMeshUtils Function ExtractCurveSamples ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadBLDDynamicMeshUtils_ExtractCurveSamples_Statics
struct UHT_STATICS
{
	struct RoadBLDDynamicMeshUtils_eventExtractCurveSamples_Parms
	{
		UCurveFloat* Curve;
		FExtractCurveParams Params;
		TArray<FVector2D> OutPairs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBuilder|Utils" },
		{ "ModuleRelativePath", "Public/RoadBLDDynamicMeshUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ExtractCurveSamples constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Curve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPairs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPairs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ExtractCurveSamples constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ExtractCurveSamples Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBLDDynamicMeshUtils_eventExtractCurveSamples_Parms, Curve), Z_Construct_UClass_UCurveFloat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBLDDynamicMeshUtils_eventExtractCurveSamples_Parms, Params), Z_Construct_UScriptStruct_FExtractCurveParams, METADATA_PARAMS(0, nullptr) }; // 26fadedb90a23be257576216febb8bd1a397378f
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutPairs_Inner = { "OutPairs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutPairs = { "OutPairs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBLDDynamicMeshUtils_eventExtractCurveSamples_Parms, OutPairs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Curve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Params,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPairs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPairs,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ExtractCurveSamples Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadBLDDynamicMeshUtils, nullptr, "ExtractCurveSamples", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadBLDDynamicMeshUtils_eventExtractCurveSamples_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadBLDDynamicMeshUtils_eventExtractCurveSamples_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadBLDDynamicMeshUtils_ExtractCurveSamples(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadBLDDynamicMeshUtils::execExtractCurveSamples)
{
	P_GET_OBJECT(UCurveFloat,Z_Param_Curve);
	P_GET_STRUCT(FExtractCurveParams,Z_Param_Params);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_OutPairs);
	P_FINISH;
	P_NATIVE_BEGIN;
	URoadBLDDynamicMeshUtils::ExtractCurveSamples(Z_Param_Curve,Z_Param_Params,Z_Param_Out_OutPairs);
	P_NATIVE_END;
}
// ********** End Class URoadBLDDynamicMeshUtils Function ExtractCurveSamples **********************

// ********** Begin Class URoadBLDDynamicMeshUtils Function ReverseSplineDistances *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadBLDDynamicMeshUtils_ReverseSplineDistances_Statics
struct UHT_STATICS
{
	struct RoadBLDDynamicMeshUtils_eventReverseSplineDistances_Parms
	{
		TArray<FVector2D> InputDistances;
		float TotalSplineLength;
		TArray<FVector2D> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Utils" },
		{ "ModuleRelativePath", "Public/RoadBLDDynamicMeshUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputDistances_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReverseSplineDistances constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputDistances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputDistances;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalSplineLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReverseSplineDistances constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReverseSplineDistances Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InputDistances_Inner = { "InputDistances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_InputDistances = { "InputDistances", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBLDDynamicMeshUtils_eventReverseSplineDistances_Parms, InputDistances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputDistances_MetaData), NewProp_InputDistances_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TotalSplineLength = { "TotalSplineLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBLDDynamicMeshUtils_eventReverseSplineDistances_Parms, TotalSplineLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBLDDynamicMeshUtils_eventReverseSplineDistances_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InputDistances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InputDistances,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TotalSplineLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ReverseSplineDistances Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadBLDDynamicMeshUtils, nullptr, "ReverseSplineDistances", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadBLDDynamicMeshUtils_eventReverseSplineDistances_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadBLDDynamicMeshUtils_eventReverseSplineDistances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadBLDDynamicMeshUtils_ReverseSplineDistances(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadBLDDynamicMeshUtils::execReverseSplineDistances)
{
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_InputDistances);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TotalSplineLength);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector2D>*)Z_Param__Result=URoadBLDDynamicMeshUtils::ReverseSplineDistances(Z_Param_Out_InputDistances,Z_Param_TotalSplineLength);
	P_NATIVE_END;
}
// ********** End Class URoadBLDDynamicMeshUtils Function ReverseSplineDistances *******************

// ********** Begin Class URoadBLDDynamicMeshUtils *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoadBLDDynamicMeshUtils_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "RoadBLDDynamicMeshUtils.h" },
		{ "ModuleRelativePath", "Public/RoadBLDDynamicMeshUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URoadBLDDynamicMeshUtils constinit property declarations *****************
// ********** End Class URoadBLDDynamicMeshUtils constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AppendSweepPolylineToDynamicMeshInRanges"), .Pointer = &URoadBLDDynamicMeshUtils::execAppendSweepPolylineToDynamicMeshInRanges },
		{ .NameUTF8 = UTF8TEXT("AppendSweepPolylineToDynamicMeshV2"), .Pointer = &URoadBLDDynamicMeshUtils::execAppendSweepPolylineToDynamicMeshV2 },
		{ .NameUTF8 = UTF8TEXT("CalculateAdaptivePolylineUVs"), .Pointer = &URoadBLDDynamicMeshUtils::execCalculateAdaptivePolylineUVs },
		{ .NameUTF8 = UTF8TEXT("CalculateConsistentPolylineUVs"), .Pointer = &URoadBLDDynamicMeshUtils::execCalculateConsistentPolylineUVs },
		{ .NameUTF8 = UTF8TEXT("ExtractCurveSamples"), .Pointer = &URoadBLDDynamicMeshUtils::execExtractCurveSamples },
		{ .NameUTF8 = UTF8TEXT("ReverseSplineDistances"), .Pointer = &URoadBLDDynamicMeshUtils::execReverseSplineDistances },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URoadBLDDynamicMeshUtils_AppendSweepPolylineToDynamicMeshInRanges, "AppendSweepPolylineToDynamicMeshInRanges" }, // 808ba1fb25fbb04cede92dae956157b1919d4fd2
		{ &Z_Construct_UFunction_URoadBLDDynamicMeshUtils_AppendSweepPolylineToDynamicMeshV2, "AppendSweepPolylineToDynamicMeshV2" }, // 371f256263f7a9c22ab3191501a6087c79e8c8a3
		{ &Z_Construct_UFunction_URoadBLDDynamicMeshUtils_CalculateAdaptivePolylineUVs, "CalculateAdaptivePolylineUVs" }, // a2110c0ad6e190dc8441f41f37f30cf2e23ff89f
		{ &Z_Construct_UFunction_URoadBLDDynamicMeshUtils_CalculateConsistentPolylineUVs, "CalculateConsistentPolylineUVs" }, // 76999c3176bdc9c3b3bc1540e1cd88d56841a922
		{ &Z_Construct_UFunction_URoadBLDDynamicMeshUtils_ExtractCurveSamples, "ExtractCurveSamples" }, // 61a580c718e66be43ee86ff6f6dc4c073d7772ae
		{ &Z_Construct_UFunction_URoadBLDDynamicMeshUtils_ReverseSplineDistances, "ReverseSplineDistances" }, // 2a1c500981fa1c8badc2f8b28768a813161420b0
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadBLDDynamicMeshUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoadBLDDynamicMeshUtils,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void URoadBLDDynamicMeshUtils_StaticRegisterNativesURoadBLDDynamicMeshUtils()
{
	UClass* Class = URoadBLDDynamicMeshUtils::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URoadBLDDynamicMeshUtils;
UClass* Z_Construct_UClass_URoadBLDDynamicMeshUtils(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoadBLDDynamicMeshUtils;
		if (!Z_Registration_Info_UClass_URoadBLDDynamicMeshUtils.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadBLDDynamicMeshUtils"),
				Z_Registration_Info_UClass_URoadBLDDynamicMeshUtils.InnerSingleton,
				URoadBLDDynamicMeshUtils_StaticRegisterNativesURoadBLDDynamicMeshUtils,
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
		return Z_Registration_Info_UClass_URoadBLDDynamicMeshUtils.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoadBLDDynamicMeshUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoadBLDDynamicMeshUtils.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoadBLDDynamicMeshUtils.OuterSingleton;
}
#undef UHT_STATICS
URoadBLDDynamicMeshUtils::URoadBLDDynamicMeshUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoadBLDDynamicMeshUtils);
URoadBLDDynamicMeshUtils::~URoadBLDDynamicMeshUtils() {}
// ********** End Class URoadBLDDynamicMeshUtils ***************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadBLDDynamicMeshUtils_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FAppendSweepPolylineParameters, Z_Construct_UScriptStruct_FAppendSweepPolylineParameters_Statics::NewStructOps, TEXT("AppendSweepPolylineParameters"),&Z_Registration_Info_UScriptStruct_FAppendSweepPolylineParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAppendSweepPolylineParameters), 157163003U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoadBLDDynamicMeshUtils, TEXT("URoadBLDDynamicMeshUtils"), &Z_Registration_Info_UClass_URoadBLDDynamicMeshUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoadBLDDynamicMeshUtils), 603491592U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadBLDDynamicMeshUtils_h__Script_RoadBLDRuntime_1e77ce18c2b8efa65953031ff34af93c6b9f93ed{
	TEXT("/Script/RoadBLDRuntime"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
