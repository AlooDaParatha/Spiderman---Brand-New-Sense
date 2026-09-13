// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeleteRoadController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDeleteRoadController() {}

// ********** Begin Cross Module References ********************************************************
WORLDBLDEDITOR_API UClass* Z_Construct_UClass_UWorldBLDEditController(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoad(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ARoadGeo(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UDeleteRoadController(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UDeleteRoadController(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UDeleteRoadController ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDeleteRoadController_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Edit controller for deleting roads by hovering and clicking on road geometry.\n * Traces the mouse position to find RoadGeo actors and highlights the road's outer edges in red.\n * Supports undo/redo through transaction system.\n */" },
		{ "IncludePath", "DeleteRoadController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DeleteRoadController.h" },
		{ "ToolTip", "Edit controller for deleting roads by hovering and clicking on road geometry.\nTraces the mouse position to find RoadGeo actors and highlights the road's outer edges in red.\nSupports undo/redo through transaction system." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRoad_MetaData[] = {
		{ "Category", "DeleteRoad" },
		{ "Comment", "// The target road that the mouse is currently hovering over\n" },
		{ "ModuleRelativePath", "Public/DeleteRoadController.h" },
		{ "ToolTip", "The target road that the mouse is currently hovering over" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRoadGeo_MetaData[] = {
		{ "Category", "DeleteRoad" },
		{ "Comment", "// The target RoadGeo actor that the mouse is hovering over (may have null ParentRoad)\n" },
		{ "ModuleRelativePath", "Public/DeleteRoadController.h" },
		{ "ToolTip", "The target RoadGeo actor that the mouse is hovering over (may have null ParentRoad)" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDeleteRoadController constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetRoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetRoadGeo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDeleteRoadController constinit property declarations **********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeleteRoadController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UDeleteRoadController Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetRoad = { "TargetRoad", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UDeleteRoadController, TargetRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRoad_MetaData), NewProp_TargetRoad_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetRoadGeo = { "TargetRoadGeo", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UDeleteRoadController, TargetRoadGeo), Z_Construct_UClass_ARoadGeo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRoadGeo_MetaData), NewProp_TargetRoadGeo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetRoadGeo,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UDeleteRoadController Property Definitions *********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldBLDEditController,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDeleteRoadController,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UDeleteRoadController;
UClass* Z_Construct_UClass_UDeleteRoadController(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDeleteRoadController;
		if (!Z_Registration_Info_UClass_UDeleteRoadController.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DeleteRoadController"),
				Z_Registration_Info_UClass_UDeleteRoadController.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDeleteRoadController.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDeleteRoadController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeleteRoadController.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDeleteRoadController.OuterSingleton;
}
#undef UHT_STATICS
UDeleteRoadController::UDeleteRoadController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDeleteRoadController);
UDeleteRoadController::~UDeleteRoadController() {}
// ********** End Class UDeleteRoadController ******************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_DeleteRoadController_h__Script_RoadBLDEditorToolkit_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDeleteRoadController, TEXT("UDeleteRoadController"), &Z_Registration_Info_UClass_UDeleteRoadController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeleteRoadController), 1563554979U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_DeleteRoadController_h__Script_RoadBLDEditorToolkit_fb0b6f1b2d9d421905c17c59180c82540d53a710{
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
