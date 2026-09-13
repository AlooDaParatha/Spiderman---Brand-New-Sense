// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrossingController.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeCrossingController() {}

// ********** Begin Cross Module References ********************************************************
WORLDBLDEDITOR_API UClass* Z_Construct_UClass_UWorldBLDEditController(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ACrossing(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UCurveObject(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoadNetwork(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UCrossingController(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_ECrossingToolState(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UCrossingController(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ECrossingToolState ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDEditorToolkit_ECrossingToolState_Statics
template<> ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ECrossingToolState>()
{
	return Z_Construct_UEnum_RoadBLDEditorToolkit_ECrossingToolState(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Tool state for the crossing placement workflow\n */" },
		{ "ModuleRelativePath", "Public/CrossingController.h" },
		{ "PlacingPointA.DisplayName", "Placing Point A" },
		{ "PlacingPointA.Name", "ECrossingToolState::PlacingPointA" },
		{ "PlacingPointB.DisplayName", "Placing Point B" },
		{ "PlacingPointB.Name", "ECrossingToolState::PlacingPointB" },
		{ "ToolTip", "Tool state for the crossing placement workflow" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECrossingToolState::PlacingPointA", (int64)ECrossingToolState::PlacingPointA },
		{ "ECrossingToolState::PlacingPointB", (int64)ECrossingToolState::PlacingPointB },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	"ECrossingToolState",
	"ECrossingToolState",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ECrossingToolState;
UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_ECrossingToolState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ECrossingToolState.OuterSingleton)
		{
			ZRIE_ECrossingToolState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDEditorToolkit_ECrossingToolState, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("ECrossingToolState"));
		}
		return ZRIE_ECrossingToolState.OuterSingleton;
	}
	if (!ZRIE_ECrossingToolState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ECrossingToolState.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ECrossingToolState.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ECrossingToolState **********************************************************

// ********** Begin Class UCrossingController Function CreateCrossingController ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCrossingController_CreateCrossingController_Statics
struct UHT_STATICS
{
	struct CrossingController_eventCreateCrossingController_Parms
	{
		TSubclassOf<ACrossing> CrossingClass;
		UCrossingController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CrossingTool" },
		{ "Comment", "/**\n\x09 * Creates a new CrossingController configured to spawn the specified ACrossing subclass.\n\x09 * @param CrossingClass The subclass of ACrossing to spawn when placing crossings\n\x09 * @return A new UCrossingController instance, or nullptr if CrossingClass is invalid\n\x09 */" },
		{ "DisplayName", "Create Crossing Controller" },
		{ "ModuleRelativePath", "Public/CrossingController.h" },
		{ "ToolTip", "Creates a new CrossingController configured to spawn the specified ACrossing subclass.\n@param CrossingClass The subclass of ACrossing to spawn when placing crossings\n@return A new UCrossingController instance, or nullptr if CrossingClass is invalid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateCrossingController constinit property declarations **************
	static const UECodeGen_Private::FClassPropertyParams NewProp_CrossingClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateCrossingController constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateCrossingController Property Definitions *************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_CrossingClass = { "CrossingClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(CrossingController_eventCreateCrossingController_Parms, CrossingClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACrossing, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(CrossingController_eventCreateCrossingController_Parms, ReturnValue), Z_Construct_UClass_UCrossingController, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CrossingClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateCrossingController Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCrossingController, nullptr, "CreateCrossingController", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CrossingController_eventCreateCrossingController_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CrossingController_eventCreateCrossingController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCrossingController_CreateCrossingController(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCrossingController::execCreateCrossingController)
{
	P_GET_OBJECT(UClass,Z_Param_CrossingClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCrossingController**)Z_Param__Result=UCrossingController::CreateCrossingController(Z_Param_CrossingClass);
	P_NATIVE_END;
}
// ********** End Class UCrossingController Function CreateCrossingController **********************

// ********** Begin Class UCrossingController ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UCrossingController_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Edit controller for placing ACrossing actors by clicking two points\n * along road edges or intersection corner curves.\n */" },
		{ "IncludePath", "CrossingController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CrossingController.h" },
		{ "ToolTip", "Edit controller for placing ACrossing actors by clicking two points\nalong road edges or intersection corner curves." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapDistanceThreshold_MetaData[] = {
		{ "Category", "CrossingTool" },
		{ "Comment", "/** Distance threshold for snapping to curves (in Unreal units) */" },
		{ "ModuleRelativePath", "Public/CrossingController.h" },
		{ "ToolTip", "Distance threshold for snapping to curves (in Unreal units)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "CrossingTool" },
		{ "Comment", "/** Current tool state */" },
		{ "ModuleRelativePath", "Public/CrossingController.h" },
		{ "ToolTip", "Current tool state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossingClassToSpawn_MetaData[] = {
		{ "Category", "CrossingTool" },
		{ "Comment", "/** The class of ACrossing to spawn when placing crossings */" },
		{ "ModuleRelativePath", "Public/CrossingController.h" },
		{ "ToolTip", "The class of ACrossing to spawn when placing crossings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedRoadNetwork_MetaData[] = {
		{ "Comment", "/** Cached road network for the current level */" },
		{ "ModuleRelativePath", "Public/CrossingController.h" },
		{ "ToolTip", "Cached road network for the current level" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingCrossing_MetaData[] = {
		{ "Comment", "/** The crossing actor currently being placed (created after PointA is set) */" },
		{ "ModuleRelativePath", "Public/CrossingController.h" },
		{ "ToolTip", "The crossing actor currently being placed (created after PointA is set)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NearestCurve_MetaData[] = {
		{ "Comment", "/** The nearest curve object (could be UEdgeCurve or corner UCurveObject) */" },
		{ "ModuleRelativePath", "Public/CrossingController.h" },
		{ "ToolTip", "The nearest curve object (could be UEdgeCurve or corner UCurveObject)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointACurve_MetaData[] = {
		{ "Comment", "/** Curve that PointA is attached to */" },
		{ "ModuleRelativePath", "Public/CrossingController.h" },
		{ "ToolTip", "Curve that PointA is attached to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedCornerCurves_MetaData[] = {
		{ "Comment", "/** Transient corner curves generated on-the-fly from CornerEditData for rendering and snapping. */" },
		{ "ModuleRelativePath", "Public/CrossingController.h" },
		{ "ToolTip", "Transient corner curves generated on-the-fly from CornerEditData for rendering and snapping." },
	};
#endif // WITH_METADATA

// ********** Begin Class UCrossingController constinit property declarations **********************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SnapDistanceThreshold;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CrossingClassToSpawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedRoadNetwork;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PendingCrossing;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NearestCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointACurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedCornerCurves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedCornerCurves;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCrossingController constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateCrossingController"), .Pointer = &UCrossingController::execCreateCrossingController },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCrossingController_CreateCrossingController, "CreateCrossingController" }, // 1c41ac3737d413d6d80b0e1fe6a6d31a200cf073
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrossingController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UCrossingController Property Definitions *********************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_SnapDistanceThreshold = { "SnapDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UCrossingController, SnapDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapDistanceThreshold_MetaData), NewProp_SnapDistanceThreshold_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UCrossingController, CurrentState), Z_Construct_UEnum_RoadBLDEditorToolkit_ECrossingToolState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 0ef40ac22bf542c53491f71247446f262e782ef3
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_CrossingClassToSpawn = { "CrossingClassToSpawn", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UCrossingController, CrossingClassToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_ACrossing, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossingClassToSpawn_MetaData), NewProp_CrossingClassToSpawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CachedRoadNetwork = { "CachedRoadNetwork", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UCrossingController, CachedRoadNetwork), Z_Construct_UClass_ADynamicRoadNetwork, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedRoadNetwork_MetaData), NewProp_CachedRoadNetwork_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PendingCrossing = { "PendingCrossing", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UCrossingController, PendingCrossing), Z_Construct_UClass_ACrossing, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingCrossing_MetaData), NewProp_PendingCrossing_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NearestCurve = { "NearestCurve", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UCrossingController, NearestCurve), Z_Construct_UClass_UCurveObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NearestCurve_MetaData), NewProp_NearestCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PointACurve = { "PointACurve", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UCrossingController, PointACurve), Z_Construct_UClass_UCurveObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointACurve_MetaData), NewProp_PointACurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CachedCornerCurves_Inner = { "CachedCornerCurves", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCurveObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_CachedCornerCurves = { "CachedCornerCurves", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UCrossingController, CachedCornerCurves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedCornerCurves_MetaData), NewProp_CachedCornerCurves_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SnapDistanceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CrossingClassToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedRoadNetwork,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PendingCrossing,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NearestCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointACurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedCornerCurves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedCornerCurves,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UCrossingController Property Definitions ***********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldBLDEditController,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UCrossingController,
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
static void UCrossingController_StaticRegisterNativesUCrossingController()
{
	UClass* Class = UCrossingController::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCrossingController;
UClass* Z_Construct_UClass_UCrossingController(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UCrossingController;
		if (!Z_Registration_Info_UClass_UCrossingController.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CrossingController"),
				Z_Registration_Info_UClass_UCrossingController.InnerSingleton,
				UCrossingController_StaticRegisterNativesUCrossingController,
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
		return Z_Registration_Info_UClass_UCrossingController.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UCrossingController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrossingController.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UCrossingController.OuterSingleton;
}
#undef UHT_STATICS
UCrossingController::UCrossingController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCrossingController);
UCrossingController::~UCrossingController() {}
// ********** End Class UCrossingController ********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CrossingController_h__Script_RoadBLDEditorToolkit_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RoadBLDEditorToolkit_ECrossingToolState, TEXT("ECrossingToolState"), &ZRIE_ECrossingToolState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 250874562U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCrossingController, TEXT("UCrossingController"), &Z_Registration_Info_UClass_UCrossingController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrossingController), 3966383847U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CrossingController_h__Script_RoadBLDEditorToolkit_423e2e16af40509cec544e46562f21f6be3a750e{
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
