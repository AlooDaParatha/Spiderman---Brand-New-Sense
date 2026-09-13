// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicRoad/DynamicRoadData.h"
#include "PropSpawner.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDynamicRoadData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UTexture2D(ETypeConstructPhase);
PCG_API UClass* Z_Construct_UClass_UPCGGraph(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadDrawPreset(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicRoadDrawPresetLane(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicRoadDrawPresetMarking(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicRoadDrawPresetModule(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicRoadLaneProfile(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicRoadPresetAutomaticCrossings(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicRoadPresetAutomationDefaults(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_ELaneType(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_ERoadEdge(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_ERoadModulePosition(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_ERoadPresetCategory(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_ERoadSide(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_ERoadType(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_ESegmentBehavior(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ULanePreset(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FLaneSection(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPropSpawnerSettings(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadAutomationParams(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadBLDSidewalkPreset(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadMarkingParameters(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FShoulderMask(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSidewalkPartitionDescriptor(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UCrossingStyle(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadDrawPreset(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ULanePreset(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadBLDSidewalkPreset(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadMarkingParameters(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadModuleObject(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ERoadPresetCategory *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDRuntime_ERoadPresetCategory_Statics
template<> ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ERoadPresetCategory>()
{
	return Z_Construct_UEnum_RoadBLDRuntime_ERoadPresetCategory(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Freeway.Name", "ERoadPresetCategory::Freeway" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "Other.Name", "ERoadPresetCategory::Other" },
		{ "Railway.Name", "ERoadPresetCategory::Railway" },
		{ "Street.Name", "ERoadPresetCategory::Street" },
		{ "Walkway.Name", "ERoadPresetCategory::Walkway" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERoadPresetCategory::Other", (int64)ERoadPresetCategory::Other },
		{ "ERoadPresetCategory::Street", (int64)ERoadPresetCategory::Street },
		{ "ERoadPresetCategory::Freeway", (int64)ERoadPresetCategory::Freeway },
		{ "ERoadPresetCategory::Railway", (int64)ERoadPresetCategory::Railway },
		{ "ERoadPresetCategory::Walkway", (int64)ERoadPresetCategory::Walkway },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	"ERoadPresetCategory",
	"ERoadPresetCategory",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERoadPresetCategory;
UEnum* Z_Construct_UEnum_RoadBLDRuntime_ERoadPresetCategory(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERoadPresetCategory.OuterSingleton)
		{
			ZRIE_ERoadPresetCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDRuntime_ERoadPresetCategory, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("ERoadPresetCategory"));
		}
		return ZRIE_ERoadPresetCategory.OuterSingleton;
	}
	if (!ZRIE_ERoadPresetCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERoadPresetCategory.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERoadPresetCategory.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERoadPresetCategory *********************************************************

// ********** Begin Enum ERoadType *****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDRuntime_ERoadType_Statics
template<> ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ERoadType>()
{
	return Z_Construct_UEnum_RoadBLDRuntime_ERoadType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Defines the type of road for snapping and intersection behavior\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "Normal.Name", "ERoadType::Normal" },
		{ "Other.Name", "ERoadType::Other" },
		{ "Railway.Name", "ERoadType::Railway" },
		{ "ToolTip", "Defines the type of road for snapping and intersection behavior" },
		{ "Walkway.Name", "ERoadType::Walkway" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERoadType::Normal", (int64)ERoadType::Normal },
		{ "ERoadType::Walkway", (int64)ERoadType::Walkway },
		{ "ERoadType::Railway", (int64)ERoadType::Railway },
		{ "ERoadType::Other", (int64)ERoadType::Other },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	"ERoadType",
	"ERoadType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERoadType;
UEnum* Z_Construct_UEnum_RoadBLDRuntime_ERoadType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERoadType.OuterSingleton)
		{
			ZRIE_ERoadType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDRuntime_ERoadType, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("ERoadType"));
		}
		return ZRIE_ERoadType.OuterSingleton;
	}
	if (!ZRIE_ERoadType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERoadType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERoadType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERoadType *******************************************************************

// ********** Begin Enum ERoadSide *****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDRuntime_ERoadSide_Statics
template<> ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ERoadSide>()
{
	return Z_Construct_UEnum_RoadBLDRuntime_ERoadSide(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Helper enum to make selecting a side more clear than remembering 0 equals left and 1 equals right\n" },
		{ "Left.Name", "ERoadSide::Left" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "None.Name", "ERoadSide::None" },
		{ "Right.Name", "ERoadSide::Right" },
		{ "ToolTip", "Helper enum to make selecting a side more clear than remembering 0 equals left and 1 equals right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERoadSide::Left", (int64)ERoadSide::Left },
		{ "ERoadSide::Right", (int64)ERoadSide::Right },
		{ "ERoadSide::None", (int64)ERoadSide::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	"ERoadSide",
	"ERoadSide",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERoadSide;
UEnum* Z_Construct_UEnum_RoadBLDRuntime_ERoadSide(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERoadSide.OuterSingleton)
		{
			ZRIE_ERoadSide.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDRuntime_ERoadSide, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("ERoadSide"));
		}
		return ZRIE_ERoadSide.OuterSingleton;
	}
	if (!ZRIE_ERoadSide.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERoadSide.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERoadSide.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERoadSide *******************************************************************

// ********** Begin Enum ELaneType *****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDRuntime_ELaneType_Statics
template<> ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ELaneType>()
{
	return Z_Construct_UEnum_RoadBLDRuntime_ELaneType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Border.DisplayName", "Border Lane" },
		{ "Border.Name", "ELaneType::Border" },
		{ "CenterTurn.DisplayName", "Center Turn Lane" },
		{ "CenterTurn.Name", "ELaneType::CenterTurn" },
		{ "Median.DisplayName", "Median Lane" },
		{ "Median.Name", "ELaneType::Median" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "None.Comment", "// DEPRECATED: Use USidewalk instead of ELaneType::None lanes for sidewalks\n" },
		{ "None.DisplayName", "Empty lane data (Deprecated)" },
		{ "None.Hidden", "" },
		{ "None.Name", "ELaneType::None" },
		{ "None.ToolTip", "DEPRECATED: Use USidewalk instead of ELaneType::None lanes for sidewalks" },
		{ "Normal.DisplayName", "Normal Driving Lane" },
		{ "Normal.Name", "ELaneType::Normal" },
		{ "Parking.DisplayName", "Street-side parking area" },
		{ "Parking.Name", "ELaneType::Parking" },
		{ "Restricted.DisplayName", "Restricted Lane" },
		{ "Restricted.Name", "ELaneType::Restricted" },
		{ "Shoulder.DisplayName", "Shoulder Lane" },
		{ "Shoulder.Name", "ELaneType::Shoulder" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELaneType::Normal", (int64)ELaneType::Normal },
		{ "ELaneType::None", (int64)ELaneType::None },
		{ "ELaneType::Parking", (int64)ELaneType::Parking },
		{ "ELaneType::Border", (int64)ELaneType::Border },
		{ "ELaneType::Restricted", (int64)ELaneType::Restricted },
		{ "ELaneType::Shoulder", (int64)ELaneType::Shoulder },
		{ "ELaneType::CenterTurn", (int64)ELaneType::CenterTurn },
		{ "ELaneType::Median", (int64)ELaneType::Median },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	"ELaneType",
	"ELaneType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ELaneType;
UEnum* Z_Construct_UEnum_RoadBLDRuntime_ELaneType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ELaneType.OuterSingleton)
		{
			ZRIE_ELaneType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDRuntime_ELaneType, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("ELaneType"));
		}
		return ZRIE_ELaneType.OuterSingleton;
	}
	if (!ZRIE_ELaneType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ELaneType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ELaneType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ELaneType *******************************************************************

// ********** Begin Enum ERoadEdge *****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDRuntime_ERoadEdge_Statics
template<> ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ERoadEdge>()
{
	return Z_Construct_UEnum_RoadBLDRuntime_ERoadEdge(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Centerline.DisplayName", "Attach to the road centerline" },
		{ "Centerline.Name", "ERoadEdge::Centerline" },
		{ "IntersectionEdge.DisplayName", "Attach to the outer edge of an intersection" },
		{ "IntersectionEdge.Name", "ERoadEdge::IntersectionEdge" },
		{ "LaneEdge.DisplayName", "Attach to the edges of lanes, excluding the centerline and outer edges" },
		{ "LaneEdge.Name", "ERoadEdge::LaneEdge" },
		{ "LeftEdge.DisplayName", "Attach to the outer edge of the road on the left hand side" },
		{ "LeftEdge.Name", "ERoadEdge::LeftEdge" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "None.DisplayName", "No Attachment" },
		{ "None.Name", "ERoadEdge::None" },
		{ "RightEdge.DisplayName", "Attach to the outer edge of the road on the right hand side" },
		{ "RightEdge.Name", "ERoadEdge::RightEdge" },
		{ "SingleLane.DisplayName", "Attach to the edge of a single lane" },
		{ "SingleLane.Name", "ERoadEdge::SingleLane" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERoadEdge::None", (int64)ERoadEdge::None },
		{ "ERoadEdge::Centerline", (int64)ERoadEdge::Centerline },
		{ "ERoadEdge::LaneEdge", (int64)ERoadEdge::LaneEdge },
		{ "ERoadEdge::SingleLane", (int64)ERoadEdge::SingleLane },
		{ "ERoadEdge::LeftEdge", (int64)ERoadEdge::LeftEdge },
		{ "ERoadEdge::RightEdge", (int64)ERoadEdge::RightEdge },
		{ "ERoadEdge::IntersectionEdge", (int64)ERoadEdge::IntersectionEdge },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	"ERoadEdge",
	"ERoadEdge",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERoadEdge;
UEnum* Z_Construct_UEnum_RoadBLDRuntime_ERoadEdge(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERoadEdge.OuterSingleton)
		{
			ZRIE_ERoadEdge.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDRuntime_ERoadEdge, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("ERoadEdge"));
		}
		return ZRIE_ERoadEdge.OuterSingleton;
	}
	if (!ZRIE_ERoadEdge.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERoadEdge.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERoadEdge.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERoadEdge *******************************************************************

// ********** Begin Enum ESegmentBehavior **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDRuntime_ESegmentBehavior_Statics
template<> ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ESegmentBehavior>()
{
	return Z_Construct_UEnum_RoadBLDRuntime_ESegmentBehavior(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Defines how lane marking segments should be masked at intersections\n" },
		{ "IgnoreJunctions.DisplayName", "Ignore All Junctions" },
		{ "IgnoreJunctions.Name", "ESegmentBehavior::IgnoreJunctions" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Defines how lane marking segments should be masked at intersections" },
		{ "UseFullMask.DisplayName", "Use Full Intersection Mask" },
		{ "UseFullMask.Name", "ESegmentBehavior::UseFullMask" },
		{ "UseShoulderMask.DisplayName", "Use Shoulder-Only Mask" },
		{ "UseShoulderMask.Name", "ESegmentBehavior::UseShoulderMask" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESegmentBehavior::UseFullMask", (int64)ESegmentBehavior::UseFullMask },
		{ "ESegmentBehavior::UseShoulderMask", (int64)ESegmentBehavior::UseShoulderMask },
		{ "ESegmentBehavior::IgnoreJunctions", (int64)ESegmentBehavior::IgnoreJunctions },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	"ESegmentBehavior",
	"ESegmentBehavior",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ESegmentBehavior;
UEnum* Z_Construct_UEnum_RoadBLDRuntime_ESegmentBehavior(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ESegmentBehavior.OuterSingleton)
		{
			ZRIE_ESegmentBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDRuntime_ESegmentBehavior, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("ESegmentBehavior"));
		}
		return ZRIE_ESegmentBehavior.OuterSingleton;
	}
	if (!ZRIE_ESegmentBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ESegmentBehavior.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ESegmentBehavior.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ESegmentBehavior ************************************************************

// ********** Begin Class URoadMarkingParameters ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoadMarkingParameters_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "DynamicRoad/DynamicRoadData.h" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Road Markings" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureVScale_MetaData[] = {
		{ "Category", "Road Markings" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URoadMarkingParameters constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TextureVScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URoadMarkingParameters constinit property declarations *********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadMarkingParameters>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URoadMarkingParameters Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadMarkingParameters, Material), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_TextureVScale = { "TextureVScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadMarkingParameters, TextureVScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureVScale_MetaData), NewProp_TextureVScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextureVScale,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URoadMarkingParameters Property Definitions ********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoadMarkingParameters,
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
FClassRegistrationInfo Z_Registration_Info_UClass_URoadMarkingParameters;
UClass* Z_Construct_UClass_URoadMarkingParameters(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoadMarkingParameters;
		if (!Z_Registration_Info_UClass_URoadMarkingParameters.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadMarkingParameters"),
				Z_Registration_Info_UClass_URoadMarkingParameters.InnerSingleton,
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
		return Z_Registration_Info_UClass_URoadMarkingParameters.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoadMarkingParameters.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoadMarkingParameters.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoadMarkingParameters.OuterSingleton;
}
#undef UHT_STATICS
URoadMarkingParameters::URoadMarkingParameters(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoadMarkingParameters);
URoadMarkingParameters::~URoadMarkingParameters() {}
// ********** End Class URoadMarkingParameters *****************************************************

// ********** Begin ScriptStruct FDynamicRoadDrawPresetMarking *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDynamicRoadDrawPresetMarking_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDynamicRoadDrawPresetMarking>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDynamicRoadDrawPresetMarking); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkingWidth_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkingMaterial_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeOffset_MetaData[] = {
		{ "Category", "Attachment" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureVScale_MetaData[] = {
		{ "Category", "Attachment" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDynamicRoadDrawPresetMarking constinit property declarations *****
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MarkingWidth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkingMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeOffset;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TextureVScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDynamicRoadDrawPresetMarking constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDynamicRoadDrawPresetMarking>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDynamicRoadDrawPresetMarking Property Definitions ****************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MarkingWidth = { "MarkingWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicRoadDrawPresetMarking, MarkingWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkingWidth_MetaData), NewProp_MarkingWidth_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MarkingMaterial = { "MarkingMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicRoadDrawPresetMarking, MarkingMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkingMaterial_MetaData), NewProp_MarkingMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_EdgeOffset = { "EdgeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicRoadDrawPresetMarking, EdgeOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeOffset_MetaData), NewProp_EdgeOffset_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_TextureVScale = { "TextureVScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicRoadDrawPresetMarking, TextureVScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureVScale_MetaData), NewProp_TextureVScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MarkingWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MarkingMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextureVScale,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDynamicRoadDrawPresetMarking Property Definitions ******************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"DynamicRoadDrawPresetMarking",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDynamicRoadDrawPresetMarking>(),
	alignof(FDynamicRoadDrawPresetMarking),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDynamicRoadDrawPresetMarking;
UScriptStruct* Z_Construct_UScriptStruct_FDynamicRoadDrawPresetMarking(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDynamicRoadDrawPresetMarking.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDynamicRoadDrawPresetMarking.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDynamicRoadDrawPresetMarking, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("DynamicRoadDrawPresetMarking"));
		}
		return Z_Registration_Info_UScriptStruct_FDynamicRoadDrawPresetMarking.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDynamicRoadDrawPresetMarking.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDynamicRoadDrawPresetMarking.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDynamicRoadDrawPresetMarking.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDynamicRoadDrawPresetMarking ***************************************

// ********** Begin ScriptStruct FDynamicRoadLaneProfile *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDynamicRoadLaneProfile_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDynamicRoadLaneProfile>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDynamicRoadLaneProfile); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "//The default width of the lane. You can adjust this later, or widen and narrow the lane at certain points along the road.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "The default width of the lane. You can adjust this later, or widen and narrow the lane at certain points along the road." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "//The type of lane this is. This determines how geometry for it is generated.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "The type of lane this is. This determines how geometry for it is generated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterLaneMarking_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "//This is the marking that appears on the outer edge of this lane. This can be customized later, or you can use multiple markings at different points. Leave blank for no marking.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "This is the marking that appears on the outer edge of this lane. This can be customized later, or you can use multiple markings at different points. Leave blank for no marking." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneOverlayMaterial_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "//Optional overlay material to fill the entire lane with a separate material layer (e.g., for highlighting or special surface types)\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Optional overlay material to fill the entire lane with a separate material layer (e.g., for highlighting or special surface types)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureVScale_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "// UV scaling controls for lane textures\n// TextureVScale controls UV tiling in the longitudinal direction (along the road)\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "UV scaling controls for lane textures\nTextureVScale controls UV tiling in the longitudinal direction (along the road)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureUScale_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "// TextureUScale controls UV tiling in the lateral direction (across the lane width)\n// For sidewalks: controls uniform tiling as width changes\n// For lane overlays: controls tiling across lane width\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "TextureUScale controls UV tiling in the lateral direction (across the lane width)\nFor sidewalks: controls uniform tiling as width changes\nFor lane overlays: controls tiling across lane width" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentBehavior_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "// Controls how lane marking segments should be masked at intersections\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Controls how lane marking segments should be masked at intersections" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDynamicRoadLaneProfile constinit property declarations ***********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OuterLaneMarking;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LaneOverlayMaterial;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TextureVScale;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TextureUScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SegmentBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SegmentBehavior;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDynamicRoadLaneProfile constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDynamicRoadLaneProfile>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDynamicRoadLaneProfile Property Definitions **********************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicRoadLaneProfile, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicRoadLaneProfile, Type), Z_Construct_UEnum_RoadBLDRuntime_ELaneType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 9d17033d2bcb98b8528ecf74831136f6a6528d00
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OuterLaneMarking = { "OuterLaneMarking", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicRoadLaneProfile, OuterLaneMarking), Z_Construct_UScriptStruct_FDynamicRoadDrawPresetMarking, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterLaneMarking_MetaData), NewProp_OuterLaneMarking_MetaData) }; // 94599fce731ca6622b90174c94b08e2dc030d447
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LaneOverlayMaterial = { "LaneOverlayMaterial", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicRoadLaneProfile, LaneOverlayMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneOverlayMaterial_MetaData), NewProp_LaneOverlayMaterial_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_TextureVScale = { "TextureVScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicRoadLaneProfile, TextureVScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureVScale_MetaData), NewProp_TextureVScale_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_TextureUScale = { "TextureUScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicRoadLaneProfile, TextureUScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureUScale_MetaData), NewProp_TextureUScale_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SegmentBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SegmentBehavior = { "SegmentBehavior", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicRoadLaneProfile, SegmentBehavior), Z_Construct_UEnum_RoadBLDRuntime_ESegmentBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentBehavior_MetaData), NewProp_SegmentBehavior_MetaData) }; // 11af432ee0bb9e305f22f5af2d7be72793da907a
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OuterLaneMarking,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaneOverlayMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextureVScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextureUScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SegmentBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SegmentBehavior,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDynamicRoadLaneProfile Property Definitions ************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"DynamicRoadLaneProfile",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDynamicRoadLaneProfile>(),
	alignof(FDynamicRoadLaneProfile),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDynamicRoadLaneProfile;
UScriptStruct* Z_Construct_UScriptStruct_FDynamicRoadLaneProfile(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDynamicRoadLaneProfile.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDynamicRoadLaneProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDynamicRoadLaneProfile, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("DynamicRoadLaneProfile"));
		}
		return Z_Registration_Info_UScriptStruct_FDynamicRoadLaneProfile.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDynamicRoadLaneProfile.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDynamicRoadLaneProfile.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDynamicRoadLaneProfile.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDynamicRoadLaneProfile *********************************************

// ********** Begin ScriptStruct FSidewalkPartitionDescriptor **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FSidewalkPartitionDescriptor_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FSidewalkPartitionDescriptor>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSidewalkPartitionDescriptor); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "Sidewalk Partition" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Width of this partition in centimeters, measured from inner to outer sidewalk edge. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Width of this partition in centimeters, measured from inner to outer sidewalk edge." },
		{ "UIMax", "2000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWalkable_MetaData[] = {
		{ "Category", "Sidewalk Partition" },
		{ "Comment", "/** Whether pedestrian ZoneShapes and other walkability consumers should use this partition. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Whether pedestrian ZoneShapes and other walkability consumers should use this partition." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Sidewalk Partition" },
		{ "Comment", "/** Material used for this partition strip. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Material used for this partition strip." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureVScale_MetaData[] = {
		{ "Category", "Sidewalk Partition" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** UV scale along the road direction for this partition. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "UV scale along the road direction for this partition." },
		{ "UIMax", "10000.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureUScale_MetaData[] = {
		{ "Category", "Sidewalk Partition" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** UV scale across this partition width. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "UV scale across this partition width." },
		{ "UIMax", "10000.0" },
		{ "UIMin", "1.0" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSidewalkPartitionDescriptor constinit property declarations ******
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Width;
	static void NewProp_bWalkable_SetBit(void* Obj)
	{
		((FSidewalkPartitionDescriptor*)Obj)->bWalkable = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWalkable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TextureVScale;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TextureUScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSidewalkPartitionDescriptor constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSidewalkPartitionDescriptor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FSidewalkPartitionDescriptor Property Definitions *****************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FSidewalkPartitionDescriptor, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bWalkable = { "bWalkable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FSidewalkPartitionDescriptor), &UHT_STATICS::NewProp_bWalkable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWalkable_MetaData), NewProp_bWalkable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FSidewalkPartitionDescriptor, Material), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_TextureVScale = { "TextureVScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FSidewalkPartitionDescriptor, TextureVScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureVScale_MetaData), NewProp_TextureVScale_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_TextureUScale = { "TextureUScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FSidewalkPartitionDescriptor, TextureUScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureUScale_MetaData), NewProp_TextureUScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bWalkable,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextureVScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextureUScale,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FSidewalkPartitionDescriptor Property Definitions *******************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"SidewalkPartitionDescriptor",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FSidewalkPartitionDescriptor>(),
	alignof(FSidewalkPartitionDescriptor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSidewalkPartitionDescriptor;
UScriptStruct* Z_Construct_UScriptStruct_FSidewalkPartitionDescriptor(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FSidewalkPartitionDescriptor.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FSidewalkPartitionDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSidewalkPartitionDescriptor, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("SidewalkPartitionDescriptor"));
		}
		return Z_Registration_Info_UScriptStruct_FSidewalkPartitionDescriptor.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FSidewalkPartitionDescriptor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSidewalkPartitionDescriptor.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSidewalkPartitionDescriptor.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FSidewalkPartitionDescriptor ****************************************

// ********** Begin ScriptStruct FDynamicRoadDrawPresetLane ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDynamicRoadDrawPresetLane_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDynamicRoadDrawPresetLane>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDynamicRoadDrawPresetLane); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseWidth_MetaData[] = {
		{ "Category", "Road Preset" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDynamicRoadDrawPresetLane constinit property declarations ********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseWidth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDynamicRoadDrawPresetLane constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDynamicRoadDrawPresetLane>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDynamicRoadDrawPresetLane Property Definitions *******************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BaseWidth = { "BaseWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicRoadDrawPresetLane, BaseWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseWidth_MetaData), NewProp_BaseWidth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BaseWidth,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDynamicRoadDrawPresetLane Property Definitions *********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"DynamicRoadDrawPresetLane",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDynamicRoadDrawPresetLane>(),
	alignof(FDynamicRoadDrawPresetLane),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDynamicRoadDrawPresetLane;
UScriptStruct* Z_Construct_UScriptStruct_FDynamicRoadDrawPresetLane(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDynamicRoadDrawPresetLane.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDynamicRoadDrawPresetLane.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDynamicRoadDrawPresetLane, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("DynamicRoadDrawPresetLane"));
		}
		return Z_Registration_Info_UScriptStruct_FDynamicRoadDrawPresetLane.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDynamicRoadDrawPresetLane.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDynamicRoadDrawPresetLane.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDynamicRoadDrawPresetLane.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDynamicRoadDrawPresetLane ******************************************

// ********** Begin ScriptStruct FDynamicRoadDrawPresetModule **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDynamicRoadDrawPresetModule_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDynamicRoadDrawPresetModule>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDynamicRoadDrawPresetModule); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModulePosition_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleClass_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "DynamicRoad" },
		{ "Comment", "/**\n\x09 * The Road Module class to instantiate when applying this preset.\n\x09 *\n\x09 * The class default object (CDO) should contain the desired default values for\n\x09 * `URoadModuleObject::Parameters`, `StartDistance`, `EndDistance`, etc.\n\x09 *\n\x09 * `ModulePosition` above still exists as an easy per-preset override.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "The Road Module class to instantiate when applying this preset.\n\nThe class default object (CDO) should contain the desired default values for\n`URoadModuleObject::Parameters`, `StartDistance`, `EndDistance`, etc.\n\n`ModulePosition` above still exists as an easy per-preset override." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDynamicRoadDrawPresetModule constinit property declarations ******
	static const UECodeGen_Private::FBytePropertyParams NewProp_ModulePosition_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ModulePosition;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ModuleClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDynamicRoadDrawPresetModule constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDynamicRoadDrawPresetModule>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDynamicRoadDrawPresetModule Property Definitions *****************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ModulePosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ModulePosition = { "ModulePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicRoadDrawPresetModule, ModulePosition), Z_Construct_UEnum_RoadBLDRuntime_ERoadModulePosition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModulePosition_MetaData), NewProp_ModulePosition_MetaData) }; // 46a5dd039144740d887a61f0d80e56230e219841
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ModuleClass = { "ModuleClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicRoadDrawPresetModule, ModuleClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URoadModuleObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleClass_MetaData), NewProp_ModuleClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ModulePosition_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ModulePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ModuleClass,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDynamicRoadDrawPresetModule Property Definitions *******************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"DynamicRoadDrawPresetModule",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDynamicRoadDrawPresetModule>(),
	alignof(FDynamicRoadDrawPresetModule),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDynamicRoadDrawPresetModule;
UScriptStruct* Z_Construct_UScriptStruct_FDynamicRoadDrawPresetModule(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDynamicRoadDrawPresetModule.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDynamicRoadDrawPresetModule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDynamicRoadDrawPresetModule, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("DynamicRoadDrawPresetModule"));
		}
		return Z_Registration_Info_UScriptStruct_FDynamicRoadDrawPresetModule.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDynamicRoadDrawPresetModule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDynamicRoadDrawPresetModule.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDynamicRoadDrawPresetModule.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDynamicRoadDrawPresetModule ****************************************

// ********** Begin ScriptStruct FLaneSection ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FLaneSection_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FLaneSection>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLaneSection); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionStartDistance_MetaData[] = {
		{ "Category", "Lane" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneType_MetaData[] = {
		{ "Category", "Lane" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLaneSection constinit property declarations **********************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SectionStartDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LaneType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LaneType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLaneSection constinit property declarations ************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLaneSection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FLaneSection Property Definitions *********************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_SectionStartDistance = { "SectionStartDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FLaneSection, SectionStartDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionStartDistance_MetaData), NewProp_SectionStartDistance_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_LaneType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_LaneType = { "LaneType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FLaneSection, LaneType), Z_Construct_UEnum_RoadBLDRuntime_ELaneType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneType_MetaData), NewProp_LaneType_MetaData) }; // 9d17033d2bcb98b8528ecf74831136f6a6528d00
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SectionStartDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaneType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaneType,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FLaneSection Property Definitions ***********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"LaneSection",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FLaneSection>(),
	alignof(FLaneSection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLaneSection;
UScriptStruct* Z_Construct_UScriptStruct_FLaneSection(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FLaneSection.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FLaneSection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLaneSection, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("LaneSection"));
		}
		return Z_Registration_Info_UScriptStruct_FLaneSection.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FLaneSection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLaneSection.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLaneSection.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FLaneSection ********************************************************

// ********** Begin ScriptStruct FShoulderMask *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FShoulderMask_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FShoulderMask>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FShoulderMask); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FShoulderMask - Defines a range along an EdgeCurve where lane markings should be masked\n * due to intersection with a shoulder road\n */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "FShoulderMask - Defines a range along an EdgeCurve where lane markings should be masked\ndue to intersection with a shoulder road" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartDistance_MetaData[] = {
		{ "Category", "Shoulder Mask" },
		{ "Comment", "/** Start distance along the EdgeCurve where masking begins */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Start distance along the EdgeCurve where masking begins" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndDistance_MetaData[] = {
		{ "Category", "Shoulder Mask" },
		{ "Comment", "/** End distance along the EdgeCurve where masking ends */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "End distance along the EdgeCurve where masking ends" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FShoulderMask constinit property declarations *********************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StartDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EndDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FShoulderMask constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShoulderMask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FShoulderMask Property Definitions ********************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_StartDistance = { "StartDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FShoulderMask, StartDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartDistance_MetaData), NewProp_StartDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_EndDistance = { "EndDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FShoulderMask, EndDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndDistance_MetaData), NewProp_EndDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndDistance,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FShoulderMask Property Definitions **********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"ShoulderMask",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FShoulderMask>(),
	alignof(FShoulderMask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FShoulderMask;
UScriptStruct* Z_Construct_UScriptStruct_FShoulderMask(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FShoulderMask.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FShoulderMask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShoulderMask, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("ShoulderMask"));
		}
		return Z_Registration_Info_UScriptStruct_FShoulderMask.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FShoulderMask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FShoulderMask.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FShoulderMask.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FShoulderMask *******************************************************

// ********** Begin ScriptStruct FRoadAutomationParams *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRoadAutomationParams_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRoadAutomationParams>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRoadAutomationParams); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSolidLaneMarkingsAtIntersections_MetaData[] = {
		{ "Category", "Automations" },
		{ "Comment", "// Controls whether solid lane markings should be within a given distance of an intersection\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Controls whether solid lane markings should be within a given distance of an intersection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolidLaneMarkingsDistanceThreshold_MetaData[] = {
		{ "Category", "Automations" },
		{ "EditCondition", "bSolidLaneMarkingsAtIntersections" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateRightTurnLaneDecals_MetaData[] = {
		{ "Category", "Automations" },
		{ "Comment", "// Controls whether right turn lane decals should be created at right turn only lanes\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Controls whether right turn lane decals should be created at right turn only lanes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightTurnOnlyDecal_MetaData[] = {
		{ "Category", "Automations" },
		{ "Comment", "// Static mesh decal to use for right turn only lane markings\n" },
		{ "EditCondition", "bCreateRightTurnLaneDecals" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Static mesh decal to use for right turn only lane markings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticStraightOnlyLaneDecals_MetaData[] = {
		{ "Category", "Automations" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StraightOnlyDecal_MetaData[] = {
		{ "Category", "Automations" },
		{ "Comment", "// Static mesh decal to use for straight only lane markings\n" },
		{ "EditCondition", "bAutomaticStraightOnlyLaneDecals" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Static mesh decal to use for straight only lane markings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticLeftTurnOnlyLaneDecals_MetaData[] = {
		{ "Category", "Automations" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftTurnOnlyDecal_MetaData[] = {
		{ "Category", "Automations" },
		{ "EditCondition", "bAutomaticLeftTurnOnlyLaneDecals" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateShoulderMarkingsOnCorners_MetaData[] = {
		{ "Category", "Automations" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticCrosswalks_MetaData[] = {
		{ "Category", "Automations" },
		{ "Comment", "// Controls whether crosswalks should be generated as part of the road mesh at intersections\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Controls whether crosswalks should be generated as part of the road mesh at intersections" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImplicitCrossingStyleClass_MetaData[] = {
		{ "Category", "Automations" },
		{ "Comment", "// Optional style override for implicit mesh crossings.\n" },
		{ "EditCondition", "bAutomaticCrosswalks" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Optional style override for implicit mesh crossings." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRoadAutomationParams constinit property declarations *************
	static void NewProp_bSolidLaneMarkingsAtIntersections_SetBit(void* Obj)
	{
		((FRoadAutomationParams*)Obj)->bSolidLaneMarkingsAtIntersections = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSolidLaneMarkingsAtIntersections;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SolidLaneMarkingsDistanceThreshold;
	static void NewProp_bCreateRightTurnLaneDecals_SetBit(void* Obj)
	{
		((FRoadAutomationParams*)Obj)->bCreateRightTurnLaneDecals = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateRightTurnLaneDecals;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightTurnOnlyDecal;
	static void NewProp_bAutomaticStraightOnlyLaneDecals_SetBit(void* Obj)
	{
		((FRoadAutomationParams*)Obj)->bAutomaticStraightOnlyLaneDecals = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticStraightOnlyLaneDecals;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StraightOnlyDecal;
	static void NewProp_bAutomaticLeftTurnOnlyLaneDecals_SetBit(void* Obj)
	{
		((FRoadAutomationParams*)Obj)->bAutomaticLeftTurnOnlyLaneDecals = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticLeftTurnOnlyLaneDecals;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftTurnOnlyDecal;
	static void NewProp_bCreateShoulderMarkingsOnCorners_SetBit(void* Obj)
	{
		((FRoadAutomationParams*)Obj)->bCreateShoulderMarkingsOnCorners = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateShoulderMarkingsOnCorners;
	static void NewProp_bAutomaticCrosswalks_SetBit(void* Obj)
	{
		((FRoadAutomationParams*)Obj)->bAutomaticCrosswalks = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticCrosswalks;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ImplicitCrossingStyleClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRoadAutomationParams constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadAutomationParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRoadAutomationParams Property Definitions ************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSolidLaneMarkingsAtIntersections = { "bSolidLaneMarkingsAtIntersections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadAutomationParams), &UHT_STATICS::NewProp_bSolidLaneMarkingsAtIntersections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSolidLaneMarkingsAtIntersections_MetaData), NewProp_bSolidLaneMarkingsAtIntersections_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_SolidLaneMarkingsDistanceThreshold = { "SolidLaneMarkingsDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadAutomationParams, SolidLaneMarkingsDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolidLaneMarkingsDistanceThreshold_MetaData), NewProp_SolidLaneMarkingsDistanceThreshold_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCreateRightTurnLaneDecals = { "bCreateRightTurnLaneDecals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadAutomationParams), &UHT_STATICS::NewProp_bCreateRightTurnLaneDecals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateRightTurnLaneDecals_MetaData), NewProp_bCreateRightTurnLaneDecals_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RightTurnOnlyDecal = { "RightTurnOnlyDecal", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadAutomationParams, RightTurnOnlyDecal), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightTurnOnlyDecal_MetaData), NewProp_RightTurnOnlyDecal_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutomaticStraightOnlyLaneDecals = { "bAutomaticStraightOnlyLaneDecals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadAutomationParams), &UHT_STATICS::NewProp_bAutomaticStraightOnlyLaneDecals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutomaticStraightOnlyLaneDecals_MetaData), NewProp_bAutomaticStraightOnlyLaneDecals_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StraightOnlyDecal = { "StraightOnlyDecal", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadAutomationParams, StraightOnlyDecal), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StraightOnlyDecal_MetaData), NewProp_StraightOnlyDecal_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutomaticLeftTurnOnlyLaneDecals = { "bAutomaticLeftTurnOnlyLaneDecals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadAutomationParams), &UHT_STATICS::NewProp_bAutomaticLeftTurnOnlyLaneDecals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutomaticLeftTurnOnlyLaneDecals_MetaData), NewProp_bAutomaticLeftTurnOnlyLaneDecals_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LeftTurnOnlyDecal = { "LeftTurnOnlyDecal", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadAutomationParams, LeftTurnOnlyDecal), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftTurnOnlyDecal_MetaData), NewProp_LeftTurnOnlyDecal_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCreateShoulderMarkingsOnCorners = { "bCreateShoulderMarkingsOnCorners", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadAutomationParams), &UHT_STATICS::NewProp_bCreateShoulderMarkingsOnCorners_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateShoulderMarkingsOnCorners_MetaData), NewProp_bCreateShoulderMarkingsOnCorners_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutomaticCrosswalks = { "bAutomaticCrosswalks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadAutomationParams), &UHT_STATICS::NewProp_bAutomaticCrosswalks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutomaticCrosswalks_MetaData), NewProp_bAutomaticCrosswalks_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ImplicitCrossingStyleClass = { "ImplicitCrossingStyleClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadAutomationParams, ImplicitCrossingStyleClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCrossingStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImplicitCrossingStyleClass_MetaData), NewProp_ImplicitCrossingStyleClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSolidLaneMarkingsAtIntersections,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SolidLaneMarkingsDistanceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCreateRightTurnLaneDecals,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RightTurnOnlyDecal,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutomaticStraightOnlyLaneDecals,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StraightOnlyDecal,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutomaticLeftTurnOnlyLaneDecals,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LeftTurnOnlyDecal,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCreateShoulderMarkingsOnCorners,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutomaticCrosswalks,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ImplicitCrossingStyleClass,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRoadAutomationParams Property Definitions **************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"RoadAutomationParams",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRoadAutomationParams>(),
	alignof(FRoadAutomationParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRoadAutomationParams;
UScriptStruct* Z_Construct_UScriptStruct_FRoadAutomationParams(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRoadAutomationParams.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRoadAutomationParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadAutomationParams, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("RoadAutomationParams"));
		}
		return Z_Registration_Info_UScriptStruct_FRoadAutomationParams.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRoadAutomationParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRoadAutomationParams.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRoadAutomationParams.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRoadAutomationParams ***********************************************

// ********** Begin ScriptStruct FDynamicRoadPresetAutomaticCrossings ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDynamicRoadPresetAutomaticCrossings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDynamicRoadPresetAutomaticCrossings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDynamicRoadPresetAutomaticCrossings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Automatic Crossings" },
		{ "Comment", "// Controls whether automatic crossing generation is enabled when this preset is applied.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Controls whether automatic crossing generation is enabled when this preset is applied." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossingStyleClass_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "Automatic Crossings" },
		{ "Comment", "// Optional style override copied to ADynamicRoad::AutomationParams.ImplicitCrossingStyleClass.\n" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Optional style override copied to ADynamicRoad::AutomationParams.ImplicitCrossingStyleClass." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDynamicRoadPresetAutomaticCrossings constinit property declarations 
	static void NewProp_bEnabled_SetBit(void* Obj)
	{
		((FDynamicRoadPresetAutomaticCrossings*)Obj)->bEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CrossingStyleClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDynamicRoadPresetAutomaticCrossings constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDynamicRoadPresetAutomaticCrossings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDynamicRoadPresetAutomaticCrossings Property Definitions *********
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FDynamicRoadPresetAutomaticCrossings), &UHT_STATICS::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_CrossingStyleClass = { "CrossingStyleClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicRoadPresetAutomaticCrossings, CrossingStyleClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCrossingStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossingStyleClass_MetaData), NewProp_CrossingStyleClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CrossingStyleClass,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDynamicRoadPresetAutomaticCrossings Property Definitions ***********
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"DynamicRoadPresetAutomaticCrossings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDynamicRoadPresetAutomaticCrossings>(),
	alignof(FDynamicRoadPresetAutomaticCrossings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDynamicRoadPresetAutomaticCrossings;
UScriptStruct* Z_Construct_UScriptStruct_FDynamicRoadPresetAutomaticCrossings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDynamicRoadPresetAutomaticCrossings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDynamicRoadPresetAutomaticCrossings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDynamicRoadPresetAutomaticCrossings, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("DynamicRoadPresetAutomaticCrossings"));
		}
		return Z_Registration_Info_UScriptStruct_FDynamicRoadPresetAutomaticCrossings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDynamicRoadPresetAutomaticCrossings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDynamicRoadPresetAutomaticCrossings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDynamicRoadPresetAutomaticCrossings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDynamicRoadPresetAutomaticCrossings ********************************

// ********** Begin ScriptStruct FDynamicRoadPresetAutomationDefaults ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDynamicRoadPresetAutomationDefaults_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDynamicRoadPresetAutomationDefaults>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDynamicRoadPresetAutomationDefaults); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutomaticCrossings_MetaData[] = {
		{ "Category", "Automations" },
		{ "Comment", "// Defaults for automatic crossing generation applied whenever this preset is used.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Defaults for automatic crossing generation applied whenever this preset is used." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDynamicRoadPresetAutomationDefaults constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_AutomaticCrossings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDynamicRoadPresetAutomationDefaults constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDynamicRoadPresetAutomationDefaults>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDynamicRoadPresetAutomationDefaults Property Definitions *********
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AutomaticCrossings = { "AutomaticCrossings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicRoadPresetAutomationDefaults, AutomaticCrossings), Z_Construct_UScriptStruct_FDynamicRoadPresetAutomaticCrossings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutomaticCrossings_MetaData), NewProp_AutomaticCrossings_MetaData) }; // c14fd19a2c947746edfad992e1b12d1818d7d8f0
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AutomaticCrossings,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDynamicRoadPresetAutomationDefaults Property Definitions ***********
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"DynamicRoadPresetAutomationDefaults",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDynamicRoadPresetAutomationDefaults>(),
	alignof(FDynamicRoadPresetAutomationDefaults),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDynamicRoadPresetAutomationDefaults;
UScriptStruct* Z_Construct_UScriptStruct_FDynamicRoadPresetAutomationDefaults(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDynamicRoadPresetAutomationDefaults.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDynamicRoadPresetAutomationDefaults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDynamicRoadPresetAutomationDefaults, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("DynamicRoadPresetAutomationDefaults"));
		}
		return Z_Registration_Info_UScriptStruct_FDynamicRoadPresetAutomationDefaults.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDynamicRoadPresetAutomationDefaults.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDynamicRoadPresetAutomationDefaults.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDynamicRoadPresetAutomationDefaults.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDynamicRoadPresetAutomationDefaults ********************************

// ********** Begin Class UDynamicRoadDrawPreset Function GetSideOptions ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDynamicRoadDrawPreset_GetSideOptions_Statics
struct UHT_STATICS
{
	struct DynamicRoadDrawPreset_eventGetSideOptions_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SpawnSettings\", meta = (ShowOnlyInnerProperties))\n\x09TArray<FDynamicRoadDrawPresetMarking> RoadMarkings;*/" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SpawnSettings\", meta = (ShowOnlyInnerProperties))\n       TArray<FDynamicRoadDrawPresetMarking> RoadMarkings;" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSideOptions constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSideOptions constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSideOptions Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadDrawPreset_eventGetSideOptions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSideOptions Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDynamicRoadDrawPreset, nullptr, "GetSideOptions", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoadDrawPreset_eventGetSideOptions_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoadDrawPreset_eventGetSideOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicRoadDrawPreset_GetSideOptions(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDynamicRoadDrawPreset::execGetSideOptions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UDynamicRoadDrawPreset::GetSideOptions();
	P_NATIVE_END;
}
// ********** End Class UDynamicRoadDrawPreset Function GetSideOptions *****************************

// ********** Begin Class UDynamicRoadDrawPreset ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDynamicRoadDrawPreset_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DynamicRoad/DynamicRoadData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[] = {
		{ "Category", "Road Preset" },
		{ "Comment", "//The human-readable name assigned to this Preset.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "The human-readable name assigned to this Preset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetImage_MetaData[] = {
		{ "Category", "Road Preset" },
		{ "Comment", "//The preview image for this Preset.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "The preview image for this Preset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "Road Preset" },
		{ "Comment", "//The category this Preset falls into.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "The category this Preset falls into." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[] = {
		{ "Category", "Road Preset" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Region this preset belongs to. Use a capitalized English name such as USA, UK, or Germany. Leave unset for Unspecified." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadModules_MetaData[] = {
		{ "Category", "SpawnSettings | Modules" },
		{ "Comment", "/*UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SpawnSettings\", meta = (ShowOnlyInnerProperties))\n\x09TArray<FDynamicRoadDrawPresetLane> Lanes {{600.0, \"Left\"}, {600.0, \"Right\"}}; */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"SpawnSettings\", meta = (ShowOnlyInnerProperties))\n       TArray<FDynamicRoadDrawPresetLane> Lanes {{600.0, \"Left\"}, {600.0, \"Right\"}};" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftLanes_MetaData[] = {
		{ "Category", "SpawnSettings | Lanes" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightLanes_MetaData[] = {
		{ "Category", "SpawnSettings | Lanes" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterlineMarking_MetaData[] = {
		{ "Category", "SpawnSettings | Markings" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterlineSegmentBehavior_MetaData[] = {
		{ "Category", "SpawnSettings | Markings" },
		{ "Comment", "// Controls how centerline marking segments should be masked at intersections\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Controls how centerline marking segments should be masked at intersections" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropSpawners_MetaData[] = {
		{ "Category", "SpawnSettings | Props" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadMaterial_MetaData[] = {
		{ "Category", "SpawnSettings | Materials" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionMaterial_MetaData[] = {
		{ "Category", "SpawnSettings | Materials" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadPCGGraph_MetaData[] = {
		{ "Category", "SpawnSettings | PCG" },
		{ "Comment", "/** Optional PCG graph executed on each generated ARoadGeo for roads using this preset. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Optional PCG graph executed on each generated ARoadGeo for roads using this preset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorTags_MetaData[] = {
		{ "Category", "SpawnSettings | Tags" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Actor tags added to single-road ARoadGeo actors spawned from roads using this preset.\n- Applied when the RoadGeo has exactly one SourceRoad.\n- Not applied to intersection RoadGeos or multi-road shared geometry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbutmentMaterial_MetaData[] = {
		{ "Category", "SpawnSettings | Materials" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Default material for bridge abutment walls/caps on roads created from this preset.\n- If set: copied into ADynamicRoad.AbutmentMaterial during road creation.\n- If unset: abutment meshes use the road material fallback.\n- This is only an initial default; the spawned road can be adjusted later per-instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionBlendDistance_MetaData[] = {
		{ "Category", "SpawnSettings | Materials" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Distance (in Unreal units) over which vertex color blends from intersection (R=1) to road (R=0)\n// Copied to ADynamicRoad::IntersectionBlendDistance during InitializeRoad\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Distance (in Unreal units) over which vertex color blends from intersection (R=1) to road (R=0)\nCopied to ADynamicRoad::IntersectionBlendDistance during InitializeRoad" },
		{ "UIMax", "5000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadCrownHeight_MetaData[] = {
		{ "Category", "SpawnSettings | Cross-Section" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Height of the road crown (edge-to-peak) assigned to roads using this preset.\n// Set to 0 to disable the crown and use a flat road surface.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Height of the road crown (edge-to-peak) assigned to roads using this preset.\nSet to 0 to disable the crown and use a flat road surface." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableRoadThickness_MetaData[] = {
		{ "Category", "SpawnSettings | Cross-Section" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Disable road mesh thickness (extrusion) on roads created from this preset.\n- Enabled: sets ADynamicRoad.RoadThickness to 0 (flat surface mesh only).\n- Disabled: leaves the default road thickness (25 cm).\n- Applied during InitializeRoad (spawn and preset changes)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneMarkingIntersectionOffset_MetaData[] = {
		{ "Category", "SpawnSettings | Advanced | Lane Markings" },
		{ "DisplayName", "Lane Marking Intersection Offset" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Extends or shrinks the intersection mask applied to lane markings (cm).\n- Positive: hide markings earlier, farther from the intersection.\n- Negative: allow markings farther into the intersection.\n- Applies only to markings that use the full intersection mask, not shoulder masks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRoadEdgeDetail_MetaData[] = {
		{ "Category", "SpawnSettings | Advanced | Edge Detail" },
		{ "Comment", "/** Default ON/OFF for road edge-detail strips on roads created from this preset. Off by default. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Default ON/OFF for road edge-detail strips on roads created from this preset. Off by default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadEdgeDetailMaterial_MetaData[] = {
		{ "Category", "SpawnSettings | Advanced | Edge Detail" },
		{ "Comment", "/** Material for the edge-detail strip. Copied to ADynamicRoad::RoadEdgeDetailMaterial. Falls back to RoadMaterial when unset. */" },
		{ "EditCondition", "bEnableRoadEdgeDetail" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Material for the edge-detail strip. Copied to ADynamicRoad::RoadEdgeDetailMaterial. Falls back to RoadMaterial when unset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadEdgeDetailProfile_MetaData[] = {
		{ "Category", "SpawnSettings | Advanced | Edge Detail" },
		{ "Comment", "/** Cross-section profile swept along the outer asphalt edges. */" },
		{ "EditCondition", "bEnableRoadEdgeDetail" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Cross-section profile swept along the outer asphalt edges." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadEdgeDetailProfileScale_MetaData[] = {
		{ "Category", "SpawnSettings | Advanced | Edge Detail" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Uniform scale applied to the edge-detail profile curve. */" },
		{ "EditCondition", "bEnableRoadEdgeDetail" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Uniform scale applied to the edge-detail profile curve." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadEdgeDetailUScale_MetaData[] = {
		{ "Category", "SpawnSettings | Advanced | Edge Detail" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** UV U-scale for the edge-detail strip (across the profile). */" },
		{ "EditCondition", "bEnableRoadEdgeDetail" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "UV U-scale for the edge-detail strip (across the profile)." },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadEdgeDetailVScale_MetaData[] = {
		{ "Category", "SpawnSettings | Advanced | Edge Detail" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** UV V-scale for the edge-detail strip (along the road). */" },
		{ "EditCondition", "bEnableRoadEdgeDetail" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "UV V-scale for the edge-detail strip (along the road)." },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadEdgeDetailUOffset_MetaData[] = {
		{ "Category", "SpawnSettings | Advanced | Edge Detail" },
		{ "Comment", "/** UV U-offset for the edge-detail strip. */" },
		{ "EditCondition", "bEnableRoadEdgeDetail" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "UV U-offset for the edge-detail strip." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadEdgeDetailVOffset_MetaData[] = {
		{ "Category", "SpawnSettings | Advanced | Edge Detail" },
		{ "Comment", "/** UV V-offset for the edge-detail strip. */" },
		{ "EditCondition", "bEnableRoadEdgeDetail" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "UV V-offset for the edge-detail strip." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateAbutments_MetaData[] = {
		{ "Category", "SpawnSettings | Bridge" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Default ON/OFF switch for abutment generation on roads created from this preset.\n- Enabled: spawned roads are allowed to generate abutments (subject to threshold and geometry conditions).\n- Disabled: spawned roads start with abutments disabled.\n- This is a default value only; each road can be toggled later in its own settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbutmentThreshold_MetaData[] = {
		{ "Category", "SpawnSettings | Bridge" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Default abutment classification threshold (in cm) for roads created from this preset.\n- Samples above this height are considered bridge segments for abutment logic.\n- Larger values make bridge detection stricter; smaller values make it more permissive.\n- A value of 0 disables abutment generation.\n- This is copied as an initial value and can be edited later per-road." },
		{ "UIMax", "5000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BridgeRangeGrowth_MetaData[] = {
		{ "Category", "SpawnSettings | Bridge" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Bridge Range Growth" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Default distance (cm) to expand detected bridge ranges at each end on roads created from this preset.\n- Covers approach ramps that are still below the elevation threshold.\n- Copied as an initial value and can be edited later per-road." },
		{ "UIMax", "2000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideLandscapeMirrorHeightOffset_MetaData[] = {
		{ "Category", "SpawnSettings | Landscape" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Override the default landscape mirror Z offset on roads created from this preset.\n- Enabled: copies OverallLandscapeMirrorHeightOffset into ADynamicRoad.\n- Disabled: leaves the road default (5 cm).\n- Applied during InitializeRoad (spawn and preset changes)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverallLandscapeMirrorHeightOffset_MetaData[] = {
		{ "Category", "SpawnSettings | Landscape" },
		{ "ClampMax", "5000.0" },
		{ "ClampMin", "-5000.0" },
		{ "EditCondition", "bOverrideLandscapeMirrorHeightOffset" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Overall landscape mirror Z offset (cm) applied to roads created from this preset.\n- Copied into ADynamicRoad.OverallLandscapeMirrorHeightOffset when override is enabled.\n- Positive values push the mirrored spline up; negative values pull it down.\n- Combined with per-control-point LandscapeMirrorSplineHeightOffset values." },
		{ "UIMax", "500.0" },
		{ "UIMin", "-500.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLandscapePaint_MetaData[] = {
		{ "Category", "SpawnSettings | Landscape Paint" },
		{ "Comment", "// Enables editor-only landscape paint patches beneath roads initialized from this preset.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Enables editor-only landscape paint patches beneath roads initialized from this preset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapePaintLayerName_MetaData[] = {
		{ "Category", "SpawnSettings | Landscape Paint" },
		{ "Comment", "// Target landscape layer name to paint when bEnableLandscapePaint is true.\n" },
		{ "EditCondition", "bEnableLandscapePaint" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Target landscape layer name to paint when bEnableLandscapePaint is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapePaintWidthExtension_MetaData[] = {
		{ "Category", "SpawnSettings | Landscape Paint" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Additional paint width (cm) beyond the road footprint where paint remains at full weight.\n" },
		{ "EditCondition", "bEnableLandscapePaint" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Additional paint width (cm) beyond the road footprint where paint remains at full weight." },
		{ "UIMax", "1000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapePaintFalloff_MetaData[] = {
		{ "Category", "SpawnSettings | Landscape Paint" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Falloff distance (cm) outside LandscapePaintWidthExtension where paint fades to zero.\n" },
		{ "EditCondition", "bEnableLandscapePaint" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Falloff distance (cm) outside LandscapePaintWidthExtension where paint fades to zero." },
		{ "UIMax", "2000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAutomations_MetaData[] = {
		{ "Category", "SpawnSettings | Automations" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Default automation settings for roads using this preset.\n- Applied whenever ADynamicRoad::InitializeRoad runs with this preset (including road spawn and preset changes).\n- Each automation has independent settings so future automations can add their own parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftSidewalkPresetClass_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "Sidewalks" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightSidewalkPresetClass_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "Sidewalks" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementEdgeZOffset_MetaData[] = {
		{ "Category", "Advanced | WorldBLD Kit Element" },
		{ "Comment", "// Additional Z offset applied to the edges of this road - therefore any CityBLD blocks created from this road will have the same Z offset.\n// Useful to avoid z-fighting or ensure tool interaction edges sit above the road surface.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Additional Z offset applied to the edges of this road - therefore any CityBLD blocks created from this road will have the same Z offset.\nUseful to avoid z-fighting or ensure tool interaction edges sit above the road surface." },
	};
#endif // WITH_METADATA

// ********** Begin Class UDynamicRoadDrawPreset constinit property declarations *******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_PresetName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PresetImage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Category;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Region;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoadModules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoadModules;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftLanes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LeftLanes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightLanes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RightLanes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CenterlineMarking;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CenterlineSegmentBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CenterlineSegmentBehavior;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PropSpawners_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PropSpawners;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoadMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IntersectionMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoadPCGGraph;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActorTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbutmentMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IntersectionBlendDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoadCrownHeight;
	static void NewProp_bDisableRoadThickness_SetBit(void* Obj)
	{
		((UDynamicRoadDrawPreset*)Obj)->bDisableRoadThickness = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableRoadThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaneMarkingIntersectionOffset;
	static void NewProp_bEnableRoadEdgeDetail_SetBit(void* Obj)
	{
		((UDynamicRoadDrawPreset*)Obj)->bEnableRoadEdgeDetail = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRoadEdgeDetail;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoadEdgeDetailMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RoadEdgeDetailProfile;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoadEdgeDetailProfileScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoadEdgeDetailUScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoadEdgeDetailVScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoadEdgeDetailUOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoadEdgeDetailVOffset;
	static void NewProp_bGenerateAbutments_SetBit(void* Obj)
	{
		((UDynamicRoadDrawPreset*)Obj)->bGenerateAbutments = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateAbutments;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbutmentThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BridgeRangeGrowth;
	static void NewProp_bOverrideLandscapeMirrorHeightOffset_SetBit(void* Obj)
	{
		((UDynamicRoadDrawPreset*)Obj)->bOverrideLandscapeMirrorHeightOffset = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLandscapeMirrorHeightOffset;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OverallLandscapeMirrorHeightOffset;
	static void NewProp_bEnableLandscapePaint_SetBit(void* Obj)
	{
		((UDynamicRoadDrawPreset*)Obj)->bEnableLandscapePaint = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLandscapePaint;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LandscapePaintLayerName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LandscapePaintWidthExtension;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LandscapePaintFalloff;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultAutomations;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LeftSidewalkPresetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RightSidewalkPresetClass;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ElementEdgeZOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDynamicRoadDrawPreset constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetSideOptions"), .Pointer = &UDynamicRoadDrawPreset::execGetSideOptions },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDynamicRoadDrawPreset_GetSideOptions, "GetSideOptions" }, // 5584f0a2b36b31ce1eab90384f0fb5a7ab04e2f9
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicRoadDrawPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UDynamicRoadDrawPreset Property Definitions ******************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, PresetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetName_MetaData), NewProp_PresetName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PresetImage = { "PresetImage", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, PresetImage), Z_Construct_UClass_UTexture2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetImage_MetaData), NewProp_PresetImage_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, Category), Z_Construct_UEnum_RoadBLDRuntime_ERoadPresetCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) }; // 04415f77d4e77bc9483942bfa13b28d588ef5de2
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, Region), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Region_MetaData), NewProp_Region_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RoadModules_Inner = { "RoadModules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDynamicRoadDrawPresetModule, METADATA_PARAMS(0, nullptr) }; // 4f1f38115642936df62a0ed140b668b36c5ef30a
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RoadModules = { "RoadModules", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, RoadModules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadModules_MetaData), NewProp_RoadModules_MetaData) }; // 4f1f38115642936df62a0ed140b668b36c5ef30a
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LeftLanes_Inner = { "LeftLanes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDynamicRoadLaneProfile, METADATA_PARAMS(0, nullptr) }; // 4d067be417e094fa52171a1b284cf0fc195cd630
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_LeftLanes = { "LeftLanes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, LeftLanes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftLanes_MetaData), NewProp_LeftLanes_MetaData) }; // 4d067be417e094fa52171a1b284cf0fc195cd630
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RightLanes_Inner = { "RightLanes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDynamicRoadLaneProfile, METADATA_PARAMS(0, nullptr) }; // 4d067be417e094fa52171a1b284cf0fc195cd630
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RightLanes = { "RightLanes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, RightLanes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightLanes_MetaData), NewProp_RightLanes_MetaData) }; // 4d067be417e094fa52171a1b284cf0fc195cd630
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CenterlineMarking = { "CenterlineMarking", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, CenterlineMarking), Z_Construct_UScriptStruct_FDynamicRoadDrawPresetMarking, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterlineMarking_MetaData), NewProp_CenterlineMarking_MetaData) }; // 94599fce731ca6622b90174c94b08e2dc030d447
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CenterlineSegmentBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CenterlineSegmentBehavior = { "CenterlineSegmentBehavior", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, CenterlineSegmentBehavior), Z_Construct_UEnum_RoadBLDRuntime_ESegmentBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterlineSegmentBehavior_MetaData), NewProp_CenterlineSegmentBehavior_MetaData) }; // 11af432ee0bb9e305f22f5af2d7be72793da907a
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PropSpawners_Inner = { "PropSpawners", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPropSpawnerSettings, METADATA_PARAMS(0, nullptr) }; // 265d8fda6cb7eefd411dafd098c08daf6b6ffd6c
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PropSpawners = { "PropSpawners", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, PropSpawners), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropSpawners_MetaData), NewProp_PropSpawners_MetaData) }; // 265d8fda6cb7eefd411dafd098c08daf6b6ffd6c
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoadMaterial = { "RoadMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, RoadMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadMaterial_MetaData), NewProp_RoadMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_IntersectionMaterial = { "IntersectionMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, IntersectionMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionMaterial_MetaData), NewProp_IntersectionMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoadPCGGraph = { "RoadPCGGraph", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, RoadPCGGraph), Z_Construct_UClass_UPCGGraph, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadPCGGraph_MetaData), NewProp_RoadPCGGraph_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ActorTags_Inner = { "ActorTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ActorTags = { "ActorTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, ActorTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorTags_MetaData), NewProp_ActorTags_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AbutmentMaterial = { "AbutmentMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, AbutmentMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbutmentMaterial_MetaData), NewProp_AbutmentMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_IntersectionBlendDistance = { "IntersectionBlendDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, IntersectionBlendDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionBlendDistance_MetaData), NewProp_IntersectionBlendDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RoadCrownHeight = { "RoadCrownHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, RoadCrownHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadCrownHeight_MetaData), NewProp_RoadCrownHeight_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDisableRoadThickness = { "bDisableRoadThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDynamicRoadDrawPreset), &UHT_STATICS::NewProp_bDisableRoadThickness_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableRoadThickness_MetaData), NewProp_bDisableRoadThickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LaneMarkingIntersectionOffset = { "LaneMarkingIntersectionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, LaneMarkingIntersectionOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneMarkingIntersectionOffset_MetaData), NewProp_LaneMarkingIntersectionOffset_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableRoadEdgeDetail = { "bEnableRoadEdgeDetail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDynamicRoadDrawPreset), &UHT_STATICS::NewProp_bEnableRoadEdgeDetail_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRoadEdgeDetail_MetaData), NewProp_bEnableRoadEdgeDetail_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoadEdgeDetailMaterial = { "RoadEdgeDetailMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, RoadEdgeDetailMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadEdgeDetailMaterial_MetaData), NewProp_RoadEdgeDetailMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_RoadEdgeDetailProfile = { "RoadEdgeDetailProfile", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, RoadEdgeDetailProfile), Z_Construct_UClass_UCurveFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadEdgeDetailProfile_MetaData), NewProp_RoadEdgeDetailProfile_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RoadEdgeDetailProfileScale = { "RoadEdgeDetailProfileScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, RoadEdgeDetailProfileScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadEdgeDetailProfileScale_MetaData), NewProp_RoadEdgeDetailProfileScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RoadEdgeDetailUScale = { "RoadEdgeDetailUScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, RoadEdgeDetailUScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadEdgeDetailUScale_MetaData), NewProp_RoadEdgeDetailUScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RoadEdgeDetailVScale = { "RoadEdgeDetailVScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, RoadEdgeDetailVScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadEdgeDetailVScale_MetaData), NewProp_RoadEdgeDetailVScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RoadEdgeDetailUOffset = { "RoadEdgeDetailUOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, RoadEdgeDetailUOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadEdgeDetailUOffset_MetaData), NewProp_RoadEdgeDetailUOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RoadEdgeDetailVOffset = { "RoadEdgeDetailVOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, RoadEdgeDetailVOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadEdgeDetailVOffset_MetaData), NewProp_RoadEdgeDetailVOffset_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bGenerateAbutments = { "bGenerateAbutments", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDynamicRoadDrawPreset), &UHT_STATICS::NewProp_bGenerateAbutments_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateAbutments_MetaData), NewProp_bGenerateAbutments_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AbutmentThreshold = { "AbutmentThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, AbutmentThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbutmentThreshold_MetaData), NewProp_AbutmentThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BridgeRangeGrowth = { "BridgeRangeGrowth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, BridgeRangeGrowth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BridgeRangeGrowth_MetaData), NewProp_BridgeRangeGrowth_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bOverrideLandscapeMirrorHeightOffset = { "bOverrideLandscapeMirrorHeightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDynamicRoadDrawPreset), &UHT_STATICS::NewProp_bOverrideLandscapeMirrorHeightOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideLandscapeMirrorHeightOffset_MetaData), NewProp_bOverrideLandscapeMirrorHeightOffset_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_OverallLandscapeMirrorHeightOffset = { "OverallLandscapeMirrorHeightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, OverallLandscapeMirrorHeightOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverallLandscapeMirrorHeightOffset_MetaData), NewProp_OverallLandscapeMirrorHeightOffset_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableLandscapePaint = { "bEnableLandscapePaint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDynamicRoadDrawPreset), &UHT_STATICS::NewProp_bEnableLandscapePaint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableLandscapePaint_MetaData), NewProp_bEnableLandscapePaint_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_LandscapePaintLayerName = { "LandscapePaintLayerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, LandscapePaintLayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapePaintLayerName_MetaData), NewProp_LandscapePaintLayerName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LandscapePaintWidthExtension = { "LandscapePaintWidthExtension", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, LandscapePaintWidthExtension), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapePaintWidthExtension_MetaData), NewProp_LandscapePaintWidthExtension_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LandscapePaintFalloff = { "LandscapePaintFalloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, LandscapePaintFalloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapePaintFalloff_MetaData), NewProp_LandscapePaintFalloff_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DefaultAutomations = { "DefaultAutomations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, DefaultAutomations), Z_Construct_UScriptStruct_FDynamicRoadPresetAutomationDefaults, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAutomations_MetaData), NewProp_DefaultAutomations_MetaData) }; // cc8885111addab86ce8ab022ca85df6f3fb02c06
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_LeftSidewalkPresetClass = { "LeftSidewalkPresetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, LeftSidewalkPresetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URoadBLDSidewalkPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftSidewalkPresetClass_MetaData), NewProp_LeftSidewalkPresetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_RightSidewalkPresetClass = { "RightSidewalkPresetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, RightSidewalkPresetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URoadBLDSidewalkPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightSidewalkPresetClass_MetaData), NewProp_RightSidewalkPresetClass_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ElementEdgeZOffset = { "ElementEdgeZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawPreset, ElementEdgeZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementEdgeZOffset_MetaData), NewProp_ElementEdgeZOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PresetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PresetImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Category_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Region,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadModules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadModules,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LeftLanes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LeftLanes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RightLanes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RightLanes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CenterlineMarking,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CenterlineSegmentBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CenterlineSegmentBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PropSpawners_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PropSpawners,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IntersectionMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadPCGGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActorTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActorTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AbutmentMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IntersectionBlendDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadCrownHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDisableRoadThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaneMarkingIntersectionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableRoadEdgeDetail,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadEdgeDetailMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadEdgeDetailProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadEdgeDetailProfileScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadEdgeDetailUScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadEdgeDetailVScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadEdgeDetailUOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadEdgeDetailVOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bGenerateAbutments,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AbutmentThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BridgeRangeGrowth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bOverrideLandscapeMirrorHeightOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OverallLandscapeMirrorHeightOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableLandscapePaint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapePaintLayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapePaintWidthExtension,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapePaintFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultAutomations,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LeftSidewalkPresetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RightSidewalkPresetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ElementEdgeZOffset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UDynamicRoadDrawPreset Property Definitions ********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDynamicRoadDrawPreset,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UDynamicRoadDrawPreset_StaticRegisterNativesUDynamicRoadDrawPreset()
{
	UClass* Class = UDynamicRoadDrawPreset::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDynamicRoadDrawPreset;
UClass* Z_Construct_UClass_UDynamicRoadDrawPreset(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDynamicRoadDrawPreset;
		if (!Z_Registration_Info_UClass_UDynamicRoadDrawPreset.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DynamicRoadDrawPreset"),
				Z_Registration_Info_UClass_UDynamicRoadDrawPreset.InnerSingleton,
				UDynamicRoadDrawPreset_StaticRegisterNativesUDynamicRoadDrawPreset,
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
		return Z_Registration_Info_UClass_UDynamicRoadDrawPreset.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDynamicRoadDrawPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicRoadDrawPreset.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDynamicRoadDrawPreset.OuterSingleton;
}
#undef UHT_STATICS
UDynamicRoadDrawPreset::UDynamicRoadDrawPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDynamicRoadDrawPreset);
UDynamicRoadDrawPreset::~UDynamicRoadDrawPreset() {}
// ********** End Class UDynamicRoadDrawPreset *****************************************************

// ********** Begin Class ULanePreset **************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ULanePreset_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DynamicRoad/DynamicRoadData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneType_MetaData[] = {
		{ "Category", "Lane Settings" },
		{ "Comment", "//The type to assign to this lane. The type you set determines how the lane behaves.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "The type to assign to this lane. The type you set determines how the lane behaves." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Lane Settings" },
		{ "Comment", "//The material to use for this lane. Optional for driving lanes, required for sidewalks.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "The material to use for this lane. Optional for driving lanes, required for sidewalks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SidewalkPartitions_MetaData[] = {
		{ "Category", "Sidewalk Settings" },
		{ "Comment", "/** Optional partition definitions used by USidewalk lanes (inner-to-outer ordering). */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Optional partition definitions used by USidewalk lanes (inner-to-outer ordering)." },
	};
#endif // WITH_METADATA

// ********** Begin Class ULanePreset constinit property declarations ******************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_LaneType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LaneType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SidewalkPartitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SidewalkPartitions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ULanePreset constinit property declarations ********************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULanePreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ULanePreset Property Definitions *****************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_LaneType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_LaneType = { "LaneType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(ULanePreset, LaneType), Z_Construct_UEnum_RoadBLDRuntime_ELaneType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneType_MetaData), NewProp_LaneType_MetaData) }; // 9d17033d2bcb98b8528ecf74831136f6a6528d00
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ULanePreset, Material), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SidewalkPartitions_Inner = { "SidewalkPartitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSidewalkPartitionDescriptor, METADATA_PARAMS(0, nullptr) }; // 7c1c5ca88f7ae153e61685f9d8e224019a24f3ec
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SidewalkPartitions = { "SidewalkPartitions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ULanePreset, SidewalkPartitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SidewalkPartitions_MetaData), NewProp_SidewalkPartitions_MetaData) }; // 7c1c5ca88f7ae153e61685f9d8e224019a24f3ec
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaneType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaneType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SidewalkPartitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SidewalkPartitions,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ULanePreset Property Definitions *******************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ULanePreset,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_ULanePreset;
UClass* Z_Construct_UClass_ULanePreset(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ULanePreset;
		if (!Z_Registration_Info_UClass_ULanePreset.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("LanePreset"),
				Z_Registration_Info_UClass_ULanePreset.InnerSingleton,
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
		return Z_Registration_Info_UClass_ULanePreset.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ULanePreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULanePreset.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ULanePreset.OuterSingleton;
}
#undef UHT_STATICS
ULanePreset::ULanePreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULanePreset);
ULanePreset::~ULanePreset() {}
// ********** End Class ULanePreset ****************************************************************

// ********** Begin Class URoadBLDSidewalkPreset ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoadBLDSidewalkPreset_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * URoadBLDSidewalkPreset - Preset for configuring sidewalk properties.\n * Assign a Blueprint subclass of this to ADynamicRoad::LeftSidewalkPreset / RightSidewalkPreset\n * or UDynamicRoadDrawPreset::LeftSidewalkPresetClass / RightSidewalkPresetClass.\n */" },
		{ "IncludePath", "DynamicRoad/DynamicRoadData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "URoadBLDSidewalkPreset - Preset for configuring sidewalk properties.\nAssign a Blueprint subclass of this to ADynamicRoad::LeftSidewalkPreset / RightSidewalkPreset\nor UDynamicRoadDrawPreset::LeftSidewalkPresetClass / RightSidewalkPresetClass." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Sidewalk Settings" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CornerMaterial_MetaData[] = {
		{ "Category", "Sidewalk Settings" },
		{ "Comment", "/** When set, flat USidewalk strips on intersection corner segments use this instead of Material. */" },
		{ "DisplayName", "Corner Material" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "When set, flat USidewalk strips on intersection corner segments use this instead of Material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "Sidewalk Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Default sidewalk width (in cm) used by roads that reference this sidewalk preset.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Default sidewalk width (in cm) used by roads that reference this sidewalk preset." },
		{ "UIMax", "2000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurbClass_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "Sidewalk Settings" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOffset_MetaData[] = {
		{ "Category", "Sidewalk Settings" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurbCutLowerAmount_MetaData[] = {
		{ "Category", "Sidewalk Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Maximum curb-cut lowering (cm) applied around FlattenSidewalks interaction volumes. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Maximum curb-cut lowering (cm) applied around FlattenSidewalks interaction volumes." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurbCutMaterial_MetaData[] = {
		{ "Category", "Sidewalk Settings" },
		{ "Comment", "/** Optional override material applied to sidewalk quads affected by curb-cut interactions. */" },
		{ "DisplayName", "Curb Cut Material" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Optional override material applied to sidewalk quads affected by curb-cut interactions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SidewalkPartitions_MetaData[] = {
		{ "Category", "Sidewalk Settings" },
		{ "Comment", "/** Optional sidewalk partitions that split the road-side sidewalk mesh into materialized strips. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadData.h" },
		{ "ToolTip", "Optional sidewalk partitions that split the road-side sidewalk mesh into materialized strips." },
	};
#endif // WITH_METADATA

// ********** Begin Class URoadBLDSidewalkPreset constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CornerMaterial;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Width;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CurbClass;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ZOffset;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CurbCutLowerAmount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurbCutMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SidewalkPartitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SidewalkPartitions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URoadBLDSidewalkPreset constinit property declarations *********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadBLDSidewalkPreset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URoadBLDSidewalkPreset Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDSidewalkPreset, Material), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CornerMaterial = { "CornerMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDSidewalkPreset, CornerMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CornerMaterial_MetaData), NewProp_CornerMaterial_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDSidewalkPreset, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_CurbClass = { "CurbClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDSidewalkPreset, CurbClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URoadModuleObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurbClass_MetaData), NewProp_CurbClass_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDSidewalkPreset, ZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOffset_MetaData), NewProp_ZOffset_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_CurbCutLowerAmount = { "CurbCutLowerAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDSidewalkPreset, CurbCutLowerAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurbCutLowerAmount_MetaData), NewProp_CurbCutLowerAmount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CurbCutMaterial = { "CurbCutMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDSidewalkPreset, CurbCutMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurbCutMaterial_MetaData), NewProp_CurbCutMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SidewalkPartitions_Inner = { "SidewalkPartitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSidewalkPartitionDescriptor, METADATA_PARAMS(0, nullptr) }; // 7c1c5ca88f7ae153e61685f9d8e224019a24f3ec
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SidewalkPartitions = { "SidewalkPartitions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDSidewalkPreset, SidewalkPartitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SidewalkPartitions_MetaData), NewProp_SidewalkPartitions_MetaData) }; // 7c1c5ca88f7ae153e61685f9d8e224019a24f3ec
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CornerMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurbClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurbCutLowerAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurbCutMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SidewalkPartitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SidewalkPartitions,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URoadBLDSidewalkPreset Property Definitions ********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoadBLDSidewalkPreset,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_URoadBLDSidewalkPreset;
UClass* Z_Construct_UClass_URoadBLDSidewalkPreset(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoadBLDSidewalkPreset;
		if (!Z_Registration_Info_UClass_URoadBLDSidewalkPreset.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadBLDSidewalkPreset"),
				Z_Registration_Info_UClass_URoadBLDSidewalkPreset.InnerSingleton,
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
		return Z_Registration_Info_UClass_URoadBLDSidewalkPreset.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoadBLDSidewalkPreset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoadBLDSidewalkPreset.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoadBLDSidewalkPreset.OuterSingleton;
}
#undef UHT_STATICS
URoadBLDSidewalkPreset::URoadBLDSidewalkPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoadBLDSidewalkPreset);
URoadBLDSidewalkPreset::~URoadBLDSidewalkPreset() {}
// ********** End Class URoadBLDSidewalkPreset *****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadData_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RoadBLDRuntime_ERoadPresetCategory, TEXT("ERoadPresetCategory"), &ZRIE_ERoadPresetCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 71393143U) },
		{ Z_Construct_UEnum_RoadBLDRuntime_ERoadType, TEXT("ERoadType"), &ZRIE_ERoadType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3517564057U) },
		{ Z_Construct_UEnum_RoadBLDRuntime_ERoadSide, TEXT("ERoadSide"), &ZRIE_ERoadSide, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3815943699U) },
		{ Z_Construct_UEnum_RoadBLDRuntime_ELaneType, TEXT("ELaneType"), &ZRIE_ELaneType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2635531069U) },
		{ Z_Construct_UEnum_RoadBLDRuntime_ERoadEdge, TEXT("ERoadEdge"), &ZRIE_ERoadEdge, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4167845456U) },
		{ Z_Construct_UEnum_RoadBLDRuntime_ESegmentBehavior, TEXT("ESegmentBehavior"), &ZRIE_ESegmentBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 296698670U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FDynamicRoadDrawPresetMarking, Z_Construct_UScriptStruct_FDynamicRoadDrawPresetMarking_Statics::NewStructOps, TEXT("DynamicRoadDrawPresetMarking"),&Z_Registration_Info_UScriptStruct_FDynamicRoadDrawPresetMarking, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDynamicRoadDrawPresetMarking), 2488901582U) },
		{ Z_Construct_UScriptStruct_FDynamicRoadLaneProfile, Z_Construct_UScriptStruct_FDynamicRoadLaneProfile_Statics::NewStructOps, TEXT("DynamicRoadLaneProfile"),&Z_Registration_Info_UScriptStruct_FDynamicRoadLaneProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDynamicRoadLaneProfile), 1292270564U) },
		{ Z_Construct_UScriptStruct_FSidewalkPartitionDescriptor, Z_Construct_UScriptStruct_FSidewalkPartitionDescriptor_Statics::NewStructOps, TEXT("SidewalkPartitionDescriptor"),&Z_Registration_Info_UScriptStruct_FSidewalkPartitionDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSidewalkPartitionDescriptor), 2082233512U) },
		{ Z_Construct_UScriptStruct_FDynamicRoadDrawPresetLane, Z_Construct_UScriptStruct_FDynamicRoadDrawPresetLane_Statics::NewStructOps, TEXT("DynamicRoadDrawPresetLane"),&Z_Registration_Info_UScriptStruct_FDynamicRoadDrawPresetLane, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDynamicRoadDrawPresetLane), 3469478637U) },
		{ Z_Construct_UScriptStruct_FDynamicRoadDrawPresetModule, Z_Construct_UScriptStruct_FDynamicRoadDrawPresetModule_Statics::NewStructOps, TEXT("DynamicRoadDrawPresetModule"),&Z_Registration_Info_UScriptStruct_FDynamicRoadDrawPresetModule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDynamicRoadDrawPresetModule), 1327446033U) },
		{ Z_Construct_UScriptStruct_FLaneSection, Z_Construct_UScriptStruct_FLaneSection_Statics::NewStructOps, TEXT("LaneSection"),&Z_Registration_Info_UScriptStruct_FLaneSection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLaneSection), 303732738U) },
		{ Z_Construct_UScriptStruct_FShoulderMask, Z_Construct_UScriptStruct_FShoulderMask_Statics::NewStructOps, TEXT("ShoulderMask"),&Z_Registration_Info_UScriptStruct_FShoulderMask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShoulderMask), 37067676U) },
		{ Z_Construct_UScriptStruct_FRoadAutomationParams, Z_Construct_UScriptStruct_FRoadAutomationParams_Statics::NewStructOps, TEXT("RoadAutomationParams"),&Z_Registration_Info_UScriptStruct_FRoadAutomationParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadAutomationParams), 3856836087U) },
		{ Z_Construct_UScriptStruct_FDynamicRoadPresetAutomaticCrossings, Z_Construct_UScriptStruct_FDynamicRoadPresetAutomaticCrossings_Statics::NewStructOps, TEXT("DynamicRoadPresetAutomaticCrossings"),&Z_Registration_Info_UScriptStruct_FDynamicRoadPresetAutomaticCrossings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDynamicRoadPresetAutomaticCrossings), 3243233690U) },
		{ Z_Construct_UScriptStruct_FDynamicRoadPresetAutomationDefaults, Z_Construct_UScriptStruct_FDynamicRoadPresetAutomationDefaults_Statics::NewStructOps, TEXT("DynamicRoadPresetAutomationDefaults"),&Z_Registration_Info_UScriptStruct_FDynamicRoadPresetAutomationDefaults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDynamicRoadPresetAutomationDefaults), 3431499025U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoadMarkingParameters, TEXT("URoadMarkingParameters"), &Z_Registration_Info_UClass_URoadMarkingParameters, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoadMarkingParameters), 4098285617U) },
		{ Z_Construct_UClass_UDynamicRoadDrawPreset, TEXT("UDynamicRoadDrawPreset"), &Z_Registration_Info_UClass_UDynamicRoadDrawPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicRoadDrawPreset), 1750369663U) },
		{ Z_Construct_UClass_ULanePreset, TEXT("ULanePreset"), &Z_Registration_Info_UClass_ULanePreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULanePreset), 1116701874U) },
		{ Z_Construct_UClass_URoadBLDSidewalkPreset, TEXT("URoadBLDSidewalkPreset"), &Z_Registration_Info_UClass_URoadBLDSidewalkPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoadBLDSidewalkPreset), 3101803958U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadData_h__Script_RoadBLDRuntime_4f3d53a4bd2b2202040be704a4ba8f7fa30db7e4{
	TEXT("/Script/RoadBLDRuntime"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
