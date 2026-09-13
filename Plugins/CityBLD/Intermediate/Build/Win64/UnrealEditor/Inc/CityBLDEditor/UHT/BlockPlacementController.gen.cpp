// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlockPlacementController.h"
#include "IWorldBLDKitElementInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeBlockPlacementController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f(ETypeConstructPhase);
WORLDBLDEDITOR_API UClass* Z_Construct_UClass_UWorldBLDEditController(ETypeConstructPhase);
WORLDBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWorldBLDKitElementEdge(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UDistrict(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBlockPlacementController(ETypeConstructPhase);
CITYBLDEDITOR_API UEnum* Z_Construct_UEnum_CityBLDEditor_EDynamicShapePlacementMode(ETypeConstructPhase);
CITYBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FShapeToolTarget(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBlockPlacementController(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FShapeToolTarget **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FShapeToolTarget_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FShapeToolTarget>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FShapeToolTarget); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bValid_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeZ_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceEdges_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FShapeToolTarget constinit property declarations ******************
	static void NewProp_bValid_SetBit(void* Obj)
	{
		((FShapeToolTarget*)Obj)->bValid = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shape_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Shape;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShapeZ_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ShapeZ;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceEdges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceEdges;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FShapeToolTarget constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShapeToolTarget>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FShapeToolTarget Property Definitions *****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bValid = { "bValid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FShapeToolTarget), &UHT_STATICS::NewProp_bValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bValid_MetaData), NewProp_bValid_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FShapeToolTarget, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Shape_Inner = { "Shape", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FShapeToolTarget, Shape), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shape_MetaData), NewProp_Shape_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ShapeZ_Inner = { "ShapeZ", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ShapeZ = { "ShapeZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FShapeToolTarget, ShapeZ), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeZ_MetaData), NewProp_ShapeZ_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SourceEdges_Inner = { "SourceEdges", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWorldBLDKitElementEdge, METADATA_PARAMS(0, nullptr) }; // b1f8883034d7f9c21a93812f1c21f4f4628ab313
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SourceEdges = { "SourceEdges", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FShapeToolTarget, SourceEdges), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceEdges_MetaData), NewProp_SourceEdges_MetaData) }; // b1f8883034d7f9c21a93812f1c21f4f4628ab313
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Shape_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShapeZ_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShapeZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceEdges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceEdges,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FShapeToolTarget Property Definitions *******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
	nullptr,
	&NewStructOps,
	"ShapeToolTarget",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FShapeToolTarget>(),
	alignof(FShapeToolTarget),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FShapeToolTarget;
UScriptStruct* Z_Construct_UScriptStruct_FShapeToolTarget(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FShapeToolTarget.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FShapeToolTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShapeToolTarget, (UObject*)Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase::Outer), TEXT("ShapeToolTarget"));
		}
		return Z_Registration_Info_UScriptStruct_FShapeToolTarget.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FShapeToolTarget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FShapeToolTarget.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FShapeToolTarget.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FShapeToolTarget ****************************************************

