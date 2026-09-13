// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SignController.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeSignController() {}

// ********** Begin Cross Module References ********************************************************
WORLDBLDEDITOR_API UClass* Z_Construct_UClass_UPlacementController(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoad(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoadNetwork(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UEdgeCurve(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ARoadSign(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_USignController(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_USignController(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class USignController Function CreateSignController ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USignController_CreateSignController_Statics
struct UHT_STATICS
{
	struct SignController_eventCreateSignController_Parms
	{
		TSubclassOf<ARoadSign> SignClass;
		bool bInExitToolOnPlacement;
		TSubclassOf<USignController> SignControllerClass;
		USignController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD|Sign" },
		{ "CPP_Default_bInExitToolOnPlacement", "false" },
		{ "CPP_Default_SignControllerClass", "None" },
		{ "ModuleRelativePath", "Public/SignController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateSignController constinit property declarations ******************
	static const UECodeGen_Private::FClassPropertyParams NewProp_SignClass;
	static void NewProp_bInExitToolOnPlacement_SetBit(void* Obj)
	{
		((SignController_eventCreateSignController_Parms*)Obj)->bInExitToolOnPlacement = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInExitToolOnPlacement;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SignControllerClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateSignController constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateSignController Property Definitions *****************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_SignClass = { "SignClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(SignController_eventCreateSignController_Parms, SignClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ARoadSign, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInExitToolOnPlacement = { "bInExitToolOnPlacement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(SignController_eventCreateSignController_Parms), &UHT_STATICS::NewProp_bInExitToolOnPlacement_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_SignControllerClass = { "SignControllerClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(SignController_eventCreateSignController_Parms, SignControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USignController, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(SignController_eventCreateSignController_Parms, ReturnValue), Z_Construct_UClass_USignController, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SignClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInExitToolOnPlacement,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SignControllerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateSignController Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USignController, nullptr, "CreateSignController", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::SignController_eventCreateSignController_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::SignController_eventCreateSignController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USignController_CreateSignController(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(USignController::execCreateSignController)
{
	P_GET_OBJECT(UClass,Z_Param_SignClass);
	P_GET_UBOOL(Z_Param_bInExitToolOnPlacement);
	P_GET_OBJECT(UClass,Z_Param_SignControllerClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USignController**)Z_Param__Result=USignController::CreateSignController(Z_Param_SignClass,Z_Param_bInExitToolOnPlacement,Z_Param_SignControllerClass);
	P_NATIVE_END;
}
// ********** End Class USignController Function CreateSignController ******************************

// ********** Begin Class USignController **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_USignController_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SignController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SignController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredRoad_MetaData[] = {
		{ "ModuleRelativePath", "Public/SignController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapEdge_MetaData[] = {
		{ "ModuleRelativePath", "Public/SignController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedRoadNetwork_MetaData[] = {
		{ "ModuleRelativePath", "Public/SignController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USignController constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoveredRoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SnapEdge;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedRoadNetwork;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USignController constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateSignController"), .Pointer = &USignController::execCreateSignController },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USignController_CreateSignController, "CreateSignController" }, // ceac4a7af17e3071f9bb79d358ad5aa6f45743d9
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USignController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class USignController Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HoveredRoad = { "HoveredRoad", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(USignController, HoveredRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredRoad_MetaData), NewProp_HoveredRoad_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SnapEdge = { "SnapEdge", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(USignController, SnapEdge), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapEdge_MetaData), NewProp_SnapEdge_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CachedRoadNetwork = { "CachedRoadNetwork", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(USignController, CachedRoadNetwork), Z_Construct_UClass_ADynamicRoadNetwork, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedRoadNetwork_MetaData), NewProp_CachedRoadNetwork_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HoveredRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SnapEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedRoadNetwork,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class USignController Property Definitions ***************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UPlacementController,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_USignController,
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
static void USignController_StaticRegisterNativesUSignController()
{
	UClass* Class = USignController::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USignController;
UClass* Z_Construct_UClass_USignController(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = USignController;
		if (!Z_Registration_Info_UClass_USignController.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("SignController"),
				Z_Registration_Info_UClass_USignController.InnerSingleton,
				USignController_StaticRegisterNativesUSignController,
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
		return Z_Registration_Info_UClass_USignController.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_USignController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USignController.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_USignController.OuterSingleton;
}
#undef UHT_STATICS
USignController::USignController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USignController);
USignController::~USignController() {}
// ********** End Class USignController ************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_SignController_h__Script_RoadBLDEditorToolkit_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USignController, TEXT("USignController"), &Z_Registration_Info_UClass_USignController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USignController), 3917003381U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_SignController_h__Script_RoadBLDEditorToolkit_87746ff483b3805315d53b6b036227770df03bbb{
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
