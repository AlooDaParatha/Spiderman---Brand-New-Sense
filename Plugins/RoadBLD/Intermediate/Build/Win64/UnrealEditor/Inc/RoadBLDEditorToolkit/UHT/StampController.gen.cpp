// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StampController.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeStampController() {}

// ********** Begin Cross Module References ********************************************************
WORLDBLDEDITOR_API UClass* Z_Construct_UClass_UWorldBLDEditController(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoad(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadLane(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoadNetwork(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadStamp(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_EStampToolMode(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UStampController(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UStampController(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EStampToolMode ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDEditorToolkit_EStampToolMode_Statics
template<> ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EStampToolMode>()
{
	return Z_Construct_UEnum_RoadBLDEditorToolkit_EStampToolMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "EditMode.DisplayName", "Edit Mode" },
		{ "EditMode.Name", "EStampToolMode::EditMode" },
		{ "ModuleRelativePath", "Public/StampController.h" },
		{ "PlaceMode.DisplayName", "Place Mode" },
		{ "PlaceMode.Name", "EStampToolMode::PlaceMode" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStampToolMode::PlaceMode", (int64)EStampToolMode::PlaceMode },
		{ "EStampToolMode::EditMode", (int64)EStampToolMode::EditMode },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	"EStampToolMode",
	"EStampToolMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EStampToolMode;
UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_EStampToolMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EStampToolMode.OuterSingleton)
		{
			ZRIE_EStampToolMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDEditorToolkit_EStampToolMode, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("EStampToolMode"));
		}
		return ZRIE_EStampToolMode.OuterSingleton;
	}
	if (!ZRIE_EStampToolMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EStampToolMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EStampToolMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EStampToolMode **************************************************************

// ********** Begin Class UStampController Function ApplyStampClassToSelectedStamp *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStampController_ApplyStampClassToSelectedStamp_Statics
struct UHT_STATICS
{
	struct StampController_eventApplyStampClassToSelectedStamp_Parms
	{
		TSubclassOf<URoadStamp> InStampClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Stamp" },
		{ "ModuleRelativePath", "Public/StampController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyStampClassToSelectedStamp constinit property declarations ********
	static const UECodeGen_Private::FClassPropertyParams NewProp_InStampClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyStampClassToSelectedStamp constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyStampClassToSelectedStamp Property Definitions *******************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_InStampClass = { "InStampClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(StampController_eventApplyStampClassToSelectedStamp_Parms, InStampClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URoadStamp, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InStampClass,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ApplyStampClassToSelectedStamp Property Definitions *********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStampController, nullptr, "ApplyStampClassToSelectedStamp", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::StampController_eventApplyStampClassToSelectedStamp_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::StampController_eventApplyStampClassToSelectedStamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStampController_ApplyStampClassToSelectedStamp(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStampController::execApplyStampClassToSelectedStamp)
{
	P_GET_OBJECT(UClass,Z_Param_InStampClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyStampClassToSelectedStamp(Z_Param_InStampClass);
	P_NATIVE_END;
}
// ********** End Class UStampController Function ApplyStampClassToSelectedStamp *******************

// ********** Begin Class UStampController Function CreateStampController **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStampController_CreateStampController_Statics
struct UHT_STATICS
{
	struct StampController_eventCreateStampController_Parms
	{
		TSubclassOf<URoadStamp> InStampClass;
		TSubclassOf<UStampController> InControllerClass;
		bool bInExitToolOnPlacement;
		UStampController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD|Stamp" },
		{ "Comment", "/**\n\x09 * Creates a new StampController configured to place the specified stamp class.\n\x09 * @param InStampClass The URoadStamp subclass to place\n\x09 * @param InControllerClass The UStampController subclass to instantiate (can be a Blueprint subclass)\n\x09 * @param bInExitToolOnPlacement Whether to exit the tool after placing one stamp\n\x09 * @return A new UStampController instance of the specified subclass\n\x09 */" },
		{ "CPP_Default_bInExitToolOnPlacement", "false" },
		{ "CPP_Default_InControllerClass", "None" },
		{ "DeterminesOutputType", "InControllerClass" },
		{ "DisplayName", "Create Stamp Controller" },
		{ "ModuleRelativePath", "Public/StampController.h" },
		{ "ToolTip", "Creates a new StampController configured to place the specified stamp class.\n@param InStampClass The URoadStamp subclass to place\n@param InControllerClass The UStampController subclass to instantiate (can be a Blueprint subclass)\n@param bInExitToolOnPlacement Whether to exit the tool after placing one stamp\n@return A new UStampController instance of the specified subclass" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateStampController constinit property declarations *****************
	static const UECodeGen_Private::FClassPropertyParams NewProp_InStampClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InControllerClass;
	static void NewProp_bInExitToolOnPlacement_SetBit(void* Obj)
	{
		((StampController_eventCreateStampController_Parms*)Obj)->bInExitToolOnPlacement = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInExitToolOnPlacement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateStampController constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateStampController Property Definitions ****************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_InStampClass = { "InStampClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(StampController_eventCreateStampController_Parms, InStampClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URoadStamp, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_InControllerClass = { "InControllerClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(StampController_eventCreateStampController_Parms, InControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UStampController, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInExitToolOnPlacement = { "bInExitToolOnPlacement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(StampController_eventCreateStampController_Parms), &UHT_STATICS::NewProp_bInExitToolOnPlacement_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(StampController_eventCreateStampController_Parms, ReturnValue), Z_Construct_UClass_UStampController, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InStampClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InControllerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInExitToolOnPlacement,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateStampController Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStampController, nullptr, "CreateStampController", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::StampController_eventCreateStampController_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::StampController_eventCreateStampController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStampController_CreateStampController(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStampController::execCreateStampController)
{
	P_GET_OBJECT(UClass,Z_Param_InStampClass);
	P_GET_OBJECT(UClass,Z_Param_InControllerClass);
	P_GET_UBOOL(Z_Param_bInExitToolOnPlacement);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStampController**)Z_Param__Result=UStampController::CreateStampController(Z_Param_InStampClass,Z_Param_InControllerClass,Z_Param_bInExitToolOnPlacement);
	P_NATIVE_END;
}
// ********** End Class UStampController Function CreateStampController ****************************

// ********** Begin Class UStampController Function DeleteSelectedStamp ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStampController_DeleteSelectedStamp_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Stamp" },
		{ "ModuleRelativePath", "Public/StampController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DeleteSelectedStamp constinit property declarations *******************
// ********** End Function DeleteSelectedStamp constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStampController, nullptr, "DeleteSelectedStamp", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UStampController_DeleteSelectedStamp(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStampController::execDeleteSelectedStamp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteSelectedStamp();
	P_NATIVE_END;
}
// ********** End Class UStampController Function DeleteSelectedStamp ******************************

// ********** Begin Class UStampController Function GetPlacementZOffset ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStampController_GetPlacementZOffset_Statics
struct UHT_STATICS
{
	struct StampController_eventGetPlacementZOffset_Parms
	{
		TOptional<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Stamp" },
		{ "ModuleRelativePath", "Public/StampController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPlacementZOffset constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FGenericPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPlacementZOffset constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPlacementZOffset Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FGenericPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Optional, nullptr, nullptr, 1, STRUCT_OFFSET(StampController_eventGetPlacementZOffset_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetPlacementZOffset Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStampController, nullptr, "GetPlacementZOffset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::StampController_eventGetPlacementZOffset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::StampController_eventGetPlacementZOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStampController_GetPlacementZOffset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStampController::execGetPlacementZOffset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TOptional<float>*)Z_Param__Result=P_THIS->GetPlacementZOffset();
	P_NATIVE_END;
}
// ********** End Class UStampController Function GetPlacementZOffset ******************************

// ********** Begin Class UStampController Function HasSelectedStamp *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStampController_HasSelectedStamp_Statics
struct UHT_STATICS
{
	struct StampController_eventHasSelectedStamp_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Stamp" },
		{ "ModuleRelativePath", "Public/StampController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasSelectedStamp constinit property declarations **********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StampController_eventHasSelectedStamp_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasSelectedStamp constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasSelectedStamp Property Definitions *********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(StampController_eventHasSelectedStamp_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HasSelectedStamp Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStampController, nullptr, "HasSelectedStamp", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::StampController_eventHasSelectedStamp_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::StampController_eventHasSelectedStamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStampController_HasSelectedStamp(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStampController::execHasSelectedStamp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasSelectedStamp();
	P_NATIVE_END;
}
// ********** End Class UStampController Function HasSelectedStamp *********************************

// ********** Begin Class UStampController Function SetPlacementZOffset ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStampController_SetPlacementZOffset_Statics
struct UHT_STATICS
{
	struct StampController_eventSetPlacementZOffset_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Stamp" },
		{ "ModuleRelativePath", "Public/StampController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPlacementZOffset constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPlacementZOffset constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPlacementZOffset Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(StampController_eventSetPlacementZOffset_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetPlacementZOffset Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStampController, nullptr, "SetPlacementZOffset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::StampController_eventSetPlacementZOffset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::StampController_eventSetPlacementZOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStampController_SetPlacementZOffset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStampController::execSetPlacementZOffset)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlacementZOffset(Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Class UStampController Function SetPlacementZOffset ******************************

// ********** Begin Class UStampController Function SetSelectedStampDistance ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStampController_SetSelectedStampDistance_Statics
struct UHT_STATICS
{
	struct StampController_eventSetSelectedStampDistance_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Stamp" },
		{ "ModuleRelativePath", "Public/StampController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSelectedStampDistance constinit property declarations **************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSelectedStampDistance constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSelectedStampDistance Property Definitions *************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(StampController_eventSetSelectedStampDistance_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetSelectedStampDistance Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStampController, nullptr, "SetSelectedStampDistance", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::StampController_eventSetSelectedStampDistance_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::StampController_eventSetSelectedStampDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStampController_SetSelectedStampDistance(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStampController::execSetSelectedStampDistance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectedStampDistance(Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Class UStampController Function SetSelectedStampDistance *************************

// ********** Begin Class UStampController Function SetSelectedStampEdgeOffset *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStampController_SetSelectedStampEdgeOffset_Statics
struct UHT_STATICS
{
	struct StampController_eventSetSelectedStampEdgeOffset_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Stamp" },
		{ "ModuleRelativePath", "Public/StampController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSelectedStampEdgeOffset constinit property declarations ************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSelectedStampEdgeOffset constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSelectedStampEdgeOffset Property Definitions ***********************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(StampController_eventSetSelectedStampEdgeOffset_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetSelectedStampEdgeOffset Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStampController, nullptr, "SetSelectedStampEdgeOffset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::StampController_eventSetSelectedStampEdgeOffset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::StampController_eventSetSelectedStampEdgeOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStampController_SetSelectedStampEdgeOffset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStampController::execSetSelectedStampEdgeOffset)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectedStampEdgeOffset(Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Class UStampController Function SetSelectedStampEdgeOffset ***********************

// ********** Begin Class UStampController Function SetSelectedStampUniformScale *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStampController_SetSelectedStampUniformScale_Statics
struct UHT_STATICS
{
	struct StampController_eventSetSelectedStampUniformScale_Parms
	{
		float NewUniformScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Stamp" },
		{ "ModuleRelativePath", "Public/StampController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSelectedStampUniformScale constinit property declarations **********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewUniformScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSelectedStampUniformScale constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSelectedStampUniformScale Property Definitions *********************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_NewUniformScale = { "NewUniformScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(StampController_eventSetSelectedStampUniformScale_Parms, NewUniformScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewUniformScale,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetSelectedStampUniformScale Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStampController, nullptr, "SetSelectedStampUniformScale", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::StampController_eventSetSelectedStampUniformScale_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::StampController_eventSetSelectedStampUniformScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStampController_SetSelectedStampUniformScale(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStampController::execSetSelectedStampUniformScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewUniformScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectedStampUniformScale(Z_Param_NewUniformScale);
	P_NATIVE_END;
}
// ********** End Class UStampController Function SetSelectedStampUniformScale *********************

// ********** Begin Class UStampController Function SetSelectedStampYaw ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStampController_SetSelectedStampYaw_Statics
struct UHT_STATICS
{
	struct StampController_eventSetSelectedStampYaw_Parms
	{
		float NewYawDegrees;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Stamp" },
		{ "ModuleRelativePath", "Public/StampController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSelectedStampYaw constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewYawDegrees;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSelectedStampYaw constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSelectedStampYaw Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_NewYawDegrees = { "NewYawDegrees", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(StampController_eventSetSelectedStampYaw_Parms, NewYawDegrees), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewYawDegrees,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetSelectedStampYaw Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStampController, nullptr, "SetSelectedStampYaw", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::StampController_eventSetSelectedStampYaw_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::StampController_eventSetSelectedStampYaw_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStampController_SetSelectedStampYaw(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStampController::execSetSelectedStampYaw)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewYawDegrees);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectedStampYaw(Z_Param_NewYawDegrees);
	P_NATIVE_END;
}
// ********** End Class UStampController Function SetSelectedStampYaw ******************************

// ********** Begin Class UStampController Function SetSelectedStampZOffset ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStampController_SetSelectedStampZOffset_Statics
struct UHT_STATICS
{
	struct StampController_eventSetSelectedStampZOffset_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Stamp" },
		{ "ModuleRelativePath", "Public/StampController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSelectedStampZOffset constinit property declarations ***************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSelectedStampZOffset constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSelectedStampZOffset Property Definitions **************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(StampController_eventSetSelectedStampZOffset_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetSelectedStampZOffset Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStampController, nullptr, "SetSelectedStampZOffset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::StampController_eventSetSelectedStampZOffset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::StampController_eventSetSelectedStampZOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStampController_SetSelectedStampZOffset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStampController::execSetSelectedStampZOffset)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectedStampZOffset(Z_Param_NewValue);
	P_NATIVE_END;
}
// ********** End Class UStampController Function SetSelectedStampZOffset **************************

// ********** Begin Class UStampController Function SetStampClassForPlacement **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStampController_SetStampClassForPlacement_Statics
struct UHT_STATICS
{
	struct StampController_eventSetStampClassForPlacement_Parms
	{
		TSubclassOf<URoadStamp> InStampClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Stamp" },
		{ "ModuleRelativePath", "Public/StampController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetStampClassForPlacement constinit property declarations *************
	static const UECodeGen_Private::FClassPropertyParams NewProp_InStampClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetStampClassForPlacement constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetStampClassForPlacement Property Definitions ************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_InStampClass = { "InStampClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(StampController_eventSetStampClassForPlacement_Parms, InStampClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URoadStamp, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InStampClass,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetStampClassForPlacement Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStampController, nullptr, "SetStampClassForPlacement", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::StampController_eventSetStampClassForPlacement_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::StampController_eventSetStampClassForPlacement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStampController_SetStampClassForPlacement(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStampController::execSetStampClassForPlacement)
{
	P_GET_OBJECT(UClass,Z_Param_InStampClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStampClassForPlacement(Z_Param_InStampClass);
	P_NATIVE_END;
}
// ********** End Class UStampController Function SetStampClassForPlacement ************************

// ********** Begin Class UStampController Function SetToolMode ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStampController_SetToolMode_Statics
struct UHT_STATICS
{
	struct StampController_eventSetToolMode_Parms
	{
		EStampToolMode InMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Stamp" },
		{ "ModuleRelativePath", "Public/StampController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetToolMode constinit property declarations ***************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_InMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetToolMode constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetToolMode Property Definitions **************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_InMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_InMode = { "InMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(StampController_eventSetToolMode_Parms, InMode), Z_Construct_UEnum_RoadBLDEditorToolkit_EStampToolMode, METADATA_PARAMS(0, nullptr) }; // 9314fad70e8f4849988ddc4c37bebec77ee0b24c
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InMode,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetToolMode Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStampController, nullptr, "SetToolMode", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::StampController_eventSetToolMode_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::StampController_eventSetToolMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStampController_SetToolMode(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStampController::execSetToolMode)
{
	P_GET_ENUM(EStampToolMode,Z_Param_InMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetToolMode(EStampToolMode(Z_Param_InMode));
	P_NATIVE_END;
}
// ********** End Class UStampController Function SetToolMode **************************************

// ********** Begin Class UStampController *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UStampController_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Edit controller for placing URoadStamp objects on road lanes with automatic snapping to lane centers.\n * When hovering over a road, the stamp preview snaps to the center of the hovered lane\n * with optional rotation alignment to the road direction.\n * Stamps can only be placed when hovering over a road.\n *\n * Preview Mode is not supported: proxy geometry does not expose the lanes stamps snap to.\n * Entering the tool (or placing a stamp) prompts to build final roads first, and stamp rebuilds\n * never auto-enable Preview Mode.\n */" },
		{ "IncludePath", "StampController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StampController.h" },
		{ "ToolTip", "Edit controller for placing URoadStamp objects on road lanes with automatic snapping to lane centers.\nWhen hovering over a road, the stamp preview snaps to the center of the hovered lane\nwith optional rotation alignment to the road direction.\nStamps can only be placed when hovering over a road.\n\nPreview Mode is not supported: proxy geometry does not expose the lanes stamps snap to.\nEntering the tool (or placing a stamp) prompts to build final roads first, and stamp rebuilds\nnever auto-enable Preview Mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapLocation_MetaData[] = {
		{ "Category", "Stamp" },
		{ "Comment", "/** Whether to snap the placed object's location to the lane center */" },
		{ "ModuleRelativePath", "Public/StampController.h" },
		{ "ToolTip", "Whether to snap the placed object's location to the lane center" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapRotation_MetaData[] = {
		{ "Category", "Stamp" },
		{ "Comment", "/** Whether to snap the placed object's rotation to align with the road direction */" },
		{ "ModuleRelativePath", "Public/StampController.h" },
		{ "ToolTip", "Whether to snap the placed object's rotation to align with the road direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExitToolOnPlacement_MetaData[] = {
		{ "Category", "Stamp" },
		{ "Comment", "/** Whether to exit the tool after placing a single stamp */" },
		{ "ModuleRelativePath", "Public/StampController.h" },
		{ "ToolTip", "Whether to exit the tool after placing a single stamp" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementZOffset_MetaData[] = {
		{ "Category", "Stamp" },
		{ "ClampMax", "5000.0" },
		{ "ClampMin", "-5000.0" },
		{ "Comment", "/** Vertical offset (cm) applied to preview and newly placed stamps. */" },
		{ "ModuleRelativePath", "Public/StampController.h" },
		{ "ToolTip", "Vertical offset (cm) applied to preview and newly placed stamps." },
		{ "UIMax", "200.0" },
		{ "UIMin", "-200.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugDraw_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Whether to draw debug visualization (edge curves, hit points, etc.) while using the tool. */" },
		{ "ModuleRelativePath", "Public/StampController.h" },
		{ "ToolTip", "Whether to draw debug visualization (edge curves, hit points, etc.) while using the tool." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolMode_MetaData[] = {
		{ "Category", "Stamp" },
		{ "ModuleRelativePath", "Public/StampController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StampClass_MetaData[] = {
		{ "Comment", "/** The URoadStamp subclass to instantiate when placing stamps */" },
		{ "ModuleRelativePath", "Public/StampController.h" },
		{ "ToolTip", "The URoadStamp subclass to instantiate when placing stamps" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[] = {
		{ "Comment", "/** Cached preview mesh from the StampClass CDO */" },
		{ "ModuleRelativePath", "Public/StampController.h" },
		{ "ToolTip", "Cached preview mesh from the StampClass CDO" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterialOverride_MetaData[] = {
		{ "Comment", "/** Cached material override from the StampClass CDO for preview slot 0 */" },
		{ "ModuleRelativePath", "Public/StampController.h" },
		{ "ToolTip", "Cached material override from the StampClass CDO for preview slot 0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredRoad_MetaData[] = {
		{ "Comment", "/** The road currently being hovered over */" },
		{ "ModuleRelativePath", "Public/StampController.h" },
		{ "ToolTip", "The road currently being hovered over" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredLane_MetaData[] = {
		{ "Comment", "/** The lane currently being hovered over */" },
		{ "ModuleRelativePath", "Public/StampController.h" },
		{ "ToolTip", "The lane currently being hovered over" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedRoadNetwork_MetaData[] = {
		{ "Comment", "/** Cached reference to the road network */" },
		{ "ModuleRelativePath", "Public/StampController.h" },
		{ "ToolTip", "Cached reference to the road network" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedStamp_MetaData[] = {
		{ "Comment", "/** Stamp currently selected in edit mode */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StampController.h" },
		{ "ToolTip", "Stamp currently selected in edit mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredRoadStamps_MetaData[] = {
		{ "Comment", "/** Cached list of hovered road stamps for edit-mode rendering */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StampController.h" },
		{ "ToolTip", "Cached list of hovered road stamps for edit-mode rendering" },
	};
#endif // WITH_METADATA

// ********** Begin Class UStampController constinit property declarations *************************
	static void NewProp_bSnapLocation_SetBit(void* Obj)
	{
		((UStampController*)Obj)->bSnapLocation = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapLocation;
	static void NewProp_bSnapRotation_SetBit(void* Obj)
	{
		((UStampController*)Obj)->bSnapRotation = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapRotation;
	static void NewProp_bExitToolOnPlacement_SetBit(void* Obj)
	{
		((UStampController*)Obj)->bExitToolOnPlacement = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExitToolOnPlacement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlacementZOffset;
	static void NewProp_bEnableDebugDraw_SetBit(void* Obj)
	{
		((UStampController*)Obj)->bEnableDebugDraw = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugDraw;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ToolMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ToolMode;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StampClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMaterialOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoveredRoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoveredLane;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedRoadNetwork;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedStamp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoveredRoadStamps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HoveredRoadStamps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UStampController constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ApplyStampClassToSelectedStamp"), .Pointer = &UStampController::execApplyStampClassToSelectedStamp },
		{ .NameUTF8 = UTF8TEXT("CreateStampController"), .Pointer = &UStampController::execCreateStampController },
		{ .NameUTF8 = UTF8TEXT("DeleteSelectedStamp"), .Pointer = &UStampController::execDeleteSelectedStamp },
		{ .NameUTF8 = UTF8TEXT("GetPlacementZOffset"), .Pointer = &UStampController::execGetPlacementZOffset },
		{ .NameUTF8 = UTF8TEXT("HasSelectedStamp"), .Pointer = &UStampController::execHasSelectedStamp },
		{ .NameUTF8 = UTF8TEXT("SetPlacementZOffset"), .Pointer = &UStampController::execSetPlacementZOffset },
		{ .NameUTF8 = UTF8TEXT("SetSelectedStampDistance"), .Pointer = &UStampController::execSetSelectedStampDistance },
		{ .NameUTF8 = UTF8TEXT("SetSelectedStampEdgeOffset"), .Pointer = &UStampController::execSetSelectedStampEdgeOffset },
		{ .NameUTF8 = UTF8TEXT("SetSelectedStampUniformScale"), .Pointer = &UStampController::execSetSelectedStampUniformScale },
		{ .NameUTF8 = UTF8TEXT("SetSelectedStampYaw"), .Pointer = &UStampController::execSetSelectedStampYaw },
		{ .NameUTF8 = UTF8TEXT("SetSelectedStampZOffset"), .Pointer = &UStampController::execSetSelectedStampZOffset },
		{ .NameUTF8 = UTF8TEXT("SetStampClassForPlacement"), .Pointer = &UStampController::execSetStampClassForPlacement },
		{ .NameUTF8 = UTF8TEXT("SetToolMode"), .Pointer = &UStampController::execSetToolMode },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStampController_ApplyStampClassToSelectedStamp, "ApplyStampClassToSelectedStamp" }, // 80bdb9b4fdbbe32413e39f82308a61a7d768b906
		{ &Z_Construct_UFunction_UStampController_CreateStampController, "CreateStampController" }, // 646b6c30c0621bab79dd268b9b5120450a07799b
		{ &Z_Construct_UFunction_UStampController_DeleteSelectedStamp, "DeleteSelectedStamp" }, // 828d4c59d495f8a6a486d46b35c66cc815d51c89
		{ &Z_Construct_UFunction_UStampController_GetPlacementZOffset, "GetPlacementZOffset" }, // f3d16bc7e08fcc2db8b227f3cf4b7fe94e0c7d51
		{ &Z_Construct_UFunction_UStampController_HasSelectedStamp, "HasSelectedStamp" }, // 10093e86347bcac54f2e612cfdf63354fe68fead
		{ &Z_Construct_UFunction_UStampController_SetPlacementZOffset, "SetPlacementZOffset" }, // ca6681724200b145787f8a1f26b760c2998518a5
		{ &Z_Construct_UFunction_UStampController_SetSelectedStampDistance, "SetSelectedStampDistance" }, // f57154ec13e4a65a5b6f6cbd4727a8e4896fd827
		{ &Z_Construct_UFunction_UStampController_SetSelectedStampEdgeOffset, "SetSelectedStampEdgeOffset" }, // 8f603ce223d884e1dc20b338afdef4d29d0665c7
		{ &Z_Construct_UFunction_UStampController_SetSelectedStampUniformScale, "SetSelectedStampUniformScale" }, // a0205ad47fb6877543a26b2ee6e2a908efa4fad7
		{ &Z_Construct_UFunction_UStampController_SetSelectedStampYaw, "SetSelectedStampYaw" }, // fe938d03a00d4ed98f93e045bc66bb2a887862d3
		{ &Z_Construct_UFunction_UStampController_SetSelectedStampZOffset, "SetSelectedStampZOffset" }, // 2d45a64cf8fab56ecafa8ad2b470b583bc6e7074
		{ &Z_Construct_UFunction_UStampController_SetStampClassForPlacement, "SetStampClassForPlacement" }, // 01f5620421fc5a8cb06730e7a0bf69778e55add0
		{ &Z_Construct_UFunction_UStampController_SetToolMode, "SetToolMode" }, // 7662b74bb822d74bfffe62c0b081b5b08affa428
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStampController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UStampController Property Definitions ************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSnapLocation = { "bSnapLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UStampController), &UHT_STATICS::NewProp_bSnapLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapLocation_MetaData), NewProp_bSnapLocation_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSnapRotation = { "bSnapRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UStampController), &UHT_STATICS::NewProp_bSnapRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapRotation_MetaData), NewProp_bSnapRotation_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bExitToolOnPlacement = { "bExitToolOnPlacement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UStampController), &UHT_STATICS::NewProp_bExitToolOnPlacement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExitToolOnPlacement_MetaData), NewProp_bExitToolOnPlacement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PlacementZOffset = { "PlacementZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UStampController, PlacementZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementZOffset_MetaData), NewProp_PlacementZOffset_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableDebugDraw = { "bEnableDebugDraw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UStampController), &UHT_STATICS::NewProp_bEnableDebugDraw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDebugDraw_MetaData), NewProp_bEnableDebugDraw_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ToolMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ToolMode = { "ToolMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UStampController, ToolMode), Z_Construct_UEnum_RoadBLDEditorToolkit_EStampToolMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolMode_MetaData), NewProp_ToolMode_MetaData) }; // 9314fad70e8f4849988ddc4c37bebec77ee0b24c
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_StampClass = { "StampClass", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UStampController, StampClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URoadStamp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StampClass_MetaData), NewProp_StampClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UStampController, PreviewMesh), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMesh_MetaData), NewProp_PreviewMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PreviewMaterialOverride = { "PreviewMaterialOverride", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UStampController, PreviewMaterialOverride), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMaterialOverride_MetaData), NewProp_PreviewMaterialOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HoveredRoad = { "HoveredRoad", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UStampController, HoveredRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredRoad_MetaData), NewProp_HoveredRoad_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HoveredLane = { "HoveredLane", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UStampController, HoveredLane), Z_Construct_UClass_UDynamicRoadLane, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredLane_MetaData), NewProp_HoveredLane_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CachedRoadNetwork = { "CachedRoadNetwork", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UStampController, CachedRoadNetwork), Z_Construct_UClass_ADynamicRoadNetwork, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedRoadNetwork_MetaData), NewProp_CachedRoadNetwork_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SelectedStamp = { "SelectedStamp", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UStampController, SelectedStamp), Z_Construct_UClass_URoadStamp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedStamp_MetaData), NewProp_SelectedStamp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HoveredRoadStamps_Inner = { "HoveredRoadStamps", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoadStamp, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_HoveredRoadStamps = { "HoveredRoadStamps", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UStampController, HoveredRoadStamps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredRoadStamps_MetaData), NewProp_HoveredRoadStamps_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSnapLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSnapRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bExitToolOnPlacement,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlacementZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableDebugDraw,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ToolMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ToolMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StampClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviewMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviewMaterialOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HoveredRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HoveredLane,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedRoadNetwork,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedStamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HoveredRoadStamps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HoveredRoadStamps,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UStampController Property Definitions **************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldBLDEditController,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UStampController,
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
static void UStampController_StaticRegisterNativesUStampController()
{
	UClass* Class = UStampController::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStampController;
UClass* Z_Construct_UClass_UStampController(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UStampController;
		if (!Z_Registration_Info_UClass_UStampController.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("StampController"),
				Z_Registration_Info_UClass_UStampController.InnerSingleton,
				UStampController_StaticRegisterNativesUStampController,
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
		return Z_Registration_Info_UClass_UStampController.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UStampController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStampController.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UStampController.OuterSingleton;
}
#undef UHT_STATICS
UStampController::UStampController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UStampController);
UStampController::~UStampController() {}
// ********** End Class UStampController ***********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_StampController_h__Script_RoadBLDEditorToolkit_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RoadBLDEditorToolkit_EStampToolMode, TEXT("EStampToolMode"), &ZRIE_EStampToolMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2467625687U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStampController, TEXT("UStampController"), &Z_Registration_Info_UClass_UStampController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStampController), 2039410566U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_StampController_h__Script_RoadBLDEditorToolkit_14569c88dc629ff4093908bb3e5ebe52dfd69c26{
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
