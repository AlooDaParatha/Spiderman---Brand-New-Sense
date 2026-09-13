// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LaneSelectionController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeLaneSelectionController() {}

// ********** Begin Cross Module References ********************************************************
WORLDBLDEDITOR_API UClass* Z_Construct_UClass_UWorldBLDEditController(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoad(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadLane(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ALaneSelectionBrush(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ARoadGeo(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_ULaneSelectionController(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_ULaneSelectionController(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class ULaneSelectionController Function CreateLaneSelectionControllerWithMaterials 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULaneSelectionController_CreateLaneSelectionControllerWithMaterials_Statics
struct UHT_STATICS
{
	struct LaneSelectionController_eventCreateLaneSelectionControllerWithMaterials_Parms
	{
		UMaterialInterface* ValidMaterial;
		UMaterialInterface* InvalidMaterial;
		ULaneSelectionController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "LaneSelection" },
		{ "Comment", "/**\n\x09 * Static helper method to create a lane selection controller with specified materials\n\x09 * @param ValidMaterial - Material to use for valid lane selections\n\x09 * @param InvalidMaterial - Material to use for invalid lane selections\n\x09 * @return A new instance of ULaneSelectionController\n\x09 */" },
		{ "ModuleRelativePath", "Public/LaneSelectionController.h" },
		{ "ToolTip", "Static helper method to create a lane selection controller with specified materials\n@param ValidMaterial - Material to use for valid lane selections\n@param InvalidMaterial - Material to use for invalid lane selections\n@return A new instance of ULaneSelectionController" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateLaneSelectionControllerWithMaterials constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ValidMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InvalidMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateLaneSelectionControllerWithMaterials constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateLaneSelectionControllerWithMaterials Property Definitions *******
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ValidMaterial = { "ValidMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LaneSelectionController_eventCreateLaneSelectionControllerWithMaterials_Parms, ValidMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InvalidMaterial = { "InvalidMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LaneSelectionController_eventCreateLaneSelectionControllerWithMaterials_Parms, InvalidMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LaneSelectionController_eventCreateLaneSelectionControllerWithMaterials_Parms, ReturnValue), Z_Construct_UClass_ULaneSelectionController, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ValidMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InvalidMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateLaneSelectionControllerWithMaterials Property Definitions *********
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULaneSelectionController, nullptr, "CreateLaneSelectionControllerWithMaterials", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LaneSelectionController_eventCreateLaneSelectionControllerWithMaterials_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LaneSelectionController_eventCreateLaneSelectionControllerWithMaterials_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULaneSelectionController_CreateLaneSelectionControllerWithMaterials(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULaneSelectionController::execCreateLaneSelectionControllerWithMaterials)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_ValidMaterial);
	P_GET_OBJECT(UMaterialInterface,Z_Param_InvalidMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULaneSelectionController**)Z_Param__Result=ULaneSelectionController::CreateLaneSelectionControllerWithMaterials(Z_Param_ValidMaterial,Z_Param_InvalidMaterial);
	P_NATIVE_END;
}
// ********** End Class ULaneSelectionController Function CreateLaneSelectionControllerWithMaterials 

// ********** Begin Class ULaneSelectionController *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ULaneSelectionController_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Edit controller for selecting lanes by hovering the mouse over road geometry.\n * Traces the mouse position to find RoadGeo actors and determines the target lane.\n */" },
		{ "IncludePath", "LaneSelectionController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LaneSelectionController.h" },
		{ "ToolTip", "Edit controller for selecting lanes by hovering the mouse over road geometry.\nTraces the mouse position to find RoadGeo actors and determines the target lane." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRoad_MetaData[] = {
		{ "Category", "LaneSelection" },
		{ "Comment", "// The target road that the mouse is currently hovering over\n" },
		{ "ModuleRelativePath", "Public/LaneSelectionController.h" },
		{ "ToolTip", "The target road that the mouse is currently hovering over" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLane_MetaData[] = {
		{ "Category", "LaneSelection" },
		{ "Comment", "// The target lane at the current mouse position\n" },
		{ "ModuleRelativePath", "Public/LaneSelectionController.h" },
		{ "ToolTip", "The target lane at the current mouse position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRoadGeo_MetaData[] = {
		{ "Category", "LaneSelection" },
		{ "Comment", "// The target RoadGeo actor that the mouse is hovering over (may have null ParentRoad)\n" },
		{ "ModuleRelativePath", "Public/LaneSelectionController.h" },
		{ "ToolTip", "The target RoadGeo actor that the mouse is hovering over (may have null ParentRoad)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushActor_MetaData[] = {
		{ "Category", "LaneSelection" },
		{ "Comment", "// The brush actor used to visualize the selected lane\n" },
		{ "ModuleRelativePath", "Public/LaneSelectionController.h" },
		{ "ToolTip", "The brush actor used to visualize the selected lane" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidBrushMaterial_MetaData[] = {
		{ "Category", "LaneSelection" },
		{ "Comment", "// Material to use when the lane selection is valid\n" },
		{ "ModuleRelativePath", "Public/LaneSelectionController.h" },
		{ "ToolTip", "Material to use when the lane selection is valid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvalidBrushMaterial_MetaData[] = {
		{ "Category", "LaneSelection" },
		{ "Comment", "// Material to use when the lane selection is invalid\n" },
		{ "ModuleRelativePath", "Public/LaneSelectionController.h" },
		{ "ToolTip", "Material to use when the lane selection is invalid" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULaneSelectionController constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetRoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetLane;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetRoadGeo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ValidBrushMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InvalidBrushMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ULaneSelectionController constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateLaneSelectionControllerWithMaterials"), .Pointer = &ULaneSelectionController::execCreateLaneSelectionControllerWithMaterials },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULaneSelectionController_CreateLaneSelectionControllerWithMaterials, "CreateLaneSelectionControllerWithMaterials" }, // c1f8265c5355d08c5c67a3a065302bfca3dfe706
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULaneSelectionController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ULaneSelectionController Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetRoad = { "TargetRoad", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ULaneSelectionController, TargetRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRoad_MetaData), NewProp_TargetRoad_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetLane = { "TargetLane", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ULaneSelectionController, TargetLane), Z_Construct_UClass_UDynamicRoadLane, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLane_MetaData), NewProp_TargetLane_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetRoadGeo = { "TargetRoadGeo", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ULaneSelectionController, TargetRoadGeo), Z_Construct_UClass_ARoadGeo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRoadGeo_MetaData), NewProp_TargetRoadGeo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_BrushActor = { "BrushActor", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ULaneSelectionController, BrushActor), Z_Construct_UClass_ALaneSelectionBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushActor_MetaData), NewProp_BrushActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ValidBrushMaterial = { "ValidBrushMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ULaneSelectionController, ValidBrushMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidBrushMaterial_MetaData), NewProp_ValidBrushMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InvalidBrushMaterial = { "InvalidBrushMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ULaneSelectionController, InvalidBrushMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvalidBrushMaterial_MetaData), NewProp_InvalidBrushMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetLane,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetRoadGeo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BrushActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ValidBrushMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InvalidBrushMaterial,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ULaneSelectionController Property Definitions ******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldBLDEditController,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ULaneSelectionController,
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
static void ULaneSelectionController_StaticRegisterNativesULaneSelectionController()
{
	UClass* Class = ULaneSelectionController::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULaneSelectionController;
UClass* Z_Construct_UClass_ULaneSelectionController(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ULaneSelectionController;
		if (!Z_Registration_Info_UClass_ULaneSelectionController.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("LaneSelectionController"),
				Z_Registration_Info_UClass_ULaneSelectionController.InnerSingleton,
				ULaneSelectionController_StaticRegisterNativesULaneSelectionController,
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
		return Z_Registration_Info_UClass_ULaneSelectionController.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ULaneSelectionController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULaneSelectionController.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ULaneSelectionController.OuterSingleton;
}
#undef UHT_STATICS
ULaneSelectionController::ULaneSelectionController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULaneSelectionController);
ULaneSelectionController::~ULaneSelectionController() {}
// ********** End Class ULaneSelectionController ***************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_LaneSelectionController_h__Script_RoadBLDEditorToolkit_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULaneSelectionController, TEXT("ULaneSelectionController"), &Z_Registration_Info_UClass_ULaneSelectionController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULaneSelectionController), 3529778195U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_LaneSelectionController_h__Script_RoadBLDEditorToolkit_686219487c0a76b63657eb505e5314e7b656bc2c{
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
