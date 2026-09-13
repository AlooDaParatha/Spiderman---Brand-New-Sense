// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomRoadShapeController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeCustomRoadShapeController() {}

// ********** Begin Cross Module References ********************************************************
WORLDBLDEDITOR_API UClass* Z_Construct_UClass_UWorldBLDEditController(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ACustomRoadShape(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UCustomRoadShapeController(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UCustomRoadShapeController(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UCustomRoadShapeController Function CreateForShape ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCustomRoadShapeController_CreateForShape_Statics
struct UHT_STATICS
{
	struct CustomRoadShapeController_eventCreateForShape_Parms
	{
		ACustomRoadShape* Shape;
		UCustomRoadShapeController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Custom Shape" },
		{ "ModuleRelativePath", "Public/CustomRoadShapeController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateForShape constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Shape;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateForShape constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateForShape Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(CustomRoadShapeController_eventCreateForShape_Parms, Shape), Z_Construct_UClass_ACustomRoadShape, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(CustomRoadShapeController_eventCreateForShape_Parms, ReturnValue), Z_Construct_UClass_UCustomRoadShapeController, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateForShape Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCustomRoadShapeController, nullptr, "CreateForShape", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CustomRoadShapeController_eventCreateForShape_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CustomRoadShapeController_eventCreateForShape_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomRoadShapeController_CreateForShape(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCustomRoadShapeController::execCreateForShape)
{
	P_GET_OBJECT(ACustomRoadShape,Z_Param_Shape);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCustomRoadShapeController**)Z_Param__Result=UCustomRoadShapeController::CreateForShape(Z_Param_Shape);
	P_NATIVE_END;
}
// ********** End Class UCustomRoadShapeController Function CreateForShape *************************

// ********** Begin Class UCustomRoadShapeController ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UCustomRoadShapeController_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CustomRoadShapeController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CustomRoadShapeController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetShape_MetaData[] = {
		{ "Category", "RoadBLD|Custom Shape" },
		{ "ModuleRelativePath", "Public/CustomRoadShapeController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomRoadShapeController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCustomRoadShapeController constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetShape;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PointActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PointActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCustomRoadShapeController constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateForShape"), .Pointer = &UCustomRoadShapeController::execCreateForShape },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomRoadShapeController_CreateForShape, "CreateForShape" }, // 3761d366004e95d8c8a422a15b89f7fd043ff49b
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomRoadShapeController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UCustomRoadShapeController Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetShape = { "TargetShape", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomRoadShapeController, TargetShape), Z_Construct_UClass_ACustomRoadShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetShape_MetaData), NewProp_TargetShape_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams UHT_STATICS::NewProp_PointActors_Inner = { "PointActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PointActors = { "PointActors", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomRoadShapeController, PointActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointActors_MetaData), NewProp_PointActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointActors,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UCustomRoadShapeController Property Definitions ****************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldBLDEditController,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UCustomRoadShapeController,
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
static void UCustomRoadShapeController_StaticRegisterNativesUCustomRoadShapeController()
{
	UClass* Class = UCustomRoadShapeController::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCustomRoadShapeController;
UClass* Z_Construct_UClass_UCustomRoadShapeController(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UCustomRoadShapeController;
		if (!Z_Registration_Info_UClass_UCustomRoadShapeController.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CustomRoadShapeController"),
				Z_Registration_Info_UClass_UCustomRoadShapeController.InnerSingleton,
				UCustomRoadShapeController_StaticRegisterNativesUCustomRoadShapeController,
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
		return Z_Registration_Info_UClass_UCustomRoadShapeController.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UCustomRoadShapeController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomRoadShapeController.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomRoadShapeController.OuterSingleton;
}
#undef UHT_STATICS
UCustomRoadShapeController::UCustomRoadShapeController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCustomRoadShapeController);
UCustomRoadShapeController::~UCustomRoadShapeController() {}
// ********** End Class UCustomRoadShapeController *************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CustomRoadShapeController_h__Script_RoadBLDEditorToolkit_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomRoadShapeController, TEXT("UCustomRoadShapeController"), &Z_Registration_Info_UClass_UCustomRoadShapeController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomRoadShapeController), 3926500776U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CustomRoadShapeController_h__Script_RoadBLDEditorToolkit_81b0fbef8c55a591003c4fe4b619df3478028428{
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
