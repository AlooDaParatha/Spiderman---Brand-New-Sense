// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LaneMarkingController.h"
#include "Materials/MaterialInterface.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeLaneMarkingController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_ESegmentBehavior(ETypeConstructPhase);
WORLDBLDEDITOR_API UClass* Z_Construct_UClass_UWorldBLDEditController(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USplineComponent(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoad(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadMarking(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UEdgeCurve(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ARoadGeo(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadMarkingLine(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneMarkingToolMode(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_ULaneMarkingController(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_ULaneMarkingController(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ELaneMarkingToolMode ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneMarkingToolMode_Statics
template<> ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ELaneMarkingToolMode>()
{
	return Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneMarkingToolMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ChopMode.Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ChopMode.DisplayName", "Chop" },
		{ "ChopMode.Name", "ELaneMarkingToolMode::ChopMode" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "DrawMode.Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "DrawMode.DisplayName", "Draw" },
		{ "DrawMode.Name", "ELaneMarkingToolMode::DrawMode" },
		{ "EditMode.Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "EditMode.DisplayName", "Edit" },
		{ "EditMode.Name", "ELaneMarkingToolMode::EditMode" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "SelectMode.Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "SelectMode.DisplayName", "Select" },
		{ "SelectMode.Name", "ELaneMarkingToolMode::SelectMode" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELaneMarkingToolMode::SelectMode", (int64)ELaneMarkingToolMode::SelectMode },
		{ "ELaneMarkingToolMode::ChopMode", (int64)ELaneMarkingToolMode::ChopMode },
		{ "ELaneMarkingToolMode::DrawMode", (int64)ELaneMarkingToolMode::DrawMode },
		{ "ELaneMarkingToolMode::EditMode", (int64)ELaneMarkingToolMode::EditMode },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	"ELaneMarkingToolMode",
	"ELaneMarkingToolMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ELaneMarkingToolMode;
UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneMarkingToolMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ELaneMarkingToolMode.OuterSingleton)
		{
			ZRIE_ELaneMarkingToolMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneMarkingToolMode, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("ELaneMarkingToolMode"));
		}
		return ZRIE_ELaneMarkingToolMode.OuterSingleton;
	}
	if (!ZRIE_ELaneMarkingToolMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ELaneMarkingToolMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ELaneMarkingToolMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ELaneMarkingToolMode ********************************************************

// ********** Begin Class ULaneMarkingController Function CanDrawFreehandMarking *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULaneMarkingController_CanDrawFreehandMarking_Statics
struct UHT_STATICS
{
	struct LaneMarkingController_eventCanDrawFreehandMarking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Lane Marking" },
		{ "Comment", "// Check if freehand drawing is allowed (material is set)\n" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Check if freehand drawing is allowed (material is set)" },
	};
#endif // WITH_METADATA

// ********** Begin Function CanDrawFreehandMarking constinit property declarations ****************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LaneMarkingController_eventCanDrawFreehandMarking_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CanDrawFreehandMarking constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CanDrawFreehandMarking Property Definitions ***************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(LaneMarkingController_eventCanDrawFreehandMarking_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CanDrawFreehandMarking Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULaneMarkingController, nullptr, "CanDrawFreehandMarking", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LaneMarkingController_eventCanDrawFreehandMarking_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LaneMarkingController_eventCanDrawFreehandMarking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULaneMarkingController_CanDrawFreehandMarking(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULaneMarkingController::execCanDrawFreehandMarking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanDrawFreehandMarking();
	P_NATIVE_END;
}
// ********** End Class ULaneMarkingController Function CanDrawFreehandMarking *********************

// ********** Begin Class ULaneMarkingController Function CreateForDrawMode ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULaneMarkingController_CreateForDrawMode_Statics
struct UHT_STATICS
{
	struct LaneMarkingController_eventCreateForDrawMode_Parms
	{
		TSubclassOf<AActor> InBrushActorClass;
		TSubclassOf<ULaneMarkingController> ControllerClass;
		ULaneMarkingController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Lane Marking" },
		{ "Comment", "// Static factory method to create a controller for Draw Mode with a brush actor\n" },
		{ "DeterminesOutputType", "ControllerClass" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Static factory method to create a controller for Draw Mode with a brush actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateForDrawMode constinit property declarations *********************
	static const UECodeGen_Private::FClassPropertyParams NewProp_InBrushActorClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ControllerClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateForDrawMode constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateForDrawMode Property Definitions ********************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_InBrushActorClass = { "InBrushActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventCreateForDrawMode_Parms, InBrushActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ControllerClass = { "ControllerClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventCreateForDrawMode_Parms, ControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULaneMarkingController, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventCreateForDrawMode_Parms, ReturnValue), Z_Construct_UClass_ULaneMarkingController, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InBrushActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControllerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateForDrawMode Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULaneMarkingController, nullptr, "CreateForDrawMode", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LaneMarkingController_eventCreateForDrawMode_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LaneMarkingController_eventCreateForDrawMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULaneMarkingController_CreateForDrawMode(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULaneMarkingController::execCreateForDrawMode)
{
	P_GET_OBJECT(UClass,Z_Param_InBrushActorClass);
	P_GET_OBJECT(UClass,Z_Param_ControllerClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULaneMarkingController**)Z_Param__Result=ULaneMarkingController::CreateForDrawMode(Z_Param_InBrushActorClass,Z_Param_ControllerClass);
	P_NATIVE_END;
}
// ********** End Class ULaneMarkingController Function CreateForDrawMode **************************

// ********** Begin Class ULaneMarkingController Function CreateForFreehandPreset ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULaneMarkingController_CreateForFreehandPreset_Statics
struct UHT_STATICS
{
	struct LaneMarkingController_eventCreateForFreehandPreset_Parms
	{
		TSubclassOf<UDynamicRoadMarking> InMarkingPresetClass;
		TSubclassOf<ULaneMarkingController> ControllerClass;
		ULaneMarkingController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Lane Marking" },
		{ "Comment", "// Static factory method to create a controller in freehand Draw Mode with a selected marking preset class.\n" },
		{ "DeterminesOutputType", "ControllerClass" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Static factory method to create a controller in freehand Draw Mode with a selected marking preset class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateForFreehandPreset constinit property declarations ***************
	static const UECodeGen_Private::FClassPropertyParams NewProp_InMarkingPresetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ControllerClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateForFreehandPreset constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateForFreehandPreset Property Definitions **************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_InMarkingPresetClass = { "InMarkingPresetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventCreateForFreehandPreset_Parms, InMarkingPresetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDynamicRoadMarking, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ControllerClass = { "ControllerClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventCreateForFreehandPreset_Parms, ControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULaneMarkingController, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventCreateForFreehandPreset_Parms, ReturnValue), Z_Construct_UClass_ULaneMarkingController, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InMarkingPresetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControllerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateForFreehandPreset Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULaneMarkingController, nullptr, "CreateForFreehandPreset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LaneMarkingController_eventCreateForFreehandPreset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LaneMarkingController_eventCreateForFreehandPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULaneMarkingController_CreateForFreehandPreset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULaneMarkingController::execCreateForFreehandPreset)
{
	P_GET_OBJECT(UClass,Z_Param_InMarkingPresetClass);
	P_GET_OBJECT(UClass,Z_Param_ControllerClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULaneMarkingController**)Z_Param__Result=ULaneMarkingController::CreateForFreehandPreset(Z_Param_InMarkingPresetClass,Z_Param_ControllerClass);
	P_NATIVE_END;
}
// ********** End Class ULaneMarkingController Function CreateForFreehandPreset ********************

// ********** Begin Class ULaneMarkingController Function CreateForRoad ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULaneMarkingController_CreateForRoad_Statics
struct UHT_STATICS
{
	struct LaneMarkingController_eventCreateForRoad_Parms
	{
		ADynamicRoad* InTargetRoad;
		TSubclassOf<ULaneMarkingController> ControllerClass;
		ULaneMarkingController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Lane Marking" },
		{ "Comment", "// Static factory method to create and initialize a new LaneMarkingController instance\n" },
		{ "DeterminesOutputType", "ControllerClass" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Static factory method to create and initialize a new LaneMarkingController instance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateForRoad constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InTargetRoad;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ControllerClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateForRoad constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateForRoad Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InTargetRoad = { "InTargetRoad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventCreateForRoad_Parms, InTargetRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ControllerClass = { "ControllerClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventCreateForRoad_Parms, ControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULaneMarkingController, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventCreateForRoad_Parms, ReturnValue), Z_Construct_UClass_ULaneMarkingController, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InTargetRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControllerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateForRoad Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULaneMarkingController, nullptr, "CreateForRoad", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LaneMarkingController_eventCreateForRoad_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LaneMarkingController_eventCreateForRoad_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULaneMarkingController_CreateForRoad(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULaneMarkingController::execCreateForRoad)
{
	P_GET_OBJECT(ADynamicRoad,Z_Param_InTargetRoad);
	P_GET_OBJECT(UClass,Z_Param_ControllerClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULaneMarkingController**)Z_Param__Result=ULaneMarkingController::CreateForRoad(Z_Param_InTargetRoad,Z_Param_ControllerClass);
	P_NATIVE_END;
}
// ********** End Class ULaneMarkingController Function CreateForRoad ******************************

// ********** Begin Class ULaneMarkingController Function CreateForSelectMode **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULaneMarkingController_CreateForSelectMode_Statics
struct UHT_STATICS
{
	struct LaneMarkingController_eventCreateForSelectMode_Parms
	{
		TSubclassOf<AActor> InBrushActorClass;
		TSubclassOf<ULaneMarkingController> ControllerClass;
		ULaneMarkingController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Lane Marking" },
		{ "Comment", "// Static factory method to create a controller for Select Mode with stored brush actor class\n" },
		{ "DeterminesOutputType", "ControllerClass" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Static factory method to create a controller for Select Mode with stored brush actor class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateForSelectMode constinit property declarations *******************
	static const UECodeGen_Private::FClassPropertyParams NewProp_InBrushActorClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ControllerClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateForSelectMode constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateForSelectMode Property Definitions ******************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_InBrushActorClass = { "InBrushActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventCreateForSelectMode_Parms, InBrushActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ControllerClass = { "ControllerClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventCreateForSelectMode_Parms, ControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULaneMarkingController, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventCreateForSelectMode_Parms, ReturnValue), Z_Construct_UClass_ULaneMarkingController, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InBrushActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControllerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateForSelectMode Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULaneMarkingController, nullptr, "CreateForSelectMode", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LaneMarkingController_eventCreateForSelectMode_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LaneMarkingController_eventCreateForSelectMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULaneMarkingController_CreateForSelectMode(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULaneMarkingController::execCreateForSelectMode)
{
	P_GET_OBJECT(UClass,Z_Param_InBrushActorClass);
	P_GET_OBJECT(UClass,Z_Param_ControllerClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULaneMarkingController**)Z_Param__Result=ULaneMarkingController::CreateForSelectMode(Z_Param_InBrushActorClass,Z_Param_ControllerClass);
	P_NATIVE_END;
}
// ********** End Class ULaneMarkingController Function CreateForSelectMode ************************

// ********** Begin Class ULaneMarkingController Function GetFreehandMarkingParameters *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULaneMarkingController_GetFreehandMarkingParameters_Statics
struct UHT_STATICS
{
	struct LaneMarkingController_eventGetFreehandMarkingParameters_Parms
	{
		float OutMarkingWidth;
		UMaterialInterface* OutMarkingMaterial;
		float OutTextureScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Lane Marking" },
		{ "Comment", "// Helper method to get freehand marking creation parameters\n" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Helper method to get freehand marking creation parameters" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFreehandMarkingParameters constinit property declarations **********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutMarkingWidth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutMarkingMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutTextureScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFreehandMarkingParameters constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFreehandMarkingParameters Property Definitions *********************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_OutMarkingWidth = { "OutMarkingWidth", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventGetFreehandMarkingParameters_Parms, OutMarkingWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OutMarkingMaterial = { "OutMarkingMaterial", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventGetFreehandMarkingParameters_Parms, OutMarkingMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_OutTextureScale = { "OutTextureScale", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventGetFreehandMarkingParameters_Parms, OutTextureScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutMarkingWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutMarkingMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutTextureScale,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetFreehandMarkingParameters Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULaneMarkingController, nullptr, "GetFreehandMarkingParameters", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LaneMarkingController_eventGetFreehandMarkingParameters_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LaneMarkingController_eventGetFreehandMarkingParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULaneMarkingController_GetFreehandMarkingParameters(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULaneMarkingController::execGetFreehandMarkingParameters)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutMarkingWidth);
	P_GET_OBJECT_REF(UMaterialInterface,Z_Param_Out_OutMarkingMaterial);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutTextureScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetFreehandMarkingParameters(Z_Param_Out_OutMarkingWidth,P_ARG_GC_BARRIER(Z_Param_Out_OutMarkingMaterial),Z_Param_Out_OutTextureScale);
	P_NATIVE_END;
}
// ********** End Class ULaneMarkingController Function GetFreehandMarkingParameters ***************

// ********** Begin Class ULaneMarkingController Function GetTargetSegmentParameters ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULaneMarkingController_GetTargetSegmentParameters_Statics
struct UHT_STATICS
{
	struct LaneMarkingController_eventGetTargetSegmentParameters_Parms
	{
		float OutMarkingWidth;
		UMaterialInterface* OutMarkingMaterial;
		float OutEdgeOffset;
		float OutTextureVScale;
		ESegmentBehavior OutSegmentBehavior;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Lane Marking" },
		{ "Comment", "// Helper method to get lane marking segment parameters\n" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Helper method to get lane marking segment parameters" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTargetSegmentParameters constinit property declarations ************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutMarkingWidth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutMarkingMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutEdgeOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutTextureVScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutSegmentBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutSegmentBehavior;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LaneMarkingController_eventGetTargetSegmentParameters_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTargetSegmentParameters constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTargetSegmentParameters Property Definitions ***********************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_OutMarkingWidth = { "OutMarkingWidth", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventGetTargetSegmentParameters_Parms, OutMarkingWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OutMarkingMaterial = { "OutMarkingMaterial", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventGetTargetSegmentParameters_Parms, OutMarkingMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_OutEdgeOffset = { "OutEdgeOffset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventGetTargetSegmentParameters_Parms, OutEdgeOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_OutTextureVScale = { "OutTextureVScale", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventGetTargetSegmentParameters_Parms, OutTextureVScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_OutSegmentBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_OutSegmentBehavior = { "OutSegmentBehavior", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventGetTargetSegmentParameters_Parms, OutSegmentBehavior), Z_Construct_UEnum_RoadBLDRuntime_ESegmentBehavior, METADATA_PARAMS(0, nullptr) }; // 11af432ee0bb9e305f22f5af2d7be72793da907a
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(LaneMarkingController_eventGetTargetSegmentParameters_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutMarkingWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutMarkingMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutEdgeOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutTextureVScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSegmentBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutSegmentBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetTargetSegmentParameters Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULaneMarkingController, nullptr, "GetTargetSegmentParameters", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LaneMarkingController_eventGetTargetSegmentParameters_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LaneMarkingController_eventGetTargetSegmentParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULaneMarkingController_GetTargetSegmentParameters(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULaneMarkingController::execGetTargetSegmentParameters)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutMarkingWidth);
	P_GET_OBJECT_REF(UMaterialInterface,Z_Param_Out_OutMarkingMaterial);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutEdgeOffset);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutTextureVScale);
	P_GET_ENUM_REF(ESegmentBehavior,Z_Param_Out_OutSegmentBehavior);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetTargetSegmentParameters(Z_Param_Out_OutMarkingWidth,P_ARG_GC_BARRIER(Z_Param_Out_OutMarkingMaterial),Z_Param_Out_OutEdgeOffset,Z_Param_Out_OutTextureVScale,(ESegmentBehavior&)(Z_Param_Out_OutSegmentBehavior));
	P_NATIVE_END;
}
// ********** End Class ULaneMarkingController Function GetTargetSegmentParameters *****************

// ********** Begin Class ULaneMarkingController Function InitializeWithRoad ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULaneMarkingController_InitializeWithRoad_Statics
struct UHT_STATICS
{
	struct LaneMarkingController_eventInitializeWithRoad_Parms
	{
		ADynamicRoad* InTargetRoad;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Lane Marking" },
		{ "Comment", "// Initialize this controller with a target road\n" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Initialize this controller with a target road" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitializeWithRoad constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InTargetRoad;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitializeWithRoad constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitializeWithRoad Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InTargetRoad = { "InTargetRoad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventInitializeWithRoad_Parms, InTargetRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InTargetRoad,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function InitializeWithRoad Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULaneMarkingController, nullptr, "InitializeWithRoad", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LaneMarkingController_eventInitializeWithRoad_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LaneMarkingController_eventInitializeWithRoad_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULaneMarkingController_InitializeWithRoad(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULaneMarkingController::execInitializeWithRoad)
{
	P_GET_OBJECT(ADynamicRoad,Z_Param_InTargetRoad);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeWithRoad(Z_Param_InTargetRoad);
	P_NATIVE_END;
}
// ********** End Class ULaneMarkingController Function InitializeWithRoad *************************

// ********** Begin Class ULaneMarkingController Function IsFreehandSplineLinear *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULaneMarkingController_IsFreehandSplineLinear_Statics
struct UHT_STATICS
{
	struct LaneMarkingController_eventIsFreehandSplineLinear_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Lane Marking|Freehand Settings" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsFreehandSplineLinear constinit property declarations ****************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LaneMarkingController_eventIsFreehandSplineLinear_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsFreehandSplineLinear constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsFreehandSplineLinear Property Definitions ***************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(LaneMarkingController_eventIsFreehandSplineLinear_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsFreehandSplineLinear Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULaneMarkingController, nullptr, "IsFreehandSplineLinear", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LaneMarkingController_eventIsFreehandSplineLinear_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LaneMarkingController_eventIsFreehandSplineLinear_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULaneMarkingController_IsFreehandSplineLinear(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULaneMarkingController::execIsFreehandSplineLinear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFreehandSplineLinear();
	P_NATIVE_END;
}
// ********** End Class ULaneMarkingController Function IsFreehandSplineLinear *********************

// ********** Begin Class ULaneMarkingController Function OnDrawModeActivating *********************
struct LaneMarkingController_eventOnDrawModeActivating_Parms
{
	bool bHasMaterial;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	LaneMarkingController_eventOnDrawModeActivating_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_ULaneMarkingController_OnDrawModeActivating = FName(TEXT("OnDrawModeActivating"));
bool ULaneMarkingController::OnDrawModeActivating(bool bHasMaterial)
{
	UFunction* Func = FindFunctionChecked(NAME_ULaneMarkingController_OnDrawModeActivating);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		LaneMarkingController_eventOnDrawModeActivating_Parms Parms;
		Parms.bHasMaterial=bHasMaterial ? true : false;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return OnDrawModeActivating_Implementation(bHasMaterial);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULaneMarkingController_OnDrawModeActivating_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Lane Marking" },
		{ "Comment", "// Blueprint event called when Draw Mode is being activated or when drawing state needs to be updated\n// Return true to enable drawing (bDrawingEnabled = true), false to disable drawing\n// bHasMaterial indicates whether a valid material is currently set\n// Note: The mode switch will always proceed, but the return value controls whether drawing is enabled\n// Use this to show notifications, update UI, or validate drawing conditions\n" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Blueprint event called when Draw Mode is being activated or when drawing state needs to be updated\nReturn true to enable drawing (bDrawingEnabled = true), false to disable drawing\nbHasMaterial indicates whether a valid material is currently set\nNote: The mode switch will always proceed, but the return value controls whether drawing is enabled\nUse this to show notifications, update UI, or validate drawing conditions" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnDrawModeActivating constinit property declarations ******************
	static void NewProp_bHasMaterial_SetBit(void* Obj)
	{
		((LaneMarkingController_eventOnDrawModeActivating_Parms*)Obj)->bHasMaterial = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMaterial;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LaneMarkingController_eventOnDrawModeActivating_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnDrawModeActivating constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnDrawModeActivating Property Definitions *****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHasMaterial = { "bHasMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(LaneMarkingController_eventOnDrawModeActivating_Parms), &UHT_STATICS::NewProp_bHasMaterial_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(LaneMarkingController_eventOnDrawModeActivating_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHasMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnDrawModeActivating Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULaneMarkingController, nullptr, "OnDrawModeActivating", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<LaneMarkingController_eventOnDrawModeActivating_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(LaneMarkingController_eventOnDrawModeActivating_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULaneMarkingController_OnDrawModeActivating(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULaneMarkingController::execOnDrawModeActivating)
{
	P_GET_UBOOL(Z_Param_bHasMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OnDrawModeActivating_Implementation(Z_Param_bHasMaterial);
	P_NATIVE_END;
}
// ********** End Class ULaneMarkingController Function OnDrawModeActivating ***********************

// ********** Begin Class ULaneMarkingController Function OnFreehandMarkingSelected ****************
struct LaneMarkingController_eventOnFreehandMarkingSelected_Parms
{
	URoadMarkingLine* SelectedMarking;
	float MarkingWidth;
	UMaterialInterface* MarkingMaterial;
	float TextureVScale;
};
static FName NAME_ULaneMarkingController_OnFreehandMarkingSelected = FName(TEXT("OnFreehandMarkingSelected"));
void ULaneMarkingController::OnFreehandMarkingSelected(URoadMarkingLine* SelectedMarking, float MarkingWidth, UMaterialInterface* MarkingMaterial, float TextureVScale)
{
	LaneMarkingController_eventOnFreehandMarkingSelected_Parms Parms;
	Parms.SelectedMarking=SelectedMarking;
	Parms.MarkingWidth=MarkingWidth;
	Parms.MarkingMaterial=MarkingMaterial;
	Parms.TextureVScale=TextureVScale;
	UFunction* Func = FindFunctionChecked(NAME_ULaneMarkingController_OnFreehandMarkingSelected);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULaneMarkingController_OnFreehandMarkingSelected_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Lane Marking" },
		{ "Comment", "// Blueprint event called when a new freehand marking is selected\n// SelectedMarking: The freehand marking that was selected\n// MarkingWidth: The width of the freehand marking in centimeters\n// MarkingMaterial: The material applied to the freehand marking\n// TextureVScale: The texture tiling/scale value\n// Use this to update UI, show marking properties, or perform other actions when selection changes\n" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Blueprint event called when a new freehand marking is selected\nSelectedMarking: The freehand marking that was selected\nMarkingWidth: The width of the freehand marking in centimeters\nMarkingMaterial: The material applied to the freehand marking\nTextureVScale: The texture tiling/scale value\nUse this to update UI, show marking properties, or perform other actions when selection changes" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnFreehandMarkingSelected constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedMarking;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MarkingWidth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkingMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TextureVScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnFreehandMarkingSelected constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnFreehandMarkingSelected Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SelectedMarking = { "SelectedMarking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventOnFreehandMarkingSelected_Parms, SelectedMarking), Z_Construct_UClass_URoadMarkingLine, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MarkingWidth = { "MarkingWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventOnFreehandMarkingSelected_Parms, MarkingWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MarkingMaterial = { "MarkingMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventOnFreehandMarkingSelected_Parms, MarkingMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TextureVScale = { "TextureVScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventOnFreehandMarkingSelected_Parms, TextureVScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedMarking,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MarkingWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MarkingMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextureVScale,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnFreehandMarkingSelected Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULaneMarkingController, nullptr, "OnFreehandMarkingSelected", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<LaneMarkingController_eventOnFreehandMarkingSelected_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(LaneMarkingController_eventOnFreehandMarkingSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULaneMarkingController_OnFreehandMarkingSelected(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class ULaneMarkingController Function OnFreehandMarkingSelected ******************

// ********** Begin Class ULaneMarkingController Function OnFreehandSplineTypeChanged **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULaneMarkingController_OnFreehandSplineTypeChanged_Statics
struct UHT_STATICS
{
	struct LaneMarkingController_eventOnFreehandSplineTypeChanged_Parms
	{
		bool bLinear;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Lane Marking|Freehand Settings" },
		{ "Comment", "// Toggle freehand spline interpolation mode (Linear vs Curve tangents).\n" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Toggle freehand spline interpolation mode (Linear vs Curve tangents)." },
	};
#endif // WITH_METADATA

// ********** Begin Function OnFreehandSplineTypeChanged constinit property declarations ***********
	static void NewProp_bLinear_SetBit(void* Obj)
	{
		((LaneMarkingController_eventOnFreehandSplineTypeChanged_Parms*)Obj)->bLinear = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinear;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnFreehandSplineTypeChanged constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnFreehandSplineTypeChanged Property Definitions **********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLinear = { "bLinear", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(LaneMarkingController_eventOnFreehandSplineTypeChanged_Parms), &UHT_STATICS::NewProp_bLinear_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLinear,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnFreehandSplineTypeChanged Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULaneMarkingController, nullptr, "OnFreehandSplineTypeChanged", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LaneMarkingController_eventOnFreehandSplineTypeChanged_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LaneMarkingController_eventOnFreehandSplineTypeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULaneMarkingController_OnFreehandSplineTypeChanged(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULaneMarkingController::execOnFreehandSplineTypeChanged)
{
	P_GET_UBOOL(Z_Param_bLinear);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFreehandSplineTypeChanged(Z_Param_bLinear);
	P_NATIVE_END;
}
// ********** End Class ULaneMarkingController Function OnFreehandSplineTypeChanged ****************

// ********** Begin Class ULaneMarkingController Function OnLaneMarkingSegmentSelected *************
struct LaneMarkingController_eventOnLaneMarkingSegmentSelected_Parms
{
	UEdgeCurve* SelectedEdge;
	int32 SegmentIndex;
	float MarkingWidth;
	UMaterialInterface* MarkingMaterial;
	float EdgeOffset;
	float TextureVScale;
	ESegmentBehavior SegmentBehavior;
};
static FName NAME_ULaneMarkingController_OnLaneMarkingSegmentSelected = FName(TEXT("OnLaneMarkingSegmentSelected"));
void ULaneMarkingController::OnLaneMarkingSegmentSelected(UEdgeCurve* SelectedEdge, int32 SegmentIndex, float MarkingWidth, UMaterialInterface* MarkingMaterial, float EdgeOffset, float TextureVScale, ESegmentBehavior SegmentBehavior)
{
	LaneMarkingController_eventOnLaneMarkingSegmentSelected_Parms Parms;
	Parms.SelectedEdge=SelectedEdge;
	Parms.SegmentIndex=SegmentIndex;
	Parms.MarkingWidth=MarkingWidth;
	Parms.MarkingMaterial=MarkingMaterial;
	Parms.EdgeOffset=EdgeOffset;
	Parms.TextureVScale=TextureVScale;
	Parms.SegmentBehavior=SegmentBehavior;
	UFunction* Func = FindFunctionChecked(NAME_ULaneMarkingController_OnLaneMarkingSegmentSelected);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULaneMarkingController_OnLaneMarkingSegmentSelected_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Lane Marking" },
		{ "Comment", "// Blueprint event called when a new lane marking segment is selected\n// SelectedEdge: The edge curve containing the selected segment\n// SegmentIndex: The index of the selected segment in the edge's Segments array\n// MarkingWidth: The width of the lane marking in centimeters\n// MarkingMaterial: The material applied to the lane marking\n// EdgeOffset: The offset from the edge curve\n// TextureVScale: The texture tiling/scale value\n// SegmentBehavior: The intersection masking behavior for this segment\n// Use this to update UI, show segment properties, or perform other actions when selection changes\n" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Blueprint event called when a new lane marking segment is selected\nSelectedEdge: The edge curve containing the selected segment\nSegmentIndex: The index of the selected segment in the edge's Segments array\nMarkingWidth: The width of the lane marking in centimeters\nMarkingMaterial: The material applied to the lane marking\nEdgeOffset: The offset from the edge curve\nTextureVScale: The texture tiling/scale value\nSegmentBehavior: The intersection masking behavior for this segment\nUse this to update UI, show segment properties, or perform other actions when selection changes" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnLaneMarkingSegmentSelected constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedEdge;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SegmentIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MarkingWidth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkingMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TextureVScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SegmentBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SegmentBehavior;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnLaneMarkingSegmentSelected constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnLaneMarkingSegmentSelected Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SelectedEdge = { "SelectedEdge", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventOnLaneMarkingSegmentSelected_Parms, SelectedEdge), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SegmentIndex = { "SegmentIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventOnLaneMarkingSegmentSelected_Parms, SegmentIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MarkingWidth = { "MarkingWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventOnLaneMarkingSegmentSelected_Parms, MarkingWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MarkingMaterial = { "MarkingMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventOnLaneMarkingSegmentSelected_Parms, MarkingMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_EdgeOffset = { "EdgeOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventOnLaneMarkingSegmentSelected_Parms, EdgeOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TextureVScale = { "TextureVScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventOnLaneMarkingSegmentSelected_Parms, TextureVScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SegmentBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SegmentBehavior = { "SegmentBehavior", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventOnLaneMarkingSegmentSelected_Parms, SegmentBehavior), Z_Construct_UEnum_RoadBLDRuntime_ESegmentBehavior, METADATA_PARAMS(0, nullptr) }; // 11af432ee0bb9e305f22f5af2d7be72793da907a
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SegmentIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MarkingWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MarkingMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextureVScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SegmentBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SegmentBehavior,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnLaneMarkingSegmentSelected Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULaneMarkingController, nullptr, "OnLaneMarkingSegmentSelected", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<LaneMarkingController_eventOnLaneMarkingSegmentSelected_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(LaneMarkingController_eventOnLaneMarkingSegmentSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULaneMarkingController_OnLaneMarkingSegmentSelected(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class ULaneMarkingController Function OnLaneMarkingSegmentSelected ***************

// ********** Begin Class ULaneMarkingController Function SetFreehandMarkingParameters *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULaneMarkingController_SetFreehandMarkingParameters_Statics
struct UHT_STATICS
{
	struct LaneMarkingController_eventSetFreehandMarkingParameters_Parms
	{
		float MarkingWidth;
		UMaterialInterface* MarkingMaterial;
		float TextureScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Lane Marking" },
		{ "Comment", "// Helper method to set freehand marking creation parameters\n" },
		{ "CPP_Default_TextureScale", "1.000000" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Helper method to set freehand marking creation parameters" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetFreehandMarkingParameters constinit property declarations **********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MarkingWidth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkingMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TextureScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetFreehandMarkingParameters constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetFreehandMarkingParameters Property Definitions *********************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MarkingWidth = { "MarkingWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventSetFreehandMarkingParameters_Parms, MarkingWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MarkingMaterial = { "MarkingMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventSetFreehandMarkingParameters_Parms, MarkingMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TextureScale = { "TextureScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventSetFreehandMarkingParameters_Parms, TextureScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MarkingWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MarkingMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextureScale,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetFreehandMarkingParameters Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULaneMarkingController, nullptr, "SetFreehandMarkingParameters", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LaneMarkingController_eventSetFreehandMarkingParameters_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LaneMarkingController_eventSetFreehandMarkingParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULaneMarkingController_SetFreehandMarkingParameters(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULaneMarkingController::execSetFreehandMarkingParameters)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MarkingWidth);
	P_GET_OBJECT(UMaterialInterface,Z_Param_MarkingMaterial);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TextureScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFreehandMarkingParameters(Z_Param_MarkingWidth,Z_Param_MarkingMaterial,Z_Param_TextureScale);
	P_NATIVE_END;
}
// ********** End Class ULaneMarkingController Function SetFreehandMarkingParameters ***************

// ********** Begin Class ULaneMarkingController Function SetTargetSegmentParameters ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULaneMarkingController_SetTargetSegmentParameters_Statics
struct UHT_STATICS
{
	struct LaneMarkingController_eventSetTargetSegmentParameters_Parms
	{
		float MarkingWidth;
		UMaterialInterface* MarkingMaterial;
		float EdgeOffset;
		float TextureVScale;
		ESegmentBehavior SegmentBehavior;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Lane Marking" },
		{ "Comment", "// Helper method to set lane marking segment parameters\n" },
		{ "CPP_Default_EdgeOffset", "0.000000" },
		{ "CPP_Default_SegmentBehavior", "UseFullMask" },
		{ "CPP_Default_TextureVScale", "1.000000" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Helper method to set lane marking segment parameters" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetTargetSegmentParameters constinit property declarations ************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MarkingWidth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkingMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TextureVScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SegmentBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SegmentBehavior;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LaneMarkingController_eventSetTargetSegmentParameters_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTargetSegmentParameters constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTargetSegmentParameters Property Definitions ***********************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MarkingWidth = { "MarkingWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventSetTargetSegmentParameters_Parms, MarkingWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MarkingMaterial = { "MarkingMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventSetTargetSegmentParameters_Parms, MarkingMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_EdgeOffset = { "EdgeOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventSetTargetSegmentParameters_Parms, EdgeOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TextureVScale = { "TextureVScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventSetTargetSegmentParameters_Parms, TextureVScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SegmentBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SegmentBehavior = { "SegmentBehavior", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventSetTargetSegmentParameters_Parms, SegmentBehavior), Z_Construct_UEnum_RoadBLDRuntime_ESegmentBehavior, METADATA_PARAMS(0, nullptr) }; // 11af432ee0bb9e305f22f5af2d7be72793da907a
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(LaneMarkingController_eventSetTargetSegmentParameters_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MarkingWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MarkingMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextureVScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SegmentBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SegmentBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetTargetSegmentParameters Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULaneMarkingController, nullptr, "SetTargetSegmentParameters", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LaneMarkingController_eventSetTargetSegmentParameters_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LaneMarkingController_eventSetTargetSegmentParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULaneMarkingController_SetTargetSegmentParameters(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULaneMarkingController::execSetTargetSegmentParameters)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MarkingWidth);
	P_GET_OBJECT(UMaterialInterface,Z_Param_MarkingMaterial);
	P_GET_PROPERTY(FFloatProperty,Z_Param_EdgeOffset);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TextureVScale);
	P_GET_ENUM(ESegmentBehavior,Z_Param_SegmentBehavior);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetTargetSegmentParameters(Z_Param_MarkingWidth,Z_Param_MarkingMaterial,Z_Param_EdgeOffset,Z_Param_TextureVScale,ESegmentBehavior(Z_Param_SegmentBehavior));
	P_NATIVE_END;
}
// ********** End Class ULaneMarkingController Function SetTargetSegmentParameters *****************

// ********** Begin Class ULaneMarkingController Function SetToolMode ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULaneMarkingController_SetToolMode_Statics
struct UHT_STATICS
{
	struct LaneMarkingController_eventSetToolMode_Parms
	{
		ELaneMarkingToolMode NewMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Lane Marking" },
		{ "Comment", "// Set the tool mode and handle brush actor spawning/hiding\n" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Set the tool mode and handle brush actor spawning/hiding" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetToolMode constinit property declarations ***************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetToolMode constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetToolMode Property Definitions **************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_NewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(LaneMarkingController_eventSetToolMode_Parms, NewMode), Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneMarkingToolMode, METADATA_PARAMS(0, nullptr) }; // 4cedb606f8e8d9cc65fa33899781fc1afc3a3655
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewMode,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetToolMode Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULaneMarkingController, nullptr, "SetToolMode", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LaneMarkingController_eventSetToolMode_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LaneMarkingController_eventSetToolMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULaneMarkingController_SetToolMode(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULaneMarkingController::execSetToolMode)
{
	P_GET_ENUM(ELaneMarkingToolMode,Z_Param_NewMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetToolMode(ELaneMarkingToolMode(Z_Param_NewMode));
	P_NATIVE_END;
}
// ********** End Class ULaneMarkingController Function SetToolMode ********************************

// ********** Begin Class ULaneMarkingController ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ULaneMarkingController_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ULaneMarkingController - Edit controller for modifying lane marking segments\n * \n * Allows users to select, split, and modify lane marking segments along road edges.\n * Supports three modes: SelectMode, ChopMode, and DrawMode.\n */" },
		{ "IncludePath", "LaneMarkingController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "ULaneMarkingController - Edit controller for modifying lane marking segments\n\nAllows users to select, split, and modify lane marking segments along road edges.\nSupports three modes: SelectMode, ChopMode, and DrawMode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolMode_MetaData[] = {
		{ "Category", "Lane Marking" },
		{ "Comment", "// Current tool mode (Select, Chop, or Draw)\n" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Current tool mode (Select, Chop, or Draw)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRoad_MetaData[] = {
		{ "Category", "Lane Marking" },
		{ "Comment", "// The road being edited (set during initialization)\n" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "The road being edited (set during initialization)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetEdge_MetaData[] = {
		{ "Category", "Lane Marking" },
		{ "Comment", "// Currently selected edge curve\n" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Currently selected edge curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSegmentIndex_MetaData[] = {
		{ "Category", "Lane Marking" },
		{ "Comment", "// Index of the selected segment in TargetEdge->Segments array\n" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Index of the selected segment in TargetEdge->Segments array" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetFreehandMarking_MetaData[] = {
		{ "Category", "Lane Marking" },
		{ "Comment", "// Freehand marking selected for chopping (mutually exclusive with TargetEdge)\n" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Freehand marking selected for chopping (mutually exclusive with TargetEdge)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredEdge_MetaData[] = {
		{ "Category", "Lane Marking" },
		{ "Comment", "// Edge curve currently under the mouse cursor\n" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Edge curve currently under the mouse cursor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredSegmentIndex_MetaData[] = {
		{ "Category", "Lane Marking" },
		{ "Comment", "// Index of the segment under the mouse cursor\n" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Index of the segment under the mouse cursor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushActor_MetaData[] = {
		{ "Category", "Lane Marking" },
		{ "Comment", "// DEPRECATED: Brush actor is no longer used, replaced by PDI preview lines\n" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "BrushActor is deprecated. PDI preview lines are now used in Draw Mode." },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "DEPRECATED: Brush actor is no longer used, replaced by PDI preview lines" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushActorClass_MetaData[] = {
		{ "Category", "Lane Marking" },
		{ "Comment", "// DEPRECATED: Brush actor class is no longer used\n" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "BrushActorClass is deprecated. PDI preview lines are now used in Draw Mode." },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "DEPRECATED: Brush actor class is no longer used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveFreehandMarking_MetaData[] = {
		{ "Category", "Lane Marking" },
		{ "Comment", "// Active freehand marking being drawn\n" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Active freehand marking being drawn" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedFreehandMarking_MetaData[] = {
		{ "Category", "Lane Marking" },
		{ "Comment", "// Selected freehand marking in Select Mode\n" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Selected freehand marking in Select Mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawingEnabled_MetaData[] = {
		{ "Category", "Lane Marking" },
		{ "Comment", "// Whether drawing is currently enabled (set by Blueprint based on material availability, etc.)\n" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Whether drawing is currently enabled (set by Blueprint based on material availability, etc.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveFreehandMarkingWidth_MetaData[] = {
		{ "Category", "Lane Marking|Freehand Settings" },
		{ "Comment", "// Freehand marking creation settings\n" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Freehand marking creation settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveFreehandMarkingMaterial_MetaData[] = {
		{ "Category", "Lane Marking|Freehand Settings" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveFreehandMarkingTextureScale_MetaData[] = {
		{ "Category", "Lane Marking|Freehand Settings" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLinearFreehandTangents_MetaData[] = {
		{ "Category", "Lane Marking|Freehand Settings" },
		{ "Comment", "// When true, freehand markings use linear spline interpolation (zero tangents).\n// When false, freehand markings use curved interpolation with tangent handles.\n" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "When true, freehand markings use linear spline interpolation (zero tangents).\nWhen false, freehand markings use curved interpolation with tangent handles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveFreehandPresetClass_MetaData[] = {
		{ "Category", "Lane Marking|Freehand Settings" },
		{ "Comment", "// Last style preset selected for freehand drawing defaults.\n" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Last style preset selected for freehand drawing defaults." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineEditActor_MetaData[] = {
		{ "Comment", "// Spline edit actor for editing freehand markings using Unreal's native spline editor\n" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Spline edit actor for editing freehand markings using Unreal's native spline editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditSplineComponent_MetaData[] = {
		{ "Comment", "// Spline component within SplineEditActor for control point editing\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Spline component within SplineEditActor for control point editing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedFreehandMarkingRoadGeo_MetaData[] = {
		{ "Comment", "// Transient reference to the RoadGeo actor for the selected freehand marking\n" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Transient reference to the RoadGeo actor for the selected freehand marking" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredSegmentColor_MetaData[] = {
		{ "Category", "Lane Marking|Visuals" },
		{ "Comment", "// Visual settings\n" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
		{ "ToolTip", "Visual settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedSegmentColor_MetaData[] = {
		{ "Category", "Lane Marking|Visuals" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentLineThickness_MetaData[] = {
		{ "Category", "Lane Marking|Visuals" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentSampleRate_MetaData[] = {
		{ "Category", "Lane Marking|Visuals" },
		{ "ModuleRelativePath", "Public/LaneMarkingController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULaneMarkingController constinit property declarations *******************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ToolMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ToolMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetRoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetEdge;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetSegmentIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetFreehandMarking;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoveredEdge;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HoveredSegmentIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BrushActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveFreehandMarking;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedFreehandMarking;
	static void NewProp_bDrawingEnabled_SetBit(void* Obj)
	{
		((ULaneMarkingController*)Obj)->bDrawingEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawingEnabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActiveFreehandMarkingWidth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveFreehandMarkingMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActiveFreehandMarkingTextureScale;
	static void NewProp_bUseLinearFreehandTangents_SetBit(void* Obj)
	{
		((ULaneMarkingController*)Obj)->bUseLinearFreehandTangents = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLinearFreehandTangents;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActiveFreehandPresetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineEditActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditSplineComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedFreehandMarkingRoadGeo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredSegmentColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedSegmentColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SegmentLineThickness;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SegmentSampleRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ULaneMarkingController constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CanDrawFreehandMarking"), .Pointer = &ULaneMarkingController::execCanDrawFreehandMarking },
		{ .NameUTF8 = UTF8TEXT("CreateForDrawMode"), .Pointer = &ULaneMarkingController::execCreateForDrawMode },
		{ .NameUTF8 = UTF8TEXT("CreateForFreehandPreset"), .Pointer = &ULaneMarkingController::execCreateForFreehandPreset },
		{ .NameUTF8 = UTF8TEXT("CreateForRoad"), .Pointer = &ULaneMarkingController::execCreateForRoad },
		{ .NameUTF8 = UTF8TEXT("CreateForSelectMode"), .Pointer = &ULaneMarkingController::execCreateForSelectMode },
		{ .NameUTF8 = UTF8TEXT("GetFreehandMarkingParameters"), .Pointer = &ULaneMarkingController::execGetFreehandMarkingParameters },
		{ .NameUTF8 = UTF8TEXT("GetTargetSegmentParameters"), .Pointer = &ULaneMarkingController::execGetTargetSegmentParameters },
		{ .NameUTF8 = UTF8TEXT("InitializeWithRoad"), .Pointer = &ULaneMarkingController::execInitializeWithRoad },
		{ .NameUTF8 = UTF8TEXT("IsFreehandSplineLinear"), .Pointer = &ULaneMarkingController::execIsFreehandSplineLinear },
		{ .NameUTF8 = UTF8TEXT("OnDrawModeActivating"), .Pointer = &ULaneMarkingController::execOnDrawModeActivating },
		{ .NameUTF8 = UTF8TEXT("OnFreehandSplineTypeChanged"), .Pointer = &ULaneMarkingController::execOnFreehandSplineTypeChanged },
		{ .NameUTF8 = UTF8TEXT("SetFreehandMarkingParameters"), .Pointer = &ULaneMarkingController::execSetFreehandMarkingParameters },
		{ .NameUTF8 = UTF8TEXT("SetTargetSegmentParameters"), .Pointer = &ULaneMarkingController::execSetTargetSegmentParameters },
		{ .NameUTF8 = UTF8TEXT("SetToolMode"), .Pointer = &ULaneMarkingController::execSetToolMode },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULaneMarkingController_CanDrawFreehandMarking, "CanDrawFreehandMarking" }, // 432ab1306de775f33b5f154ca5d7baed2ad05991
		{ &Z_Construct_UFunction_ULaneMarkingController_CreateForDrawMode, "CreateForDrawMode" }, // 250fdce0d17ae3b7321094f2ed40caa966d0fa80
		{ &Z_Construct_UFunction_ULaneMarkingController_CreateForFreehandPreset, "CreateForFreehandPreset" }, // 2fa71261da192038dfaf08186acf3586116f0102
		{ &Z_Construct_UFunction_ULaneMarkingController_CreateForRoad, "CreateForRoad" }, // 20d8c56d5f5c291e1355bc8a9f3ea19c6ffca0e7
		{ &Z_Construct_UFunction_ULaneMarkingController_CreateForSelectMode, "CreateForSelectMode" }, // 1872ee5d1446cf0cb526961b510dbd9f9a28402c
		{ &Z_Construct_UFunction_ULaneMarkingController_GetFreehandMarkingParameters, "GetFreehandMarkingParameters" }, // 18834c6a1e294936ddf94a23c5ed631a72e0a890
		{ &Z_Construct_UFunction_ULaneMarkingController_GetTargetSegmentParameters, "GetTargetSegmentParameters" }, // e2ec757be190be7f44f4ade3df0a0970f8355051
		{ &Z_Construct_UFunction_ULaneMarkingController_InitializeWithRoad, "InitializeWithRoad" }, // 840dfae8cc42d76a6ce4298a92f6af89c0ee929f
		{ &Z_Construct_UFunction_ULaneMarkingController_IsFreehandSplineLinear, "IsFreehandSplineLinear" }, // 05f972fcdc49186b24e6ff9a8f15c3bae414dcf6
		{ &Z_Construct_UFunction_ULaneMarkingController_OnDrawModeActivating, "OnDrawModeActivating" }, // a9f58cbcd3e2cb0dc22e4b6aa2330534d3e0110d
		{ &Z_Construct_UFunction_ULaneMarkingController_OnFreehandMarkingSelected, "OnFreehandMarkingSelected" }, // bd4fdc181c0125fc77ea0a08c57d021571586a00
		{ &Z_Construct_UFunction_ULaneMarkingController_OnFreehandSplineTypeChanged, "OnFreehandSplineTypeChanged" }, // 1e340b1baeb31c51a2f0033422695016c9f9331e
		{ &Z_Construct_UFunction_ULaneMarkingController_OnLaneMarkingSegmentSelected, "OnLaneMarkingSegmentSelected" }, // 3a0a3f4bfc1f07c1a8f112222b3736ee95931481
		{ &Z_Construct_UFunction_ULaneMarkingController_SetFreehandMarkingParameters, "SetFreehandMarkingParameters" }, // 7253a8df55e0023438ad7b11b79d33c0314c8450
		{ &Z_Construct_UFunction_ULaneMarkingController_SetTargetSegmentParameters, "SetTargetSegmentParameters" }, // 98b683ba006b40ba8e4751dddc5d17aed1b76d41
		{ &Z_Construct_UFunction_ULaneMarkingController_SetToolMode, "SetToolMode" }, // 892aa85155ed988e458b3648a08b6cdae833a1b1
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULaneMarkingController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ULaneMarkingController Property Definitions ******************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ToolMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ToolMode = { "ToolMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(ULaneMarkingController, ToolMode), Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneMarkingToolMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolMode_MetaData), NewProp_ToolMode_MetaData) }; // 4cedb606f8e8d9cc65fa33899781fc1afc3a3655
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetRoad = { "TargetRoad", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ULaneMarkingController, TargetRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRoad_MetaData), NewProp_TargetRoad_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetEdge = { "TargetEdge", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ULaneMarkingController, TargetEdge), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetEdge_MetaData), NewProp_TargetEdge_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_TargetSegmentIndex = { "TargetSegmentIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ULaneMarkingController, TargetSegmentIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSegmentIndex_MetaData), NewProp_TargetSegmentIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetFreehandMarking = { "TargetFreehandMarking", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ULaneMarkingController, TargetFreehandMarking), Z_Construct_UClass_URoadMarkingLine, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetFreehandMarking_MetaData), NewProp_TargetFreehandMarking_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HoveredEdge = { "HoveredEdge", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ULaneMarkingController, HoveredEdge), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredEdge_MetaData), NewProp_HoveredEdge_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_HoveredSegmentIndex = { "HoveredSegmentIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ULaneMarkingController, HoveredSegmentIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredSegmentIndex_MetaData), NewProp_HoveredSegmentIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_BrushActor = { "BrushActor", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ULaneMarkingController, BrushActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushActor_MetaData), NewProp_BrushActor_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_BrushActorClass = { "BrushActorClass", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(ULaneMarkingController, BrushActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushActorClass_MetaData), NewProp_BrushActorClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ActiveFreehandMarking = { "ActiveFreehandMarking", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ULaneMarkingController, ActiveFreehandMarking), Z_Construct_UClass_URoadMarkingLine, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveFreehandMarking_MetaData), NewProp_ActiveFreehandMarking_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SelectedFreehandMarking = { "SelectedFreehandMarking", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ULaneMarkingController, SelectedFreehandMarking), Z_Construct_UClass_URoadMarkingLine, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedFreehandMarking_MetaData), NewProp_SelectedFreehandMarking_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDrawingEnabled = { "bDrawingEnabled", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ULaneMarkingController), &UHT_STATICS::NewProp_bDrawingEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawingEnabled_MetaData), NewProp_bDrawingEnabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ActiveFreehandMarkingWidth = { "ActiveFreehandMarkingWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ULaneMarkingController, ActiveFreehandMarkingWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveFreehandMarkingWidth_MetaData), NewProp_ActiveFreehandMarkingWidth_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ActiveFreehandMarkingMaterial = { "ActiveFreehandMarkingMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ULaneMarkingController, ActiveFreehandMarkingMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveFreehandMarkingMaterial_MetaData), NewProp_ActiveFreehandMarkingMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ActiveFreehandMarkingTextureScale = { "ActiveFreehandMarkingTextureScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ULaneMarkingController, ActiveFreehandMarkingTextureScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveFreehandMarkingTextureScale_MetaData), NewProp_ActiveFreehandMarkingTextureScale_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseLinearFreehandTangents = { "bUseLinearFreehandTangents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ULaneMarkingController), &UHT_STATICS::NewProp_bUseLinearFreehandTangents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLinearFreehandTangents_MetaData), NewProp_bUseLinearFreehandTangents_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ActiveFreehandPresetClass = { "ActiveFreehandPresetClass", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(ULaneMarkingController, ActiveFreehandPresetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDynamicRoadMarking, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveFreehandPresetClass_MetaData), NewProp_ActiveFreehandPresetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SplineEditActor = { "SplineEditActor", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ULaneMarkingController, SplineEditActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineEditActor_MetaData), NewProp_SplineEditActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_EditSplineComponent = { "EditSplineComponent", nullptr, (EPropertyFlags)0x0114000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ULaneMarkingController, EditSplineComponent), Z_Construct_UClass_USplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditSplineComponent_MetaData), NewProp_EditSplineComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SelectedFreehandMarkingRoadGeo = { "SelectedFreehandMarkingRoadGeo", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ULaneMarkingController, SelectedFreehandMarkingRoadGeo), Z_Construct_UClass_ARoadGeo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedFreehandMarkingRoadGeo_MetaData), NewProp_SelectedFreehandMarkingRoadGeo_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_HoveredSegmentColor = { "HoveredSegmentColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ULaneMarkingController, HoveredSegmentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredSegmentColor_MetaData), NewProp_HoveredSegmentColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SelectedSegmentColor = { "SelectedSegmentColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ULaneMarkingController, SelectedSegmentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedSegmentColor_MetaData), NewProp_SelectedSegmentColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SegmentLineThickness = { "SegmentLineThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ULaneMarkingController, SegmentLineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentLineThickness_MetaData), NewProp_SegmentLineThickness_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_SegmentSampleRate = { "SegmentSampleRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(ULaneMarkingController, SegmentSampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentSampleRate_MetaData), NewProp_SegmentSampleRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ToolMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ToolMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetSegmentIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetFreehandMarking,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HoveredEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HoveredSegmentIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BrushActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BrushActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveFreehandMarking,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedFreehandMarking,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDrawingEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveFreehandMarkingWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveFreehandMarkingMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveFreehandMarkingTextureScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseLinearFreehandTangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveFreehandPresetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SplineEditActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EditSplineComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedFreehandMarkingRoadGeo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HoveredSegmentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedSegmentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SegmentLineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SegmentSampleRate,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ULaneMarkingController Property Definitions ********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldBLDEditController,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ULaneMarkingController,
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
static void ULaneMarkingController_StaticRegisterNativesULaneMarkingController()
{
	UClass* Class = ULaneMarkingController::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULaneMarkingController;
UClass* Z_Construct_UClass_ULaneMarkingController(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ULaneMarkingController;
		if (!Z_Registration_Info_UClass_ULaneMarkingController.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("LaneMarkingController"),
				Z_Registration_Info_UClass_ULaneMarkingController.InnerSingleton,
				ULaneMarkingController_StaticRegisterNativesULaneMarkingController,
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
		return Z_Registration_Info_UClass_ULaneMarkingController.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ULaneMarkingController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULaneMarkingController.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ULaneMarkingController.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULaneMarkingController);
ULaneMarkingController::~ULaneMarkingController() {}
// ********** End Class ULaneMarkingController *****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_LaneMarkingController_h__Script_RoadBLDEditorToolkit_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneMarkingToolMode, TEXT("ELaneMarkingToolMode"), &ZRIE_ELaneMarkingToolMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1290647046U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULaneMarkingController, TEXT("ULaneMarkingController"), &Z_Registration_Info_UClass_ULaneMarkingController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULaneMarkingController), 1774482064U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_LaneMarkingController_h__Script_RoadBLDEditorToolkit_609ec8e66a8109d0ffc27abf0d51284ebe469ac6{
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
