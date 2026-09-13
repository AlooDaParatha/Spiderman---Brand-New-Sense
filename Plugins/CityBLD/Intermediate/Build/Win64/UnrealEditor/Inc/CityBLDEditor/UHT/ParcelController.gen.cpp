// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ParcelController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeParcelController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor(ETypeConstructPhase);
WORLDBLDEDITOR_API UClass* Z_Construct_UClass_UWorldBLDEditController(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_ACityBlock(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UCityParcel(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UParcelController(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_AParcelBrush(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UParcelController(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UParcelController Function UpdateSelectedParcel **************************
struct ParcelController_eventUpdateSelectedParcel_Parms
{
	UCityParcel* Parcel;
};
static FName NAME_UParcelController_UpdateSelectedParcel = FName(TEXT("UpdateSelectedParcel"));
void UParcelController::UpdateSelectedParcel(UCityParcel* Parcel)
{
	UFunction* Func = FindFunctionChecked(NAME_UParcelController_UpdateSelectedParcel);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ParcelController_eventUpdateSelectedParcel_Parms Parms;
		Parms.Parcel=Parcel;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		UpdateSelectedParcel_Implementation(Parcel);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UParcelController_UpdateSelectedParcel_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Parcel" },
		{ "Comment", "/**\n\x09 * Called when a parcel is selected or deselected.\n\x09 * @param Parcel - The selected parcel, or nullptr if selection was cleared\n\x09 */" },
		{ "ModuleRelativePath", "Public/ParcelController.h" },
		{ "ToolTip", "Called when a parcel is selected or deselected.\n@param Parcel - The selected parcel, or nullptr if selection was cleared" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateSelectedParcel constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parcel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateSelectedParcel constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateSelectedParcel Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Parcel = { "Parcel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ParcelController_eventUpdateSelectedParcel_Parms, Parcel), Z_Construct_UClass_UCityParcel, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Parcel,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UpdateSelectedParcel Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UParcelController, nullptr, "UpdateSelectedParcel", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<ParcelController_eventUpdateSelectedParcel_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(ParcelController_eventUpdateSelectedParcel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParcelController_UpdateSelectedParcel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UParcelController::execUpdateSelectedParcel)
{
	P_GET_OBJECT(UCityParcel,Z_Param_Parcel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateSelectedParcel_Implementation(Z_Param_Parcel);
	P_NATIVE_END;
}
// ********** End Class UParcelController Function UpdateSelectedParcel ****************************

// ********** Begin Class UParcelController ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UParcelController_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UParcelController - Edit controller for selecting and editing parcels within city blocks.\n * \n * When hovering over a city block, displays purple outlines for all parcels.\n * The hovered parcel is highlighted with a filled brush mesh.\n * Clicking selects the parcel and triggers a BlueprintNativeEvent for UI integration.\n */" },
		{ "IncludePath", "ParcelController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ParcelController.h" },
		{ "ToolTip", "UParcelController - Edit controller for selecting and editing parcels within city blocks.\n\nWhen hovering over a city block, displays purple outlines for all parcels.\nThe hovered parcel is highlighted with a filled brush mesh.\nClicking selects the parcel and triggers a BlueprintNativeEvent for UI integration." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushClass_MetaData[] = {
		{ "Category", "Parcel" },
		{ "Comment", "/** The brush actor class to spawn for parcel visualization */" },
		{ "ModuleRelativePath", "Public/ParcelController.h" },
		{ "ToolTip", "The brush actor class to spawn for parcel visualization" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParcelOutlineColor_MetaData[] = {
		{ "Category", "Parcel" },
		{ "Comment", "/** Color for parcel outline rendering */" },
		{ "ModuleRelativePath", "Public/ParcelController.h" },
		{ "ToolTip", "Color for parcel outline rendering" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutlineThickness_MetaData[] = {
		{ "Category", "Parcel" },
		{ "Comment", "/** Thickness of parcel outline lines */" },
		{ "ModuleRelativePath", "Public/ParcelController.h" },
		{ "ToolTip", "Thickness of parcel outline lines" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutlineZOffset_MetaData[] = {
		{ "Category", "Parcel" },
		{ "Comment", "/** Z offset for rendering outlines above geometry */" },
		{ "ModuleRelativePath", "Public/ParcelController.h" },
		{ "ToolTip", "Z offset for rendering outlines above geometry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredBlock_MetaData[] = {
		{ "Category", "Parcel|State" },
		{ "Comment", "/** The city block currently being hovered over */" },
		{ "ModuleRelativePath", "Public/ParcelController.h" },
		{ "ToolTip", "The city block currently being hovered over" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredParcel_MetaData[] = {
		{ "Category", "Parcel|State" },
		{ "Comment", "/** The parcel currently being hovered over */" },
		{ "ModuleRelativePath", "Public/ParcelController.h" },
		{ "ToolTip", "The parcel currently being hovered over" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedParcel_MetaData[] = {
		{ "Category", "Parcel|State" },
		{ "Comment", "/** The currently selected parcel */" },
		{ "ModuleRelativePath", "Public/ParcelController.h" },
		{ "ToolTip", "The currently selected parcel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanUseTool_MetaData[] = {
		{ "Category", "Parcel|State" },
		{ "Comment", "/** Whether the tool is currently usable (e.g. license check passed) */" },
		{ "ModuleRelativePath", "Public/ParcelController.h" },
		{ "ToolTip", "Whether the tool is currently usable (e.g. license check passed)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[] = {
		{ "Comment", "/** The brush actor for highlighting the hovered parcel */" },
		{ "ModuleRelativePath", "Public/ParcelController.h" },
		{ "ToolTip", "The brush actor for highlighting the hovered parcel" },
	};
#endif // WITH_METADATA

// ********** Begin Class UParcelController constinit property declarations ************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_BrushClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParcelOutlineColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutlineThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutlineZOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoveredBlock;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoveredParcel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedParcel;
	static void NewProp_bCanUseTool_SetBit(void* Obj)
	{
		((UParcelController*)Obj)->bCanUseTool = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanUseTool;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Brush;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UParcelController constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("UpdateSelectedParcel"), .Pointer = &UParcelController::execUpdateSelectedParcel },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UParcelController_UpdateSelectedParcel, "UpdateSelectedParcel" }, // a6af465c066a82122ade4bc1b01c6387f280f70f
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParcelController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UParcelController Property Definitions ***********************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_BrushClass = { "BrushClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UParcelController, BrushClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AParcelBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushClass_MetaData), NewProp_BrushClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ParcelOutlineColor = { "ParcelOutlineColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UParcelController, ParcelOutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParcelOutlineColor_MetaData), NewProp_ParcelOutlineColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_OutlineThickness = { "OutlineThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UParcelController, OutlineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutlineThickness_MetaData), NewProp_OutlineThickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_OutlineZOffset = { "OutlineZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UParcelController, OutlineZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutlineZOffset_MetaData), NewProp_OutlineZOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HoveredBlock = { "HoveredBlock", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UParcelController, HoveredBlock), Z_Construct_UClass_ACityBlock, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredBlock_MetaData), NewProp_HoveredBlock_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HoveredParcel = { "HoveredParcel", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UParcelController, HoveredParcel), Z_Construct_UClass_UCityParcel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredParcel_MetaData), NewProp_HoveredParcel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SelectedParcel = { "SelectedParcel", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UParcelController, SelectedParcel), Z_Construct_UClass_UCityParcel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedParcel_MetaData), NewProp_SelectedParcel_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCanUseTool = { "bCanUseTool", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UParcelController), &UHT_STATICS::NewProp_bCanUseTool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanUseTool_MetaData), NewProp_bCanUseTool_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UParcelController, Brush), Z_Construct_UClass_AParcelBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brush_MetaData), NewProp_Brush_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BrushClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParcelOutlineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutlineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutlineZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HoveredBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HoveredParcel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedParcel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCanUseTool,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Brush,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UParcelController Property Definitions *************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldBLDEditController,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UParcelController,
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
static void UParcelController_StaticRegisterNativesUParcelController()
{
	UClass* Class = UParcelController::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UParcelController;
UClass* Z_Construct_UClass_UParcelController(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UParcelController;
		if (!Z_Registration_Info_UClass_UParcelController.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ParcelController"),
				Z_Registration_Info_UClass_UParcelController.InnerSingleton,
				UParcelController_StaticRegisterNativesUParcelController,
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
		return Z_Registration_Info_UClass_UParcelController.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UParcelController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParcelController.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UParcelController.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UParcelController);
UParcelController::~UParcelController() {}
// ********** End Class UParcelController **********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ParcelController_h__Script_CityBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParcelController, TEXT("UParcelController"), &Z_Registration_Info_UClass_UParcelController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParcelController), 3901158552U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ParcelController_h__Script_CityBLDEditor_fbd24c805ba9961101b8e45a5bfb5e21f5dca94d{
	TEXT("/Script/CityBLDEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
