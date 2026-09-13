// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingShapeController.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeBuildingShapeController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
WORLDBLDEDITOR_API UClass* Z_Construct_UClass_UWorldBLDEditController(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_AModularBuildingActor(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_ADynamicMeshActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingShapeController(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingShapeController(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingShapeSplineComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UBuildingShapeController Function AddNewPlateWithInset *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UBuildingShapeController_AddNewPlateWithInset_Statics
struct UHT_STATICS
{
	struct BuildingShapeController_eventAddNewPlateWithInset_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Public/BuildingShapeController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddNewPlateWithInset constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddNewPlateWithInset constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddNewPlateWithInset Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(BuildingShapeController_eventAddNewPlateWithInset_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddNewPlateWithInset Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UBuildingShapeController, nullptr, "AddNewPlateWithInset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::BuildingShapeController_eventAddNewPlateWithInset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::BuildingShapeController_eventAddNewPlateWithInset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBuildingShapeController_AddNewPlateWithInset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UBuildingShapeController::execAddNewPlateWithInset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AddNewPlateWithInset();
	P_NATIVE_END;
}
// ********** End Class UBuildingShapeController Function AddNewPlateWithInset *********************

// ********** Begin Class UBuildingShapeController Function CreateForBuilding **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UBuildingShapeController_CreateForBuilding_Statics
struct UHT_STATICS
{
	struct BuildingShapeController_eventCreateForBuilding_Parms
	{
		AModularBuildingActor* Building;
		TSubclassOf<UBuildingShapeController> ControllerClass;
		UBuildingShapeController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Building" },
		{ "CPP_Default_ControllerClass", "None" },
		{ "ModuleRelativePath", "Public/BuildingShapeController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateForBuilding constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Building;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ControllerClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateForBuilding constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateForBuilding Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Building = { "Building", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(BuildingShapeController_eventCreateForBuilding_Parms, Building), Z_Construct_UClass_AModularBuildingActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ControllerClass = { "ControllerClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(BuildingShapeController_eventCreateForBuilding_Parms, ControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBuildingShapeController, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(BuildingShapeController_eventCreateForBuilding_Parms, ReturnValue), Z_Construct_UClass_UBuildingShapeController, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Building,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControllerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateForBuilding Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UBuildingShapeController, nullptr, "CreateForBuilding", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::BuildingShapeController_eventCreateForBuilding_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::BuildingShapeController_eventCreateForBuilding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBuildingShapeController_CreateForBuilding(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UBuildingShapeController::execCreateForBuilding)
{
	P_GET_OBJECT(AModularBuildingActor,Z_Param_Building);
	P_GET_OBJECT(UClass,Z_Param_ControllerClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBuildingShapeController**)Z_Param__Result=UBuildingShapeController::CreateForBuilding(Z_Param_Building,Z_Param_ControllerClass);
	P_NATIVE_END;
}
// ********** End Class UBuildingShapeController Function CreateForBuilding ************************

// ********** Begin Class UBuildingShapeController *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UBuildingShapeController_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BuildingShapeController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BuildingShapeController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetBuilding_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Public/BuildingShapeController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPlateIndex_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Public/BuildingShapeController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetShellIndex_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Public/BuildingShapeController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedShellMaterial_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Public/BuildingShapeController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnselectedShellMaterial_MetaData[] = {
		{ "Category", "Building" },
		{ "ModuleRelativePath", "Public/BuildingShapeController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeSplineActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuildingShapeController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeSpline_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuildingShapeController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastAppliedPerimeter_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuildingShapeController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShellPreviewActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuildingShapeController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShellPreviewPlateShellIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuildingShapeController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBuildingShapeController constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetBuilding;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetPlateIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetShellIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedShellMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnselectedShellMaterial;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ShapeSplineActor;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ShapeSpline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastAppliedPerimeter_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LastAppliedPerimeter;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ShellPreviewActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ShellPreviewActors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShellPreviewPlateShellIndex_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ShellPreviewPlateShellIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBuildingShapeController constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddNewPlateWithInset"), .Pointer = &UBuildingShapeController::execAddNewPlateWithInset },
		{ .NameUTF8 = UTF8TEXT("CreateForBuilding"), .Pointer = &UBuildingShapeController::execCreateForBuilding },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBuildingShapeController_AddNewPlateWithInset, "AddNewPlateWithInset" }, // c8cb03986e504c5f493a87953532b8b7acbceb1f
		{ &Z_Construct_UFunction_UBuildingShapeController_CreateForBuilding, "CreateForBuilding" }, // 526c0ed269fb6add429e96de2cf8c328026d89c5
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildingShapeController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UBuildingShapeController Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetBuilding = { "TargetBuilding", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingShapeController, TargetBuilding), Z_Construct_UClass_AModularBuildingActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetBuilding_MetaData), NewProp_TargetBuilding_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_TargetPlateIndex = { "TargetPlateIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingShapeController, TargetPlateIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPlateIndex_MetaData), NewProp_TargetPlateIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_TargetShellIndex = { "TargetShellIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingShapeController, TargetShellIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetShellIndex_MetaData), NewProp_TargetShellIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SelectedShellMaterial = { "SelectedShellMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingShapeController, SelectedShellMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedShellMaterial_MetaData), NewProp_SelectedShellMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_UnselectedShellMaterial = { "UnselectedShellMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingShapeController, UnselectedShellMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnselectedShellMaterial_MetaData), NewProp_UnselectedShellMaterial_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams UHT_STATICS::NewProp_ShapeSplineActor = { "ShapeSplineActor", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingShapeController, ShapeSplineActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeSplineActor_MetaData), NewProp_ShapeSplineActor_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams UHT_STATICS::NewProp_ShapeSpline = { "ShapeSpline", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::WeakObject, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingShapeController, ShapeSpline), Z_Construct_UClass_UBuildingShapeSplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeSpline_MetaData), NewProp_ShapeSpline_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LastAppliedPerimeter_Inner = { "LastAppliedPerimeter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_LastAppliedPerimeter = { "LastAppliedPerimeter", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingShapeController, LastAppliedPerimeter), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastAppliedPerimeter_MetaData), NewProp_LastAppliedPerimeter_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams UHT_STATICS::NewProp_ShellPreviewActors_Inner = { "ShellPreviewActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, nullptr, nullptr, 1, 0, Z_Construct_UClass_ADynamicMeshActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ShellPreviewActors = { "ShellPreviewActors", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingShapeController, ShellPreviewActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShellPreviewActors_MetaData), NewProp_ShellPreviewActors_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ShellPreviewPlateShellIndex_Inner = { "ShellPreviewPlateShellIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ShellPreviewPlateShellIndex = { "ShellPreviewPlateShellIndex", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingShapeController, ShellPreviewPlateShellIndex), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShellPreviewPlateShellIndex_MetaData), NewProp_ShellPreviewPlateShellIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetBuilding,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetPlateIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetShellIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedShellMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UnselectedShellMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShapeSplineActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShapeSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LastAppliedPerimeter_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LastAppliedPerimeter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShellPreviewActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShellPreviewActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShellPreviewPlateShellIndex_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShellPreviewPlateShellIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UBuildingShapeController Property Definitions ******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldBLDEditController,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UBuildingShapeController,
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
static void UBuildingShapeController_StaticRegisterNativesUBuildingShapeController()
{
	UClass* Class = UBuildingShapeController::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBuildingShapeController;
UClass* Z_Construct_UClass_UBuildingShapeController(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UBuildingShapeController;
		if (!Z_Registration_Info_UClass_UBuildingShapeController.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("BuildingShapeController"),
				Z_Registration_Info_UClass_UBuildingShapeController.InnerSingleton,
				UBuildingShapeController_StaticRegisterNativesUBuildingShapeController,
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
		return Z_Registration_Info_UClass_UBuildingShapeController.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UBuildingShapeController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildingShapeController.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuildingShapeController.OuterSingleton;
}
#undef UHT_STATICS
UBuildingShapeController::UBuildingShapeController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBuildingShapeController);
UBuildingShapeController::~UBuildingShapeController() {}
// ********** End Class UBuildingShapeController ***************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BuildingShapeController_h__Script_CityBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBuildingShapeController, TEXT("UBuildingShapeController"), &Z_Registration_Info_UClass_UBuildingShapeController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildingShapeController), 1062697111U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BuildingShapeController_h__Script_CityBLDEditor_e8b594d0043819c17ff948573d138711a0a9d325{
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
