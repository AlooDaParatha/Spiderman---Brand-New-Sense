// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WalkwaysController.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeWalkwaysController() {}

// ********** Begin Cross Module References ********************************************************
WORLDBLDEDITOR_API UClass* Z_Construct_UClass_UWorldBLDEditController(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ACrossing(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UCurveObject(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoadNetwork(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadBLDSidewalkPreset(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_EWalkwaysEditMode(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UWalkwaysController(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UWalkwaysController(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EWalkwaysEditMode *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDEditorToolkit_EWalkwaysEditMode_Statics
template<> ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EWalkwaysEditMode>()
{
	return Z_Construct_UEnum_RoadBLDEditorToolkit_EWalkwaysEditMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "EditCrossings.DisplayName", "Edit Crossings" },
		{ "EditCrossings.Name", "EWalkwaysEditMode::EditCrossings" },
		{ "EditSidewalks.DisplayName", "Edit Sidewalks" },
		{ "EditSidewalks.Name", "EWalkwaysEditMode::EditSidewalks" },
		{ "ModuleRelativePath", "Public/WalkwaysController.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWalkwaysEditMode::EditSidewalks", (int64)EWalkwaysEditMode::EditSidewalks },
		{ "EWalkwaysEditMode::EditCrossings", (int64)EWalkwaysEditMode::EditCrossings },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	"EWalkwaysEditMode",
	"EWalkwaysEditMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EWalkwaysEditMode;
UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_EWalkwaysEditMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EWalkwaysEditMode.OuterSingleton)
		{
			ZRIE_EWalkwaysEditMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDEditorToolkit_EWalkwaysEditMode, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("EWalkwaysEditMode"));
		}
		return ZRIE_EWalkwaysEditMode.OuterSingleton;
	}
	if (!ZRIE_EWalkwaysEditMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EWalkwaysEditMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EWalkwaysEditMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EWalkwaysEditMode ***********************************************************

// ********** Begin Class UWalkwaysController Function CreateWalkwaysController ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWalkwaysController_CreateWalkwaysController_Statics
struct UHT_STATICS
{
	struct WalkwaysController_eventCreateWalkwaysController_Parms
	{
		TSubclassOf<URoadBLDSidewalkPreset> InSidewalkClass;
		TSubclassOf<ACrossing> InCrossingClass;
		UWalkwaysController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Walkways" },
		{ "CPP_Default_InCrossingClass", "None" },
		{ "CPP_Default_InSidewalkClass", "None" },
		{ "DisplayName", "Create Walkways Controller" },
		{ "ModuleRelativePath", "Public/WalkwaysController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateWalkwaysController constinit property declarations **************
	static const UECodeGen_Private::FClassPropertyParams NewProp_InSidewalkClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InCrossingClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateWalkwaysController constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateWalkwaysController Property Definitions *************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_InSidewalkClass = { "InSidewalkClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(WalkwaysController_eventCreateWalkwaysController_Parms, InSidewalkClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URoadBLDSidewalkPreset, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_InCrossingClass = { "InCrossingClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(WalkwaysController_eventCreateWalkwaysController_Parms, InCrossingClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACrossing, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(WalkwaysController_eventCreateWalkwaysController_Parms, ReturnValue), Z_Construct_UClass_UWalkwaysController, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InSidewalkClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InCrossingClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateWalkwaysController Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWalkwaysController, nullptr, "CreateWalkwaysController", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WalkwaysController_eventCreateWalkwaysController_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WalkwaysController_eventCreateWalkwaysController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWalkwaysController_CreateWalkwaysController(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWalkwaysController::execCreateWalkwaysController)
{
	P_GET_OBJECT(UClass,Z_Param_InSidewalkClass);
	P_GET_OBJECT(UClass,Z_Param_InCrossingClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWalkwaysController**)Z_Param__Result=UWalkwaysController::CreateWalkwaysController(Z_Param_InSidewalkClass,Z_Param_InCrossingClass);
	P_NATIVE_END;
}
// ********** End Class UWalkwaysController Function CreateWalkwaysController **********************

// ********** Begin Class UWalkwaysController Function GetEditMode *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWalkwaysController_GetEditMode_Statics
struct UHT_STATICS
{
	struct WalkwaysController_eventGetEditMode_Parms
	{
		EWalkwaysEditMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Walkways" },
		{ "ModuleRelativePath", "Public/WalkwaysController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetEditMode constinit property declarations ***************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEditMode constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEditMode Property Definitions **************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(WalkwaysController_eventGetEditMode_Parms, ReturnValue), Z_Construct_UEnum_RoadBLDEditorToolkit_EWalkwaysEditMode, METADATA_PARAMS(0, nullptr) }; // 03a2dc706fd39e4949cc1f53454c355a31210535
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetEditMode Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWalkwaysController, nullptr, "GetEditMode", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WalkwaysController_eventGetEditMode_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WalkwaysController_eventGetEditMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWalkwaysController_GetEditMode(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWalkwaysController::execGetEditMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EWalkwaysEditMode*)Z_Param__Result=P_THIS->GetEditMode();
	P_NATIVE_END;
}
// ********** End Class UWalkwaysController Function GetEditMode ***********************************

// ********** Begin Class UWalkwaysController Function SetEditMode *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UWalkwaysController_SetEditMode_Statics
struct UHT_STATICS
{
	struct WalkwaysController_eventSetEditMode_Parms
	{
		EWalkwaysEditMode NewMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Walkways" },
		{ "ModuleRelativePath", "Public/WalkwaysController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetEditMode constinit property declarations ***************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetEditMode constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetEditMode Property Definitions **************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_NewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(WalkwaysController_eventSetEditMode_Parms, NewMode), Z_Construct_UEnum_RoadBLDEditorToolkit_EWalkwaysEditMode, METADATA_PARAMS(0, nullptr) }; // 03a2dc706fd39e4949cc1f53454c355a31210535
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewMode,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetEditMode Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UWalkwaysController, nullptr, "SetEditMode", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::WalkwaysController_eventSetEditMode_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::WalkwaysController_eventSetEditMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWalkwaysController_SetEditMode(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UWalkwaysController::execSetEditMode)
{
	P_GET_ENUM(EWalkwaysEditMode,Z_Param_NewMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEditMode(EWalkwaysEditMode(Z_Param_NewMode));
	P_NATIVE_END;
}
// ********** End Class UWalkwaysController Function SetEditMode ***********************************

// ********** Begin Class UWalkwaysController ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UWalkwaysController_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WalkwaysController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WalkwaysController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMode_MetaData[] = {
		{ "Category", "Walkways" },
		{ "ModuleRelativePath", "Public/WalkwaysController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SidewalkClass_MetaData[] = {
		{ "Category", "Walkways|Sidewalks" },
		{ "ModuleRelativePath", "Public/WalkwaysController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossingClassToSpawn_MetaData[] = {
		{ "Category", "Walkways|Crossings" },
		{ "ModuleRelativePath", "Public/WalkwaysController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapDistanceThreshold_MetaData[] = {
		{ "Category", "Walkways|Crossings" },
		{ "ModuleRelativePath", "Public/WalkwaysController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingCrossing_MetaData[] = {
		{ "Comment", "// ---- Crossing mode state/helpers ----\n" },
		{ "ModuleRelativePath", "Public/WalkwaysController.h" },
		{ "ToolTip", "---- Crossing mode state/helpers ----" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NearestCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/WalkwaysController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointACurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/WalkwaysController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedCornerCurves_MetaData[] = {
		{ "ModuleRelativePath", "Public/WalkwaysController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedRoadNetwork_MetaData[] = {
		{ "Comment", "// ---- Shared tool-owned menu state ----\n" },
		{ "ModuleRelativePath", "Public/WalkwaysController.h" },
		{ "ToolTip", "---- Shared tool-owned menu state ----" },
	};
#endif // WITH_METADATA

// ********** Begin Class UWalkwaysController constinit property declarations **********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentMode;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SidewalkClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CrossingClassToSpawn;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SnapDistanceThreshold;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PendingCrossing;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NearestCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointACurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedCornerCurves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedCornerCurves;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedRoadNetwork;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UWalkwaysController constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateWalkwaysController"), .Pointer = &UWalkwaysController::execCreateWalkwaysController },
		{ .NameUTF8 = UTF8TEXT("GetEditMode"), .Pointer = &UWalkwaysController::execGetEditMode },
		{ .NameUTF8 = UTF8TEXT("SetEditMode"), .Pointer = &UWalkwaysController::execSetEditMode },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWalkwaysController_CreateWalkwaysController, "CreateWalkwaysController" }, // 797aa155cf95702122563741701de2b0bf10ec03
		{ &Z_Construct_UFunction_UWalkwaysController_GetEditMode, "GetEditMode" }, // c397b5c3dd3f6153402a8917a0b1706388e1a8d0
		{ &Z_Construct_UFunction_UWalkwaysController_SetEditMode, "SetEditMode" }, // 76e850f2794d32d024ba4cb129ace324dcd7cb8e
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWalkwaysController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UWalkwaysController Property Definitions *********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CurrentMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CurrentMode = { "CurrentMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UWalkwaysController, CurrentMode), Z_Construct_UEnum_RoadBLDEditorToolkit_EWalkwaysEditMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMode_MetaData), NewProp_CurrentMode_MetaData) }; // 03a2dc706fd39e4949cc1f53454c355a31210535
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_SidewalkClass = { "SidewalkClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UWalkwaysController, SidewalkClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URoadBLDSidewalkPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SidewalkClass_MetaData), NewProp_SidewalkClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_CrossingClassToSpawn = { "CrossingClassToSpawn", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UWalkwaysController, CrossingClassToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_ACrossing, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossingClassToSpawn_MetaData), NewProp_CrossingClassToSpawn_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_SnapDistanceThreshold = { "SnapDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UWalkwaysController, SnapDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapDistanceThreshold_MetaData), NewProp_SnapDistanceThreshold_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PendingCrossing = { "PendingCrossing", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UWalkwaysController, PendingCrossing), Z_Construct_UClass_ACrossing, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingCrossing_MetaData), NewProp_PendingCrossing_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NearestCurve = { "NearestCurve", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UWalkwaysController, NearestCurve), Z_Construct_UClass_UCurveObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NearestCurve_MetaData), NewProp_NearestCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PointACurve = { "PointACurve", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UWalkwaysController, PointACurve), Z_Construct_UClass_UCurveObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointACurve_MetaData), NewProp_PointACurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CachedCornerCurves_Inner = { "CachedCornerCurves", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCurveObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_CachedCornerCurves = { "CachedCornerCurves", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UWalkwaysController, CachedCornerCurves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedCornerCurves_MetaData), NewProp_CachedCornerCurves_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CachedRoadNetwork = { "CachedRoadNetwork", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UWalkwaysController, CachedRoadNetwork), Z_Construct_UClass_ADynamicRoadNetwork, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedRoadNetwork_MetaData), NewProp_CachedRoadNetwork_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SidewalkClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CrossingClassToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SnapDistanceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PendingCrossing,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NearestCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointACurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedCornerCurves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedCornerCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedRoadNetwork,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UWalkwaysController Property Definitions ***********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldBLDEditController,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UWalkwaysController,
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
static void UWalkwaysController_StaticRegisterNativesUWalkwaysController()
{
	UClass* Class = UWalkwaysController::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWalkwaysController;
UClass* Z_Construct_UClass_UWalkwaysController(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UWalkwaysController;
		if (!Z_Registration_Info_UClass_UWalkwaysController.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("WalkwaysController"),
				Z_Registration_Info_UClass_UWalkwaysController.InnerSingleton,
				UWalkwaysController_StaticRegisterNativesUWalkwaysController,
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
		return Z_Registration_Info_UClass_UWalkwaysController.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UWalkwaysController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWalkwaysController.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UWalkwaysController.OuterSingleton;
}
#undef UHT_STATICS
UWalkwaysController::UWalkwaysController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UWalkwaysController);
UWalkwaysController::~UWalkwaysController() {}
// ********** End Class UWalkwaysController ********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_WalkwaysController_h__Script_RoadBLDEditorToolkit_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RoadBLDEditorToolkit_EWalkwaysEditMode, TEXT("EWalkwaysEditMode"), &ZRIE_EWalkwaysEditMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 61004912U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWalkwaysController, TEXT("UWalkwaysController"), &Z_Registration_Info_UClass_UWalkwaysController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWalkwaysController), 536796856U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_WalkwaysController_h__Script_RoadBLDEditorToolkit_82a3a2585b031db7d9877e05db0f01a1a7d3108a{
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
