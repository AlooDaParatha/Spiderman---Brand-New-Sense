// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicRoad/EdgeCurve.h"
#include "DynamicRoad/DynamicRoadData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeEdgeCurve() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UCurveObject(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicRoadDrawPresetMarking(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_ERoadSide(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_ESegmentBehavior(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UEdgeCurve(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FLaneMarkingSegment(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UReferenceLine(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadLane(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UEdgeCurve(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UReferenceLine(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FLaneMarkingSegment ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FLaneMarkingSegment_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FLaneMarkingSegment>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLaneMarkingSegment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/EdgeCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dist_MetaData[] = {
		{ "Category", "Segment" },
		{ "ModuleRelativePath", "Public/DynamicRoad/EdgeCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneMarking_MetaData[] = {
		{ "Category", "Segment" },
		{ "ModuleRelativePath", "Public/DynamicRoad/EdgeCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Behavior_MetaData[] = {
		{ "Category", "Segment" },
		{ "Comment", "// Controls how this segment should be masked at intersections\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/EdgeCurve.h" },
		{ "ToolTip", "Controls how this segment should be masked at intersections" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateGeometry_MetaData[] = {
		{ "Category", "Segment" },
		{ "Comment", "// When false, mesh geometry is not generated for this segment\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/EdgeCurve.h" },
		{ "ToolTip", "When false, mesh geometry is not generated for this segment" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLaneMarkingSegment constinit property declarations ***************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Dist;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LaneMarking;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Behavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Behavior;
	static void NewProp_bGenerateGeometry_SetBit(void* Obj)
	{
		((FLaneMarkingSegment*)Obj)->bGenerateGeometry = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateGeometry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLaneMarkingSegment constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLaneMarkingSegment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FLaneMarkingSegment Property Definitions **************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Dist = { "Dist", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FLaneMarkingSegment, Dist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dist_MetaData), NewProp_Dist_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LaneMarking = { "LaneMarking", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FLaneMarkingSegment, LaneMarking), Z_Construct_UScriptStruct_FDynamicRoadDrawPresetMarking, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneMarking_MetaData), NewProp_LaneMarking_MetaData) }; // 94599fce731ca6622b90174c94b08e2dc030d447
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Behavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Behavior = { "Behavior", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FLaneMarkingSegment, Behavior), Z_Construct_UEnum_RoadBLDRuntime_ESegmentBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Behavior_MetaData), NewProp_Behavior_MetaData) }; // 11af432ee0bb9e305f22f5af2d7be72793da907a
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bGenerateGeometry = { "bGenerateGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FLaneMarkingSegment), &UHT_STATICS::NewProp_bGenerateGeometry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateGeometry_MetaData), NewProp_bGenerateGeometry_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Dist,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaneMarking,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Behavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Behavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bGenerateGeometry,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FLaneMarkingSegment Property Definitions ****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"LaneMarkingSegment",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FLaneMarkingSegment>(),
	alignof(FLaneMarkingSegment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLaneMarkingSegment;
UScriptStruct* Z_Construct_UScriptStruct_FLaneMarkingSegment(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FLaneMarkingSegment.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FLaneMarkingSegment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLaneMarkingSegment, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("LaneMarkingSegment"));
		}
		return Z_Registration_Info_UScriptStruct_FLaneMarkingSegment.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FLaneMarkingSegment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLaneMarkingSegment.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLaneMarkingSegment.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FLaneMarkingSegment *************************************************

// ********** Begin Class UEdgeCurve Function DebugVisualizeOffsetPoints ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEdgeCurve_DebugVisualizeOffsetPoints_Statics
struct UHT_STATICS
{
	struct EdgeCurve_eventDebugVisualizeOffsetPoints_Parms
	{
		float LifeTime;
		float PointSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|EdgeCurve|Debug" },
		{ "Comment", "// Debug visualization\n" },
		{ "CPP_Default_LifeTime", "10.000000" },
		{ "CPP_Default_PointSize", "25.000000" },
		{ "ModuleRelativePath", "Public/DynamicRoad/EdgeCurve.h" },
		{ "ToolTip", "Debug visualization" },
	};
#endif // WITH_METADATA

// ********** Begin Function DebugVisualizeOffsetPoints constinit property declarations ************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PointSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DebugVisualizeOffsetPoints constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DebugVisualizeOffsetPoints Property Definitions ***********************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LifeTime = { "LifeTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(EdgeCurve_eventDebugVisualizeOffsetPoints_Parms, LifeTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PointSize = { "PointSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(EdgeCurve_eventDebugVisualizeOffsetPoints_Parms, PointSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LifeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointSize,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DebugVisualizeOffsetPoints Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEdgeCurve, nullptr, "DebugVisualizeOffsetPoints", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EdgeCurve_eventDebugVisualizeOffsetPoints_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EdgeCurve_eventDebugVisualizeOffsetPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEdgeCurve_DebugVisualizeOffsetPoints(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEdgeCurve::execDebugVisualizeOffsetPoints)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_LifeTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PointSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugVisualizeOffsetPoints(Z_Param_LifeTime,Z_Param_PointSize);
	P_NATIVE_END;
}
// ********** End Class UEdgeCurve Function DebugVisualizeOffsetPoints *****************************

// ********** Begin Class UEdgeCurve Function GetSide **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEdgeCurve_GetSide_Statics
struct UHT_STATICS
{
	struct EdgeCurve_eventGetSide_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "Public/DynamicRoad/EdgeCurve.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSide constinit property declarations *******************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSide constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSide Property Definitions ******************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(EdgeCurve_eventGetSide_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetSide Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEdgeCurve, nullptr, "GetSide", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EdgeCurve_eventGetSide_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EdgeCurve_eventGetSide_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEdgeCurve_GetSide(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEdgeCurve::execGetSide)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSide();
	P_NATIVE_END;
}
// ********** End Class UEdgeCurve Function GetSide ************************************************

// ********** Begin Class UEdgeCurve Function SortOffsetPointsByDistance ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEdgeCurve_SortOffsetPointsByDistance_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|EdgeCurve" },
		{ "Comment", "// Sorting helpers\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/EdgeCurve.h" },
		{ "ToolTip", "Sorting helpers" },
	};
