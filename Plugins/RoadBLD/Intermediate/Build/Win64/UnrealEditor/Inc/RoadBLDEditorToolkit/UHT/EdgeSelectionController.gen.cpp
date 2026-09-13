// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EdgeSelectionController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeEdgeSelectionController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor(ETypeConstructPhase);
WORLDBLDEDITOR_API UClass* Z_Construct_UClass_UWorldBLDEditController(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoad(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UEdgeCurve(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UEdgeSelectionController(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UEdgeSelectionController(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UEdgeSelectionController Function CreateEdgeSelectionController **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEdgeSelectionController_CreateEdgeSelectionController_Statics
struct UHT_STATICS
{
	struct EdgeSelectionController_eventCreateEdgeSelectionController_Parms
	{
		TArray<UEdgeCurve*> EdgeCurves;
		ADynamicRoad* Road;
		UEdgeSelectionController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "EdgeSelection" },
		{ "Comment", "/**\n\x09 * Static factory method to create an EdgeSelectionController with specified EdgeCurves\n\x09 * @param EdgeCurves - Array of EdgeCurves to display and select from\n\x09 * @param Road - Optional target road that owns these EdgeCurves\n\x09 * @return A new instance of UEdgeSelectionController\n\x09 */" },
		{ "CPP_Default_Road", "None" },
		{ "ModuleRelativePath", "Public/EdgeSelectionController.h" },
		{ "ToolTip", "Static factory method to create an EdgeSelectionController with specified EdgeCurves\n@param EdgeCurves - Array of EdgeCurves to display and select from\n@param Road - Optional target road that owns these EdgeCurves\n@return A new instance of UEdgeSelectionController" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeCurves_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateEdgeSelectionController constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EdgeCurves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EdgeCurves;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Road;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateEdgeSelectionController constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateEdgeSelectionController Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_EdgeCurves_Inner = { "EdgeCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_EdgeCurves = { "EdgeCurves", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(EdgeSelectionController_eventCreateEdgeSelectionController_Parms, EdgeCurves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeCurves_MetaData), NewProp_EdgeCurves_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Road = { "Road", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(EdgeSelectionController_eventCreateEdgeSelectionController_Parms, Road), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(EdgeSelectionController_eventCreateEdgeSelectionController_Parms, ReturnValue), Z_Construct_UClass_UEdgeSelectionController, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeCurves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Road,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateEdgeSelectionController Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEdgeSelectionController, nullptr, "CreateEdgeSelectionController", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EdgeSelectionController_eventCreateEdgeSelectionController_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EdgeSelectionController_eventCreateEdgeSelectionController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEdgeSelectionController_CreateEdgeSelectionController(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEdgeSelectionController::execCreateEdgeSelectionController)
{
	P_GET_TARRAY_REF(UEdgeCurve*,Z_Param_Out_EdgeCurves);
	P_GET_OBJECT(ADynamicRoad,Z_Param_Road);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEdgeSelectionController**)Z_Param__Result=UEdgeSelectionController::CreateEdgeSelectionController(Z_Param_Out_EdgeCurves,Z_Param_Road);
	P_NATIVE_END;
}
// ********** End Class UEdgeSelectionController Function CreateEdgeSelectionController ************

// ********** Begin Class UEdgeSelectionController Function TransitionToRoadPointEditController ****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UEdgeSelectionController_TransitionToRoadPointEditController_Statics
struct UHT_STATICS
{
	struct EdgeSelectionController_eventTransitionToRoadPointEditController_Parms
	{
		UEdgeCurve* ClickedEdgeCurve;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "EdgeSelection" },
		{ "Comment", "/**\n\x09 * Static helper method that transitions from edge selection to point editing\n\x09 * @param ClickedEdgeCurve - The EdgeCurve that was clicked\n\x09 */" },
		{ "ModuleRelativePath", "Public/EdgeSelectionController.h" },
		{ "ToolTip", "Static helper method that transitions from edge selection to point editing\n@param ClickedEdgeCurve - The EdgeCurve that was clicked" },
	};
#endif // WITH_METADATA

// ********** Begin Function TransitionToRoadPointEditController constinit property declarations ***
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickedEdgeCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TransitionToRoadPointEditController constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TransitionToRoadPointEditController Property Definitions **************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ClickedEdgeCurve = { "ClickedEdgeCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(EdgeSelectionController_eventTransitionToRoadPointEditController_Parms, ClickedEdgeCurve), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ClickedEdgeCurve,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function TransitionToRoadPointEditController Property Definitions ****************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UEdgeSelectionController, nullptr, "TransitionToRoadPointEditController", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::EdgeSelectionController_eventTransitionToRoadPointEditController_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::EdgeSelectionController_eventTransitionToRoadPointEditController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEdgeSelectionController_TransitionToRoadPointEditController(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UEdgeSelectionController::execTransitionToRoadPointEditController)
{
	P_GET_OBJECT(UEdgeCurve,Z_Param_ClickedEdgeCurve);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEdgeSelectionController::TransitionToRoadPointEditController(Z_Param_ClickedEdgeCurve);
	P_NATIVE_END;
}
// ********** End Class UEdgeSelectionController Function TransitionToRoadPointEditController ******

// ********** Begin Class UEdgeSelectionController *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UEdgeSelectionController_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Edit controller for selecting EdgeCurves from an array.\n * Renders EdgeCurves using PDI and allows the user to click on them to select.\n * Once an EdgeCurve is clicked, transitions to a RoadPointEditController for that EdgeCurve.\n */" },
		{ "IncludePath", "EdgeSelectionController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EdgeSelectionController.h" },
		{ "ToolTip", "Edit controller for selecting EdgeCurves from an array.\nRenders EdgeCurves using PDI and allows the user to click on them to select.\nOnce an EdgeCurve is clicked, transitions to a RoadPointEditController for that EdgeCurve." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeCurvesToDraw_MetaData[] = {
		{ "Category", "EdgeSelection" },
		{ "Comment", "// Array of EdgeCurves to display and allow selection from\n" },
		{ "ModuleRelativePath", "Public/EdgeSelectionController.h" },
		{ "ToolTip", "Array of EdgeCurves to display and allow selection from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRoad_MetaData[] = {
		{ "Category", "EdgeSelection" },
		{ "Comment", "// The road that owns these edge curves\n" },
		{ "ModuleRelativePath", "Public/EdgeSelectionController.h" },
		{ "ToolTip", "The road that owns these edge curves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeCurveColor_MetaData[] = {
		{ "Category", "EdgeSelection" },
		{ "Comment", "// Color to use when rendering EdgeCurves\n" },
		{ "ModuleRelativePath", "Public/EdgeSelectionController.h" },
		{ "ToolTip", "Color to use when rendering EdgeCurves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[] = {
		{ "Category", "EdgeSelection" },
		{ "Comment", "// Thickness of the rendered lines\n" },
		{ "ModuleRelativePath", "Public/EdgeSelectionController.h" },
		{ "ToolTip", "Thickness of the rendered lines" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForegroundDepth_MetaData[] = {
		{ "Category", "EdgeSelection" },
		{ "Comment", "// Whether to draw in foreground depth (always visible)\n" },
		{ "ModuleRelativePath", "Public/EdgeSelectionController.h" },
		{ "ToolTip", "Whether to draw in foreground depth (always visible)" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEdgeSelectionController constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EdgeCurvesToDraw_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EdgeCurvesToDraw;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetRoad;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeCurveColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
	static void NewProp_bForegroundDepth_SetBit(void* Obj)
	{
		((UEdgeSelectionController*)Obj)->bForegroundDepth = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForegroundDepth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEdgeSelectionController constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateEdgeSelectionController"), .Pointer = &UEdgeSelectionController::execCreateEdgeSelectionController },
		{ .NameUTF8 = UTF8TEXT("TransitionToRoadPointEditController"), .Pointer = &UEdgeSelectionController::execTransitionToRoadPointEditController },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEdgeSelectionController_CreateEdgeSelectionController, "CreateEdgeSelectionController" }, // 55fffaeae0c6c567178b2730a56b0ed05c9750aa
		{ &Z_Construct_UFunction_UEdgeSelectionController_TransitionToRoadPointEditController, "TransitionToRoadPointEditController" }, // cee0b4ddceb1416d64246bf2e8e65a7a8f21d3c8
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdgeSelectionController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UEdgeSelectionController Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_EdgeCurvesToDraw_Inner = { "EdgeCurvesToDraw", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_EdgeCurvesToDraw = { "EdgeCurvesToDraw", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UEdgeSelectionController, EdgeCurvesToDraw), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeCurvesToDraw_MetaData), NewProp_EdgeCurvesToDraw_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetRoad = { "TargetRoad", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UEdgeSelectionController, TargetRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRoad_MetaData), NewProp_TargetRoad_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EdgeCurveColor = { "EdgeCurveColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UEdgeSelectionController, EdgeCurveColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeCurveColor_MetaData), NewProp_EdgeCurveColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UEdgeSelectionController, LineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineThickness_MetaData), NewProp_LineThickness_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bForegroundDepth = { "bForegroundDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UEdgeSelectionController), &UHT_STATICS::NewProp_bForegroundDepth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForegroundDepth_MetaData), NewProp_bForegroundDepth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeCurvesToDraw_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeCurvesToDraw,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeCurveColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bForegroundDepth,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UEdgeSelectionController Property Definitions ******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldBLDEditController,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UEdgeSelectionController,
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
static void UEdgeSelectionController_StaticRegisterNativesUEdgeSelectionController()
{
	UClass* Class = UEdgeSelectionController::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEdgeSelectionController;
UClass* Z_Construct_UClass_UEdgeSelectionController(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UEdgeSelectionController;
		if (!Z_Registration_Info_UClass_UEdgeSelectionController.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("EdgeSelectionController"),
				Z_Registration_Info_UClass_UEdgeSelectionController.InnerSingleton,
				UEdgeSelectionController_StaticRegisterNativesUEdgeSelectionController,
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
		return Z_Registration_Info_UClass_UEdgeSelectionController.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UEdgeSelectionController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdgeSelectionController.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UEdgeSelectionController.OuterSingleton;
}
#undef UHT_STATICS
UEdgeSelectionController::UEdgeSelectionController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEdgeSelectionController);
UEdgeSelectionController::~UEdgeSelectionController() {}
// ********** End Class UEdgeSelectionController ***************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_EdgeSelectionController_h__Script_RoadBLDEditorToolkit_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEdgeSelectionController, TEXT("UEdgeSelectionController"), &Z_Registration_Info_UClass_UEdgeSelectionController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdgeSelectionController), 2828006929U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_EdgeSelectionController_h__Script_RoadBLDEditorToolkit_3ae60be8052577a751870ece30a8956dd80e25b7{
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
