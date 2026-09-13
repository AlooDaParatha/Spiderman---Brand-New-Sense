// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoadSnapshotController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRoadSnapshotController() {}

// ********** Begin Cross Module References ********************************************************
WORLDBLDEDITOR_API UClass* Z_Construct_UClass_UWorldBLDEditController(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadLane(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadSnapshotController(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadSnapshotController(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class URoadSnapshotController **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoadSnapshotController_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Edit controller for creating road presets by \"snapshotting\" a road's cross-section\n * at a specific distance along the road. The user hovers over a road, scrolls to\n * select lanes (both sides, including shoulder/border lanes), and clicks to create\n * a new UDynamicRoadDrawPreset Blueprint asset saved to Content/RoadBLD_Generated/Presets.\n */" },
		{ "IncludePath", "RoadSnapshotController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RoadSnapshotController.h" },
		{ "ToolTip", "Edit controller for creating road presets by \"snapshotting\" a road's cross-section\nat a specific distance along the road. The user hovers over a road, scrolls to\nselect lanes (both sides, including shoulder/border lanes), and clicks to create\na new UDynamicRoadDrawPreset Blueprint asset saved to Content/RoadBLD_Generated/Presets." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfLanes_MetaData[] = {
		{ "Category", "Road Snapshot" },
		{ "Comment", "/** Scroll-controlled lane selection count (starts at 1) */" },
		{ "ModuleRelativePath", "Public/RoadSnapshotController.h" },
		{ "ToolTip", "Scroll-controlled lane selection count (starts at 1)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedLanes_MetaData[] = {
		{ "Category", "Road Snapshot" },
		{ "Comment", "/** Currently highlighted/selected lanes (both sides, including shoulder/border) */" },
		{ "ModuleRelativePath", "Public/RoadSnapshotController.h" },
		{ "ToolTip", "Currently highlighted/selected lanes (both sides, including shoulder/border)" },
	};
#endif // WITH_METADATA

// ********** Begin Class URoadSnapshotController constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfLanes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedLanes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedLanes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URoadSnapshotController constinit property declarations ********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadSnapshotController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URoadSnapshotController Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxNumberOfLanes = { "MaxNumberOfLanes", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(URoadSnapshotController, MaxNumberOfLanes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumberOfLanes_MetaData), NewProp_MaxNumberOfLanes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SelectedLanes_Inner = { "SelectedLanes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDynamicRoadLane, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SelectedLanes = { "SelectedLanes", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URoadSnapshotController, SelectedLanes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedLanes_MetaData), NewProp_SelectedLanes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxNumberOfLanes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedLanes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedLanes,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URoadSnapshotController Property Definitions *******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldBLDEditController,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoadSnapshotController,
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
FClassRegistrationInfo Z_Registration_Info_UClass_URoadSnapshotController;
UClass* Z_Construct_UClass_URoadSnapshotController(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoadSnapshotController;
		if (!Z_Registration_Info_UClass_URoadSnapshotController.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadSnapshotController"),
				Z_Registration_Info_UClass_URoadSnapshotController.InnerSingleton,
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
		return Z_Registration_Info_UClass_URoadSnapshotController.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoadSnapshotController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoadSnapshotController.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoadSnapshotController.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoadSnapshotController);
URoadSnapshotController::~URoadSnapshotController() {}
// ********** End Class URoadSnapshotController ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadSnapshotController_h__Script_RoadBLDEditorToolkit_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoadSnapshotController, TEXT("URoadSnapshotController"), &Z_Registration_Info_UClass_URoadSnapshotController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoadSnapshotController), 4150677208U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadSnapshotController_h__Script_RoadBLDEditorToolkit_97e1cfc3fcef634b7a1738ea65dafd9b628bf1d1{
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
