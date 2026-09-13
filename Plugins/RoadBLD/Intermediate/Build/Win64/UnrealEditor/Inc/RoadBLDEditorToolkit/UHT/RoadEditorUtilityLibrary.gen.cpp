// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoadEditorUtilityLibrary.h"
#include "DynamicRoad/DynamicRoadData.h"
#include "PrimitiveDrawWrapper.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRoadEditorUtilityLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicRoadLaneProfile(ETypeConstructPhase);
WORLDBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPrimitiveDrawParams(ETypeConstructPhase);
WORLDBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPrimitiveDrawWrapper(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoad(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadDrawPreset(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadLane(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoadNetwork(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UEdgeCurve(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadBLDRuntimeSettings(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadControlSplineComponent(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ARoadGeo(ETypeConstructPhase);
WORLDBLDEDITOR_API UClass* Z_Construct_UClass_UWorldBLDEditController(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadEditorFunctionLibrary(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnRoadElementParams(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadEditorFunctionLibrary(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FSpawnRoadElementParams *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FSpawnRoadElementParams_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FSpawnRoadElementParams>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSpawnRoadElementParams); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElementClass_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "Spawn" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadTool_MetaData[] = {
		{ "Category", "Tool" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreconfigure_MetaData[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPostconfigure_MetaData[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSpawnRoadElementParams constinit property declarations ***********
	static const UECodeGen_Private::FClassPropertyParams NewProp_ElementClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Template;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoadTool;
	static void NewProp_bPreconfigure_SetBit(void* Obj)
	{
		((FSpawnRoadElementParams*)Obj)->bPreconfigure = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreconfigure;
	static void NewProp_bPostconfigure_SetBit(void* Obj)
	{
		((FSpawnRoadElementParams*)Obj)->bPostconfigure = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPostconfigure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSpawnRoadElementParams constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnRoadElementParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FSpawnRoadElementParams Property Definitions **********************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ElementClass = { "ElementClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnRoadElementParams, ElementClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElementClass_MetaData), NewProp_ElementClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnRoadElementParams, Template), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Template_MetaData), NewProp_Template_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnRoadElementParams, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoadTool = { "RoadTool", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnRoadElementParams, RoadTool), Z_Construct_UClass_UWorldBLDEditController, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadTool_MetaData), NewProp_RoadTool_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPreconfigure = { "bPreconfigure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpawnRoadElementParams), &UHT_STATICS::NewProp_bPreconfigure_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreconfigure_MetaData), NewProp_bPreconfigure_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPostconfigure = { "bPostconfigure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpawnRoadElementParams), &UHT_STATICS::NewProp_bPostconfigure_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPostconfigure_MetaData), NewProp_bPostconfigure_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ElementClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Template,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadTool,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPreconfigure,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPostconfigure,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FSpawnRoadElementParams Property Definitions ************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	&NewStructOps,
	"SpawnRoadElementParams",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FSpawnRoadElementParams>(),
	alignof(FSpawnRoadElementParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSpawnRoadElementParams;
UScriptStruct* Z_Construct_UScriptStruct_FSpawnRoadElementParams(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FSpawnRoadElementParams.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FSpawnRoadElementParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnRoadElementParams, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("SpawnRoadElementParams"));
		}
		return Z_Registration_Info_UScriptStruct_FSpawnRoadElementParams.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FSpawnRoadElementParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSpawnRoadElementParams.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSpawnRoadElementParams.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FSpawnRoadElementParams *********************************************

// ********** Begin Class URoadEditorFunctionLibrary Function CalculateRefLineForInteractiveEdit ***
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadEditorFunctionLibrary_CalculateRefLineForInteractiveEdit_Statics
struct UHT_STATICS
{
	struct RoadEditorFunctionLibrary_eventCalculateRefLineForInteractiveEdit_Parms
	{
		ADynamicRoad* Road;
		bool bRefreshLandscapeDerivedData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad|Landscape" },
		{ "Comment", "/**\n\x09 * Recalculates a road's reference line for interactive RoadController / RoadNetworkController edits.\n\x09 * When Build Low Quality Roads During Editing is enabled, skips landscape mirror spline create/refresh\n\x09 * so mirrors are deferred until the high-quality tool-exit rebuild.\n\x09 * Pass bRefreshLandscapeDerivedData=false for committed-road drag preview so landscape conform,\n\x09 * generated spline, and attached height/paint patches are not mutated every tick.\n\x09 */" },
		{ "CPP_Default_bRefreshLandscapeDerivedData", "true" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
		{ "ToolTip", "Recalculates a road's reference line for interactive RoadController / RoadNetworkController edits.\nWhen Build Low Quality Roads During Editing is enabled, skips landscape mirror spline create/refresh\nso mirrors are deferred until the high-quality tool-exit rebuild.\nPass bRefreshLandscapeDerivedData=false for committed-road drag preview so landscape conform,\ngenerated spline, and attached height/paint patches are not mutated every tick." },
	};
#endif // WITH_METADATA

// ********** Begin Function CalculateRefLineForInteractiveEdit constinit property declarations ****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Road;
	static void NewProp_bRefreshLandscapeDerivedData_SetBit(void* Obj)
	{
		((RoadEditorFunctionLibrary_eventCalculateRefLineForInteractiveEdit_Parms*)Obj)->bRefreshLandscapeDerivedData = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRefreshLandscapeDerivedData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CalculateRefLineForInteractiveEdit constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CalculateRefLineForInteractiveEdit Property Definitions ***************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Road = { "Road", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventCalculateRefLineForInteractiveEdit_Parms, Road), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRefreshLandscapeDerivedData = { "bRefreshLandscapeDerivedData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadEditorFunctionLibrary_eventCalculateRefLineForInteractiveEdit_Parms), &UHT_STATICS::NewProp_bRefreshLandscapeDerivedData_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Road,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRefreshLandscapeDerivedData,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CalculateRefLineForInteractiveEdit Property Definitions *****************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadEditorFunctionLibrary, nullptr, "CalculateRefLineForInteractiveEdit", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadEditorFunctionLibrary_eventCalculateRefLineForInteractiveEdit_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadEditorFunctionLibrary_eventCalculateRefLineForInteractiveEdit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadEditorFunctionLibrary_CalculateRefLineForInteractiveEdit(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadEditorFunctionLibrary::execCalculateRefLineForInteractiveEdit)
{
	P_GET_OBJECT(ADynamicRoad,Z_Param_Road);
	P_GET_UBOOL(Z_Param_bRefreshLandscapeDerivedData);
	P_FINISH;
	P_NATIVE_BEGIN;
	URoadEditorFunctionLibrary::CalculateRefLineForInteractiveEdit(Z_Param_Road,Z_Param_bRefreshLandscapeDerivedData);
	P_NATIVE_END;
}
// ********** End Class URoadEditorFunctionLibrary Function CalculateRefLineForInteractiveEdit *****

// ********** Begin Class URoadEditorFunctionLibrary Function CheckRoadShapeValidity ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadEditorFunctionLibrary_CheckRoadShapeValidity_Statics
struct UHT_STATICS
{
	struct RoadEditorFunctionLibrary_eventCheckRoadShapeValidity_Parms
	{
		ADynamicRoad* TargetRoad;
		FText OutFailureReason;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad|Validation" },
		{ "Comment", "/**\n\x09 * Checks the validity of a road's shape by running multiple validation tests\n\x09 * @param TargetRoad - The road to validate\n\x09 * @param OutFailureReason - Output parameter containing a description of which test failed (empty if all tests pass)\n\x09 * @return True if the road shape is valid, false if any test fails\n\x09 */" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
		{ "ToolTip", "Checks the validity of a road's shape by running multiple validation tests\n@param TargetRoad - The road to validate\n@param OutFailureReason - Output parameter containing a description of which test failed (empty if all tests pass)\n@return True if the road shape is valid, false if any test fails" },
	};
#endif // WITH_METADATA

// ********** Begin Function CheckRoadShapeValidity constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetRoad;
	static const UECodeGen_Private::FTextPropertyParams NewProp_OutFailureReason;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RoadEditorFunctionLibrary_eventCheckRoadShapeValidity_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CheckRoadShapeValidity constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CheckRoadShapeValidity Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetRoad = { "TargetRoad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventCheckRoadShapeValidity_Parms, TargetRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_OutFailureReason = { "OutFailureReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventCheckRoadShapeValidity_Parms, OutFailureReason), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadEditorFunctionLibrary_eventCheckRoadShapeValidity_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutFailureReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CheckRoadShapeValidity Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadEditorFunctionLibrary, nullptr, "CheckRoadShapeValidity", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadEditorFunctionLibrary_eventCheckRoadShapeValidity_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadEditorFunctionLibrary_eventCheckRoadShapeValidity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadEditorFunctionLibrary_CheckRoadShapeValidity(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadEditorFunctionLibrary::execCheckRoadShapeValidity)
{
	P_GET_OBJECT(ADynamicRoad,Z_Param_TargetRoad);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutFailureReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URoadEditorFunctionLibrary::CheckRoadShapeValidity(Z_Param_TargetRoad,Z_Param_Out_OutFailureReason);
	P_NATIVE_END;
}
// ********** End Class URoadEditorFunctionLibrary Function CheckRoadShapeValidity *****************

// ********** Begin Class URoadEditorFunctionLibrary Function CreateMergePreset ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadEditorFunctionLibrary_CreateMergePreset_Statics
struct UHT_STATICS
{
	struct RoadEditorFunctionLibrary_eventCreateMergePreset_Parms
	{
		ADynamicRoad* SourceRoad;
		TArray<UDynamicRoadLane*> Lanes;
		int32 Side;
		double Distance;
		double BorderWidth;
		UDynamicRoadDrawPreset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "Comment", "/**\n\x09 * Creates a new UDynamicRoadDrawPreset by copying lanes into either LeftLanes or RightLanes based on Side\n\x09 * @param SourceRoad - Road being merged from; used to copy sidewalks and road modules\n\x09 * @param Lanes - Array of lanes to copy into the preset\n\x09 * @param Side - Which side to add lanes to (0 = Left, 1 = Right)\n\x09 * @param Distance - Distance along the lane to sample width and other properties\n\x09 * @param BorderWidth - Optional width for a border lane on the opposite side (0 = no border lane)\n\x09 * @return New UDynamicRoadDrawPreset object with the lanes configured\n\x09 */" },
		{ "CPP_Default_BorderWidth", "0.000000" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
		{ "ToolTip", "Creates a new UDynamicRoadDrawPreset by copying lanes into either LeftLanes or RightLanes based on Side\n@param SourceRoad - Road being merged from; used to copy sidewalks and road modules\n@param Lanes - Array of lanes to copy into the preset\n@param Side - Which side to add lanes to (0 = Left, 1 = Right)\n@param Distance - Distance along the lane to sample width and other properties\n@param BorderWidth - Optional width for a border lane on the opposite side (0 = no border lane)\n@return New UDynamicRoadDrawPreset object with the lanes configured" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lanes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateMergePreset constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceRoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Lanes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Lanes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Side;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_BorderWidth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateMergePreset constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateMergePreset Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SourceRoad = { "SourceRoad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventCreateMergePreset_Parms, SourceRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Lanes_Inner = { "Lanes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDynamicRoadLane, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Lanes = { "Lanes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventCreateMergePreset_Parms, Lanes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lanes_MetaData), NewProp_Lanes_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Side = { "Side", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventCreateMergePreset_Parms, Side), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventCreateMergePreset_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_BorderWidth = { "BorderWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventCreateMergePreset_Parms, BorderWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventCreateMergePreset_Parms, ReturnValue), Z_Construct_UClass_UDynamicRoadDrawPreset, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Lanes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Lanes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Side,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BorderWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateMergePreset Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadEditorFunctionLibrary, nullptr, "CreateMergePreset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadEditorFunctionLibrary_eventCreateMergePreset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadEditorFunctionLibrary_eventCreateMergePreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadEditorFunctionLibrary_CreateMergePreset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadEditorFunctionLibrary::execCreateMergePreset)
{
	P_GET_OBJECT(ADynamicRoad,Z_Param_SourceRoad);
	P_GET_TARRAY_REF(UDynamicRoadLane*,Z_Param_Out_Lanes);
	P_GET_PROPERTY(FIntProperty,Z_Param_Side);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Distance);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_BorderWidth);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDynamicRoadDrawPreset**)Z_Param__Result=URoadEditorFunctionLibrary::CreateMergePreset(Z_Param_SourceRoad,Z_Param_Out_Lanes,Z_Param_Side,Z_Param_Distance,Z_Param_BorderWidth);
	P_NATIVE_END;
}
// ********** End Class URoadEditorFunctionLibrary Function CreateMergePreset **********************

// ********** Begin Class URoadEditorFunctionLibrary Function DuplicateRoad ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadEditorFunctionLibrary_DuplicateRoad_Statics
struct UHT_STATICS
{
	struct RoadEditorFunctionLibrary_eventDuplicateRoad_Parms
	{
		ADynamicRoad* SourceRoad;
		FVector2D LocationOffset;
		bool AddToRoadNetwork;
		ADynamicRoad* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "Comment", "/**\n\x09 * Duplicates a road actor with offset and optional network registration\n\x09 * Creates a copy of the source road including:\n\x09 * - Control points (with location offset applied)\n\x09 * - Lane configuration\n\x09 * - Edge curves\n\x09 * - Reference line\n\x09 * - Prop spawners\n\x09 * - Material settings\n\x09 * \n\x09 * @param SourceRoad - The road actor to duplicate\n\x09 * @param LocationOffset - 2D offset to apply to all control points (since roads are at 0,0,0)\n\x09 * @param AddToRoadNetwork - If true, adds the duplicated road to the source road's network\n\x09 * @return The newly created duplicate road actor, or nullptr if duplication fails\n\x09 */" },
		{ "CPP_Default_AddToRoadNetwork", "true" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
		{ "ToolTip", "Duplicates a road actor with offset and optional network registration\nCreates a copy of the source road including:\n- Control points (with location offset applied)\n- Lane configuration\n- Edge curves\n- Reference line\n- Prop spawners\n- Material settings\n\n@param SourceRoad - The road actor to duplicate\n@param LocationOffset - 2D offset to apply to all control points (since roads are at 0,0,0)\n@param AddToRoadNetwork - If true, adds the duplicated road to the source road's network\n@return The newly created duplicate road actor, or nullptr if duplication fails" },
	};
#endif // WITH_METADATA

// ********** Begin Function DuplicateRoad constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceRoad;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
	static void NewProp_AddToRoadNetwork_SetBit(void* Obj)
	{
		((RoadEditorFunctionLibrary_eventDuplicateRoad_Parms*)Obj)->AddToRoadNetwork = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AddToRoadNetwork;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DuplicateRoad constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DuplicateRoad Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SourceRoad = { "SourceRoad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventDuplicateRoad_Parms, SourceRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventDuplicateRoad_Parms, LocationOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_AddToRoadNetwork = { "AddToRoadNetwork", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadEditorFunctionLibrary_eventDuplicateRoad_Parms), &UHT_STATICS::NewProp_AddToRoadNetwork_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventDuplicateRoad_Parms, ReturnValue), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AddToRoadNetwork,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DuplicateRoad Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadEditorFunctionLibrary, nullptr, "DuplicateRoad", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadEditorFunctionLibrary_eventDuplicateRoad_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadEditorFunctionLibrary_eventDuplicateRoad_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadEditorFunctionLibrary_DuplicateRoad(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadEditorFunctionLibrary::execDuplicateRoad)
{
	P_GET_OBJECT(ADynamicRoad,Z_Param_SourceRoad);
	P_GET_STRUCT(FVector2D,Z_Param_LocationOffset);
	P_GET_UBOOL(Z_Param_AddToRoadNetwork);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ADynamicRoad**)Z_Param__Result=URoadEditorFunctionLibrary::DuplicateRoad(Z_Param_SourceRoad,Z_Param_LocationOffset,Z_Param_AddToRoadNetwork);
	P_NATIVE_END;
}
// ********** End Class URoadEditorFunctionLibrary Function DuplicateRoad **************************

// ********** Begin Class URoadEditorFunctionLibrary Function FindRoadNetworkForRoad ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadEditorFunctionLibrary_FindRoadNetworkForRoad_Statics
struct UHT_STATICS
{
	struct RoadEditorFunctionLibrary_eventFindRoadNetworkForRoad_Parms
	{
		ADynamicRoad* Road;
		ADynamicRoadNetwork* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "Comment", "/** Returns the owning network of Road via GetAttachParentActor(), or nullptr. */" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
		{ "ToolTip", "Returns the owning network of Road via GetAttachParentActor(), or nullptr." },
	};
#endif // WITH_METADATA

// ********** Begin Function FindRoadNetworkForRoad constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Road;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindRoadNetworkForRoad constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindRoadNetworkForRoad Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Road = { "Road", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventFindRoadNetworkForRoad_Parms, Road), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventFindRoadNetworkForRoad_Parms, ReturnValue), Z_Construct_UClass_ADynamicRoadNetwork, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Road,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function FindRoadNetworkForRoad Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadEditorFunctionLibrary, nullptr, "FindRoadNetworkForRoad", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadEditorFunctionLibrary_eventFindRoadNetworkForRoad_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadEditorFunctionLibrary_eventFindRoadNetworkForRoad_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadEditorFunctionLibrary_FindRoadNetworkForRoad(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadEditorFunctionLibrary::execFindRoadNetworkForRoad)
{
	P_GET_OBJECT(ADynamicRoad,Z_Param_Road);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ADynamicRoadNetwork**)Z_Param__Result=URoadEditorFunctionLibrary::FindRoadNetworkForRoad(Z_Param_Road);
	P_NATIVE_END;
}
// ********** End Class URoadEditorFunctionLibrary Function FindRoadNetworkForRoad *****************

// ********** Begin Class URoadEditorFunctionLibrary Function FindRoadNetworkInLevel ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadEditorFunctionLibrary_FindRoadNetworkInLevel_Statics
struct UHT_STATICS
{
	struct RoadEditorFunctionLibrary_eventFindRoadNetworkInLevel_Parms
	{
		ADynamicRoadNetwork* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "Comment", "/**\n\x09 * Finds the first ADynamicRoadNetwork actor in the current editor world\n\x09 * This is a helper method to avoid code duplication across multiple controllers\n\x09 * @return The first DynamicRoadNetwork found in the level, or nullptr if none exists\n\x09 */" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
		{ "ToolTip", "Finds the first ADynamicRoadNetwork actor in the current editor world\nThis is a helper method to avoid code duplication across multiple controllers\n@return The first DynamicRoadNetwork found in the level, or nullptr if none exists" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindRoadNetworkInLevel constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindRoadNetworkInLevel constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindRoadNetworkInLevel Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventFindRoadNetworkInLevel_Parms, ReturnValue), Z_Construct_UClass_ADynamicRoadNetwork, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function FindRoadNetworkInLevel Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadEditorFunctionLibrary, nullptr, "FindRoadNetworkInLevel", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadEditorFunctionLibrary_eventFindRoadNetworkInLevel_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadEditorFunctionLibrary_eventFindRoadNetworkInLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadEditorFunctionLibrary_FindRoadNetworkInLevel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadEditorFunctionLibrary::execFindRoadNetworkInLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ADynamicRoadNetwork**)Z_Param__Result=URoadEditorFunctionLibrary::FindRoadNetworkInLevel();
	P_NATIVE_END;
}
// ********** End Class URoadEditorFunctionLibrary Function FindRoadNetworkInLevel *****************

// ********** Begin Class URoadEditorFunctionLibrary Function GetAllLandscapePaintLayerNames *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadEditorFunctionLibrary_GetAllLandscapePaintLayerNames_Statics
struct UHT_STATICS
{
	struct RoadEditorFunctionLibrary_eventGetAllLandscapePaintLayerNames_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad|Landscape" },
		{ "Comment", "/** Returns a sorted set of available landscape paint layer names across all landscapes in the current editor world. */" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
		{ "ToolTip", "Returns a sorted set of available landscape paint layer names across all landscapes in the current editor world." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllLandscapePaintLayerNames constinit property declarations ********
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllLandscapePaintLayerNames constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllLandscapePaintLayerNames Property Definitions *******************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventGetAllLandscapePaintLayerNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAllLandscapePaintLayerNames Property Definitions *********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadEditorFunctionLibrary, nullptr, "GetAllLandscapePaintLayerNames", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadEditorFunctionLibrary_eventGetAllLandscapePaintLayerNames_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadEditorFunctionLibrary_eventGetAllLandscapePaintLayerNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadEditorFunctionLibrary_GetAllLandscapePaintLayerNames(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadEditorFunctionLibrary::execGetAllLandscapePaintLayerNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=URoadEditorFunctionLibrary::GetAllLandscapePaintLayerNames();
	P_NATIVE_END;
}
// ********** End Class URoadEditorFunctionLibrary Function GetAllLandscapePaintLayerNames *********

// ********** Begin Class URoadEditorFunctionLibrary Function GetAllRoadNetworksInLevel ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadEditorFunctionLibrary_GetAllRoadNetworksInLevel_Statics
struct UHT_STATICS
{
	struct RoadEditorFunctionLibrary_eventGetAllRoadNetworksInLevel_Parms
	{
		TArray<ADynamicRoadNetwork*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "Comment", "/** Returns all ADynamicRoadNetwork actors in the current editor world. */" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
		{ "ToolTip", "Returns all ADynamicRoadNetwork actors in the current editor world." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllRoadNetworksInLevel constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllRoadNetworksInLevel constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllRoadNetworksInLevel Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_ADynamicRoadNetwork, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventGetAllRoadNetworksInLevel_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAllRoadNetworksInLevel Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadEditorFunctionLibrary, nullptr, "GetAllRoadNetworksInLevel", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadEditorFunctionLibrary_eventGetAllRoadNetworksInLevel_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadEditorFunctionLibrary_eventGetAllRoadNetworksInLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadEditorFunctionLibrary_GetAllRoadNetworksInLevel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadEditorFunctionLibrary::execGetAllRoadNetworksInLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ADynamicRoadNetwork*>*)Z_Param__Result=URoadEditorFunctionLibrary::GetAllRoadNetworksInLevel();
	P_NATIVE_END;
}
// ********** End Class URoadEditorFunctionLibrary Function GetAllRoadNetworksInLevel **************

// ********** Begin Class URoadEditorFunctionLibrary Function GetStaleRoadNetworksInLevel **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadEditorFunctionLibrary_GetStaleRoadNetworksInLevel_Statics
struct UHT_STATICS
{
	struct RoadEditorFunctionLibrary_eventGetStaleRoadNetworksInLevel_Parms
	{
		TArray<ADynamicRoadNetwork*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "Comment", "/** Returns all road networks currently marked stale. */" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
		{ "ToolTip", "Returns all road networks currently marked stale." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetStaleRoadNetworksInLevel constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStaleRoadNetworksInLevel constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStaleRoadNetworksInLevel Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_ADynamicRoadNetwork, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventGetStaleRoadNetworksInLevel_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetStaleRoadNetworksInLevel Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadEditorFunctionLibrary, nullptr, "GetStaleRoadNetworksInLevel", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadEditorFunctionLibrary_eventGetStaleRoadNetworksInLevel_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadEditorFunctionLibrary_eventGetStaleRoadNetworksInLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadEditorFunctionLibrary_GetStaleRoadNetworksInLevel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadEditorFunctionLibrary::execGetStaleRoadNetworksInLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ADynamicRoadNetwork*>*)Z_Param__Result=URoadEditorFunctionLibrary::GetStaleRoadNetworksInLevel();
	P_NATIVE_END;
}
// ********** End Class URoadEditorFunctionLibrary Function GetStaleRoadNetworksInLevel ************

// ********** Begin Class URoadEditorFunctionLibrary Function HasAnyStaleRoadNetworkInLevel ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadEditorFunctionLibrary_HasAnyStaleRoadNetworkInLevel_Statics
struct UHT_STATICS
{
	struct RoadEditorFunctionLibrary_eventHasAnyStaleRoadNetworkInLevel_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "Comment", "/** Returns true when at least one road network in the level is stale. */" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
		{ "ToolTip", "Returns true when at least one road network in the level is stale." },
	};
#endif // WITH_METADATA

// ********** Begin Function HasAnyStaleRoadNetworkInLevel constinit property declarations *********
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RoadEditorFunctionLibrary_eventHasAnyStaleRoadNetworkInLevel_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasAnyStaleRoadNetworkInLevel constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasAnyStaleRoadNetworkInLevel Property Definitions ********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadEditorFunctionLibrary_eventHasAnyStaleRoadNetworkInLevel_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HasAnyStaleRoadNetworkInLevel Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadEditorFunctionLibrary, nullptr, "HasAnyStaleRoadNetworkInLevel", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadEditorFunctionLibrary_eventHasAnyStaleRoadNetworkInLevel_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadEditorFunctionLibrary_eventHasAnyStaleRoadNetworkInLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadEditorFunctionLibrary_HasAnyStaleRoadNetworkInLevel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadEditorFunctionLibrary::execHasAnyStaleRoadNetworkInLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URoadEditorFunctionLibrary::HasAnyStaleRoadNetworkInLevel();
	P_NATIVE_END;
}
// ********** End Class URoadEditorFunctionLibrary Function HasAnyStaleRoadNetworkInLevel **********

// ********** Begin Class URoadEditorFunctionLibrary Function MakeLanesProfileFromRoadDrawPreset ***
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadEditorFunctionLibrary_MakeLanesProfileFromRoadDrawPreset_Statics
struct UHT_STATICS
{
	struct RoadEditorFunctionLibrary_eventMakeLanesProfileFromRoadDrawPreset_Parms
	{
		const UDynamicRoadDrawPreset* Preset;
		TArray<FDynamicRoadLaneProfile> LanesProfile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function MakeLanesProfileFromRoadDrawPreset constinit property declarations ****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Preset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LanesProfile_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LanesProfile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MakeLanesProfileFromRoadDrawPreset constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MakeLanesProfileFromRoadDrawPreset Property Definitions ***************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventMakeLanesProfileFromRoadDrawPreset_Parms, Preset), Z_Construct_UClass_UDynamicRoadDrawPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preset_MetaData), NewProp_Preset_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LanesProfile_Inner = { "LanesProfile", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDynamicRoadLaneProfile, METADATA_PARAMS(0, nullptr) }; // 4d067be417e094fa52171a1b284cf0fc195cd630
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_LanesProfile = { "LanesProfile", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventMakeLanesProfileFromRoadDrawPreset_Parms, LanesProfile), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4d067be417e094fa52171a1b284cf0fc195cd630
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Preset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LanesProfile_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LanesProfile,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MakeLanesProfileFromRoadDrawPreset Property Definitions *****************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadEditorFunctionLibrary, nullptr, "MakeLanesProfileFromRoadDrawPreset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadEditorFunctionLibrary_eventMakeLanesProfileFromRoadDrawPreset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadEditorFunctionLibrary_eventMakeLanesProfileFromRoadDrawPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadEditorFunctionLibrary_MakeLanesProfileFromRoadDrawPreset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadEditorFunctionLibrary::execMakeLanesProfileFromRoadDrawPreset)
{
	P_GET_OBJECT(UDynamicRoadDrawPreset,Z_Param_Preset);
	P_GET_TARRAY_REF(FDynamicRoadLaneProfile,Z_Param_Out_LanesProfile);
	P_FINISH;
	P_NATIVE_BEGIN;
	URoadEditorFunctionLibrary::MakeLanesProfileFromRoadDrawPreset(Z_Param_Preset,Z_Param_Out_LanesProfile);
	P_NATIVE_END;
}
// ********** End Class URoadEditorFunctionLibrary Function MakeLanesProfileFromRoadDrawPreset *****

// ********** Begin Class URoadEditorFunctionLibrary Function OpenRoadBLDProjectSettings ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadEditorFunctionLibrary_OpenRoadBLDProjectSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Settings" },
		{ "Comment", "/** Opens Project Settings focused on the RoadBLD settings section (URoadBLDRuntimeSettings). */" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
		{ "ToolTip", "Opens Project Settings focused on the RoadBLD settings section (URoadBLDRuntimeSettings)." },
	};
#endif // WITH_METADATA

// ********** Begin Function OpenRoadBLDProjectSettings constinit property declarations ************
// ********** End Function OpenRoadBLDProjectSettings constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadEditorFunctionLibrary, nullptr, "OpenRoadBLDProjectSettings", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URoadEditorFunctionLibrary_OpenRoadBLDProjectSettings(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadEditorFunctionLibrary::execOpenRoadBLDProjectSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	URoadEditorFunctionLibrary::OpenRoadBLDProjectSettings();
	P_NATIVE_END;
}
// ********** End Class URoadEditorFunctionLibrary Function OpenRoadBLDProjectSettings *************

// ********** Begin Class URoadEditorFunctionLibrary Function PDI_DrawEdgeCurve ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadEditorFunctionLibrary_PDI_DrawEdgeCurve_Statics
struct UHT_STATICS
{
	struct RoadEditorFunctionLibrary_eventPDI_DrawEdgeCurve_Parms
	{
		FPrimitiveDrawWrapper Renderer;
		FPrimitiveDrawParams DrawParams;
		UEdgeCurve* EdgeCurve;
		double StartDistance;
		double EndDistance;
		float ZOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad|Debug" },
		{ "CPP_Default_EndDistance", "-1.000000" },
		{ "CPP_Default_StartDistance", "0.000000" },
		{ "CPP_Default_ZOffset", "0.000000" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PDI_DrawEdgeCurve constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Renderer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrawParams;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EdgeCurve;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StartDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EndDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PDI_DrawEdgeCurve constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PDI_DrawEdgeCurve Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Renderer = { "Renderer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventPDI_DrawEdgeCurve_Parms, Renderer), Z_Construct_UScriptStruct_FPrimitiveDrawWrapper, METADATA_PARAMS(0, nullptr) }; // 998fb980e2b93b5044372aa3bf728e08ae208919
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DrawParams = { "DrawParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventPDI_DrawEdgeCurve_Parms, DrawParams), Z_Construct_UScriptStruct_FPrimitiveDrawParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawParams_MetaData), NewProp_DrawParams_MetaData) }; // 8eaeef4d86935902d24aacba3994a2626d17a849
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_EdgeCurve = { "EdgeCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventPDI_DrawEdgeCurve_Parms, EdgeCurve), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_StartDistance = { "StartDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventPDI_DrawEdgeCurve_Parms, StartDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_EndDistance = { "EndDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventPDI_DrawEdgeCurve_Parms, EndDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventPDI_DrawEdgeCurve_Parms, ZOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Renderer,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DrawParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZOffset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PDI_DrawEdgeCurve Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadEditorFunctionLibrary, nullptr, "PDI_DrawEdgeCurve", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadEditorFunctionLibrary_eventPDI_DrawEdgeCurve_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadEditorFunctionLibrary_eventPDI_DrawEdgeCurve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadEditorFunctionLibrary_PDI_DrawEdgeCurve(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadEditorFunctionLibrary::execPDI_DrawEdgeCurve)
{
	P_GET_STRUCT(FPrimitiveDrawWrapper,Z_Param_Renderer);
	P_GET_STRUCT_REF(FPrimitiveDrawParams,Z_Param_Out_DrawParams);
	P_GET_OBJECT(UEdgeCurve,Z_Param_EdgeCurve);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_StartDistance);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_EndDistance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	URoadEditorFunctionLibrary::PDI_DrawEdgeCurve(Z_Param_Renderer,Z_Param_Out_DrawParams,Z_Param_EdgeCurve,Z_Param_StartDistance,Z_Param_EndDistance,Z_Param_ZOffset);
	P_NATIVE_END;
}
// ********** End Class URoadEditorFunctionLibrary Function PDI_DrawEdgeCurve **********************

// ********** Begin Class URoadEditorFunctionLibrary Function PDI_DrawRoadEdgeCurves ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadEditorFunctionLibrary_PDI_DrawRoadEdgeCurves_Statics
struct UHT_STATICS
{
	struct RoadEditorFunctionLibrary_eventPDI_DrawRoadEdgeCurves_Parms
	{
		FPrimitiveDrawWrapper Renderer;
		ADynamicRoad* Road;
		FLinearColor Color;
		float Thickness;
		float ZOffset;
		bool bForegroundDepth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad|Debug" },
		{ "Comment", "/**\n\x09 * Draws all EdgeCurves of a DynamicRoad with specified visual parameters\n\x09 * @param Renderer - The primitive draw wrapper containing the PDI\n\x09 * @param Road - The DynamicRoad whose edge curves should be drawn\n\x09 * @param Color - The color to use for drawing the edge curves\n\x09 * @param Thickness - The line thickness for the edge curves\n\x09 * @param ZOffset - Optional Z-offset to raise the lines above the road surface\n\x09 * @param bForegroundDepth - Whether to draw in foreground depth (always visible)\n\x09 */" },
		{ "CPP_Default_bForegroundDepth", "false" },
		{ "CPP_Default_Color", "(R=0.600000,G=0.400000,B=0.800000,A=1.000000)" },
		{ "CPP_Default_Thickness", "5.000000" },
		{ "CPP_Default_ZOffset", "10.000000" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
		{ "ToolTip", "Draws all EdgeCurves of a DynamicRoad with specified visual parameters\n@param Renderer - The primitive draw wrapper containing the PDI\n@param Road - The DynamicRoad whose edge curves should be drawn\n@param Color - The color to use for drawing the edge curves\n@param Thickness - The line thickness for the edge curves\n@param ZOffset - Optional Z-offset to raise the lines above the road surface\n@param bForegroundDepth - Whether to draw in foreground depth (always visible)" },
	};
#endif // WITH_METADATA

// ********** Begin Function PDI_DrawRoadEdgeCurves constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Renderer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Road;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
	static void NewProp_bForegroundDepth_SetBit(void* Obj)
	{
		((RoadEditorFunctionLibrary_eventPDI_DrawRoadEdgeCurves_Parms*)Obj)->bForegroundDepth = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForegroundDepth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PDI_DrawRoadEdgeCurves constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PDI_DrawRoadEdgeCurves Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Renderer = { "Renderer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventPDI_DrawRoadEdgeCurves_Parms, Renderer), Z_Construct_UScriptStruct_FPrimitiveDrawWrapper, METADATA_PARAMS(0, nullptr) }; // 998fb980e2b93b5044372aa3bf728e08ae208919
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Road = { "Road", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventPDI_DrawRoadEdgeCurves_Parms, Road), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventPDI_DrawRoadEdgeCurves_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventPDI_DrawRoadEdgeCurves_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventPDI_DrawRoadEdgeCurves_Parms, ZOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bForegroundDepth = { "bForegroundDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadEditorFunctionLibrary_eventPDI_DrawRoadEdgeCurves_Parms), &UHT_STATICS::NewProp_bForegroundDepth_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Renderer,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Road,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bForegroundDepth,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PDI_DrawRoadEdgeCurves Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadEditorFunctionLibrary, nullptr, "PDI_DrawRoadEdgeCurves", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadEditorFunctionLibrary_eventPDI_DrawRoadEdgeCurves_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadEditorFunctionLibrary_eventPDI_DrawRoadEdgeCurves_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadEditorFunctionLibrary_PDI_DrawRoadEdgeCurves(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadEditorFunctionLibrary::execPDI_DrawRoadEdgeCurves)
{
	P_GET_STRUCT(FPrimitiveDrawWrapper,Z_Param_Renderer);
	P_GET_OBJECT(ADynamicRoad,Z_Param_Road);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZOffset);
	P_GET_UBOOL(Z_Param_bForegroundDepth);
	P_FINISH;
	P_NATIVE_BEGIN;
	URoadEditorFunctionLibrary::PDI_DrawRoadEdgeCurves(Z_Param_Renderer,Z_Param_Road,Z_Param_Color,Z_Param_Thickness,Z_Param_ZOffset,Z_Param_bForegroundDepth);
	P_NATIVE_END;
}
// ********** End Class URoadEditorFunctionLibrary Function PDI_DrawRoadEdgeCurves *****************

// ********** Begin Class URoadEditorFunctionLibrary Function PDI_DrawRoadLaneDirectionArrows ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadEditorFunctionLibrary_PDI_DrawRoadLaneDirectionArrows_Statics
struct UHT_STATICS
{
	struct RoadEditorFunctionLibrary_eventPDI_DrawRoadLaneDirectionArrows_Parms
	{
		FPrimitiveDrawWrapper Renderer;
		ADynamicRoad* Road;
		FLinearColor Color;
		double ArrowSpacing;
		double ArrowLength;
		double ArrowWidth;
		float Thickness;
		float ZOffset;
		UDynamicRoadLane* TargetLane;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad|Debug" },
		{ "Comment", "/**\n\x09 * Draws direction arrows for all lanes in a DynamicRoad\n\x09 * @param Renderer - The primitive draw wrapper containing the PDI\n\x09 * @param Road - The DynamicRoad whose lane arrows should be drawn\n\x09 * @param Color - The color to use for drawing the arrows\n\x09 * @param ArrowSpacing - Distance between arrows along the lane (in Unreal units)\n\x09 * @param ArrowLength - Length of each arrow (in Unreal units)\n\x09 * @param ArrowWidth - Width of the arrow head (in Unreal units)\n\x09 * @param Thickness - The line thickness for the arrows\n\x09 * @param ZOffset - Optional Z-offset to raise the arrows above the road surface\n\x09 * @param TargetLane - Optional target lane to highlight in yellow (nullptr = use default color for all lanes)\n\x09 */" },
		{ "CPP_Default_ArrowLength", "200.000000" },
		{ "CPP_Default_ArrowSpacing", "1000.000000" },
		{ "CPP_Default_ArrowWidth", "100.000000" },
		{ "CPP_Default_Color", "(R=0.600000,G=0.400000,B=0.800000,A=1.000000)" },
		{ "CPP_Default_TargetLane", "None" },
		{ "CPP_Default_Thickness", "3.000000" },
		{ "CPP_Default_ZOffset", "10.000000" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
		{ "ToolTip", "Draws direction arrows for all lanes in a DynamicRoad\n@param Renderer - The primitive draw wrapper containing the PDI\n@param Road - The DynamicRoad whose lane arrows should be drawn\n@param Color - The color to use for drawing the arrows\n@param ArrowSpacing - Distance between arrows along the lane (in Unreal units)\n@param ArrowLength - Length of each arrow (in Unreal units)\n@param ArrowWidth - Width of the arrow head (in Unreal units)\n@param Thickness - The line thickness for the arrows\n@param ZOffset - Optional Z-offset to raise the arrows above the road surface\n@param TargetLane - Optional target lane to highlight in yellow (nullptr = use default color for all lanes)" },
	};
#endif // WITH_METADATA

// ********** Begin Function PDI_DrawRoadLaneDirectionArrows constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Renderer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Road;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ArrowSpacing;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ArrowLength;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ArrowWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetLane;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PDI_DrawRoadLaneDirectionArrows constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PDI_DrawRoadLaneDirectionArrows Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Renderer = { "Renderer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventPDI_DrawRoadLaneDirectionArrows_Parms, Renderer), Z_Construct_UScriptStruct_FPrimitiveDrawWrapper, METADATA_PARAMS(0, nullptr) }; // 998fb980e2b93b5044372aa3bf728e08ae208919
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Road = { "Road", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventPDI_DrawRoadLaneDirectionArrows_Parms, Road), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventPDI_DrawRoadLaneDirectionArrows_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ArrowSpacing = { "ArrowSpacing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventPDI_DrawRoadLaneDirectionArrows_Parms, ArrowSpacing), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ArrowLength = { "ArrowLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventPDI_DrawRoadLaneDirectionArrows_Parms, ArrowLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ArrowWidth = { "ArrowWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventPDI_DrawRoadLaneDirectionArrows_Parms, ArrowWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventPDI_DrawRoadLaneDirectionArrows_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventPDI_DrawRoadLaneDirectionArrows_Parms, ZOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetLane = { "TargetLane", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventPDI_DrawRoadLaneDirectionArrows_Parms, TargetLane), Z_Construct_UClass_UDynamicRoadLane, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Renderer,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Road,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ArrowSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ArrowLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ArrowWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetLane,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PDI_DrawRoadLaneDirectionArrows Property Definitions ********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadEditorFunctionLibrary, nullptr, "PDI_DrawRoadLaneDirectionArrows", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadEditorFunctionLibrary_eventPDI_DrawRoadLaneDirectionArrows_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadEditorFunctionLibrary_eventPDI_DrawRoadLaneDirectionArrows_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadEditorFunctionLibrary_PDI_DrawRoadLaneDirectionArrows(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadEditorFunctionLibrary::execPDI_DrawRoadLaneDirectionArrows)
{
	P_GET_STRUCT(FPrimitiveDrawWrapper,Z_Param_Renderer);
	P_GET_OBJECT(ADynamicRoad,Z_Param_Road);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_ArrowSpacing);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_ArrowLength);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_ArrowWidth);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZOffset);
	P_GET_OBJECT(UDynamicRoadLane,Z_Param_TargetLane);
	P_FINISH;
	P_NATIVE_BEGIN;
	URoadEditorFunctionLibrary::PDI_DrawRoadLaneDirectionArrows(Z_Param_Renderer,Z_Param_Road,Z_Param_Color,Z_Param_ArrowSpacing,Z_Param_ArrowLength,Z_Param_ArrowWidth,Z_Param_Thickness,Z_Param_ZOffset,Z_Param_TargetLane);
	P_NATIVE_END;
}
// ********** End Class URoadEditorFunctionLibrary Function PDI_DrawRoadLaneDirectionArrows ********

// ********** Begin Class URoadEditorFunctionLibrary Function RebuildAllRoadNetworksInLevel ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadEditorFunctionLibrary_RebuildAllRoadNetworksInLevel_Statics
struct UHT_STATICS
{
	struct RoadEditorFunctionLibrary_eventRebuildAllRoadNetworksInLevel_Parms
	{
		bool bForceFullRebuild;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "Comment", "/** Rebuilds every ADynamicRoadNetwork in the current editor world. */" },
		{ "CPP_Default_bForceFullRebuild", "false" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
		{ "ToolTip", "Rebuilds every ADynamicRoadNetwork in the current editor world." },
	};
#endif // WITH_METADATA

// ********** Begin Function RebuildAllRoadNetworksInLevel constinit property declarations *********
	static void NewProp_bForceFullRebuild_SetBit(void* Obj)
	{
		((RoadEditorFunctionLibrary_eventRebuildAllRoadNetworksInLevel_Parms*)Obj)->bForceFullRebuild = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceFullRebuild;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RoadEditorFunctionLibrary_eventRebuildAllRoadNetworksInLevel_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RebuildAllRoadNetworksInLevel constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RebuildAllRoadNetworksInLevel Property Definitions ********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bForceFullRebuild = { "bForceFullRebuild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadEditorFunctionLibrary_eventRebuildAllRoadNetworksInLevel_Parms), &UHT_STATICS::NewProp_bForceFullRebuild_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadEditorFunctionLibrary_eventRebuildAllRoadNetworksInLevel_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bForceFullRebuild,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RebuildAllRoadNetworksInLevel Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadEditorFunctionLibrary, nullptr, "RebuildAllRoadNetworksInLevel", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadEditorFunctionLibrary_eventRebuildAllRoadNetworksInLevel_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadEditorFunctionLibrary_eventRebuildAllRoadNetworksInLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadEditorFunctionLibrary_RebuildAllRoadNetworksInLevel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadEditorFunctionLibrary::execRebuildAllRoadNetworksInLevel)
{
	P_GET_UBOOL(Z_Param_bForceFullRebuild);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URoadEditorFunctionLibrary::RebuildAllRoadNetworksInLevel(Z_Param_bForceFullRebuild);
	P_NATIVE_END;
}
// ********** End Class URoadEditorFunctionLibrary Function RebuildAllRoadNetworksInLevel **********

// ********** Begin Class URoadEditorFunctionLibrary Function RebuildRoadsByOwningNetwork **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadEditorFunctionLibrary_RebuildRoadsByOwningNetwork_Statics
struct UHT_STATICS
{
	struct RoadEditorFunctionLibrary_eventRebuildRoadsByOwningNetwork_Parms
	{
		TArray<ADynamicRoad*> ModifiedRoads;
		bool bForceFullRebuild;
		bool bLowQualityMesh;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "Comment", "/** Rebuilds each road in ModifiedRoads through its owning ADynamicRoadNetwork. */" },
		{ "CPP_Default_bForceFullRebuild", "false" },
		{ "CPP_Default_bLowQualityMesh", "false" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
		{ "ToolTip", "Rebuilds each road in ModifiedRoads through its owning ADynamicRoadNetwork." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifiedRoads_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RebuildRoadsByOwningNetwork constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ModifiedRoads_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedRoads;
	static void NewProp_bForceFullRebuild_SetBit(void* Obj)
	{
		((RoadEditorFunctionLibrary_eventRebuildRoadsByOwningNetwork_Parms*)Obj)->bForceFullRebuild = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceFullRebuild;
	static void NewProp_bLowQualityMesh_SetBit(void* Obj)
	{
		((RoadEditorFunctionLibrary_eventRebuildRoadsByOwningNetwork_Parms*)Obj)->bLowQualityMesh = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLowQualityMesh;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RoadEditorFunctionLibrary_eventRebuildRoadsByOwningNetwork_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RebuildRoadsByOwningNetwork constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RebuildRoadsByOwningNetwork Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ModifiedRoads_Inner = { "ModifiedRoads", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ModifiedRoads = { "ModifiedRoads", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventRebuildRoadsByOwningNetwork_Parms, ModifiedRoads), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifiedRoads_MetaData), NewProp_ModifiedRoads_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bForceFullRebuild = { "bForceFullRebuild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadEditorFunctionLibrary_eventRebuildRoadsByOwningNetwork_Parms), &UHT_STATICS::NewProp_bForceFullRebuild_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLowQualityMesh = { "bLowQualityMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadEditorFunctionLibrary_eventRebuildRoadsByOwningNetwork_Parms), &UHT_STATICS::NewProp_bLowQualityMesh_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadEditorFunctionLibrary_eventRebuildRoadsByOwningNetwork_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ModifiedRoads_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ModifiedRoads,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bForceFullRebuild,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLowQualityMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RebuildRoadsByOwningNetwork Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadEditorFunctionLibrary, nullptr, "RebuildRoadsByOwningNetwork", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadEditorFunctionLibrary_eventRebuildRoadsByOwningNetwork_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadEditorFunctionLibrary_eventRebuildRoadsByOwningNetwork_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadEditorFunctionLibrary_RebuildRoadsByOwningNetwork(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadEditorFunctionLibrary::execRebuildRoadsByOwningNetwork)
{
	P_GET_TARRAY_REF(ADynamicRoad*,Z_Param_Out_ModifiedRoads);
	P_GET_UBOOL(Z_Param_bForceFullRebuild);
	P_GET_UBOOL(Z_Param_bLowQualityMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URoadEditorFunctionLibrary::RebuildRoadsByOwningNetwork(Z_Param_Out_ModifiedRoads,Z_Param_bForceFullRebuild,Z_Param_bLowQualityMesh);
	P_NATIVE_END;
}
// ********** End Class URoadEditorFunctionLibrary Function RebuildRoadsByOwningNetwork ************

// ********** Begin Class URoadEditorFunctionLibrary Function RebuildStaleRoadNetworksInLevel ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadEditorFunctionLibrary_RebuildStaleRoadNetworksInLevel_Statics
struct UHT_STATICS
{
	struct RoadEditorFunctionLibrary_eventRebuildStaleRoadNetworksInLevel_Parms
	{
		bool bForceFullRebuild;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "Comment", "/** Rebuilds only stale ADynamicRoadNetwork actors in the current editor world using full-network rebuild requests. */" },
		{ "CPP_Default_bForceFullRebuild", "true" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
		{ "ToolTip", "Rebuilds only stale ADynamicRoadNetwork actors in the current editor world using full-network rebuild requests." },
	};
#endif // WITH_METADATA

// ********** Begin Function RebuildStaleRoadNetworksInLevel constinit property declarations *******
	static void NewProp_bForceFullRebuild_SetBit(void* Obj)
	{
		((RoadEditorFunctionLibrary_eventRebuildStaleRoadNetworksInLevel_Parms*)Obj)->bForceFullRebuild = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceFullRebuild;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RoadEditorFunctionLibrary_eventRebuildStaleRoadNetworksInLevel_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RebuildStaleRoadNetworksInLevel constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RebuildStaleRoadNetworksInLevel Property Definitions ******************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bForceFullRebuild = { "bForceFullRebuild", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadEditorFunctionLibrary_eventRebuildStaleRoadNetworksInLevel_Parms), &UHT_STATICS::NewProp_bForceFullRebuild_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadEditorFunctionLibrary_eventRebuildStaleRoadNetworksInLevel_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bForceFullRebuild,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RebuildStaleRoadNetworksInLevel Property Definitions ********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadEditorFunctionLibrary, nullptr, "RebuildStaleRoadNetworksInLevel", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadEditorFunctionLibrary_eventRebuildStaleRoadNetworksInLevel_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadEditorFunctionLibrary_eventRebuildStaleRoadNetworksInLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadEditorFunctionLibrary_RebuildStaleRoadNetworksInLevel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadEditorFunctionLibrary::execRebuildStaleRoadNetworksInLevel)
{
	P_GET_UBOOL(Z_Param_bForceFullRebuild);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URoadEditorFunctionLibrary::RebuildStaleRoadNetworksInLevel(Z_Param_bForceFullRebuild);
	P_NATIVE_END;
}
// ********** End Class URoadEditorFunctionLibrary Function RebuildStaleRoadNetworksInLevel ********

// ********** Begin Class URoadEditorFunctionLibrary Function RefreshIntersectionLandscapePatchesForRoadGeos 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadEditorFunctionLibrary_RefreshIntersectionLandscapePatchesForRoadGeos_Statics
struct UHT_STATICS
{
	struct RoadEditorFunctionLibrary_eventRefreshIntersectionLandscapePatchesForRoadGeos_Parms
	{
		TArray<ARoadGeo*> RoadGeos;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad|Landscape" },
		{ "Comment", "/** Re-applies intersection landscape patch settings for RoadGeo actors without a network rebuild. */" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
		{ "ToolTip", "Re-applies intersection landscape patch settings for RoadGeo actors without a network rebuild." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadGeos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RefreshIntersectionLandscapePatchesForRoadGeos constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoadGeos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoadGeos;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RoadEditorFunctionLibrary_eventRefreshIntersectionLandscapePatchesForRoadGeos_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RefreshIntersectionLandscapePatchesForRoadGeos constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RefreshIntersectionLandscapePatchesForRoadGeos Property Definitions ***
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoadGeos_Inner = { "RoadGeos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_ARoadGeo, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RoadGeos = { "RoadGeos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventRefreshIntersectionLandscapePatchesForRoadGeos_Parms, RoadGeos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadGeos_MetaData), NewProp_RoadGeos_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadEditorFunctionLibrary_eventRefreshIntersectionLandscapePatchesForRoadGeos_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadGeos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadGeos,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RefreshIntersectionLandscapePatchesForRoadGeos Property Definitions *****
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadEditorFunctionLibrary, nullptr, "RefreshIntersectionLandscapePatchesForRoadGeos", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadEditorFunctionLibrary_eventRefreshIntersectionLandscapePatchesForRoadGeos_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadEditorFunctionLibrary_eventRefreshIntersectionLandscapePatchesForRoadGeos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadEditorFunctionLibrary_RefreshIntersectionLandscapePatchesForRoadGeos(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadEditorFunctionLibrary::execRefreshIntersectionLandscapePatchesForRoadGeos)
{
	P_GET_TARRAY_REF(ARoadGeo*,Z_Param_Out_RoadGeos);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URoadEditorFunctionLibrary::RefreshIntersectionLandscapePatchesForRoadGeos(Z_Param_Out_RoadGeos);
	P_NATIVE_END;
}
// ********** End Class URoadEditorFunctionLibrary Function RefreshIntersectionLandscapePatchesForRoadGeos 

// ********** Begin Class URoadEditorFunctionLibrary Function RefreshLandscapeAlignmentForRoads ****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadEditorFunctionLibrary_RefreshLandscapeAlignmentForRoads_Statics
struct UHT_STATICS
{
	struct RoadEditorFunctionLibrary_eventRefreshLandscapeAlignmentForRoads_Parms
	{
		TArray<ADynamicRoad*> Roads;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad|Landscape" },
		{ "Comment", "/** Refreshes landscape conformity and mirror spline state for roads without rebuilding road meshes. */" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
		{ "ToolTip", "Refreshes landscape conformity and mirror spline state for roads without rebuilding road meshes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Roads_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RefreshLandscapeAlignmentForRoads constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Roads_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Roads;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RoadEditorFunctionLibrary_eventRefreshLandscapeAlignmentForRoads_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RefreshLandscapeAlignmentForRoads constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RefreshLandscapeAlignmentForRoads Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Roads_Inner = { "Roads", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Roads = { "Roads", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventRefreshLandscapeAlignmentForRoads_Parms, Roads), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Roads_MetaData), NewProp_Roads_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadEditorFunctionLibrary_eventRefreshLandscapeAlignmentForRoads_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Roads_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Roads,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RefreshLandscapeAlignmentForRoads Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadEditorFunctionLibrary, nullptr, "RefreshLandscapeAlignmentForRoads", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadEditorFunctionLibrary_eventRefreshLandscapeAlignmentForRoads_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadEditorFunctionLibrary_eventRefreshLandscapeAlignmentForRoads_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadEditorFunctionLibrary_RefreshLandscapeAlignmentForRoads(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadEditorFunctionLibrary::execRefreshLandscapeAlignmentForRoads)
{
	P_GET_TARRAY_REF(ADynamicRoad*,Z_Param_Out_Roads);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URoadEditorFunctionLibrary::RefreshLandscapeAlignmentForRoads(Z_Param_Out_Roads);
	P_NATIVE_END;
}
// ********** End Class URoadEditorFunctionLibrary Function RefreshLandscapeAlignmentForRoads ******

// ********** Begin Class URoadEditorFunctionLibrary Function RefreshLandscapePaintForRoads ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadEditorFunctionLibrary_RefreshLandscapePaintForRoads_Statics
struct UHT_STATICS
{
	struct RoadEditorFunctionLibrary_eventRefreshLandscapePaintForRoads_Parms
	{
		TArray<ADynamicRoad*> Roads;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad|Landscape" },
		{ "Comment", "/** Refreshes editor-only road landscape paint patches for roads without rebuilding road meshes. */" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
		{ "ToolTip", "Refreshes editor-only road landscape paint patches for roads without rebuilding road meshes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Roads_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RefreshLandscapePaintForRoads constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Roads_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Roads;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RoadEditorFunctionLibrary_eventRefreshLandscapePaintForRoads_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RefreshLandscapePaintForRoads constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RefreshLandscapePaintForRoads Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Roads_Inner = { "Roads", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Roads = { "Roads", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventRefreshLandscapePaintForRoads_Parms, Roads), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Roads_MetaData), NewProp_Roads_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadEditorFunctionLibrary_eventRefreshLandscapePaintForRoads_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Roads_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Roads,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RefreshLandscapePaintForRoads Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadEditorFunctionLibrary, nullptr, "RefreshLandscapePaintForRoads", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadEditorFunctionLibrary_eventRefreshLandscapePaintForRoads_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadEditorFunctionLibrary_eventRefreshLandscapePaintForRoads_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadEditorFunctionLibrary_RefreshLandscapePaintForRoads(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadEditorFunctionLibrary::execRefreshLandscapePaintForRoads)
{
	P_GET_TARRAY_REF(ADynamicRoad*,Z_Param_Out_Roads);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URoadEditorFunctionLibrary::RefreshLandscapePaintForRoads(Z_Param_Out_Roads);
	P_NATIVE_END;
}
// ********** End Class URoadEditorFunctionLibrary Function RefreshLandscapePaintForRoads **********

// ********** Begin Class URoadEditorFunctionLibrary Function ShouldRebuildRoadsAfterEveryEdit *****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadEditorFunctionLibrary_ShouldRebuildRoadsAfterEveryEdit_Statics
struct UHT_STATICS
{
	struct RoadEditorFunctionLibrary_eventShouldRebuildRoadsAfterEveryEdit_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "Comment", "/** Returns whether editor tools should auto-rebuild road networks after edits (see RoadBLD Advanced settings). */" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
		{ "ToolTip", "Returns whether editor tools should auto-rebuild road networks after edits (see RoadBLD Advanced settings)." },
	};
#endif // WITH_METADATA

// ********** Begin Function ShouldRebuildRoadsAfterEveryEdit constinit property declarations ******
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RoadEditorFunctionLibrary_eventShouldRebuildRoadsAfterEveryEdit_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShouldRebuildRoadsAfterEveryEdit constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShouldRebuildRoadsAfterEveryEdit Property Definitions *****************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadEditorFunctionLibrary_eventShouldRebuildRoadsAfterEveryEdit_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ShouldRebuildRoadsAfterEveryEdit Property Definitions *******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadEditorFunctionLibrary, nullptr, "ShouldRebuildRoadsAfterEveryEdit", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadEditorFunctionLibrary_eventShouldRebuildRoadsAfterEveryEdit_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadEditorFunctionLibrary_eventShouldRebuildRoadsAfterEveryEdit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadEditorFunctionLibrary_ShouldRebuildRoadsAfterEveryEdit(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadEditorFunctionLibrary::execShouldRebuildRoadsAfterEveryEdit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URoadEditorFunctionLibrary::ShouldRebuildRoadsAfterEveryEdit();
	P_NATIVE_END;
}
// ********** End Class URoadEditorFunctionLibrary Function ShouldRebuildRoadsAfterEveryEdit *******

// ********** Begin Class URoadEditorFunctionLibrary Function UpdatePreviewRoad ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadEditorFunctionLibrary_UpdatePreviewRoad_Statics
struct UHT_STATICS
{
	struct RoadEditorFunctionLibrary_eventUpdatePreviewRoad_Parms
	{
		ADynamicRoad* PreviewRoad;
		URoadControlSplineComponent* ExistingSpline;
		FVector NewPointLocation;
		UMaterialInterface* PreviewMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "Comment", "/**\n\x09 * Updates a preview road for rendering where the road will be after drawing\n\x09 * Copies the existing spline points and metadata, adds a new point at the end, and rebuilds the road\n\x09 * \n\x09 * @param PreviewRoad - The preview road actor to update\n\x09 * @param ExistingSpline - The existing control spline to copy points from\n\x09 * @param NewPointLocation - The location for the new point to add at the end\n\x09 * @param PreviewMaterial - The material to use for the preview road\n\x09 */" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
		{ "ToolTip", "Updates a preview road for rendering where the road will be after drawing\nCopies the existing spline points and metadata, adds a new point at the end, and rebuilds the road\n\n@param PreviewRoad - The preview road actor to update\n@param ExistingSpline - The existing control spline to copy points from\n@param NewPointLocation - The location for the new point to add at the end\n@param PreviewMaterial - The material to use for the preview road" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExistingSpline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdatePreviewRoad constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewRoad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExistingSpline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewPointLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdatePreviewRoad constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdatePreviewRoad Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PreviewRoad = { "PreviewRoad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventUpdatePreviewRoad_Parms, PreviewRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ExistingSpline = { "ExistingSpline", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventUpdatePreviewRoad_Parms, ExistingSpline), Z_Construct_UClass_URoadControlSplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExistingSpline_MetaData), NewProp_ExistingSpline_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NewPointLocation = { "NewPointLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventUpdatePreviewRoad_Parms, NewPointLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PreviewMaterial = { "PreviewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventUpdatePreviewRoad_Parms, PreviewMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviewRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExistingSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewPointLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviewMaterial,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UpdatePreviewRoad Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadEditorFunctionLibrary, nullptr, "UpdatePreviewRoad", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadEditorFunctionLibrary_eventUpdatePreviewRoad_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadEditorFunctionLibrary_eventUpdatePreviewRoad_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadEditorFunctionLibrary_UpdatePreviewRoad(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadEditorFunctionLibrary::execUpdatePreviewRoad)
{
	P_GET_OBJECT(ADynamicRoad,Z_Param_PreviewRoad);
	P_GET_OBJECT(URoadControlSplineComponent,Z_Param_ExistingSpline);
	P_GET_STRUCT(FVector,Z_Param_NewPointLocation);
	P_GET_OBJECT(UMaterialInterface,Z_Param_PreviewMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	URoadEditorFunctionLibrary::UpdatePreviewRoad(Z_Param_PreviewRoad,Z_Param_ExistingSpline,Z_Param_NewPointLocation,Z_Param_PreviewMaterial);
	P_NATIVE_END;
}
// ********** End Class URoadEditorFunctionLibrary Function UpdatePreviewRoad **********************

// ********** Begin Class URoadEditorFunctionLibrary Function UpdateRoadBLDSettings ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadEditorFunctionLibrary_UpdateRoadBLDSettings_Statics
struct UHT_STATICS
{
	struct RoadEditorFunctionLibrary_eventUpdateRoadBLDSettings_Parms
	{
		URoadBLDRuntimeSettings* Settings;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Settings" },
		{ "Comment", "/**\n\x09 * Updates RoadBLDRuntimeSettings and saves to config file\n\x09 * Checks if DefaultRoadBLD.ini is writable before saving, attempts to make writable if read-only\n\x09 * @param Settings - The RoadBLDRuntimeSettings object to save\n\x09 * @return True if the settings were successfully saved, false if the file is read-only or settings are invalid\n\x09 */" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
		{ "ToolTip", "Updates RoadBLDRuntimeSettings and saves to config file\nChecks if DefaultRoadBLD.ini is writable before saving, attempts to make writable if read-only\n@param Settings - The RoadBLDRuntimeSettings object to save\n@return True if the settings were successfully saved, false if the file is read-only or settings are invalid" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateRoadBLDSettings constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RoadEditorFunctionLibrary_eventUpdateRoadBLDSettings_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateRoadBLDSettings constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateRoadBLDSettings Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadEditorFunctionLibrary_eventUpdateRoadBLDSettings_Parms, Settings), Z_Construct_UClass_URoadBLDRuntimeSettings, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadEditorFunctionLibrary_eventUpdateRoadBLDSettings_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UpdateRoadBLDSettings Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadEditorFunctionLibrary, nullptr, "UpdateRoadBLDSettings", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadEditorFunctionLibrary_eventUpdateRoadBLDSettings_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadEditorFunctionLibrary_eventUpdateRoadBLDSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadEditorFunctionLibrary_UpdateRoadBLDSettings(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadEditorFunctionLibrary::execUpdateRoadBLDSettings)
{
	P_GET_OBJECT(URoadBLDRuntimeSettings,Z_Param_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URoadEditorFunctionLibrary::UpdateRoadBLDSettings(Z_Param_Settings);
	P_NATIVE_END;
}
// ********** End Class URoadEditorFunctionLibrary Function UpdateRoadBLDSettings ******************

// ********** Begin Class URoadEditorFunctionLibrary Function WorldHasAnyLandscape *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadEditorFunctionLibrary_WorldHasAnyLandscape_Statics
struct UHT_STATICS
{
	struct RoadEditorFunctionLibrary_eventWorldHasAnyLandscape_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad|Landscape" },
		{ "Comment", "/** Returns true if the current editor world has at least one landscape proxy actor. */" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
		{ "ToolTip", "Returns true if the current editor world has at least one landscape proxy actor." },
	};
#endif // WITH_METADATA

// ********** Begin Function WorldHasAnyLandscape constinit property declarations ******************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RoadEditorFunctionLibrary_eventWorldHasAnyLandscape_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WorldHasAnyLandscape constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WorldHasAnyLandscape Property Definitions *****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadEditorFunctionLibrary_eventWorldHasAnyLandscape_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function WorldHasAnyLandscape Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadEditorFunctionLibrary, nullptr, "WorldHasAnyLandscape", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadEditorFunctionLibrary_eventWorldHasAnyLandscape_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadEditorFunctionLibrary_eventWorldHasAnyLandscape_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadEditorFunctionLibrary_WorldHasAnyLandscape(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadEditorFunctionLibrary::execWorldHasAnyLandscape)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URoadEditorFunctionLibrary::WorldHasAnyLandscape();
	P_NATIVE_END;
}
// ********** End Class URoadEditorFunctionLibrary Function WorldHasAnyLandscape *******************

// ********** Begin Class URoadEditorFunctionLibrary ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoadEditorFunctionLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "RoadEditorUtilityLibrary.h" },
		{ "ModuleRelativePath", "Public/RoadEditorUtilityLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URoadEditorFunctionLibrary constinit property declarations ***************
// ********** End Class URoadEditorFunctionLibrary constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CalculateRefLineForInteractiveEdit"), .Pointer = &URoadEditorFunctionLibrary::execCalculateRefLineForInteractiveEdit },
		{ .NameUTF8 = UTF8TEXT("CheckRoadShapeValidity"), .Pointer = &URoadEditorFunctionLibrary::execCheckRoadShapeValidity },
		{ .NameUTF8 = UTF8TEXT("CreateMergePreset"), .Pointer = &URoadEditorFunctionLibrary::execCreateMergePreset },
		{ .NameUTF8 = UTF8TEXT("DuplicateRoad"), .Pointer = &URoadEditorFunctionLibrary::execDuplicateRoad },
		{ .NameUTF8 = UTF8TEXT("FindRoadNetworkForRoad"), .Pointer = &URoadEditorFunctionLibrary::execFindRoadNetworkForRoad },
		{ .NameUTF8 = UTF8TEXT("FindRoadNetworkInLevel"), .Pointer = &URoadEditorFunctionLibrary::execFindRoadNetworkInLevel },
		{ .NameUTF8 = UTF8TEXT("GetAllLandscapePaintLayerNames"), .Pointer = &URoadEditorFunctionLibrary::execGetAllLandscapePaintLayerNames },
		{ .NameUTF8 = UTF8TEXT("GetAllRoadNetworksInLevel"), .Pointer = &URoadEditorFunctionLibrary::execGetAllRoadNetworksInLevel },
		{ .NameUTF8 = UTF8TEXT("GetStaleRoadNetworksInLevel"), .Pointer = &URoadEditorFunctionLibrary::execGetStaleRoadNetworksInLevel },
		{ .NameUTF8 = UTF8TEXT("HasAnyStaleRoadNetworkInLevel"), .Pointer = &URoadEditorFunctionLibrary::execHasAnyStaleRoadNetworkInLevel },
		{ .NameUTF8 = UTF8TEXT("MakeLanesProfileFromRoadDrawPreset"), .Pointer = &URoadEditorFunctionLibrary::execMakeLanesProfileFromRoadDrawPreset },
		{ .NameUTF8 = UTF8TEXT("OpenRoadBLDProjectSettings"), .Pointer = &URoadEditorFunctionLibrary::execOpenRoadBLDProjectSettings },
		{ .NameUTF8 = UTF8TEXT("PDI_DrawEdgeCurve"), .Pointer = &URoadEditorFunctionLibrary::execPDI_DrawEdgeCurve },
		{ .NameUTF8 = UTF8TEXT("PDI_DrawRoadEdgeCurves"), .Pointer = &URoadEditorFunctionLibrary::execPDI_DrawRoadEdgeCurves },
		{ .NameUTF8 = UTF8TEXT("PDI_DrawRoadLaneDirectionArrows"), .Pointer = &URoadEditorFunctionLibrary::execPDI_DrawRoadLaneDirectionArrows },
		{ .NameUTF8 = UTF8TEXT("RebuildAllRoadNetworksInLevel"), .Pointer = &URoadEditorFunctionLibrary::execRebuildAllRoadNetworksInLevel },
		{ .NameUTF8 = UTF8TEXT("RebuildRoadsByOwningNetwork"), .Pointer = &URoadEditorFunctionLibrary::execRebuildRoadsByOwningNetwork },
		{ .NameUTF8 = UTF8TEXT("RebuildStaleRoadNetworksInLevel"), .Pointer = &URoadEditorFunctionLibrary::execRebuildStaleRoadNetworksInLevel },
		{ .NameUTF8 = UTF8TEXT("RefreshIntersectionLandscapePatchesForRoadGeos"), .Pointer = &URoadEditorFunctionLibrary::execRefreshIntersectionLandscapePatchesForRoadGeos },
		{ .NameUTF8 = UTF8TEXT("RefreshLandscapeAlignmentForRoads"), .Pointer = &URoadEditorFunctionLibrary::execRefreshLandscapeAlignmentForRoads },
		{ .NameUTF8 = UTF8TEXT("RefreshLandscapePaintForRoads"), .Pointer = &URoadEditorFunctionLibrary::execRefreshLandscapePaintForRoads },
		{ .NameUTF8 = UTF8TEXT("ShouldRebuildRoadsAfterEveryEdit"), .Pointer = &URoadEditorFunctionLibrary::execShouldRebuildRoadsAfterEveryEdit },
		{ .NameUTF8 = UTF8TEXT("UpdatePreviewRoad"), .Pointer = &URoadEditorFunctionLibrary::execUpdatePreviewRoad },
		{ .NameUTF8 = UTF8TEXT("UpdateRoadBLDSettings"), .Pointer = &URoadEditorFunctionLibrary::execUpdateRoadBLDSettings },
		{ .NameUTF8 = UTF8TEXT("WorldHasAnyLandscape"), .Pointer = &URoadEditorFunctionLibrary::execWorldHasAnyLandscape },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URoadEditorFunctionLibrary_CalculateRefLineForInteractiveEdit, "CalculateRefLineForInteractiveEdit" }, // 9ea10b410687b06368b4e520a5ad5ec8ecc4ad00
		{ &Z_Construct_UFunction_URoadEditorFunctionLibrary_CheckRoadShapeValidity, "CheckRoadShapeValidity" }, // 8171de42150e84fe13087710e6aedaea49f94a11
		{ &Z_Construct_UFunction_URoadEditorFunctionLibrary_CreateMergePreset, "CreateMergePreset" }, // 09ef60ed8082e7769c221147286e09d6d0a19a1d
		{ &Z_Construct_UFunction_URoadEditorFunctionLibrary_DuplicateRoad, "DuplicateRoad" }, // 40d9c07d23811f7aa9edc734e7ca15be7500d418
		{ &Z_Construct_UFunction_URoadEditorFunctionLibrary_FindRoadNetworkForRoad, "FindRoadNetworkForRoad" }, // 62128d737bf95f52cdaeff390965cf0eff02f68d
		{ &Z_Construct_UFunction_URoadEditorFunctionLibrary_FindRoadNetworkInLevel, "FindRoadNetworkInLevel" }, // e0ced0a688a9fd710db951a308f43645b64d39e5
		{ &Z_Construct_UFunction_URoadEditorFunctionLibrary_GetAllLandscapePaintLayerNames, "GetAllLandscapePaintLayerNames" }, // e5c901600cf8f8145c7989cf4fa4793eb3085ff7
		{ &Z_Construct_UFunction_URoadEditorFunctionLibrary_GetAllRoadNetworksInLevel, "GetAllRoadNetworksInLevel" }, // dc41d5a1874b477b55923a7bcafb41dc134fd1fd
		{ &Z_Construct_UFunction_URoadEditorFunctionLibrary_GetStaleRoadNetworksInLevel, "GetStaleRoadNetworksInLevel" }, // 8633f097dbbf078dc3e77d2bb5aac5884137b118
		{ &Z_Construct_UFunction_URoadEditorFunctionLibrary_HasAnyStaleRoadNetworkInLevel, "HasAnyStaleRoadNetworkInLevel" }, // d7ea9c054ec991bb55b4cfe5b16137b6edebba32
		{ &Z_Construct_UFunction_URoadEditorFunctionLibrary_MakeLanesProfileFromRoadDrawPreset, "MakeLanesProfileFromRoadDrawPreset" }, // 39a74d951ce752bad38e65fc2f3262e177f775ac
		{ &Z_Construct_UFunction_URoadEditorFunctionLibrary_OpenRoadBLDProjectSettings, "OpenRoadBLDProjectSettings" }, // 7210137742f8fa8cf5a9693bc591977462f5107c
		{ &Z_Construct_UFunction_URoadEditorFunctionLibrary_PDI_DrawEdgeCurve, "PDI_DrawEdgeCurve" }, // daa9444def2b15dcb0b48a11311d7d7a9a8512d3
		{ &Z_Construct_UFunction_URoadEditorFunctionLibrary_PDI_DrawRoadEdgeCurves, "PDI_DrawRoadEdgeCurves" }, // ef6c7d3d78f90bdd1f57d131c7fc4a741209831c
		{ &Z_Construct_UFunction_URoadEditorFunctionLibrary_PDI_DrawRoadLaneDirectionArrows, "PDI_DrawRoadLaneDirectionArrows" }, // 761b5e640dc8c3597b66734d4102fa1fb3b9d067
		{ &Z_Construct_UFunction_URoadEditorFunctionLibrary_RebuildAllRoadNetworksInLevel, "RebuildAllRoadNetworksInLevel" }, // cbfa34ec5961b039f2ed971f0ab3c25ac5849e57
		{ &Z_Construct_UFunction_URoadEditorFunctionLibrary_RebuildRoadsByOwningNetwork, "RebuildRoadsByOwningNetwork" }, // 5e9824e96329ff34f9d82c26a0f1ffa6474e19e8
		{ &Z_Construct_UFunction_URoadEditorFunctionLibrary_RebuildStaleRoadNetworksInLevel, "RebuildStaleRoadNetworksInLevel" }, // 32f05569c9a7a8c6efb9c277557b32f8c27f8fe2
		{ &Z_Construct_UFunction_URoadEditorFunctionLibrary_RefreshIntersectionLandscapePatchesForRoadGeos, "RefreshIntersectionLandscapePatchesForRoadGeos" }, // 6c4be3c65dd1f4b95b07095ccf4454f0bfdd1504
		{ &Z_Construct_UFunction_URoadEditorFunctionLibrary_RefreshLandscapeAlignmentForRoads, "RefreshLandscapeAlignmentForRoads" }, // 20ddf17ed6076dc6a2bbc4d7b8472d8666b09a31
		{ &Z_Construct_UFunction_URoadEditorFunctionLibrary_RefreshLandscapePaintForRoads, "RefreshLandscapePaintForRoads" }, // dc8d03d724eb007e72a4af1a3748ac844b901085
		{ &Z_Construct_UFunction_URoadEditorFunctionLibrary_ShouldRebuildRoadsAfterEveryEdit, "ShouldRebuildRoadsAfterEveryEdit" }, // 2b439f6adf06da6dcba9831305d49625d20e91bc
		{ &Z_Construct_UFunction_URoadEditorFunctionLibrary_UpdatePreviewRoad, "UpdatePreviewRoad" }, // 1cc3669aaef5f4efa6cfe54328cb4de64b602eaf
		{ &Z_Construct_UFunction_URoadEditorFunctionLibrary_UpdateRoadBLDSettings, "UpdateRoadBLDSettings" }, // c92ea234bd7cce2cbf2e3747d1c655c431a61425
		{ &Z_Construct_UFunction_URoadEditorFunctionLibrary_WorldHasAnyLandscape, "WorldHasAnyLandscape" }, // 45dab1b6f4128147b4e1524b3ab5dbc49d7f12dc
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadEditorFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoadEditorFunctionLibrary,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void URoadEditorFunctionLibrary_StaticRegisterNativesURoadEditorFunctionLibrary()
{
	UClass* Class = URoadEditorFunctionLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URoadEditorFunctionLibrary;
UClass* Z_Construct_UClass_URoadEditorFunctionLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoadEditorFunctionLibrary;
		if (!Z_Registration_Info_UClass_URoadEditorFunctionLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadEditorFunctionLibrary"),
				Z_Registration_Info_UClass_URoadEditorFunctionLibrary.InnerSingleton,
				URoadEditorFunctionLibrary_StaticRegisterNativesURoadEditorFunctionLibrary,
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
		return Z_Registration_Info_UClass_URoadEditorFunctionLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoadEditorFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoadEditorFunctionLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoadEditorFunctionLibrary.OuterSingleton;
}
#undef UHT_STATICS
URoadEditorFunctionLibrary::URoadEditorFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoadEditorFunctionLibrary);
URoadEditorFunctionLibrary::~URoadEditorFunctionLibrary() {}
// ********** End Class URoadEditorFunctionLibrary *************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadEditorUtilityLibrary_h__Script_RoadBLDEditorToolkit_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FSpawnRoadElementParams, Z_Construct_UScriptStruct_FSpawnRoadElementParams_Statics::NewStructOps, TEXT("SpawnRoadElementParams"),&Z_Registration_Info_UScriptStruct_FSpawnRoadElementParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnRoadElementParams), 388964248U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoadEditorFunctionLibrary, TEXT("URoadEditorFunctionLibrary"), &Z_Registration_Info_UClass_URoadEditorFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoadEditorFunctionLibrary), 966820875U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadEditorUtilityLibrary_h__Script_RoadBLDEditorToolkit_dcf69a10f0820b02e1596ac0ffa1aa05d1649e61{
	TEXT("/Script/RoadBLDEditorToolkit"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
