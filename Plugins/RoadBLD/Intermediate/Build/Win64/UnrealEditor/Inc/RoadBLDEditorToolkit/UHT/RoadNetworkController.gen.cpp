// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoadNetworkController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRoadNetworkController() {}

// ********** Begin Cross Module References ********************************************************
WORLDBLDEDITOR_API UClass* Z_Construct_UClass_UWorldBLDEditController(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USplineComponent(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UCurveObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadNetworkController(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadNetworkController(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class URoadNetworkController Function GetCornerParameters **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadNetworkController_GetCornerParameters_Statics
struct UHT_STATICS
{
	struct RoadNetworkController_eventGetCornerParameters_Parms
	{
		int32 CornerIndex;
		double Radius;
		double StartOffset;
		double EndOffset;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Road Network" },
		{ "Comment", "/**\n\x09 * Gets the parameters for a specific corner in the road network.\n\x09 * @param CornerIndex The index of the corner in the CornerEditData array.\n\x09 * @param Radius Output parameter for the corner radius\n\x09 * @param StartOffset Output parameter for the distance from the intersection point for the start of the corner curve\n\x09 * @param EndOffset Output parameter for the distance from the intersection point for the end of the corner curve\n\x09 * @return True if the corner was successfully retrieved, false if the index was invalid or no road network found\n\x09 */" },
		{ "ModuleRelativePath", "Public/RoadNetworkController.h" },
		{ "ToolTip", "Gets the parameters for a specific corner in the road network.\n@param CornerIndex The index of the corner in the CornerEditData array.\n@param Radius Output parameter for the corner radius\n@param StartOffset Output parameter for the distance from the intersection point for the start of the corner curve\n@param EndOffset Output parameter for the distance from the intersection point for the end of the corner curve\n@return True if the corner was successfully retrieved, false if the index was invalid or no road network found" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCornerParameters constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_CornerIndex;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Radius;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StartOffset;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EndOffset;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RoadNetworkController_eventGetCornerParameters_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCornerParameters constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCornerParameters Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CornerIndex = { "CornerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RoadNetworkController_eventGetCornerParameters_Parms, CornerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadNetworkController_eventGetCornerParameters_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadNetworkController_eventGetCornerParameters_Parms, StartOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_EndOffset = { "EndOffset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadNetworkController_eventGetCornerParameters_Parms, EndOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadNetworkController_eventGetCornerParameters_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CornerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCornerParameters Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadNetworkController, nullptr, "GetCornerParameters", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadNetworkController_eventGetCornerParameters_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadNetworkController_eventGetCornerParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadNetworkController_GetCornerParameters(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadNetworkController::execGetCornerParameters)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CornerIndex);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_Radius);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_StartOffset);
	P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_EndOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCornerParameters(Z_Param_CornerIndex,Z_Param_Out_Radius,Z_Param_Out_StartOffset,Z_Param_Out_EndOffset);
	P_NATIVE_END;
}
// ********** End Class URoadNetworkController Function GetCornerParameters ************************

// ********** Begin Class URoadNetworkController Function HandleSplinePointSelectionChanged ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadNetworkController_HandleSplinePointSelectionChanged_Statics
struct UHT_STATICS
{
	struct RoadNetworkController_eventHandleSplinePointSelectionChanged_Parms
	{
		USplineComponent* Spline;
		TSet<int32> Selection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n\x09 * Handler called when the spline point selection changes.\n\x09 * @param Spline The spline component whose point selection changed\n\x09 * @param Selection The set of currently selected spline point indices\n\x09 */" },
		{ "ModuleRelativePath", "Public/RoadNetworkController.h" },
		{ "ToolTip", "Handler called when the spline point selection changes.\n@param Spline The spline component whose point selection changed\n@param Selection The set of currently selected spline point indices" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Selection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleSplinePointSelectionChanged constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Selection_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Selection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleSplinePointSelectionChanged constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleSplinePointSelectionChanged Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadNetworkController_eventHandleSplinePointSelectionChanged_Parms, Spline), Z_Construct_UClass_USplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Selection_ElementProp = { "Selection", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(RoadNetworkController_eventHandleSplinePointSelectionChanged_Parms, Selection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Selection_MetaData), NewProp_Selection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Selection_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Selection,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HandleSplinePointSelectionChanged Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadNetworkController, nullptr, "HandleSplinePointSelectionChanged", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadNetworkController_eventHandleSplinePointSelectionChanged_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadNetworkController_eventHandleSplinePointSelectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadNetworkController_HandleSplinePointSelectionChanged(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadNetworkController::execHandleSplinePointSelectionChanged)
{
	P_GET_OBJECT(USplineComponent,Z_Param_Spline);
	P_GET_TSET_REF(int32,Z_Param_Out_Selection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSplinePointSelectionChanged(Z_Param_Spline,Z_Param_Out_Selection);
	P_NATIVE_END;
}
// ********** End Class URoadNetworkController Function HandleSplinePointSelectionChanged **********

// ********** Begin Class URoadNetworkController Function OnRoadSplinePointSelectionChanged ********
struct RoadNetworkController_eventOnRoadSplinePointSelectionChanged_Parms
{
	USplineComponent* Spline;
	TSet<int32> SelectedPoints;
};
static FName NAME_URoadNetworkController_OnRoadSplinePointSelectionChanged = FName(TEXT("OnRoadSplinePointSelectionChanged"));
void URoadNetworkController::OnRoadSplinePointSelectionChanged(USplineComponent* Spline, TSet<int32> const& SelectedPoints)
{
	UFunction* Func = FindFunctionChecked(NAME_URoadNetworkController_OnRoadSplinePointSelectionChanged);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		RoadNetworkController_eventOnRoadSplinePointSelectionChanged_Parms Parms;
		Parms.Spline=Spline;
		Parms.SelectedPoints=SelectedPoints;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnRoadSplinePointSelectionChanged_Implementation(Spline, SelectedPoints);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadNetworkController_OnRoadSplinePointSelectionChanged_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Road Network" },
		{ "Comment", "/**\n\x09 * Blueprint event that is triggered when the user changes the spline point selection on a road control spline.\n\x09 * @param Spline The spline component whose point selection changed\n\x09 * @param SelectedPoints The set of currently selected spline point indices\n\x09 */" },
		{ "ModuleRelativePath", "Public/RoadNetworkController.h" },
		{ "ToolTip", "Blueprint event that is triggered when the user changes the spline point selection on a road control spline.\n@param Spline The spline component whose point selection changed\n@param SelectedPoints The set of currently selected spline point indices" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRoadSplinePointSelectionChanged constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedPoints_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_SelectedPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRoadSplinePointSelectionChanged constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRoadSplinePointSelectionChanged Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadNetworkController_eventOnRoadSplinePointSelectionChanged_Parms, Spline), Z_Construct_UClass_USplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SelectedPoints_ElementProp = { "SelectedPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_SelectedPoints = { "SelectedPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(RoadNetworkController_eventOnRoadSplinePointSelectionChanged_Parms, SelectedPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedPoints_MetaData), NewProp_SelectedPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedPoints_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedPoints,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRoadSplinePointSelectionChanged Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadNetworkController, nullptr, "OnRoadSplinePointSelectionChanged", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<RoadNetworkController_eventOnRoadSplinePointSelectionChanged_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(RoadNetworkController_eventOnRoadSplinePointSelectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadNetworkController_OnRoadSplinePointSelectionChanged(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadNetworkController::execOnRoadSplinePointSelectionChanged)
{
	P_GET_OBJECT(USplineComponent,Z_Param_Spline);
	P_GET_TSET_REF(int32,Z_Param_Out_SelectedPoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRoadSplinePointSelectionChanged_Implementation(Z_Param_Spline,Z_Param_Out_SelectedPoints);
	P_NATIVE_END;
}
// ********** End Class URoadNetworkController Function OnRoadSplinePointSelectionChanged **********

// ********** Begin Class URoadNetworkController Function SetCornerParameters **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadNetworkController_SetCornerParameters_Statics
struct UHT_STATICS
{
	struct RoadNetworkController_eventSetCornerParameters_Parms
	{
		double Radius;
		double StartOffset;
		double EndOffset;
		int32 CornerIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Road Network" },
		{ "Comment", "/**\n\x09 * Sets the parameters for a specific corner in the road network.\n\x09 * @param Radius The corner radius\n\x09 * @param StartOffset The distance from the intersection point for the start of the corner curve\n\x09 * @param EndOffset The distance from the intersection point for the end of the corner curve\n\x09 * @param CornerIndex The index of the corner in the CornerEditData array.\n\x09 * @return True if the corner was successfully updated, false if the index was invalid or no road network found\n\x09 */" },
		{ "ModuleRelativePath", "Public/RoadNetworkController.h" },
		{ "ToolTip", "Sets the parameters for a specific corner in the road network.\n@param Radius The corner radius\n@param StartOffset The distance from the intersection point for the start of the corner curve\n@param EndOffset The distance from the intersection point for the end of the corner curve\n@param CornerIndex The index of the corner in the CornerEditData array.\n@return True if the corner was successfully updated, false if the index was invalid or no road network found" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetCornerParameters constinit property declarations *******************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Radius;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StartOffset;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EndOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CornerIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RoadNetworkController_eventSetCornerParameters_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetCornerParameters constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetCornerParameters Property Definitions ******************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadNetworkController_eventSetCornerParameters_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadNetworkController_eventSetCornerParameters_Parms, StartOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_EndOffset = { "EndOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadNetworkController_eventSetCornerParameters_Parms, EndOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CornerIndex = { "CornerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RoadNetworkController_eventSetCornerParameters_Parms, CornerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadNetworkController_eventSetCornerParameters_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CornerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetCornerParameters Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadNetworkController, nullptr, "SetCornerParameters", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadNetworkController_eventSetCornerParameters_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadNetworkController_eventSetCornerParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadNetworkController_SetCornerParameters(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadNetworkController::execSetCornerParameters)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Radius);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_StartOffset);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_EndOffset);
	P_GET_PROPERTY(FIntProperty,Z_Param_CornerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCornerParameters(Z_Param_Radius,Z_Param_StartOffset,Z_Param_EndOffset,Z_Param_CornerIndex);
	P_NATIVE_END;
}
// ********** End Class URoadNetworkController Function SetCornerParameters ************************

// ********** Begin Class URoadNetworkController ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoadNetworkController_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Edit controller for manipulating roads in the road network.\n * Provides tools to easily select and manipulate road control splines\n * by automatically redirecting RoadGeo actor selections to their parent road's control spline.\n * Also triggers incremental road network rebuilds when the user finishes dragging the gizmo,\n * deletes a spline point, or manually edits spline point locations in the details panel.\n */" },
		{ "IncludePath", "RoadNetworkController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RoadNetworkController.h" },
		{ "ToolTip", "Edit controller for manipulating roads in the road network.\nProvides tools to easily select and manipulate road control splines\nby automatically redirecting RoadGeo actor selections to their parent road's control spline.\nAlso triggers incremental road network rebuilds when the user finishes dragging the gizmo,\ndeletes a spline point, or manually edits spline point locations in the details panel." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedCornerIndex_MetaData[] = {
		{ "Category", "Road Network" },
		{ "Comment", "/** The index of the currently selected corner, or -1 if none selected */" },
		{ "ModuleRelativePath", "Public/RoadNetworkController.h" },
		{ "ToolTip", "The index of the currently selected corner, or -1 if none selected" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCornerEditing_MetaData[] = {
		{ "Category", "Road Network" },
		{ "Comment", "/** Enable corner editing and rendering. When false, corners won't be drawn or clickable. */" },
		{ "ModuleRelativePath", "Public/RoadNetworkController.h" },
		{ "ToolTip", "Enable corner editing and rendering. When false, corners won't be drawn or clickable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableSnapping_MetaData[] = {
		{ "Category", "Road Network" },
		{ "Comment", "/** When true, disables endpoint snapping to other roads. Can be toggled via Blueprint/UI. */" },
		{ "ModuleRelativePath", "Public/RoadNetworkController.h" },
		{ "ToolTip", "When true, disables endpoint snapping to other roads. Can be toggled via Blueprint/UI." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlignGeometricCenterlinesWhenSnapping_MetaData[] = {
		{ "Category", "Road Network|Snapping" },
		{ "Comment", "/** When true, endpoint snapping aligns the roads' GeometricCenterlines (instead of snapping reference/control splines directly). */" },
		{ "ModuleRelativePath", "Public/RoadNetworkController.h" },
		{ "ToolTip", "When true, endpoint snapping aligns the roads' GeometricCenterlines (instead of snapping reference/control splines directly)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToIndividualLanes_MetaData[] = {
		{ "Category", "Road Network|Snapping" },
		{ "Comment", "/** When true, endpoint snapping will target individual lane center positions at the target road endpoint. */" },
		{ "ModuleRelativePath", "Public/RoadNetworkController.h" },
		{ "ToolTip", "When true, endpoint snapping will target individual lane center positions at the target road endpoint." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bKeepEndpointSnap_MetaData[] = {
		{ "Category", "Road Network|Snapping" },
		{ "Comment", "/** When true, snapped endpoints are locked and only the adjacent point may move along the endpoint axis. */" },
		{ "ModuleRelativePath", "Public/RoadNetworkController.h" },
		{ "ToolTip", "When true, snapped endpoints are locked and only the adjacent point may move along the endpoint axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapAlignmentPointDistanceMultiplier_MetaData[] = {
		{ "Category", "Road Network|Snapping" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Multiplier applied to dragged-road width to compute snap-alignment point distance. */" },
		{ "ModuleRelativePath", "Public/RoadNetworkController.h" },
		{ "ToolTip", "Multiplier applied to dragged-road width to compute snap-alignment point distance." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapEndpointAdditionalLateralOffset_MetaData[] = {
		{ "Category", "Road Network|Snapping" },
		{ "ClampMax", "100000.0" },
		{ "ClampMin", "-100000.0" },
		{ "Comment", "/**\n\x09 * Additional lateral offset (cm) applied when snapping endpoints.\n\x09 * Positive = right, negative = left, relative to the target road's direction at the snapped endpoint.\n\x09 * This is applied on top of geometric centerline alignment (when enabled).\n\x09 */" },
		{ "ModuleRelativePath", "Public/RoadNetworkController.h" },
		{ "ToolTip", "Additional lateral offset (cm) applied when snapping endpoints.\nPositive = right, negative = left, relative to the target road's direction at the snapped endpoint.\nThis is applied on top of geometric centerline alignment (when enabled)." },
		{ "UIMax", "10000.0" },
		{ "UIMin", "-10000.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TempCornerCurve_MetaData[] = {
		{ "Comment", "/** Reusable transient curve used for corner visualization / hit-proxy selection. */" },
		{ "ModuleRelativePath", "Public/RoadNetworkController.h" },
		{ "ToolTip", "Reusable transient curve used for corner visualization / hit-proxy selection." },
	};
#endif // WITH_METADATA

// ********** Begin Class URoadNetworkController constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedCornerIndex;
	static void NewProp_bEnableCornerEditing_SetBit(void* Obj)
	{
		((URoadNetworkController*)Obj)->bEnableCornerEditing = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCornerEditing;
	static void NewProp_bDisableSnapping_SetBit(void* Obj)
	{
		((URoadNetworkController*)Obj)->bDisableSnapping = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableSnapping;
	static void NewProp_bAlignGeometricCenterlinesWhenSnapping_SetBit(void* Obj)
	{
		((URoadNetworkController*)Obj)->bAlignGeometricCenterlinesWhenSnapping = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignGeometricCenterlinesWhenSnapping;
	static void NewProp_bSnapToIndividualLanes_SetBit(void* Obj)
	{
		((URoadNetworkController*)Obj)->bSnapToIndividualLanes = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToIndividualLanes;
	static void NewProp_bKeepEndpointSnap_SetBit(void* Obj)
	{
		((URoadNetworkController*)Obj)->bKeepEndpointSnap = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepEndpointSnap;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SnapAlignmentPointDistanceMultiplier;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SnapEndpointAdditionalLateralOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TempCornerCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URoadNetworkController constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCornerParameters"), .Pointer = &URoadNetworkController::execGetCornerParameters },
		{ .NameUTF8 = UTF8TEXT("HandleSplinePointSelectionChanged"), .Pointer = &URoadNetworkController::execHandleSplinePointSelectionChanged },
		{ .NameUTF8 = UTF8TEXT("OnRoadSplinePointSelectionChanged"), .Pointer = &URoadNetworkController::execOnRoadSplinePointSelectionChanged },
		{ .NameUTF8 = UTF8TEXT("SetCornerParameters"), .Pointer = &URoadNetworkController::execSetCornerParameters },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URoadNetworkController_GetCornerParameters, "GetCornerParameters" }, // 81528902a52bb44a857de6f274d44d0dcc45041b
		{ &Z_Construct_UFunction_URoadNetworkController_HandleSplinePointSelectionChanged, "HandleSplinePointSelectionChanged" }, // 214bc5725978652f07127c198602c111d9ddb36d
		{ &Z_Construct_UFunction_URoadNetworkController_OnRoadSplinePointSelectionChanged, "OnRoadSplinePointSelectionChanged" }, // fcdb3831289a6597292f94922620802fc0f083d2
		{ &Z_Construct_UFunction_URoadNetworkController_SetCornerParameters, "SetCornerParameters" }, // a902b03b84fb4d70cfea1358ab17ff9dc90b98de
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadNetworkController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URoadNetworkController Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SelectedCornerIndex = { "SelectedCornerIndex", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(URoadNetworkController, SelectedCornerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedCornerIndex_MetaData), NewProp_SelectedCornerIndex_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableCornerEditing = { "bEnableCornerEditing", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadNetworkController), &UHT_STATICS::NewProp_bEnableCornerEditing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCornerEditing_MetaData), NewProp_bEnableCornerEditing_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDisableSnapping = { "bDisableSnapping", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadNetworkController), &UHT_STATICS::NewProp_bDisableSnapping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableSnapping_MetaData), NewProp_bDisableSnapping_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAlignGeometricCenterlinesWhenSnapping = { "bAlignGeometricCenterlinesWhenSnapping", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadNetworkController), &UHT_STATICS::NewProp_bAlignGeometricCenterlinesWhenSnapping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlignGeometricCenterlinesWhenSnapping_MetaData), NewProp_bAlignGeometricCenterlinesWhenSnapping_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSnapToIndividualLanes = { "bSnapToIndividualLanes", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadNetworkController), &UHT_STATICS::NewProp_bSnapToIndividualLanes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapToIndividualLanes_MetaData), NewProp_bSnapToIndividualLanes_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bKeepEndpointSnap = { "bKeepEndpointSnap", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadNetworkController), &UHT_STATICS::NewProp_bKeepEndpointSnap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bKeepEndpointSnap_MetaData), NewProp_bKeepEndpointSnap_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_SnapAlignmentPointDistanceMultiplier = { "SnapAlignmentPointDistanceMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadNetworkController, SnapAlignmentPointDistanceMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapAlignmentPointDistanceMultiplier_MetaData), NewProp_SnapAlignmentPointDistanceMultiplier_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_SnapEndpointAdditionalLateralOffset = { "SnapEndpointAdditionalLateralOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadNetworkController, SnapEndpointAdditionalLateralOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapEndpointAdditionalLateralOffset_MetaData), NewProp_SnapEndpointAdditionalLateralOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TempCornerCurve = { "TempCornerCurve", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadNetworkController, TempCornerCurve), Z_Construct_UClass_UCurveObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TempCornerCurve_MetaData), NewProp_TempCornerCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedCornerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableCornerEditing,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDisableSnapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAlignGeometricCenterlinesWhenSnapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSnapToIndividualLanes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bKeepEndpointSnap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SnapAlignmentPointDistanceMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SnapEndpointAdditionalLateralOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TempCornerCurve,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URoadNetworkController Property Definitions ********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldBLDEditController,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoadNetworkController,
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
static void URoadNetworkController_StaticRegisterNativesURoadNetworkController()
{
	UClass* Class = URoadNetworkController::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URoadNetworkController;
UClass* Z_Construct_UClass_URoadNetworkController(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoadNetworkController;
		if (!Z_Registration_Info_UClass_URoadNetworkController.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadNetworkController"),
				Z_Registration_Info_UClass_URoadNetworkController.InnerSingleton,
				URoadNetworkController_StaticRegisterNativesURoadNetworkController,
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
		return Z_Registration_Info_UClass_URoadNetworkController.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoadNetworkController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoadNetworkController.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoadNetworkController.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoadNetworkController);
URoadNetworkController::~URoadNetworkController() {}
// ********** End Class URoadNetworkController *****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadNetworkController_h__Script_RoadBLDEditorToolkit_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoadNetworkController, TEXT("URoadNetworkController"), &Z_Registration_Info_UClass_URoadNetworkController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoadNetworkController), 1783323063U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadNetworkController_h__Script_RoadBLDEditorToolkit_cbf90f7f60a20ec3f86791e59a7648a421fabca2{
	TEXT("/Script/RoadBLDEditorToolkit"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