#endif // WITH_METADATA

// ********** Begin Function SortOffsetPointsByDistance constinit property declarations ************
// ********** End Function SortOffsetPointsByDistance constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEdgeCurve, nullptr, "SortOffsetPointsByDistance", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UEdgeCurve_SortOffsetPointsByDistance(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEdgeCurve::execSortOffsetPointsByDistance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SortOffsetPointsByDistance();
	P_NATIVE_END;
}
// ********** End Class UEdgeCurve Function SortOffsetPointsByDistance *****************************

// ********** Begin Class UEdgeCurve ***************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UEdgeCurve_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UEdgeCurve - A road boundary curve that defines the edge of a road\n * Designed after URoadBoundary but as a subclass of UClothoid\n */" },
		{ "IncludePath", "DynamicRoad/EdgeCurve.h" },
		{ "ModuleRelativePath", "Public/DynamicRoad/EdgeCurve.h" },
		{ "ToolTip", "UEdgeCurve - A road boundary curve that defines the edge of a road\nDesigned after URoadBoundary but as a subclass of UClothoid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeCurveID_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/EdgeCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[] = {
		{ "Category", "Markings" },
		{ "Comment", "// Edge curve specific data\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/EdgeCurve.h" },
		{ "ToolTip", "Edge curve specific data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftLane_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/EdgeCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightLane_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/EdgeCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Side_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "Public/DynamicRoad/EdgeCurve.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEdgeCurve constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeCurveID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Segments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Segments;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftLane;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightLane;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Side_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Side;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEdgeCurve constinit property declarations *********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DebugVisualizeOffsetPoints"), .Pointer = &UEdgeCurve::execDebugVisualizeOffsetPoints },
		{ .NameUTF8 = UTF8TEXT("GetSide"), .Pointer = &UEdgeCurve::execGetSide },
		{ .NameUTF8 = UTF8TEXT("SortOffsetPointsByDistance"), .Pointer = &UEdgeCurve::execSortOffsetPointsByDistance },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEdgeCurve_DebugVisualizeOffsetPoints, "DebugVisualizeOffsetPoints" }, // f7a946f0784dd15f0310ab7ef97fd3548ba215a9
		{ &Z_Construct_UFunction_UEdgeCurve_GetSide, "GetSide" }, // ef2dcb00e0e62cd7b76a62a2a907d91c72e0a2c3
		{ &Z_Construct_UFunction_UEdgeCurve_SortOffsetPointsByDistance, "SortOffsetPointsByDistance" }, // ce5030eebac8405755212344e8955bc041ef0081
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdgeCurve>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UEdgeCurve Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EdgeCurveID = { "EdgeCurveID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UEdgeCurve, EdgeCurveID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeCurveID_MetaData), NewProp_EdgeCurveID_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Segments_Inner = { "Segments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLaneMarkingSegment, METADATA_PARAMS(0, nullptr) }; // fd7e77987b7c37ee3e3ab3c8b1cc13bed1ec0606
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UEdgeCurve, Segments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Segments_MetaData), NewProp_Segments_MetaData) }; // fd7e77987b7c37ee3e3ab3c8b1cc13bed1ec0606
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LeftLane = { "LeftLane", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UEdgeCurve, LeftLane), Z_Construct_UClass_UDynamicRoadLane, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftLane_MetaData), NewProp_LeftLane_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RightLane = { "RightLane", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UEdgeCurve, RightLane), Z_Construct_UClass_UDynamicRoadLane, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightLane_MetaData), NewProp_RightLane_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Side_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Side = { "Side", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UEdgeCurve, Side), Z_Construct_UEnum_RoadBLDRuntime_ERoadSide, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Side_MetaData), NewProp_Side_MetaData) }; // e372ae13051be4d9afcab83594e1c3193054100d
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeCurveID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Segments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Segments,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LeftLane,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RightLane,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Side_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Side,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UEdgeCurve Property Definitions ********************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UCurveObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UEdgeCurve,
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
static void UEdgeCurve_StaticRegisterNativesUEdgeCurve()
{
	UClass* Class = UEdgeCurve::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEdgeCurve;
UClass* Z_Construct_UClass_UEdgeCurve(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UEdgeCurve;
		if (!Z_Registration_Info_UClass_UEdgeCurve.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("EdgeCurve"),
				Z_Registration_Info_UClass_UEdgeCurve.InnerSingleton,
				UEdgeCurve_StaticRegisterNativesUEdgeCurve,
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
		return Z_Registration_Info_UClass_UEdgeCurve.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UEdgeCurve.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdgeCurve.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UEdgeCurve.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEdgeCurve);
UEdgeCurve::~UEdgeCurve() {}
// ********** End Class UEdgeCurve *****************************************************************

// ********** Begin Class UReferenceLine ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UReferenceLine_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * UReferenceLine - a curve serving as the road \"centerline\". This is the fundamental curve driving the road generation.\n */" },
		{ "IncludePath", "DynamicRoad/EdgeCurve.h" },
		{ "ModuleRelativePath", "Public/DynamicRoad/EdgeCurve.h" },
		{ "ToolTip", "UReferenceLine - a curve serving as the road \"centerline\". This is the fundamental curve driving the road generation." },
	};
#endif // WITH_METADATA

// ********** Begin Class UReferenceLine constinit property declarations ***************************
// ********** End Class UReferenceLine constinit property declarations *****************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReferenceLine>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UCurveObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UReferenceLine,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UReferenceLine;
UClass* Z_Construct_UClass_UReferenceLine(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UReferenceLine;
		if (!Z_Registration_Info_UClass_UReferenceLine.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ReferenceLine"),
				Z_Registration_Info_UClass_UReferenceLine.InnerSingleton,
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
		return Z_Registration_Info_UClass_UReferenceLine.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UReferenceLine.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReferenceLine.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UReferenceLine.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UReferenceLine);
UReferenceLine::~UReferenceLine() {}
// ********** End Class UReferenceLine *************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_EdgeCurve_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FLaneMarkingSegment, Z_Construct_UScriptStruct_FLaneMarkingSegment_Statics::NewStructOps, TEXT("LaneMarkingSegment"),&Z_Registration_Info_UScriptStruct_FLaneMarkingSegment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLaneMarkingSegment), 4252923800U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEdgeCurve, TEXT("UEdgeCurve"), &Z_Registration_Info_UClass_UEdgeCurve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdgeCurve), 3865305978U) },
		{ Z_Construct_UClass_UReferenceLine, TEXT("UReferenceLine"), &Z_Registration_Info_UClass_UReferenceLine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReferenceLine), 2600856180U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_EdgeCurve_h__Script_RoadBLDRuntime_0ba9a653d6e139bafb70cfc7bf7ab292ccbb0f87{
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
