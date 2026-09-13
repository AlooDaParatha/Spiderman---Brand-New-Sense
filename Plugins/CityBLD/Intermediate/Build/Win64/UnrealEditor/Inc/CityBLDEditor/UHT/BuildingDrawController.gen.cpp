// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingDrawController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeBuildingDrawController() {}

// ********** Begin Cross Module References ********************************************************
CITYBLDRUNTIME_API UEnum* Z_Construct_UEnum_CityBLDRuntime_EBuildingDraw(ETypeConstructPhase);
WORLDBLDEDITOR_API UClass* Z_Construct_UClass_UWorldBLDEditController(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UBuildingStyle(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_ADynamicMeshActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingDrawController(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingDrawController(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UBuildingDrawController **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UBuildingDrawController_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Click-to-draw tool for placing individual modular buildings from a selected UBuildingStyle.\n * DrawSpline: click three or more footprint (or floor-plate) points, then close the loop.\n * AdjustHeight: scroll to set the current plate height. Click or Enter finalizes; Shift+click or Shift+Enter draws another floor plate.\n */" },
		{ "IncludePath", "BuildingDrawController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BuildingDrawController.h" },
		{ "ToolTip", "Click-to-draw tool for placing individual modular buildings from a selected UBuildingStyle.\nDrawSpline: click three or more footprint (or floor-plate) points, then close the loop.\nAdjustHeight: scroll to set the current plate height. Click or Enter finalizes; Shift+click or Shift+Enter draws another floor plate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingStyle_MetaData[] = {
		{ "Category", "BuildingDraw" },
		{ "ModuleRelativePath", "Public/BuildingDrawController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawMode_MetaData[] = {
		{ "Category", "BuildingDraw" },
		{ "ModuleRelativePath", "Public/BuildingDrawController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightPreviewActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuildingDrawController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBuildingDrawController constinit property declarations ******************
	static const UECodeGen_Private::FClassPropertyParams NewProp_BuildingStyle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DrawMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DrawMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightPreviewActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBuildingDrawController constinit property declarations ********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildingDrawController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UBuildingDrawController Property Definitions *****************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_BuildingStyle = { "BuildingStyle", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingDrawController, BuildingStyle), Z_Construct_UClass_UClass, Z_Construct_UClass_UBuildingStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingStyle_MetaData), NewProp_BuildingStyle_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DrawMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DrawMode = { "DrawMode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingDrawController, DrawMode), Z_Construct_UEnum_CityBLDRuntime_EBuildingDraw, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawMode_MetaData), NewProp_DrawMode_MetaData) }; // c21b1d30cb0ead4fd9c3e224874e8184604596f7
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HeightPreviewActor = { "HeightPreviewActor", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingDrawController, HeightPreviewActor), Z_Construct_UClass_ADynamicMeshActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightPreviewActor_MetaData), NewProp_HeightPreviewActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DrawMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DrawMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HeightPreviewActor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UBuildingDrawController Property Definitions *******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldBLDEditController,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UBuildingDrawController,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UBuildingDrawController;
UClass* Z_Construct_UClass_UBuildingDrawController(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UBuildingDrawController;
		if (!Z_Registration_Info_UClass_UBuildingDrawController.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("BuildingDrawController"),
				Z_Registration_Info_UClass_UBuildingDrawController.InnerSingleton,
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
		return Z_Registration_Info_UClass_UBuildingDrawController.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UBuildingDrawController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildingDrawController.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuildingDrawController.OuterSingleton;
}
#undef UHT_STATICS
UBuildingDrawController::UBuildingDrawController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBuildingDrawController);
UBuildingDrawController::~UBuildingDrawController() {}
// ********** End Class UBuildingDrawController ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BuildingDrawController_h__Script_CityBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBuildingDrawController, TEXT("UBuildingDrawController"), &Z_Registration_Info_UClass_UBuildingDrawController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildingDrawController), 621334276U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BuildingDrawController_h__Script_CityBLDEditor_bd5314169e54cfd81e86000b4a032e306fbcf54f{
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
