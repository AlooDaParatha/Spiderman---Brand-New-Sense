// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoadModuleController.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRoadModuleController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_ERoadModulePosition(ETypeConstructPhase);
WORLDBLDEDITOR_API UClass* Z_Construct_UClass_UWorldBLDEditController(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ACustomRoadShape(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoad(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UEdgeCurve(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadModuleObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadModuleController(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadModuleEdgeSelectionProxy(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadModuleController(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadModuleEdgeSelectionProxy(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class URoadModuleEdgeSelectionProxy ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoadModuleEdgeSelectionProxy_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * Editor-only proxy shown in the Road Module tool details panel.\n * The controller syncs this class list to the selected road edge's instanced modules.\n */" },
		{ "IncludePath", "RoadModuleController.h" },
		{ "ModuleRelativePath", "Public/RoadModuleController.h" },
		{ "ToolTip", "Editor-only proxy shown in the Road Module tool details panel.\nThe controller syncs this class list to the selected road edge's instanced modules." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleClasses_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "Road Module" },
		{ "ModuleRelativePath", "Public/RoadModuleController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URoadModuleEdgeSelectionProxy constinit property declarations ************
	static const UECodeGen_Private::FClassPropertyParams NewProp_ModuleClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModuleClasses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URoadModuleEdgeSelectionProxy constinit property declarations **************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadModuleEdgeSelectionProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URoadModuleEdgeSelectionProxy Property Definitions ***********************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ModuleClasses_Inner = { "ModuleClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_URoadModuleObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ModuleClasses = { "ModuleClasses", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URoadModuleEdgeSelectionProxy, ModuleClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleClasses_MetaData), NewProp_ModuleClasses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ModuleClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ModuleClasses,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URoadModuleEdgeSelectionProxy Property Definitions *************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoadModuleEdgeSelectionProxy,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_URoadModuleEdgeSelectionProxy;
UClass* Z_Construct_UClass_URoadModuleEdgeSelectionProxy(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoadModuleEdgeSelectionProxy;
		if (!Z_Registration_Info_UClass_URoadModuleEdgeSelectionProxy.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadModuleEdgeSelectionProxy"),
				Z_Registration_Info_UClass_URoadModuleEdgeSelectionProxy.InnerSingleton,
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
		return Z_Registration_Info_UClass_URoadModuleEdgeSelectionProxy.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoadModuleEdgeSelectionProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoadModuleEdgeSelectionProxy.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoadModuleEdgeSelectionProxy.OuterSingleton;
}
#undef UHT_STATICS
URoadModuleEdgeSelectionProxy::URoadModuleEdgeSelectionProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoadModuleEdgeSelectionProxy);
URoadModuleEdgeSelectionProxy::~URoadModuleEdgeSelectionProxy() {}
// ********** End Class URoadModuleEdgeSelectionProxy **********************************************

// ********** Begin Class URoadModuleController Function CreateRoadModuleController ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadModuleController_CreateRoadModuleController_Statics
struct UHT_STATICS
{
	struct RoadModuleController_eventCreateRoadModuleController_Parms
	{
		URoadModuleController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadModule" },
		{ "Comment", "/**\n\x09 * Creates a new RoadModuleController instance.\n\x09 */" },
		{ "DisplayName", "Create Road Module Controller" },
		{ "ModuleRelativePath", "Public/RoadModuleController.h" },
		{ "ToolTip", "Creates a new RoadModuleController instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateRoadModuleController constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateRoadModuleController constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateRoadModuleController Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadModuleController_eventCreateRoadModuleController_Parms, ReturnValue), Z_Construct_UClass_URoadModuleController, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateRoadModuleController Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadModuleController, nullptr, "CreateRoadModuleController", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadModuleController_eventCreateRoadModuleController_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadModuleController_eventCreateRoadModuleController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadModuleController_CreateRoadModuleController(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadModuleController::execCreateRoadModuleController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URoadModuleController**)Z_Param__Result=URoadModuleController::CreateRoadModuleController();
	P_NATIVE_END;
}
// ********** End Class URoadModuleController Function CreateRoadModuleController ******************

// ********** Begin Class URoadModuleController Function CreateRoadModuleControllerWithClass *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadModuleController_CreateRoadModuleControllerWithClass_Statics
struct UHT_STATICS
{
	struct RoadModuleController_eventCreateRoadModuleControllerWithClass_Parms
	{
		TSubclassOf<URoadModuleObject> ModuleClass;
		URoadModuleController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadModule" },
		{ "Comment", "/**\n\x09 * Legacy factory retained for existing Editor Utility Widgets.\n\x09 * The selected module class is now edited per edge in the tool context menu.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "CreateRoadModuleController no longer requires a module class. Edit module classes from the selected edge context menu." },
		{ "DisplayName", "Create Road Module Controller With Class" },
		{ "ModuleRelativePath", "Public/RoadModuleController.h" },
		{ "ToolTip", "Legacy factory retained for existing Editor Utility Widgets.\nThe selected module class is now edited per edge in the tool context menu." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateRoadModuleControllerWithClass constinit property declarations ***
	static const UECodeGen_Private::FClassPropertyParams NewProp_ModuleClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateRoadModuleControllerWithClass constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateRoadModuleControllerWithClass Property Definitions **************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ModuleClass = { "ModuleClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(RoadModuleController_eventCreateRoadModuleControllerWithClass_Parms, ModuleClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URoadModuleObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadModuleController_eventCreateRoadModuleControllerWithClass_Parms, ReturnValue), Z_Construct_UClass_URoadModuleController, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ModuleClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateRoadModuleControllerWithClass Property Definitions ****************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadModuleController, nullptr, "CreateRoadModuleControllerWithClass", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadModuleController_eventCreateRoadModuleControllerWithClass_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadModuleController_eventCreateRoadModuleControllerWithClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadModuleController_CreateRoadModuleControllerWithClass(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadModuleController::execCreateRoadModuleControllerWithClass)
{
	P_GET_OBJECT(UClass,Z_Param_ModuleClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URoadModuleController**)Z_Param__Result=URoadModuleController::CreateRoadModuleControllerWithClass(Z_Param_ModuleClass);
	P_NATIVE_END;
}
// ********** End Class URoadModuleController Function CreateRoadModuleControllerWithClass *********

// ********** Begin Class URoadModuleController ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoadModuleController_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Edit controller for adding Road Module Objects to roads and custom road shapes.\n * Users hover over road edges (left, right, center) or sidewalk outer edges\n * (sidewalk left / sidewalk right), or custom road shape polygon edges,\n * click an edge to select it, and edit the module classes assigned to that\n * edge from a viewport context menu.\n */" },
		{ "IncludePath", "RoadModuleController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RoadModuleController.h" },
		{ "ToolTip", "Edit controller for adding Road Module Objects to roads and custom road shapes.\nUsers hover over road edges (left, right, center) or sidewalk outer edges\n(sidewalk left / sidewalk right), or custom road shape polygon edges,\nclick an edge to select it, and edit the module classes assigned to that\nedge from a viewport context menu." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredRoad_MetaData[] = {
		{ "Category", "RoadModule" },
		{ "Comment", "// Currently hovered road\n" },
		{ "ModuleRelativePath", "Public/RoadModuleController.h" },
		{ "ToolTip", "Currently hovered road" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredEdge_MetaData[] = {
		{ "Comment", "// Currently hovered edge curve\n" },
		{ "ModuleRelativePath", "Public/RoadModuleController.h" },
		{ "ToolTip", "Currently hovered edge curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredEdgePosition_MetaData[] = {
		{ "Comment", "// Position of the hovered edge (Left, Right, Center, SidewalkLeft, SidewalkRight)\n" },
		{ "ModuleRelativePath", "Public/RoadModuleController.h" },
		{ "ToolTip", "Position of the hovered edge (Left, Right, Center, SidewalkLeft, SidewalkRight)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedRoad_MetaData[] = {
		{ "Category", "RoadModule" },
		{ "Comment", "// Road whose edge is selected for context-menu editing\n" },
		{ "ModuleRelativePath", "Public/RoadModuleController.h" },
		{ "ToolTip", "Road whose edge is selected for context-menu editing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedEdge_MetaData[] = {
		{ "Category", "RoadModule" },
		{ "Comment", "// Edge selected for context-menu editing\n" },
		{ "ModuleRelativePath", "Public/RoadModuleController.h" },
		{ "ToolTip", "Edge selected for context-menu editing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedEdgePosition_MetaData[] = {
		{ "Category", "RoadModule" },
		{ "Comment", "// Position of the selected edge (Left, Right, Center, SidewalkLeft, SidewalkRight)\n" },
		{ "ModuleRelativePath", "Public/RoadModuleController.h" },
		{ "ToolTip", "Position of the selected edge (Left, Right, Center, SidewalkLeft, SidewalkRight)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredShape_MetaData[] = {
		{ "Comment", "// Custom road shape hovered for module assignment\n" },
		{ "ModuleRelativePath", "Public/RoadModuleController.h" },
		{ "ToolTip", "Custom road shape hovered for module assignment" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedShape_MetaData[] = {
		{ "Category", "RoadModule" },
		{ "Comment", "// Custom road shape selected for context-menu editing\n" },
		{ "ModuleRelativePath", "Public/RoadModuleController.h" },
		{ "ToolTip", "Custom road shape selected for context-menu editing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastValidHoveredRoad_MetaData[] = {
		{ "Comment", "// Last valid hovered road - keeps the edge highlighted when cursor moves slightly off the road geometry\n" },
		{ "ModuleRelativePath", "Public/RoadModuleController.h" },
		{ "ToolTip", "Last valid hovered road - keeps the edge highlighted when cursor moves slightly off the road geometry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastValidHoveredEdge_MetaData[] = {
		{ "Comment", "// Last valid hovered edge - keeps the edge highlighted when cursor moves slightly off the road geometry\n" },
		{ "ModuleRelativePath", "Public/RoadModuleController.h" },
		{ "ToolTip", "Last valid hovered edge - keeps the edge highlighted when cursor moves slightly off the road geometry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoadModuleController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastValidHoveredShape_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoadModuleController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URoadModuleController constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoveredRoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoveredEdge;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HoveredEdgePosition_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HoveredEdgePosition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedRoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedEdge;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectedEdgePosition_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectedEdgePosition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoveredShape;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedShape;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastValidHoveredRoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastValidHoveredEdge;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionProxy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastValidHoveredShape;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URoadModuleController constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateRoadModuleController"), .Pointer = &URoadModuleController::execCreateRoadModuleController },
		{ .NameUTF8 = UTF8TEXT("CreateRoadModuleControllerWithClass"), .Pointer = &URoadModuleController::execCreateRoadModuleControllerWithClass },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URoadModuleController_CreateRoadModuleController, "CreateRoadModuleController" }, // 8e9df85c4952157a57af694f98dac58563fe320f
		{ &Z_Construct_UFunction_URoadModuleController_CreateRoadModuleControllerWithClass, "CreateRoadModuleControllerWithClass" }, // 1d96d9389e50a6bc0073d66b48203ae7a0546de8
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadModuleController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URoadModuleController Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HoveredRoad = { "HoveredRoad", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadModuleController, HoveredRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredRoad_MetaData), NewProp_HoveredRoad_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HoveredEdge = { "HoveredEdge", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadModuleController, HoveredEdge), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredEdge_MetaData), NewProp_HoveredEdge_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_HoveredEdgePosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_HoveredEdgePosition = { "HoveredEdgePosition", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(URoadModuleController, HoveredEdgePosition), Z_Construct_UEnum_RoadBLDRuntime_ERoadModulePosition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredEdgePosition_MetaData), NewProp_HoveredEdgePosition_MetaData) }; // 46a5dd039144740d887a61f0d80e56230e219841
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SelectedRoad = { "SelectedRoad", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadModuleController, SelectedRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedRoad_MetaData), NewProp_SelectedRoad_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SelectedEdge = { "SelectedEdge", nullptr, (EPropertyFlags)0x0114000000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadModuleController, SelectedEdge), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedEdge_MetaData), NewProp_SelectedEdge_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SelectedEdgePosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SelectedEdgePosition = { "SelectedEdgePosition", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(URoadModuleController, SelectedEdgePosition), Z_Construct_UEnum_RoadBLDRuntime_ERoadModulePosition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedEdgePosition_MetaData), NewProp_SelectedEdgePosition_MetaData) }; // 46a5dd039144740d887a61f0d80e56230e219841
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HoveredShape = { "HoveredShape", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadModuleController, HoveredShape), Z_Construct_UClass_ACustomRoadShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredShape_MetaData), NewProp_HoveredShape_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SelectedShape = { "SelectedShape", nullptr, (EPropertyFlags)0x0114000000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadModuleController, SelectedShape), Z_Construct_UClass_ACustomRoadShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedShape_MetaData), NewProp_SelectedShape_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LastValidHoveredRoad = { "LastValidHoveredRoad", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadModuleController, LastValidHoveredRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastValidHoveredRoad_MetaData), NewProp_LastValidHoveredRoad_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LastValidHoveredEdge = { "LastValidHoveredEdge", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadModuleController, LastValidHoveredEdge), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastValidHoveredEdge_MetaData), NewProp_LastValidHoveredEdge_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SelectionProxy = { "SelectionProxy", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadModuleController, SelectionProxy), Z_Construct_UClass_URoadModuleEdgeSelectionProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionProxy_MetaData), NewProp_SelectionProxy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LastValidHoveredShape = { "LastValidHoveredShape", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadModuleController, LastValidHoveredShape), Z_Construct_UClass_ACustomRoadShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastValidHoveredShape_MetaData), NewProp_LastValidHoveredShape_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HoveredRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HoveredEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HoveredEdgePosition_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HoveredEdgePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedEdgePosition_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedEdgePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HoveredShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LastValidHoveredRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LastValidHoveredEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectionProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LastValidHoveredShape,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URoadModuleController Property Definitions *********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldBLDEditController,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoadModuleController,
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
static void URoadModuleController_StaticRegisterNativesURoadModuleController()
{
	UClass* Class = URoadModuleController::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URoadModuleController;
UClass* Z_Construct_UClass_URoadModuleController(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoadModuleController;
		if (!Z_Registration_Info_UClass_URoadModuleController.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadModuleController"),
				Z_Registration_Info_UClass_URoadModuleController.InnerSingleton,
				URoadModuleController_StaticRegisterNativesURoadModuleController,
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
		return Z_Registration_Info_UClass_URoadModuleController.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoadModuleController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoadModuleController.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoadModuleController.OuterSingleton;
}
#undef UHT_STATICS
URoadModuleController::URoadModuleController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoadModuleController);
URoadModuleController::~URoadModuleController() {}
// ********** End Class URoadModuleController ******************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadModuleController_h__Script_RoadBLDEditorToolkit_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoadModuleEdgeSelectionProxy, TEXT("URoadModuleEdgeSelectionProxy"), &Z_Registration_Info_UClass_URoadModuleEdgeSelectionProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoadModuleEdgeSelectionProxy), 73284874U) },
		{ Z_Construct_UClass_URoadModuleController, TEXT("URoadModuleController"), &Z_Registration_Info_UClass_URoadModuleController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoadModuleController), 3503781863U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadModuleController_h__Script_RoadBLDEditorToolkit_baed8dc95b10e953cc8ea1256b1e6eb7e6816e7c{
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
