// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicRoad/DynamicRoad.h"
#include "DynamicRoad/ClothoidCurve.h"
#include "DynamicRoad/DynamicRoadData.h"
#include "RoadBLDTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDynamicRoad() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
PCG_API UClass* Z_Construct_UClass_UPCGGraph(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoad(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicRoadDrawPresetMarking(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_ERoadSide(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_ERoadType(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FOffsetPoint(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadAutomationParams(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadControlPoint(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadCrossSectionEdgeProfile(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadSnap(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadSplineAuthoringPoint(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UClothoidSplineComponent(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UCurveObject(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoad(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadDrawPreset(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadLane(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UEdgeCurve(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UPropSpawner(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UReferenceLine(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadBLDSidewalkPreset(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadControlSplineComponent(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ARoadGeo(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadModuleObject(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadStamp(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_USidewalk(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FRoadSplineAuthoringPoint *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRoadSplineAuthoringPoint_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRoadSplineAuthoringPoint>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRoadSplineAuthoringPoint); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A validated world-space point used to replace a road's linear authoring spline. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "A validated world-space point used to replace a road's linear authoring spline." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[] = {
		{ "Category", "RoadBLD|Authoring" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRadius_MetaData[] = {
		{ "Category", "RoadBLD|Authoring" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRoadSplineAuthoringPoint constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRoadSplineAuthoringPoint constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadSplineAuthoringPoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRoadSplineAuthoringPoint Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadSplineAuthoringPoint, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPosition_MetaData), NewProp_WorldPosition_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_MaxRadius = { "MaxRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadSplineAuthoringPoint, MaxRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRadius_MetaData), NewProp_MaxRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxRadius,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRoadSplineAuthoringPoint Property Definitions **********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"RoadSplineAuthoringPoint",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRoadSplineAuthoringPoint>(),
	alignof(FRoadSplineAuthoringPoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRoadSplineAuthoringPoint;
UScriptStruct* Z_Construct_UScriptStruct_FRoadSplineAuthoringPoint(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRoadSplineAuthoringPoint.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRoadSplineAuthoringPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadSplineAuthoringPoint, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("RoadSplineAuthoringPoint"));
		}
		return Z_Registration_Info_UScriptStruct_FRoadSplineAuthoringPoint.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRoadSplineAuthoringPoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRoadSplineAuthoringPoint.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRoadSplineAuthoringPoint.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRoadSplineAuthoringPoint *******************************************

// ********** Begin ScriptStruct FRoadCrossSectionEdgeProfile **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRoadCrossSectionEdgeProfile_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRoadCrossSectionEdgeProfile>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRoadCrossSectionEdgeProfile); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A complete distance-to-cumulative-offset profile for an existing road boundary.\n * Offset values are unsigned distances from the lane midpoint; Side determines direction.\n */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "A complete distance-to-cumulative-offset profile for an existing road boundary.\nOffset values are unsigned distances from the lane midpoint; Side determines direction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeCurve_MetaData[] = {
		{ "Category", "RoadBLD|Authoring" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetPoints_MetaData[] = {
		{ "Category", "RoadBLD|Authoring" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRoadCrossSectionEdgeProfile constinit property declarations ******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EdgeCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OffsetPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRoadCrossSectionEdgeProfile constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadCrossSectionEdgeProfile>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRoadCrossSectionEdgeProfile Property Definitions *****************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_EdgeCurve = { "EdgeCurve", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadCrossSectionEdgeProfile, EdgeCurve), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeCurve_MetaData), NewProp_EdgeCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OffsetPoints_Inner = { "OffsetPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOffsetPoint, METADATA_PARAMS(0, nullptr) }; // ebe5593cddf3aebfef4e17da982b3b2525bffe9d
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OffsetPoints = { "OffsetPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadCrossSectionEdgeProfile, OffsetPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetPoints_MetaData), NewProp_OffsetPoints_MetaData) }; // ebe5593cddf3aebfef4e17da982b3b2525bffe9d
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OffsetPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OffsetPoints,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRoadCrossSectionEdgeProfile Property Definitions *******************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"RoadCrossSectionEdgeProfile",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRoadCrossSectionEdgeProfile>(),
	alignof(FRoadCrossSectionEdgeProfile),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRoadCrossSectionEdgeProfile;
UScriptStruct* Z_Construct_UScriptStruct_FRoadCrossSectionEdgeProfile(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRoadCrossSectionEdgeProfile.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRoadCrossSectionEdgeProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadCrossSectionEdgeProfile, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("RoadCrossSectionEdgeProfile"));
		}
		return Z_Registration_Info_UScriptStruct_FRoadCrossSectionEdgeProfile.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRoadCrossSectionEdgeProfile.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRoadCrossSectionEdgeProfile.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRoadCrossSectionEdgeProfile.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRoadCrossSectionEdgeProfile ****************************************

// ********** Begin ScriptStruct FRoadControlPoint *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRoadControlPoint_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRoadControlPoint>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRoadControlPoint); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//FRoadControlPoint is how we store the points that make up the road spline\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "FRoadControlPoint is how we store the points that make up the road spline" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pos_MetaData[] = {
		{ "Category", "Control Point" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dist_MetaData[] = {
		{ "Category", "Control Point" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRadius_MetaData[] = {
		{ "Category", "Control Point" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseElevation_MetaData[] = {
		{ "Category", "Control Point" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRoadControlPoint constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pos;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Dist;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxRadius;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_BaseElevation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRoadControlPoint constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadControlPoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRoadControlPoint Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadControlPoint, Pos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pos_MetaData), NewProp_Pos_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Dist = { "Dist", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadControlPoint, Dist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dist_MetaData), NewProp_Dist_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_MaxRadius = { "MaxRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadControlPoint, MaxRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRadius_MetaData), NewProp_MaxRadius_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_BaseElevation = { "BaseElevation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadControlPoint, BaseElevation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseElevation_MetaData), NewProp_BaseElevation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Pos,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Dist,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BaseElevation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRoadControlPoint Property Definitions ******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"RoadControlPoint",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRoadControlPoint>(),
	alignof(FRoadControlPoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRoadControlPoint;
UScriptStruct* Z_Construct_UScriptStruct_FRoadControlPoint(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRoadControlPoint.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRoadControlPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadControlPoint, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("RoadControlPoint"));
		}
		return Z_Registration_Info_UScriptStruct_FRoadControlPoint.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRoadControlPoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRoadControlPoint.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRoadControlPoint.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRoadControlPoint ***************************************************

// ********** Begin Class ADynamicRoad Function AddLane ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_AddLane_Statics
struct UHT_STATICS
{
	struct DynamicRoad_eventAddLane_Parms
	{
		ERoadSide Side;
		int32 Index;
		double Width;
		FDynamicRoadDrawPresetMarking LaneMarking;
		UDynamicRoadLane* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "Comment", "// Add a new lane at runtime. Inserts at Index (or appends if invalid), creating a new edge and shifting outer edges\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Add a new lane at runtime. Inserts at Index (or appends if invalid), creating a new edge and shifting outer edges" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddLane constinit property declarations *******************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_Side_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Side;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Width;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LaneMarking;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddLane constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddLane Property Definitions ******************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Side_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Side = { "Side", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventAddLane_Parms, Side), Z_Construct_UEnum_RoadBLDRuntime_ERoadSide, METADATA_PARAMS(0, nullptr) }; // e372ae13051be4d9afcab83594e1c3193054100d
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventAddLane_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventAddLane_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LaneMarking = { "LaneMarking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventAddLane_Parms, LaneMarking), Z_Construct_UScriptStruct_FDynamicRoadDrawPresetMarking, METADATA_PARAMS(0, nullptr) }; // 94599fce731ca6622b90174c94b08e2dc030d447
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventAddLane_Parms, ReturnValue), Z_Construct_UClass_UDynamicRoadLane, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Side_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Side,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaneMarking,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddLane Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "AddLane", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoad_eventAddLane_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoad_eventAddLane_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoad_AddLane(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execAddLane)
{
	P_GET_ENUM(ERoadSide,Z_Param_Side);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Width);
	P_GET_STRUCT(FDynamicRoadDrawPresetMarking,Z_Param_LaneMarking);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDynamicRoadLane**)Z_Param__Result=P_THIS->AddLane(ERoadSide(Z_Param_Side),Z_Param_Index,Z_Param_Width,Z_Param_LaneMarking);
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function AddLane **********************************************

// ********** Begin Class ADynamicRoad Function AllowsBridgeRoadModules ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_AllowsBridgeRoadModules_Statics
struct UHT_STATICS
{
	struct DynamicRoad_eventAllowsBridgeRoadModules_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Landscape" },
		{ "Comment", "/**\n\x09 * Bridge RoadModuleObjects are skipped when this road conforms to landscape or aligns landscape,\n\x09 * because those modes keep the road on terrain rather than spanning a gap.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Bridge RoadModuleObjects are skipped when this road conforms to landscape or aligns landscape,\nbecause those modes keep the road on terrain rather than spanning a gap." },
	};
#endif // WITH_METADATA

// ********** Begin Function AllowsBridgeRoadModules constinit property declarations ***************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DynamicRoad_eventAllowsBridgeRoadModules_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AllowsBridgeRoadModules constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AllowsBridgeRoadModules Property Definitions **************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicRoad_eventAllowsBridgeRoadModules_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AllowsBridgeRoadModules Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "AllowsBridgeRoadModules", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoad_eventAllowsBridgeRoadModules_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoad_eventAllowsBridgeRoadModules_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoad_AllowsBridgeRoadModules(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execAllowsBridgeRoadModules)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AllowsBridgeRoadModules();
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function AllowsBridgeRoadModules ******************************

// ********** Begin Class ADynamicRoad Function ApplyCrossSectionEdgeProfiles **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_ApplyCrossSectionEdgeProfiles_Statics
struct UHT_STATICS
{
	struct DynamicRoad_eventApplyCrossSectionEdgeProfiles_Parms
	{
		TArray<FRoadCrossSectionEdgeProfile> Profiles;
		FString OutError;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Authoring" },
		{ "Comment", "/**\n\x09 * Atomically applies cumulative offset profiles to existing lane boundaries.\n\x09 * Profiles must cover [0, GetLength()] and preserve boundary ordering on each side.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Atomically applies cumulative offset profiles to existing lane boundaries.\nProfiles must cover [0, GetLength()] and preserve boundary ordering on each side." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Profiles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyCrossSectionEdgeProfiles constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Profiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Profiles;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutError;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DynamicRoad_eventApplyCrossSectionEdgeProfiles_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyCrossSectionEdgeProfiles constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyCrossSectionEdgeProfiles Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Profiles_Inner = { "Profiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRoadCrossSectionEdgeProfile, METADATA_PARAMS(0, nullptr) }; // 9e363373913f1128872923504f1ccc6f723faf3d
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Profiles = { "Profiles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventApplyCrossSectionEdgeProfiles_Parms, Profiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Profiles_MetaData), NewProp_Profiles_MetaData) }; // 9e363373913f1128872923504f1ccc6f723faf3d
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventApplyCrossSectionEdgeProfiles_Parms, OutError), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicRoad_eventApplyCrossSectionEdgeProfiles_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Profiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Profiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutError,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ApplyCrossSectionEdgeProfiles Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "ApplyCrossSectionEdgeProfiles", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoad_eventApplyCrossSectionEdgeProfiles_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoad_eventApplyCrossSectionEdgeProfiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoad_ApplyCrossSectionEdgeProfiles(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execApplyCrossSectionEdgeProfiles)
{
	P_GET_TARRAY_REF(FRoadCrossSectionEdgeProfile,Z_Param_Out_Profiles);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutError);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ApplyCrossSectionEdgeProfiles(Z_Param_Out_Profiles,Z_Param_Out_OutError);
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function ApplyCrossSectionEdgeProfiles ************************

// ********** Begin Class ADynamicRoad Function CalculateLaneShapes ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_CalculateLaneShapes_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "Comment", "//Forms the shapes of each lane on the road by calculating the width and offset from the centerline at each point along the road. The user can add width controls to widen or narrow lanes at certain points.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Forms the shapes of each lane on the road by calculating the width and offset from the centerline at each point along the road. The user can add width controls to widen or narrow lanes at certain points." },
	};
#endif // WITH_METADATA

// ********** Begin Function CalculateLaneShapes constinit property declarations *******************
// ********** End Function CalculateLaneShapes constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "CalculateLaneShapes", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ADynamicRoad_CalculateLaneShapes(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execCalculateLaneShapes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateLaneShapes();
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function CalculateLaneShapes **********************************

// ********** Begin Class ADynamicRoad Function CalculateRefLine ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_CalculateRefLine_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "Comment", "//Calculates the fundamental curve driving the road generation.\n//To do this we split up the road reference line into straight and circular arc sections so we can calculate the physical location of a point along the refline curve\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Calculates the fundamental curve driving the road generation.\nTo do this we split up the road reference line into straight and circular arc sections so we can calculate the physical location of a point along the refline curve" },
	};
#endif // WITH_METADATA

// ********** Begin Function CalculateRefLine constinit property declarations **********************
// ********** End Function CalculateRefLine constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "CalculateRefLine", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ADynamicRoad_CalculateRefLine(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execCalculateRefLine)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateRefLine();
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function CalculateRefLine *************************************

// ********** Begin Class ADynamicRoad Function ConvertDistanceBetweenCurves ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_ConvertDistanceBetweenCurves_Statics
struct UHT_STATICS
{
	struct DynamicRoad_eventConvertDistanceBetweenCurves_Parms
	{
		UCurveObject* SourceCurve;
		UCurveObject* DestCurve;
		double SourceDistance;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "Comment", "/**\n\x09 * Converts a distance along one curve to the nearest distance along another curve.\n\x09 * Uses the 3D position on SourceCurve at SourceDistance, then projects to DestCurve via UV.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Converts a distance along one curve to the nearest distance along another curve.\nUses the 3D position on SourceCurve at SourceDistance, then projects to DestCurve via UV." },
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertDistanceBetweenCurves constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestCurve;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SourceDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConvertDistanceBetweenCurves constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConvertDistanceBetweenCurves Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SourceCurve = { "SourceCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventConvertDistanceBetweenCurves_Parms, SourceCurve), Z_Construct_UClass_UCurveObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DestCurve = { "DestCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventConvertDistanceBetweenCurves_Parms, DestCurve), Z_Construct_UClass_UCurveObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_SourceDistance = { "SourceDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventConvertDistanceBetweenCurves_Parms, SourceDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventConvertDistanceBetweenCurves_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DestCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ConvertDistanceBetweenCurves Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "ConvertDistanceBetweenCurves", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoad_eventConvertDistanceBetweenCurves_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoad_eventConvertDistanceBetweenCurves_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoad_ConvertDistanceBetweenCurves(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execConvertDistanceBetweenCurves)
{
	P_GET_OBJECT(UCurveObject,Z_Param_SourceCurve);
	P_GET_OBJECT(UCurveObject,Z_Param_DestCurve);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_SourceDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->ConvertDistanceBetweenCurves(Z_Param_SourceCurve,Z_Param_DestCurve,Z_Param_SourceDistance);
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function ConvertDistanceBetweenCurves *************************

// ********** Begin Class ADynamicRoad Function CreateRoundabout ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_CreateRoundabout_Statics
struct UHT_STATICS
{
	struct DynamicRoad_eventCreateRoundabout_Parms
	{
		double Radius;
		FVector CenterPoint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "RoadBLD|Road" },
		{ "Comment", "// Method to create a perfect circular roundabout by applying control points to the road\n" },
		{ "CPP_Default_CenterPoint", "" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Method to create a perfect circular roundabout by applying control points to the road" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateRoundabout constinit property declarations **********************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CenterPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateRoundabout constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateRoundabout Property Definitions *********************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventCreateRoundabout_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CenterPoint = { "CenterPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventCreateRoundabout_Parms, CenterPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterPoint_MetaData), NewProp_CenterPoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CenterPoint,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateRoundabout Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "CreateRoundabout", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoad_eventCreateRoundabout_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoad_eventCreateRoundabout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoad_CreateRoundabout(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execCreateRoundabout)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Radius);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_CenterPoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateRoundabout(Z_Param_Radius,Z_Param_Out_CenterPoint);
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function CreateRoundabout *************************************

// ********** Begin Class ADynamicRoad Function CreateSemicircle ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_CreateSemicircle_Statics
struct UHT_STATICS
{
	struct DynamicRoad_eventCreateSemicircle_Parms
	{
		double Radius;
		FVector CenterPoint;
		double StartAngleDegrees;
		double EndAngleDegrees;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "RoadBLD|Road" },
		{ "Comment", "// Method to create a semicircle road with 4 control points (X, 2X, X segment pattern)\n// StartAngle and EndAngle are in degrees (e.g., 0 to 180 for a semicircle)\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Method to create a semicircle road with 4 control points (X, 2X, X segment pattern)\nStartAngle and EndAngle are in degrees (e.g., 0 to 180 for a semicircle)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateSemicircle constinit property declarations **********************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CenterPoint;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StartAngleDegrees;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EndAngleDegrees;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateSemicircle constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateSemicircle Property Definitions *********************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventCreateSemicircle_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CenterPoint = { "CenterPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventCreateSemicircle_Parms, CenterPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterPoint_MetaData), NewProp_CenterPoint_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_StartAngleDegrees = { "StartAngleDegrees", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventCreateSemicircle_Parms, StartAngleDegrees), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_EndAngleDegrees = { "EndAngleDegrees", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventCreateSemicircle_Parms, EndAngleDegrees), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CenterPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartAngleDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndAngleDegrees,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateSemicircle Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "CreateSemicircle", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoad_eventCreateSemicircle_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoad_eventCreateSemicircle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoad_CreateSemicircle(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execCreateSemicircle)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Radius);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_CenterPoint);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_StartAngleDegrees);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_EndAngleDegrees);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateSemicircle(Z_Param_Radius,Z_Param_Out_CenterPoint,Z_Param_StartAngleDegrees,Z_Param_EndAngleDegrees);
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function CreateSemicircle *************************************

// ********** Begin Class ADynamicRoad Function DrawDebugGeometricCenterline ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_DrawDebugGeometricCenterline_Statics
struct UHT_STATICS
{
	struct DynamicRoad_eventDrawDebugGeometricCenterline_Parms
	{
		FColor LineColor;
		float LineThickness;
		float LifeTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "RoadBLD|Debug" },
		{ "CPP_Default_LifeTime", "20.000000" },
		{ "CPP_Default_LineThickness", "2.000000" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DrawDebugGeometricCenterline constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DrawDebugGeometricCenterline constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DrawDebugGeometricCenterline Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventDrawDebugGeometricCenterline_Parms, LineColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventDrawDebugGeometricCenterline_Parms, LineThickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LifeTime = { "LifeTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventDrawDebugGeometricCenterline_Parms, LifeTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LifeTime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DrawDebugGeometricCenterline Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "DrawDebugGeometricCenterline", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoad_eventDrawDebugGeometricCenterline_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoad_eventDrawDebugGeometricCenterline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoad_DrawDebugGeometricCenterline(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execDrawDebugGeometricCenterline)
{
	P_GET_STRUCT(FColor,Z_Param_LineColor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LineThickness);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LifeTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawDebugGeometricCenterline(Z_Param_LineColor,Z_Param_LineThickness,Z_Param_LifeTime);
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function DrawDebugGeometricCenterline *************************

// ********** Begin Class ADynamicRoad Function DrawDebugReferenceLine *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_DrawDebugReferenceLine_Statics
struct UHT_STATICS
{
	struct DynamicRoad_eventDrawDebugReferenceLine_Parms
	{
		FColor LineColor;
		float LineThickness;
		float LifeTime;
		int32 NumSamples;
		bool bDrawLanes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "RoadBLD|Debug" },
		{ "Comment", "// Debug visualization\n" },
		{ "CPP_Default_bDrawLanes", "false" },
		{ "CPP_Default_LifeTime", "-1.000000" },
		{ "CPP_Default_LineColor", "(R=255,G=255,B=0,A=255)" },
		{ "CPP_Default_LineThickness", "2.000000" },
		{ "CPP_Default_NumSamples", "100" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Debug visualization" },
	};
#endif // WITH_METADATA

// ********** Begin Function DrawDebugReferenceLine constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamples;
	static void NewProp_bDrawLanes_SetBit(void* Obj)
	{
		((DynamicRoad_eventDrawDebugReferenceLine_Parms*)Obj)->bDrawLanes = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawLanes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DrawDebugReferenceLine constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DrawDebugReferenceLine Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventDrawDebugReferenceLine_Parms, LineColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventDrawDebugReferenceLine_Parms, LineThickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LifeTime = { "LifeTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventDrawDebugReferenceLine_Parms, LifeTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NumSamples = { "NumSamples", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventDrawDebugReferenceLine_Parms, NumSamples), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDrawLanes = { "bDrawLanes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicRoad_eventDrawDebugReferenceLine_Parms), &UHT_STATICS::NewProp_bDrawLanes_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LifeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NumSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDrawLanes,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DrawDebugReferenceLine Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "DrawDebugReferenceLine", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoad_eventDrawDebugReferenceLine_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoad_eventDrawDebugReferenceLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoad_DrawDebugReferenceLine(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execDrawDebugReferenceLine)
{
	P_GET_STRUCT(FColor,Z_Param_LineColor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LineThickness);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LifeTime);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumSamples);
	P_GET_UBOOL(Z_Param_bDrawLanes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawDebugReferenceLine(Z_Param_LineColor,Z_Param_LineThickness,Z_Param_LifeTime,Z_Param_NumSamples,Z_Param_bDrawLanes);
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function DrawDebugReferenceLine *******************************

// ********** Begin Class ADynamicRoad Function DrawDebugReferenceLineDetailed *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_DrawDebugReferenceLineDetailed_Statics
struct UHT_STATICS
{
	struct DynamicRoad_eventDrawDebugReferenceLineDetailed_Parms
	{
		FColor LineColor;
		FColor DirectionColor;
		FColor ControlPointColor;
		float LineThickness;
		float DirectionLength;
		float LifeTime;
		int32 NumSamples;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "RoadBLD|Debug" },
		{ "CPP_Default_ControlPointColor", "(R=0,G=0,B=255,A=255)" },
		{ "CPP_Default_DirectionColor", "(R=255,G=0,B=0,A=255)" },
		{ "CPP_Default_DirectionLength", "100.000000" },
		{ "CPP_Default_LifeTime", "-1.000000" },
		{ "CPP_Default_LineColor", "(R=255,G=255,B=0,A=255)" },
		{ "CPP_Default_LineThickness", "2.000000" },
		{ "CPP_Default_NumSamples", "100" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DrawDebugReferenceLineDetailed constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlPointColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamples;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DrawDebugReferenceLineDetailed constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DrawDebugReferenceLineDetailed Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LineColor = { "LineColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventDrawDebugReferenceLineDetailed_Parms, LineColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DirectionColor = { "DirectionColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventDrawDebugReferenceLineDetailed_Parms, DirectionColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ControlPointColor = { "ControlPointColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventDrawDebugReferenceLineDetailed_Parms, ControlPointColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventDrawDebugReferenceLineDetailed_Parms, LineThickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DirectionLength = { "DirectionLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventDrawDebugReferenceLineDetailed_Parms, DirectionLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LifeTime = { "LifeTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventDrawDebugReferenceLineDetailed_Parms, LifeTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NumSamples = { "NumSamples", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventDrawDebugReferenceLineDetailed_Parms, NumSamples), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DirectionColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControlPointColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DirectionLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LifeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NumSamples,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DrawDebugReferenceLineDetailed Property Definitions *********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "DrawDebugReferenceLineDetailed", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoad_eventDrawDebugReferenceLineDetailed_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoad_eventDrawDebugReferenceLineDetailed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoad_DrawDebugReferenceLineDetailed(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execDrawDebugReferenceLineDetailed)
{
	P_GET_STRUCT(FColor,Z_Param_LineColor);
	P_GET_STRUCT(FColor,Z_Param_DirectionColor);
	P_GET_STRUCT(FColor,Z_Param_ControlPointColor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LineThickness);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DirectionLength);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LifeTime);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumSamples);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawDebugReferenceLineDetailed(Z_Param_LineColor,Z_Param_DirectionColor,Z_Param_ControlPointColor,Z_Param_LineThickness,Z_Param_DirectionLength,Z_Param_LifeTime,Z_Param_NumSamples);
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function DrawDebugReferenceLineDetailed ***********************

// ********** Begin Class ADynamicRoad Function GetAllEdgeCurves ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_GetAllEdgeCurves_Statics
struct UHT_STATICS
{
	struct DynamicRoad_eventGetAllEdgeCurves_Parms
	{
		TArray<UEdgeCurve*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "Comment", "/**\n\x09 * Returns all edge curves on the road.\n\x09 * @return Array of all edge curves associated with this road\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Returns all edge curves on the road.\n@return Array of all edge curves associated with this road" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllEdgeCurves constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllEdgeCurves constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllEdgeCurves Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventGetAllEdgeCurves_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAllEdgeCurves Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "GetAllEdgeCurves", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoad_eventGetAllEdgeCurves_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoad_eventGetAllEdgeCurves_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoad_GetAllEdgeCurves(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execGetAllEdgeCurves)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UEdgeCurve*>*)Z_Param__Result=P_THIS->GetAllEdgeCurves();
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function GetAllEdgeCurves *************************************

// ********** Begin Class ADynamicRoad Function GetAllLanes ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_GetAllLanes_Statics
struct UHT_STATICS
{
	struct DynamicRoad_eventGetAllLanes_Parms
	{
		TArray<UDynamicRoadLane*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "Comment", "/**\n\x09 * Returns all lanes on the road (both left and right lanes, excluding sidewalks).\n\x09 * @return Array of all driving lanes associated with this road\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Returns all lanes on the road (both left and right lanes, excluding sidewalks).\n@return Array of all driving lanes associated with this road" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllLanes constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllLanes constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllLanes Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDynamicRoadLane, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventGetAllLanes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAllLanes Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "GetAllLanes", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoad_eventGetAllLanes_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoad_eventGetAllLanes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoad_GetAllLanes(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execGetAllLanes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UDynamicRoadLane*>*)Z_Param__Result=P_THIS->GetAllLanes();
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function GetAllLanes ******************************************

// ********** Begin Class ADynamicRoad Function GetClosestEdgeCurveAtLocation **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_GetClosestEdgeCurveAtLocation_Statics
struct UHT_STATICS
{
	struct DynamicRoad_eventGetClosestEdgeCurveAtLocation_Parms
	{
		FVector Location;
		double OutDistanceAlongEdge;
		UEdgeCurve* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "Comment", "/**\n\x09 * Returns the closest edge curve to a given world location and the nearest distance along that edge.\n\x09 * @param Location - World space location to test against\n\x09 * @param OutDistanceAlongEdge - Output: nearest distance along the returned edge curve\n\x09 * @return The closest edge curve to the provided location, or nullptr if none available\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Returns the closest edge curve to a given world location and the nearest distance along that edge.\n@param Location - World space location to test against\n@param OutDistanceAlongEdge - Output: nearest distance along the returned edge curve\n@return The closest edge curve to the provided location, or nullptr if none available" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetClosestEdgeCurveAtLocation constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OutDistanceAlongEdge;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetClosestEdgeCurveAtLocation constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetClosestEdgeCurveAtLocation Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventGetClosestEdgeCurveAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_OutDistanceAlongEdge = { "OutDistanceAlongEdge", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventGetClosestEdgeCurveAtLocation_Parms, OutDistanceAlongEdge), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventGetClosestEdgeCurveAtLocation_Parms, ReturnValue), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutDistanceAlongEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetClosestEdgeCurveAtLocation Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "GetClosestEdgeCurveAtLocation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoad_eventGetClosestEdgeCurveAtLocation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoad_eventGetClosestEdgeCurveAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoad_GetClosestEdgeCurveAtLocation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execGetClosestEdgeCurveAtLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_OutDistanceAlongEdge);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEdgeCurve**)Z_Param__Result=P_THIS->GetClosestEdgeCurveAtLocation(Z_Param_Out_Location,Z_Param_Out_OutDistanceAlongEdge);
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function GetClosestEdgeCurveAtLocation ************************

// ********** Begin Class ADynamicRoad Function GetDistanceAlongEdgeAtLocation *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_GetDistanceAlongEdgeAtLocation_Statics
struct UHT_STATICS
{
	struct DynamicRoad_eventGetDistanceAlongEdgeAtLocation_Parms
	{
		UEdgeCurve* EdgeCurve;
		FVector Location;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "Comment", "// Returns the nearest distance along the specified edge curve to the given world location\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Returns the nearest distance along the specified edge curve to the given world location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDistanceAlongEdgeAtLocation constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EdgeCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDistanceAlongEdgeAtLocation constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDistanceAlongEdgeAtLocation Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_EdgeCurve = { "EdgeCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventGetDistanceAlongEdgeAtLocation_Parms, EdgeCurve), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventGetDistanceAlongEdgeAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventGetDistanceAlongEdgeAtLocation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDistanceAlongEdgeAtLocation Property Definitions *********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "GetDistanceAlongEdgeAtLocation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoad_eventGetDistanceAlongEdgeAtLocation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoad_eventGetDistanceAlongEdgeAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoad_GetDistanceAlongEdgeAtLocation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execGetDistanceAlongEdgeAtLocation)
{
	P_GET_OBJECT(UEdgeCurve,Z_Param_EdgeCurve);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetDistanceAlongEdgeAtLocation(Z_Param_EdgeCurve,Z_Param_Out_Location);
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function GetDistanceAlongEdgeAtLocation ***********************

// ********** Begin Class ADynamicRoad Function GetDistanceAndOffsetAtLocation *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_GetDistanceAndOffsetAtLocation_Statics
struct UHT_STATICS
{
	struct DynamicRoad_eventGetDistanceAndOffsetAtLocation_Parms
	{
		FVector Location;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "Comment", "//Returns both the distance ALONG the curve and the distance FROM the curve at a given world location. Output X is distance, output Y is Offset.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Returns both the distance ALONG the curve and the distance FROM the curve at a given world location. Output X is distance, output Y is Offset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDistanceAndOffsetAtLocation constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDistanceAndOffsetAtLocation constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDistanceAndOffsetAtLocation Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventGetDistanceAndOffsetAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventGetDistanceAndOffsetAtLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDistanceAndOffsetAtLocation Property Definitions *********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "GetDistanceAndOffsetAtLocation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoad_eventGetDistanceAndOffsetAtLocation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoad_eventGetDistanceAndOffsetAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoad_GetDistanceAndOffsetAtLocation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execGetDistanceAndOffsetAtLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetDistanceAndOffsetAtLocation(Z_Param_Out_Location);
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function GetDistanceAndOffsetAtLocation ***********************

// ********** Begin Class ADynamicRoad Function GetElevationAtDistance *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_GetElevationAtDistance_Statics
struct UHT_STATICS
{
	struct DynamicRoad_eventGetElevationAtDistance_Parms
	{
		double Distance;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetElevationAtDistance constinit property declarations ****************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetElevationAtDistance constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetElevationAtDistance Property Definitions ***************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventGetElevationAtDistance_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventGetElevationAtDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetElevationAtDistance Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "GetElevationAtDistance", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoad_eventGetElevationAtDistance_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoad_eventGetElevationAtDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoad_GetElevationAtDistance(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execGetElevationAtDistance)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Distance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetElevationAtDistance(Z_Param_Distance);
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function GetElevationAtDistance *******************************

// ********** Begin Class ADynamicRoad Function GetLaneMidpoint ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_GetLaneMidpoint_Statics
struct UHT_STATICS
{
	struct DynamicRoad_eventGetLaneMidpoint_Parms
	{
		UEdgeCurve* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "Comment", "//Get the midpoint between left and right lanes. This doesn't necessarily follow the reference line, it just has no offset to the left or right unless explicitly set by the user.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Get the midpoint between left and right lanes. This doesn't necessarily follow the reference line, it just has no offset to the left or right unless explicitly set by the user." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLaneMidpoint constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLaneMidpoint constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLaneMidpoint Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventGetLaneMidpoint_Parms, ReturnValue), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetLaneMidpoint Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "GetLaneMidpoint", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoad_eventGetLaneMidpoint_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoad_eventGetLaneMidpoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoad_GetLaneMidpoint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execGetLaneMidpoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEdgeCurve**)Z_Param__Result=P_THIS->GetLaneMidpoint();
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function GetLaneMidpoint **************************************

// ********** Begin Class ADynamicRoad Function GetLength ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_GetLength_Statics
struct UHT_STATICS
{
	struct DynamicRoad_eventGetLength_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "Comment", "// Road data methods\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Road data methods" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLength constinit property declarations *****************************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLength constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLength Property Definitions ****************************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventGetLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetLength Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "GetLength", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoad_eventGetLength_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoad_eventGetLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoad_GetLength(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execGetLength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetLength();
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function GetLength ********************************************

// ********** Begin Class ADynamicRoad Function GetPointLandscapeMirrorHeightOffset ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_GetPointLandscapeMirrorHeightOffset_Statics
struct UHT_STATICS
{
	struct DynamicRoad_eventGetPointLandscapeMirrorHeightOffset_Parms
	{
		int32 PointIndex;
		double OutHeightOffset;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Landscape" },
		{ "Comment", "/**\n\x09 * Gets the mirrored landscape spline height offset for a specific control spline point.\n\x09 * @param PointIndex The index of the control spline point to query\n\x09 * @param OutHeightOffset Output parameter for the mirrored landscape spline height offset in cm\n\x09 * @return True if the query was successful, false if the index was invalid\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Gets the mirrored landscape spline height offset for a specific control spline point.\n@param PointIndex The index of the control spline point to query\n@param OutHeightOffset Output parameter for the mirrored landscape spline height offset in cm\n@return True if the query was successful, false if the index was invalid" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPointLandscapeMirrorHeightOffset constinit property declarations ***
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OutHeightOffset;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DynamicRoad_eventGetPointLandscapeMirrorHeightOffset_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPointLandscapeMirrorHeightOffset constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPointLandscapeMirrorHeightOffset Property Definitions **************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventGetPointLandscapeMirrorHeightOffset_Parms, PointIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_OutHeightOffset = { "OutHeightOffset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventGetPointLandscapeMirrorHeightOffset_Parms, OutHeightOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicRoad_eventGetPointLandscapeMirrorHeightOffset_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutHeightOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPointLandscapeMirrorHeightOffset Property Definitions ****************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "GetPointLandscapeMirrorHeightOffset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoad_eventGetPointLandscapeMirrorHeightOffset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoad_eventGetPointLandscapeMirrorHeightOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoad_GetPointLandscapeMirrorHeightOffset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execGetPointLandscapeMirrorHeightOffset)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_OutHeightOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetPointLandscapeMirrorHeightOffset(Z_Param_PointIndex,Z_Param_Out_OutHeightOffset);
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function GetPointLandscapeMirrorHeightOffset ******************

// ********** Begin Class ADynamicRoad Function GetPointTurnRadius *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_GetPointTurnRadius_Statics
struct UHT_STATICS
{
	struct DynamicRoad_eventGetPointTurnRadius_Parms
	{
		int32 PointIndex;
		double OutTurnRadius;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "Comment", "/**\n\x09 * Gets the turn radius of a specific control spline point.\n\x09 * @param PointIndex The index of the spline point to query\n\x09 * @param OutTurnRadius Output parameter for the turn radius value\n\x09 * @return True if the query was successful, false if the index was invalid\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Gets the turn radius of a specific control spline point.\n@param PointIndex The index of the spline point to query\n@param OutTurnRadius Output parameter for the turn radius value\n@return True if the query was successful, false if the index was invalid" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPointTurnRadius constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OutTurnRadius;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DynamicRoad_eventGetPointTurnRadius_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPointTurnRadius constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPointTurnRadius Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventGetPointTurnRadius_Parms, PointIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_OutTurnRadius = { "OutTurnRadius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventGetPointTurnRadius_Parms, OutTurnRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicRoad_eventGetPointTurnRadius_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutTurnRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPointTurnRadius Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "GetPointTurnRadius", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoad_eventGetPointTurnRadius_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoad_eventGetPointTurnRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoad_GetPointTurnRadius(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execGetPointTurnRadius)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_OutTurnRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetPointTurnRadius(Z_Param_PointIndex,Z_Param_Out_OutTurnRadius);
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function GetPointTurnRadius ***********************************

// ********** Begin Class ADynamicRoad Function GetRoadEdge ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_GetRoadEdge_Statics
struct UHT_STATICS
{
	struct DynamicRoad_eventGetRoadEdge_Parms
	{
		int32 Side;
		UEdgeCurve* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "Comment", "/**\n\x09 *Returns the curve defining the outer edge of the road - 0 for left and 1 for right.\n\x09 *@param Side - 0 returns the left side curve, 1 is right.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Returns the curve defining the outer edge of the road - 0 for left and 1 for right.\n@param Side - 0 returns the left side curve, 1 is right." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRoadEdge constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Side;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRoadEdge constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRoadEdge Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Side = { "Side", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventGetRoadEdge_Parms, Side), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventGetRoadEdge_Parms, ReturnValue), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Side,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetRoadEdge Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "GetRoadEdge", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoad_eventGetRoadEdge_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoad_eventGetRoadEdge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoad_GetRoadEdge(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execGetRoadEdge)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Side);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEdgeCurve**)Z_Param__Result=P_THIS->GetRoadEdge(Z_Param_Side);
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function GetRoadEdge ******************************************

// ********** Begin Class ADynamicRoad Function GetSideAtLocation **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_GetSideAtLocation_Statics
struct UHT_STATICS
{
	struct DynamicRoad_eventGetSideAtLocation_Parms
	{
		FVector Location;
		ERoadSide ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "Comment", "//Determines which side of the LaneMidpoint a given location is nearest to.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Determines which side of the LaneMidpoint a given location is nearest to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSideAtLocation constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSideAtLocation constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSideAtLocation Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventGetSideAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventGetSideAtLocation_Parms, ReturnValue), Z_Construct_UEnum_RoadBLDRuntime_ERoadSide, METADATA_PARAMS(0, nullptr) }; // e372ae13051be4d9afcab83594e1c3193054100d
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSideAtLocation Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "GetSideAtLocation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoad_eventGetSideAtLocation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoad_eventGetSideAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoad_GetSideAtLocation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execGetSideAtLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ERoadSide*)Z_Param__Result=P_THIS->GetSideAtLocation(Z_Param_Out_Location);
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function GetSideAtLocation ************************************

// ********** Begin Class ADynamicRoad Function GetWorldPositionAtDistance *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_GetWorldPositionAtDistance_Statics
struct UHT_STATICS
{
	struct DynamicRoad_eventGetWorldPositionAtDistance_Parms
	{
		double Distance;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "Comment", "// New method to get world position at distance along the road\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "New method to get world position at distance along the road" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetWorldPositionAtDistance constinit property declarations ************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWorldPositionAtDistance constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWorldPositionAtDistance Property Definitions ***********************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventGetWorldPositionAtDistance_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventGetWorldPositionAtDistance_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetWorldPositionAtDistance Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "GetWorldPositionAtDistance", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoad_eventGetWorldPositionAtDistance_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoad_eventGetWorldPositionAtDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoad_GetWorldPositionAtDistance(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execGetWorldPositionAtDistance)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Distance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetWorldPositionAtDistance(Z_Param_Distance);
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function GetWorldPositionAtDistance ***************************

// ********** Begin Class ADynamicRoad Function ReplaceControlSplineFromAuthoringPoints ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_ReplaceControlSplineFromAuthoringPoints_Statics
struct UHT_STATICS
{
	struct DynamicRoad_eventReplaceControlSplineFromAuthoringPoints_Parms
	{
		TArray<FRoadSplineAuthoringPoint> AuthoringPoints;
		FString OutError;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Authoring" },
		{ "Comment", "/**\n\x09 * Atomically replaces the linear control spline after validating all authoring points.\n\x09 * Recalculates the reference line and lane shapes, but does not rebuild the owning road network.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Atomically replaces the linear control spline after validating all authoring points.\nRecalculates the reference line and lane shapes, but does not rebuild the owning road network." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuthoringPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReplaceControlSplineFromAuthoringPoints constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_AuthoringPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AuthoringPoints;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutError;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DynamicRoad_eventReplaceControlSplineFromAuthoringPoints_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReplaceControlSplineFromAuthoringPoints constinit property declarations *
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReplaceControlSplineFromAuthoringPoints Property Definitions **********
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AuthoringPoints_Inner = { "AuthoringPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRoadSplineAuthoringPoint, METADATA_PARAMS(0, nullptr) }; // 9a19d199eebd3bc0e039a2a0032dcdd728723673
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_AuthoringPoints = { "AuthoringPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventReplaceControlSplineFromAuthoringPoints_Parms, AuthoringPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuthoringPoints_MetaData), NewProp_AuthoringPoints_MetaData) }; // 9a19d199eebd3bc0e039a2a0032dcdd728723673
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventReplaceControlSplineFromAuthoringPoints_Parms, OutError), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicRoad_eventReplaceControlSplineFromAuthoringPoints_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AuthoringPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AuthoringPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutError,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ReplaceControlSplineFromAuthoringPoints Property Definitions ************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "ReplaceControlSplineFromAuthoringPoints", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoad_eventReplaceControlSplineFromAuthoringPoints_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoad_eventReplaceControlSplineFromAuthoringPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoad_ReplaceControlSplineFromAuthoringPoints(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execReplaceControlSplineFromAuthoringPoints)
{
	P_GET_TARRAY_REF(FRoadSplineAuthoringPoint,Z_Param_Out_AuthoringPoints);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutError);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReplaceControlSplineFromAuthoringPoints(Z_Param_Out_AuthoringPoints,Z_Param_Out_OutError);
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function ReplaceControlSplineFromAuthoringPoints **************

// ********** Begin Class ADynamicRoad Function UpdateControlPoints ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_UpdateControlPoints_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "Comment", "// Update the ControlPoints array to match the current ControlSpline points\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Update the ControlPoints array to match the current ControlSpline points" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateControlPoints constinit property declarations *******************
// ********** End Function UpdateControlPoints constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "UpdateControlPoints", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ADynamicRoad_UpdateControlPoints(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execUpdateControlPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateControlPoints();
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function UpdateControlPoints **********************************

// ********** Begin Class ADynamicRoad Function UpdateControlSpline ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_UpdateControlSpline_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "Comment", "// Update the ControlSpline component to match the current ControlPoints\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Update the ControlSpline component to match the current ControlPoints" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateControlSpline constinit property declarations *******************
// ********** End Function UpdateControlSpline constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "UpdateControlSpline", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ADynamicRoad_UpdateControlSpline(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execUpdateControlSpline)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateControlSpline();
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function UpdateControlSpline **********************************

// ********** Begin Class ADynamicRoad Function UpdatePointLandscapeMirrorHeightOffset *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_UpdatePointLandscapeMirrorHeightOffset_Statics
struct UHT_STATICS
{
	struct DynamicRoad_eventUpdatePointLandscapeMirrorHeightOffset_Parms
	{
		int32 PointIndex;
		double HeightOffset;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Landscape" },
		{ "Comment", "/**\n\x09 * Updates the mirrored landscape spline height offset for a specific control spline point.\n\x09 * @param PointIndex The index of the control spline point to update\n\x09 * @param HeightOffset The new mirrored landscape spline height offset in cm\n\x09 * @return True if the update was successful, false if the index was invalid\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Updates the mirrored landscape spline height offset for a specific control spline point.\n@param PointIndex The index of the control spline point to update\n@param HeightOffset The new mirrored landscape spline height offset in cm\n@return True if the update was successful, false if the index was invalid" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdatePointLandscapeMirrorHeightOffset constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_HeightOffset;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DynamicRoad_eventUpdatePointLandscapeMirrorHeightOffset_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdatePointLandscapeMirrorHeightOffset constinit property declarations **
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdatePointLandscapeMirrorHeightOffset Property Definitions ***********
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventUpdatePointLandscapeMirrorHeightOffset_Parms, PointIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_HeightOffset = { "HeightOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventUpdatePointLandscapeMirrorHeightOffset_Parms, HeightOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicRoad_eventUpdatePointLandscapeMirrorHeightOffset_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HeightOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UpdatePointLandscapeMirrorHeightOffset Property Definitions *************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "UpdatePointLandscapeMirrorHeightOffset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoad_eventUpdatePointLandscapeMirrorHeightOffset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoad_eventUpdatePointLandscapeMirrorHeightOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoad_UpdatePointLandscapeMirrorHeightOffset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execUpdatePointLandscapeMirrorHeightOffset)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_HeightOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UpdatePointLandscapeMirrorHeightOffset(Z_Param_PointIndex,Z_Param_HeightOffset);
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function UpdatePointLandscapeMirrorHeightOffset ***************

// ********** Begin Class ADynamicRoad Function UpdatePointTurnRadius ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_UpdatePointTurnRadius_Statics
struct UHT_STATICS
{
	struct DynamicRoad_eventUpdatePointTurnRadius_Parms
	{
		int32 PointIndex;
		double TurnRadius;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "Comment", "/**\n\x09 * Updates the turn radius of a specific control spline point and regenerates the road curves and lanes.\n\x09 * @param PointIndex The index of the spline point to update\n\x09 * @param TurnRadius The new turn radius value to set\n\x09 * @return True if the update was successful, false if the index was invalid\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Updates the turn radius of a specific control spline point and regenerates the road curves and lanes.\n@param PointIndex The index of the spline point to update\n@param TurnRadius The new turn radius value to set\n@return True if the update was successful, false if the index was invalid" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdatePointTurnRadius constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TurnRadius;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DynamicRoad_eventUpdatePointTurnRadius_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdatePointTurnRadius constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdatePointTurnRadius Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventUpdatePointTurnRadius_Parms, PointIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_TurnRadius = { "TurnRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoad_eventUpdatePointTurnRadius_Parms, TurnRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicRoad_eventUpdatePointTurnRadius_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TurnRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UpdatePointTurnRadius Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "UpdatePointTurnRadius", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoad_eventUpdatePointTurnRadius_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoad_eventUpdatePointTurnRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoad_UpdatePointTurnRadius(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execUpdatePointTurnRadius)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_TurnRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UpdatePointTurnRadius(Z_Param_PointIndex,Z_Param_TurnRadius);
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function UpdatePointTurnRadius ********************************

// ********** Begin Class ADynamicRoad Function ValidateRoad ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoad_ValidateRoad_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "RoadBLD|Debug" },
		{ "Comment", "// Validation\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Validation" },
	};
#endif // WITH_METADATA

// ********** Begin Function ValidateRoad constinit property declarations **************************
// ********** End Function ValidateRoad constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoad, nullptr, "ValidateRoad", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ADynamicRoad_ValidateRoad(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoad::execValidateRoad)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ValidateRoad();
	P_NATIVE_END;
}
// ********** End Class ADynamicRoad Function ValidateRoad *****************************************

// ********** Begin Class ADynamicRoad *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ADynamicRoad_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ADynamicRoad - A simplified road actor that stores essential road data\n */" },
		{ "IncludePath", "DynamicRoad/DynamicRoad.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "ADynamicRoad - A simplified road actor that stores essential road data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadID_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlPoints_MetaData[] = {
		{ "Comment", "// The primary control points that drive the road's reference line.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "The primary control points that drive the road's reference line." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeCurves_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceLine_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "Comment", "//The reference line is the primary curve that drives the road generation. Think of it as the road's centerline.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "The reference line is the primary curve that drives the road generation. Think of it as the road's centerline." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartSnappedRoad_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndSnappedRoad_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometricCenterline_MetaData[] = {
		{ "Comment", "// Rebuild-derived physical center of the road, calculated by averaging the two outermost edges.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Rebuild-derived physical center of the road, calculated by averaging the two outermost edges." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftLanes_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightLanes_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftSidewalkObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightSidewalkObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftSidewalkPreset_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "RoadBLD|Sidewalks" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightSidewalkPreset_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "RoadBLD|Sidewalks" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlSpline_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "Comment", "// The control spline component for linear point selection and road control\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "The control spline component for linear point selection and road control" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropSpawners_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamps_Inner_MetaData[] = {
		{ "Comment", "// Road stamps (decal marking meshes placed on the road surface)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Road stamps (decal marking meshes placed on the road surface)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamps_MetaData[] = {
		{ "Comment", "// Road stamps (decal marking meshes placed on the road surface)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Road stamps (decal marking meshes placed on the road surface)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseElevation_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementEdgeZOffset_MetaData[] = {
		{ "Category", "RoadBLD|WorldBLD Kit Element" },
		{ "Comment", "// Additional Z offset applied to generated WorldBLD Kit ElementEdges for this road.\n// Typically copied from the road's draw preset during InitializeRoad.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Additional Z offset applied to generated WorldBLD Kit ElementEdges for this road.\nTypically copied from the road's draw preset during InitializeRoad." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadType_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "Comment", "// Road properties\n// The type of road - determines snapping and intersection behavior\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Road properties\nThe type of road - determines snapping and intersection behavior" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLandscapeSplineMirroring_MetaData[] = {
		{ "Category", "RoadBLD|Landscape" },
		{ "Comment", "// If true, automatically creates a Landscape Spline that mirrors this road for non-destructive landscape alignment\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "If true, automatically creates a Landscape Spline that mirrors this road for non-destructive landscape alignment" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConformToLandscape_MetaData[] = {
		{ "Category", "RoadBLD|Landscape" },
		{ "Comment", "// If true, generates the road's vertical profile from landscape height samples without moving XY control points.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "If true, generates the road's vertical profile from landscape height samples without moving XY control points." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeConformSampleInterval_MetaData[] = {
		{ "Category", "RoadBLD|Landscape" },
		{ "ClampMin", "100.0" },
		{ "Comment", "// Distance between generated landscape elevation samples along the road.\n" },
		{ "EditCondition", "bConformToLandscape" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Distance between generated landscape elevation samples along the road." },
		{ "UIMax", "50000.0" },
		{ "UIMin", "500.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeConformHeightOffset_MetaData[] = {
		{ "Category", "RoadBLD|Landscape" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Additional Z clearance applied to landscape-conformed road profile samples.\n" },
		{ "EditCondition", "bConformToLandscape" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Additional Z clearance applied to landscape-conformed road profile samples." },
		{ "UIMax", "200.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverallLandscapeMirrorHeightOffset_MetaData[] = {
		{ "Category", "RoadBLD|Landscape" },
		{ "ClampMax", "5000.0" },
		{ "ClampMin", "-5000.0" },
		{ "Comment", "// Additional mirrored landscape offset (cm) applied uniformly to every point on this road.\n// Positive values push the mirrored spline up, negative values pull it down.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Additional mirrored landscape offset (cm) applied uniformly to every point on this road.\nPositive values push the mirrored spline up, negative values pull it down." },
		{ "UIMax", "500.0" },
		{ "UIMin", "-500.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeFalloffCm_MetaData[] = {
		{ "Category", "RoadBLD|Landscape" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Absolute height-patch falloff (cm). 0 = Width * LandscapeFalloffMultiplier * LandscapeSideFalloffFactor\n// (or the project Landscape Height Falloff when that is set). Clamped by Max Landscape Falloff.\n" },
		{ "DisplayName", "Landscape Falloff (cm)" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Absolute height-patch falloff (cm). 0 = Width * LandscapeFalloffMultiplier * LandscapeSideFalloffFactor\n(or the project Landscape Height Falloff when that is set). Clamped by Max Landscape Falloff." },
		{ "UIMax", "5000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeFalloffMultiplier_MetaData[] = {
		{ "Category", "RoadBLD|Landscape" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "// Controls how gradually the terrain blends from the road to surrounding landscape (multiplier of road width)\n// Higher values create smoother, more gradual transitions. Default is 1.0 (100% of road width)\n" },
		{ "EditCondition", "LandscapeFalloffCm <= 0.0" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Controls how gradually the terrain blends from the road to surrounding landscape (multiplier of road width)\nHigher values create smoother, more gradual transitions. Default is 1.0 (100% of road width)" },
		{ "UIMax", "3.0" },
		{ "UIMin", "0.5" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeEndFalloffMultiplier_MetaData[] = {
		{ "Category", "RoadBLD|Landscape" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.5" },
		{ "Comment", "// Controls the falloff at the endpoints of the landscape spline (multiplier of road width)\n// Higher values create smoother transitions at road endpoints\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Controls the falloff at the endpoints of the landscape spline (multiplier of road width)\nHigher values create smoother transitions at road endpoints" },
		{ "UIMax", "5.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeSideFalloffFactor_MetaData[] = {
		{ "Category", "RoadBLD|Landscape" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "// Additional falloff factor applied to both sides of the road\n// Values greater than 1.0 make the falloff more gradual on both sides\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Additional falloff factor applied to both sides of the road\nValues greater than 1.0 make the falloff more gradual on both sides" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLandscapePaint_MetaData[] = {
		{ "Category", "RoadBLD|Landscape" },
		{ "Comment", "// Enables editor-only landscape paint patches under this road.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Enables editor-only landscape paint patches under this road." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapePaintLayerName_MetaData[] = {
		{ "Category", "RoadBLD|Landscape" },
		{ "Comment", "// Landscape layer painted by RoadBLD when bEnableLandscapePaint is enabled.\n" },
		{ "EditCondition", "bEnableLandscapePaint" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Landscape layer painted by RoadBLD when bEnableLandscapePaint is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapePaintWidthExtension_MetaData[] = {
		{ "Category", "RoadBLD|Landscape" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Additional paint width (cm) beyond the road footprint painted at full strength.\n" },
		{ "EditCondition", "bEnableLandscapePaint" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Additional paint width (cm) beyond the road footprint painted at full strength." },
		{ "UIMax", "1000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapePaintFalloff_MetaData[] = {
		{ "Category", "RoadBLD|Landscape" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Falloff distance (cm) for painted weights outside LandscapePaintWidthExtension.\n" },
		{ "EditCondition", "bEnableLandscapePaint" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Falloff distance (cm) for painted weights outside LandscapePaintWidthExtension." },
		{ "UIMax", "2000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneMidpoint_MetaData[] = {
		{ "Comment", "// Rebuild-derived lane midpoint cache.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Rebuild-derived lane midpoint cache." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRebuiltTransientDerivedDataOnLoad_MetaData[] = {
		{ "Comment", "// Set during PostLoad when live UObject curve caches are missing. The owning network\n// clears this after it hydrates the live caches from a valid store chunk, or after staging a\n// fresh chunk.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Set during PostLoad when live UObject curve caches are missing. The owning network\nclears this after it hydrates the live caches from a valid store chunk, or after staging a\nfresh chunk." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLiveDerivedStateNeedsRecalc_MetaData[] = {
		{ "Comment", "/**\n\x09 * True when the live derived caches exist but cannot be trusted as a rebuild input or a store\n\x09 * source: the store chunk they were hydrated from did not match the current authoring\n\x09 * fingerprint, or it was written from a lossy state (a landscape-conform road without its\n\x09 * sampled profile). Rebuild scoping recalculates such roads with a full CalculateRefLine before\n\x09 * using them, and the committer never stages them. Cleared by CalculateRefLine.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "True when the live derived caches exist but cannot be trusted as a rebuild input or a store\nsource: the store chunk they were hydrated from did not match the current authoring\nfingerprint, or it was written from a lossy state (a landscape-conform road without its\nsampled profile). Rebuild scoping recalculates such roads with a full CalculateRefLine before\nusing them, and the committer never stages them. Cleared by CalculateRefLine." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeConformProfileSampled_MetaData[] = {
		{ "Comment", "/**\n\x09 * True once RefreshLandscapeConformVerticalProfile has run (or a conform profile was hydrated\n\x09 * from the store) since load. While false on a bConformToLandscape road, the vertical profile is\n\x09 * a BaseElevation fallback and must not be meshed or persisted.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "True once RefreshLandscapeConformVerticalProfile has run (or a conform profile was hydrated\nfrom the store) since load. While false on a bConformToLandscape road, the vertical profile is\na BaseElevation fallback and must not be meshed or persisted." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransientPreviewProxy_MetaData[] = {
		{ "Comment", "/** Live Preview Mode proxy for this road. Weak/transient so it never serializes with the road. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Live Preview Mode proxy for this road. Weak/transient so it never serializes with the road." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadModuleObjects_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureVScale_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "//Controls the UV scaling along the road in the V direction.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Controls the UV scaling along the road in the V direction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadPCGGraph_MetaData[] = {
		{ "Category", "RoadBLD|PCG" },
		{ "Comment", "/** Optional PCG graph executed by each generated ARoadGeo influenced by this road. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Optional PCG graph executed by each generated ARoadGeo influenced by this road." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceDrawPreset_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "Comment", "/** Preset used to initialize this road (retained for preset-driven refresh behavior). */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Preset used to initialize this road (retained for preset-driven refresh behavior)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbutmentMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Optional material used for generated bridge abutment walls/caps.\n// Falls back to RoadMaterial when unset.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Optional material used for generated bridge abutment walls/caps.\nFalls back to RoadMaterial when unset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionBlendDistance_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Distance (in Unreal units) over which vertex color blends from intersection (R=1) to road (R=0)\n// Used by road materials to smoothly transition between X-tiling road textures and world-aligned intersection asphalt\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Distance (in Unreal units) over which vertex color blends from intersection (R=1) to road (R=0)\nUsed by road materials to smoothly transition between X-tiling road textures and world-aligned intersection asphalt" },
		{ "UIMax", "5000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadThickness_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Controls the thickness of the road (extrusion downward from the road surface)\n// Set to 0 to disable extrusion\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Controls the thickness of the road (extrusion downward from the road surface)\nSet to 0 to disable extrusion" },
		{ "UIMax", "500.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadCrownHeight_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Height (in Unreal units) of the road crown from edge to peak at the geometric center.\n// Set to 0 to disable the crown and use a flat road surface (also requires runtime crown generation enabled).\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Height (in Unreal units) of the road crown from edge to peak at the geometric center.\nSet to 0 to disable the crown and use a flat road surface (also requires runtime crown generation enabled)." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRoadEdgeDetail_MetaData[] = {
		{ "Category", "RoadBLD|Edge Detail" },
		{ "Comment", "/** When enabled, generates an extra strip of geometry along both outer asphalt edges using RoadEdgeDetailProfile. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "When enabled, generates an extra strip of geometry along both outer asphalt edges using RoadEdgeDetailProfile." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadEdgeDetailMaterial_MetaData[] = {
		{ "Category", "RoadBLD|Edge Detail" },
		{ "Comment", "/** Material for the road edge-detail strip. Falls back to RoadMaterial when unset. */" },
		{ "EditCondition", "bEnableRoadEdgeDetail" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Material for the road edge-detail strip. Falls back to RoadMaterial when unset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadEdgeDetailProfile_MetaData[] = {
		{ "Category", "RoadBLD|Edge Detail" },
		{ "Comment", "/** Cross-section profile swept along the outer asphalt edges. */" },
		{ "EditCondition", "bEnableRoadEdgeDetail" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Cross-section profile swept along the outer asphalt edges." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadEdgeDetailProfileScale_MetaData[] = {
		{ "Category", "RoadBLD|Edge Detail" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Uniform scale applied to the edge-detail profile curve. */" },
		{ "EditCondition", "bEnableRoadEdgeDetail" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Uniform scale applied to the edge-detail profile curve." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadEdgeDetailUScale_MetaData[] = {
		{ "Category", "RoadBLD|Edge Detail" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** UV U-scale for the edge-detail strip (across the profile). */" },
		{ "EditCondition", "bEnableRoadEdgeDetail" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "UV U-scale for the edge-detail strip (across the profile)." },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadEdgeDetailVScale_MetaData[] = {
		{ "Category", "RoadBLD|Edge Detail" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** UV V-scale for the edge-detail strip (along the road). */" },
		{ "EditCondition", "bEnableRoadEdgeDetail" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "UV V-scale for the edge-detail strip (along the road)." },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadEdgeDetailUOffset_MetaData[] = {
		{ "Category", "RoadBLD|Edge Detail" },
		{ "Comment", "/** UV U-offset for the edge-detail strip. */" },
		{ "EditCondition", "bEnableRoadEdgeDetail" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "UV U-offset for the edge-detail strip." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadEdgeDetailVOffset_MetaData[] = {
		{ "Category", "RoadBLD|Edge Detail" },
		{ "Comment", "/** UV V-offset for the edge-detail strip. */" },
		{ "EditCondition", "bEnableRoadEdgeDetail" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "UV V-offset for the edge-detail strip." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadEdgeDetailModuleLeft_MetaData[] = {
		{ "Comment", "/**\n\x09 * Transient edge-detail modules created on the game thread by\n\x09 * RoadModuleGenerationShared::PrepareRoadEdgeDetailModules. Async rebuild stages read these\n\x09 * rather than allocating UObjects or loading the profile curve off the game thread.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Transient edge-detail modules created on the game thread by\nRoadModuleGenerationShared::PrepareRoadEdgeDetailModules. Async rebuild stages read these\nrather than allocating UObjects or loading the profile curve off the game thread." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadEdgeDetailModuleRight_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateAbutments_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "Comment", "// Enables generation of bridge abutment walls for this road.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Enables generation of bridge abutment walls for this road." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbutmentThreshold_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Height threshold above ground used to classify bridge vs non-bridge road sections for abutments.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Height threshold above ground used to classify bridge vs non-bridge road sections for abutments." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BridgeRangeGrowth_MetaData[] = {
		{ "Category", "RoadBLD|Road" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Bridge Range Growth" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Distance (cm) to expand detected bridge ranges at each end.\nCovers approach ramps that are still below the elevation threshold. Set to 0 to disable padding." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutomationParams_MetaData[] = {
		{ "Comment", "// Automation parameters that control optional automated road modifications\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
		{ "ToolTip", "Automation parameters that control optional automated road modifications" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeConformProfileDistances_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeConformProfileElevations_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoad.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ADynamicRoad constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoadID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ControlPoints;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EdgeCurves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EdgeCurves;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReferenceLine;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartSnappedRoad;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndSnappedRoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometricCenterline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftLanes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LeftLanes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightLanes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RightLanes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftSidewalkObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightSidewalkObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LeftSidewalkPreset;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RightSidewalkPreset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlSpline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PropSpawners_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PropSpawners;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Stamps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Stamps;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_BaseElevation;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ElementEdgeZOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RoadType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RoadType;
	static void NewProp_bEnableLandscapeSplineMirroring_SetBit(void* Obj)
	{
		((ADynamicRoad*)Obj)->bEnableLandscapeSplineMirroring = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLandscapeSplineMirroring;
	static void NewProp_bConformToLandscape_SetBit(void* Obj)
	{
		((ADynamicRoad*)Obj)->bConformToLandscape = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConformToLandscape;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LandscapeConformSampleInterval;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LandscapeConformHeightOffset;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OverallLandscapeMirrorHeightOffset;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LandscapeFalloffCm;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LandscapeFalloffMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LandscapeEndFalloffMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LandscapeSideFalloffFactor;
	static void NewProp_bEnableLandscapePaint_SetBit(void* Obj)
	{
		((ADynamicRoad*)Obj)->bEnableLandscapePaint = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLandscapePaint;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LandscapePaintLayerName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LandscapePaintWidthExtension;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LandscapePaintFalloff;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LaneMidpoint;
	static void NewProp_bRebuiltTransientDerivedDataOnLoad_SetBit(void* Obj)
	{
		((ADynamicRoad*)Obj)->bRebuiltTransientDerivedDataOnLoad = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRebuiltTransientDerivedDataOnLoad;
	static void NewProp_bLiveDerivedStateNeedsRecalc_SetBit(void* Obj)
	{
		((ADynamicRoad*)Obj)->bLiveDerivedStateNeedsRecalc = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLiveDerivedStateNeedsRecalc;
	static void NewProp_bLandscapeConformProfileSampled_SetBit(void* Obj)
	{
		((ADynamicRoad*)Obj)->bLandscapeConformProfileSampled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeConformProfileSampled;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TransientPreviewProxy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoadModuleObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoadModuleObjects;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TextureVScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoadMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IntersectionMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoadPCGGraph;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceDrawPreset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbutmentMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IntersectionBlendDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoadThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoadCrownHeight;
	static void NewProp_bEnableRoadEdgeDetail_SetBit(void* Obj)
	{
		((ADynamicRoad*)Obj)->bEnableRoadEdgeDetail = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRoadEdgeDetail;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoadEdgeDetailMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RoadEdgeDetailProfile;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoadEdgeDetailProfileScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoadEdgeDetailUScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoadEdgeDetailVScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoadEdgeDetailUOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoadEdgeDetailVOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoadEdgeDetailModuleLeft;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoadEdgeDetailModuleRight;
	static void NewProp_bGenerateAbutments_SetBit(void* Obj)
	{
		((ADynamicRoad*)Obj)->bGenerateAbutments = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateAbutments;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbutmentThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BridgeRangeGrowth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AutomationParams;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LandscapeConformProfileDistances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LandscapeConformProfileDistances;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LandscapeConformProfileElevations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LandscapeConformProfileElevations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ADynamicRoad constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddLane"), .Pointer = &ADynamicRoad::execAddLane },
		{ .NameUTF8 = UTF8TEXT("AllowsBridgeRoadModules"), .Pointer = &ADynamicRoad::execAllowsBridgeRoadModules },
		{ .NameUTF8 = UTF8TEXT("ApplyCrossSectionEdgeProfiles"), .Pointer = &ADynamicRoad::execApplyCrossSectionEdgeProfiles },
		{ .NameUTF8 = UTF8TEXT("CalculateLaneShapes"), .Pointer = &ADynamicRoad::execCalculateLaneShapes },
		{ .NameUTF8 = UTF8TEXT("CalculateRefLine"), .Pointer = &ADynamicRoad::execCalculateRefLine },
		{ .NameUTF8 = UTF8TEXT("ConvertDistanceBetweenCurves"), .Pointer = &ADynamicRoad::execConvertDistanceBetweenCurves },
		{ .NameUTF8 = UTF8TEXT("CreateRoundabout"), .Pointer = &ADynamicRoad::execCreateRoundabout },
		{ .NameUTF8 = UTF8TEXT("CreateSemicircle"), .Pointer = &ADynamicRoad::execCreateSemicircle },
		{ .NameUTF8 = UTF8TEXT("DrawDebugGeometricCenterline"), .Pointer = &ADynamicRoad::execDrawDebugGeometricCenterline },
		{ .NameUTF8 = UTF8TEXT("DrawDebugReferenceLine"), .Pointer = &ADynamicRoad::execDrawDebugReferenceLine },
		{ .NameUTF8 = UTF8TEXT("DrawDebugReferenceLineDetailed"), .Pointer = &ADynamicRoad::execDrawDebugReferenceLineDetailed },
		{ .NameUTF8 = UTF8TEXT("GetAllEdgeCurves"), .Pointer = &ADynamicRoad::execGetAllEdgeCurves },
		{ .NameUTF8 = UTF8TEXT("GetAllLanes"), .Pointer = &ADynamicRoad::execGetAllLanes },
		{ .NameUTF8 = UTF8TEXT("GetClosestEdgeCurveAtLocation"), .Pointer = &ADynamicRoad::execGetClosestEdgeCurveAtLocation },
		{ .NameUTF8 = UTF8TEXT("GetDistanceAlongEdgeAtLocation"), .Pointer = &ADynamicRoad::execGetDistanceAlongEdgeAtLocation },
		{ .NameUTF8 = UTF8TEXT("GetDistanceAndOffsetAtLocation"), .Pointer = &ADynamicRoad::execGetDistanceAndOffsetAtLocation },
		{ .NameUTF8 = UTF8TEXT("GetElevationAtDistance"), .Pointer = &ADynamicRoad::execGetElevationAtDistance },
		{ .NameUTF8 = UTF8TEXT("GetLaneMidpoint"), .Pointer = &ADynamicRoad::execGetLaneMidpoint },
		{ .NameUTF8 = UTF8TEXT("GetLength"), .Pointer = &ADynamicRoad::execGetLength },
		{ .NameUTF8 = UTF8TEXT("GetPointLandscapeMirrorHeightOffset"), .Pointer = &ADynamicRoad::execGetPointLandscapeMirrorHeightOffset },
		{ .NameUTF8 = UTF8TEXT("GetPointTurnRadius"), .Pointer = &ADynamicRoad::execGetPointTurnRadius },
		{ .NameUTF8 = UTF8TEXT("GetRoadEdge"), .Pointer = &ADynamicRoad::execGetRoadEdge },
		{ .NameUTF8 = UTF8TEXT("GetSideAtLocation"), .Pointer = &ADynamicRoad::execGetSideAtLocation },
		{ .NameUTF8 = UTF8TEXT("GetWorldPositionAtDistance"), .Pointer = &ADynamicRoad::execGetWorldPositionAtDistance },
		{ .NameUTF8 = UTF8TEXT("ReplaceControlSplineFromAuthoringPoints"), .Pointer = &ADynamicRoad::execReplaceControlSplineFromAuthoringPoints },
		{ .NameUTF8 = UTF8TEXT("UpdateControlPoints"), .Pointer = &ADynamicRoad::execUpdateControlPoints },
		{ .NameUTF8 = UTF8TEXT("UpdateControlSpline"), .Pointer = &ADynamicRoad::execUpdateControlSpline },
		{ .NameUTF8 = UTF8TEXT("UpdatePointLandscapeMirrorHeightOffset"), .Pointer = &ADynamicRoad::execUpdatePointLandscapeMirrorHeightOffset },
		{ .NameUTF8 = UTF8TEXT("UpdatePointTurnRadius"), .Pointer = &ADynamicRoad::execUpdatePointTurnRadius },
		{ .NameUTF8 = UTF8TEXT("ValidateRoad"), .Pointer = &ADynamicRoad::execValidateRoad },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADynamicRoad_AddLane, "AddLane" }, // 90d26a54d4866295e9a0200371a61448b043a48e
		{ &Z_Construct_UFunction_ADynamicRoad_AllowsBridgeRoadModules, "AllowsBridgeRoadModules" }, // 42fedd5141368afce1aeb4788df89713a8547497
		{ &Z_Construct_UFunction_ADynamicRoad_ApplyCrossSectionEdgeProfiles, "ApplyCrossSectionEdgeProfiles" }, // 7db2443549f515efeab0ca2f624ca39b82839bc2
		{ &Z_Construct_UFunction_ADynamicRoad_CalculateLaneShapes, "CalculateLaneShapes" }, // 29a7d6420685c9ad0d629d29f45146ebc782ac04
		{ &Z_Construct_UFunction_ADynamicRoad_CalculateRefLine, "CalculateRefLine" }, // 4b506908c893f9aa82393f2506ec9674884f71c6
		{ &Z_Construct_UFunction_ADynamicRoad_ConvertDistanceBetweenCurves, "ConvertDistanceBetweenCurves" }, // 27de067b64c2b75b29b33f18c9eb3a939f3f7588
		{ &Z_Construct_UFunction_ADynamicRoad_CreateRoundabout, "CreateRoundabout" }, // 1afeeca41f9f1c8afd41169c7dd4c66076092a71
		{ &Z_Construct_UFunction_ADynamicRoad_CreateSemicircle, "CreateSemicircle" }, // 1a65882e65bd192d8ec4c6c3a431d692926ef8aa
		{ &Z_Construct_UFunction_ADynamicRoad_DrawDebugGeometricCenterline, "DrawDebugGeometricCenterline" }, // bbc13b1ce68e23775ab328f548eacd7284c56720
		{ &Z_Construct_UFunction_ADynamicRoad_DrawDebugReferenceLine, "DrawDebugReferenceLine" }, // 7d97cf4d55e6fae8d512aef56d5dbf09037e5a19
		{ &Z_Construct_UFunction_ADynamicRoad_DrawDebugReferenceLineDetailed, "DrawDebugReferenceLineDetailed" }, // 64cccc5faf5d59754dedfa427ca94d1daa009c9b
		{ &Z_Construct_UFunction_ADynamicRoad_GetAllEdgeCurves, "GetAllEdgeCurves" }, // f77980bd3065da0b316e9f3a864f5184ac44ef40
		{ &Z_Construct_UFunction_ADynamicRoad_GetAllLanes, "GetAllLanes" }, // e015bebb3f7a7e1e3f9d9d8885aa7f6b392b651d
		{ &Z_Construct_UFunction_ADynamicRoad_GetClosestEdgeCurveAtLocation, "GetClosestEdgeCurveAtLocation" }, // 9afe438cd91a4f79297c24e75e2168f215e98022
		{ &Z_Construct_UFunction_ADynamicRoad_GetDistanceAlongEdgeAtLocation, "GetDistanceAlongEdgeAtLocation" }, // dfbfa5fd03dda0dff33ec30ef0e317e342fa87c3
		{ &Z_Construct_UFunction_ADynamicRoad_GetDistanceAndOffsetAtLocation, "GetDistanceAndOffsetAtLocation" }, // f30199b49ce901251539c3edeffefe84e92a94d6
		{ &Z_Construct_UFunction_ADynamicRoad_GetElevationAtDistance, "GetElevationAtDistance" }, // dc1619e5a9e4121e2300f0be9611d42d36e00c93
		{ &Z_Construct_UFunction_ADynamicRoad_GetLaneMidpoint, "GetLaneMidpoint" }, // 9b8ebcedfa420a64141e1ea690df6baea9f0813e
		{ &Z_Construct_UFunction_ADynamicRoad_GetLength, "GetLength" }, // 7d3de3de7f5df9a6d51d0dec2f6b86943e5f87a0
		{ &Z_Construct_UFunction_ADynamicRoad_GetPointLandscapeMirrorHeightOffset, "GetPointLandscapeMirrorHeightOffset" }, // ea565d593a1fc2f536d824801bb078c4ed0c79d5
		{ &Z_Construct_UFunction_ADynamicRoad_GetPointTurnRadius, "GetPointTurnRadius" }, // 216a25ecb4fc8a816bccfd22309af99fede4dccc
		{ &Z_Construct_UFunction_ADynamicRoad_GetRoadEdge, "GetRoadEdge" }, // b05dc1bc266ee22bcec5b330b4f5b44ef54c0752
		{ &Z_Construct_UFunction_ADynamicRoad_GetSideAtLocation, "GetSideAtLocation" }, // 109f6b83dc9965f30f9e3c17eaa27f65a2460fe0
		{ &Z_Construct_UFunction_ADynamicRoad_GetWorldPositionAtDistance, "GetWorldPositionAtDistance" }, // 74e54409068d628ecca2a7d48a2f583640251a4a
		{ &Z_Construct_UFunction_ADynamicRoad_ReplaceControlSplineFromAuthoringPoints, "ReplaceControlSplineFromAuthoringPoints" }, // 121981b313b7532e0758bcb5445c71a567f3e49f
		{ &Z_Construct_UFunction_ADynamicRoad_UpdateControlPoints, "UpdateControlPoints" }, // 39f7f1bbeb18cd96edb9f2bbe2b3d3db15664a1a
		{ &Z_Construct_UFunction_ADynamicRoad_UpdateControlSpline, "UpdateControlSpline" }, // 5b144d9f7bf628cc95923bce7b483f4b02696bbf
		{ &Z_Construct_UFunction_ADynamicRoad_UpdatePointLandscapeMirrorHeightOffset, "UpdatePointLandscapeMirrorHeightOffset" }, // 3d5ce55cef8640d50321578cd6a0ae4c5d229e7e
		{ &Z_Construct_UFunction_ADynamicRoad_UpdatePointTurnRadius, "UpdatePointTurnRadius" }, // 944b08fd6910d13ff0f8055e883f8c05c372f8ae
		{ &Z_Construct_UFunction_ADynamicRoad_ValidateRoad, "ValidateRoad" }, // f53f0c5a634af433de231c7b99d2c46cb43a9d63
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADynamicRoad>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ADynamicRoad Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RoadID = { "RoadID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, RoadID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadID_MetaData), NewProp_RoadID_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ControlPoints_Inner = { "ControlPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRoadControlPoint, METADATA_PARAMS(0, nullptr) }; // 94f3127379e3d61d64c8d3fef149a9cdbffeb25c
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ControlPoints = { "ControlPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, ControlPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlPoints_MetaData), NewProp_ControlPoints_MetaData) }; // 94f3127379e3d61d64c8d3fef149a9cdbffeb25c
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_EdgeCurves_Inner = { "EdgeCurves", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_EdgeCurves = { "EdgeCurves", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, EdgeCurves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeCurves_MetaData), NewProp_EdgeCurves_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReferenceLine = { "ReferenceLine", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, ReferenceLine), Z_Construct_UClass_UReferenceLine, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferenceLine_MetaData), NewProp_ReferenceLine_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_StartSnappedRoad = { "StartSnappedRoad", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, StartSnappedRoad), Z_Construct_UScriptStruct_FRoadSnap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartSnappedRoad_MetaData), NewProp_StartSnappedRoad_MetaData) }; // 37c8f7af02917e8e9461082051c4257393bb65c5
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EndSnappedRoad = { "EndSnappedRoad", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, EndSnappedRoad), Z_Construct_UScriptStruct_FRoadSnap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndSnappedRoad_MetaData), NewProp_EndSnappedRoad_MetaData) }; // 37c8f7af02917e8e9461082051c4257393bb65c5
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GeometricCenterline = { "GeometricCenterline", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, GeometricCenterline), Z_Construct_UClass_UCurveObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometricCenterline_MetaData), NewProp_GeometricCenterline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LeftLanes_Inner = { "LeftLanes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDynamicRoadLane, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_LeftLanes = { "LeftLanes", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, LeftLanes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftLanes_MetaData), NewProp_LeftLanes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RightLanes_Inner = { "RightLanes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDynamicRoadLane, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RightLanes = { "RightLanes", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, RightLanes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightLanes_MetaData), NewProp_RightLanes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LeftSidewalkObject = { "LeftSidewalkObject", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, LeftSidewalkObject), Z_Construct_UClass_USidewalk, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftSidewalkObject_MetaData), NewProp_LeftSidewalkObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RightSidewalkObject = { "RightSidewalkObject", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, RightSidewalkObject), Z_Construct_UClass_USidewalk, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightSidewalkObject_MetaData), NewProp_RightSidewalkObject_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_LeftSidewalkPreset = { "LeftSidewalkPreset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, LeftSidewalkPreset), Z_Construct_UClass_UClass, Z_Construct_UClass_URoadBLDSidewalkPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftSidewalkPreset_MetaData), NewProp_LeftSidewalkPreset_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_RightSidewalkPreset = { "RightSidewalkPreset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, RightSidewalkPreset), Z_Construct_UClass_UClass, Z_Construct_UClass_URoadBLDSidewalkPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightSidewalkPreset_MetaData), NewProp_RightSidewalkPreset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, SplineComponent), Z_Construct_UClass_UClothoidSplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineComponent_MetaData), NewProp_SplineComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ControlSpline = { "ControlSpline", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, ControlSpline), Z_Construct_UClass_URoadControlSplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlSpline_MetaData), NewProp_ControlSpline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PropSpawners_Inner = { "PropSpawners", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPropSpawner, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PropSpawners = { "PropSpawners", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, PropSpawners), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropSpawners_MetaData), NewProp_PropSpawners_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Stamps_Inner = { "Stamps", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoadStamp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamps_Inner_MetaData), NewProp_Stamps_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Stamps = { "Stamps", nullptr, (EPropertyFlags)0x0114008000000008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, Stamps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamps_MetaData), NewProp_Stamps_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_BaseElevation = { "BaseElevation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, BaseElevation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseElevation_MetaData), NewProp_BaseElevation_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ElementEdgeZOffset = { "ElementEdgeZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, ElementEdgeZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementEdgeZOffset_MetaData), NewProp_ElementEdgeZOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_RoadType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_RoadType = { "RoadType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, RoadType), Z_Construct_UEnum_RoadBLDRuntime_ERoadType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadType_MetaData), NewProp_RoadType_MetaData) }; // d1a9c49971bf5fb1864828d855ba626b043ef6c4
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableLandscapeSplineMirroring = { "bEnableLandscapeSplineMirroring", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ADynamicRoad), &UHT_STATICS::NewProp_bEnableLandscapeSplineMirroring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableLandscapeSplineMirroring_MetaData), NewProp_bEnableLandscapeSplineMirroring_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bConformToLandscape = { "bConformToLandscape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ADynamicRoad), &UHT_STATICS::NewProp_bConformToLandscape_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConformToLandscape_MetaData), NewProp_bConformToLandscape_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_LandscapeConformSampleInterval = { "LandscapeConformSampleInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, LandscapeConformSampleInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeConformSampleInterval_MetaData), NewProp_LandscapeConformSampleInterval_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_LandscapeConformHeightOffset = { "LandscapeConformHeightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, LandscapeConformHeightOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeConformHeightOffset_MetaData), NewProp_LandscapeConformHeightOffset_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_OverallLandscapeMirrorHeightOffset = { "OverallLandscapeMirrorHeightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, OverallLandscapeMirrorHeightOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverallLandscapeMirrorHeightOffset_MetaData), NewProp_OverallLandscapeMirrorHeightOffset_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_LandscapeFalloffCm = { "LandscapeFalloffCm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, LandscapeFalloffCm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeFalloffCm_MetaData), NewProp_LandscapeFalloffCm_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LandscapeFalloffMultiplier = { "LandscapeFalloffMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, LandscapeFalloffMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeFalloffMultiplier_MetaData), NewProp_LandscapeFalloffMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LandscapeEndFalloffMultiplier = { "LandscapeEndFalloffMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, LandscapeEndFalloffMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeEndFalloffMultiplier_MetaData), NewProp_LandscapeEndFalloffMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LandscapeSideFalloffFactor = { "LandscapeSideFalloffFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, LandscapeSideFalloffFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeSideFalloffFactor_MetaData), NewProp_LandscapeSideFalloffFactor_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableLandscapePaint = { "bEnableLandscapePaint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ADynamicRoad), &UHT_STATICS::NewProp_bEnableLandscapePaint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableLandscapePaint_MetaData), NewProp_bEnableLandscapePaint_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_LandscapePaintLayerName = { "LandscapePaintLayerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, LandscapePaintLayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapePaintLayerName_MetaData), NewProp_LandscapePaintLayerName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LandscapePaintWidthExtension = { "LandscapePaintWidthExtension", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, LandscapePaintWidthExtension), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapePaintWidthExtension_MetaData), NewProp_LandscapePaintWidthExtension_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LandscapePaintFalloff = { "LandscapePaintFalloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, LandscapePaintFalloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapePaintFalloff_MetaData), NewProp_LandscapePaintFalloff_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LaneMidpoint = { "LaneMidpoint", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, LaneMidpoint), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneMidpoint_MetaData), NewProp_LaneMidpoint_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRebuiltTransientDerivedDataOnLoad = { "bRebuiltTransientDerivedDataOnLoad", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ADynamicRoad), &UHT_STATICS::NewProp_bRebuiltTransientDerivedDataOnLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRebuiltTransientDerivedDataOnLoad_MetaData), NewProp_bRebuiltTransientDerivedDataOnLoad_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLiveDerivedStateNeedsRecalc = { "bLiveDerivedStateNeedsRecalc", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ADynamicRoad), &UHT_STATICS::NewProp_bLiveDerivedStateNeedsRecalc_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLiveDerivedStateNeedsRecalc_MetaData), NewProp_bLiveDerivedStateNeedsRecalc_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLandscapeConformProfileSampled = { "bLandscapeConformProfileSampled", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ADynamicRoad), &UHT_STATICS::NewProp_bLandscapeConformProfileSampled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeConformProfileSampled_MetaData), NewProp_bLandscapeConformProfileSampled_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams UHT_STATICS::NewProp_TransientPreviewProxy = { "TransientPreviewProxy", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, TransientPreviewProxy), Z_Construct_UClass_ARoadGeo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransientPreviewProxy_MetaData), NewProp_TransientPreviewProxy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoadModuleObjects_Inner = { "RoadModuleObjects", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoadModuleObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RoadModuleObjects = { "RoadModuleObjects", nullptr, (EPropertyFlags)0x0114008000000008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, RoadModuleObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadModuleObjects_MetaData), NewProp_RoadModuleObjects_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_TextureVScale = { "TextureVScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, TextureVScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureVScale_MetaData), NewProp_TextureVScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoadMaterial = { "RoadMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, RoadMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadMaterial_MetaData), NewProp_RoadMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_IntersectionMaterial = { "IntersectionMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, IntersectionMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionMaterial_MetaData), NewProp_IntersectionMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoadPCGGraph = { "RoadPCGGraph", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, RoadPCGGraph), Z_Construct_UClass_UPCGGraph, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadPCGGraph_MetaData), NewProp_RoadPCGGraph_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SourceDrawPreset = { "SourceDrawPreset", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, SourceDrawPreset), Z_Construct_UClass_UDynamicRoadDrawPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceDrawPreset_MetaData), NewProp_SourceDrawPreset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AbutmentMaterial = { "AbutmentMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, AbutmentMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbutmentMaterial_MetaData), NewProp_AbutmentMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_IntersectionBlendDistance = { "IntersectionBlendDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, IntersectionBlendDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionBlendDistance_MetaData), NewProp_IntersectionBlendDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RoadThickness = { "RoadThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, RoadThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadThickness_MetaData), NewProp_RoadThickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RoadCrownHeight = { "RoadCrownHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, RoadCrownHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadCrownHeight_MetaData), NewProp_RoadCrownHeight_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableRoadEdgeDetail = { "bEnableRoadEdgeDetail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ADynamicRoad), &UHT_STATICS::NewProp_bEnableRoadEdgeDetail_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRoadEdgeDetail_MetaData), NewProp_bEnableRoadEdgeDetail_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoadEdgeDetailMaterial = { "RoadEdgeDetailMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, RoadEdgeDetailMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadEdgeDetailMaterial_MetaData), NewProp_RoadEdgeDetailMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_RoadEdgeDetailProfile = { "RoadEdgeDetailProfile", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, RoadEdgeDetailProfile), Z_Construct_UClass_UCurveFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadEdgeDetailProfile_MetaData), NewProp_RoadEdgeDetailProfile_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RoadEdgeDetailProfileScale = { "RoadEdgeDetailProfileScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, RoadEdgeDetailProfileScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadEdgeDetailProfileScale_MetaData), NewProp_RoadEdgeDetailProfileScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RoadEdgeDetailUScale = { "RoadEdgeDetailUScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, RoadEdgeDetailUScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadEdgeDetailUScale_MetaData), NewProp_RoadEdgeDetailUScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RoadEdgeDetailVScale = { "RoadEdgeDetailVScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, RoadEdgeDetailVScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadEdgeDetailVScale_MetaData), NewProp_RoadEdgeDetailVScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RoadEdgeDetailUOffset = { "RoadEdgeDetailUOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, RoadEdgeDetailUOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadEdgeDetailUOffset_MetaData), NewProp_RoadEdgeDetailUOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RoadEdgeDetailVOffset = { "RoadEdgeDetailVOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, RoadEdgeDetailVOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadEdgeDetailVOffset_MetaData), NewProp_RoadEdgeDetailVOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoadEdgeDetailModuleLeft = { "RoadEdgeDetailModuleLeft", nullptr, (EPropertyFlags)0x0114400000282008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, RoadEdgeDetailModuleLeft), Z_Construct_UClass_URoadModuleObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadEdgeDetailModuleLeft_MetaData), NewProp_RoadEdgeDetailModuleLeft_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoadEdgeDetailModuleRight = { "RoadEdgeDetailModuleRight", nullptr, (EPropertyFlags)0x0114400000282008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, RoadEdgeDetailModuleRight), Z_Construct_UClass_URoadModuleObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadEdgeDetailModuleRight_MetaData), NewProp_RoadEdgeDetailModuleRight_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bGenerateAbutments = { "bGenerateAbutments", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ADynamicRoad), &UHT_STATICS::NewProp_bGenerateAbutments_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateAbutments_MetaData), NewProp_bGenerateAbutments_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AbutmentThreshold = { "AbutmentThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, AbutmentThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbutmentThreshold_MetaData), NewProp_AbutmentThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BridgeRangeGrowth = { "BridgeRangeGrowth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, BridgeRangeGrowth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BridgeRangeGrowth_MetaData), NewProp_BridgeRangeGrowth_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AutomationParams = { "AutomationParams", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, AutomationParams), Z_Construct_UScriptStruct_FRoadAutomationParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutomationParams_MetaData), NewProp_AutomationParams_MetaData) }; // e5e2a5f7901d66cbc861515f5de8e9b823d1bc99
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_LandscapeConformProfileDistances_Inner = { "LandscapeConformProfileDistances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_LandscapeConformProfileDistances = { "LandscapeConformProfileDistances", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, LandscapeConformProfileDistances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeConformProfileDistances_MetaData), NewProp_LandscapeConformProfileDistances_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_LandscapeConformProfileElevations_Inner = { "LandscapeConformProfileElevations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_LandscapeConformProfileElevations = { "LandscapeConformProfileElevations", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoad, LandscapeConformProfileElevations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeConformProfileElevations_MetaData), NewProp_LandscapeConformProfileElevations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControlPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControlPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeCurves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReferenceLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartSnappedRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndSnappedRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeometricCenterline,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LeftLanes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LeftLanes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RightLanes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RightLanes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LeftSidewalkObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RightSidewalkObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LeftSidewalkPreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RightSidewalkPreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SplineComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControlSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PropSpawners_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PropSpawners,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Stamps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Stamps,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BaseElevation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ElementEdgeZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableLandscapeSplineMirroring,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bConformToLandscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapeConformSampleInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapeConformHeightOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OverallLandscapeMirrorHeightOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapeFalloffCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapeFalloffMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapeEndFalloffMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapeSideFalloffFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableLandscapePaint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapePaintLayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapePaintWidthExtension,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapePaintFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaneMidpoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRebuiltTransientDerivedDataOnLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLiveDerivedStateNeedsRecalc,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLandscapeConformProfileSampled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TransientPreviewProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadModuleObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadModuleObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextureVScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IntersectionMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadPCGGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceDrawPreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AbutmentMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IntersectionBlendDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadCrownHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableRoadEdgeDetail,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadEdgeDetailMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadEdgeDetailProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadEdgeDetailProfileScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadEdgeDetailUScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadEdgeDetailVScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadEdgeDetailUOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadEdgeDetailVOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadEdgeDetailModuleLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadEdgeDetailModuleRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bGenerateAbutments,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AbutmentThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BridgeRangeGrowth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AutomationParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapeConformProfileDistances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapeConformProfileDistances,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapeConformProfileElevations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapeConformProfileElevations,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ADynamicRoad Property Definitions ******************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ADynamicRoad,
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
static void ADynamicRoad_StaticRegisterNativesADynamicRoad()
{
	UClass* Class = ADynamicRoad::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADynamicRoad;
UClass* Z_Construct_UClass_ADynamicRoad(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ADynamicRoad;
		if (!Z_Registration_Info_UClass_ADynamicRoad.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DynamicRoad"),
				Z_Registration_Info_UClass_ADynamicRoad.InnerSingleton,
				ADynamicRoad_StaticRegisterNativesADynamicRoad,
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
		return Z_Registration_Info_UClass_ADynamicRoad.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ADynamicRoad.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADynamicRoad.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ADynamicRoad.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ADynamicRoad);
ADynamicRoad::~ADynamicRoad() {}
// ********** End Class ADynamicRoad ***************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoad_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FRoadSplineAuthoringPoint, Z_Construct_UScriptStruct_FRoadSplineAuthoringPoint_Statics::NewStructOps, TEXT("RoadSplineAuthoringPoint"),&Z_Registration_Info_UScriptStruct_FRoadSplineAuthoringPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadSplineAuthoringPoint), 2585383321U) },
		{ Z_Construct_UScriptStruct_FRoadCrossSectionEdgeProfile, Z_Construct_UScriptStruct_FRoadCrossSectionEdgeProfile_Statics::NewStructOps, TEXT("RoadCrossSectionEdgeProfile"),&Z_Registration_Info_UScriptStruct_FRoadCrossSectionEdgeProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadCrossSectionEdgeProfile), 2654352243U) },
		{ Z_Construct_UScriptStruct_FRoadControlPoint, Z_Construct_UScriptStruct_FRoadControlPoint_Statics::NewStructOps, TEXT("RoadControlPoint"),&Z_Registration_Info_UScriptStruct_FRoadControlPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadControlPoint), 2498957939U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADynamicRoad, TEXT("ADynamicRoad"), &Z_Registration_Info_UClass_ADynamicRoad, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADynamicRoad), 645377539U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoad_h__Script_RoadBLDRuntime_778940ab07537459469e7ee39bba1ec9560ebcb6{
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
