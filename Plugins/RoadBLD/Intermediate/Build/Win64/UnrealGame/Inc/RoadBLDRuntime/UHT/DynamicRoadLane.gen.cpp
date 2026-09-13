// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicRoad/DynamicRoadLane.h"
#include "DynamicRoad/DynamicRoadData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDynamicRoadLane() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UCurveObject(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadLane(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FLaneSection(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FLaneWidthSegment(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadLane(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UEdgeCurve(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FLaneWidthSegment *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FLaneWidthSegment_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FLaneWidthSegment>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLaneWidthSegment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FLaneWidthSegment - Defines a segment of a lane where the lane is active (has full width).\n * Segments define where the lane transitions from inactive (no width) to active (full LaneWidth).\n */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadLane.h" },
		{ "ToolTip", "FLaneWidthSegment - Defines a segment of a lane where the lane is active (has full width).\nSegments define where the lane transitions from inactive (no width) to active (full LaneWidth)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartDistance_MetaData[] = {
		{ "Category", "RoadBLD|Lane" },
		{ "Comment", "// The distance along the lane where this active segment starts\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadLane.h" },
		{ "ToolTip", "The distance along the lane where this active segment starts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndDistance_MetaData[] = {
		{ "Category", "RoadBLD|Lane" },
		{ "Comment", "// The distance along the lane where this active segment ends\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadLane.h" },
		{ "ToolTip", "The distance along the lane where this active segment ends" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionIn_MetaData[] = {
		{ "Category", "RoadBLD|Lane" },
		{ "Comment", "// The distance before StartDistance over which the lane transitions from inactive to active\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadLane.h" },
		{ "ToolTip", "The distance before StartDistance over which the lane transitions from inactive to active" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionOut_MetaData[] = {
		{ "Category", "RoadBLD|Lane" },
		{ "Comment", "// The distance after EndDistance over which the lane transitions from active to inactive\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadLane.h" },
		{ "ToolTip", "The distance after EndDistance over which the lane transitions from active to inactive" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLaneWidthSegment constinit property declarations *****************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StartDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EndDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TransitionIn;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TransitionOut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLaneWidthSegment constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLaneWidthSegment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FLaneWidthSegment Property Definitions ****************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_StartDistance = { "StartDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FLaneWidthSegment, StartDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartDistance_MetaData), NewProp_StartDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_EndDistance = { "EndDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FLaneWidthSegment, EndDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndDistance_MetaData), NewProp_EndDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_TransitionIn = { "TransitionIn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FLaneWidthSegment, TransitionIn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionIn_MetaData), NewProp_TransitionIn_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_TransitionOut = { "TransitionOut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FLaneWidthSegment, TransitionOut), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionOut_MetaData), NewProp_TransitionOut_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TransitionIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TransitionOut,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FLaneWidthSegment Property Definitions ******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"LaneWidthSegment",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FLaneWidthSegment>(),
	alignof(FLaneWidthSegment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLaneWidthSegment;
UScriptStruct* Z_Construct_UScriptStruct_FLaneWidthSegment(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FLaneWidthSegment.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FLaneWidthSegment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLaneWidthSegment, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("LaneWidthSegment"));
		}
		return Z_Registration_Info_UScriptStruct_FLaneWidthSegment.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FLaneWidthSegment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLaneWidthSegment.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLaneWidthSegment.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FLaneWidthSegment ***************************************************

// ********** Begin Class UDynamicRoadLane Function RegenerateOffsetPointsFromActiveSegments *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDynamicRoadLane_RegenerateOffsetPointsFromActiveSegments_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Lane" },
		{ "Comment", "// Regenerates the OffsetPoints on the outer EdgeCurve based on the ActiveSegments array\n// Call this whenever ActiveSegments is modified to update the lane shape\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadLane.h" },
		{ "ToolTip", "Regenerates the OffsetPoints on the outer EdgeCurve based on the ActiveSegments array\nCall this whenever ActiveSegments is modified to update the lane shape" },
	};
#endif // WITH_METADATA

// ********** Begin Function RegenerateOffsetPointsFromActiveSegments constinit property declarations 
// ********** End Function RegenerateOffsetPointsFromActiveSegments constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDynamicRoadLane, nullptr, "RegenerateOffsetPointsFromActiveSegments", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UDynamicRoadLane_RegenerateOffsetPointsFromActiveSegments(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDynamicRoadLane::execRegenerateOffsetPointsFromActiveSegments)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegenerateOffsetPointsFromActiveSegments();
	P_NATIVE_END;
}
// ********** End Class UDynamicRoadLane Function RegenerateOffsetPointsFromActiveSegments *********

// ********** Begin Class UDynamicRoadLane *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDynamicRoadLane_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UDynamicRoadLane - A road lane that defines the driving surface between two curves(the lane edge curves)\n */" },
		{ "IncludePath", "DynamicRoad/DynamicRoadLane.h" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadLane.h" },
		{ "ToolTip", "UDynamicRoadLane - A road lane that defines the driving surface between two curves(the lane edge curves)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneID_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadLane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftEdgeCurve_MetaData[] = {
		{ "Category", "RoadBLD|Lane" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadLane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightEdgeCurve_MetaData[] = {
		{ "Category", "RoadBLD|Lane" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadLane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneOverlayMaterial_MetaData[] = {
		{ "Category", "RoadBLD|Lane" },
		{ "Comment", "// Optional overlay material to fill the entire lane with a separate material layer (e.g., for highlighting or special surface types)\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadLane.h" },
		{ "ToolTip", "Optional overlay material to fill the entire lane with a separate material layer (e.g., for highlighting or special surface types)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureVScale_MetaData[] = {
		{ "Category", "RoadBLD|Lane" },
		{ "Comment", "// UV scaling controls for lane textures\n// TextureVScale controls UV tiling in the longitudinal direction (along the road)\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadLane.h" },
		{ "ToolTip", "UV scaling controls for lane textures\nTextureVScale controls UV tiling in the longitudinal direction (along the road)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureUScale_MetaData[] = {
		{ "Category", "RoadBLD|Lane" },
		{ "Comment", "// TextureUScale controls UV tiling in the lateral direction (across the lane width)\n// For sidewalks: controls uniform tiling as width changes\n// For lane overlays: controls tiling across lane width\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadLane.h" },
		{ "ToolTip", "TextureUScale controls UV tiling in the lateral direction (across the lane width)\nFor sidewalks: controls uniform tiling as width changes\nFor lane overlays: controls tiling across lane width" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneWidth_MetaData[] = {
		{ "Category", "RoadBLD|Lane" },
		{ "Comment", "// The fixed width of this lane when active segments are present\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadLane.h" },
		{ "ToolTip", "The fixed width of this lane when active segments are present" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSegments_MetaData[] = {
		{ "Category", "RoadBLD|Lane" },
		{ "Comment", "// Active segments define where the lane has full width vs inactive (no width)\n// When ActiveSegments is modified, call RegenerateOffsetPointsFromActiveSegments() to update the outer EdgeCurve\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadLane.h" },
		{ "ToolTip", "Active segments define where the lane has full width vs inactive (no width)\nWhen ActiveSegments is modified, call RegenerateOffsetPointsFromActiveSegments() to update the outer EdgeCurve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneSections_MetaData[] = {
		{ "Category", "Lane" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadLane.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDynamicRoadLane constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LaneID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftEdgeCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightEdgeCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LaneOverlayMaterial;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TextureVScale;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TextureUScale;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LaneWidth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveSegments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveSegments;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LaneSections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LaneSections;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDynamicRoadLane constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RegenerateOffsetPointsFromActiveSegments"), .Pointer = &UDynamicRoadLane::execRegenerateOffsetPointsFromActiveSegments },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDynamicRoadLane_RegenerateOffsetPointsFromActiveSegments, "RegenerateOffsetPointsFromActiveSegments" }, // 5c53104aa46c0849cd123b0a317b849f4faf9609
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicRoadLane>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UDynamicRoadLane Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LaneID = { "LaneID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadLane, LaneID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneID_MetaData), NewProp_LaneID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LeftEdgeCurve = { "LeftEdgeCurve", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadLane, LeftEdgeCurve), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftEdgeCurve_MetaData), NewProp_LeftEdgeCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RightEdgeCurve = { "RightEdgeCurve", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadLane, RightEdgeCurve), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightEdgeCurve_MetaData), NewProp_RightEdgeCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LaneOverlayMaterial = { "LaneOverlayMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadLane, LaneOverlayMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneOverlayMaterial_MetaData), NewProp_LaneOverlayMaterial_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_TextureVScale = { "TextureVScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadLane, TextureVScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureVScale_MetaData), NewProp_TextureVScale_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_TextureUScale = { "TextureUScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadLane, TextureUScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureUScale_MetaData), NewProp_TextureUScale_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_LaneWidth = { "LaneWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadLane, LaneWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneWidth_MetaData), NewProp_LaneWidth_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ActiveSegments_Inner = { "ActiveSegments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLaneWidthSegment, METADATA_PARAMS(0, nullptr) }; // 1918d09af9c421b3b0557c7e4ed4fda7fbc387ba
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ActiveSegments = { "ActiveSegments", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadLane, ActiveSegments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveSegments_MetaData), NewProp_ActiveSegments_MetaData) }; // 1918d09af9c421b3b0557c7e4ed4fda7fbc387ba
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LaneSections_Inner = { "LaneSections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLaneSection, METADATA_PARAMS(0, nullptr) }; // 121a98029be261e77e6060a9331b3029c802712b
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_LaneSections = { "LaneSections", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadLane, LaneSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneSections_MetaData), NewProp_LaneSections_MetaData) }; // 121a98029be261e77e6060a9331b3029c802712b
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaneID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LeftEdgeCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RightEdgeCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaneOverlayMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextureVScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextureUScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaneWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveSegments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveSegments,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaneSections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaneSections,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UDynamicRoadLane Property Definitions **************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UCurveObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDynamicRoadLane,
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
static void UDynamicRoadLane_StaticRegisterNativesUDynamicRoadLane()
{
	UClass* Class = UDynamicRoadLane::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDynamicRoadLane;
UClass* Z_Construct_UClass_UDynamicRoadLane(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDynamicRoadLane;
		if (!Z_Registration_Info_UClass_UDynamicRoadLane.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DynamicRoadLane"),
				Z_Registration_Info_UClass_UDynamicRoadLane.InnerSingleton,
				UDynamicRoadLane_StaticRegisterNativesUDynamicRoadLane,
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
		return Z_Registration_Info_UClass_UDynamicRoadLane.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDynamicRoadLane.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicRoadLane.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDynamicRoadLane.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDynamicRoadLane);
UDynamicRoadLane::~UDynamicRoadLane() {}
// ********** End Class UDynamicRoadLane ***********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadLane_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FLaneWidthSegment, Z_Construct_UScriptStruct_FLaneWidthSegment_Statics::NewStructOps, TEXT("LaneWidthSegment"),&Z_Registration_Info_UScriptStruct_FLaneWidthSegment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLaneWidthSegment), 421056666U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDynamicRoadLane, TEXT("UDynamicRoadLane"), &Z_Registration_Info_UClass_UDynamicRoadLane, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicRoadLane), 2679526386U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadLane_h__Script_RoadBLDRuntime_781144c8bfe3e6173ff4b12075a90d83f4a96a58{
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
