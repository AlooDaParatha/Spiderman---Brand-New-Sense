// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IslandController.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeIslandController() {}

// ********** Begin Cross Module References ********************************************************
WORLDBLDEDITOR_API UClass* Z_Construct_UClass_UWorldBLDEditController(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UCurveObject(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoad(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadLane(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoadNetwork(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ARoadGeo(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ARoadIsland(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_EIslandDrawMode(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_EIslandToolState(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UIslandController(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UIslandController(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EIslandToolState **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDEditorToolkit_EIslandToolState_Statics
template<> ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EIslandToolState>()
{
	return Z_Construct_UEnum_RoadBLDEditorToolkit_EIslandToolState(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Tool state for the island placement workflow\n */" },
		{ "Drawing.DisplayName", "Drawing" },
		{ "Drawing.Name", "EIslandToolState::Drawing" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "EIslandToolState::Idle" },
		{ "ModuleRelativePath", "Public/IslandController.h" },
		{ "ToolTip", "Tool state for the island placement workflow" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIslandToolState::Idle", (int64)EIslandToolState::Idle },
		{ "EIslandToolState::Drawing", (int64)EIslandToolState::Drawing },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	"EIslandToolState",
	"EIslandToolState",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EIslandToolState;
UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_EIslandToolState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EIslandToolState.OuterSingleton)
		{
			ZRIE_EIslandToolState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDEditorToolkit_EIslandToolState, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("EIslandToolState"));
		}
		return ZRIE_EIslandToolState.OuterSingleton;
	}
	if (!ZRIE_EIslandToolState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EIslandToolState.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EIslandToolState.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EIslandToolState ************************************************************

// ********** Begin Enum EIslandDrawMode ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDEditorToolkit_EIslandDrawMode_Statics
template<> ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EIslandDrawMode>()
{
	return Z_Construct_UEnum_RoadBLDEditorToolkit_EIslandDrawMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Draw mode for the island tool\n */" },
		{ "EdgeLoopFill.DisplayName", "Edge Loop Fill" },
		{ "EdgeLoopFill.Name", "EIslandDrawMode::EdgeLoopFill" },
		{ "FillLane.DisplayName", "Fill Lane" },
		{ "FillLane.Name", "EIslandDrawMode::FillLane" },
		{ "Freehand.DisplayName", "Freehand" },
		{ "Freehand.Name", "EIslandDrawMode::Freehand" },
		{ "ModuleRelativePath", "Public/IslandController.h" },
		{ "ToolTip", "Draw mode for the island tool" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIslandDrawMode::Freehand", (int64)EIslandDrawMode::Freehand },
		{ "EIslandDrawMode::FillLane", (int64)EIslandDrawMode::FillLane },
		{ "EIslandDrawMode::EdgeLoopFill", (int64)EIslandDrawMode::EdgeLoopFill },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	"EIslandDrawMode",
	"EIslandDrawMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EIslandDrawMode;
UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_EIslandDrawMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EIslandDrawMode.OuterSingleton)
		{
			ZRIE_EIslandDrawMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDEditorToolkit_EIslandDrawMode, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("EIslandDrawMode"));
		}
		return ZRIE_EIslandDrawMode.OuterSingleton;
	}
	if (!ZRIE_EIslandDrawMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EIslandDrawMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EIslandDrawMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EIslandDrawMode *************************************************************

// ********** Begin Class UIslandController Function CreateIslandController ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UIslandController_CreateIslandController_Statics
struct UHT_STATICS
{
	struct IslandController_eventCreateIslandController_Parms
	{
		TSubclassOf<ARoadIsland> IslandClass;
		UIslandController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "IslandTool" },
		{ "Comment", "/**\n\x09 * Creates a new IslandController configured to spawn the specified ARoadIsland subclass.\n\x09 * @param IslandClass The subclass of ARoadIsland to spawn when placing islands\n\x09 * @return A new UIslandController instance, or nullptr if IslandClass is invalid\n\x09 */" },
		{ "DisplayName", "Create Island Controller" },
		{ "ModuleRelativePath", "Public/IslandController.h" },
		{ "ToolTip", "Creates a new IslandController configured to spawn the specified ARoadIsland subclass.\n@param IslandClass The subclass of ARoadIsland to spawn when placing islands\n@return A new UIslandController instance, or nullptr if IslandClass is invalid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateIslandController constinit property declarations ****************
	static const UECodeGen_Private::FClassPropertyParams NewProp_IslandClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateIslandController constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateIslandController Property Definitions ***************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_IslandClass = { "IslandClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(IslandController_eventCreateIslandController_Parms, IslandClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ARoadIsland, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(IslandController_eventCreateIslandController_Parms, ReturnValue), Z_Construct_UClass_UIslandController, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IslandClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateIslandController Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UIslandController, nullptr, "CreateIslandController", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::IslandController_eventCreateIslandController_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::IslandController_eventCreateIslandController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIslandController_CreateIslandController(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UIslandController::execCreateIslandController)
{
	P_GET_OBJECT(UClass,Z_Param_IslandClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIslandController**)Z_Param__Result=UIslandController::CreateIslandController(Z_Param_IslandClass);
	P_NATIVE_END;
}
// ********** End Class UIslandController Function CreateIslandController **************************

// ********** Begin Class UIslandController ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UIslandController_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Edit controller for placing ARoadIsland actors by clicking to place spline points.\n * Supports optional snapping to road edges when within the snap threshold.\n */" },
		{ "IncludePath", "IslandController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/IslandController.h" },
		{ "ToolTip", "Edit controller for placing ARoadIsland actors by clicking to place spline points.\nSupports optional snapping to road edges when within the snap threshold." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "IslandTool" },
		{ "Comment", "/** Current tool state */" },
		{ "ModuleRelativePath", "Public/IslandController.h" },
		{ "ToolTip", "Current tool state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawMode_MetaData[] = {
		{ "Category", "IslandTool" },
		{ "Comment", "/** Current draw mode (Freehand or Fill Lane) */" },
		{ "ModuleRelativePath", "Public/IslandController.h" },
		{ "ToolTip", "Current draw mode (Freehand or Fill Lane)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRoundedCorners_MetaData[] = {
		{ "Category", "IslandTool" },
		{ "Comment", "/** Whether to automatically round corners when finalizing newly placed islands */" },
		{ "ModuleRelativePath", "Public/IslandController.h" },
		{ "ToolTip", "Whether to automatically round corners when finalizing newly placed islands" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CornerRadius_MetaData[] = {
		{ "Category", "IslandTool" },
		{ "ClampMax", "400.0" },
		{ "ClampMin", "40.0" },
		{ "Comment", "/** Radius used for rounded corners, in Unreal units */" },
		{ "EditCondition", "bRoundedCorners" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/IslandController.h" },
		{ "ToolTip", "Radius used for rounded corners, in Unreal units" },
		{ "UIMax", "400.0" },
		{ "UIMin", "40.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IslandClassToSpawn_MetaData[] = {
		{ "Category", "IslandTool" },
		{ "Comment", "/** The class of ARoadIsland to spawn when placing islands */" },
		{ "ModuleRelativePath", "Public/IslandController.h" },
		{ "ToolTip", "The class of ARoadIsland to spawn when placing islands" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeLoopFillBrushRadius_MetaData[] = {
		{ "Category", "IslandTool" },
		{ "Comment", "/** Sphere search radius used to find nearby element actors in Edge Loop Fill mode (Unreal units) */" },
		{ "EditCondition", "DrawMode == EIslandDrawMode::EdgeLoopFill" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/IslandController.h" },
		{ "ToolTip", "Sphere search radius used to find nearby element actors in Edge Loop Fill mode (Unreal units)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeLoopFillAdjacentEdgesDistance_MetaData[] = {
		{ "Category", "IslandTool" },
		{ "Comment", "/** Maximum endpoint distance for two edges to be considered directly adjacent in Edge Loop Fill mode (cm) */" },
		{ "EditCondition", "DrawMode == EIslandDrawMode::EdgeLoopFill" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/IslandController.h" },
		{ "ToolTip", "Maximum endpoint distance for two edges to be considered directly adjacent in Edge Loop Fill mode (cm)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeLoopFillMaxEdgesGap_MetaData[] = {
		{ "Category", "IslandTool" },
		{ "Comment", "/** Maximum endpoint gap for gap-bridging adjacency in Edge Loop Fill mode (cm) */" },
		{ "EditCondition", "DrawMode == EIslandDrawMode::EdgeLoopFill" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/IslandController.h" },
		{ "ToolTip", "Maximum endpoint gap for gap-bridging adjacency in Edge Loop Fill mode (cm)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedRoadNetwork_MetaData[] = {
		{ "Comment", "/** Cached road network for the current level */" },
		{ "ModuleRelativePath", "Public/IslandController.h" },
		{ "ToolTip", "Cached road network for the current level" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveIsland_MetaData[] = {
		{ "Comment", "/**\n\x09 * Transient island reference used only while committing a shape (e.g. edge-loop fill).\n\x09 * Freehand drawing keeps PlacedPoints only and does not spawn until FinalizeIsland.\n\x09 */" },
		{ "ModuleRelativePath", "Public/IslandController.h" },
		{ "ToolTip", "Transient island reference used only while committing a shape (e.g. edge-loop fill).\nFreehand drawing keeps PlacedPoints only and does not spawn until FinalizeIsland." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NearestCurve_MetaData[] = {
		{ "Comment", "/** The nearest curve object (could be UEdgeCurve or corner UCurveObject) */" },
		{ "ModuleRelativePath", "Public/IslandController.h" },
		{ "ToolTip", "The nearest curve object (could be UEdgeCurve or corner UCurveObject)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FillLaneTargetRoad_MetaData[] = {
		{ "Comment", "/** The road currently under the cursor (Fill Lane mode) */" },
		{ "ModuleRelativePath", "Public/IslandController.h" },
		{ "ToolTip", "The road currently under the cursor (Fill Lane mode)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FillLaneTargetLane_MetaData[] = {
		{ "Comment", "/** The lane currently under the cursor (Fill Lane mode) */" },
		{ "ModuleRelativePath", "Public/IslandController.h" },
		{ "ToolTip", "The lane currently under the cursor (Fill Lane mode)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FillLaneTargetRoadGeo_MetaData[] = {
		{ "Comment", "/** The RoadGeo actor currently under the cursor (Fill Lane mode) */" },
		{ "ModuleRelativePath", "Public/IslandController.h" },
		{ "ToolTip", "The RoadGeo actor currently under the cursor (Fill Lane mode)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FillLaneLastValidTargetRoad_MetaData[] = {
		{ "Comment", "/** Last valid road seen (used when hovering intersections) */" },
		{ "ModuleRelativePath", "Public/IslandController.h" },
		{ "ToolTip", "Last valid road seen (used when hovering intersections)" },
	};
#endif // WITH_METADATA

// ********** Begin Class UIslandController constinit property declarations ************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DrawMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DrawMode;
	static void NewProp_bRoundedCorners_SetBit(void* Obj)
	{
		((UIslandController*)Obj)->bRoundedCorners = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRoundedCorners;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CornerRadius;
	static const UECodeGen_Private::FClassPropertyParams NewProp_IslandClassToSpawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeLoopFillBrushRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeLoopFillAdjacentEdgesDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeLoopFillMaxEdgesGap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedRoadNetwork;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveIsland;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NearestCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FillLaneTargetRoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FillLaneTargetLane;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FillLaneTargetRoadGeo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FillLaneLastValidTargetRoad;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UIslandController constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateIslandController"), .Pointer = &UIslandController::execCreateIslandController },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIslandController_CreateIslandController, "CreateIslandController" }, // 605a398fc4b5e1902bfcf38e04e27bd87d0f1407
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIslandController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UIslandController Property Definitions ***********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UIslandController, CurrentState), Z_Construct_UEnum_RoadBLDEditorToolkit_EIslandToolState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 788cf24355f1de2628b12f4e3fd16de0410eb9e7
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DrawMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DrawMode = { "DrawMode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UIslandController, DrawMode), Z_Construct_UEnum_RoadBLDEditorToolkit_EIslandDrawMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawMode_MetaData), NewProp_DrawMode_MetaData) }; // a73e6e04f2a71e958e9eba29bc85b53bbef04680
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRoundedCorners = { "bRoundedCorners", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UIslandController), &UHT_STATICS::NewProp_bRoundedCorners_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRoundedCorners_MetaData), NewProp_bRoundedCorners_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CornerRadius = { "CornerRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UIslandController, CornerRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CornerRadius_MetaData), NewProp_CornerRadius_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_IslandClassToSpawn = { "IslandClassToSpawn", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UIslandController, IslandClassToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_ARoadIsland, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IslandClassToSpawn_MetaData), NewProp_IslandClassToSpawn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_EdgeLoopFillBrushRadius = { "EdgeLoopFillBrushRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UIslandController, EdgeLoopFillBrushRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeLoopFillBrushRadius_MetaData), NewProp_EdgeLoopFillBrushRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_EdgeLoopFillAdjacentEdgesDistance = { "EdgeLoopFillAdjacentEdgesDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UIslandController, EdgeLoopFillAdjacentEdgesDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeLoopFillAdjacentEdgesDistance_MetaData), NewProp_EdgeLoopFillAdjacentEdgesDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_EdgeLoopFillMaxEdgesGap = { "EdgeLoopFillMaxEdgesGap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UIslandController, EdgeLoopFillMaxEdgesGap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeLoopFillMaxEdgesGap_MetaData), NewProp_EdgeLoopFillMaxEdgesGap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CachedRoadNetwork = { "CachedRoadNetwork", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UIslandController, CachedRoadNetwork), Z_Construct_UClass_ADynamicRoadNetwork, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedRoadNetwork_MetaData), NewProp_CachedRoadNetwork_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ActiveIsland = { "ActiveIsland", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UIslandController, ActiveIsland), Z_Construct_UClass_ARoadIsland, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveIsland_MetaData), NewProp_ActiveIsland_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NearestCurve = { "NearestCurve", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UIslandController, NearestCurve), Z_Construct_UClass_UCurveObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NearestCurve_MetaData), NewProp_NearestCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_FillLaneTargetRoad = { "FillLaneTargetRoad", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UIslandController, FillLaneTargetRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FillLaneTargetRoad_MetaData), NewProp_FillLaneTargetRoad_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_FillLaneTargetLane = { "FillLaneTargetLane", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UIslandController, FillLaneTargetLane), Z_Construct_UClass_UDynamicRoadLane, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FillLaneTargetLane_MetaData), NewProp_FillLaneTargetLane_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_FillLaneTargetRoadGeo = { "FillLaneTargetRoadGeo", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UIslandController, FillLaneTargetRoadGeo), Z_Construct_UClass_ARoadGeo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FillLaneTargetRoadGeo_MetaData), NewProp_FillLaneTargetRoadGeo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_FillLaneLastValidTargetRoad = { "FillLaneLastValidTargetRoad", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UIslandController, FillLaneLastValidTargetRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FillLaneLastValidTargetRoad_MetaData), NewProp_FillLaneLastValidTargetRoad_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DrawMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DrawMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRoundedCorners,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CornerRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IslandClassToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeLoopFillBrushRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeLoopFillAdjacentEdgesDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeLoopFillMaxEdgesGap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedRoadNetwork,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveIsland,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NearestCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FillLaneTargetRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FillLaneTargetLane,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FillLaneTargetRoadGeo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FillLaneLastValidTargetRoad,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UIslandController Property Definitions *************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldBLDEditController,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UIslandController,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UIslandController_StaticRegisterNativesUIslandController()
{
	UClass* Class = UIslandController::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIslandController;
UClass* Z_Construct_UClass_UIslandController(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UIslandController;
		if (!Z_Registration_Info_UClass_UIslandController.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("IslandController"),
				Z_Registration_Info_UClass_UIslandController.InnerSingleton,
				UIslandController_StaticRegisterNativesUIslandController,
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
		return Z_Registration_Info_UClass_UIslandController.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UIslandController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIslandController.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UIslandController.OuterSingleton;
}
#undef UHT_STATICS
UIslandController::UIslandController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIslandController);
UIslandController::~UIslandController() {}
// ********** End Class UIslandController **********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_IslandController_h__Script_RoadBLDEditorToolkit_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RoadBLDEditorToolkit_EIslandToolState, TEXT("EIslandToolState"), &ZRIE_EIslandToolState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2022502979U) },
		{ Z_Construct_UEnum_RoadBLDEditorToolkit_EIslandDrawMode, TEXT("EIslandDrawMode"), &ZRIE_EIslandDrawMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2805886468U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIslandController, TEXT("UIslandController"), &Z_Registration_Info_UClass_UIslandController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIslandController), 3237687814U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_IslandController_h__Script_RoadBLDEditorToolkit_32aadf50b350821fedfaceaa55e4cb7d8aa786f5{
	TEXT("/Script/RoadBLDEditorToolkit"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
