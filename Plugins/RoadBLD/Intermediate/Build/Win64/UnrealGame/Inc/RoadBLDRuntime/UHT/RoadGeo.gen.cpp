// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoadGeo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRoadGeo() {}

// ********** Begin Cross Module References ********************************************************
WORLDBLDRUNTIME_API UClass* Z_Construct_UClass_AWorldBLDGeo(ETypeConstructPhase);
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent(ETypeConstructPhase);
PCG_API UClass* Z_Construct_UClass_UPCGComponent(ETypeConstructPhase);
WORLDBLDRUNTIME_API UClass* Z_Construct_UClass_IWorldBLDContextMenuProvider(ETypeConstructPhase);
WORLDBLDRUNTIME_API UClass* Z_Construct_UClass_UWorldBLDKitElementComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ARoadGeo(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadGeoSidewalkPartitionInterval(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ACustomRoadShape(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoad(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UEdgeCurve(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ARoadGeo(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FRoadGeoSidewalkPartitionInterval *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRoadGeoSidewalkPartitionInterval_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRoadGeoSidewalkPartitionInterval>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRoadGeoSidewalkPartitionInterval); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoadGeo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceRoad_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoadGeo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerEdge_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoadGeo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SidewalkSide_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoadGeo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoadGeo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoadGeo.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRoadGeoSidewalkPartitionInterval constinit property declarations *
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceRoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InnerEdge;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SidewalkSide;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StartDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EndDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRoadGeoSidewalkPartitionInterval constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadGeoSidewalkPartitionInterval>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRoadGeoSidewalkPartitionInterval Property Definitions ************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SourceRoad = { "SourceRoad", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadGeoSidewalkPartitionInterval, SourceRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceRoad_MetaData), NewProp_SourceRoad_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InnerEdge = { "InnerEdge", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadGeoSidewalkPartitionInterval, InnerEdge), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerEdge_MetaData), NewProp_InnerEdge_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SidewalkSide = { "SidewalkSide", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadGeoSidewalkPartitionInterval, SidewalkSide), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SidewalkSide_MetaData), NewProp_SidewalkSide_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_StartDistance = { "StartDistance", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadGeoSidewalkPartitionInterval, StartDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartDistance_MetaData), NewProp_StartDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_EndDistance = { "EndDistance", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadGeoSidewalkPartitionInterval, EndDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndDistance_MetaData), NewProp_EndDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InnerEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SidewalkSide,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndDistance,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRoadGeoSidewalkPartitionInterval Property Definitions **************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"RoadGeoSidewalkPartitionInterval",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRoadGeoSidewalkPartitionInterval>(),
	alignof(FRoadGeoSidewalkPartitionInterval),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRoadGeoSidewalkPartitionInterval;
UScriptStruct* Z_Construct_UScriptStruct_FRoadGeoSidewalkPartitionInterval(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRoadGeoSidewalkPartitionInterval.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRoadGeoSidewalkPartitionInterval.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadGeoSidewalkPartitionInterval, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("RoadGeoSidewalkPartitionInterval"));
		}
		return Z_Registration_Info_UScriptStruct_FRoadGeoSidewalkPartitionInterval.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRoadGeoSidewalkPartitionInterval.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRoadGeoSidewalkPartitionInterval.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRoadGeoSidewalkPartitionInterval.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRoadGeoSidewalkPartitionInterval ***********************************

// ********** Begin Class ARoadGeo Function GetSingleSourceRoad ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARoadGeo_GetSingleSourceRoad_Statics
struct UHT_STATICS
{
	struct RoadGeo_eventGetSingleSourceRoad_Parms
	{
		ADynamicRoad* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Road" },
		{ "Comment", "/**\n\x09 * Returns the single source road if this RoadGeo is influenced by exactly one road.\n\x09 * Returns nullptr if there are zero or multiple source roads (e.g., intersections).\n\x09 */" },
		{ "ModuleRelativePath", "Public/RoadGeo.h" },
		{ "ToolTip", "Returns the single source road if this RoadGeo is influenced by exactly one road.\nReturns nullptr if there are zero or multiple source roads (e.g., intersections)." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSingleSourceRoad constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSingleSourceRoad constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSingleSourceRoad Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadGeo_eventGetSingleSourceRoad_Parms, ReturnValue), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSingleSourceRoad Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARoadGeo, nullptr, "GetSingleSourceRoad", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadGeo_eventGetSingleSourceRoad_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadGeo_eventGetSingleSourceRoad_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoadGeo_GetSingleSourceRoad(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARoadGeo::execGetSingleSourceRoad)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ADynamicRoad**)Z_Param__Result=P_THIS->GetSingleSourceRoad();
	P_NATIVE_END;
}
// ********** End Class ARoadGeo Function GetSingleSourceRoad **************************************

// ********** Begin Class ARoadGeo *****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ARoadGeo_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "//Class containing all our actual road geometry, marking geometry, and prop meshes.\n//The mesh is built based on the data in the source roads that influence it\n//The purpose of this is so that we can stream roads in and out using World Partition\n" },
		{ "IncludePath", "RoadGeo.h" },
		{ "ModuleRelativePath", "Public/RoadGeo.h" },
		{ "ToolTip", "Class containing all our actual road geometry, marking geometry, and prop meshes.\nThe mesh is built based on the data in the source roads that influence it\nThe purpose of this is so that we can stream roads in and out using World Partition" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransientDisplayMeshComponent_MetaData[] = {
		{ "Comment", "/**\n\x09 * Transient DynamicMesh used for Preview Mode proxies and for low-quality editing display.\n\x09 *\n\x09 * A dynamic mesh component is used instead of the usual static mesh path because\n\x09 * UStaticMesh::BuildFromMeshDescriptions dominates rebuild cost. Created on demand so ordinary\n\x09 * RoadGeo actors never pay for it, and marked transient so it is never saved into the level or\n\x09 * an external actor package. Collision is disabled: the component is display-only, and cooking\n\x09 * complex collision was the dominant remaining cost of the editing sink.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RoadGeo.h" },
		{ "ToolTip", "Transient DynamicMesh used for Preview Mode proxies and for low-quality editing display.\n\nA dynamic mesh component is used instead of the usual static mesh path because\nUStaticMesh::BuildFromMeshDescriptions dominates rebuild cost. Created on demand so ordinary\nRoadGeo actors never pay for it, and marked transient so it is never saved into the level or\nan external actor package. Collision is disabled: the component is display-only, and cooking\ncomplex collision was the dominant remaining cost of the editing sink." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionLandscapePatchZBiasDownCm_MetaData[] = {
		{ "Category", "RoadBLD|Landscape" },
		{ "ClampMax", "500.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Landscape Alignment Offset" },
		{ "ModuleRelativePath", "Public/RoadGeo.h" },
		{ "ToolTip", "Downward Z bias applied to this intersection's landscape patch. Lower values raise the patch toward the intersection surface; higher values sink it into the landscape." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionLandscapePatchMarginCm_MetaData[] = {
		{ "Category", "RoadBLD|Landscape" },
		{ "ClampMax", "5000.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Landscape Patch Margin" },
		{ "ModuleRelativePath", "Public/RoadGeo.h" },
		{ "ToolTip", "Additional world-space margin around the intersection bounds included in patch coverage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionLandscapePatchFalloffCm_MetaData[] = {
		{ "Category", "RoadBLD|Landscape" },
		{ "ClampMax", "2000.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Landscape Patch Falloff" },
		{ "ModuleRelativePath", "Public/RoadGeo.h" },
		{ "ToolTip", "Falloff distance used when blending this intersection landscape patch into surrounding terrain." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableIntersectionLandscapeAlignment_MetaData[] = {
		{ "Category", "RoadBLD|Landscape" },
		{ "DisplayName", "Disable Landscape Alignment" },
		{ "ModuleRelativePath", "Public/RoadGeo.h" },
		{ "ToolTip", "If enabled, this intersection does not apply landscape alignment patches." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceRoads_MetaData[] = {
		{ "Category", "Road" },
		{ "Comment", "// Array of roads that influence this RoadGeo actor.\n// For regular roads: contains one entry (the road itself)\n// For intersections/perimeters: contains all contributing roads\n" },
		{ "ModuleRelativePath", "Public/RoadGeo.h" },
		{ "ToolTip", "Array of roads that influence this RoadGeo actor.\nFor regular roads: contains one entry (the road itself)\nFor intersections/perimeters: contains all contributing roads" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceCustomShape_MetaData[] = {
		{ "Category", "Road" },
		{ "Comment", "/** Owning custom-shape actor when this RoadGeo was generated from an ACustomRoadShape. */" },
		{ "ModuleRelativePath", "Public/RoadGeo.h" },
		{ "ToolTip", "Owning custom-shape actor when this RoadGeo was generated from an ACustomRoadShape." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldBLDKitElementComponent_MetaData[] = {
		{ "Category", "WorldBLD Kit Element" },
		{ "Comment", "// The component containing information used to interact with tools, like edges and snap points\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RoadGeo.h" },
		{ "ToolTip", "The component containing information used to interact with tools, like edges and snap points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadPCGComponent_MetaData[] = {
		{ "Category", "Road|PCG" },
		{ "Comment", "/** PCG host component for road-scoped generation (single-road and multi-road RoadGeo actors). */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RoadGeo.h" },
		{ "ToolTip", "PCG host component for road-scoped generation (single-road and multi-road RoadGeo actors)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivePCGSourceRoad_MetaData[] = {
		{ "Comment", "/**\n\x09 * Transient source-road scope used by RoadPCGComponent custom nodes.\n\x09 * Set by ExecuteRoadGeoPCG before triggering generation so\n\x09 * nodes can deterministically resolve the invoking road (instead of broad\n\x09 * SourceRoads lists that may include additional roads for shared geometry).\n\x09 */" },
		{ "ModuleRelativePath", "Public/RoadGeo.h" },
		{ "ToolTip", "Transient source-road scope used by RoadPCGComponent custom nodes.\nSet by ExecuteRoadGeoPCG before triggering generation so\nnodes can deterministically resolve the invoking road (instead of broad\nSourceRoads lists that may include additional roads for shared geometry)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SidewalkPartitionIntervals_MetaData[] = {
		{ "Comment", "/** Rebuild-authoritative sidewalk edge ranges used by PCG sidewalk partition extraction. */" },
		{ "ModuleRelativePath", "Public/RoadGeo.h" },
		{ "ToolTip", "Rebuild-authoritative sidewalk edge ranges used by PCG sidewalk partition extraction." },
	};
#endif // WITH_METADATA

// ********** Begin Class ARoadGeo constinit property declarations *********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransientDisplayMeshComponent;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_IntersectionLandscapePatchZBiasDownCm;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_IntersectionLandscapePatchMarginCm;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_IntersectionLandscapePatchFalloffCm;
	static void NewProp_bDisableIntersectionLandscapeAlignment_SetBit(void* Obj)
	{
		((ARoadGeo*)Obj)->bDisableIntersectionLandscapeAlignment = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableIntersectionLandscapeAlignment;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SourceRoads_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceRoads;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SourceCustomShape;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldBLDKitElementComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoadPCGComponent;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ActivePCGSourceRoad;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SidewalkPartitionIntervals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SidewalkPartitionIntervals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ARoadGeo constinit property declarations ***********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetSingleSourceRoad"), .Pointer = &ARoadGeo::execGetSingleSourceRoad },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARoadGeo_GetSingleSourceRoad, "GetSingleSourceRoad" }, // ef554c150c3ff80ee3129aa134f635b6593058cf
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoadGeo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ARoadGeo Property Definitions ********************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TransientDisplayMeshComponent = { "TransientDisplayMeshComponent", nullptr, (EPropertyFlags)0x0114000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadGeo, TransientDisplayMeshComponent), Z_Construct_UClass_UDynamicMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransientDisplayMeshComponent_MetaData), NewProp_TransientDisplayMeshComponent_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_IntersectionLandscapePatchZBiasDownCm = { "IntersectionLandscapePatchZBiasDownCm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadGeo, IntersectionLandscapePatchZBiasDownCm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionLandscapePatchZBiasDownCm_MetaData), NewProp_IntersectionLandscapePatchZBiasDownCm_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_IntersectionLandscapePatchMarginCm = { "IntersectionLandscapePatchMarginCm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadGeo, IntersectionLandscapePatchMarginCm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionLandscapePatchMarginCm_MetaData), NewProp_IntersectionLandscapePatchMarginCm_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_IntersectionLandscapePatchFalloffCm = { "IntersectionLandscapePatchFalloffCm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadGeo, IntersectionLandscapePatchFalloffCm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionLandscapePatchFalloffCm_MetaData), NewProp_IntersectionLandscapePatchFalloffCm_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDisableIntersectionLandscapeAlignment = { "bDisableIntersectionLandscapeAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ARoadGeo), &UHT_STATICS::NewProp_bDisableIntersectionLandscapeAlignment_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableIntersectionLandscapeAlignment_MetaData), NewProp_bDisableIntersectionLandscapeAlignment_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_SourceRoads_Inner = { "SourceRoads", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, 0, Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SourceRoads = { "SourceRoads", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadGeo, SourceRoads), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceRoads_MetaData), NewProp_SourceRoads_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_SourceCustomShape = { "SourceCustomShape", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadGeo, SourceCustomShape), Z_Construct_UClass_ACustomRoadShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceCustomShape_MetaData), NewProp_SourceCustomShape_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldBLDKitElementComponent = { "WorldBLDKitElementComponent", nullptr, (EPropertyFlags)0x0114000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadGeo, WorldBLDKitElementComponent), Z_Construct_UClass_UWorldBLDKitElementComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldBLDKitElementComponent_MetaData), NewProp_WorldBLDKitElementComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoadPCGComponent = { "RoadPCGComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadGeo, RoadPCGComponent), Z_Construct_UClass_UPCGComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadPCGComponent_MetaData), NewProp_RoadPCGComponent_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams UHT_STATICS::NewProp_ActivePCGSourceRoad = { "ActivePCGSourceRoad", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadGeo, ActivePCGSourceRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivePCGSourceRoad_MetaData), NewProp_ActivePCGSourceRoad_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SidewalkPartitionIntervals_Inner = { "SidewalkPartitionIntervals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRoadGeoSidewalkPartitionInterval, METADATA_PARAMS(0, nullptr) }; // cccda22e3a75283a899b9e0e7219d50b80dd41be
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SidewalkPartitionIntervals = { "SidewalkPartitionIntervals", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadGeo, SidewalkPartitionIntervals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SidewalkPartitionIntervals_MetaData), NewProp_SidewalkPartitionIntervals_MetaData) }; // cccda22e3a75283a899b9e0e7219d50b80dd41be
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TransientDisplayMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IntersectionLandscapePatchZBiasDownCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IntersectionLandscapePatchMarginCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IntersectionLandscapePatchFalloffCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDisableIntersectionLandscapeAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceRoads_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceRoads,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceCustomShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldBLDKitElementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadPCGComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActivePCGSourceRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SidewalkPartitionIntervals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SidewalkPartitionIntervals,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ARoadGeo Property Definitions **********************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AWorldBLDGeo,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams UHT_STATICS::InterfaceParams[] = {
	{ Z_Construct_UClass_UWorldBLDContextMenuProvider, (int32)VTABLE_OFFSET(ARoadGeo, IWorldBLDContextMenuProvider), false },  // 635c874709b0b370d5678802c2bf09964c07979f
};
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ARoadGeo,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void ARoadGeo_StaticRegisterNativesARoadGeo()
{
	UClass* Class = ARoadGeo::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARoadGeo;
UClass* Z_Construct_UClass_ARoadGeo(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ARoadGeo;
		if (!Z_Registration_Info_UClass_ARoadGeo.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadGeo"),
				Z_Registration_Info_UClass_ARoadGeo.InnerSingleton,
				ARoadGeo_StaticRegisterNativesARoadGeo,
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
		return Z_Registration_Info_UClass_ARoadGeo.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ARoadGeo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoadGeo.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ARoadGeo.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARoadGeo);
ARoadGeo::~ARoadGeo() {}
// ********** End Class ARoadGeo *******************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadGeo_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FRoadGeoSidewalkPartitionInterval, Z_Construct_UScriptStruct_FRoadGeoSidewalkPartitionInterval_Statics::NewStructOps, TEXT("RoadGeoSidewalkPartitionInterval"),&Z_Registration_Info_UScriptStruct_FRoadGeoSidewalkPartitionInterval, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadGeoSidewalkPartitionInterval), 3436028462U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARoadGeo, TEXT("ARoadGeo"), &Z_Registration_Info_UClass_ARoadGeo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoadGeo), 182962755U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadGeo_h__Script_RoadBLDRuntime_d1347a64f36601634024d2752cbde3af90cc938b{
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
