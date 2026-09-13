// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChopController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeChopController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
WORLDBLDEDITOR_API UClass* Z_Construct_UClass_UWorldBLDEditController(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoad(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ARoadGeo(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UChopController(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UChopController(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UChopController **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UChopController_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Edit controller for splitting roads by clicking at a point along the road.\n * Traces the mouse position to find RoadGeo actors and draws a preview line\n * across the road at the split location. Clicking splits the road into two\n * separate ADynamicRoad actors.\n */" },
		{ "IncludePath", "ChopController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ChopController.h" },
		{ "ToolTip", "Edit controller for splitting roads by clicking at a point along the road.\nTraces the mouse position to find RoadGeo actors and draws a preview line\nacross the road at the split location. Clicking splits the road into two\nseparate ADynamicRoad actors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRoad_MetaData[] = {
		{ "Category", "ChopTool" },
		{ "Comment", "// The target road that the mouse is currently hovering over\n" },
		{ "ModuleRelativePath", "Public/ChopController.h" },
		{ "ToolTip", "The target road that the mouse is currently hovering over" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRoadGeo_MetaData[] = {
		{ "Category", "ChopTool" },
		{ "Comment", "// The target RoadGeo actor that the mouse is hovering over\n" },
		{ "ModuleRelativePath", "Public/ChopController.h" },
		{ "ToolTip", "The target RoadGeo actor that the mouse is hovering over" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredDistance_MetaData[] = {
		{ "Category", "ChopTool" },
		{ "Comment", "// Distance along the road at the hover point\n" },
		{ "ModuleRelativePath", "Public/ChopController.h" },
		{ "ToolTip", "Distance along the road at the hover point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastTraceHitLocation_MetaData[] = {
		{ "Category", "ChopTool" },
		{ "Comment", "// World location of the last trace hit\n" },
		{ "ModuleRelativePath", "Public/ChopController.h" },
		{ "ToolTip", "World location of the last trace hit" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadsCreatedDuringSession_MetaData[] = {
		{ "Comment", "// Track roads created during this session for final rebuild\n" },
		{ "ModuleRelativePath", "Public/ChopController.h" },
		{ "ToolTip", "Track roads created during this session for final rebuild" },
	};
#endif // WITH_METADATA

// ********** Begin Class UChopController constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetRoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetRoadGeo;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_HoveredDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastTraceHitLocation;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_RoadsCreatedDuringSession_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoadsCreatedDuringSession;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UChopController constinit property declarations ****************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChopController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UChopController Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetRoad = { "TargetRoad", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UChopController, TargetRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRoad_MetaData), NewProp_TargetRoad_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetRoadGeo = { "TargetRoadGeo", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UChopController, TargetRoadGeo), Z_Construct_UClass_ARoadGeo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRoadGeo_MetaData), NewProp_TargetRoadGeo_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_HoveredDistance = { "HoveredDistance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UChopController, HoveredDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredDistance_MetaData), NewProp_HoveredDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LastTraceHitLocation = { "LastTraceHitLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UChopController, LastTraceHitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastTraceHitLocation_MetaData), NewProp_LastTraceHitLocation_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams UHT_STATICS::NewProp_RoadsCreatedDuringSession_Inner = { "RoadsCreatedDuringSession", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, nullptr, nullptr, 1, 0, Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RoadsCreatedDuringSession = { "RoadsCreatedDuringSession", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UChopController, RoadsCreatedDuringSession), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadsCreatedDuringSession_MetaData), NewProp_RoadsCreatedDuringSession_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetRoadGeo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HoveredDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LastTraceHitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadsCreatedDuringSession_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadsCreatedDuringSession,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UChopController Property Definitions ***************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldBLDEditController,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UChopController,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UChopController;
UClass* Z_Construct_UClass_UChopController(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UChopController;
		if (!Z_Registration_Info_UClass_UChopController.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ChopController"),
				Z_Registration_Info_UClass_UChopController.InnerSingleton,
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
		return Z_Registration_Info_UClass_UChopController.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UChopController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChopController.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UChopController.OuterSingleton;
}
#undef UHT_STATICS
UChopController::UChopController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UChopController);
UChopController::~UChopController() {}
// ********** End Class UChopController ************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ChopController_h__Script_RoadBLDEditorToolkit_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChopController, TEXT("UChopController"), &Z_Registration_Info_UClass_UChopController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChopController), 2661073675U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ChopController_h__Script_RoadBLDEditorToolkit_17c3637d4a6c23b9df4b4834e65bd1b329f29007{
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
