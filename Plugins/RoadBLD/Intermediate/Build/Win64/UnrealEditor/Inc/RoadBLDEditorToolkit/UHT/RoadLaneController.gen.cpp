// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoadLaneController.h"
#include "DynamicRoad/ClothoidCurve.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRoadLaneController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_ELaneType(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FOffsetPoint(ETypeConstructPhase);
WORLDBLDEDITOR_API UClass* Z_Construct_UClass_UWorldBLDEditController(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoad(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadLane(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UEdgeCurve(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ULanePreset(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadBLDSidewalkPreset(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ARoadGeo(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_USidewalk(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneToolDomain(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneToolMode(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneToolState(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadLaneController(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FRoadLanePointMetadata(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadLaneController(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ELaneToolState ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneToolState_Statics
template<> ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ELaneToolState>()
{
	return Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneToolState(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AddLane.DisplayName", "Add Lane" },
		{ "AddLane.Name", "ELaneToolState::AddLane" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Enum defining the current state of the RoadLaneController tool\n */" },
		{ "EditOffsets.DisplayName", "Edit Offsets" },
		{ "EditOffsets.Name", "ELaneToolState::EditOffsets" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "SelectEdge.DisplayName", "Select Edge" },
		{ "SelectEdge.Name", "ELaneToolState::SelectEdge" },
		{ "SelectLane.DisplayName", "Select Lane" },
		{ "SelectLane.Name", "ELaneToolState::SelectLane" },
		{ "SliceStrip.DisplayName", "Slice Strip" },
		{ "SliceStrip.Name", "ELaneToolState::SliceStrip" },
		{ "ToolTip", "Enum defining the current state of the RoadLaneController tool" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELaneToolState::SelectLane", (int64)ELaneToolState::SelectLane },
		{ "ELaneToolState::SelectEdge", (int64)ELaneToolState::SelectEdge },
		{ "ELaneToolState::EditOffsets", (int64)ELaneToolState::EditOffsets },
		{ "ELaneToolState::AddLane", (int64)ELaneToolState::AddLane },
		{ "ELaneToolState::SliceStrip", (int64)ELaneToolState::SliceStrip },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	"ELaneToolState",
	"ELaneToolState",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ELaneToolState;
UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneToolState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ELaneToolState.OuterSingleton)
		{
			ZRIE_ELaneToolState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneToolState, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("ELaneToolState"));
		}
		return ZRIE_ELaneToolState.OuterSingleton;
	}
	if (!ZRIE_ELaneToolState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ELaneToolState.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ELaneToolState.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ELaneToolState **************************************************************

// ********** Begin Enum ELaneToolDomain ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneToolDomain_Statics
template<> ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ELaneToolDomain>()
{
	return Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneToolDomain(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Lanes.DisplayName", "Lanes" },
		{ "Lanes.Name", "ELaneToolDomain::Lanes" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "Sidewalks.DisplayName", "Sidewalks" },
		{ "Sidewalks.Name", "ELaneToolDomain::Sidewalks" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELaneToolDomain::Lanes", (int64)ELaneToolDomain::Lanes },
		{ "ELaneToolDomain::Sidewalks", (int64)ELaneToolDomain::Sidewalks },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	"ELaneToolDomain",
	"ELaneToolDomain",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ELaneToolDomain;
UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneToolDomain(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ELaneToolDomain.OuterSingleton)
		{
			ZRIE_ELaneToolDomain.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneToolDomain, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("ELaneToolDomain"));
		}
		return ZRIE_ELaneToolDomain.OuterSingleton;
	}
	if (!ZRIE_ELaneToolDomain.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ELaneToolDomain.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ELaneToolDomain.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ELaneToolDomain *************************************************************

// ********** Begin Enum ELaneToolMode *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneToolMode_Statics
template<> ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ELaneToolMode>()
{
	return Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneToolMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Add.DisplayName", "Add" },
		{ "Add.Name", "ELaneToolMode::Add" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "Select.DisplayName", "Select/Delete" },
		{ "Select.Name", "ELaneToolMode::Select" },
		{ "Slice.DisplayName", "Slice" },
		{ "Slice.Name", "ELaneToolMode::Slice" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELaneToolMode::Select", (int64)ELaneToolMode::Select },
		{ "ELaneToolMode::Add", (int64)ELaneToolMode::Add },
		{ "ELaneToolMode::Slice", (int64)ELaneToolMode::Slice },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	"ELaneToolMode",
	"ELaneToolMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ELaneToolMode;
UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneToolMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ELaneToolMode.OuterSingleton)
		{
			ZRIE_ELaneToolMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneToolMode, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("ELaneToolMode"));
		}
		return ZRIE_ELaneToolMode.OuterSingleton;
	}
	if (!ZRIE_ELaneToolMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ELaneToolMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ELaneToolMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ELaneToolMode ***************************************************************

// ********** Begin ScriptStruct FRoadLanePointMetadata ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRoadLanePointMetadata_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRoadLanePointMetadata>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRoadLanePointMetadata); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Metadata for each offset point gizmo in the RoadLaneController\n */" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "ToolTip", "Metadata for each offset point gizmo in the RoadLaneController" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "Category", "Point" },
		{ "Comment", "// Display name or identifier for this point\n" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "ToolTip", "Display name or identifier for this point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Point" },
		{ "Comment", "// Optional visual color for the point\n" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "ToolTip", "Optional visual color for the point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "Point" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Point" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterEdgeOffsets_MetaData[] = {
		{ "Category", "Point" },
		{ "Comment", "// Track offsets for outer EdgeCurves (used when bApplyToOuterOffsets is enabled)\n" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "ToolTip", "Track offsets for outer EdgeCurves (used when bApplyToOuterOffsets is enabled)" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRoadLanePointMetadata constinit property declarations ************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Label;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Offset;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_OuterEdgeOffsets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OuterEdgeOffsets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRoadLanePointMetadata constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadLanePointMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRoadLanePointMetadata Property Definitions ***********************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadLanePointMetadata, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadLanePointMetadata, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadLanePointMetadata, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadLanePointMetadata, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_OuterEdgeOffsets_Inner = { "OuterEdgeOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OuterEdgeOffsets = { "OuterEdgeOffsets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadLanePointMetadata, OuterEdgeOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterEdgeOffsets_MetaData), NewProp_OuterEdgeOffsets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OuterEdgeOffsets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OuterEdgeOffsets,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRoadLanePointMetadata Property Definitions *************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	&NewStructOps,
	"RoadLanePointMetadata",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRoadLanePointMetadata>(),
	alignof(FRoadLanePointMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRoadLanePointMetadata;
UScriptStruct* Z_Construct_UScriptStruct_FRoadLanePointMetadata(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRoadLanePointMetadata.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRoadLanePointMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadLanePointMetadata, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("RoadLanePointMetadata"));
		}
		return Z_Registration_Info_UScriptStruct_FRoadLanePointMetadata.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRoadLanePointMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRoadLanePointMetadata.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRoadLanePointMetadata.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRoadLanePointMetadata **********************************************

// ********** Begin Class URoadLaneController Function ApplySidewalkPresetToSelection **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadLaneController_ApplySidewalkPresetToSelection_Statics
struct UHT_STATICS
{
	struct RoadLaneController_eventApplySidewalkPresetToSelection_Parms
	{
		TSubclassOf<URoadBLDSidewalkPreset> PresetClass;
		bool bConfirmedReplace;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadLane" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplySidewalkPresetToSelection constinit property declarations ********
	static const UECodeGen_Private::FClassPropertyParams NewProp_PresetClass;
	static void NewProp_bConfirmedReplace_SetBit(void* Obj)
	{
		((RoadLaneController_eventApplySidewalkPresetToSelection_Parms*)Obj)->bConfirmedReplace = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConfirmedReplace;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RoadLaneController_eventApplySidewalkPresetToSelection_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplySidewalkPresetToSelection constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplySidewalkPresetToSelection Property Definitions *******************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_PresetClass = { "PresetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(RoadLaneController_eventApplySidewalkPresetToSelection_Parms, PresetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URoadBLDSidewalkPreset, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bConfirmedReplace = { "bConfirmedReplace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadLaneController_eventApplySidewalkPresetToSelection_Parms), &UHT_STATICS::NewProp_bConfirmedReplace_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadLaneController_eventApplySidewalkPresetToSelection_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PresetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bConfirmedReplace,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ApplySidewalkPresetToSelection Property Definitions *********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadLaneController, nullptr, "ApplySidewalkPresetToSelection", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadLaneController_eventApplySidewalkPresetToSelection_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadLaneController_eventApplySidewalkPresetToSelection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadLaneController_ApplySidewalkPresetToSelection(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadLaneController::execApplySidewalkPresetToSelection)
{
	P_GET_OBJECT(UClass,Z_Param_PresetClass);
	P_GET_UBOOL(Z_Param_bConfirmedReplace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ApplySidewalkPresetToSelection(Z_Param_PresetClass,Z_Param_bConfirmedReplace);
	P_NATIVE_END;
}
// ********** End Class URoadLaneController Function ApplySidewalkPresetToSelection ****************

// ********** Begin Class URoadLaneController Function ConfigureSelectedLaneFromPreset *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadLaneController_ConfigureSelectedLaneFromPreset_Statics
struct UHT_STATICS
{
	struct RoadLaneController_eventConfigureSelectedLaneFromPreset_Parms
	{
		ELaneType LaneType;
		UMaterialInterface* Material;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadLane" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConfigureSelectedLaneFromPreset constinit property declarations *******
	static const UECodeGen_Private::FBytePropertyParams NewProp_LaneType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LaneType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RoadLaneController_eventConfigureSelectedLaneFromPreset_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConfigureSelectedLaneFromPreset constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConfigureSelectedLaneFromPreset Property Definitions ******************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_LaneType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_LaneType = { "LaneType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(RoadLaneController_eventConfigureSelectedLaneFromPreset_Parms, LaneType), Z_Construct_UEnum_RoadBLDRuntime_ELaneType, METADATA_PARAMS(0, nullptr) }; // 9d17033d2bcb98b8528ecf74831136f6a6528d00
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadLaneController_eventConfigureSelectedLaneFromPreset_Parms, Material), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadLaneController_eventConfigureSelectedLaneFromPreset_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaneType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaneType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ConfigureSelectedLaneFromPreset Property Definitions ********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadLaneController, nullptr, "ConfigureSelectedLaneFromPreset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadLaneController_eventConfigureSelectedLaneFromPreset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadLaneController_eventConfigureSelectedLaneFromPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadLaneController_ConfigureSelectedLaneFromPreset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadLaneController::execConfigureSelectedLaneFromPreset)
{
	P_GET_ENUM(ELaneType,Z_Param_LaneType);
	P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ConfigureSelectedLaneFromPreset(ELaneType(Z_Param_LaneType),Z_Param_Material);
	P_NATIVE_END;
}
// ********** End Class URoadLaneController Function ConfigureSelectedLaneFromPreset ***************

// ********** Begin Class URoadLaneController Function CreateRoadLaneController ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadLaneController_CreateRoadLaneController_Statics
struct UHT_STATICS
{
	struct RoadLaneController_eventCreateRoadLaneController_Parms
	{
		URoadLaneController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadLane" },
		{ "Comment", "/**\n\x09 * Static factory method to create a RoadLaneController\n\x09 * @return A new instance of URoadLaneController\n\x09 */" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "ToolTip", "Static factory method to create a RoadLaneController\n@return A new instance of URoadLaneController" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateRoadLaneController constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateRoadLaneController constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateRoadLaneController Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadLaneController_eventCreateRoadLaneController_Parms, ReturnValue), Z_Construct_UClass_URoadLaneController, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateRoadLaneController Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadLaneController, nullptr, "CreateRoadLaneController", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadLaneController_eventCreateRoadLaneController_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadLaneController_eventCreateRoadLaneController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadLaneController_CreateRoadLaneController(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadLaneController::execCreateRoadLaneController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URoadLaneController**)Z_Param__Result=URoadLaneController::CreateRoadLaneController();
	P_NATIVE_END;
}
// ********** End Class URoadLaneController Function CreateRoadLaneController **********************

// ********** Begin Class URoadLaneController Function GetToolMode *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadLaneController_GetToolMode_Statics
struct UHT_STATICS
{
	struct RoadLaneController_eventGetToolMode_Parms
	{
		ELaneToolMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadLane" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetToolMode constinit property declarations ***************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetToolMode constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetToolMode Property Definitions **************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(RoadLaneController_eventGetToolMode_Parms, ReturnValue), Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneToolMode, METADATA_PARAMS(0, nullptr) }; // 0b9783852e7b9ebdc76de9ae04086f6b86128b0b
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetToolMode Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadLaneController, nullptr, "GetToolMode", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadLaneController_eventGetToolMode_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadLaneController_eventGetToolMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadLaneController_GetToolMode(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadLaneController::execGetToolMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ELaneToolMode*)Z_Param__Result=P_THIS->GetToolMode();
	P_NATIVE_END;
}
// ********** End Class URoadLaneController Function GetToolMode ***********************************

// ********** Begin Class URoadLaneController Function HasSelectedStrip ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadLaneController_HasSelectedStrip_Statics
struct UHT_STATICS
{
	struct RoadLaneController_eventHasSelectedStrip_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadLane" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasSelectedStrip constinit property declarations **********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RoadLaneController_eventHasSelectedStrip_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasSelectedStrip constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasSelectedStrip Property Definitions *********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadLaneController_eventHasSelectedStrip_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HasSelectedStrip Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadLaneController, nullptr, "HasSelectedStrip", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadLaneController_eventHasSelectedStrip_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadLaneController_eventHasSelectedStrip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadLaneController_HasSelectedStrip(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadLaneController::execHasSelectedStrip)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasSelectedStrip();
	P_NATIVE_END;
}
// ********** End Class URoadLaneController Function HasSelectedStrip ******************************

// ********** Begin Class URoadLaneController Function IsSelectedSidewalkPartition *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadLaneController_IsSelectedSidewalkPartition_Statics
struct UHT_STATICS
{
	struct RoadLaneController_eventIsSelectedSidewalkPartition_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadLane" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsSelectedSidewalkPartition constinit property declarations ***********
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RoadLaneController_eventIsSelectedSidewalkPartition_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsSelectedSidewalkPartition constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsSelectedSidewalkPartition Property Definitions **********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadLaneController_eventIsSelectedSidewalkPartition_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsSelectedSidewalkPartition Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadLaneController, nullptr, "IsSelectedSidewalkPartition", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadLaneController_eventIsSelectedSidewalkPartition_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadLaneController_eventIsSelectedSidewalkPartition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadLaneController_IsSelectedSidewalkPartition(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadLaneController::execIsSelectedSidewalkPartition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSelectedSidewalkPartition();
	P_NATIVE_END;
}
// ********** End Class URoadLaneController Function IsSelectedSidewalkPartition *******************

// ********** Begin Class URoadLaneController Function RemoveSelectedSidewalk **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadLaneController_RemoveSelectedSidewalk_Statics
struct UHT_STATICS
{
	struct RoadLaneController_eventRemoveSelectedSidewalk_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadLane" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveSelectedSidewalk constinit property declarations ****************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RoadLaneController_eventRemoveSelectedSidewalk_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveSelectedSidewalk constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveSelectedSidewalk Property Definitions ***************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadLaneController_eventRemoveSelectedSidewalk_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RemoveSelectedSidewalk Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadLaneController, nullptr, "RemoveSelectedSidewalk", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadLaneController_eventRemoveSelectedSidewalk_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadLaneController_eventRemoveSelectedSidewalk_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadLaneController_RemoveSelectedSidewalk(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadLaneController::execRemoveSelectedSidewalk)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveSelectedSidewalk();
	P_NATIVE_END;
}
// ********** End Class URoadLaneController Function RemoveSelectedSidewalk ************************

// ********** Begin Class URoadLaneController Function RemoveSelectedStrip *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadLaneController_RemoveSelectedStrip_Statics
struct UHT_STATICS
{
	struct RoadLaneController_eventRemoveSelectedStrip_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadLane" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveSelectedStrip constinit property declarations *******************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RoadLaneController_eventRemoveSelectedStrip_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveSelectedStrip constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveSelectedStrip Property Definitions ******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadLaneController_eventRemoveSelectedStrip_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RemoveSelectedStrip Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadLaneController, nullptr, "RemoveSelectedStrip", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadLaneController_eventRemoveSelectedStrip_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadLaneController_eventRemoveSelectedStrip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadLaneController_RemoveSelectedStrip(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadLaneController::execRemoveSelectedStrip)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveSelectedStrip();
	P_NATIVE_END;
}
// ********** End Class URoadLaneController Function RemoveSelectedStrip ***************************

// ********** Begin Class URoadLaneController Function SetDomain ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadLaneController_SetDomain_Statics
struct UHT_STATICS
{
	struct RoadLaneController_eventSetDomain_Parms
	{
		ELaneToolDomain NewDomain;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadLane" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDomain constinit property declarations *****************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewDomain_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewDomain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDomain constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDomain Property Definitions ****************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_NewDomain_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_NewDomain = { "NewDomain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(RoadLaneController_eventSetDomain_Parms, NewDomain), Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneToolDomain, METADATA_PARAMS(0, nullptr) }; // dd812bc194730326008da5dcb6c58a953bd288d7
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewDomain_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewDomain,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetDomain Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadLaneController, nullptr, "SetDomain", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadLaneController_eventSetDomain_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadLaneController_eventSetDomain_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadLaneController_SetDomain(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadLaneController::execSetDomain)
{
	P_GET_ENUM(ELaneToolDomain,Z_Param_NewDomain);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDomain(ELaneToolDomain(Z_Param_NewDomain));
	P_NATIVE_END;
}
// ********** End Class URoadLaneController Function SetDomain *************************************

// ********** Begin Class URoadLaneController Function SetLockWidths *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadLaneController_SetLockWidths_Statics
struct UHT_STATICS
{
	struct RoadLaneController_eventSetLockWidths_Parms
	{
		bool bLock;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadLane" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLockWidths constinit property declarations *************************
	static void NewProp_bLock_SetBit(void* Obj)
	{
		((RoadLaneController_eventSetLockWidths_Parms*)Obj)->bLock = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLockWidths constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLockWidths Property Definitions ************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLock = { "bLock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadLaneController_eventSetLockWidths_Parms), &UHT_STATICS::NewProp_bLock_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLock,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetLockWidths Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadLaneController, nullptr, "SetLockWidths", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadLaneController_eventSetLockWidths_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadLaneController_eventSetLockWidths_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadLaneController_SetLockWidths(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadLaneController::execSetLockWidths)
{
	P_GET_UBOOL(Z_Param_bLock);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLockWidths(Z_Param_bLock);
	P_NATIVE_END;
}
// ********** End Class URoadLaneController Function SetLockWidths *********************************

// ********** Begin Class URoadLaneController Function SetSelectedPartitionMaterial ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadLaneController_SetSelectedPartitionMaterial_Statics
struct UHT_STATICS
{
	struct RoadLaneController_eventSetSelectedPartitionMaterial_Parms
	{
		UMaterialInterface* Material;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadLane" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSelectedPartitionMaterial constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSelectedPartitionMaterial constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSelectedPartitionMaterial Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadLaneController_eventSetSelectedPartitionMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetSelectedPartitionMaterial Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadLaneController, nullptr, "SetSelectedPartitionMaterial", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadLaneController_eventSetSelectedPartitionMaterial_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadLaneController_eventSetSelectedPartitionMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadLaneController_SetSelectedPartitionMaterial(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadLaneController::execSetSelectedPartitionMaterial)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectedPartitionMaterial(Z_Param_Material);
	P_NATIVE_END;
}
// ********** End Class URoadLaneController Function SetSelectedPartitionMaterial ******************

// ********** Begin Class URoadLaneController Function SetSelectedPartitionWalkable ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadLaneController_SetSelectedPartitionWalkable_Statics
struct UHT_STATICS
{
	struct RoadLaneController_eventSetSelectedPartitionWalkable_Parms
	{
		bool bWalkable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadLane" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSelectedPartitionWalkable constinit property declarations **********
	static void NewProp_bWalkable_SetBit(void* Obj)
	{
		((RoadLaneController_eventSetSelectedPartitionWalkable_Parms*)Obj)->bWalkable = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWalkable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSelectedPartitionWalkable constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSelectedPartitionWalkable Property Definitions *********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bWalkable = { "bWalkable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadLaneController_eventSetSelectedPartitionWalkable_Parms), &UHT_STATICS::NewProp_bWalkable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bWalkable,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetSelectedPartitionWalkable Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadLaneController, nullptr, "SetSelectedPartitionWalkable", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadLaneController_eventSetSelectedPartitionWalkable_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadLaneController_eventSetSelectedPartitionWalkable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadLaneController_SetSelectedPartitionWalkable(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadLaneController::execSetSelectedPartitionWalkable)
{
	P_GET_UBOOL(Z_Param_bWalkable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectedPartitionWalkable(Z_Param_bWalkable);
	P_NATIVE_END;
}
// ********** End Class URoadLaneController Function SetSelectedPartitionWalkable ******************

// ********** Begin Class URoadLaneController Function SetToolMode *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadLaneController_SetToolMode_Statics
struct UHT_STATICS
{
	struct RoadLaneController_eventSetToolMode_Parms
	{
		ELaneToolMode NewMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadLane" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetToolMode constinit property declarations ***************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetToolMode constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetToolMode Property Definitions **************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_NewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(RoadLaneController_eventSetToolMode_Parms, NewMode), Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneToolMode, METADATA_PARAMS(0, nullptr) }; // 0b9783852e7b9ebdc76de9ae04086f6b86128b0b
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewMode,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetToolMode Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadLaneController, nullptr, "SetToolMode", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadLaneController_eventSetToolMode_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadLaneController_eventSetToolMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadLaneController_SetToolMode(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadLaneController::execSetToolMode)
{
	P_GET_ENUM(ELaneToolMode,Z_Param_NewMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetToolMode(ELaneToolMode(Z_Param_NewMode));
	P_NATIVE_END;
}
// ********** End Class URoadLaneController Function SetToolMode ***********************************

// ********** Begin Class URoadLaneController Function SwitchToState *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadLaneController_SwitchToState_Statics
struct UHT_STATICS
{
	struct RoadLaneController_eventSwitchToState_Parms
	{
		ELaneToolState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadLane" },
		{ "Comment", "/**\n\x09 * Switches the tool to a new state, performing cleanup and initialization as needed\n\x09 */" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "ToolTip", "Switches the tool to a new state, performing cleanup and initialization as needed" },
	};
#endif // WITH_METADATA

// ********** Begin Function SwitchToState constinit property declarations *************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SwitchToState constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SwitchToState Property Definitions ************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(RoadLaneController_eventSwitchToState_Parms, NewState), Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneToolState, METADATA_PARAMS(0, nullptr) }; // 086e51c5178ad67ead71405c407ecfea77790f61
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SwitchToState Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadLaneController, nullptr, "SwitchToState", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadLaneController_eventSwitchToState_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadLaneController_eventSwitchToState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadLaneController_SwitchToState(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadLaneController::execSwitchToState)
{
	P_GET_ENUM(ELaneToolState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchToState(ELaneToolState(Z_Param_NewState));
	P_NATIVE_END;
}
// ********** End Class URoadLaneController Function SwitchToState *********************************

// ********** Begin Class URoadLaneController ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoadLaneController_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Combined edit controller that handles lane selection, edge selection, and offset point editing\n * in a single unified workflow with state-based behavior.\n */" },
		{ "IncludePath", "RoadLaneController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "ToolTip", "Combined edit controller that handles lane selection, edge selection, and offset point editing\nin a single unified workflow with state-based behavior." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentToolState_MetaData[] = {
		{ "Category", "RoadLane" },
		{ "Comment", "// Current state of the tool\n" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "ToolTip", "Current state of the tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDomain_MetaData[] = {
		{ "Category", "RoadLane" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LanePresetClass_MetaData[] = {
		{ "Category", "RoadLane|Lanes" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SidewalkClass_MetaData[] = {
		{ "Category", "RoadLane|Sidewalks" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedSidewalk_MetaData[] = {
		{ "Category", "RoadLane|SelectLane" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSliceSnapToMidpoint_MetaData[] = {
		{ "Category", "RoadLane|Slice" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRoad_MetaData[] = {
		{ "Category", "RoadLane|SelectLane" },
		{ "Comment", "// The target road that the mouse is currently hovering over\n" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "ToolTip", "The target road that the mouse is currently hovering over" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLane_MetaData[] = {
		{ "Category", "RoadLane|SelectLane" },
		{ "Comment", "// The target lane at the current mouse position\n" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "ToolTip", "The target lane at the current mouse position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedLane_MetaData[] = {
		{ "Category", "RoadLane|SelectLane" },
		{ "Comment", "// The currently selected lane used for context-menu editing.\n// Unlike TargetLane (hover-driven), this only changes on explicit lane selection.\n" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "ToolTip", "The currently selected lane used for context-menu editing.\nUnlike TargetLane (hover-driven), this only changes on explicit lane selection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedRoad_MetaData[] = {
		{ "Category", "RoadLane|SelectLane" },
		{ "Comment", "// Road owning the currently selected lane.\n" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "ToolTip", "Road owning the currently selected lane." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRoadGeo_MetaData[] = {
		{ "Category", "RoadLane|SelectLane" },
		{ "Comment", "// The target RoadGeo actor that the mouse is hovering over (may have null ParentRoad)\n" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "ToolTip", "The target RoadGeo actor that the mouse is hovering over (may have null ParentRoad)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeCurvesToDraw_MetaData[] = {
		{ "Category", "RoadLane|SelectEdge" },
		{ "Comment", "// Array of EdgeCurves to display and allow selection from (typically left and right edges of selected lane)\n" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "ToolTip", "Array of EdgeCurves to display and allow selection from (typically left and right edges of selected lane)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetEdgeCurve_MetaData[] = {
		{ "Category", "RoadLane|EditOffsets" },
		{ "Comment", "// Target edge curve being edited\n" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "ToolTip", "Target edge curve being edited" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyToOuterOffsets_MetaData[] = {
		{ "Category", "RoadLane|EditOffsets" },
		{ "Comment", "// Whether to propagate offset changes to outer EdgeCurves\n" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "ToolTip", "Whether to propagate offset changes to outer EdgeCurves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginalOffsetPoints_MetaData[] = {
		{ "Comment", "// Original OffsetPoints before editing (for restoring on cancel)\n" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "ToolTip", "Original OffsetPoints before editing (for restoring on cancel)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterEdgeCurves_MetaData[] = {
		{ "Comment", "// Outer EdgeCurves that will receive propagated offset changes\n" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "ToolTip", "Outer EdgeCurves that will receive propagated offset changes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredEdgeCurve_MetaData[] = {
		{ "Category", "RoadLane|AddLane" },
		{ "Comment", "// The edge curve currently being hovered\n" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "ToolTip", "The edge curve currently being hovered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredEdgeDistance_MetaData[] = {
		{ "Category", "RoadLane|AddLane" },
		{ "Comment", "// Distance along the hovered edge where the mouse is hovering\n" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "ToolTip", "Distance along the hovered edge where the mouse is hovering" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewLaneRange_MetaData[] = {
		{ "Category", "RoadLane|AddLane" },
		{ "Comment", "// Distance range where the new lane has full width (X = start distance, Y = end distance)\n" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "ToolTip", "Distance range where the new lane has full width (X = start distance, Y = end distance)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseNewLaneRange_MetaData[] = {
		{ "Category", "RoadLane|AddLane" },
		{ "Comment", "// Whether range-based lane addition is active (when true, uses NewLaneRange for tapering)\n" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "ToolTip", "Whether range-based lane addition is active (when true, uses NewLaneRange for tapering)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewOriginalOffsetPoints_MetaData[] = {
		{ "Comment", "// Original offset points of the edge being previewed (for restoration)\n" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "ToolTip", "Original offset points of the edge being previewed (for restoration)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewActiveEdge_MetaData[] = {
		{ "Comment", "// The edge that currently has preview offset points applied\n" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "ToolTip", "The edge that currently has preview offset points applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewOuterEdgeCurves_MetaData[] = {
		{ "Comment", "// Outer EdgeCurves for AddLane preview (when bApplyToOuterOffsets is enabled)\n" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "ToolTip", "Outer EdgeCurves for AddLane preview (when bApplyToOuterOffsets is enabled)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialPointLocations_MetaData[] = {
		{ "Category", "RoadLane|EditOffsets" },
		{ "Comment", "// Initial locations for the offset points\n" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "ToolTip", "Initial locations for the offset points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointMetadata_MetaData[] = {
		{ "Category", "RoadLane|EditOffsets" },
		{ "Comment", "// Metadata per point\n" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "ToolTip", "Metadata per point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointActors_MetaData[] = {
		{ "Comment", "// Actors representing each draggable point\n" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "ToolTip", "Actors representing each draggable point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockedZPerPoint_MetaData[] = {
		{ "Comment", "// Cached Z per point to enforce XY-only constraint\n" },
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
		{ "ToolTip", "Cached Z per point to enforce XY-only constraint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlicePreviewInnerEdge_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlicePreviewOuterEdge_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoadLaneController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URoadLaneController constinit property declarations **********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentToolState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentToolState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentDomain_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentDomain;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LanePresetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SidewalkClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedSidewalk;
	static void NewProp_bSliceSnapToMidpoint_SetBit(void* Obj)
	{
		((URoadLaneController*)Obj)->bSliceSnapToMidpoint = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSliceSnapToMidpoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetRoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetLane;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedLane;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedRoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetRoadGeo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EdgeCurvesToDraw_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EdgeCurvesToDraw;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetEdgeCurve;
	static void NewProp_bApplyToOuterOffsets_SetBit(void* Obj)
	{
		((URoadLaneController*)Obj)->bApplyToOuterOffsets = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyToOuterOffsets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalOffsetPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginalOffsetPoints;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OuterEdgeCurves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OuterEdgeCurves;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoveredEdgeCurve;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_HoveredEdgeDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLaneRange;
	static void NewProp_bUseNewLaneRange_SetBit(void* Obj)
	{
		((URoadLaneController*)Obj)->bUseNewLaneRange = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseNewLaneRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewOriginalOffsetPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviewOriginalOffsetPoints;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewActiveEdge;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewOuterEdgeCurves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviewOuterEdgeCurves;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialPointLocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InitialPointLocations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointMetadata_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PointMetadata;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PointActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PointActors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LockedZPerPoint_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LockedZPerPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlicePreviewInnerEdge;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlicePreviewOuterEdge;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URoadLaneController constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ApplySidewalkPresetToSelection"), .Pointer = &URoadLaneController::execApplySidewalkPresetToSelection },
		{ .NameUTF8 = UTF8TEXT("ConfigureSelectedLaneFromPreset"), .Pointer = &URoadLaneController::execConfigureSelectedLaneFromPreset },
		{ .NameUTF8 = UTF8TEXT("CreateRoadLaneController"), .Pointer = &URoadLaneController::execCreateRoadLaneController },
		{ .NameUTF8 = UTF8TEXT("GetToolMode"), .Pointer = &URoadLaneController::execGetToolMode },
		{ .NameUTF8 = UTF8TEXT("HasSelectedStrip"), .Pointer = &URoadLaneController::execHasSelectedStrip },
		{ .NameUTF8 = UTF8TEXT("IsSelectedSidewalkPartition"), .Pointer = &URoadLaneController::execIsSelectedSidewalkPartition },
		{ .NameUTF8 = UTF8TEXT("RemoveSelectedSidewalk"), .Pointer = &URoadLaneController::execRemoveSelectedSidewalk },
		{ .NameUTF8 = UTF8TEXT("RemoveSelectedStrip"), .Pointer = &URoadLaneController::execRemoveSelectedStrip },
		{ .NameUTF8 = UTF8TEXT("SetDomain"), .Pointer = &URoadLaneController::execSetDomain },
		{ .NameUTF8 = UTF8TEXT("SetLockWidths"), .Pointer = &URoadLaneController::execSetLockWidths },
		{ .NameUTF8 = UTF8TEXT("SetSelectedPartitionMaterial"), .Pointer = &URoadLaneController::execSetSelectedPartitionMaterial },
		{ .NameUTF8 = UTF8TEXT("SetSelectedPartitionWalkable"), .Pointer = &URoadLaneController::execSetSelectedPartitionWalkable },
		{ .NameUTF8 = UTF8TEXT("SetToolMode"), .Pointer = &URoadLaneController::execSetToolMode },
		{ .NameUTF8 = UTF8TEXT("SwitchToState"), .Pointer = &URoadLaneController::execSwitchToState },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URoadLaneController_ApplySidewalkPresetToSelection, "ApplySidewalkPresetToSelection" }, // 0bd24132d8ab98fc553463392a5f370b1ad4bd0b
		{ &Z_Construct_UFunction_URoadLaneController_ConfigureSelectedLaneFromPreset, "ConfigureSelectedLaneFromPreset" }, // 19e1108c73d7666f269f012935046c7b29102686
		{ &Z_Construct_UFunction_URoadLaneController_CreateRoadLaneController, "CreateRoadLaneController" }, // b81840295346a7c25959b485bc6e1a12da70d199
		{ &Z_Construct_UFunction_URoadLaneController_GetToolMode, "GetToolMode" }, // 4003541cc20c63450033b448afcd56a3788e5e31
		{ &Z_Construct_UFunction_URoadLaneController_HasSelectedStrip, "HasSelectedStrip" }, // 5bf0e9c5a5b43f6c11758f2444782f2338e78739
		{ &Z_Construct_UFunction_URoadLaneController_IsSelectedSidewalkPartition, "IsSelectedSidewalkPartition" }, // 5b19b5dac04380b54dc1e93bee3fe8cd60a0b0d2
		{ &Z_Construct_UFunction_URoadLaneController_RemoveSelectedSidewalk, "RemoveSelectedSidewalk" }, // 0c0c89379d0262550824eb6edcf8b1781132b760
		{ &Z_Construct_UFunction_URoadLaneController_RemoveSelectedStrip, "RemoveSelectedStrip" }, // f8403a37aea13f7531805e67dfa4b93b2fa836f3
		{ &Z_Construct_UFunction_URoadLaneController_SetDomain, "SetDomain" }, // a35ebf94862dc4f3badb0336a0442f551d633732
		{ &Z_Construct_UFunction_URoadLaneController_SetLockWidths, "SetLockWidths" }, // 392ff94ffc89b5bc64edd58d8f4768aafab25760
		{ &Z_Construct_UFunction_URoadLaneController_SetSelectedPartitionMaterial, "SetSelectedPartitionMaterial" }, // 4cbc2abcc08eae48c9f6b3f3311e506534931384
		{ &Z_Construct_UFunction_URoadLaneController_SetSelectedPartitionWalkable, "SetSelectedPartitionWalkable" }, // e6df7f20c3cd3020e86dde2413532dd88ea9b811
		{ &Z_Construct_UFunction_URoadLaneController_SetToolMode, "SetToolMode" }, // 268e939b8bb0621e005811a71e469e9e1c02fe49
		{ &Z_Construct_UFunction_URoadLaneController_SwitchToState, "SwitchToState" }, // e47b4cda252373a813601208679e1d159efa87a1
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadLaneController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URoadLaneController Property Definitions *********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CurrentToolState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CurrentToolState = { "CurrentToolState", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(URoadLaneController, CurrentToolState), Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneToolState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentToolState_MetaData), NewProp_CurrentToolState_MetaData) }; // 086e51c5178ad67ead71405c407ecfea77790f61
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CurrentDomain_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CurrentDomain = { "CurrentDomain", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(URoadLaneController, CurrentDomain), Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneToolDomain, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDomain_MetaData), NewProp_CurrentDomain_MetaData) }; // dd812bc194730326008da5dcb6c58a953bd288d7
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_LanePresetClass = { "LanePresetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(URoadLaneController, LanePresetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULanePreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LanePresetClass_MetaData), NewProp_LanePresetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_SidewalkClass = { "SidewalkClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(URoadLaneController, SidewalkClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URoadBLDSidewalkPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SidewalkClass_MetaData), NewProp_SidewalkClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SelectedSidewalk = { "SelectedSidewalk", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadLaneController, SelectedSidewalk), Z_Construct_UClass_USidewalk, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedSidewalk_MetaData), NewProp_SelectedSidewalk_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSliceSnapToMidpoint = { "bSliceSnapToMidpoint", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadLaneController), &UHT_STATICS::NewProp_bSliceSnapToMidpoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSliceSnapToMidpoint_MetaData), NewProp_bSliceSnapToMidpoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetRoad = { "TargetRoad", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadLaneController, TargetRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRoad_MetaData), NewProp_TargetRoad_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetLane = { "TargetLane", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadLaneController, TargetLane), Z_Construct_UClass_UDynamicRoadLane, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLane_MetaData), NewProp_TargetLane_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SelectedLane = { "SelectedLane", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadLaneController, SelectedLane), Z_Construct_UClass_UDynamicRoadLane, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedLane_MetaData), NewProp_SelectedLane_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SelectedRoad = { "SelectedRoad", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadLaneController, SelectedRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedRoad_MetaData), NewProp_SelectedRoad_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetRoadGeo = { "TargetRoadGeo", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadLaneController, TargetRoadGeo), Z_Construct_UClass_ARoadGeo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRoadGeo_MetaData), NewProp_TargetRoadGeo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_EdgeCurvesToDraw_Inner = { "EdgeCurvesToDraw", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_EdgeCurvesToDraw = { "EdgeCurvesToDraw", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URoadLaneController, EdgeCurvesToDraw), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeCurvesToDraw_MetaData), NewProp_EdgeCurvesToDraw_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetEdgeCurve = { "TargetEdgeCurve", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadLaneController, TargetEdgeCurve), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetEdgeCurve_MetaData), NewProp_TargetEdgeCurve_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bApplyToOuterOffsets = { "bApplyToOuterOffsets", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadLaneController), &UHT_STATICS::NewProp_bApplyToOuterOffsets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyToOuterOffsets_MetaData), NewProp_bApplyToOuterOffsets_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OriginalOffsetPoints_Inner = { "OriginalOffsetPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOffsetPoint, METADATA_PARAMS(0, nullptr) }; // ebe5593cddf3aebfef4e17da982b3b2525bffe9d
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OriginalOffsetPoints = { "OriginalOffsetPoints", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URoadLaneController, OriginalOffsetPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginalOffsetPoints_MetaData), NewProp_OriginalOffsetPoints_MetaData) }; // ebe5593cddf3aebfef4e17da982b3b2525bffe9d
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OuterEdgeCurves_Inner = { "OuterEdgeCurves", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OuterEdgeCurves = { "OuterEdgeCurves", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URoadLaneController, OuterEdgeCurves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterEdgeCurves_MetaData), NewProp_OuterEdgeCurves_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HoveredEdgeCurve = { "HoveredEdgeCurve", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadLaneController, HoveredEdgeCurve), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredEdgeCurve_MetaData), NewProp_HoveredEdgeCurve_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_HoveredEdgeDistance = { "HoveredEdgeDistance", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadLaneController, HoveredEdgeDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredEdgeDistance_MetaData), NewProp_HoveredEdgeDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NewLaneRange = { "NewLaneRange", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URoadLaneController, NewLaneRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewLaneRange_MetaData), NewProp_NewLaneRange_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseNewLaneRange = { "bUseNewLaneRange", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadLaneController), &UHT_STATICS::NewProp_bUseNewLaneRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseNewLaneRange_MetaData), NewProp_bUseNewLaneRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PreviewOriginalOffsetPoints_Inner = { "PreviewOriginalOffsetPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOffsetPoint, METADATA_PARAMS(0, nullptr) }; // ebe5593cddf3aebfef4e17da982b3b2525bffe9d
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PreviewOriginalOffsetPoints = { "PreviewOriginalOffsetPoints", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URoadLaneController, PreviewOriginalOffsetPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewOriginalOffsetPoints_MetaData), NewProp_PreviewOriginalOffsetPoints_MetaData) }; // ebe5593cddf3aebfef4e17da982b3b2525bffe9d
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PreviewActiveEdge = { "PreviewActiveEdge", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadLaneController, PreviewActiveEdge), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewActiveEdge_MetaData), NewProp_PreviewActiveEdge_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PreviewOuterEdgeCurves_Inner = { "PreviewOuterEdgeCurves", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PreviewOuterEdgeCurves = { "PreviewOuterEdgeCurves", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URoadLaneController, PreviewOuterEdgeCurves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewOuterEdgeCurves_MetaData), NewProp_PreviewOuterEdgeCurves_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InitialPointLocations_Inner = { "InitialPointLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_InitialPointLocations = { "InitialPointLocations", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URoadLaneController, InitialPointLocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialPointLocations_MetaData), NewProp_InitialPointLocations_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PointMetadata_Inner = { "PointMetadata", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRoadLanePointMetadata, METADATA_PARAMS(0, nullptr) }; // 8b7a60cce2453d6a2c134a6fe2308e3bf7ea5795
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PointMetadata = { "PointMetadata", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URoadLaneController, PointMetadata), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointMetadata_MetaData), NewProp_PointMetadata_MetaData) }; // 8b7a60cce2453d6a2c134a6fe2308e3bf7ea5795
const UECodeGen_Private::FWeakObjectPropertyParams UHT_STATICS::NewProp_PointActors_Inner = { "PointActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PointActors = { "PointActors", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URoadLaneController, PointActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointActors_MetaData), NewProp_PointActors_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LockedZPerPoint_Inner = { "LockedZPerPoint", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_LockedZPerPoint = { "LockedZPerPoint", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URoadLaneController, LockedZPerPoint), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockedZPerPoint_MetaData), NewProp_LockedZPerPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SlicePreviewInnerEdge = { "SlicePreviewInnerEdge", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadLaneController, SlicePreviewInnerEdge), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlicePreviewInnerEdge_MetaData), NewProp_SlicePreviewInnerEdge_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SlicePreviewOuterEdge = { "SlicePreviewOuterEdge", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadLaneController, SlicePreviewOuterEdge), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlicePreviewOuterEdge_MetaData), NewProp_SlicePreviewOuterEdge_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentToolState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentToolState,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentDomain_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentDomain,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LanePresetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SidewalkClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedSidewalk,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSliceSnapToMidpoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetLane,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedLane,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetRoadGeo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeCurvesToDraw_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeCurvesToDraw,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetEdgeCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bApplyToOuterOffsets,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OriginalOffsetPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OriginalOffsetPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OuterEdgeCurves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OuterEdgeCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HoveredEdgeCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HoveredEdgeDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewLaneRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseNewLaneRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviewOriginalOffsetPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviewOriginalOffsetPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviewActiveEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviewOuterEdgeCurves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviewOuterEdgeCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InitialPointLocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InitialPointLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointMetadata_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointMetadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LockedZPerPoint_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LockedZPerPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SlicePreviewInnerEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SlicePreviewOuterEdge,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URoadLaneController Property Definitions ***********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldBLDEditController,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoadLaneController,
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
static void URoadLaneController_StaticRegisterNativesURoadLaneController()
{
	UClass* Class = URoadLaneController::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URoadLaneController;
UClass* Z_Construct_UClass_URoadLaneController(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoadLaneController;
		if (!Z_Registration_Info_UClass_URoadLaneController.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadLaneController"),
				Z_Registration_Info_UClass_URoadLaneController.InnerSingleton,
				URoadLaneController_StaticRegisterNativesURoadLaneController,
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
		return Z_Registration_Info_UClass_URoadLaneController.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoadLaneController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoadLaneController.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoadLaneController.OuterSingleton;
}
#undef UHT_STATICS
URoadLaneController::URoadLaneController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoadLaneController);
URoadLaneController::~URoadLaneController() {}
// ********** End Class URoadLaneController ********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadLaneController_h__Script_RoadBLDEditorToolkit_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneToolState, TEXT("ELaneToolState"), &ZRIE_ELaneToolState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 141447621U) },
		{ Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneToolDomain, TEXT("ELaneToolDomain"), &ZRIE_ELaneToolDomain, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3716230081U) },
		{ Z_Construct_UEnum_RoadBLDEditorToolkit_ELaneToolMode, TEXT("ELaneToolMode"), &ZRIE_ELaneToolMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 194478981U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FRoadLanePointMetadata, Z_Construct_UScriptStruct_FRoadLanePointMetadata_Statics::NewStructOps, TEXT("RoadLanePointMetadata"),&Z_Registration_Info_UScriptStruct_FRoadLanePointMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadLanePointMetadata), 2340053196U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoadLaneController, TEXT("URoadLaneController"), &Z_Registration_Info_UClass_URoadLaneController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoadLaneController), 3540675358U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadLaneController_h__Script_RoadBLDEditorToolkit_7e2f3060651906fcaea21b876604eccb8b6286e6{
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
