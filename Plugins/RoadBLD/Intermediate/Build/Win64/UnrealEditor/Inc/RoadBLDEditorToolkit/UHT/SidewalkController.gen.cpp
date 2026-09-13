// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SidewalkController.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeSidewalkController() {}

// ********** Begin Cross Module References ********************************************************
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_ERoadModulePosition(ETypeConstructPhase);
WORLDBLDEDITOR_API UClass* Z_Construct_UClass_UWorldBLDEditController(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoad(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UEdgeCurve(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadBLDSidewalkPreset(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_USidewalkController(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_USidewalkController(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class USidewalkController Function CreateSidewalkController ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USidewalkController_CreateSidewalkController_Statics
struct UHT_STATICS
{
	struct SidewalkController_eventCreateSidewalkController_Parms
	{
		TSubclassOf<URoadBLDSidewalkPreset> SidewalkClass;
		USidewalkController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Sidewalk" },
		{ "DisplayName", "Create Sidewalk Controller" },
		{ "ModuleRelativePath", "Public/SidewalkController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateSidewalkController constinit property declarations **************
	static const UECodeGen_Private::FClassPropertyParams NewProp_SidewalkClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateSidewalkController constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateSidewalkController Property Definitions *************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_SidewalkClass = { "SidewalkClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(SidewalkController_eventCreateSidewalkController_Parms, SidewalkClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URoadBLDSidewalkPreset, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(SidewalkController_eventCreateSidewalkController_Parms, ReturnValue), Z_Construct_UClass_USidewalkController, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SidewalkClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateSidewalkController Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USidewalkController, nullptr, "CreateSidewalkController", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::SidewalkController_eventCreateSidewalkController_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::SidewalkController_eventCreateSidewalkController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USidewalkController_CreateSidewalkController(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(USidewalkController::execCreateSidewalkController)
{
	P_GET_OBJECT(UClass,Z_Param_SidewalkClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USidewalkController**)Z_Param__Result=USidewalkController::CreateSidewalkController(Z_Param_SidewalkClass);
	P_NATIVE_END;
}
// ********** End Class USidewalkController Function CreateSidewalkController **********************

// ********** Begin Class USidewalkController ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_USidewalkController_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SidewalkController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SidewalkController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SidewalkClass_MetaData[] = {
		{ "Category", "Sidewalk" },
		{ "Comment", "// The sidewalk preset class selected by the tool's UI/context menu.\n" },
		{ "ModuleRelativePath", "Public/SidewalkController.h" },
		{ "ToolTip", "The sidewalk preset class selected by the tool's UI/context menu." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredRoad_MetaData[] = {
		{ "Category", "Sidewalk" },
		{ "ModuleRelativePath", "Public/SidewalkController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredEdge_MetaData[] = {
		{ "ModuleRelativePath", "Public/SidewalkController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredEdgePosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/SidewalkController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastValidHoveredRoad_MetaData[] = {
		{ "ModuleRelativePath", "Public/SidewalkController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastValidHoveredEdge_MetaData[] = {
		{ "ModuleRelativePath", "Public/SidewalkController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USidewalkController constinit property declarations **********************
	static const UECodeGen_Private::FClassPropertyParams NewProp_SidewalkClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoveredRoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoveredEdge;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HoveredEdgePosition_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HoveredEdgePosition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastValidHoveredRoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastValidHoveredEdge;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USidewalkController constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateSidewalkController"), .Pointer = &USidewalkController::execCreateSidewalkController },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USidewalkController_CreateSidewalkController, "CreateSidewalkController" }, // f782c27d60922abc24155db47361c4fd461e5ebe
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USidewalkController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class USidewalkController Property Definitions *********************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_SidewalkClass = { "SidewalkClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(USidewalkController, SidewalkClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URoadBLDSidewalkPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SidewalkClass_MetaData), NewProp_SidewalkClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HoveredRoad = { "HoveredRoad", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(USidewalkController, HoveredRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredRoad_MetaData), NewProp_HoveredRoad_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HoveredEdge = { "HoveredEdge", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(USidewalkController, HoveredEdge), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredEdge_MetaData), NewProp_HoveredEdge_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_HoveredEdgePosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_HoveredEdgePosition = { "HoveredEdgePosition", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(USidewalkController, HoveredEdgePosition), Z_Construct_UEnum_RoadBLDRuntime_ERoadModulePosition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredEdgePosition_MetaData), NewProp_HoveredEdgePosition_MetaData) }; // 46a5dd039144740d887a61f0d80e56230e219841
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LastValidHoveredRoad = { "LastValidHoveredRoad", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(USidewalkController, LastValidHoveredRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastValidHoveredRoad_MetaData), NewProp_LastValidHoveredRoad_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LastValidHoveredEdge = { "LastValidHoveredEdge", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(USidewalkController, LastValidHoveredEdge), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastValidHoveredEdge_MetaData), NewProp_LastValidHoveredEdge_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SidewalkClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HoveredRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HoveredEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HoveredEdgePosition_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HoveredEdgePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LastValidHoveredRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LastValidHoveredEdge,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class USidewalkController Property Definitions ***********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldBLDEditController,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_USidewalkController,
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
static void USidewalkController_StaticRegisterNativesUSidewalkController()
{
	UClass* Class = USidewalkController::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USidewalkController;
UClass* Z_Construct_UClass_USidewalkController(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = USidewalkController;
		if (!Z_Registration_Info_UClass_USidewalkController.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("SidewalkController"),
				Z_Registration_Info_UClass_USidewalkController.InnerSingleton,
				USidewalkController_StaticRegisterNativesUSidewalkController,
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
		return Z_Registration_Info_UClass_USidewalkController.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_USidewalkController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USidewalkController.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_USidewalkController.OuterSingleton;
}
#undef UHT_STATICS
USidewalkController::USidewalkController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USidewalkController);
USidewalkController::~USidewalkController() {}
// ********** End Class USidewalkController ********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_SidewalkController_h__Script_RoadBLDEditorToolkit_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USidewalkController, TEXT("USidewalkController"), &Z_Registration_Info_UClass_USidewalkController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USidewalkController), 2855510038U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_SidewalkController_h__Script_RoadBLDEditorToolkit_e3b93fe2401c35176582a407e47849ad66030716{
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
