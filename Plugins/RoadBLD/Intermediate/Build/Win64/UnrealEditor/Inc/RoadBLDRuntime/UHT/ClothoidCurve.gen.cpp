// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicRoad/ClothoidCurve.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeClothoidCurve() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FClothoidPolyline(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UCornerCurve(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCurveIntersectionResult(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UCurveObject(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCurveSection(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UCurveUtils(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FOffsetPoint(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPolylinePoint(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadNetworkCorner(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UCornerCurve(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UCurveObject(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UCurveUtils(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UEdgeCurve(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FOffsetPoint ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FOffsetPoint_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FOffsetPoint>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOffsetPoint); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "RoadBLD|Width" },
		{ "Comment", "//The distance along the road this width point sits at\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "The distance along the road this width point sits at" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "RoadBLD|Width" },
		{ "Comment", "//The amount of width offset, positive or negative, from the base width\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "The amount of width offset, positive or negative, from the base width" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOffsetPoint constinit property declarations **********************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOffsetPoint constinit property declarations ************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOffsetPoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FOffsetPoint Property Definitions *********************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FOffsetPoint, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FOffsetPoint, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FOffsetPoint Property Definitions ***********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"OffsetPoint",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FOffsetPoint>(),
	alignof(FOffsetPoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOffsetPoint;
UScriptStruct* Z_Construct_UScriptStruct_FOffsetPoint(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FOffsetPoint.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FOffsetPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOffsetPoint, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("OffsetPoint"));
		}
		return Z_Registration_Info_UScriptStruct_FOffsetPoint.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FOffsetPoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOffsetPoint.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOffsetPoint.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FOffsetPoint ********************************************************

// ********** Begin ScriptStruct FRoadNetworkCorner ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRoadNetworkCorner_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRoadNetworkCorner>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRoadNetworkCorner); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FRoadNetworkCorner - Contains information about edge intersections found when rebuilding the road network.\n * This struct stores data about where road edges intersect, including the intersection point,\n * the edges involved, and distance information along each edge.\n */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "FRoadNetworkCorner - Contains information about edge intersections found when rebuilding the road network.\nThis struct stores data about where road edges intersect, including the intersection point,\nthe edges involved, and distance information along each edge." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CornerID_MetaData[] = {
		{ "Comment", "/**\n\x09 * Stable identifier used by the rebuild refactor to preserve user edits (e.g., corner radius)\n\x09 * across incremental rebuilds. Optional for migration: older saves will have an invalid GUID.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "Stable identifier used by the rebuild refactor to preserve user edits (e.g., corner radius)\nacross incremental rebuilds. Optional for migration: older saves will have an invalid GUID." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartDistance_MetaData[] = {
		{ "Category", "Road Network Corner" },
		{ "Comment", "/** Distance along the start edge where the intersection occurs */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "Distance along the start edge where the intersection occurs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndDistance_MetaData[] = {
		{ "Category", "Road Network Corner" },
		{ "Comment", "/** Distance along the end edge where the intersection occurs */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "Distance along the end edge where the intersection occurs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[] = {
		{ "Category", "Road Network Corner" },
		{ "Comment", "/** Distance from the intersection point that the start point is placed */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "Distance from the intersection point that the start point is placed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndOffset_MetaData[] = {
		{ "Category", "Road Network Corner" },
		{ "Comment", "/** Distance from the intersection point that the end point is placed */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "Distance from the intersection point that the end point is placed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartEdge_MetaData[] = {
		{ "Category", "Road Network Corner" },
		{ "Comment", "/** The edge curve where the intersection starts. If this is a corner between a cut and an edge, this is the reference to that edge */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "The edge curve where the intersection starts. If this is a corner between a cut and an edge, this is the reference to that edge" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndEdge_MetaData[] = {
		{ "Category", "Road Network Corner" },
		{ "Comment", "/** The edge curve where the intersection ends */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "The edge curve where the intersection ends" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionPoint_MetaData[] = {
		{ "Category", "Road Network Corner" },
		{ "Comment", "/** The 3D world position where the edges intersect */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "The 3D world position where the edges intersect" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionA_MetaData[] = {
		{ "Category", "Road Network Corner" },
		{ "Comment", "/** Direction of the intersection on Road A (1 for forward, -1 for backward) */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "Direction of the intersection on Road A (1 for forward, -1 for backward)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionB_MetaData[] = {
		{ "Category", "Road Network Corner" },
		{ "Comment", "/** Direction of the intersection on Road B (1 for forward, -1 for backward) */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "Direction of the intersection on Road B (1 for forward, -1 for backward)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CornerCurve_MetaData[] = {
		{ "Category", "Road Network Corner" },
		{ "Comment", "//The actual curve object connecting between the start, midpoint, and end point. This will be invalid if the corner doesn't have a curve(it's a corner between a cut and an edge).\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "The actual curve object connecting between the start, midpoint, and end point. This will be invalid if the corner doesn't have a curve(it's a corner between a cut and an edge)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CornerRadius_MetaData[] = {
		{ "Category", "Road Network Corner" },
		{ "Comment", "//The radius of this corner.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "The radius of this corner." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStale_MetaData[] = {
		{ "Category", "Road Network Corner" },
		{ "Comment", "/** Whether this corner has become stale and needs renewal or removal */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "Whether this corner has become stale and needs renewal or removal" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRoadNetworkCorner constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CornerID;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StartDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EndDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StartOffset;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EndOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartEdge;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndEdge;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IntersectionPoint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DirectionA;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DirectionB;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CornerCurve;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CornerRadius;
	static void NewProp_bStale_SetBit(void* Obj)
	{
		((FRoadNetworkCorner*)Obj)->bStale = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRoadNetworkCorner constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadNetworkCorner>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRoadNetworkCorner Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CornerID = { "CornerID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadNetworkCorner, CornerID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CornerID_MetaData), NewProp_CornerID_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_StartDistance = { "StartDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadNetworkCorner, StartDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartDistance_MetaData), NewProp_StartDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_EndDistance = { "EndDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadNetworkCorner, EndDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndDistance_MetaData), NewProp_EndDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadNetworkCorner, StartOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartOffset_MetaData), NewProp_StartOffset_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_EndOffset = { "EndOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadNetworkCorner, EndOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndOffset_MetaData), NewProp_EndOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StartEdge = { "StartEdge", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadNetworkCorner, StartEdge), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartEdge_MetaData), NewProp_StartEdge_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_EndEdge = { "EndEdge", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadNetworkCorner, EndEdge), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndEdge_MetaData), NewProp_EndEdge_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_IntersectionPoint = { "IntersectionPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadNetworkCorner, IntersectionPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionPoint_MetaData), NewProp_IntersectionPoint_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_DirectionA = { "DirectionA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadNetworkCorner, DirectionA), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionA_MetaData), NewProp_DirectionA_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_DirectionB = { "DirectionB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadNetworkCorner, DirectionB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionB_MetaData), NewProp_DirectionB_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CornerCurve = { "CornerCurve", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadNetworkCorner, CornerCurve), Z_Construct_UClass_UCornerCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CornerCurve_MetaData), NewProp_CornerCurve_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_CornerRadius = { "CornerRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadNetworkCorner, CornerRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CornerRadius_MetaData), NewProp_CornerRadius_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bStale = { "bStale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadNetworkCorner), &UHT_STATICS::NewProp_bStale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStale_MetaData), NewProp_bStale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CornerID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IntersectionPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DirectionA,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DirectionB,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CornerCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CornerRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bStale,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRoadNetworkCorner Property Definitions *****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"RoadNetworkCorner",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRoadNetworkCorner>(),
	alignof(FRoadNetworkCorner),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRoadNetworkCorner;
UScriptStruct* Z_Construct_UScriptStruct_FRoadNetworkCorner(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRoadNetworkCorner.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRoadNetworkCorner.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadNetworkCorner, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("RoadNetworkCorner"));
		}
		return Z_Registration_Info_UScriptStruct_FRoadNetworkCorner.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRoadNetworkCorner.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRoadNetworkCorner.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRoadNetworkCorner.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRoadNetworkCorner **************************************************

// ********** Begin ScriptStruct FPolylinePoint ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FPolylinePoint_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FPolylinePoint>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPolylinePoint); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pos_MetaData[] = {
		{ "Category", "Point" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radian_MetaData[] = {
		{ "Category", "Point" },
		{ "Comment", "//Radian is needed for connectivity after offset\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "Radian is needed for connectivity after offset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dist_MetaData[] = {
		{ "Category", "Point" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPolylinePoint constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pos;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Radian;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Dist;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPolylinePoint constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPolylinePoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FPolylinePoint Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FPolylinePoint, Pos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pos_MetaData), NewProp_Pos_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Radian = { "Radian", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FPolylinePoint, Radian), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radian_MetaData), NewProp_Radian_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Dist = { "Dist", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FPolylinePoint, Dist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dist_MetaData), NewProp_Dist_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Pos,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Radian,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Dist,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FPolylinePoint Property Definitions *********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"PolylinePoint",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FPolylinePoint>(),
	alignof(FPolylinePoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPolylinePoint;
UScriptStruct* Z_Construct_UScriptStruct_FPolylinePoint(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FPolylinePoint.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FPolylinePoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPolylinePoint, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("PolylinePoint"));
		}
		return Z_Registration_Info_UScriptStruct_FPolylinePoint.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FPolylinePoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPolylinePoint.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPolylinePoint.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FPolylinePoint ******************************************************

// ********** Begin ScriptStruct FCurveSection *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FCurveSection_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FCurveSection>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCurveSection); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "//To mathematically calculate the position along the curve, we need to split it up into sections. These sections can be either straight sections or circular arcs. The CurveSection struct tracks the various sections along a given curve.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "To mathematically calculate the position along the curve, we need to split it up into sections. These sections can be either straight sections or circular arcs. The CurveSection struct tracks the various sections along a given curve." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartRadian_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartCurvature_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndCurvature_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCurveSection constinit property declarations *********************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StartDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SectionLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StartRadian;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StartCurvature;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EndCurvature;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCurveSection constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveSection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FCurveSection Property Definitions ********************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_StartDistance = { "StartDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveSection, StartDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartDistance_MetaData), NewProp_StartDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_SectionLength = { "SectionLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveSection, SectionLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionLength_MetaData), NewProp_SectionLength_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveSection, StartPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPosition_MetaData), NewProp_StartPosition_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_StartRadian = { "StartRadian", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveSection, StartRadian), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartRadian_MetaData), NewProp_StartRadian_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_StartCurvature = { "StartCurvature", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveSection, StartCurvature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartCurvature_MetaData), NewProp_StartCurvature_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_EndCurvature = { "EndCurvature", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveSection, EndCurvature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndCurvature_MetaData), NewProp_EndCurvature_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SectionLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartRadian,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartCurvature,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndCurvature,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FCurveSection Property Definitions **********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"CurveSection",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FCurveSection>(),
	alignof(FCurveSection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCurveSection;
UScriptStruct* Z_Construct_UScriptStruct_FCurveSection(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FCurveSection.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FCurveSection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveSection, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("CurveSection"));
		}
		return Z_Registration_Info_UScriptStruct_FCurveSection.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FCurveSection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCurveSection.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCurveSection.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FCurveSection *******************************************************

// ********** Begin ScriptStruct FCurveIntersectionResult ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FCurveIntersectionResult_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FCurveIntersectionResult>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCurveIntersectionResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//This struct stores data about each intersection found along a curve object\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "This struct stores data about each intersection found along a curve object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceA_MetaData[] = {
		{ "Category", "RoadBLD|Intersections" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceB_MetaData[] = {
		{ "Category", "RoadBLD|Intersections" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionPoint_MetaData[] = {
		{ "Category", "RoadBLD|Intersections" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SrcNodeIndex_MetaData[] = {
		{ "Category", "RoadBLD|Intersections" },
		{ "Comment", "//Optional - the index of the node at Road A, Distance A\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "Optional - the index of the node at Road A, Distance A" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DstNodeIndex_MetaData[] = {
		{ "Category", "RoadBLD|Intersections" },
		{ "Comment", "//Optional - the index of the node at Road B, Distance B\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "Optional - the index of the node at Road B, Distance B" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCurveIntersectionResult constinit property declarations **********
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DistanceA;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DistanceB;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IntersectionPoint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SrcNodeIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DstNodeIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCurveIntersectionResult constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveIntersectionResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FCurveIntersectionResult Property Definitions *********************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_DistanceA = { "DistanceA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveIntersectionResult, DistanceA), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceA_MetaData), NewProp_DistanceA_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_DistanceB = { "DistanceB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveIntersectionResult, DistanceB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceB_MetaData), NewProp_DistanceB_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_IntersectionPoint = { "IntersectionPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveIntersectionResult, IntersectionPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionPoint_MetaData), NewProp_IntersectionPoint_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SrcNodeIndex = { "SrcNodeIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveIntersectionResult, SrcNodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SrcNodeIndex_MetaData), NewProp_SrcNodeIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_DstNodeIndex = { "DstNodeIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveIntersectionResult, DstNodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DstNodeIndex_MetaData), NewProp_DstNodeIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DistanceA,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DistanceB,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IntersectionPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SrcNodeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DstNodeIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FCurveIntersectionResult Property Definitions ***********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"CurveIntersectionResult",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FCurveIntersectionResult>(),
	alignof(FCurveIntersectionResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCurveIntersectionResult;
UScriptStruct* Z_Construct_UScriptStruct_FCurveIntersectionResult(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FCurveIntersectionResult.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FCurveIntersectionResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveIntersectionResult, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("CurveIntersectionResult"));
		}
		return Z_Registration_Info_UScriptStruct_FCurveIntersectionResult.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FCurveIntersectionResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCurveIntersectionResult.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCurveIntersectionResult.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FCurveIntersectionResult ********************************************

// ********** Begin ScriptStruct FClothoidPolyline *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FClothoidPolyline_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FClothoidPolyline>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FClothoidPolyline); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FClothoidPolyline constinit property declarations *****************
// ********** End ScriptStruct FClothoidPolyline constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothoidPolyline>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"ClothoidPolyline",
	nullptr,
	0,
	DataSizeOf<FClothoidPolyline>(),
	alignof(FClothoidPolyline),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FClothoidPolyline;
UScriptStruct* Z_Construct_UScriptStruct_FClothoidPolyline(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FClothoidPolyline.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FClothoidPolyline.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothoidPolyline, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("ClothoidPolyline"));
		}
		return Z_Registration_Info_UScriptStruct_FClothoidPolyline.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FClothoidPolyline.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FClothoidPolyline.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FClothoidPolyline.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FClothoidPolyline ***************************************************

// ********** Begin Class UCurveObject Function CalculateCurveSections *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCurveObject_CalculateCurveSections_Statics
struct UHT_STATICS
{
	struct CurveObject_eventCalculateCurveSections_Parms
	{
		TArray<FVector> ControlPoints;
		double Radius;
		double CurvatureBlend;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Curve" },
		{ "Comment", "/**\n\x09 * Calculates curve sections from an array of control points using clothoid mathematics.\n\x09 * This function implements the same logic as ADynamicRoad::CalculateRefLine() but works\n\x09 * directly with FVector points and a radius parameter.\n\x09 * @param ControlPoints - Array of 3D control points defining the curve path\n\x09 * @param Radius - Maximum radius for curve transitions (used as fallback when not specified per point)\n\x09 * @param CurvatureBlend - Blend factor between spiral and arc portions (0.0 = all spiral, 1.0 = all arc)\n\x09 */" },
		{ "CPP_Default_CurvatureBlend", "0.500000" },
		{ "CPP_Default_Radius", "500.000000" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "Calculates curve sections from an array of control points using clothoid mathematics.\nThis function implements the same logic as ADynamicRoad::CalculateRefLine() but works\ndirectly with FVector points and a radius parameter.\n@param ControlPoints - Array of 3D control points defining the curve path\n@param Radius - Maximum radius for curve transitions (used as fallback when not specified per point)\n@param CurvatureBlend - Blend factor between spiral and arc portions (0.0 = all spiral, 1.0 = all arc)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CalculateCurveSections constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ControlPoints;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Radius;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CurvatureBlend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CalculateCurveSections constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CalculateCurveSections Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ControlPoints_Inner = { "ControlPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ControlPoints = { "ControlPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventCalculateCurveSections_Parms, ControlPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlPoints_MetaData), NewProp_ControlPoints_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventCalculateCurveSections_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_CurvatureBlend = { "CurvatureBlend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventCalculateCurveSections_Parms, CurvatureBlend), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControlPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControlPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurvatureBlend,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CalculateCurveSections Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCurveObject, nullptr, "CalculateCurveSections", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CurveObject_eventCalculateCurveSections_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CurveObject_eventCalculateCurveSections_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurveObject_CalculateCurveSections(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCurveObject::execCalculateCurveSections)
{
	P_GET_TARRAY_REF(FVector,Z_Param_Out_ControlPoints);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Radius);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_CurvatureBlend);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateCurveSections(Z_Param_Out_ControlPoints,Z_Param_Radius,Z_Param_CurvatureBlend);
	P_NATIVE_END;
}
// ********** End Class UCurveObject Function CalculateCurveSections *******************************

// ********** Begin Class UCurveObject Function CalculateStandalonePolyline ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCurveObject_CalculateStandalonePolyline_Statics
struct UHT_STATICS
{
	struct CurveObject_eventCalculateStandalonePolyline_Parms
	{
		double StartDistance;
		double EndDistance;
		double SamplingResolution;
		bool bUseAdaptiveDensity;
		FClothoidPolyline ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Curve" },
		{ "Comment", "// Form a polyline from sections only (no offset/elevation, for use with standalone curves that have no parent road)\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "Form a polyline from sections only (no offset/elevation, for use with standalone curves that have no parent road)" },
	};
#endif // WITH_METADATA

// ********** Begin Function CalculateStandalonePolyline constinit property declarations ***********
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StartDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EndDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SamplingResolution;
	static void NewProp_bUseAdaptiveDensity_SetBit(void* Obj)
	{
		((CurveObject_eventCalculateStandalonePolyline_Parms*)Obj)->bUseAdaptiveDensity = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAdaptiveDensity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CalculateStandalonePolyline constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CalculateStandalonePolyline Property Definitions **********************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_StartDistance = { "StartDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventCalculateStandalonePolyline_Parms, StartDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_EndDistance = { "EndDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventCalculateStandalonePolyline_Parms, EndDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_SamplingResolution = { "SamplingResolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventCalculateStandalonePolyline_Parms, SamplingResolution), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseAdaptiveDensity = { "bUseAdaptiveDensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(CurveObject_eventCalculateStandalonePolyline_Parms), &UHT_STATICS::NewProp_bUseAdaptiveDensity_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventCalculateStandalonePolyline_Parms, ReturnValue), Z_Construct_UScriptStruct_FClothoidPolyline, METADATA_PARAMS(0, nullptr) }; // 5aeccf9eee0ff7f72f9951f91430c19f1807a43b
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SamplingResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseAdaptiveDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CalculateStandalonePolyline Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCurveObject, nullptr, "CalculateStandalonePolyline", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CurveObject_eventCalculateStandalonePolyline_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CurveObject_eventCalculateStandalonePolyline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurveObject_CalculateStandalonePolyline(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCurveObject::execCalculateStandalonePolyline)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_StartDistance);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_EndDistance);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_SamplingResolution);
	P_GET_UBOOL(Z_Param_bUseAdaptiveDensity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FClothoidPolyline*)Z_Param__Result=P_THIS->CalculateStandalonePolyline(Z_Param_StartDistance,Z_Param_EndDistance,Z_Param_SamplingResolution,Z_Param_bUseAdaptiveDensity);
	P_NATIVE_END;
}
// ********** End Class UCurveObject Function CalculateStandalonePolyline **************************

// ********** Begin Class UCurveObject Function CreateCurveFromPoints ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCurveObject_CreateCurveFromPoints_Statics
struct UHT_STATICS
{
	struct CurveObject_eventCreateCurveFromPoints_Parms
	{
		TArray<FVector> ControlPoints;
		double Radius;
		double CurvatureBlend;
		UCurveObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Curve" },
		{ "Comment", "/**\n\x09 * Creates a new UCurveObject with curve sections calculated from control points.\n\x09 * This is a static helper function for easy curve creation.\n\x09 * @param ControlPoints - Array of 3D control points defining the curve path\n\x09 * @param Radius - Maximum radius for curve transitions\n\x09 * @param CurvatureBlend - Blend factor between spiral and arc portions\n\x09 * @return New UCurveObject with calculated curve sections\n\x09 */" },
		{ "CPP_Default_CurvatureBlend", "0.500000" },
		{ "CPP_Default_Radius", "500.000000" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "Creates a new UCurveObject with curve sections calculated from control points.\nThis is a static helper function for easy curve creation.\n@param ControlPoints - Array of 3D control points defining the curve path\n@param Radius - Maximum radius for curve transitions\n@param CurvatureBlend - Blend factor between spiral and arc portions\n@return New UCurveObject with calculated curve sections" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateCurveFromPoints constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ControlPoints;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Radius;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CurvatureBlend;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateCurveFromPoints constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateCurveFromPoints Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ControlPoints_Inner = { "ControlPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ControlPoints = { "ControlPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventCreateCurveFromPoints_Parms, ControlPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlPoints_MetaData), NewProp_ControlPoints_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventCreateCurveFromPoints_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_CurvatureBlend = { "CurvatureBlend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventCreateCurveFromPoints_Parms, CurvatureBlend), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventCreateCurveFromPoints_Parms, ReturnValue), Z_Construct_UClass_UCurveObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControlPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControlPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurvatureBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateCurveFromPoints Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCurveObject, nullptr, "CreateCurveFromPoints", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CurveObject_eventCreateCurveFromPoints_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CurveObject_eventCreateCurveFromPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurveObject_CreateCurveFromPoints(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCurveObject::execCreateCurveFromPoints)
{
	P_GET_TARRAY_REF(FVector,Z_Param_Out_ControlPoints);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Radius);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_CurvatureBlend);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCurveObject**)Z_Param__Result=UCurveObject::CreateCurveFromPoints(Z_Param_Out_ControlPoints,Z_Param_Radius,Z_Param_CurvatureBlend);
	P_NATIVE_END;
}
// ********** End Class UCurveObject Function CreateCurveFromPoints ********************************

// ********** Begin Class UCurveObject Function FindBestDistanceAndOffset **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCurveObject_FindBestDistanceAndOffset_Statics
struct UHT_STATICS
{
	struct CurveObject_eventFindBestDistanceAndOffset_Parms
	{
		FVector Location;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "ClothoidCurve" },
		{ "Comment", "/**\n\x09 * Improved version of GetDistanceAndOffsetAlongPolylineAtLocation that projects onto the closest polyline *segment*\n\x09 * (not the two closest points). This is significantly more stable near sharp corners and especially near closed-loop\n\x09 * seams where the start/end points may be duplicated.\n\x09 * @param Location - The world location to query\n\x09 * @return FVector2D where X is the distance along the curve and Y is the perpendicular offset from the curve\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "Improved version of GetDistanceAndOffsetAlongPolylineAtLocation that projects onto the closest polyline *segment*\n(not the two closest points). This is significantly more stable near sharp corners and especially near closed-loop\nseams where the start/end points may be duplicated.\n@param Location - The world location to query\n@return FVector2D where X is the distance along the curve and Y is the perpendicular offset from the curve" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindBestDistanceAndOffset constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindBestDistanceAndOffset constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindBestDistanceAndOffset Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventFindBestDistanceAndOffset_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventFindBestDistanceAndOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function FindBestDistanceAndOffset Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCurveObject, nullptr, "FindBestDistanceAndOffset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CurveObject_eventFindBestDistanceAndOffset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CurveObject_eventFindBestDistanceAndOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurveObject_FindBestDistanceAndOffset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCurveObject::execFindBestDistanceAndOffset)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->FindBestDistanceAndOffset(Z_Param_Location);
	P_NATIVE_END;
}
// ********** End Class UCurveObject Function FindBestDistanceAndOffset ****************************

// ********** Begin Class UCurveObject Function Get3DPositionAtDistance ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCurveObject_Get3DPositionAtDistance_Statics
struct UHT_STATICS
{
	struct CurveObject_eventGet3DPositionAtDistance_Parms
	{
		UCurveObject* ReferenceLine;
		double Distance;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Curve" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Get3DPositionAtDistance constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReferenceLine;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Get3DPositionAtDistance constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Get3DPositionAtDistance Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReferenceLine = { "ReferenceLine", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventGet3DPositionAtDistance_Parms, ReferenceLine), Z_Construct_UClass_UCurveObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventGet3DPositionAtDistance_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventGet3DPositionAtDistance_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReferenceLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function Get3DPositionAtDistance Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCurveObject, nullptr, "Get3DPositionAtDistance", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CurveObject_eventGet3DPositionAtDistance_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CurveObject_eventGet3DPositionAtDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurveObject_Get3DPositionAtDistance(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCurveObject::execGet3DPositionAtDistance)
{
	P_GET_OBJECT(UCurveObject,Z_Param_ReferenceLine);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Distance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->Get3DPositionAtDistance(Z_Param_ReferenceLine,Z_Param_Distance);
	P_NATIVE_END;
}
// ********** End Class UCurveObject Function Get3DPositionAtDistance ******************************

// ********** Begin Class UCurveObject Function GetAllIntersectionsWith ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCurveObject_GetAllIntersectionsWith_Statics
struct UHT_STATICS
{
	struct CurveObject_eventGetAllIntersectionsWith_Parms
	{
		const UCurveObject* Other;
		double HeightThreshold;
		TArray<FCurveIntersectionResult> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Curve" },
		{ "Comment", "/**\n\x09 * Finds all intersections between this curve and another curve using the IntersectsWith logic.\n\x09 * @param Other - The other curve to test against\n\x09 * @param HeightThreshold - The maximum height difference between overlapping curves where intersections will still be detected (default 450 units)\n\x09 * @return Array of all intersection results found between the two curves\n\x09 */" },
		{ "CPP_Default_HeightThreshold", "450.000000" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "Finds all intersections between this curve and another curve using the IntersectsWith logic.\n@param Other - The other curve to test against\n@param HeightThreshold - The maximum height difference between overlapping curves where intersections will still be detected (default 450 units)\n@return Array of all intersection results found between the two curves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Other_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllIntersectionsWith constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Other;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_HeightThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllIntersectionsWith constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllIntersectionsWith Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventGetAllIntersectionsWith_Parms, Other), Z_Construct_UClass_UCurveObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Other_MetaData), NewProp_Other_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_HeightThreshold = { "HeightThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventGetAllIntersectionsWith_Parms, HeightThreshold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCurveIntersectionResult, METADATA_PARAMS(0, nullptr) }; // 7463870d7093d3bfeb229892fb540c3764e91292
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventGetAllIntersectionsWith_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 7463870d7093d3bfeb229892fb540c3764e91292
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Other,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HeightThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAllIntersectionsWith Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCurveObject, nullptr, "GetAllIntersectionsWith", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CurveObject_eventGetAllIntersectionsWith_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CurveObject_eventGetAllIntersectionsWith_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurveObject_GetAllIntersectionsWith(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCurveObject::execGetAllIntersectionsWith)
{
	P_GET_OBJECT(UCurveObject,Z_Param_Other);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_HeightThreshold);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FCurveIntersectionResult>*)Z_Param__Result=P_THIS->GetAllIntersectionsWith(Z_Param_Other,Z_Param_HeightThreshold);
	P_NATIVE_END;
}
// ********** End Class UCurveObject Function GetAllIntersectionsWith ******************************

// ********** Begin Class UCurveObject Function GetCurveIntersections ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCurveObject_GetCurveIntersections_Statics
struct UHT_STATICS
{
	struct CurveObject_eventGetCurveIntersections_Parms
	{
		UEdgeCurve* OtherEdge;
		double SearchStartDist;
		double SearchEndDist;
		double HeightThreshold;
		TArray<FCurveIntersectionResult> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Curve" },
		{ "Comment", "/**\n\x09 * Finds any intersections between two curve objects.\n\x09 * @param OtherEdge - The \"other\" edge to test against\n\x09 * @param SearchStartDist - The distance along Edge A to start searching for overlaps(for optimization)\n\x09 * @param SearchEndDist - The distance along Edge A to end the search(for optimization)\n\x09 * @param HeightThreshold - The maximum height difference between overlapping curves where intersections will still be detected (default 300 units)\n\x09 */" },
		{ "CPP_Default_HeightThreshold", "450.000000" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "Finds any intersections between two curve objects.\n@param OtherEdge - The \"other\" edge to test against\n@param SearchStartDist - The distance along Edge A to start searching for overlaps(for optimization)\n@param SearchEndDist - The distance along Edge A to end the search(for optimization)\n@param HeightThreshold - The maximum height difference between overlapping curves where intersections will still be detected (default 300 units)" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurveIntersections constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherEdge;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SearchStartDist;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SearchEndDist;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_HeightThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurveIntersections constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurveIntersections Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OtherEdge = { "OtherEdge", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventGetCurveIntersections_Parms, OtherEdge), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_SearchStartDist = { "SearchStartDist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventGetCurveIntersections_Parms, SearchStartDist), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_SearchEndDist = { "SearchEndDist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventGetCurveIntersections_Parms, SearchEndDist), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_HeightThreshold = { "HeightThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventGetCurveIntersections_Parms, HeightThreshold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCurveIntersectionResult, METADATA_PARAMS(0, nullptr) }; // 7463870d7093d3bfeb229892fb540c3764e91292
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventGetCurveIntersections_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 7463870d7093d3bfeb229892fb540c3764e91292
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SearchStartDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SearchEndDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HeightThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCurveIntersections Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCurveObject, nullptr, "GetCurveIntersections", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CurveObject_eventGetCurveIntersections_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CurveObject_eventGetCurveIntersections_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurveObject_GetCurveIntersections(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCurveObject::execGetCurveIntersections)
{
	P_GET_OBJECT(UEdgeCurve,Z_Param_OtherEdge);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_SearchStartDist);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_SearchEndDist);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_HeightThreshold);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FCurveIntersectionResult>*)Z_Param__Result=P_THIS->GetCurveIntersections(Z_Param_OtherEdge,Z_Param_SearchStartDist,Z_Param_SearchEndDist,Z_Param_HeightThreshold);
	P_NATIVE_END;
}
// ********** End Class UCurveObject Function GetCurveIntersections ********************************

// ********** Begin Class UCurveObject Function GetCurveLength *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCurveObject_GetCurveLength_Statics
struct UHT_STATICS
{
	struct CurveObject_eventGetCurveLength_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Curve" },
		{ "Comment", "// Utility methods\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "Utility methods" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurveLength constinit property declarations ************************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurveLength constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurveLength Property Definitions ***********************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventGetCurveLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCurveLength Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCurveObject, nullptr, "GetCurveLength", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CurveObject_eventGetCurveLength_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CurveObject_eventGetCurveLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurveObject_GetCurveLength(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCurveObject::execGetCurveLength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetCurveLength();
	P_NATIVE_END;
}
// ********** End Class UCurveObject Function GetCurveLength ***************************************

// ********** Begin Class UCurveObject Function GetDistanceAndOffsetAlongPolylineAtLocation ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCurveObject_GetDistanceAndOffsetAlongPolylineAtLocation_Statics
struct UHT_STATICS
{
	struct CurveObject_eventGetDistanceAndOffsetAlongPolylineAtLocation_Parms
	{
		FVector Location;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "ClothoidCurve" },
		{ "Comment", "//Returns both the distance ALONG the curve and the distance FROM the curve at a given world location. Output X is distance, output Y is Offset.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "Returns both the distance ALONG the curve and the distance FROM the curve at a given world location. Output X is distance, output Y is Offset." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDistanceAndOffsetAlongPolylineAtLocation constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDistanceAndOffsetAlongPolylineAtLocation constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDistanceAndOffsetAlongPolylineAtLocation Property Definitions ******
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventGetDistanceAndOffsetAlongPolylineAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventGetDistanceAndOffsetAlongPolylineAtLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDistanceAndOffsetAlongPolylineAtLocation Property Definitions ********
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCurveObject, nullptr, "GetDistanceAndOffsetAlongPolylineAtLocation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CurveObject_eventGetDistanceAndOffsetAlongPolylineAtLocation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CurveObject_eventGetDistanceAndOffsetAlongPolylineAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurveObject_GetDistanceAndOffsetAlongPolylineAtLocation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCurveObject::execGetDistanceAndOffsetAlongPolylineAtLocation)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetDistanceAndOffsetAlongPolylineAtLocation(Z_Param_Location);
	P_NATIVE_END;
}
// ********** End Class UCurveObject Function GetDistanceAndOffsetAlongPolylineAtLocation **********

// ********** Begin Class UCurveObject Function GetOffsetAtDistance ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCurveObject_GetOffsetAtDistance_Statics
struct UHT_STATICS
{
	struct CurveObject_eventGetOffsetAtDistance_Parms
	{
		double Distance;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Curve" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetOffsetAtDistance constinit property declarations *******************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOffsetAtDistance constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOffsetAtDistance Property Definitions ******************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventGetOffsetAtDistance_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventGetOffsetAtDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetOffsetAtDistance Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCurveObject, nullptr, "GetOffsetAtDistance", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CurveObject_eventGetOffsetAtDistance_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CurveObject_eventGetOffsetAtDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurveObject_GetOffsetAtDistance(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCurveObject::execGetOffsetAtDistance)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Distance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetOffsetAtDistance(Z_Param_Distance);
	P_NATIVE_END;
}
// ********** End Class UCurveObject Function GetOffsetAtDistance **********************************

// ********** Begin Class UCurveObject Function GetRightVectorAtDistance ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCurveObject_GetRightVectorAtDistance_Statics
struct UHT_STATICS
{
	struct CurveObject_eventGetRightVectorAtDistance_Parms
	{
		UCurveObject* ReferenceLine;
		double Distance;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Curve" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRightVectorAtDistance constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReferenceLine;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRightVectorAtDistance constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRightVectorAtDistance Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReferenceLine = { "ReferenceLine", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventGetRightVectorAtDistance_Parms, ReferenceLine), Z_Construct_UClass_UCurveObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventGetRightVectorAtDistance_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventGetRightVectorAtDistance_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReferenceLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetRightVectorAtDistance Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCurveObject, nullptr, "GetRightVectorAtDistance", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CurveObject_eventGetRightVectorAtDistance_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CurveObject_eventGetRightVectorAtDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurveObject_GetRightVectorAtDistance(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCurveObject::execGetRightVectorAtDistance)
{
	P_GET_OBJECT(UCurveObject,Z_Param_ReferenceLine);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Distance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetRightVectorAtDistance(Z_Param_ReferenceLine,Z_Param_Distance);
	P_NATIVE_END;
}
// ********** End Class UCurveObject Function GetRightVectorAtDistance *****************************

// ********** Begin Class UCurveObject Function IntersectsWith *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCurveObject_IntersectsWith_Statics
struct UHT_STATICS
{
	struct CurveObject_eventIntersectsWith_Parms
	{
		const UCurveObject* Other;
		double Distance1;
		double Distance2;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Curve" },
		{ "Comment", "// Intersection testing\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "Intersection testing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Other_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IntersectsWith constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Other;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance1;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance2;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CurveObject_eventIntersectsWith_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IntersectsWith constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IntersectsWith Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventIntersectsWith_Parms, Other), Z_Construct_UClass_UCurveObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Other_MetaData), NewProp_Other_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Distance1 = { "Distance1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventIntersectsWith_Parms, Distance1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Distance2 = { "Distance2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(CurveObject_eventIntersectsWith_Parms, Distance2), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(CurveObject_eventIntersectsWith_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Other,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Distance1,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Distance2,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IntersectsWith Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCurveObject, nullptr, "IntersectsWith", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CurveObject_eventIntersectsWith_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CurveObject_eventIntersectsWith_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurveObject_IntersectsWith(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCurveObject::execIntersectsWith)
{
	P_GET_OBJECT(UCurveObject,Z_Param_Other);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Distance1);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Distance2);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IntersectsWith(Z_Param_Other,Z_Param_Out_Distance1,Z_Param_Out_Distance2);
	P_NATIVE_END;
}
// ********** End Class UCurveObject Function IntersectsWith ***************************************

// ********** Begin Class UCurveObject *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UCurveObject_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * UCurveObject - A mathematical base class for clothoid curves\n */" },
		{ "IncludePath", "DynamicRoad/ClothoidCurve.h" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "UCurveObject - A mathematical base class for clothoid curves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Category", "RoadBLD|Clothoid" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurvatureRate_MetaData[] = {
		{ "Category", "RoadBLD|Clothoid" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalLength_MetaData[] = {
		{ "Category", "RoadBLD|Clothoid" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetPoints_MetaData[] = {
		{ "Category", "RoadBLD|Clothoid" },
		{ "Comment", "//The user-defined points where we modify the offset of the curve to create a wider or narrower lane\n//We add a point at the start and end of the road by default\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "The user-defined points where we modify the offset of the curve to create a wider or narrower lane\nWe add a point at the start and end of the road by default" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseOffset_MetaData[] = {
		{ "Category", "RoadBLD|Clothoid" },
		{ "Comment", "//The base or fallback offset from the road centerline\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "The base or fallback offset from the road centerline" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCurveObject constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CurvatureRate;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TotalLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OffsetPoints;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_BaseOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCurveObject constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CalculateCurveSections"), .Pointer = &UCurveObject::execCalculateCurveSections },
		{ .NameUTF8 = UTF8TEXT("CalculateStandalonePolyline"), .Pointer = &UCurveObject::execCalculateStandalonePolyline },
		{ .NameUTF8 = UTF8TEXT("CreateCurveFromPoints"), .Pointer = &UCurveObject::execCreateCurveFromPoints },
		{ .NameUTF8 = UTF8TEXT("FindBestDistanceAndOffset"), .Pointer = &UCurveObject::execFindBestDistanceAndOffset },
		{ .NameUTF8 = UTF8TEXT("Get3DPositionAtDistance"), .Pointer = &UCurveObject::execGet3DPositionAtDistance },
		{ .NameUTF8 = UTF8TEXT("GetAllIntersectionsWith"), .Pointer = &UCurveObject::execGetAllIntersectionsWith },
		{ .NameUTF8 = UTF8TEXT("GetCurveIntersections"), .Pointer = &UCurveObject::execGetCurveIntersections },
		{ .NameUTF8 = UTF8TEXT("GetCurveLength"), .Pointer = &UCurveObject::execGetCurveLength },
		{ .NameUTF8 = UTF8TEXT("GetDistanceAndOffsetAlongPolylineAtLocation"), .Pointer = &UCurveObject::execGetDistanceAndOffsetAlongPolylineAtLocation },
		{ .NameUTF8 = UTF8TEXT("GetOffsetAtDistance"), .Pointer = &UCurveObject::execGetOffsetAtDistance },
		{ .NameUTF8 = UTF8TEXT("GetRightVectorAtDistance"), .Pointer = &UCurveObject::execGetRightVectorAtDistance },
		{ .NameUTF8 = UTF8TEXT("IntersectsWith"), .Pointer = &UCurveObject::execIntersectsWith },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCurveObject_CalculateCurveSections, "CalculateCurveSections" }, // 3fb2d5e6f147111ffe71226e0915af928cb40c80
		{ &Z_Construct_UFunction_UCurveObject_CalculateStandalonePolyline, "CalculateStandalonePolyline" }, // f6a72742bccc18ed548baa85795eaafafe18778a
		{ &Z_Construct_UFunction_UCurveObject_CreateCurveFromPoints, "CreateCurveFromPoints" }, // 023fe24c74cb5e60cedd88a0a5d5814c9e18bf66
		{ &Z_Construct_UFunction_UCurveObject_FindBestDistanceAndOffset, "FindBestDistanceAndOffset" }, // 555c1d5f1c38315ad0810171efe156d4aeaadc15
		{ &Z_Construct_UFunction_UCurveObject_Get3DPositionAtDistance, "Get3DPositionAtDistance" }, // 4ce128cd2e294df2b0fa9ea6db3a87e91a760279
		{ &Z_Construct_UFunction_UCurveObject_GetAllIntersectionsWith, "GetAllIntersectionsWith" }, // 668fb091a5cffa20ffa17a0132015312e1ab3080
		{ &Z_Construct_UFunction_UCurveObject_GetCurveIntersections, "GetCurveIntersections" }, // 5803b3864da0a86841e856e8054419380c46dee9
		{ &Z_Construct_UFunction_UCurveObject_GetCurveLength, "GetCurveLength" }, // 805ccdc896e90d9d3700360248f5340096facf2f
		{ &Z_Construct_UFunction_UCurveObject_GetDistanceAndOffsetAlongPolylineAtLocation, "GetDistanceAndOffsetAlongPolylineAtLocation" }, // d2d4e050b6f162e17e30813f0cd05777384d8ab7
		{ &Z_Construct_UFunction_UCurveObject_GetOffsetAtDistance, "GetOffsetAtDistance" }, // 033570de17f7b5bbdd9ef5aadb50832d209fd147
		{ &Z_Construct_UFunction_UCurveObject_GetRightVectorAtDistance, "GetRightVectorAtDistance" }, // 649aa25cf2cbc6f9cdff074b3bd7d60d40d1a69f
		{ &Z_Construct_UFunction_UCurveObject_IntersectsWith, "IntersectsWith" }, // 613ba3fff6afd6517f293591b0ea9929e1568295
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UCurveObject Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPolylinePoint, METADATA_PARAMS(0, nullptr) }; // 4bb2838907d6ab4ef368dcefa4e49d6837f53a42
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveObject, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) }; // 4bb2838907d6ab4ef368dcefa4e49d6837f53a42
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_CurvatureRate = { "CurvatureRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveObject, CurvatureRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurvatureRate_MetaData), NewProp_CurvatureRate_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_TotalLength = { "TotalLength", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveObject, TotalLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalLength_MetaData), NewProp_TotalLength_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OffsetPoints_Inner = { "OffsetPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOffsetPoint, METADATA_PARAMS(0, nullptr) }; // ebe5593cddf3aebfef4e17da982b3b2525bffe9d
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OffsetPoints = { "OffsetPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveObject, OffsetPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetPoints_MetaData), NewProp_OffsetPoints_MetaData) }; // ebe5593cddf3aebfef4e17da982b3b2525bffe9d
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_BaseOffset = { "BaseOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveObject, BaseOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseOffset_MetaData), NewProp_BaseOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurvatureRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TotalLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OffsetPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OffsetPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BaseOffset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UCurveObject Property Definitions ******************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UCurveObject,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UCurveObject_StaticRegisterNativesUCurveObject()
{
	UClass* Class = UCurveObject::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCurveObject;
UClass* Z_Construct_UClass_UCurveObject(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UCurveObject;
		if (!Z_Registration_Info_UClass_UCurveObject.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CurveObject"),
				Z_Registration_Info_UClass_UCurveObject.InnerSingleton,
				UCurveObject_StaticRegisterNativesUCurveObject,
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
		return Z_Registration_Info_UClass_UCurveObject.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UCurveObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveObject.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UCurveObject.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCurveObject);
UCurveObject::~UCurveObject() {}
// ********** End Class UCurveObject ***************************************************************

// ********** Begin Class UCornerCurve *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UCornerCurve_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DynamicRoad/ClothoidCurve.h" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[] = {
		{ "Category", "CornerCurve" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "CornerCurve" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCornerCurve constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Curve;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCornerCurve constinit property declarations *******************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCornerCurve>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UCornerCurve Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UCornerCurve, Curve), Z_Construct_UClass_UCurveObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curve_MetaData), NewProp_Curve_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UCornerCurve, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Curve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UCornerCurve Property Definitions ******************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UCornerCurve,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UCornerCurve;
UClass* Z_Construct_UClass_UCornerCurve(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UCornerCurve;
		if (!Z_Registration_Info_UClass_UCornerCurve.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CornerCurve"),
				Z_Registration_Info_UClass_UCornerCurve.InnerSingleton,
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
		return Z_Registration_Info_UClass_UCornerCurve.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UCornerCurve.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCornerCurve.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UCornerCurve.OuterSingleton;
}
#undef UHT_STATICS
UCornerCurve::UCornerCurve(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCornerCurve);
UCornerCurve::~UCornerCurve() {}
// ********** End Class UCornerCurve ***************************************************************

// ********** Begin Class UCurveUtils **************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UCurveUtils_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "//BP Library with helper functions for working with RoadBLD curves\n" },
		{ "IncludePath", "DynamicRoad/ClothoidCurve.h" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidCurve.h" },
		{ "ToolTip", "BP Library with helper functions for working with RoadBLD curves" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCurveUtils constinit property declarations ******************************
// ********** End Class UCurveUtils constinit property declarations ********************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UCurveUtils,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UCurveUtils;
UClass* Z_Construct_UClass_UCurveUtils(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UCurveUtils;
		if (!Z_Registration_Info_UClass_UCurveUtils.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CurveUtils"),
				Z_Registration_Info_UClass_UCurveUtils.InnerSingleton,
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
		return Z_Registration_Info_UClass_UCurveUtils.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UCurveUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveUtils.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UCurveUtils.OuterSingleton;
}
#undef UHT_STATICS
UCurveUtils::UCurveUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCurveUtils);
UCurveUtils::~UCurveUtils() {}
// ********** End Class UCurveUtils ****************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidCurve_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FOffsetPoint, Z_Construct_UScriptStruct_FOffsetPoint_Statics::NewStructOps, TEXT("OffsetPoint"),&Z_Registration_Info_UScriptStruct_FOffsetPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOffsetPoint), 3957676348U) },
		{ Z_Construct_UScriptStruct_FRoadNetworkCorner, Z_Construct_UScriptStruct_FRoadNetworkCorner_Statics::NewStructOps, TEXT("RoadNetworkCorner"),&Z_Registration_Info_UScriptStruct_FRoadNetworkCorner, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadNetworkCorner), 3248740193U) },
		{ Z_Construct_UScriptStruct_FPolylinePoint, Z_Construct_UScriptStruct_FPolylinePoint_Statics::NewStructOps, TEXT("PolylinePoint"),&Z_Registration_Info_UScriptStruct_FPolylinePoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPolylinePoint), 1269990281U) },
		{ Z_Construct_UScriptStruct_FCurveSection, Z_Construct_UScriptStruct_FCurveSection_Statics::NewStructOps, TEXT("CurveSection"),&Z_Registration_Info_UScriptStruct_FCurveSection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurveSection), 1269443986U) },
		{ Z_Construct_UScriptStruct_FCurveIntersectionResult, Z_Construct_UScriptStruct_FCurveIntersectionResult_Statics::NewStructOps, TEXT("CurveIntersectionResult"),&Z_Registration_Info_UScriptStruct_FCurveIntersectionResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurveIntersectionResult), 1952679693U) },
		{ Z_Construct_UScriptStruct_FClothoidPolyline, Z_Construct_UScriptStruct_FClothoidPolyline_Statics::NewStructOps, TEXT("ClothoidPolyline"),&Z_Registration_Info_UScriptStruct_FClothoidPolyline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClothoidPolyline), 1525469086U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCurveObject, TEXT("UCurveObject"), &Z_Registration_Info_UClass_UCurveObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveObject), 1220468784U) },
		{ Z_Construct_UClass_UCornerCurve, TEXT("UCornerCurve"), &Z_Registration_Info_UClass_UCornerCurve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCornerCurve), 2113303983U) },
		{ Z_Construct_UClass_UCurveUtils, TEXT("UCurveUtils"), &Z_Registration_Info_UClass_UCurveUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveUtils), 123496895U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidCurve_h__Script_RoadBLDRuntime_70f8d160d78b8c23208553977b4f84b6ddc725f3{
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
