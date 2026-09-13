// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoadController.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRoadController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
WORLDBLDEDITOR_API UClass* Z_Construct_UClass_UWorldBLDEditController(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoad(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadDrawPreset(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoadNetwork(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UEdgeCurve(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicRoadControllerTarget(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UDynamicRoadDrawParameters(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UDynamicRoadDrawSectionParameters(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_EAttachedElement(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_EControllerDrawState(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_ECurveMode(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UPointCurve(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_ARoadBrushActor(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadController(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FRoadLandscapePaintSettings(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UDynamicRoadDrawParameters(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UDynamicRoadDrawSectionParameters(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UPointCurve(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_ARoadBrushActor(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadController(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FRoadLandscapePaintSettings ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRoadLandscapePaintSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRoadLandscapePaintSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRoadLandscapePaintSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoadController.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRoadLandscapePaintSettings constinit property declarations *******
// ********** End ScriptStruct FRoadLandscapePaintSettings constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadLandscapePaintSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	&NewStructOps,
	"RoadLandscapePaintSettings",
	nullptr,
	0,
	DataSizeOf<FRoadLandscapePaintSettings>(),
	alignof(FRoadLandscapePaintSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRoadLandscapePaintSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRoadLandscapePaintSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRoadLandscapePaintSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRoadLandscapePaintSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadLandscapePaintSettings, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("RoadLandscapePaintSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRoadLandscapePaintSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRoadLandscapePaintSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRoadLandscapePaintSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRoadLandscapePaintSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRoadLandscapePaintSettings *****************************************

// ********** Begin Enum EControllerDrawState ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDEditorToolkit_EControllerDrawState_Statics
template<> ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EControllerDrawState>()
{
	return Z_Construct_UEnum_RoadBLDEditorToolkit_EControllerDrawState(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "DrawCircle.Name", "EControllerDrawState::DrawCircle" },
		{ "DrawContinue.Name", "EControllerDrawState::DrawContinue" },
		{ "DrawCurve.Name", "EControllerDrawState::DrawCurve" },
		{ "DrawLane.Name", "EControllerDrawState::DrawLane" },
		{ "DrawStart.Name", "EControllerDrawState::DrawStart" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "None.Name", "EControllerDrawState::None" },
		{ "SelectLane.Name", "EControllerDrawState::SelectLane" },
		{ "StartCircle.Name", "EControllerDrawState::StartCircle" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EControllerDrawState::None", (int64)EControllerDrawState::None },
		{ "EControllerDrawState::DrawStart", (int64)EControllerDrawState::DrawStart },
		{ "EControllerDrawState::DrawContinue", (int64)EControllerDrawState::DrawContinue },
		{ "EControllerDrawState::DrawCurve", (int64)EControllerDrawState::DrawCurve },
		{ "EControllerDrawState::SelectLane", (int64)EControllerDrawState::SelectLane },
		{ "EControllerDrawState::DrawLane", (int64)EControllerDrawState::DrawLane },
		{ "EControllerDrawState::StartCircle", (int64)EControllerDrawState::StartCircle },
		{ "EControllerDrawState::DrawCircle", (int64)EControllerDrawState::DrawCircle },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	"EControllerDrawState",
	"EControllerDrawState",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EControllerDrawState;
UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_EControllerDrawState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EControllerDrawState.OuterSingleton)
		{
			ZRIE_EControllerDrawState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDEditorToolkit_EControllerDrawState, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("EControllerDrawState"));
		}
		return ZRIE_EControllerDrawState.OuterSingleton;
	}
	if (!ZRIE_EControllerDrawState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EControllerDrawState.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EControllerDrawState.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EControllerDrawState ********************************************************

// ********** Begin Enum ECurveMode ****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDEditorToolkit_ECurveMode_Statics
template<> ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ECurveMode>()
{
	return Z_Construct_UEnum_RoadBLDEditorToolkit_ECurveMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "CircularRoads.Name", "ECurveMode::CircularRoads" },
		{ "CurvedRoads.Name", "ECurveMode::CurvedRoads" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "StraightRoads.Name", "ECurveMode::StraightRoads" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECurveMode::StraightRoads", (int64)ECurveMode::StraightRoads },
		{ "ECurveMode::CurvedRoads", (int64)ECurveMode::CurvedRoads },
		{ "ECurveMode::CircularRoads", (int64)ECurveMode::CircularRoads },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	"ECurveMode",
	"ECurveMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ECurveMode;
UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_ECurveMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ECurveMode.OuterSingleton)
		{
			ZRIE_ECurveMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDEditorToolkit_ECurveMode, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("ECurveMode"));
		}
		return ZRIE_ECurveMode.OuterSingleton;
	}
	if (!ZRIE_ECurveMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ECurveMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ECurveMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ECurveMode ******************************************************************

// ********** Begin Enum EAttachedElement **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDEditorToolkit_EAttachedElement_Statics
template<> ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EAttachedElement>()
{
	return Z_Construct_UEnum_RoadBLDEditorToolkit_EAttachedElement(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "DrawContinue.Name", "EAttachedElement::DrawContinue" },
		{ "DrawCurve.Name", "EAttachedElement::DrawCurve" },
		{ "DrawLane.Name", "EAttachedElement::DrawLane" },
		{ "DrawStart.Name", "EAttachedElement::DrawStart" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "None.Name", "EAttachedElement::None" },
		{ "SelectLane.Name", "EAttachedElement::SelectLane" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAttachedElement::None", (int64)EAttachedElement::None },
		{ "EAttachedElement::DrawStart", (int64)EAttachedElement::DrawStart },
		{ "EAttachedElement::DrawContinue", (int64)EAttachedElement::DrawContinue },
		{ "EAttachedElement::DrawCurve", (int64)EAttachedElement::DrawCurve },
		{ "EAttachedElement::SelectLane", (int64)EAttachedElement::SelectLane },
		{ "EAttachedElement::DrawLane", (int64)EAttachedElement::DrawLane },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	"EAttachedElement",
	"EAttachedElement",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EAttachedElement;
UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_EAttachedElement(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EAttachedElement.OuterSingleton)
		{
			ZRIE_EAttachedElement.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDEditorToolkit_EAttachedElement, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("EAttachedElement"));
		}
		return ZRIE_EAttachedElement.OuterSingleton;
	}
	if (!ZRIE_EAttachedElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EAttachedElement.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EAttachedElement.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EAttachedElement ************************************************************

// ********** Begin ScriptStruct FDynamicRoadControllerTarget **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FDynamicRoadControllerTarget_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FDynamicRoadControllerTarget>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FDynamicRoadControllerTarget); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Road_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineIk_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FDynamicRoadControllerTarget constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Road;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplineIk;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FDynamicRoadControllerTarget constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDynamicRoadControllerTarget>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FDynamicRoadControllerTarget Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicRoadControllerTarget, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Road = { "Road", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicRoadControllerTarget, Road), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Road_MetaData), NewProp_Road_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SplineIk = { "SplineIk", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FDynamicRoadControllerTarget, SplineIk), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineIk_MetaData), NewProp_SplineIk_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Road,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SplineIk,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FDynamicRoadControllerTarget Property Definitions *******************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	&NewStructOps,
	"DynamicRoadControllerTarget",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FDynamicRoadControllerTarget>(),
	alignof(FDynamicRoadControllerTarget),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDynamicRoadControllerTarget;
UScriptStruct* Z_Construct_UScriptStruct_FDynamicRoadControllerTarget(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FDynamicRoadControllerTarget.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FDynamicRoadControllerTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDynamicRoadControllerTarget, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("DynamicRoadControllerTarget"));
		}
		return Z_Registration_Info_UScriptStruct_FDynamicRoadControllerTarget.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FDynamicRoadControllerTarget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDynamicRoadControllerTarget.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FDynamicRoadControllerTarget.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FDynamicRoadControllerTarget ****************************************

// ********** Begin Class UDynamicRoadDrawParameters ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDynamicRoadDrawParameters_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RoadController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDynamicRoadDrawParameters constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Preset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDynamicRoadDrawParameters constinit property declarations *****************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicRoadDrawParameters>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UDynamicRoadDrawParameters Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x011600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawParameters, Preset), Z_Construct_UClass_UDynamicRoadDrawPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preset_MetaData), NewProp_Preset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Preset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UDynamicRoadDrawParameters Property Definitions ****************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDynamicRoadDrawParameters,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UDynamicRoadDrawParameters;
UClass* Z_Construct_UClass_UDynamicRoadDrawParameters(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDynamicRoadDrawParameters;
		if (!Z_Registration_Info_UClass_UDynamicRoadDrawParameters.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DynamicRoadDrawParameters"),
				Z_Registration_Info_UClass_UDynamicRoadDrawParameters.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDynamicRoadDrawParameters.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDynamicRoadDrawParameters.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicRoadDrawParameters.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDynamicRoadDrawParameters.OuterSingleton;
}
#undef UHT_STATICS
UDynamicRoadDrawParameters::UDynamicRoadDrawParameters(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDynamicRoadDrawParameters);
UDynamicRoadDrawParameters::~UDynamicRoadDrawParameters() {}
// ********** End Class UDynamicRoadDrawParameters *************************************************

// ********** Begin Class UDynamicRoadDrawSectionParameters ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDynamicRoadDrawSectionParameters_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RoadController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDynamicRoadDrawSectionParameters constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Preset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDynamicRoadDrawSectionParameters constinit property declarations **********
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicRoadDrawSectionParameters>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UDynamicRoadDrawSectionParameters Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x011600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadDrawSectionParameters, Preset), Z_Construct_UClass_UDynamicRoadDrawPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preset_MetaData), NewProp_Preset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Preset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UDynamicRoadDrawSectionParameters Property Definitions *********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDynamicRoadDrawSectionParameters,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UDynamicRoadDrawSectionParameters;
UClass* Z_Construct_UClass_UDynamicRoadDrawSectionParameters(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDynamicRoadDrawSectionParameters;
		if (!Z_Registration_Info_UClass_UDynamicRoadDrawSectionParameters.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DynamicRoadDrawSectionParameters"),
				Z_Registration_Info_UClass_UDynamicRoadDrawSectionParameters.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDynamicRoadDrawSectionParameters.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDynamicRoadDrawSectionParameters.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicRoadDrawSectionParameters.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDynamicRoadDrawSectionParameters.OuterSingleton;
}
#undef UHT_STATICS
UDynamicRoadDrawSectionParameters::UDynamicRoadDrawSectionParameters(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDynamicRoadDrawSectionParameters);
UDynamicRoadDrawSectionParameters::~UDynamicRoadDrawSectionParameters() {}
// ********** End Class UDynamicRoadDrawSectionParameters ******************************************

// ********** Begin Class UPointCurve Function GetCurvePoints **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UPointCurve_GetCurvePoints_Statics
struct UHT_STATICS
{
	struct PointCurve_eventGetCurvePoints_Parms
	{
		TArray<FVector> OutPoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurvePoints constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurvePoints constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurvePoints Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(PointCurve_eventGetCurvePoints_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPoints,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCurvePoints Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UPointCurve, nullptr, "GetCurvePoints", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::PointCurve_eventGetCurvePoints_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::PointCurve_eventGetCurvePoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPointCurve_GetCurvePoints(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UPointCurve::execGetCurvePoints)
{
	P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCurvePoints(Z_Param_Out_OutPoints);
	P_NATIVE_END;
}
// ********** End Class UPointCurve Function GetCurvePoints ****************************************

// ********** Begin Class UPointCurve **************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UPointCurve_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Rename\n" },
		{ "IncludePath", "RoadController.h" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Rename" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsClosedLoop_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlPoints_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPointCurve constinit property declarations ******************************
	static void NewProp_bIsClosedLoop_SetBit(void* Obj)
	{
		((UPointCurve*)Obj)->bIsClosedLoop = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsClosedLoop;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ControlPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPointCurve constinit property declarations ********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetCurvePoints"), .Pointer = &UPointCurve::execGetCurvePoints },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPointCurve_GetCurvePoints, "GetCurvePoints" }, // 29a24e6e0e998b1ddfe760815c9ef13dc6568934
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCurve>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UPointCurve Property Definitions *****************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsClosedLoop = { "bIsClosedLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UPointCurve), &UHT_STATICS::NewProp_bIsClosedLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsClosedLoop_MetaData), NewProp_bIsClosedLoop_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ControlPoints_Inner = { "ControlPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ControlPoints = { "ControlPoints", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UPointCurve, ControlPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlPoints_MetaData), NewProp_ControlPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsClosedLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControlPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControlPoints,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UPointCurve Property Definitions *******************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UPointCurve,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UPointCurve_StaticRegisterNativesUPointCurve()
{
	UClass* Class = UPointCurve::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPointCurve;
UClass* Z_Construct_UClass_UPointCurve(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UPointCurve;
		if (!Z_Registration_Info_UClass_UPointCurve.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("PointCurve"),
				Z_Registration_Info_UClass_UPointCurve.InnerSingleton,
				UPointCurve_StaticRegisterNativesUPointCurve,
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
		return Z_Registration_Info_UClass_UPointCurve.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UPointCurve.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPointCurve.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UPointCurve.OuterSingleton;
}
#undef UHT_STATICS
UPointCurve::UPointCurve(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPointCurve);
UPointCurve::~UPointCurve() {}
// ********** End Class UPointCurve ****************************************************************

// ********** Begin Class ARoadBrushActor Function CalculatePresetWidth ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARoadBrushActor_CalculatePresetWidth_Statics
struct UHT_STATICS
{
	struct RoadBrushActor_eventCalculatePresetWidth_Parms
	{
		TSubclassOf<UDynamicRoadDrawPreset> InPreset;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Road Drawing" },
		{ "Comment", "/**\n\x09 * Calculates the total width of a road preset by summing all lane and sidewalk widths.\n\x09 * @param InPreset The preset to calculate width for\n\x09 * @return The total width in centimeters, or 0 if preset is invalid\n\x09 */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Calculates the total width of a road preset by summing all lane and sidewalk widths.\n@param InPreset The preset to calculate width for\n@return The total width in centimeters, or 0 if preset is invalid" },
	};
#endif // WITH_METADATA

// ********** Begin Function CalculatePresetWidth constinit property declarations ******************
	static const UECodeGen_Private::FClassPropertyParams NewProp_InPreset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CalculatePresetWidth constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CalculatePresetWidth Property Definitions *****************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_InPreset = { "InPreset", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBrushActor_eventCalculatePresetWidth_Parms, InPreset), Z_Construct_UClass_UClass, Z_Construct_UClass_UDynamicRoadDrawPreset, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBrushActor_eventCalculatePresetWidth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InPreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CalculatePresetWidth Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARoadBrushActor, nullptr, "CalculatePresetWidth", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadBrushActor_eventCalculatePresetWidth_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadBrushActor_eventCalculatePresetWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoadBrushActor_CalculatePresetWidth(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARoadBrushActor::execCalculatePresetWidth)
{
	P_GET_OBJECT(UClass,Z_Param_InPreset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=ARoadBrushActor::CalculatePresetWidth(Z_Param_InPreset);
	P_NATIVE_END;
}
// ********** End Class ARoadBrushActor Function CalculatePresetWidth ******************************

// ********** Begin Class ARoadBrushActor Function UpdateScaleFromPreset ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARoadBrushActor_UpdateScaleFromPreset_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Road Drawing" },
		{ "Comment", "/**\n\x09 * Updates the brush scale to match the width of the configured preset.\n\x09 * Call this after setting the Preset property.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Updates the brush scale to match the width of the configured preset.\nCall this after setting the Preset property." },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateScaleFromPreset constinit property declarations *****************
// ********** End Function UpdateScaleFromPreset constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARoadBrushActor, nullptr, "UpdateScaleFromPreset", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ARoadBrushActor_UpdateScaleFromPreset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARoadBrushActor::execUpdateScaleFromPreset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateScaleFromPreset();
	P_NATIVE_END;
}
// ********** End Class ARoadBrushActor Function UpdateScaleFromPreset *****************************

// ********** Begin Class ARoadBrushActor **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ARoadBrushActor_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * Simple brush actor for visualizing the road placement cursor.\n * Will be positioned at the mouse hit point during road drawing.\n */" },
		{ "IncludePath", "RoadController.h" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Simple brush actor for visualizing the road placement cursor.\nWill be positioned at the mouse hit point during road drawing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[] = {
		{ "Category", "Road Drawing" },
		{ "Comment", "/** The road preset this brush is configured for */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "The road preset this brush is configured for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Road Drawing" },
		{ "Comment", "/** The mesh component used for visualization */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "The mesh component used for visualization" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSnapping_MetaData[] = {
		{ "Category", "Road Drawing" },
		{ "Comment", "/** Whether the brush is currently snapping to another road endpoint */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Whether the brush is currently snapping to another road endpoint" },
	};
#endif // WITH_METADATA

// ********** Begin Class ARoadBrushActor constinit property declarations **************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_Preset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static void NewProp_bIsSnapping_SetBit(void* Obj)
	{
		((ARoadBrushActor*)Obj)->bIsSnapping = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSnapping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ARoadBrushActor constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CalculatePresetWidth"), .Pointer = &ARoadBrushActor::execCalculatePresetWidth },
		{ .NameUTF8 = UTF8TEXT("UpdateScaleFromPreset"), .Pointer = &ARoadBrushActor::execUpdateScaleFromPreset },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARoadBrushActor_CalculatePresetWidth, "CalculatePresetWidth" }, // 59c7dce15adf887e278ae5cc24051a0880ec1d49
		{ &Z_Construct_UFunction_ARoadBrushActor_UpdateScaleFromPreset, "UpdateScaleFromPreset" }, // 9c02374e2fa71df8ccf7f4addfbdf8dbc9b652d8
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoadBrushActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ARoadBrushActor Property Definitions *************************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadBrushActor, Preset), Z_Construct_UClass_UClass, Z_Construct_UClass_UDynamicRoadDrawPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preset_MetaData), NewProp_Preset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadBrushActor, MeshComponent), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsSnapping = { "bIsSnapping", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ARoadBrushActor), &UHT_STATICS::NewProp_bIsSnapping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSnapping_MetaData), NewProp_bIsSnapping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Preset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsSnapping,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ARoadBrushActor Property Definitions ***************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ARoadBrushActor,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void ARoadBrushActor_StaticRegisterNativesARoadBrushActor()
{
	UClass* Class = ARoadBrushActor::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARoadBrushActor;
UClass* Z_Construct_UClass_ARoadBrushActor(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ARoadBrushActor;
		if (!Z_Registration_Info_UClass_ARoadBrushActor.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadBrushActor"),
				Z_Registration_Info_UClass_ARoadBrushActor.InnerSingleton,
				ARoadBrushActor_StaticRegisterNativesARoadBrushActor,
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
		return Z_Registration_Info_UClass_ARoadBrushActor.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ARoadBrushActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoadBrushActor.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ARoadBrushActor.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARoadBrushActor);
ARoadBrushActor::~ARoadBrushActor() {}
// ********** End Class ARoadBrushActor ************************************************************

// ********** Begin Class URoadController Function CreateRoadController ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadController_CreateRoadController_Statics
struct UHT_STATICS
{
	struct RoadController_eventCreateRoadController_Parms
	{
		TSubclassOf<URoadController> InControllerClass;
		TSubclassOf<UDynamicRoadDrawPreset> InPreset;
		TSubclassOf<ARoadBrushActor> InBrushClass;
		EControllerDrawState InDrawState;
		URoadController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Road Drawing" },
		{ "Comment", "/**\n\x09 * Creates and initializes a new URoadController with the specified parameters.\n\x09 * @param InControllerClass The controller class to instantiate (can be a Blueprint subclass)\n\x09 * @param InPreset The road style preset to use for drawing\n\x09 * @param InBrushClass The brush actor class to spawn for cursor visualization\n\x09 * @param InDrawState The initial drawing state for the controller (defaults to None)\n\x09 * @return Newly created and initialized controller\n\x09 */" },
		{ "CPP_Default_InDrawState", "None" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Creates and initializes a new URoadController with the specified parameters.\n@param InControllerClass The controller class to instantiate (can be a Blueprint subclass)\n@param InPreset The road style preset to use for drawing\n@param InBrushClass The brush actor class to spawn for cursor visualization\n@param InDrawState The initial drawing state for the controller (defaults to None)\n@return Newly created and initialized controller" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateRoadController constinit property declarations ******************
	static const UECodeGen_Private::FClassPropertyParams NewProp_InControllerClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InPreset;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InBrushClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InDrawState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InDrawState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateRoadController constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateRoadController Property Definitions *****************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_InControllerClass = { "InControllerClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(RoadController_eventCreateRoadController_Parms, InControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URoadController, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_InPreset = { "InPreset", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(RoadController_eventCreateRoadController_Parms, InPreset), Z_Construct_UClass_UClass, Z_Construct_UClass_UDynamicRoadDrawPreset, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_InBrushClass = { "InBrushClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(RoadController_eventCreateRoadController_Parms, InBrushClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ARoadBrushActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_InDrawState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_InDrawState = { "InDrawState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(RoadController_eventCreateRoadController_Parms, InDrawState), Z_Construct_UEnum_RoadBLDEditorToolkit_EControllerDrawState, METADATA_PARAMS(0, nullptr) }; // 17fa038c7319651ae47cdc26d92431eff798af3d
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadController_eventCreateRoadController_Parms, ReturnValue), Z_Construct_UClass_URoadController, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InControllerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InPreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InBrushClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InDrawState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InDrawState,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateRoadController Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadController, nullptr, "CreateRoadController", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadController_eventCreateRoadController_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadController_eventCreateRoadController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadController_CreateRoadController(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadController::execCreateRoadController)
{
	P_GET_OBJECT(UClass,Z_Param_InControllerClass);
	P_GET_OBJECT(UClass,Z_Param_InPreset);
	P_GET_OBJECT(UClass,Z_Param_InBrushClass);
	P_GET_ENUM(EControllerDrawState,Z_Param_InDrawState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URoadController**)Z_Param__Result=URoadController::CreateRoadController(Z_Param_InControllerClass,Z_Param_InPreset,Z_Param_InBrushClass,EControllerDrawState(Z_Param_InDrawState));
	P_NATIVE_END;
}
// ********** End Class URoadController Function CreateRoadController ******************************

// ********** Begin Class URoadController **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoadController_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Edit controller for interactively drawing roads in the editor.\n * Provides a C++ alternative to the Blueprint-based road drawing tool.\n * Supports straight road drawing with real-time preview.\n */" },
		{ "IncludePath", "RoadController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Edit controller for interactively drawing roads in the editor.\nProvides a C++ alternative to the Blueprint-based road drawing tool.\nSupports straight road drawing with real-time preview." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveRoad_MetaData[] = {
		{ "Category", "Road Drawing" },
		{ "Comment", "/** The road currently being drawn */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "The road currently being drawn" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawState_MetaData[] = {
		{ "Category", "Road Drawing" },
		{ "Comment", "/** Current drawing state (DrawStart, DrawContinue, etc.) */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Current drawing state (DrawStart, DrawContinue, etc.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveMode_MetaData[] = {
		{ "Category", "Road Drawing" },
		{ "Comment", "/** Current curve drawing mode (Straight, Curved, or Circular) */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Current curve drawing mode (Straight, Curved, or Circular)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfLanes_MetaData[] = {
		{ "Category", "Road Drawing" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPreset_MetaData[] = {
		{ "Category", "Road Drawing" },
		{ "Comment", "/** Selected road style preset */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Selected road style preset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPresetInstance_MetaData[] = {
		{ "Category", "Road Drawing" },
		{ "Comment", "/** Selected preset instance (used when a dynamically created preset is selected, like merge presets) */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Selected preset instance (used when a dynamically created preset is selected, like merge presets)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewRoad_MetaData[] = {
		{ "Category", "Road Drawing" },
		{ "Comment", "/** Preview road showing where the next segment will be placed */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Preview road showing where the next segment will be placed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bParallelDraw_MetaData[] = {
		{ "Category", "Road Drawing|Parallel Draw" },
		{ "Comment", "/** When enabled, the tool will create and maintain a reversed-direction parallel road while drawing (useful for divided highways). */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "When enabled, the tool will create and maintain a reversed-direction parallel road while drawing (useful for divided highways)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParallelDrawOffset_MetaData[] = {
		{ "Category", "Road Drawing|Parallel Draw" },
		{ "ClampMax", "10000.0" },
		{ "ClampMin", "-10000.0" },
		{ "Comment", "/** Lateral offset (cm) applied to the parallel road along the source road's right vector. Positive offsets toward the opposing carriageway (right when Left-Hand Driving is enabled, left when disabled). */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Lateral offset (cm) applied to the parallel road along the source road's right vector. Positive offsets toward the opposing carriageway (right when Left-Hand Driving is enabled, left when disabled)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushVerticalOffset_MetaData[] = {
		{ "Category", "Road Drawing" },
		{ "ClampMax", "10000.0" },
		{ "ClampMin", "-10000.0" },
		{ "Comment", "/** Persistent Z offset (cm) applied to the brush location and preview placement. Adjust with Ctrl + scroll in the viewport. */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Persistent Z offset (cm) applied to the brush location and preview placement. Adjust with Ctrl + scroll in the viewport." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParallelActiveRoad_MetaData[] = {
		{ "Category", "Road Drawing|Parallel Draw" },
		{ "Comment", "/** The parallel final road added to the road network while drawing (created at DrawStart when Parallel Draw is enabled). */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "The parallel final road added to the road network while drawing (created at DrawStart when Parallel Draw is enabled)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParallelPreviewRoad_MetaData[] = {
		{ "Category", "Road Drawing|Parallel Draw" },
		{ "Comment", "/** The transient parallel preview road maintained alongside PreviewRoad while drawing. */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "The transient parallel preview road maintained alongside PreviewRoad while drawing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[] = {
		{ "Category", "Road Drawing" },
		{ "Comment", "/** Brush actor for cursor visualization */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Brush actor for cursor visualization" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushClass_MetaData[] = {
		{ "Category", "Road Drawing" },
		{ "Comment", "/** Brush actor class to spawn */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Brush actor class to spawn" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUnrestrictedMode_MetaData[] = {
		{ "Category", "Road Drawing" },
		{ "Comment", "/** Unrestricted drawing mode. When enabled, drawing ignores preview validity checks. */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Unrestricted drawing mode. When enabled, drawing ignores preview validity checks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLandscapeSplineMirror_MetaData[] = {
		{ "Category", "Road Drawing" },
		{ "Comment", "/** Enable landscape spline mirroring on created roads */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Enable landscape spline mirroring on created roads" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeSplineFalloff_MetaData[] = {
		{ "Category", "Road Drawing" },
		{ "Comment", "/** Falloff distance for landscape spline mirroring */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Falloff distance for landscape spline mirroring" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLandscapePaint_MetaData[] = {
		{ "Category", "Road Drawing|Landscape Paint" },
		{ "Comment", "/** Cached effective landscape paint toggle from selected preset. */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Cached effective landscape paint toggle from selected preset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapePaintLayerName_MetaData[] = {
		{ "Category", "Road Drawing|Landscape Paint" },
		{ "Comment", "/** Cached effective landscape paint layer from selected preset (or runtime fallback). */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Cached effective landscape paint layer from selected preset (or runtime fallback)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapePaintWidthExtension_MetaData[] = {
		{ "Category", "Road Drawing|Landscape Paint" },
		{ "Comment", "/** Cached effective landscape paint width extension (cm) from selected preset. */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Cached effective landscape paint width extension (cm) from selected preset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapePaintFalloff_MetaData[] = {
		{ "Category", "Road Drawing|Landscape Paint" },
		{ "Comment", "/** Cached effective landscape paint falloff (cm) from selected preset. */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Cached effective landscape paint falloff (cm) from selected preset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanDraw_MetaData[] = {
		{ "Category", "Road Drawing" },
		{ "Comment", "/** Whether the user can draw at the current mouse position (based on road validity checks) */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Whether the user can draw at the current mouse position (based on road validity checks)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlignCurveToRoad_MetaData[] = {
		{ "Category", "Road Drawing" },
		{ "Comment", "/** Whether to align the curve point to the merge source road each frame */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Whether to align the curve point to the merge source road each frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergeSourceRoad_MetaData[] = {
		{ "Category", "Road Drawing" },
		{ "Comment", "/** The road we are merging from (used for curved merge alignment) */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "The road we are merging from (used for curved merge alignment)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergeSourceEdge_MetaData[] = {
		{ "Category", "Road Drawing" },
		{ "Comment", "/** The outer edge curve we are merging from (used for precise curve alignment) */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "The outer edge curve we are merging from (used for precise curve alignment)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergeStartDistance_MetaData[] = {
		{ "Category", "Road Drawing" },
		{ "Comment", "/** The distance along the merge source road where the merge started */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "The distance along the merge source road where the merge started" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateBorderLaneForMerge_MetaData[] = {
		{ "Category", "Road Drawing|Merge" },
		{ "Comment", "/** Whether to automatically create a border lane for merge roads (experimental - may cause issues) */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Whether to automatically create a border lane for merge roads (experimental - may cause issues)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBorderWidth_MetaData[] = {
		{ "Category", "Road Drawing|Merge" },
		{ "Comment", "/** Default width for the border lane created during merge (in cm) */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Default width for the border lane created during merge (in cm)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergeEdgeProximityThreshold_MetaData[] = {
		{ "Category", "Road Drawing|Merge" },
		{ "Comment", "/** Distance threshold from road start/end to trigger curve projection mode (in cm). Not used for endpoint topology. */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Distance threshold from road start/end to trigger curve projection mode (in cm). Not used for endpoint topology." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMergeProjectionDistance_MetaData[] = {
		{ "Category", "Road Drawing|Merge" },
		{ "Comment", "/** Maximum projection distance for edge-case merges (in cm) */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Maximum projection distance for edge-case merges (in cm)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergeStartPointInwardOffset_MetaData[] = {
		{ "Category", "Road Drawing|Merge" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Inward offset (in cm) applied to the merge start point (control spline point index 0), shifting it\n\x09 * from the source road's outer edge slightly towards the road center. This helps shallow merges produce\n\x09 * a reliable overlap/intersection so corners/cuts are formed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Inward offset (in cm) applied to the merge start point (control spline point index 0), shifting it\nfrom the source road's outer edge slightly towards the road center. This helps shallow merges produce\na reliable overlap/intersection so corners/cuts are formed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergeCurvePointOutwardOffset_MetaData[] = {
		{ "Category", "Road Drawing|Merge" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Outward offset (in cm) applied to the merge curve point (typically control spline point index 1)\n\x09 * in the direction of the mouse location. This helps ensure the merge road overlaps/intersects the\n\x09 * source road enough for corner/cut generation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Outward offset (in cm) applied to the merge curve point (typically control spline point index 1)\nin the direction of the mouse location. This helps ensure the merge road overlaps/intersects the\nsource road enough for corner/cut generation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableSnapping_MetaData[] = {
		{ "Category", "Road Drawing|Snapping" },
		{ "Comment", "/** When true, disables all endpoint and mid-road snapping while drawing. Can be toggled via Blueprint/UI. */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "When true, disables all endpoint and mid-road snapping while drawing. Can be toggled via Blueprint/UI." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurvePoint_MetaData[] = {
		{ "Category", "Road Drawing" },
		{ "Comment", "/** Curve center point for curved road drawing */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Curve center point for curved road drawing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlignGeometricCenterlinesWhenSnapping_MetaData[] = {
		{ "Category", "Road Drawing|Snapping" },
		{ "Comment", "/**\n\x09 * When enabled, endpoint snapping aligns the geometric centerlines of both roads\n\x09 * rather than aligning raw ControlSpline endpoints. This ensures the physical road\n\x09 * centers match even when lane layouts are asymmetric.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "When enabled, endpoint snapping aligns the geometric centerlines of both roads\nrather than aligning raw ControlSpline endpoints. This ensures the physical road\ncenters match even when lane layouts are asymmetric." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapEndpointAdditionalLateralOffset_MetaData[] = {
		{ "Category", "Road Drawing|Snapping" },
		{ "Comment", "/**\n\x09 * Additional lateral offset (in cm) applied to the snapped endpoint along the target\n\x09 * road's right vector. Positive values shift right, negative shift left.\n\x09 * Only used when bAlignGeometricCenterlinesWhenSnapping is true.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Additional lateral offset (in cm) applied to the snapped endpoint along the target\nroad's right vector. Positive values shift right, negative shift left.\nOnly used when bAlignGeometricCenterlinesWhenSnapping is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedTargetNetwork_MetaData[] = {
		{ "Category", "Road Network" },
		{ "Comment", "/** Explicitly selected target network for new road placement. Null = auto-resolve from active road parent or first-found. */" },
		{ "ModuleRelativePath", "Public/RoadController.h" },
		{ "ToolTip", "Explicitly selected target network for new road placement. Null = auto-resolve from active road parent or first-found." },
	};
#endif // WITH_METADATA

// ********** Begin Class URoadController constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveRoad;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DrawState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DrawState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurveMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfLanes;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SelectedPreset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedPresetInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewRoad;
	static void NewProp_bParallelDraw_SetBit(void* Obj)
	{
		((URoadController*)Obj)->bParallelDraw = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bParallelDraw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ParallelDrawOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushVerticalOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParallelActiveRoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParallelPreviewRoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Brush;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BrushClass;
	static void NewProp_bUnrestrictedMode_SetBit(void* Obj)
	{
		((URoadController*)Obj)->bUnrestrictedMode = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUnrestrictedMode;
	static void NewProp_bEnableLandscapeSplineMirror_SetBit(void* Obj)
	{
		((URoadController*)Obj)->bEnableLandscapeSplineMirror = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLandscapeSplineMirror;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LandscapeSplineFalloff;
	static void NewProp_bEnableLandscapePaint_SetBit(void* Obj)
	{
		((URoadController*)Obj)->bEnableLandscapePaint = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLandscapePaint;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LandscapePaintLayerName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LandscapePaintWidthExtension;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LandscapePaintFalloff;
	static void NewProp_bCanDraw_SetBit(void* Obj)
	{
		((URoadController*)Obj)->bCanDraw = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanDraw;
	static void NewProp_bAlignCurveToRoad_SetBit(void* Obj)
	{
		((URoadController*)Obj)->bAlignCurveToRoad = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignCurveToRoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MergeSourceRoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MergeSourceEdge;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MergeStartDistance;
	static void NewProp_bCreateBorderLaneForMerge_SetBit(void* Obj)
	{
		((URoadController*)Obj)->bCreateBorderLaneForMerge = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateBorderLaneForMerge;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DefaultBorderWidth;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MergeEdgeProximityThreshold;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxMergeProjectionDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MergeStartPointInwardOffset;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MergeCurvePointOutwardOffset;
	static void NewProp_bDisableSnapping_SetBit(void* Obj)
	{
		((URoadController*)Obj)->bDisableSnapping = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableSnapping;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurvePoint;
	static void NewProp_bAlignGeometricCenterlinesWhenSnapping_SetBit(void* Obj)
	{
		((URoadController*)Obj)->bAlignGeometricCenterlinesWhenSnapping = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignGeometricCenterlinesWhenSnapping;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SnapEndpointAdditionalLateralOffset;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SelectedTargetNetwork;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URoadController constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateRoadController"), .Pointer = &URoadController::execCreateRoadController },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URoadController_CreateRoadController, "CreateRoadController" }, // 110c29fe829a242d642338424f6b0890ec4258ac
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URoadController Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ActiveRoad = { "ActiveRoad", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadController, ActiveRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveRoad_MetaData), NewProp_ActiveRoad_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DrawState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DrawState = { "DrawState", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(URoadController, DrawState), Z_Construct_UEnum_RoadBLDEditorToolkit_EControllerDrawState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawState_MetaData), NewProp_DrawState_MetaData) }; // 17fa038c7319651ae47cdc26d92431eff798af3d
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CurveMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CurveMode = { "CurveMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(URoadController, CurveMode), Z_Construct_UEnum_RoadBLDEditorToolkit_ECurveMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveMode_MetaData), NewProp_CurveMode_MetaData) }; // e4a7b82bdf1a10dcae18317fb3038e401c2c2ec0
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxNumberOfLanes = { "MaxNumberOfLanes", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(URoadController, MaxNumberOfLanes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumberOfLanes_MetaData), NewProp_MaxNumberOfLanes_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_SelectedPreset = { "SelectedPreset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(URoadController, SelectedPreset), Z_Construct_UClass_UClass, Z_Construct_UClass_UDynamicRoadDrawPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedPreset_MetaData), NewProp_SelectedPreset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SelectedPresetInstance = { "SelectedPresetInstance", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadController, SelectedPresetInstance), Z_Construct_UClass_UDynamicRoadDrawPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedPresetInstance_MetaData), NewProp_SelectedPresetInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PreviewRoad = { "PreviewRoad", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadController, PreviewRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewRoad_MetaData), NewProp_PreviewRoad_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bParallelDraw = { "bParallelDraw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadController), &UHT_STATICS::NewProp_bParallelDraw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bParallelDraw_MetaData), NewProp_bParallelDraw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ParallelDrawOffset = { "ParallelDrawOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URoadController, ParallelDrawOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParallelDrawOffset_MetaData), NewProp_ParallelDrawOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BrushVerticalOffset = { "BrushVerticalOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URoadController, BrushVerticalOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushVerticalOffset_MetaData), NewProp_BrushVerticalOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ParallelActiveRoad = { "ParallelActiveRoad", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadController, ParallelActiveRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParallelActiveRoad_MetaData), NewProp_ParallelActiveRoad_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ParallelPreviewRoad = { "ParallelPreviewRoad", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadController, ParallelPreviewRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParallelPreviewRoad_MetaData), NewProp_ParallelPreviewRoad_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadController, Brush), Z_Construct_UClass_ARoadBrushActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brush_MetaData), NewProp_Brush_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_BrushClass = { "BrushClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(URoadController, BrushClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ARoadBrushActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushClass_MetaData), NewProp_BrushClass_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUnrestrictedMode = { "bUnrestrictedMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadController), &UHT_STATICS::NewProp_bUnrestrictedMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUnrestrictedMode_MetaData), NewProp_bUnrestrictedMode_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableLandscapeSplineMirror = { "bEnableLandscapeSplineMirror", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadController), &UHT_STATICS::NewProp_bEnableLandscapeSplineMirror_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableLandscapeSplineMirror_MetaData), NewProp_bEnableLandscapeSplineMirror_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LandscapeSplineFalloff = { "LandscapeSplineFalloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URoadController, LandscapeSplineFalloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeSplineFalloff_MetaData), NewProp_LandscapeSplineFalloff_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableLandscapePaint = { "bEnableLandscapePaint", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadController), &UHT_STATICS::NewProp_bEnableLandscapePaint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableLandscapePaint_MetaData), NewProp_bEnableLandscapePaint_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_LandscapePaintLayerName = { "LandscapePaintLayerName", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(URoadController, LandscapePaintLayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapePaintLayerName_MetaData), NewProp_LandscapePaintLayerName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LandscapePaintWidthExtension = { "LandscapePaintWidthExtension", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URoadController, LandscapePaintWidthExtension), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapePaintWidthExtension_MetaData), NewProp_LandscapePaintWidthExtension_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LandscapePaintFalloff = { "LandscapePaintFalloff", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URoadController, LandscapePaintFalloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapePaintFalloff_MetaData), NewProp_LandscapePaintFalloff_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCanDraw = { "bCanDraw", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadController), &UHT_STATICS::NewProp_bCanDraw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanDraw_MetaData), NewProp_bCanDraw_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAlignCurveToRoad = { "bAlignCurveToRoad", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadController), &UHT_STATICS::NewProp_bAlignCurveToRoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlignCurveToRoad_MetaData), NewProp_bAlignCurveToRoad_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MergeSourceRoad = { "MergeSourceRoad", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadController, MergeSourceRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergeSourceRoad_MetaData), NewProp_MergeSourceRoad_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MergeSourceEdge = { "MergeSourceEdge", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadController, MergeSourceEdge), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergeSourceEdge_MetaData), NewProp_MergeSourceEdge_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_MergeStartDistance = { "MergeStartDistance", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadController, MergeStartDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergeStartDistance_MetaData), NewProp_MergeStartDistance_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCreateBorderLaneForMerge = { "bCreateBorderLaneForMerge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadController), &UHT_STATICS::NewProp_bCreateBorderLaneForMerge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateBorderLaneForMerge_MetaData), NewProp_bCreateBorderLaneForMerge_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_DefaultBorderWidth = { "DefaultBorderWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadController, DefaultBorderWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBorderWidth_MetaData), NewProp_DefaultBorderWidth_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_MergeEdgeProximityThreshold = { "MergeEdgeProximityThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadController, MergeEdgeProximityThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergeEdgeProximityThreshold_MetaData), NewProp_MergeEdgeProximityThreshold_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_MaxMergeProjectionDistance = { "MaxMergeProjectionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadController, MaxMergeProjectionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMergeProjectionDistance_MetaData), NewProp_MaxMergeProjectionDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_MergeStartPointInwardOffset = { "MergeStartPointInwardOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadController, MergeStartPointInwardOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergeStartPointInwardOffset_MetaData), NewProp_MergeStartPointInwardOffset_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_MergeCurvePointOutwardOffset = { "MergeCurvePointOutwardOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadController, MergeCurvePointOutwardOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergeCurvePointOutwardOffset_MetaData), NewProp_MergeCurvePointOutwardOffset_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDisableSnapping = { "bDisableSnapping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadController), &UHT_STATICS::NewProp_bDisableSnapping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableSnapping_MetaData), NewProp_bDisableSnapping_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CurvePoint = { "CurvePoint", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URoadController, CurvePoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurvePoint_MetaData), NewProp_CurvePoint_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAlignGeometricCenterlinesWhenSnapping = { "bAlignGeometricCenterlinesWhenSnapping", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadController), &UHT_STATICS::NewProp_bAlignGeometricCenterlinesWhenSnapping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlignGeometricCenterlinesWhenSnapping_MetaData), NewProp_bAlignGeometricCenterlinesWhenSnapping_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_SnapEndpointAdditionalLateralOffset = { "SnapEndpointAdditionalLateralOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadController, SnapEndpointAdditionalLateralOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapEndpointAdditionalLateralOffset_MetaData), NewProp_SnapEndpointAdditionalLateralOffset_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams UHT_STATICS::NewProp_SelectedTargetNetwork = { "SelectedTargetNetwork", nullptr, (EPropertyFlags)0x0024080000000004, UECodeGen_Private::EPropertyGenFlags::WeakObject, nullptr, nullptr, 1, STRUCT_OFFSET(URoadController, SelectedTargetNetwork), Z_Construct_UClass_ADynamicRoadNetwork, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedTargetNetwork_MetaData), NewProp_SelectedTargetNetwork_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DrawState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DrawState,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurveMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurveMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxNumberOfLanes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedPreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedPresetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviewRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bParallelDraw,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParallelDrawOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BrushVerticalOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParallelActiveRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParallelPreviewRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Brush,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BrushClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUnrestrictedMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableLandscapeSplineMirror,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapeSplineFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableLandscapePaint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapePaintLayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapePaintWidthExtension,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapePaintFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCanDraw,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAlignCurveToRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MergeSourceRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MergeSourceEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MergeStartDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCreateBorderLaneForMerge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultBorderWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MergeEdgeProximityThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxMergeProjectionDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MergeStartPointInwardOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MergeCurvePointOutwardOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDisableSnapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurvePoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAlignGeometricCenterlinesWhenSnapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SnapEndpointAdditionalLateralOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedTargetNetwork,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URoadController Property Definitions ***************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldBLDEditController,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoadController,
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
static void URoadController_StaticRegisterNativesURoadController()
{
	UClass* Class = URoadController::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URoadController;
UClass* Z_Construct_UClass_URoadController(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoadController;
		if (!Z_Registration_Info_UClass_URoadController.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadController"),
				Z_Registration_Info_UClass_URoadController.InnerSingleton,
				URoadController_StaticRegisterNativesURoadController,
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
		return Z_Registration_Info_UClass_URoadController.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoadController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoadController.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoadController.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoadController);
URoadController::~URoadController() {}
// ********** End Class URoadController ************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h__Script_RoadBLDEditorToolkit_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RoadBLDEditorToolkit_EControllerDrawState, TEXT("EControllerDrawState"), &ZRIE_EControllerDrawState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 402260876U) },
		{ Z_Construct_UEnum_RoadBLDEditorToolkit_ECurveMode, TEXT("ECurveMode"), &ZRIE_ECurveMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3836196907U) },
		{ Z_Construct_UEnum_RoadBLDEditorToolkit_EAttachedElement, TEXT("EAttachedElement"), &ZRIE_EAttachedElement, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2733003753U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FRoadLandscapePaintSettings, Z_Construct_UScriptStruct_FRoadLandscapePaintSettings_Statics::NewStructOps, TEXT("RoadLandscapePaintSettings"),&Z_Registration_Info_UScriptStruct_FRoadLandscapePaintSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadLandscapePaintSettings), 3722673841U) },
		{ Z_Construct_UScriptStruct_FDynamicRoadControllerTarget, Z_Construct_UScriptStruct_FDynamicRoadControllerTarget_Statics::NewStructOps, TEXT("DynamicRoadControllerTarget"),&Z_Registration_Info_UScriptStruct_FDynamicRoadControllerTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDynamicRoadControllerTarget), 1140560874U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDynamicRoadDrawParameters, TEXT("UDynamicRoadDrawParameters"), &Z_Registration_Info_UClass_UDynamicRoadDrawParameters, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicRoadDrawParameters), 1046106138U) },
		{ Z_Construct_UClass_UDynamicRoadDrawSectionParameters, TEXT("UDynamicRoadDrawSectionParameters"), &Z_Registration_Info_UClass_UDynamicRoadDrawSectionParameters, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicRoadDrawSectionParameters), 4014252310U) },
		{ Z_Construct_UClass_UPointCurve, TEXT("UPointCurve"), &Z_Registration_Info_UClass_UPointCurve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPointCurve), 1213904972U) },
		{ Z_Construct_UClass_ARoadBrushActor, TEXT("ARoadBrushActor"), &Z_Registration_Info_UClass_ARoadBrushActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoadBrushActor), 441886051U) },
		{ Z_Construct_UClass_URoadController, TEXT("URoadController"), &Z_Registration_Info_UClass_URoadController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoadController), 4034478656U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h__Script_RoadBLDEditorToolkit_8e852574196ced1a067efe5f9ccc5ef61dc04bfb{
	TEXT("/Script/RoadBLDEditorToolkit"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
