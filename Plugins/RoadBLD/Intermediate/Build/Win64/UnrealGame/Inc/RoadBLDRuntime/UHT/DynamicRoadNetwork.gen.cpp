// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicRoad/DynamicRoadNetwork.h"
#include "DynamicRoad/DynamicRoad.h"
#include "DynamicRoad/EdgeCurve.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDynamicRoadNetwork() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoadNetwork(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_EPerimeterElementType(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_EPerimeterTraversalObject(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FIntersectionMask(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FIntersectionPatchOverride(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPedestrianCornerConnectorSegment(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPerimeterCut(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadCornerEditData(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadMarkingMask(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FShoulderEdgeCurvePair(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FShoulderMaskCut(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UCityRoadNetworkStoreData(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ACustomRoadShape(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoad(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadDrawPreset(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoadNetwork(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UEdgeCurve(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadMarkingLine(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EPerimeterTraversalObject *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDRuntime_EPerimeterTraversalObject_Statics
template<> ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EPerimeterTraversalObject>()
{
	return Z_Construct_UEnum_RoadBLDRuntime_EPerimeterTraversalObject(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "//This indicates the object that we are sampling to get the points of a mesh perimeter. We can traverse FPerimeterCut, FRoadNetworkCorner, and UEdgeCurve.\n" },
		{ "Corner.Name", "Corner" },
		{ "Cut.Name", "Cut" },
		{ "Edge.Name", "Edge" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "This indicates the object that we are sampling to get the points of a mesh perimeter. We can traverse FPerimeterCut, FRoadNetworkCorner, and UEdgeCurve." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Cut", (int64)Cut },
		{ "Corner", (int64)Corner },
		{ "Edge", (int64)Edge },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	"EPerimeterTraversalObject",
	"EPerimeterTraversalObject",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EPerimeterTraversalObject;
UEnum* Z_Construct_UEnum_RoadBLDRuntime_EPerimeterTraversalObject(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EPerimeterTraversalObject.OuterSingleton)
		{
			ZRIE_EPerimeterTraversalObject.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDRuntime_EPerimeterTraversalObject, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("EPerimeterTraversalObject"));
		}
		return ZRIE_EPerimeterTraversalObject.OuterSingleton;
	}
	if (!ZRIE_EPerimeterTraversalObject.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EPerimeterTraversalObject.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EPerimeterTraversalObject.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EPerimeterTraversalObject ***************************************************

// ********** Begin Enum EPerimeterElementType *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDRuntime_EPerimeterElementType_Statics
template<> ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EPerimeterElementType>()
{
	return Z_Construct_UEnum_RoadBLDRuntime_EPerimeterElementType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Indicates the type of element that created a FPerimeterPoint in the new perimeter loop generation system\n" },
		{ "Corner.Name", "EPerimeterElementType::Corner" },
		{ "Cut.Name", "EPerimeterElementType::Cut" },
		{ "Edge.Name", "EPerimeterElementType::Edge" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Indicates the type of element that created a FPerimeterPoint in the new perimeter loop generation system" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPerimeterElementType::Corner", (int64)EPerimeterElementType::Corner },
		{ "EPerimeterElementType::Cut", (int64)EPerimeterElementType::Cut },
		{ "EPerimeterElementType::Edge", (int64)EPerimeterElementType::Edge },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	"EPerimeterElementType",
	"EPerimeterElementType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EPerimeterElementType;
UEnum* Z_Construct_UEnum_RoadBLDRuntime_EPerimeterElementType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EPerimeterElementType.OuterSingleton)
		{
			ZRIE_EPerimeterElementType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDRuntime_EPerimeterElementType, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("EPerimeterElementType"));
		}
		return ZRIE_EPerimeterElementType.OuterSingleton;
	}
	if (!ZRIE_EPerimeterElementType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EPerimeterElementType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EPerimeterElementType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EPerimeterElementType *******************************************************

// ********** Begin ScriptStruct FRoadMarkingMask **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRoadMarkingMask_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRoadMarkingMask>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRoadMarkingMask); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Road marking mask used to hide markings within intersection regions\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Road marking mask used to hide markings within intersection regions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskStart_MetaData[] = {
		{ "Category", "RoadMarkingMask" },
		{ "Comment", "// Start distance along the parent road where masking begins\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Start distance along the parent road where masking begins" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskEnd_MetaData[] = {
		{ "Category", "RoadMarkingMask" },
		{ "Comment", "// End distance along the parent road where masking ends\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "End distance along the parent road where masking ends" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskedEdges_MetaData[] = {
		{ "Category", "RoadMarkingMask" },
		{ "Comment", "// Edge curves whose markings should be masked within [MaskStart, MaskEnd]\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Edge curves whose markings should be masked within [MaskStart, MaskEnd]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentRoad_MetaData[] = {
		{ "Category", "RoadMarkingMask" },
		{ "Comment", "// The road that owns these masked edges\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "The road that owns these masked edges" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRoadMarkingMask constinit property declarations ******************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaskStart;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaskEnd;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaskedEdges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaskedEdges;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentRoad;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRoadMarkingMask constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadMarkingMask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRoadMarkingMask Property Definitions *****************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_MaskStart = { "MaskStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadMarkingMask, MaskStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskStart_MetaData), NewProp_MaskStart_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_MaskEnd = { "MaskEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadMarkingMask, MaskEnd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskEnd_MetaData), NewProp_MaskEnd_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MaskedEdges_Inner = { "MaskedEdges", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_MaskedEdges = { "MaskedEdges", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadMarkingMask, MaskedEdges), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskedEdges_MetaData), NewProp_MaskedEdges_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ParentRoad = { "ParentRoad", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadMarkingMask, ParentRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentRoad_MetaData), NewProp_ParentRoad_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaskStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaskEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaskedEdges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaskedEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParentRoad,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRoadMarkingMask Property Definitions *******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"RoadMarkingMask",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRoadMarkingMask>(),
	alignof(FRoadMarkingMask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRoadMarkingMask;
UScriptStruct* Z_Construct_UScriptStruct_FRoadMarkingMask(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRoadMarkingMask.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRoadMarkingMask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadMarkingMask, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("RoadMarkingMask"));
		}
		return Z_Registration_Info_UScriptStruct_FRoadMarkingMask.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRoadMarkingMask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRoadMarkingMask.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRoadMarkingMask.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRoadMarkingMask ****************************************************

// ********** Begin ScriptStruct FPerimeterCut *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FPerimeterCut_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FPerimeterCut>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPerimeterCut); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FPerimeterCut - Used to \"cut\" roads and intersections in the road network into manageable chunks\n * for geometry generation. This struct defines a cut point along a road's reference line.\n */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "FPerimeterCut - Used to \"cut\" roads and intersections in the road network into manageable chunks\nfor geometry generation. This struct defines a cut point along a road's reference line." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CutID_MetaData[] = {
		{ "Comment", "/**\n\x09 * Stable identifier used by the rebuild refactor to avoid fragile array-index coupling.\n\x09 * Optional for migration: older saves will have an invalid GUID.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Stable identifier used by the rebuild refactor to avoid fragile array-index coupling.\nOptional for migration: older saves will have an invalid GUID." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentRoad_MetaData[] = {
		{ "Category", "Perimeter Cut" },
		{ "Comment", "/** The road that this cut point belongs to */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "The road that this cut point belongs to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "Perimeter Cut" },
		{ "Comment", "/** Distance along the road's reference line where the cut occurs */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Distance along the road's reference line where the cut occurs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Perimeter Cut" },
		{ "Comment", "/** Direction of the intersection side (1 for forward, -1 for backward, 0 for default/unknown) */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Direction of the intersection side (1 for forward, -1 for backward, 0 for default/unknown)" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPerimeterCut constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CutID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentRoad;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPerimeterCut constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerimeterCut>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FPerimeterCut Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CutID = { "CutID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FPerimeterCut, CutID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CutID_MetaData), NewProp_CutID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ParentRoad = { "ParentRoad", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FPerimeterCut, ParentRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentRoad_MetaData), NewProp_ParentRoad_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FPerimeterCut, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FPerimeterCut, Direction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CutID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParentRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FPerimeterCut Property Definitions **********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"PerimeterCut",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FPerimeterCut>(),
	alignof(FPerimeterCut),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPerimeterCut;
UScriptStruct* Z_Construct_UScriptStruct_FPerimeterCut(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FPerimeterCut.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FPerimeterCut.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerimeterCut, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("PerimeterCut"));
		}
		return Z_Registration_Info_UScriptStruct_FPerimeterCut.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FPerimeterCut.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPerimeterCut.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPerimeterCut.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FPerimeterCut *******************************************************

// ********** Begin ScriptStruct FRoadCornerEditData ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRoadCornerEditData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRoadCornerEditData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRoadCornerEditData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FRoadCornerEditData - Lightweight persistent record of user-edited corner parameters.\n *\n * This intentionally does NOT store heavyweight corner curve geometry. It exists purely to\n * preserve user edits (offsets/radius) across rebuilds.\n */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "FRoadCornerEditData - Lightweight persistent record of user-edited corner parameters.\n\nThis intentionally does NOT store heavyweight corner curve geometry. It exists purely to\npreserve user edits (offsets/radius) across rebuilds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartEdge_MetaData[] = {
		{ "Category", "Corner Edit" },
		{ "Comment", "/** Soft references so we don't keep corner-related geometry alive unnecessarily. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Soft references so we don't keep corner-related geometry alive unnecessarily." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndEdge_MetaData[] = {
		{ "Category", "Corner Edit" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartDistance_MetaData[] = {
		{ "Category", "Corner Edit" },
		{ "Comment", "/** Distances along the edge curves at which the corner connections occur. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Distances along the edge curves at which the corner connections occur." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndDistance_MetaData[] = {
		{ "Category", "Corner Edit" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[] = {
		{ "Category", "Corner Edit" },
		{ "Comment", "/** User-edited offsets/radius (used to preserve edits across rebuilds). */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "User-edited offsets/radius (used to preserve edits across rebuilds)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndOffset_MetaData[] = {
		{ "Category", "Corner Edit" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CornerRadius_MetaData[] = {
		{ "Category", "Corner Edit" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRoadCornerEditData constinit property declarations ***************
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StartEdge;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_EndEdge;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StartDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EndDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StartOffset;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EndOffset;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CornerRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRoadCornerEditData constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadCornerEditData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRoadCornerEditData Property Definitions **************************
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_StartEdge = { "StartEdge", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadCornerEditData, StartEdge), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartEdge_MetaData), NewProp_StartEdge_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_EndEdge = { "EndEdge", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadCornerEditData, EndEdge), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndEdge_MetaData), NewProp_EndEdge_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_StartDistance = { "StartDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadCornerEditData, StartDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartDistance_MetaData), NewProp_StartDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_EndDistance = { "EndDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadCornerEditData, EndDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndDistance_MetaData), NewProp_EndDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadCornerEditData, StartOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartOffset_MetaData), NewProp_StartOffset_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_EndOffset = { "EndOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadCornerEditData, EndOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndOffset_MetaData), NewProp_EndOffset_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_CornerRadius = { "CornerRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadCornerEditData, CornerRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CornerRadius_MetaData), NewProp_CornerRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CornerRadius,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRoadCornerEditData Property Definitions ****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"RoadCornerEditData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRoadCornerEditData>(),
	alignof(FRoadCornerEditData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRoadCornerEditData;
UScriptStruct* Z_Construct_UScriptStruct_FRoadCornerEditData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRoadCornerEditData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRoadCornerEditData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadCornerEditData, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("RoadCornerEditData"));
		}
		return Z_Registration_Info_UScriptStruct_FRoadCornerEditData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRoadCornerEditData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRoadCornerEditData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRoadCornerEditData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRoadCornerEditData *************************************************

// ********** Begin ScriptStruct FIntersectionPatchOverride ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FIntersectionPatchOverride_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FIntersectionPatchOverride>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FIntersectionPatchOverride); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Persistent per-intersection landscape patch settings keyed by deterministic intersection signature.\n * Survives ARoadGeo destroy/respawn during forced rebuilds.\n */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Persistent per-intersection landscape patch settings keyed by deterministic intersection signature.\nSurvives ARoadGeo destroy/respawn during forced rebuilds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionSignature_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContributingRoadIDs_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZBiasDownCm_MetaData[] = {
		{ "Category", "RoadBLD|Landscape" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarginCm_MetaData[] = {
		{ "Category", "RoadBLD|Landscape" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FalloffCm_MetaData[] = {
		{ "Category", "RoadBLD|Landscape" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableLandscapeAlignment_MetaData[] = {
		{ "Category", "RoadBLD|Landscape" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FIntersectionPatchOverride constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_IntersectionSignature;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContributingRoadIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ContributingRoadIDs;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ZBiasDownCm;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MarginCm;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FalloffCm;
	static void NewProp_bDisableLandscapeAlignment_SetBit(void* Obj)
	{
		((FIntersectionPatchOverride*)Obj)->bDisableLandscapeAlignment = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableLandscapeAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FIntersectionPatchOverride constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntersectionPatchOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FIntersectionPatchOverride Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_IntersectionSignature = { "IntersectionSignature", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FIntersectionPatchOverride, IntersectionSignature), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionSignature_MetaData), NewProp_IntersectionSignature_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ContributingRoadIDs_Inner = { "ContributingRoadIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ContributingRoadIDs = { "ContributingRoadIDs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FIntersectionPatchOverride, ContributingRoadIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContributingRoadIDs_MetaData), NewProp_ContributingRoadIDs_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ZBiasDownCm = { "ZBiasDownCm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FIntersectionPatchOverride, ZBiasDownCm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZBiasDownCm_MetaData), NewProp_ZBiasDownCm_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_MarginCm = { "MarginCm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FIntersectionPatchOverride, MarginCm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarginCm_MetaData), NewProp_MarginCm_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_FalloffCm = { "FalloffCm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FIntersectionPatchOverride, FalloffCm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FalloffCm_MetaData), NewProp_FalloffCm_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDisableLandscapeAlignment = { "bDisableLandscapeAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FIntersectionPatchOverride), &UHT_STATICS::NewProp_bDisableLandscapeAlignment_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableLandscapeAlignment_MetaData), NewProp_bDisableLandscapeAlignment_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IntersectionSignature,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ContributingRoadIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ContributingRoadIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZBiasDownCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MarginCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FalloffCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDisableLandscapeAlignment,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FIntersectionPatchOverride Property Definitions *********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"IntersectionPatchOverride",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FIntersectionPatchOverride>(),
	alignof(FIntersectionPatchOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIntersectionPatchOverride;
UScriptStruct* Z_Construct_UScriptStruct_FIntersectionPatchOverride(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FIntersectionPatchOverride.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FIntersectionPatchOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntersectionPatchOverride, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("IntersectionPatchOverride"));
		}
		return Z_Registration_Info_UScriptStruct_FIntersectionPatchOverride.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FIntersectionPatchOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIntersectionPatchOverride.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FIntersectionPatchOverride.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FIntersectionPatchOverride ******************************************

// ********** Begin ScriptStruct FShoulderMaskCut **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FShoulderMaskCut_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FShoulderMaskCut>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FShoulderMaskCut); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FShoulderMaskCut - Represents a cut point along an EdgeCurve where it intersects with a shoulder road\n * Used to detect where lane markings should be masked due to shoulder lane intersections\n */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "FShoulderMaskCut - Represents a cut point along an EdgeCurve where it intersects with a shoulder road\nUsed to detect where lane markings should be masked due to shoulder lane intersections" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "Shoulder Mask Cut" },
		{ "Comment", "/** Distance along the target EdgeCurve where the cut occurs */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Distance along the target EdgeCurve where the cut occurs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Shoulder Mask Cut" },
		{ "Comment", "/** Direction: -1 if increasing distance moves toward the other road's centerline,\n\x09 * 1 if increasing distance moves away from it */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Direction: -1 if increasing distance moves toward the other road's centerline,\n1 if increasing distance moves away from it" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FShoulderMaskCut constinit property declarations ******************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FShoulderMaskCut constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShoulderMaskCut>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FShoulderMaskCut Property Definitions *****************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FShoulderMaskCut, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FShoulderMaskCut, Direction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FShoulderMaskCut Property Definitions *******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"ShoulderMaskCut",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FShoulderMaskCut>(),
	alignof(FShoulderMaskCut),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FShoulderMaskCut;
UScriptStruct* Z_Construct_UScriptStruct_FShoulderMaskCut(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FShoulderMaskCut.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FShoulderMaskCut.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShoulderMaskCut, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("ShoulderMaskCut"));
		}
		return Z_Registration_Info_UScriptStruct_FShoulderMaskCut.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FShoulderMaskCut.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FShoulderMaskCut.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FShoulderMaskCut.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FShoulderMaskCut ****************************************************

// ********** Begin ScriptStruct FShoulderEdgeCurvePair ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FShoulderEdgeCurvePair_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FShoulderEdgeCurvePair>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FShoulderEdgeCurvePair); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FShoulderEdgeCurvePair - Represents the left and right shoulder EdgeCurves of a road\n * Used for shoulder mask detection and lane boundary identification\n */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "FShoulderEdgeCurvePair - Represents the left and right shoulder EdgeCurves of a road\nUsed for shoulder mask detection and lane boundary identification" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftEdge_MetaData[] = {
		{ "Category", "Shoulder Edge Pair" },
		{ "Comment", "/** The left shoulder EdgeCurve (transition between driving lane and shoulder/border on the left side) */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "The left shoulder EdgeCurve (transition between driving lane and shoulder/border on the left side)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightEdge_MetaData[] = {
		{ "Category", "Shoulder Edge Pair" },
		{ "Comment", "/** The right shoulder EdgeCurve (transition between driving lane and shoulder/border on the right side) */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "The right shoulder EdgeCurve (transition between driving lane and shoulder/border on the right side)" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FShoulderEdgeCurvePair constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftEdge;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightEdge;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FShoulderEdgeCurvePair constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShoulderEdgeCurvePair>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FShoulderEdgeCurvePair Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LeftEdge = { "LeftEdge", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FShoulderEdgeCurvePair, LeftEdge), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftEdge_MetaData), NewProp_LeftEdge_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RightEdge = { "RightEdge", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FShoulderEdgeCurvePair, RightEdge), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightEdge_MetaData), NewProp_RightEdge_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LeftEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RightEdge,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FShoulderEdgeCurvePair Property Definitions *************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"ShoulderEdgeCurvePair",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FShoulderEdgeCurvePair>(),
	alignof(FShoulderEdgeCurvePair),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FShoulderEdgeCurvePair;
UScriptStruct* Z_Construct_UScriptStruct_FShoulderEdgeCurvePair(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FShoulderEdgeCurvePair.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FShoulderEdgeCurvePair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShoulderEdgeCurvePair, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("ShoulderEdgeCurvePair"));
		}
		return Z_Registration_Info_UScriptStruct_FShoulderEdgeCurvePair.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FShoulderEdgeCurvePair.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FShoulderEdgeCurvePair.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FShoulderEdgeCurvePair.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FShoulderEdgeCurvePair **********************************************

// ********** Begin ScriptStruct FIntersectionMask *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FIntersectionMask_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FIntersectionMask>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FIntersectionMask); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartDistance_MetaData[] = {
		{ "Category", "Intersection Mask" },
		{ "Comment", "/** The distance along the road that the mask starts */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "The distance along the road that the mask starts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndDistance_MetaData[] = {
		{ "Category", "Intersection Mask" },
		{ "Comment", "/** The distance along the road that the mask ends */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "The distance along the road that the mask ends" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentRoad_MetaData[] = {
		{ "Category", "Intersection Mask" },
		{ "Comment", "/** The road that this mask belongs to */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "The road that this mask belongs to" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FIntersectionMask constinit property declarations *****************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StartDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EndDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentRoad;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FIntersectionMask constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntersectionMask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FIntersectionMask Property Definitions ****************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_StartDistance = { "StartDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FIntersectionMask, StartDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartDistance_MetaData), NewProp_StartDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_EndDistance = { "EndDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FIntersectionMask, EndDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndDistance_MetaData), NewProp_EndDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ParentRoad = { "ParentRoad", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FIntersectionMask, ParentRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentRoad_MetaData), NewProp_ParentRoad_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParentRoad,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FIntersectionMask Property Definitions ******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"IntersectionMask",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FIntersectionMask>(),
	alignof(FIntersectionMask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIntersectionMask;
UScriptStruct* Z_Construct_UScriptStruct_FIntersectionMask(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FIntersectionMask.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FIntersectionMask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntersectionMask, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("IntersectionMask"));
		}
		return Z_Registration_Info_UScriptStruct_FIntersectionMask.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FIntersectionMask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIntersectionMask.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FIntersectionMask.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FIntersectionMask ***************************************************

// ********** Begin ScriptStruct FPedestrianCornerConnectorSegment *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FPedestrianCornerConnectorSegment_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FPedestrianCornerConnectorSegment>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPedestrianCornerConnectorSegment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Describes a partition-specific pedestrian connector path around an intersection corner wedge.\n * Endpoints are aligned to sidewalk partition centerlines at intersection mask boundaries so\n * downstream connectors can align with adjacent sidewalk and crosswalk geometry.\n */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Describes a partition-specific pedestrian connector path around an intersection corner wedge.\nEndpoints are aligned to sidewalk partition centerlines at intersection mask boundaries so\ndownstream connectors can align with adjacent sidewalk and crosswalk geometry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartRoad_MetaData[] = {
		{ "Category", "Pedestrian Connector" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndRoad_MetaData[] = {
		{ "Category", "Pedestrian Connector" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartEdgeCurve_MetaData[] = {
		{ "Category", "Pedestrian Connector" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndEdgeCurve_MetaData[] = {
		{ "Category", "Pedestrian Connector" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartEdgeDistance_MetaData[] = {
		{ "Category", "Pedestrian Connector" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndEdgeDistance_MetaData[] = {
		{ "Category", "Pedestrian Connector" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartRoadDistance_MetaData[] = {
		{ "Category", "Pedestrian Connector" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndRoadDistance_MetaData[] = {
		{ "Category", "Pedestrian Connector" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartSidewalkSide_MetaData[] = {
		{ "Category", "Pedestrian Connector" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndSidewalkSide_MetaData[] = {
		{ "Category", "Pedestrian Connector" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPartitionIndex_MetaData[] = {
		{ "Category", "Pedestrian Connector" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPartitionIndex_MetaData[] = {
		{ "Category", "Pedestrian Connector" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopIndex_MetaData[] = {
		{ "Category", "Pedestrian Connector" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CornerSegmentIndex_MetaData[] = {
		{ "Category", "Pedestrian Connector" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CornerSegmentId_MetaData[] = {
		{ "Category", "Pedestrian Connector" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartEndpointTangent_MetaData[] = {
		{ "Category", "Pedestrian Connector" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndEndpointTangent_MetaData[] = {
		{ "Category", "Pedestrian Connector" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Category", "Pedestrian Connector" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPedestrianCornerConnectorSegment constinit property declarations *
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartRoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndRoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartEdgeCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndEdgeCurve;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StartEdgeDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EndEdgeDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StartRoadDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EndRoadDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartSidewalkSide;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndSidewalkSide;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartPartitionIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndPartitionIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LoopIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CornerSegmentIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CornerSegmentId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartEndpointTangent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndEndpointTangent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPedestrianCornerConnectorSegment constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPedestrianCornerConnectorSegment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FPedestrianCornerConnectorSegment Property Definitions ************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StartRoad = { "StartRoad", nullptr, (EPropertyFlags)0x0114000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FPedestrianCornerConnectorSegment, StartRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartRoad_MetaData), NewProp_StartRoad_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_EndRoad = { "EndRoad", nullptr, (EPropertyFlags)0x0114000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FPedestrianCornerConnectorSegment, EndRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndRoad_MetaData), NewProp_EndRoad_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StartEdgeCurve = { "StartEdgeCurve", nullptr, (EPropertyFlags)0x0114000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FPedestrianCornerConnectorSegment, StartEdgeCurve), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartEdgeCurve_MetaData), NewProp_StartEdgeCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_EndEdgeCurve = { "EndEdgeCurve", nullptr, (EPropertyFlags)0x0114000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FPedestrianCornerConnectorSegment, EndEdgeCurve), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndEdgeCurve_MetaData), NewProp_EndEdgeCurve_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_StartEdgeDistance = { "StartEdgeDistance", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FPedestrianCornerConnectorSegment, StartEdgeDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartEdgeDistance_MetaData), NewProp_StartEdgeDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_EndEdgeDistance = { "EndEdgeDistance", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FPedestrianCornerConnectorSegment, EndEdgeDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndEdgeDistance_MetaData), NewProp_EndEdgeDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_StartRoadDistance = { "StartRoadDistance", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FPedestrianCornerConnectorSegment, StartRoadDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartRoadDistance_MetaData), NewProp_StartRoadDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_EndRoadDistance = { "EndRoadDistance", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FPedestrianCornerConnectorSegment, EndRoadDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndRoadDistance_MetaData), NewProp_EndRoadDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_StartSidewalkSide = { "StartSidewalkSide", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FPedestrianCornerConnectorSegment, StartSidewalkSide), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartSidewalkSide_MetaData), NewProp_StartSidewalkSide_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_EndSidewalkSide = { "EndSidewalkSide", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FPedestrianCornerConnectorSegment, EndSidewalkSide), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndSidewalkSide_MetaData), NewProp_EndSidewalkSide_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_StartPartitionIndex = { "StartPartitionIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FPedestrianCornerConnectorSegment, StartPartitionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPartitionIndex_MetaData), NewProp_StartPartitionIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_EndPartitionIndex = { "EndPartitionIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FPedestrianCornerConnectorSegment, EndPartitionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPartitionIndex_MetaData), NewProp_EndPartitionIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LoopIndex = { "LoopIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FPedestrianCornerConnectorSegment, LoopIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopIndex_MetaData), NewProp_LoopIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CornerSegmentIndex = { "CornerSegmentIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FPedestrianCornerConnectorSegment, CornerSegmentIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CornerSegmentIndex_MetaData), NewProp_CornerSegmentIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_CornerSegmentId = { "CornerSegmentId", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FPedestrianCornerConnectorSegment, CornerSegmentId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CornerSegmentId_MetaData), NewProp_CornerSegmentId_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_StartEndpointTangent = { "StartEndpointTangent", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FPedestrianCornerConnectorSegment, StartEndpointTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartEndpointTangent_MetaData), NewProp_StartEndpointTangent_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EndEndpointTangent = { "EndEndpointTangent", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FPedestrianCornerConnectorSegment, EndEndpointTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndEndpointTangent_MetaData), NewProp_EndEndpointTangent_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FPedestrianCornerConnectorSegment, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartEdgeCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndEdgeCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartEdgeDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndEdgeDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartRoadDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndRoadDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartSidewalkSide,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndSidewalkSide,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartPartitionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndPartitionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LoopIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CornerSegmentIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CornerSegmentId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartEndpointTangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndEndpointTangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FPedestrianCornerConnectorSegment Property Definitions **************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"PedestrianCornerConnectorSegment",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FPedestrianCornerConnectorSegment>(),
	alignof(FPedestrianCornerConnectorSegment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPedestrianCornerConnectorSegment;
UScriptStruct* Z_Construct_UScriptStruct_FPedestrianCornerConnectorSegment(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FPedestrianCornerConnectorSegment.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FPedestrianCornerConnectorSegment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPedestrianCornerConnectorSegment, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("PedestrianCornerConnectorSegment"));
		}
		return Z_Registration_Info_UScriptStruct_FPedestrianCornerConnectorSegment.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FPedestrianCornerConnectorSegment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPedestrianCornerConnectorSegment.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPedestrianCornerConnectorSegment.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FPedestrianCornerConnectorSegment ***********************************

// ********** Begin Class ADynamicRoadNetwork Function AbortAndWaitForPendingRebuild ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoadNetwork_AbortAndWaitForPendingRebuild_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Road Network" },
		{ "Comment", "/** Aborts any in-flight async compute and budgeted commit, then waits for the compute thread. Safe no-op when idle. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Aborts any in-flight async compute and budgeted commit, then waits for the compute thread. Safe no-op when idle." },
	};
#endif // WITH_METADATA

// ********** Begin Function AbortAndWaitForPendingRebuild constinit property declarations *********
// ********** End Function AbortAndWaitForPendingRebuild constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoadNetwork, nullptr, "AbortAndWaitForPendingRebuild", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ADynamicRoadNetwork_AbortAndWaitForPendingRebuild(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoadNetwork::execAbortAndWaitForPendingRebuild)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AbortAndWaitForPendingRebuild();
	P_NATIVE_END;
}
// ********** End Class ADynamicRoadNetwork Function AbortAndWaitForPendingRebuild *****************

// ********** Begin Class ADynamicRoadNetwork Function AddRoadToRoadNetwork ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoadNetwork_AddRoadToRoadNetwork_Statics
struct UHT_STATICS
{
	struct DynamicRoadNetwork_eventAddRoadToRoadNetwork_Parms
	{
		UDynamicRoadDrawPreset* Style;
		double Height;
		ADynamicRoad* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "Comment", "//Adds a clothoid-based road to the road network octree\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Adds a clothoid-based road to the road network octree" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddRoadToRoadNetwork constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Style;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Height;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddRoadToRoadNetwork constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddRoadToRoadNetwork Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadNetwork_eventAddRoadToRoadNetwork_Parms, Style), Z_Construct_UClass_UDynamicRoadDrawPreset, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadNetwork_eventAddRoadToRoadNetwork_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadNetwork_eventAddRoadToRoadNetwork_Parms, ReturnValue), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Style,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddRoadToRoadNetwork Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoadNetwork, nullptr, "AddRoadToRoadNetwork", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoadNetwork_eventAddRoadToRoadNetwork_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoadNetwork_eventAddRoadToRoadNetwork_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoadNetwork_AddRoadToRoadNetwork(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoadNetwork::execAddRoadToRoadNetwork)
{
	P_GET_OBJECT(UDynamicRoadDrawPreset,Z_Param_Style);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ADynamicRoad**)Z_Param__Result=P_THIS->AddRoadToRoadNetwork(Z_Param_Style,Z_Param_Height);
	P_NATIVE_END;
}
// ********** End Class ADynamicRoadNetwork Function AddRoadToRoadNetwork **************************

// ********** Begin Class ADynamicRoadNetwork Function FindClosestPointOnRoadCenterline ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoadNetwork_FindClosestPointOnRoadCenterline_Statics
struct UHT_STATICS
{
	struct DynamicRoadNetwork_eventFindClosestPointOnRoadCenterline_Parms
	{
		FVector Location;
		FVector ClosestPoint;
		ADynamicRoad* ClosestRoad;
		double DistanceAlongRoad;
		ADynamicRoad* RoadToIgnore;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Road Network" },
		{ "Comment", "/**\n\x09 * Finds the closest point on the closest road's centerline (reference line) to a given world location.\n\x09 * @param Location - World location to test\n\x09 * @param ClosestPoint - Out param: Nearest point on the road centerline in world space\n\x09 * @param ClosestRoad - Out param: The nearest road actor in this network\n\x09 * @param DistanceAlongRoad - Out param: Distance along the closest road's centerline to the closest point\n\x09 */" },
		{ "CPP_Default_RoadToIgnore", "None" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Finds the closest point on the closest road's centerline (reference line) to a given world location.\n@param Location - World location to test\n@param ClosestPoint - Out param: Nearest point on the road centerline in world space\n@param ClosestRoad - Out param: The nearest road actor in this network\n@param DistanceAlongRoad - Out param: Distance along the closest road's centerline to the closest point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindClosestPointOnRoadCenterline constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClosestPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClosestRoad;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DistanceAlongRoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoadToIgnore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindClosestPointOnRoadCenterline constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindClosestPointOnRoadCenterline Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadNetwork_eventFindClosestPointOnRoadCenterline_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ClosestPoint = { "ClosestPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadNetwork_eventFindClosestPointOnRoadCenterline_Parms, ClosestPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ClosestRoad = { "ClosestRoad", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadNetwork_eventFindClosestPointOnRoadCenterline_Parms, ClosestRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_DistanceAlongRoad = { "DistanceAlongRoad", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadNetwork_eventFindClosestPointOnRoadCenterline_Parms, DistanceAlongRoad), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoadToIgnore = { "RoadToIgnore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadNetwork_eventFindClosestPointOnRoadCenterline_Parms, RoadToIgnore), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClosestPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClosestRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DistanceAlongRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadToIgnore,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function FindClosestPointOnRoadCenterline Property Definitions *******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoadNetwork, nullptr, "FindClosestPointOnRoadCenterline", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoadNetwork_eventFindClosestPointOnRoadCenterline_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoadNetwork_eventFindClosestPointOnRoadCenterline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoadNetwork_FindClosestPointOnRoadCenterline(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoadNetwork::execFindClosestPointOnRoadCenterline)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ClosestPoint);
	P_GET_OBJECT_REF(ADynamicRoad,Z_Param_Out_ClosestRoad);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_DistanceAlongRoad);
	P_GET_OBJECT(ADynamicRoad,Z_Param_RoadToIgnore);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindClosestPointOnRoadCenterline(Z_Param_Location,Z_Param_Out_ClosestPoint,P_ARG_GC_BARRIER(Z_Param_Out_ClosestRoad),Z_Param_Out_DistanceAlongRoad,Z_Param_RoadToIgnore);
	P_NATIVE_END;
}
// ********** End Class ADynamicRoadNetwork Function FindClosestPointOnRoadCenterline **************

// ********** Begin Class ADynamicRoadNetwork Function FindClosestPointOnRoadEdge ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoadNetwork_FindClosestPointOnRoadEdge_Statics
struct UHT_STATICS
{
	struct DynamicRoadNetwork_eventFindClosestPointOnRoadEdge_Parms
	{
		FVector Location;
		FVector ClosestPoint;
		ADynamicRoad* ClosestRoad;
		double DistanceAlongRoad;
		UEdgeCurve* ClosestEdgeCurve;
		ADynamicRoad* RoadToIgnore;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Road Network" },
		{ "Comment", "/**\n\x09 * Finds the closest road by centerline, then snaps to the nearest point on that road's nearest edge curve.\n\x09 * Returns the snapped point on the edge, the road, the distance along the road centerline at that point,\n\x09 * and the nearest edge curve reference for per-lane snapping workflows.\n\x09 */" },
		{ "CPP_Default_RoadToIgnore", "None" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Finds the closest road by centerline, then snaps to the nearest point on that road's nearest edge curve.\nReturns the snapped point on the edge, the road, the distance along the road centerline at that point,\nand the nearest edge curve reference for per-lane snapping workflows." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindClosestPointOnRoadEdge constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClosestPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClosestRoad;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DistanceAlongRoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClosestEdgeCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoadToIgnore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindClosestPointOnRoadEdge constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindClosestPointOnRoadEdge Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadNetwork_eventFindClosestPointOnRoadEdge_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ClosestPoint = { "ClosestPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadNetwork_eventFindClosestPointOnRoadEdge_Parms, ClosestPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ClosestRoad = { "ClosestRoad", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadNetwork_eventFindClosestPointOnRoadEdge_Parms, ClosestRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_DistanceAlongRoad = { "DistanceAlongRoad", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadNetwork_eventFindClosestPointOnRoadEdge_Parms, DistanceAlongRoad), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ClosestEdgeCurve = { "ClosestEdgeCurve", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadNetwork_eventFindClosestPointOnRoadEdge_Parms, ClosestEdgeCurve), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoadToIgnore = { "RoadToIgnore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadNetwork_eventFindClosestPointOnRoadEdge_Parms, RoadToIgnore), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClosestPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClosestRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DistanceAlongRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClosestEdgeCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadToIgnore,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function FindClosestPointOnRoadEdge Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoadNetwork, nullptr, "FindClosestPointOnRoadEdge", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoadNetwork_eventFindClosestPointOnRoadEdge_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoadNetwork_eventFindClosestPointOnRoadEdge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoadNetwork_FindClosestPointOnRoadEdge(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoadNetwork::execFindClosestPointOnRoadEdge)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ClosestPoint);
	P_GET_OBJECT_REF(ADynamicRoad,Z_Param_Out_ClosestRoad);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_DistanceAlongRoad);
	P_GET_OBJECT_REF(UEdgeCurve,Z_Param_Out_ClosestEdgeCurve);
	P_GET_OBJECT(ADynamicRoad,Z_Param_RoadToIgnore);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindClosestPointOnRoadEdge(Z_Param_Location,Z_Param_Out_ClosestPoint,P_ARG_GC_BARRIER(Z_Param_Out_ClosestRoad),Z_Param_Out_DistanceAlongRoad,P_ARG_GC_BARRIER(Z_Param_Out_ClosestEdgeCurve),Z_Param_RoadToIgnore);
	P_NATIVE_END;
}
// ********** End Class ADynamicRoadNetwork Function FindClosestPointOnRoadEdge ********************

// ********** Begin Class ADynamicRoadNetwork Function FindClosestPointOnRoadGeometricCenterline ***
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoadNetwork_FindClosestPointOnRoadGeometricCenterline_Statics
struct UHT_STATICS
{
	struct DynamicRoadNetwork_eventFindClosestPointOnRoadGeometricCenterline_Parms
	{
		FVector Location;
		FVector ClosestPoint;
		ADynamicRoad* ClosestRoad;
		double DistanceAlongRoad;
		ADynamicRoad* RoadToIgnore;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Road Network" },
		{ "Comment", "/**\n\x09 * Finds the closest point on the closest road's geometric centerline to a given world location.\n\x09 * The geometric centerline represents the actual center of the road, accounting for varying lane widths.\n\x09 * @param Location - World location to test\n\x09 * @param ClosestPoint - Out param: Nearest point on the road geometric centerline in world space\n\x09 * @param ClosestRoad - Out param: The nearest road actor in this network\n\x09 * @param DistanceAlongRoad - Out param: Distance along the closest road's geometric centerline to the closest point\n\x09 */" },
		{ "CPP_Default_RoadToIgnore", "None" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Finds the closest point on the closest road's geometric centerline to a given world location.\nThe geometric centerline represents the actual center of the road, accounting for varying lane widths.\n@param Location - World location to test\n@param ClosestPoint - Out param: Nearest point on the road geometric centerline in world space\n@param ClosestRoad - Out param: The nearest road actor in this network\n@param DistanceAlongRoad - Out param: Distance along the closest road's geometric centerline to the closest point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindClosestPointOnRoadGeometricCenterline constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClosestPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClosestRoad;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DistanceAlongRoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoadToIgnore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindClosestPointOnRoadGeometricCenterline constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindClosestPointOnRoadGeometricCenterline Property Definitions ********
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadNetwork_eventFindClosestPointOnRoadGeometricCenterline_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ClosestPoint = { "ClosestPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadNetwork_eventFindClosestPointOnRoadGeometricCenterline_Parms, ClosestPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ClosestRoad = { "ClosestRoad", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadNetwork_eventFindClosestPointOnRoadGeometricCenterline_Parms, ClosestRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_DistanceAlongRoad = { "DistanceAlongRoad", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadNetwork_eventFindClosestPointOnRoadGeometricCenterline_Parms, DistanceAlongRoad), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoadToIgnore = { "RoadToIgnore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadNetwork_eventFindClosestPointOnRoadGeometricCenterline_Parms, RoadToIgnore), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClosestPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClosestRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DistanceAlongRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadToIgnore,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function FindClosestPointOnRoadGeometricCenterline Property Definitions **********
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoadNetwork, nullptr, "FindClosestPointOnRoadGeometricCenterline", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoadNetwork_eventFindClosestPointOnRoadGeometricCenterline_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoadNetwork_eventFindClosestPointOnRoadGeometricCenterline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoadNetwork_FindClosestPointOnRoadGeometricCenterline(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoadNetwork::execFindClosestPointOnRoadGeometricCenterline)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ClosestPoint);
	P_GET_OBJECT_REF(ADynamicRoad,Z_Param_Out_ClosestRoad);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_DistanceAlongRoad);
	P_GET_OBJECT(ADynamicRoad,Z_Param_RoadToIgnore);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindClosestPointOnRoadGeometricCenterline(Z_Param_Location,Z_Param_Out_ClosestPoint,P_ARG_GC_BARRIER(Z_Param_Out_ClosestRoad),Z_Param_Out_DistanceAlongRoad,Z_Param_RoadToIgnore);
	P_NATIVE_END;
}
// ********** End Class ADynamicRoadNetwork Function FindClosestPointOnRoadGeometricCenterline *****

// ********** Begin Class ADynamicRoadNetwork Function GetCumulativeRoadLength *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoadNetwork_GetCumulativeRoadLength_Statics
struct UHT_STATICS
{
	struct DynamicRoadNetwork_eventGetCumulativeRoadLength_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Road Network" },
		{ "Comment", "/** Sum of ADynamicRoad::GetLength() across every valid road in RoadsInNetwork. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Sum of ADynamicRoad::GetLength() across every valid road in RoadsInNetwork." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCumulativeRoadLength constinit property declarations ***************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCumulativeRoadLength constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCumulativeRoadLength Property Definitions **************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadNetwork_eventGetCumulativeRoadLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCumulativeRoadLength Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoadNetwork, nullptr, "GetCumulativeRoadLength", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoadNetwork_eventGetCumulativeRoadLength_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoadNetwork_eventGetCumulativeRoadLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoadNetwork_GetCumulativeRoadLength(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoadNetwork::execGetCumulativeRoadLength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetCumulativeRoadLength();
	P_NATIVE_END;
}
// ********** End Class ADynamicRoadNetwork Function GetCumulativeRoadLength ***********************

// ********** Begin Class ADynamicRoadNetwork Function GetPotentiallyOverlappingRoads **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoadNetwork_GetPotentiallyOverlappingRoads_Statics
struct UHT_STATICS
{
	struct DynamicRoadNetwork_eventGetPotentiallyOverlappingRoads_Parms
	{
		ADynamicRoad* TargetRoad;
		TArray<ADynamicRoad*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Road Network" },
		{ "Comment", "/**\n\x09 * Gets all roads potentially overlapping a given road using sphere traces.\n\x09 * Performs sphere traces at 10,000 unit intervals along the target road with a 10,000 unit radius.\n\x09 * Traces for RoadGeo actors and returns all unique source roads found (excluding the target road).\n\x09 * This is a preparatory method for precise intersection testing that will be implemented later.\n\x09 * @param TargetRoad - The road to find potential overlaps for\n\x09 * @return Array of roads that potentially overlap with the target road\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Gets all roads potentially overlapping a given road using sphere traces.\nPerforms sphere traces at 10,000 unit intervals along the target road with a 10,000 unit radius.\nTraces for RoadGeo actors and returns all unique source roads found (excluding the target road).\nThis is a preparatory method for precise intersection testing that will be implemented later.\n@param TargetRoad - The road to find potential overlaps for\n@return Array of roads that potentially overlap with the target road" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPotentiallyOverlappingRoads constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetRoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPotentiallyOverlappingRoads constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPotentiallyOverlappingRoads Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetRoad = { "TargetRoad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadNetwork_eventGetPotentiallyOverlappingRoads_Parms, TargetRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadNetwork_eventGetPotentiallyOverlappingRoads_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPotentiallyOverlappingRoads Property Definitions *********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoadNetwork, nullptr, "GetPotentiallyOverlappingRoads", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoadNetwork_eventGetPotentiallyOverlappingRoads_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoadNetwork_eventGetPotentiallyOverlappingRoads_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoadNetwork_GetPotentiallyOverlappingRoads(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoadNetwork::execGetPotentiallyOverlappingRoads)
{
	P_GET_OBJECT(ADynamicRoad,Z_Param_TargetRoad);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ADynamicRoad*>*)Z_Param__Result=P_THIS->GetPotentiallyOverlappingRoads(Z_Param_TargetRoad);
	P_NATIVE_END;
}
// ********** End Class ADynamicRoadNetwork Function GetPotentiallyOverlappingRoads ****************

// ********** Begin Class ADynamicRoadNetwork Function IsPreviewModeEnabled ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoadNetwork_IsPreviewModeEnabled_Statics
struct UHT_STATICS
{
	struct DynamicRoadNetwork_eventIsPreviewModeEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Build" },
		{ "Comment", "/**\n\x09 * True when this network should build low-poly proxy geometry instead of final road meshes.\n\x09 * Always true when URoadBLDRuntimeSettings::bAlwaysUsePreviewMode is set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "True when this network should build low-poly proxy geometry instead of final road meshes.\nAlways true when URoadBLDRuntimeSettings::bAlwaysUsePreviewMode is set." },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPreviewModeEnabled constinit property declarations ******************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DynamicRoadNetwork_eventIsPreviewModeEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPreviewModeEnabled constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPreviewModeEnabled Property Definitions *****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicRoadNetwork_eventIsPreviewModeEnabled_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsPreviewModeEnabled Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoadNetwork, nullptr, "IsPreviewModeEnabled", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoadNetwork_eventIsPreviewModeEnabled_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoadNetwork_eventIsPreviewModeEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoadNetwork_IsPreviewModeEnabled(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoadNetwork::execIsPreviewModeEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPreviewModeEnabled();
	P_NATIVE_END;
}
// ********** End Class ADynamicRoadNetwork Function IsPreviewModeEnabled **************************

// ********** Begin Class ADynamicRoadNetwork Function IsRoadNetworkStale **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoadNetwork_IsRoadNetworkStale_Statics
struct UHT_STATICS
{
	struct DynamicRoadNetwork_eventIsRoadNetworkStale_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Road Network" },
		{ "Comment", "/** Returns true when this network has pending edits that require a full rebuild commit. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Returns true when this network has pending edits that require a full rebuild commit." },
	};
#endif // WITH_METADATA

// ********** Begin Function IsRoadNetworkStale constinit property declarations ********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DynamicRoadNetwork_eventIsRoadNetworkStale_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsRoadNetworkStale constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsRoadNetworkStale Property Definitions *******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicRoadNetwork_eventIsRoadNetworkStale_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsRoadNetworkStale Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoadNetwork, nullptr, "IsRoadNetworkStale", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoadNetwork_eventIsRoadNetworkStale_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoadNetwork_eventIsRoadNetworkStale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoadNetwork_IsRoadNetworkStale(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoadNetwork::execIsRoadNetworkStale)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRoadNetworkStale();
	P_NATIVE_END;
}
// ********** End Class ADynamicRoadNetwork Function IsRoadNetworkStale ****************************

// ********** Begin Class ADynamicRoadNetwork Function MeetsPreviewModeCriteria ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoadNetwork_MeetsPreviewModeCriteria_Statics
struct UHT_STATICS
{
	struct DynamicRoadNetwork_eventMeetsPreviewModeCriteria_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Build" },
		{ "Comment", "/**\n\x09 * True when this network is large enough for Preview Mode to be offered: more than 15 roads,\n\x09 * or more than 100000 uu of cumulative road length. Always true when bAlwaysUsePreviewMode is set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "True when this network is large enough for Preview Mode to be offered: more than 15 roads,\nor more than 100000 uu of cumulative road length. Always true when bAlwaysUsePreviewMode is set." },
	};
#endif // WITH_METADATA

// ********** Begin Function MeetsPreviewModeCriteria constinit property declarations **************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DynamicRoadNetwork_eventMeetsPreviewModeCriteria_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MeetsPreviewModeCriteria constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MeetsPreviewModeCriteria Property Definitions *************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicRoadNetwork_eventMeetsPreviewModeCriteria_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MeetsPreviewModeCriteria Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoadNetwork, nullptr, "MeetsPreviewModeCriteria", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoadNetwork_eventMeetsPreviewModeCriteria_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoadNetwork_eventMeetsPreviewModeCriteria_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoadNetwork_MeetsPreviewModeCriteria(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoadNetwork::execMeetsPreviewModeCriteria)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->MeetsPreviewModeCriteria();
	P_NATIVE_END;
}
// ********** End Class ADynamicRoadNetwork Function MeetsPreviewModeCriteria **********************

// ********** Begin Class ADynamicRoadNetwork Function RebuildRoadNetworkIncremental ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoadNetwork_RebuildRoadNetworkIncremental_Statics
struct UHT_STATICS
{
	struct DynamicRoadNetwork_eventRebuildRoadNetworkIncremental_Parms
	{
		TArray<ADynamicRoad*> ModifiedRoads;
		TArray<ADynamicRoad*> RoadsToIgnore;
		bool bForceRebuildAffectedRoads;
		bool bLowQualityMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Road Network" },
		{ "Comment", "/**\n\x09 * Performs an incremental rebuild of the road network, only updating roads and intersections\n\x09 * that are affected by the modified road. This is much faster than a full rebuild.\n\x09 * @param ModifiedRoads - The roads that were modified, triggering the incremental update\n\x09 * @param RoadsToIgnore - Roads to skip during all rebuild steps (tracing, intersection detection, mesh building, etc.)\n\x09 * @param bForceRebuildAffectedRoads - If true, disables unchanged-loop reuse during commit and rebuilds all affected road geometry.\n\x09 */" },
		{ "CPP_Default_bForceRebuildAffectedRoads", "false" },
		{ "CPP_Default_bLowQualityMesh", "false" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Performs an incremental rebuild of the road network, only updating roads and intersections\nthat are affected by the modified road. This is much faster than a full rebuild.\n@param ModifiedRoads - The roads that were modified, triggering the incremental update\n@param RoadsToIgnore - Roads to skip during all rebuild steps (tracing, intersection detection, mesh building, etc.)\n@param bForceRebuildAffectedRoads - If true, disables unchanged-loop reuse during commit and rebuilds all affected road geometry." },
	};
#endif // WITH_METADATA

// ********** Begin Function RebuildRoadNetworkIncremental constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ModifiedRoads_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedRoads;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoadsToIgnore_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoadsToIgnore;
	static void NewProp_bForceRebuildAffectedRoads_SetBit(void* Obj)
	{
		((DynamicRoadNetwork_eventRebuildRoadNetworkIncremental_Parms*)Obj)->bForceRebuildAffectedRoads = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRebuildAffectedRoads;
	static void NewProp_bLowQualityMesh_SetBit(void* Obj)
	{
		((DynamicRoadNetwork_eventRebuildRoadNetworkIncremental_Parms*)Obj)->bLowQualityMesh = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLowQualityMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RebuildRoadNetworkIncremental constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RebuildRoadNetworkIncremental Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ModifiedRoads_Inner = { "ModifiedRoads", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ModifiedRoads = { "ModifiedRoads", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadNetwork_eventRebuildRoadNetworkIncremental_Parms, ModifiedRoads), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoadsToIgnore_Inner = { "RoadsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RoadsToIgnore = { "RoadsToIgnore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadNetwork_eventRebuildRoadNetworkIncremental_Parms, RoadsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bForceRebuildAffectedRoads = { "bForceRebuildAffectedRoads", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicRoadNetwork_eventRebuildRoadNetworkIncremental_Parms), &UHT_STATICS::NewProp_bForceRebuildAffectedRoads_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLowQualityMesh = { "bLowQualityMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicRoadNetwork_eventRebuildRoadNetworkIncremental_Parms), &UHT_STATICS::NewProp_bLowQualityMesh_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ModifiedRoads_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ModifiedRoads,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadsToIgnore_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadsToIgnore,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bForceRebuildAffectedRoads,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLowQualityMesh,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RebuildRoadNetworkIncremental Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoadNetwork, nullptr, "RebuildRoadNetworkIncremental", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoadNetwork_eventRebuildRoadNetworkIncremental_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoadNetwork_eventRebuildRoadNetworkIncremental_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADynamicRoadNetwork_RebuildRoadNetworkIncremental(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoadNetwork::execRebuildRoadNetworkIncremental)
{
	P_GET_TARRAY(ADynamicRoad*,Z_Param_ModifiedRoads);
	P_GET_TARRAY(ADynamicRoad*,Z_Param_RoadsToIgnore);
	P_GET_UBOOL(Z_Param_bForceRebuildAffectedRoads);
	P_GET_UBOOL(Z_Param_bLowQualityMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RebuildRoadNetworkIncremental(Z_Param_ModifiedRoads,Z_Param_RoadsToIgnore,Z_Param_bForceRebuildAffectedRoads,Z_Param_bLowQualityMesh);
	P_NATIVE_END;
}
// ********** End Class ADynamicRoadNetwork Function RebuildRoadNetworkIncremental *****************

// ********** Begin Class ADynamicRoadNetwork Function RecreateRoadNetwork *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoadNetwork_RecreateRoadNetwork_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "RoadBLD|Road Network" },
		{ "Comment", "/**\n\x09 * Recreates the entire road network in place to fix corrupted data.\n\x09 * Destroys and respawns all road actors while maintaining all their original properties.\n\x09 * Preserves ControlPoints, EdgeCurve OffsetPoints, Lane configurations, and all other settings.\n\x09 * After recreation, calls RebuildRoadNetworkIncremental for a full rebuild to regenerate all geometry and intersections.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Recreates the entire road network in place to fix corrupted data.\nDestroys and respawns all road actors while maintaining all their original properties.\nPreserves ControlPoints, EdgeCurve OffsetPoints, Lane configurations, and all other settings.\nAfter recreation, calls RebuildRoadNetworkIncremental for a full rebuild to regenerate all geometry and intersections." },
	};
#endif // WITH_METADATA

// ********** Begin Function RecreateRoadNetwork constinit property declarations *******************
// ********** End Function RecreateRoadNetwork constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoadNetwork, nullptr, "RecreateRoadNetwork", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ADynamicRoadNetwork_RecreateRoadNetwork(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoadNetwork::execRecreateRoadNetwork)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RecreateRoadNetwork();
	P_NATIVE_END;
}
// ********** End Class ADynamicRoadNetwork Function RecreateRoadNetwork ***************************

// ********** Begin Class ADynamicRoadNetwork Function ValidateRoadNetwork *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ADynamicRoadNetwork_ValidateRoadNetwork_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "RoadBLD|Debug" },
		{ "Comment", "/**\n\x09 * Validates the entire road network and reports any errors found.\n\x09 * Checks include:\n\x09 * 1) All EdgeCurves are valid\n\x09 * 2) All store-backed corners have valid edge references\n\x09 * 3) All curve objects have non-empty polylines\n\x09 * 4) All roads have valid lanes with valid left/right edge references\n\x09 * 5) Any stray road actors in the level that are not children of this network\n\x09 * Prints issues to log and on-screen for quick debugging.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Validates the entire road network and reports any errors found.\nChecks include:\n1) All EdgeCurves are valid\n2) All store-backed corners have valid edge references\n3) All curve objects have non-empty polylines\n4) All roads have valid lanes with valid left/right edge references\n5) Any stray road actors in the level that are not children of this network\nPrints issues to log and on-screen for quick debugging." },
	};
#endif // WITH_METADATA

// ********** Begin Function ValidateRoadNetwork constinit property declarations *******************
// ********** End Function ValidateRoadNetwork constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ADynamicRoadNetwork, nullptr, "ValidateRoadNetwork", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ADynamicRoadNetwork_ValidateRoadNetwork(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ADynamicRoadNetwork::execValidateRoadNetwork)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ValidateRoadNetwork();
	P_NATIVE_END;
}
// ********** End Class ADynamicRoadNetwork Function ValidateRoadNetwork ***************************

// ********** Begin Class ADynamicRoadNetwork ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ADynamicRoadNetwork_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "DynamicRoad/DynamicRoadNetwork.h" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoreData_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetworkID_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadsInNetwork_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomShapesInNetwork_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FreehandMarkings_MetaData[] = {
		{ "Category", "RoadBLD|Markings" },
		{ "Comment", "// Freehand markings that are independent of specific roads\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Freehand markings that are independent of specific roads" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinBoxHeight_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseClipperForSidewalkOffset_MetaData[] = {
		{ "Category", "DynamicRoad|Sidewalks" },
		{ "Comment", "/** Whether to use Clipper2 for sidewalk offsetting to prevent self-intersections */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Whether to use Clipper2 for sidewalk offsetting to prevent self-intersections" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClipperJoinType_MetaData[] = {
		{ "Category", "DynamicRoad|Sidewalks" },
		{ "Comment", "/** Join type for Clipper2 offset operations (Round=2, Miter=3, Square=0, Bevel=1) */" },
		{ "EditCondition", "bUseClipperForSidewalkOffset" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Join type for Clipper2 offset operations (Round=2, Miter=3, Square=0, Bevel=1)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClipperArcTolerance_MetaData[] = {
		{ "Category", "DynamicRoad|Sidewalks" },
		{ "Comment", "/** Arc tolerance for Clipper2 offset (smaller = smoother curves, more vertices) */" },
		{ "EditCondition", "bUseClipperForSidewalkOffset" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Arc tolerance for Clipper2 offset (smaller = smoother curves, more vertices)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BooleanSurfaceInflateEpsilon_MetaData[] = {
		{ "Category", "RoadBLD|Network|Surface" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Inflation amount (cm) used to bridge micro-gaps between road polygons before boolean union. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Inflation amount (cm) used to bridge micro-gaps between road polygons before boolean union." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawBooleanSurface_MetaData[] = {
		{ "Category", "RoadBLD|Network|Surface" },
		{ "Comment", "/** Draws the Clipper union polygon outlines as persistent debug lines after a boolean surface rebuild. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Draws the Clipper union polygon outlines as persistent debug lines after a boolean surface rebuild." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadNetworkTileSize_MetaData[] = {
		{ "Category", "RoadBLD|Tiles" },
		{ "ClampMax", "1000000.0" },
		{ "ClampMin", "1000.0" },
		{ "Comment", "/** World-XY size of one road-network tile (cm). Grid is origin-aligned; occupancy is sparse. */" },
		{ "DisplayName", "Road Network Tile Size (cm)" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "World-XY size of one road-network tile (cm). Grid is origin-aligned; occupancy is sparse." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawRoadNetworkTiles_MetaData[] = {
		{ "Category", "RoadBLD|Tiles" },
		{ "Comment", "/** When enabled, editor Tick redraws last-rebuild stale/affected tile boxes every frame. */" },
		{ "DisplayName", "Debug Draw Road Network Tiles" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "When enabled, editor Tick redraws last-rebuild stale/affected tile boxes every frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CornerEditData_MetaData[] = {
		{ "Category", "MeshPerimeters" },
		{ "Comment", "/**\n\x09 * Persistent corner edit data (offsets/radius) used by the rebuild refactor to preserve user edits.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Persistent corner edit data (offsets/radius) used by the rebuild refactor to preserve user edits." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionPatchOverrides_MetaData[] = {
		{ "Comment", "/** Per-intersection landscape patch overrides keyed by rebuild loop signature. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Per-intersection landscape patch overrides keyed by rebuild loop signature." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CornerMeshScaleFactor_MetaData[] = {
		{ "Category", "Corner Geometry" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Scale factor to enlarge corner meshes to ensure they overlap with road geometry */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Scale factor to enlarge corner meshes to ensure they overlap with road geometry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNeedsRebuild_MetaData[] = {
		{ "Comment", "/** Deferred rebuild flag for undo/redo integration (used by the rebuild refactor). */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Deferred rebuild flag for undo/redo integration (used by the rebuild refactor)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsStaleForBuild_MetaData[] = {
		{ "Category", "RoadBLD|Build" },
		{ "Comment", "/** True when this network needs a full rebuild commit before it is considered up to date. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "True when this network needs a full rebuild commit before it is considered up to date." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewModeEnabled_MetaData[] = {
		{ "Category", "RoadBLD|Build" },
		{ "Comment", "/**\n\x09 * True when this network builds low-poly proxy geometry instead of final road meshes.\n\x09 * Persisted with the level: the proxy RoadGeo actors themselves are transient, so this flag is\n\x09 * what tells the editor to regenerate them when the map is reopened.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "True when this network builds low-poly proxy geometry instead of final road meshes.\nPersisted with the level: the proxy RoadGeo actors themselves are transient, so this flag is\nwhat tells the editor to regenerate them when the map is reopened." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RebuildGeneration_MetaData[] = {
		{ "Comment", "/** Incremented per rebuild for debugging/telemetry (used by the rebuild refactor). */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "Incremented per rebuild for debugging/telemetry (used by the rebuild refactor)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRebuildInProgress_MetaData[] = {
		{ "Comment", "// === Async rebuild state (all Transient, no serialization) ===\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
		{ "ToolTip", "=== Async rebuild state (all Transient, no serialization) ===" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRebuildDirty_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadNetwork.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ADynamicRoadNetwork constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StoreData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NetworkID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoadsInNetwork_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoadsInNetwork;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomShapesInNetwork_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomShapesInNetwork;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FreehandMarkings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FreehandMarkings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinBoxHeight;
	static void NewProp_bUseClipperForSidewalkOffset_SetBit(void* Obj)
	{
		((ADynamicRoadNetwork*)Obj)->bUseClipperForSidewalkOffset = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseClipperForSidewalkOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClipperJoinType;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ClipperArcTolerance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_BooleanSurfaceInflateEpsilon;
	static void NewProp_bDebugDrawBooleanSurface_SetBit(void* Obj)
	{
		((ADynamicRoadNetwork*)Obj)->bDebugDrawBooleanSurface = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawBooleanSurface;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RoadNetworkTileSize;
	static void NewProp_bDebugDrawRoadNetworkTiles_SetBit(void* Obj)
	{
		((ADynamicRoadNetwork*)Obj)->bDebugDrawRoadNetworkTiles = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawRoadNetworkTiles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CornerEditData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CornerEditData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IntersectionPatchOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IntersectionPatchOverrides;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CornerMeshScaleFactor;
	static void NewProp_bNeedsRebuild_SetBit(void* Obj)
	{
		((ADynamicRoadNetwork*)Obj)->bNeedsRebuild = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsRebuild;
	static void NewProp_bIsStaleForBuild_SetBit(void* Obj)
	{
		((ADynamicRoadNetwork*)Obj)->bIsStaleForBuild = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStaleForBuild;
	static void NewProp_bPreviewModeEnabled_SetBit(void* Obj)
	{
		((ADynamicRoadNetwork*)Obj)->bPreviewModeEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewModeEnabled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RebuildGeneration;
	static void NewProp_bRebuildInProgress_SetBit(void* Obj)
	{
		((ADynamicRoadNetwork*)Obj)->bRebuildInProgress = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRebuildInProgress;
	static void NewProp_bRebuildDirty_SetBit(void* Obj)
	{
		((ADynamicRoadNetwork*)Obj)->bRebuildDirty = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRebuildDirty;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ADynamicRoadNetwork constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AbortAndWaitForPendingRebuild"), .Pointer = &ADynamicRoadNetwork::execAbortAndWaitForPendingRebuild },
		{ .NameUTF8 = UTF8TEXT("AddRoadToRoadNetwork"), .Pointer = &ADynamicRoadNetwork::execAddRoadToRoadNetwork },
		{ .NameUTF8 = UTF8TEXT("FindClosestPointOnRoadCenterline"), .Pointer = &ADynamicRoadNetwork::execFindClosestPointOnRoadCenterline },
		{ .NameUTF8 = UTF8TEXT("FindClosestPointOnRoadEdge"), .Pointer = &ADynamicRoadNetwork::execFindClosestPointOnRoadEdge },
		{ .NameUTF8 = UTF8TEXT("FindClosestPointOnRoadGeometricCenterline"), .Pointer = &ADynamicRoadNetwork::execFindClosestPointOnRoadGeometricCenterline },
		{ .NameUTF8 = UTF8TEXT("GetCumulativeRoadLength"), .Pointer = &ADynamicRoadNetwork::execGetCumulativeRoadLength },
		{ .NameUTF8 = UTF8TEXT("GetPotentiallyOverlappingRoads"), .Pointer = &ADynamicRoadNetwork::execGetPotentiallyOverlappingRoads },
		{ .NameUTF8 = UTF8TEXT("IsPreviewModeEnabled"), .Pointer = &ADynamicRoadNetwork::execIsPreviewModeEnabled },
		{ .NameUTF8 = UTF8TEXT("IsRoadNetworkStale"), .Pointer = &ADynamicRoadNetwork::execIsRoadNetworkStale },
		{ .NameUTF8 = UTF8TEXT("MeetsPreviewModeCriteria"), .Pointer = &ADynamicRoadNetwork::execMeetsPreviewModeCriteria },
		{ .NameUTF8 = UTF8TEXT("RebuildRoadNetworkIncremental"), .Pointer = &ADynamicRoadNetwork::execRebuildRoadNetworkIncremental },
		{ .NameUTF8 = UTF8TEXT("RecreateRoadNetwork"), .Pointer = &ADynamicRoadNetwork::execRecreateRoadNetwork },
		{ .NameUTF8 = UTF8TEXT("ValidateRoadNetwork"), .Pointer = &ADynamicRoadNetwork::execValidateRoadNetwork },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADynamicRoadNetwork_AbortAndWaitForPendingRebuild, "AbortAndWaitForPendingRebuild" }, // 5824e210b902b9907c8fbcd79ed6c546bdccec8e
		{ &Z_Construct_UFunction_ADynamicRoadNetwork_AddRoadToRoadNetwork, "AddRoadToRoadNetwork" }, // 4f7bdc568102a238602ce1efeaf1b9d77c338efc
		{ &Z_Construct_UFunction_ADynamicRoadNetwork_FindClosestPointOnRoadCenterline, "FindClosestPointOnRoadCenterline" }, // 91aab509362912c1b033c0ce076c720cee77e3be
		{ &Z_Construct_UFunction_ADynamicRoadNetwork_FindClosestPointOnRoadEdge, "FindClosestPointOnRoadEdge" }, // f71ac32fd1d0ae9b007ca03e1f8fd49d7cc975be
		{ &Z_Construct_UFunction_ADynamicRoadNetwork_FindClosestPointOnRoadGeometricCenterline, "FindClosestPointOnRoadGeometricCenterline" }, // 8a4e3f502c0ada7c733b0c1d5887e9f9d7afd6d7
		{ &Z_Construct_UFunction_ADynamicRoadNetwork_GetCumulativeRoadLength, "GetCumulativeRoadLength" }, // db830c3d0f89860ca58d3c5d6fd3a5aa883da4c5
		{ &Z_Construct_UFunction_ADynamicRoadNetwork_GetPotentiallyOverlappingRoads, "GetPotentiallyOverlappingRoads" }, // 7c7379b7ff3bc5522911e15275cfc860c461b943
		{ &Z_Construct_UFunction_ADynamicRoadNetwork_IsPreviewModeEnabled, "IsPreviewModeEnabled" }, // 0a27b053e1eb4654177b4e34eae05f5c1b2bf5a6
		{ &Z_Construct_UFunction_ADynamicRoadNetwork_IsRoadNetworkStale, "IsRoadNetworkStale" }, // 2cab049c3420923e1017a8d753ec04a6877e257b
		{ &Z_Construct_UFunction_ADynamicRoadNetwork_MeetsPreviewModeCriteria, "MeetsPreviewModeCriteria" }, // 32038f9efd74fcbdffb69412aa2dc5c882362e47
		{ &Z_Construct_UFunction_ADynamicRoadNetwork_RebuildRoadNetworkIncremental, "RebuildRoadNetworkIncremental" }, // 34ba68e0c1e0698b36ba664e66f0a7b90c9f61bc
		{ &Z_Construct_UFunction_ADynamicRoadNetwork_RecreateRoadNetwork, "RecreateRoadNetwork" }, // 2ef22ad97e67842d7c228cb3f98ea55dcfa05b59
		{ &Z_Construct_UFunction_ADynamicRoadNetwork_ValidateRoadNetwork, "ValidateRoadNetwork" }, // 1e2076d0d328bdcb38ff16c682b4d20729286817
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADynamicRoadNetwork>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ADynamicRoadNetwork Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StoreData = { "StoreData", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoadNetwork, StoreData), Z_Construct_UClass_UCityRoadNetworkStoreData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoreData_MetaData), NewProp_StoreData_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NetworkID = { "NetworkID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoadNetwork, NetworkID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetworkID_MetaData), NewProp_NetworkID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoadsInNetwork_Inner = { "RoadsInNetwork", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RoadsInNetwork = { "RoadsInNetwork", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoadNetwork, RoadsInNetwork), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadsInNetwork_MetaData), NewProp_RoadsInNetwork_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CustomShapesInNetwork_Inner = { "CustomShapesInNetwork", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_ACustomRoadShape, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_CustomShapesInNetwork = { "CustomShapesInNetwork", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoadNetwork, CustomShapesInNetwork), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomShapesInNetwork_MetaData), NewProp_CustomShapesInNetwork_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_FreehandMarkings_Inner = { "FreehandMarkings", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoadMarkingLine, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_FreehandMarkings = { "FreehandMarkings", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoadNetwork, FreehandMarkings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FreehandMarkings_MetaData), NewProp_FreehandMarkings_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MinBoxHeight = { "MinBoxHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoadNetwork, MinBoxHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinBoxHeight_MetaData), NewProp_MinBoxHeight_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseClipperForSidewalkOffset = { "bUseClipperForSidewalkOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ADynamicRoadNetwork), &UHT_STATICS::NewProp_bUseClipperForSidewalkOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseClipperForSidewalkOffset_MetaData), NewProp_bUseClipperForSidewalkOffset_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ClipperJoinType = { "ClipperJoinType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoadNetwork, ClipperJoinType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClipperJoinType_MetaData), NewProp_ClipperJoinType_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ClipperArcTolerance = { "ClipperArcTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoadNetwork, ClipperArcTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClipperArcTolerance_MetaData), NewProp_ClipperArcTolerance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_BooleanSurfaceInflateEpsilon = { "BooleanSurfaceInflateEpsilon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoadNetwork, BooleanSurfaceInflateEpsilon), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BooleanSurfaceInflateEpsilon_MetaData), NewProp_BooleanSurfaceInflateEpsilon_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDebugDrawBooleanSurface = { "bDebugDrawBooleanSurface", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ADynamicRoadNetwork), &UHT_STATICS::NewProp_bDebugDrawBooleanSurface_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugDrawBooleanSurface_MetaData), NewProp_bDebugDrawBooleanSurface_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_RoadNetworkTileSize = { "RoadNetworkTileSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoadNetwork, RoadNetworkTileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadNetworkTileSize_MetaData), NewProp_RoadNetworkTileSize_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDebugDrawRoadNetworkTiles = { "bDebugDrawRoadNetworkTiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ADynamicRoadNetwork), &UHT_STATICS::NewProp_bDebugDrawRoadNetworkTiles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugDrawRoadNetworkTiles_MetaData), NewProp_bDebugDrawRoadNetworkTiles_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CornerEditData_Inner = { "CornerEditData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRoadCornerEditData, METADATA_PARAMS(0, nullptr) }; // 328180c724293e3903b13348bb6d9f5fc6eb04b8
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_CornerEditData = { "CornerEditData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoadNetwork, CornerEditData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CornerEditData_MetaData), NewProp_CornerEditData_MetaData) }; // 328180c724293e3903b13348bb6d9f5fc6eb04b8
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_IntersectionPatchOverrides_Inner = { "IntersectionPatchOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntersectionPatchOverride, METADATA_PARAMS(0, nullptr) }; // 26016621f561ac23864f6d88d51485984609ffec
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_IntersectionPatchOverrides = { "IntersectionPatchOverrides", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoadNetwork, IntersectionPatchOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionPatchOverrides_MetaData), NewProp_IntersectionPatchOverrides_MetaData) }; // 26016621f561ac23864f6d88d51485984609ffec
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CornerMeshScaleFactor = { "CornerMeshScaleFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoadNetwork, CornerMeshScaleFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CornerMeshScaleFactor_MetaData), NewProp_CornerMeshScaleFactor_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bNeedsRebuild = { "bNeedsRebuild", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ADynamicRoadNetwork), &UHT_STATICS::NewProp_bNeedsRebuild_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNeedsRebuild_MetaData), NewProp_bNeedsRebuild_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsStaleForBuild = { "bIsStaleForBuild", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ADynamicRoadNetwork), &UHT_STATICS::NewProp_bIsStaleForBuild_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsStaleForBuild_MetaData), NewProp_bIsStaleForBuild_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPreviewModeEnabled = { "bPreviewModeEnabled", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ADynamicRoadNetwork), &UHT_STATICS::NewProp_bPreviewModeEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreviewModeEnabled_MetaData), NewProp_bPreviewModeEnabled_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_RebuildGeneration = { "RebuildGeneration", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ADynamicRoadNetwork, RebuildGeneration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RebuildGeneration_MetaData), NewProp_RebuildGeneration_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRebuildInProgress = { "bRebuildInProgress", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ADynamicRoadNetwork), &UHT_STATICS::NewProp_bRebuildInProgress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRebuildInProgress_MetaData), NewProp_bRebuildInProgress_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRebuildDirty = { "bRebuildDirty", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ADynamicRoadNetwork), &UHT_STATICS::NewProp_bRebuildDirty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRebuildDirty_MetaData), NewProp_bRebuildDirty_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StoreData,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NetworkID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadsInNetwork_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadsInNetwork,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomShapesInNetwork_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomShapesInNetwork,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FreehandMarkings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FreehandMarkings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinBoxHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseClipperForSidewalkOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClipperJoinType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClipperArcTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BooleanSurfaceInflateEpsilon,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDebugDrawBooleanSurface,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadNetworkTileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDebugDrawRoadNetworkTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CornerEditData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CornerEditData,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IntersectionPatchOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IntersectionPatchOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CornerMeshScaleFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bNeedsRebuild,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsStaleForBuild,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPreviewModeEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RebuildGeneration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRebuildInProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRebuildDirty,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ADynamicRoadNetwork Property Definitions ***********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ADynamicRoadNetwork,
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
static void ADynamicRoadNetwork_StaticRegisterNativesADynamicRoadNetwork()
{
	UClass* Class = ADynamicRoadNetwork::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADynamicRoadNetwork;
UClass* Z_Construct_UClass_ADynamicRoadNetwork(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ADynamicRoadNetwork;
		if (!Z_Registration_Info_UClass_ADynamicRoadNetwork.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DynamicRoadNetwork"),
				Z_Registration_Info_UClass_ADynamicRoadNetwork.InnerSingleton,
				ADynamicRoadNetwork_StaticRegisterNativesADynamicRoadNetwork,
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
		return Z_Registration_Info_UClass_ADynamicRoadNetwork.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ADynamicRoadNetwork.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADynamicRoadNetwork.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ADynamicRoadNetwork.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ADynamicRoadNetwork);
ADynamicRoadNetwork::~ADynamicRoadNetwork() {}
// ********** End Class ADynamicRoadNetwork ********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadNetwork_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RoadBLDRuntime_EPerimeterTraversalObject, TEXT("EPerimeterTraversalObject"), &ZRIE_EPerimeterTraversalObject, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4253244550U) },
		{ Z_Construct_UEnum_RoadBLDRuntime_EPerimeterElementType, TEXT("EPerimeterElementType"), &ZRIE_EPerimeterElementType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4118102545U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FRoadMarkingMask, Z_Construct_UScriptStruct_FRoadMarkingMask_Statics::NewStructOps, TEXT("RoadMarkingMask"),&Z_Registration_Info_UScriptStruct_FRoadMarkingMask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadMarkingMask), 3323171304U) },
		{ Z_Construct_UScriptStruct_FPerimeterCut, Z_Construct_UScriptStruct_FPerimeterCut_Statics::NewStructOps, TEXT("PerimeterCut"),&Z_Registration_Info_UScriptStruct_FPerimeterCut, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerimeterCut), 2455480489U) },
		{ Z_Construct_UScriptStruct_FRoadCornerEditData, Z_Construct_UScriptStruct_FRoadCornerEditData_Statics::NewStructOps, TEXT("RoadCornerEditData"),&Z_Registration_Info_UScriptStruct_FRoadCornerEditData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadCornerEditData), 847347911U) },
		{ Z_Construct_UScriptStruct_FIntersectionPatchOverride, Z_Construct_UScriptStruct_FIntersectionPatchOverride_Statics::NewStructOps, TEXT("IntersectionPatchOverride"),&Z_Registration_Info_UScriptStruct_FIntersectionPatchOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIntersectionPatchOverride), 637625889U) },
		{ Z_Construct_UScriptStruct_FShoulderMaskCut, Z_Construct_UScriptStruct_FShoulderMaskCut_Statics::NewStructOps, TEXT("ShoulderMaskCut"),&Z_Registration_Info_UScriptStruct_FShoulderMaskCut, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShoulderMaskCut), 928305137U) },
		{ Z_Construct_UScriptStruct_FShoulderEdgeCurvePair, Z_Construct_UScriptStruct_FShoulderEdgeCurvePair_Statics::NewStructOps, TEXT("ShoulderEdgeCurvePair"),&Z_Registration_Info_UScriptStruct_FShoulderEdgeCurvePair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShoulderEdgeCurvePair), 1002846978U) },
		{ Z_Construct_UScriptStruct_FIntersectionMask, Z_Construct_UScriptStruct_FIntersectionMask_Statics::NewStructOps, TEXT("IntersectionMask"),&Z_Registration_Info_UScriptStruct_FIntersectionMask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIntersectionMask), 1784299886U) },
		{ Z_Construct_UScriptStruct_FPedestrianCornerConnectorSegment, Z_Construct_UScriptStruct_FPedestrianCornerConnectorSegment_Statics::NewStructOps, TEXT("PedestrianCornerConnectorSegment"),&Z_Registration_Info_UScriptStruct_FPedestrianCornerConnectorSegment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPedestrianCornerConnectorSegment), 1962308143U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADynamicRoadNetwork, TEXT("ADynamicRoadNetwork"), &Z_Registration_Info_UClass_ADynamicRoadNetwork, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADynamicRoadNetwork), 3547553558U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadNetwork_h__Script_RoadBLDRuntime_46a303854056265b3f1b6deb0ce5170a90dea58c{
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
