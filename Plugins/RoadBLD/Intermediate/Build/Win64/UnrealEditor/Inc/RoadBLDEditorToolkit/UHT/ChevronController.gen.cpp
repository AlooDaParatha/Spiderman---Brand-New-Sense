// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChevronController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeChevronController() {}

// ********** Begin Cross Module References ********************************************************
WORLDBLDEDITOR_API UClass* Z_Construct_UClass_UWorldBLDEditController(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UChevron(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoadNetwork(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ARoadGeo(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UChevronController(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_EChevronDrawMode(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_EChevronToolState(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UChevronController(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EChevronDrawMode **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDEditorToolkit_EChevronDrawMode_Statics
template<> ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EChevronDrawMode>()
{
	return Z_Construct_UEnum_RoadBLDEditorToolkit_EChevronDrawMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Corner.DisplayName", "Corner" },
		{ "Corner.Name", "EChevronDrawMode::Corner" },
		{ "Freehand.DisplayName", "Freehand" },
		{ "Freehand.Name", "EChevronDrawMode::Freehand" },
		{ "ModuleRelativePath", "Public/ChevronController.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChevronDrawMode::Freehand", (int64)EChevronDrawMode::Freehand },
		{ "EChevronDrawMode::Corner", (int64)EChevronDrawMode::Corner },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	"EChevronDrawMode",
	"EChevronDrawMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EChevronDrawMode;
UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_EChevronDrawMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EChevronDrawMode.OuterSingleton)
		{
			ZRIE_EChevronDrawMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDEditorToolkit_EChevronDrawMode, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("EChevronDrawMode"));
		}
		return ZRIE_EChevronDrawMode.OuterSingleton;
	}
	if (!ZRIE_EChevronDrawMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EChevronDrawMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EChevronDrawMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EChevronDrawMode ************************************************************

// ********** Begin Enum EChevronToolState *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDEditorToolkit_EChevronToolState_Statics
template<> ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EChevronToolState>()
{
	return Z_Construct_UEnum_RoadBLDEditorToolkit_EChevronToolState(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Drawing.DisplayName", "Drawing" },
		{ "Drawing.Name", "EChevronToolState::Drawing" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "EChevronToolState::Idle" },
		{ "ModuleRelativePath", "Public/ChevronController.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChevronToolState::Idle", (int64)EChevronToolState::Idle },
		{ "EChevronToolState::Drawing", (int64)EChevronToolState::Drawing },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	"EChevronToolState",
	"EChevronToolState",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EChevronToolState;
UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_EChevronToolState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EChevronToolState.OuterSingleton)
		{
			ZRIE_EChevronToolState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDEditorToolkit_EChevronToolState, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("EChevronToolState"));
		}
		return ZRIE_EChevronToolState.OuterSingleton;
	}
	if (!ZRIE_EChevronToolState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EChevronToolState.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EChevronToolState.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EChevronToolState ***********************************************************

// ********** Begin Class UChevronController Function CreateChevronController **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UChevronController_CreateChevronController_Statics
struct UHT_STATICS
{
	struct ChevronController_eventCreateChevronController_Parms
	{
		UChevronController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Chevron" },
		{ "ModuleRelativePath", "Public/ChevronController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateChevronController constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateChevronController constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateChevronController Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ChevronController_eventCreateChevronController_Parms, ReturnValue), Z_Construct_UClass_UChevronController, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateChevronController Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UChevronController, nullptr, "CreateChevronController", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ChevronController_eventCreateChevronController_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ChevronController_eventCreateChevronController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UChevronController_CreateChevronController(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UChevronController::execCreateChevronController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UChevronController**)Z_Param__Result=UChevronController::CreateChevronController();
	P_NATIVE_END;
}
// ********** End Class UChevronController Function CreateChevronController ************************

// ********** Begin Class UChevronController *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UChevronController_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ChevronController.h" },
		{ "ModuleRelativePath", "Public/ChevronController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredIntersection_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChevronController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedChevron_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChevronController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedNetwork_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChevronController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChevronController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FreehandPreviewActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChevronController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UChevronController constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoveredIntersection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedChevron;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedNetwork;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FreehandPreviewActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UChevronController constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateChevronController"), .Pointer = &UChevronController::execCreateChevronController },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UChevronController_CreateChevronController, "CreateChevronController" }, // 8b37c713caa9849641f8277c39b2f47695b17fda
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChevronController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UChevronController Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HoveredIntersection = { "HoveredIntersection", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UChevronController, HoveredIntersection), Z_Construct_UClass_ARoadGeo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredIntersection_MetaData), NewProp_HoveredIntersection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SelectedChevron = { "SelectedChevron", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UChevronController, SelectedChevron), Z_Construct_UClass_UChevron, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedChevron_MetaData), NewProp_SelectedChevron_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SelectedNetwork = { "SelectedNetwork", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UChevronController, SelectedNetwork), Z_Construct_UClass_ADynamicRoadNetwork, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedNetwork_MetaData), NewProp_SelectedNetwork_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PreviewMaterial = { "PreviewMaterial", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UChevronController, PreviewMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMaterial_MetaData), NewProp_PreviewMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_FreehandPreviewActor = { "FreehandPreviewActor", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UChevronController, FreehandPreviewActor), Z_Construct_UClass_ARoadGeo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FreehandPreviewActor_MetaData), NewProp_FreehandPreviewActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HoveredIntersection,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedChevron,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedNetwork,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviewMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FreehandPreviewActor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UChevronController Property Definitions ************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldBLDEditController,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UChevronController,
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
static void UChevronController_StaticRegisterNativesUChevronController()
{
	UClass* Class = UChevronController::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UChevronController;
UClass* Z_Construct_UClass_UChevronController(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UChevronController;
		if (!Z_Registration_Info_UClass_UChevronController.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ChevronController"),
				Z_Registration_Info_UClass_UChevronController.InnerSingleton,
				UChevronController_StaticRegisterNativesUChevronController,
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
		return Z_Registration_Info_UClass_UChevronController.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UChevronController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChevronController.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UChevronController.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UChevronController);
UChevronController::~UChevronController() {}
// ********** End Class UChevronController *********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ChevronController_h__Script_RoadBLDEditorToolkit_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RoadBLDEditorToolkit_EChevronDrawMode, TEXT("EChevronDrawMode"), &ZRIE_EChevronDrawMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 331797640U) },
		{ Z_Construct_UEnum_RoadBLDEditorToolkit_EChevronToolState, TEXT("EChevronToolState"), &ZRIE_EChevronToolState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3159480374U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChevronController, TEXT("UChevronController"), &Z_Registration_Info_UClass_UChevronController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChevronController), 3416643904U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ChevronController_h__Script_RoadBLDEditorToolkit_801315b29b834ed2c73678fe62c2700eefcd3fe0{
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