// ********** Begin Enum EDynamicShapePlacementMode ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_CityBLDEditor_EDynamicShapePlacementMode_Statics
template<> CITYBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EDynamicShapePlacementMode>()
{
	return Z_Construct_UEnum_CityBLDEditor_EDynamicShapePlacementMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Automatic.DisplayName", "Automatic" },
		{ "Automatic.Name", "EDynamicShapePlacementMode::Automatic" },
		{ "BlueprintType", "true" },
		{ "Manual.DisplayName", "Manual" },
		{ "Manual.Name", "EDynamicShapePlacementMode::Manual" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDynamicShapePlacementMode::Automatic", (int64)EDynamicShapePlacementMode::Automatic },
		{ "EDynamicShapePlacementMode::Manual", (int64)EDynamicShapePlacementMode::Manual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
	nullptr,
	"EDynamicShapePlacementMode",
	"EDynamicShapePlacementMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EDynamicShapePlacementMode;
UEnum* Z_Construct_UEnum_CityBLDEditor_EDynamicShapePlacementMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EDynamicShapePlacementMode.OuterSingleton)
		{
			ZRIE_EDynamicShapePlacementMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CityBLDEditor_EDynamicShapePlacementMode, (UObject*)Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase::Outer), TEXT("EDynamicShapePlacementMode"));
		}
		return ZRIE_EDynamicShapePlacementMode.OuterSingleton;
	}
	if (!ZRIE_EDynamicShapePlacementMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EDynamicShapePlacementMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EDynamicShapePlacementMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EDynamicShapePlacementMode **************************************************

// ********** Begin Class UBlockPlacementController ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UBlockPlacementController_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BlockPlacementController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_District_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultShapeSize_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushRadius_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjacentEdgesDistance_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxEdgesGap_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTraversalEdges_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "Comment", "// Max number of edges to traverse when attempting to build a loop. Large blocks can easily exceed 64 edges.\n" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
		{ "ToolTip", "Max number of edges to traverse when attempting to build a loop. Large blocks can easily exceed 64 edges." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinEdgesBeforeAllowClosingToBegin_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "Comment", "// Minimum number of collected edges before allowing traversal to \"return to BeginEdge\" (prevents premature local loops).\n" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
		{ "ToolTip", "Minimum number of collected edges before allowing traversal to \"return to BeginEdge\" (prevents premature local loops)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowGapBridgeToCloseLoop_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "Comment", "// If true, allow gap-bridge (MaxEdgesGap) adjacency to count as a loop closure back to the BeginEdge. Usually safer off.\n" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
		{ "ToolTip", "If true, allow gap-bridge (MaxEdgesGap) adjacency to count as a loop closure back to the BeginEdge. Usually safer off." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjacentEdgesMaxZDelta_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "Comment", "// Max allowed Z delta between adjacent endpoints (helps avoid connecting overpasses/ramps to lower roads).\n" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
		{ "ToolTip", "Max allowed Z delta between adjacent endpoints (helps avoid connecting overpasses/ramps to lower roads)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeighbourSearchRadiusMax_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "Comment", "// Limits the overlap search radius for neighbouring edges. Set to 0 to disable clamping.\n" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
		{ "ToolTip", "Limits the overlap search radius for neighbouring edges. Set to 0 to disable clamping." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeighbourSearchRadiusMultiplier_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "Comment", "// Search radius multiplier based on AdjacentEdgesDistance (helps decouple search radius from MaxEdgesGap).\n" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
		{ "ToolTip", "Search radius multiplier based on AdjacentEdgesDistance (helps decouple search radius from MaxEdgesGap)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyUseBorderEdges_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "Comment", "// Only consider edges tagged as borders when tracing loops.\n" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
		{ "ToolTip", "Only consider edges tagged as borders when tracing loops." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreventImmediateBacktrack_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "Comment", "// Prevent immediately stepping back to the previous edge at a junction.\n" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
		{ "ToolTip", "Prevent immediately stepping back to the previous edge at a junction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreventRevisitingEdges_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "Comment", "// Prevent reusing an edge already in the current loop (unless it is the begin edge for closure).\n" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
		{ "ToolTip", "Prevent reusing an edge already in the current loop (unless it is the begin edge for closure)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAngleContinuityScoring_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "Comment", "// Prefer direction-continuity when choosing the next edge (reduces ambiguity at dense junctions).\n" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
		{ "ToolTip", "Prefer direction-continuity when choosing the next edge (reduces ambiguity at dense junctions)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleContinuityWeight_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "Comment", "// Weight of angle continuity relative to distance when choosing the next edge.\n" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
		{ "ToolTip", "Weight of angle continuity relative to distance when choosing the next edge." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JunctionSnapDistance_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "Comment", "// Extra endpoint snapping tolerance to get through imperfect junctions/corners where tangents or endpoints don't match perfectly.\n// This is only used inside neighbour search; keep it well below typical road width to avoid jumping across roads.\n" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
		{ "ToolTip", "Extra endpoint snapping tolerance to get through imperfect junctions/corners where tangents or endpoints don't match perfectly.\nThis is only used inside neighbour search; keep it well below typical road width to avoid jumping across roads." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAngularNextEdgeRule_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "Comment", "// If enabled, pick the \"next\" edge at a junction by angular order around the junction (half-edge style),\n// rather than by straightest continuation. This strongly reduces skipped corners/segments.\n" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
		{ "ToolTip", "If enabled, pick the \"next\" edge at a junction by angular order around the junction (half-edge style),\nrather than by straightest continuation. This strongly reduces skipped corners/segments." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreferCounterClockwiseTraversal_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "Comment", "// When using angular rule, prefer CCW traversal around the enclosed region (toggle if you see the tool choosing the outside face).\n" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
		{ "ToolTip", "When using angular rule, prefer CCW traversal around the enclosed region (toggle if you see the tool choosing the outside face)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyGapBridgeWhenNoCloseCandidate_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "Comment", "// If true, only allow MaxEdgesGap \"bridging\" when there are no true-adjacent candidates.\n" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
		{ "ToolTip", "If true, only allow MaxEdgesGap \"bridging\" when there are no true-adjacent candidates." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVetoGapBridgeIfCrossesOtherEdges_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "Comment", "// If true, veto gap-bridged connections when the bridging segment crosses any other border segment nearby (XY only).\n" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
		{ "ToolTip", "If true, veto gap-bridged connections when the bridging segment crosses any other border segment nearby (XY only)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolySimplifyLineTol_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolySimplifyClusterTol_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothIterations_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClipperMitterLimit_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClipperArcTol_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClipperJoinType_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClipperEndType_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementMode_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOffsetEdgeClipper_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DbgSmoothPolygon_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DbgChaikinSmthRange_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClosedLoop_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DbgDrawMergedEdgesLoop_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DbgRenderCurrentTarget_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DbgDrawTargetEdges_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DbgDrawTargetEdgesPoints_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DbgDrawOBBox_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DbgDrawBisectors_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DbgDrawPolygon_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DbgDrawOffsetPoints_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DbgDrawOffsetPoints2_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DbgDrawCurvePoints2d_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevMousePos_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAuthorized_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlockPlacementController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBlockPlacementController constinit property declarations ****************
	static const UECodeGen_Private::FClassPropertyParams NewProp_District;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultShapeSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjacentEdgesDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxEdgesGap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTraversalEdges;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinEdgesBeforeAllowClosingToBegin;
	static void NewProp_bAllowGapBridgeToCloseLoop_SetBit(void* Obj)
	{
		((UBlockPlacementController*)Obj)->bAllowGapBridgeToCloseLoop = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowGapBridgeToCloseLoop;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjacentEdgesMaxZDelta;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NeighbourSearchRadiusMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NeighbourSearchRadiusMultiplier;
	static void NewProp_bOnlyUseBorderEdges_SetBit(void* Obj)
	{
		((UBlockPlacementController*)Obj)->bOnlyUseBorderEdges = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyUseBorderEdges;
	static void NewProp_bPreventImmediateBacktrack_SetBit(void* Obj)
	{
		((UBlockPlacementController*)Obj)->bPreventImmediateBacktrack = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreventImmediateBacktrack;
	static void NewProp_bPreventRevisitingEdges_SetBit(void* Obj)
	{
		((UBlockPlacementController*)Obj)->bPreventRevisitingEdges = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreventRevisitingEdges;
	static void NewProp_bUseAngleContinuityScoring_SetBit(void* Obj)
	{
		((UBlockPlacementController*)Obj)->bUseAngleContinuityScoring = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAngleContinuityScoring;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleContinuityWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JunctionSnapDistance;
	static void NewProp_bUseAngularNextEdgeRule_SetBit(void* Obj)
	{
		((UBlockPlacementController*)Obj)->bUseAngularNextEdgeRule = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAngularNextEdgeRule;
	static void NewProp_bPreferCounterClockwiseTraversal_SetBit(void* Obj)
	{
		((UBlockPlacementController*)Obj)->bPreferCounterClockwiseTraversal = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreferCounterClockwiseTraversal;
	static void NewProp_bOnlyGapBridgeWhenNoCloseCandidate_SetBit(void* Obj)
	{
		((UBlockPlacementController*)Obj)->bOnlyGapBridgeWhenNoCloseCandidate = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyGapBridgeWhenNoCloseCandidate;
	static void NewProp_bVetoGapBridgeIfCrossesOtherEdges_SetBit(void* Obj)
	{
		((UBlockPlacementController*)Obj)->bVetoGapBridgeIfCrossesOtherEdges = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVetoGapBridgeIfCrossesOtherEdges;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PolySimplifyLineTol;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PolySimplifyClusterTol;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SmoothIterations;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClipperMitterLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClipperArcTol;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClipperJoinType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClipperEndType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlacementMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlacementMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentTarget;
	static void NewProp_bOffsetEdgeClipper_SetBit(void* Obj)
	{
		((UBlockPlacementController*)Obj)->bOffsetEdgeClipper = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOffsetEdgeClipper;
	static void NewProp_DbgSmoothPolygon_SetBit(void* Obj)
	{
		((UBlockPlacementController*)Obj)->DbgSmoothPolygon = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DbgSmoothPolygon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DbgChaikinSmthRange;
	static void NewProp_bClosedLoop_SetBit(void* Obj)
	{
		((UBlockPlacementController*)Obj)->bClosedLoop = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClosedLoop;
	static void NewProp_DbgDrawMergedEdgesLoop_SetBit(void* Obj)
	{
		((UBlockPlacementController*)Obj)->DbgDrawMergedEdgesLoop = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DbgDrawMergedEdgesLoop;
	static void NewProp_DbgRenderCurrentTarget_SetBit(void* Obj)
	{
		((UBlockPlacementController*)Obj)->DbgRenderCurrentTarget = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DbgRenderCurrentTarget;
	static void NewProp_DbgDrawTargetEdges_SetBit(void* Obj)
	{
		((UBlockPlacementController*)Obj)->DbgDrawTargetEdges = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DbgDrawTargetEdges;
	static void NewProp_DbgDrawTargetEdgesPoints_SetBit(void* Obj)
	{
		((UBlockPlacementController*)Obj)->DbgDrawTargetEdgesPoints = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DbgDrawTargetEdgesPoints;
	static void NewProp_DbgDrawOBBox_SetBit(void* Obj)
	{
		((UBlockPlacementController*)Obj)->DbgDrawOBBox = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DbgDrawOBBox;
	static void NewProp_DbgDrawBisectors_SetBit(void* Obj)
	{
		((UBlockPlacementController*)Obj)->DbgDrawBisectors = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DbgDrawBisectors;
	static void NewProp_DbgDrawPolygon_SetBit(void* Obj)
	{
		((UBlockPlacementController*)Obj)->DbgDrawPolygon = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DbgDrawPolygon;
	static void NewProp_DbgDrawOffsetPoints_SetBit(void* Obj)
	{
		((UBlockPlacementController*)Obj)->DbgDrawOffsetPoints = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DbgDrawOffsetPoints;
	static void NewProp_DbgDrawOffsetPoints2_SetBit(void* Obj)
	{
		((UBlockPlacementController*)Obj)->DbgDrawOffsetPoints2 = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DbgDrawOffsetPoints2;
	static void NewProp_DbgDrawCurvePoints2d_SetBit(void* Obj)
	{
		((UBlockPlacementController*)Obj)->DbgDrawCurvePoints2d = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DbgDrawCurvePoints2d;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Brush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrevMousePos;
	static void NewProp_bIsAuthorized_SetBit(void* Obj)
	{
		((UBlockPlacementController*)Obj)->bIsAuthorized = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAuthorized;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBlockPlacementController constinit property declarations ******************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlockPlacementController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UBlockPlacementController Property Definitions ***************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_District = { "District", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockPlacementController, District), Z_Construct_UClass_UClass, Z_Construct_UClass_UDistrict, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_District_MetaData), NewProp_District_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DefaultShapeSize = { "DefaultShapeSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockPlacementController, DefaultShapeSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultShapeSize_MetaData), NewProp_DefaultShapeSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BrushRadius = { "BrushRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockPlacementController, BrushRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushRadius_MetaData), NewProp_BrushRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AdjacentEdgesDistance = { "AdjacentEdgesDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockPlacementController, AdjacentEdgesDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjacentEdgesDistance_MetaData), NewProp_AdjacentEdgesDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaxEdgesGap = { "MaxEdgesGap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockPlacementController, MaxEdgesGap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxEdgesGap_MetaData), NewProp_MaxEdgesGap_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxTraversalEdges = { "MaxTraversalEdges", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockPlacementController, MaxTraversalEdges), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTraversalEdges_MetaData), NewProp_MaxTraversalEdges_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MinEdgesBeforeAllowClosingToBegin = { "MinEdgesBeforeAllowClosingToBegin", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockPlacementController, MinEdgesBeforeAllowClosingToBegin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinEdgesBeforeAllowClosingToBegin_MetaData), NewProp_MinEdgesBeforeAllowClosingToBegin_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAllowGapBridgeToCloseLoop = { "bAllowGapBridgeToCloseLoop", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlockPlacementController), &UHT_STATICS::NewProp_bAllowGapBridgeToCloseLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowGapBridgeToCloseLoop_MetaData), NewProp_bAllowGapBridgeToCloseLoop_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AdjacentEdgesMaxZDelta = { "AdjacentEdgesMaxZDelta", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockPlacementController, AdjacentEdgesMaxZDelta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjacentEdgesMaxZDelta_MetaData), NewProp_AdjacentEdgesMaxZDelta_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_NeighbourSearchRadiusMax = { "NeighbourSearchRadiusMax", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockPlacementController, NeighbourSearchRadiusMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeighbourSearchRadiusMax_MetaData), NewProp_NeighbourSearchRadiusMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_NeighbourSearchRadiusMultiplier = { "NeighbourSearchRadiusMultiplier", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockPlacementController, NeighbourSearchRadiusMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeighbourSearchRadiusMultiplier_MetaData), NewProp_NeighbourSearchRadiusMultiplier_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bOnlyUseBorderEdges = { "bOnlyUseBorderEdges", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlockPlacementController), &UHT_STATICS::NewProp_bOnlyUseBorderEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyUseBorderEdges_MetaData), NewProp_bOnlyUseBorderEdges_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPreventImmediateBacktrack = { "bPreventImmediateBacktrack", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlockPlacementController), &UHT_STATICS::NewProp_bPreventImmediateBacktrack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreventImmediateBacktrack_MetaData), NewProp_bPreventImmediateBacktrack_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPreventRevisitingEdges = { "bPreventRevisitingEdges", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlockPlacementController), &UHT_STATICS::NewProp_bPreventRevisitingEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreventRevisitingEdges_MetaData), NewProp_bPreventRevisitingEdges_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseAngleContinuityScoring = { "bUseAngleContinuityScoring", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlockPlacementController), &UHT_STATICS::NewProp_bUseAngleContinuityScoring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAngleContinuityScoring_MetaData), NewProp_bUseAngleContinuityScoring_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AngleContinuityWeight = { "AngleContinuityWeight", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockPlacementController, AngleContinuityWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleContinuityWeight_MetaData), NewProp_AngleContinuityWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_JunctionSnapDistance = { "JunctionSnapDistance", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockPlacementController, JunctionSnapDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JunctionSnapDistance_MetaData), NewProp_JunctionSnapDistance_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseAngularNextEdgeRule = { "bUseAngularNextEdgeRule", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlockPlacementController), &UHT_STATICS::NewProp_bUseAngularNextEdgeRule_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAngularNextEdgeRule_MetaData), NewProp_bUseAngularNextEdgeRule_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPreferCounterClockwiseTraversal = { "bPreferCounterClockwiseTraversal", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlockPlacementController), &UHT_STATICS::NewProp_bPreferCounterClockwiseTraversal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreferCounterClockwiseTraversal_MetaData), NewProp_bPreferCounterClockwiseTraversal_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bOnlyGapBridgeWhenNoCloseCandidate = { "bOnlyGapBridgeWhenNoCloseCandidate", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlockPlacementController), &UHT_STATICS::NewProp_bOnlyGapBridgeWhenNoCloseCandidate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyGapBridgeWhenNoCloseCandidate_MetaData), NewProp_bOnlyGapBridgeWhenNoCloseCandidate_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bVetoGapBridgeIfCrossesOtherEdges = { "bVetoGapBridgeIfCrossesOtherEdges", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlockPlacementController), &UHT_STATICS::NewProp_bVetoGapBridgeIfCrossesOtherEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVetoGapBridgeIfCrossesOtherEdges_MetaData), NewProp_bVetoGapBridgeIfCrossesOtherEdges_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PolySimplifyLineTol = { "PolySimplifyLineTol", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockPlacementController, PolySimplifyLineTol), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolySimplifyLineTol_MetaData), NewProp_PolySimplifyLineTol_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PolySimplifyClusterTol = { "PolySimplifyClusterTol", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockPlacementController, PolySimplifyClusterTol), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolySimplifyClusterTol_MetaData), NewProp_PolySimplifyClusterTol_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SmoothIterations = { "SmoothIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockPlacementController, SmoothIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothIterations_MetaData), NewProp_SmoothIterations_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ClipperMitterLimit = { "ClipperMitterLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockPlacementController, ClipperMitterLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClipperMitterLimit_MetaData), NewProp_ClipperMitterLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ClipperArcTol = { "ClipperArcTol", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockPlacementController, ClipperArcTol), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClipperArcTol_MetaData), NewProp_ClipperArcTol_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ClipperJoinType = { "ClipperJoinType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockPlacementController, ClipperJoinType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClipperJoinType_MetaData), NewProp_ClipperJoinType_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ClipperEndType = { "ClipperEndType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockPlacementController, ClipperEndType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClipperEndType_MetaData), NewProp_ClipperEndType_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_PlacementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_PlacementMode = { "PlacementMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockPlacementController, PlacementMode), Z_Construct_UEnum_CityBLDEditor_EDynamicShapePlacementMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementMode_MetaData), NewProp_PlacementMode_MetaData) }; // 29df28534469e8f00b144644db1f69e47f4a8377
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockPlacementController, CurrentTarget), Z_Construct_UScriptStruct_FShapeToolTarget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTarget_MetaData), NewProp_CurrentTarget_MetaData) }; // a5dec17aa130d09c03f7086829d55c8dac299bb4
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bOffsetEdgeClipper = { "bOffsetEdgeClipper", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlockPlacementController), &UHT_STATICS::NewProp_bOffsetEdgeClipper_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOffsetEdgeClipper_MetaData), NewProp_bOffsetEdgeClipper_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_DbgSmoothPolygon = { "DbgSmoothPolygon", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlockPlacementController), &UHT_STATICS::NewProp_DbgSmoothPolygon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DbgSmoothPolygon_MetaData), NewProp_DbgSmoothPolygon_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DbgChaikinSmthRange = { "DbgChaikinSmthRange", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockPlacementController, DbgChaikinSmthRange), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DbgChaikinSmthRange_MetaData), NewProp_DbgChaikinSmthRange_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bClosedLoop = { "bClosedLoop", nullptr, (EPropertyFlags)0x0010040000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlockPlacementController), &UHT_STATICS::NewProp_bClosedLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClosedLoop_MetaData), NewProp_bClosedLoop_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_DbgDrawMergedEdgesLoop = { "DbgDrawMergedEdgesLoop", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlockPlacementController), &UHT_STATICS::NewProp_DbgDrawMergedEdgesLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DbgDrawMergedEdgesLoop_MetaData), NewProp_DbgDrawMergedEdgesLoop_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_DbgRenderCurrentTarget = { "DbgRenderCurrentTarget", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlockPlacementController), &UHT_STATICS::NewProp_DbgRenderCurrentTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DbgRenderCurrentTarget_MetaData), NewProp_DbgRenderCurrentTarget_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_DbgDrawTargetEdges = { "DbgDrawTargetEdges", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlockPlacementController), &UHT_STATICS::NewProp_DbgDrawTargetEdges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DbgDrawTargetEdges_MetaData), NewProp_DbgDrawTargetEdges_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_DbgDrawTargetEdgesPoints = { "DbgDrawTargetEdgesPoints", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlockPlacementController), &UHT_STATICS::NewProp_DbgDrawTargetEdgesPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DbgDrawTargetEdgesPoints_MetaData), NewProp_DbgDrawTargetEdgesPoints_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_DbgDrawOBBox = { "DbgDrawOBBox", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlockPlacementController), &UHT_STATICS::NewProp_DbgDrawOBBox_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DbgDrawOBBox_MetaData), NewProp_DbgDrawOBBox_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_DbgDrawBisectors = { "DbgDrawBisectors", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlockPlacementController), &UHT_STATICS::NewProp_DbgDrawBisectors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DbgDrawBisectors_MetaData), NewProp_DbgDrawBisectors_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_DbgDrawPolygon = { "DbgDrawPolygon", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlockPlacementController), &UHT_STATICS::NewProp_DbgDrawPolygon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DbgDrawPolygon_MetaData), NewProp_DbgDrawPolygon_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_DbgDrawOffsetPoints = { "DbgDrawOffsetPoints", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlockPlacementController), &UHT_STATICS::NewProp_DbgDrawOffsetPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DbgDrawOffsetPoints_MetaData), NewProp_DbgDrawOffsetPoints_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_DbgDrawOffsetPoints2 = { "DbgDrawOffsetPoints2", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlockPlacementController), &UHT_STATICS::NewProp_DbgDrawOffsetPoints2_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DbgDrawOffsetPoints2_MetaData), NewProp_DbgDrawOffsetPoints2_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_DbgDrawCurvePoints2d = { "DbgDrawCurvePoints2d", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlockPlacementController), &UHT_STATICS::NewProp_DbgDrawCurvePoints2d_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DbgDrawCurvePoints2d_MetaData), NewProp_DbgDrawCurvePoints2d_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockPlacementController, Brush), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brush_MetaData), NewProp_Brush_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PrevMousePos = { "PrevMousePos", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockPlacementController, PrevMousePos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevMousePos_MetaData), NewProp_PrevMousePos_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsAuthorized = { "bIsAuthorized", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UBlockPlacementController), &UHT_STATICS::NewProp_bIsAuthorized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAuthorized_MetaData), NewProp_bIsAuthorized_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_District,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultShapeSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BrushRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdjacentEdgesDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxEdgesGap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxTraversalEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinEdgesBeforeAllowClosingToBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAllowGapBridgeToCloseLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdjacentEdgesMaxZDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NeighbourSearchRadiusMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NeighbourSearchRadiusMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bOnlyUseBorderEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPreventImmediateBacktrack,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPreventRevisitingEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseAngleContinuityScoring,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AngleContinuityWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_JunctionSnapDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseAngularNextEdgeRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPreferCounterClockwiseTraversal,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bOnlyGapBridgeWhenNoCloseCandidate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bVetoGapBridgeIfCrossesOtherEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PolySimplifyLineTol,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PolySimplifyClusterTol,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SmoothIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClipperMitterLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClipperArcTol,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClipperJoinType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClipperEndType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlacementMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlacementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bOffsetEdgeClipper,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DbgSmoothPolygon,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DbgChaikinSmthRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bClosedLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DbgDrawMergedEdgesLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DbgRenderCurrentTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DbgDrawTargetEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DbgDrawTargetEdgesPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DbgDrawOBBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DbgDrawBisectors,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DbgDrawPolygon,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DbgDrawOffsetPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DbgDrawOffsetPoints2,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DbgDrawCurvePoints2d,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Brush,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PrevMousePos,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsAuthorized,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UBlockPlacementController Property Definitions *****************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldBLDEditController,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UBlockPlacementController,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UBlockPlacementController;
UClass* Z_Construct_UClass_UBlockPlacementController(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UBlockPlacementController;
		if (!Z_Registration_Info_UClass_UBlockPlacementController.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("BlockPlacementController"),
				Z_Registration_Info_UClass_UBlockPlacementController.InnerSingleton,
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
		return Z_Registration_Info_UClass_UBlockPlacementController.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UBlockPlacementController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlockPlacementController.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlockPlacementController.OuterSingleton;
}
#undef UHT_STATICS
UBlockPlacementController::UBlockPlacementController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBlockPlacementController);
UBlockPlacementController::~UBlockPlacementController() {}
// ********** End Class UBlockPlacementController **************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BlockPlacementController_h__Script_CityBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_CityBLDEditor_EDynamicShapePlacementMode, TEXT("EDynamicShapePlacementMode"), &ZRIE_EDynamicShapePlacementMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 702490707U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FShapeToolTarget, Z_Construct_UScriptStruct_FShapeToolTarget_Statics::NewStructOps, TEXT("ShapeToolTarget"),&Z_Registration_Info_UScriptStruct_FShapeToolTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShapeToolTarget), 2782839162U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlockPlacementController, TEXT("UBlockPlacementController"), &Z_Registration_Info_UClass_UBlockPlacementController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlockPlacementController), 1265518769U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BlockPlacementController_h__Script_CityBLDEditor_f40fc7b2866e2b20b7eeb6f6802ad9bd47759d0e{
	TEXT("/Script/CityBLDEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
