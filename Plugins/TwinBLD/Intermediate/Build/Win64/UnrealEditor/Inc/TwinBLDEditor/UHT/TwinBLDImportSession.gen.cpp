// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwinBLDImportSession.h"
#include "LandscapeManager.h"
#include "ShapefileReader.h"
#include "TwinBLDTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeTwinBLDImportSession() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UTexture2D(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDImportOptions(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDImportSession(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDImportTileId(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDImportTileRecord(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDLandscapeTileResult(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDShapeFeature(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_ULandscapeManager(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_ULocalOrthoImageProvider(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_USatelliteImageProvider(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UStreetMap(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UStreetMapImportCustomizerBase(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTileManager(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDImportSession(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UTwinBLDImportSession Function ClearTileSelection ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDImportSession_ClearTileSelection_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearTileSelection constinit property declarations ********************
// ********** End Function ClearTileSelection constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDImportSession, nullptr, "ClearTileSelection", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UTwinBLDImportSession_ClearTileSelection(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDImportSession::execClearTileSelection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearTileSelection();
	P_NATIVE_END;
}
// ********** End Class UTwinBLDImportSession Function ClearTileSelection **************************

// ********** Begin Class UTwinBLDImportSession Function GenerateSelectedTiles *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDImportSession_GenerateSelectedTiles_Statics
struct UHT_STATICS
{
	struct TwinBLDImportSession_eventGenerateSelectedTiles_Parms
	{
		FText OutError;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateSelectedTiles constinit property declarations *****************
	static const UECodeGen_Private::FTextPropertyParams NewProp_OutError;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwinBLDImportSession_eventGenerateSelectedTiles_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateSelectedTiles constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateSelectedTiles Property Definitions ****************************
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDImportSession_eventGenerateSelectedTiles_Parms, OutError), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TwinBLDImportSession_eventGenerateSelectedTiles_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutError,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GenerateSelectedTiles Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDImportSession, nullptr, "GenerateSelectedTiles", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDImportSession_eventGenerateSelectedTiles_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDImportSession_eventGenerateSelectedTiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDImportSession_GenerateSelectedTiles(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDImportSession::execGenerateSelectedTiles)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutError);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GenerateSelectedTiles(Z_Param_Out_OutError);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDImportSession Function GenerateSelectedTiles ***********************

// ********** Begin Class UTwinBLDImportSession Function HandleLandscapeBatchGenerated *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDImportSession_HandleLandscapeBatchGenerated_Statics
struct UHT_STATICS
{
	struct TwinBLDImportSession_eventHandleLandscapeBatchGenerated_Parms
	{
		FTwinBLDLandscapeTileResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleLandscapeBatchGenerated constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleLandscapeBatchGenerated constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleLandscapeBatchGenerated Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDImportSession_eventHandleLandscapeBatchGenerated_Parms, Result), Z_Construct_UScriptStruct_FTwinBLDLandscapeTileResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 0b6277c99f784cd5b5ade692ca6e9d0558c02843
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HandleLandscapeBatchGenerated Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDImportSession, nullptr, "HandleLandscapeBatchGenerated", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDImportSession_eventHandleLandscapeBatchGenerated_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDImportSession_eventHandleLandscapeBatchGenerated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDImportSession_HandleLandscapeBatchGenerated(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDImportSession::execHandleLandscapeBatchGenerated)
{
	P_GET_STRUCT_REF(FTwinBLDLandscapeTileResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleLandscapeBatchGenerated(Z_Param_Out_Result);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDImportSession Function HandleLandscapeBatchGenerated ***************

// ********** Begin Class UTwinBLDImportSession Function HandleLandscapeGenerated ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDImportSession_HandleLandscapeGenerated_Statics
struct UHT_STATICS
{
	struct TwinBLDImportSession_eventHandleLandscapeGenerated_Parms
	{
		FTwinBLDLandscapeTileResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleLandscapeGenerated constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleLandscapeGenerated constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleLandscapeGenerated Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDImportSession_eventHandleLandscapeGenerated_Parms, Result), Z_Construct_UScriptStruct_FTwinBLDLandscapeTileResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 0b6277c99f784cd5b5ade692ca6e9d0558c02843
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HandleLandscapeGenerated Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDImportSession, nullptr, "HandleLandscapeGenerated", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDImportSession_eventHandleLandscapeGenerated_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDImportSession_eventHandleLandscapeGenerated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDImportSession_HandleLandscapeGenerated(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDImportSession::execHandleLandscapeGenerated)
{
	P_GET_STRUCT_REF(FTwinBLDLandscapeTileResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleLandscapeGenerated(Z_Param_Out_Result);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDImportSession Function HandleLandscapeGenerated ********************

// ********** Begin Class UTwinBLDImportSession Function HandleSatelliteImportComplete *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDImportSession_HandleSatelliteImportComplete_Statics
struct UHT_STATICS
{
	struct TwinBLDImportSession_eventHandleSatelliteImportComplete_Parms
	{
		UTexture2D* ImportedTexture;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleSatelliteImportComplete constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImportedTexture;
	static void NewProp_bSuccess_SetBit(void* Obj)
	{
		((TwinBLDImportSession_eventHandleSatelliteImportComplete_Parms*)Obj)->bSuccess = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleSatelliteImportComplete constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleSatelliteImportComplete Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ImportedTexture = { "ImportedTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDImportSession_eventHandleSatelliteImportComplete_Parms, ImportedTexture), Z_Construct_UClass_UTexture2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TwinBLDImportSession_eventHandleSatelliteImportComplete_Parms), &UHT_STATICS::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ImportedTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HandleSatelliteImportComplete Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDImportSession, nullptr, "HandleSatelliteImportComplete", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDImportSession_eventHandleSatelliteImportComplete_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDImportSession_eventHandleSatelliteImportComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDImportSession_HandleSatelliteImportComplete(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDImportSession::execHandleSatelliteImportComplete)
{
	P_GET_OBJECT(UTexture2D,Z_Param_ImportedTexture);
	P_GET_UBOOL(Z_Param_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSatelliteImportComplete(Z_Param_ImportedTexture,Z_Param_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDImportSession Function HandleSatelliteImportComplete ***************

// ********** Begin Class UTwinBLDImportSession Function HasStrictValidShapefileCrs ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDImportSession_HasStrictValidShapefileCrs_Statics
struct UHT_STATICS
{
	struct TwinBLDImportSession_eventHasStrictValidShapefileCrs_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "Comment", "/** True when the loaded shapefile was reprojected from a known CRS and did not use WGS84 fallback. */" },
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
		{ "ToolTip", "True when the loaded shapefile was reprojected from a known CRS and did not use WGS84 fallback." },
	};
#endif // WITH_METADATA

// ********** Begin Function HasStrictValidShapefileCrs constinit property declarations ************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwinBLDImportSession_eventHasStrictValidShapefileCrs_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasStrictValidShapefileCrs constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasStrictValidShapefileCrs Property Definitions ***********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TwinBLDImportSession_eventHasStrictValidShapefileCrs_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HasStrictValidShapefileCrs Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDImportSession, nullptr, "HasStrictValidShapefileCrs", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDImportSession_eventHasStrictValidShapefileCrs_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDImportSession_eventHasStrictValidShapefileCrs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDImportSession_HasStrictValidShapefileCrs(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDImportSession::execHasStrictValidShapefileCrs)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasStrictValidShapefileCrs();
	P_NATIVE_END;
}
// ********** End Class UTwinBLDImportSession Function HasStrictValidShapefileCrs ******************

// ********** Begin Class UTwinBLDImportSession Function ImportSatelliteForSelectedTiles ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDImportSession_ImportSatelliteForSelectedTiles_Statics
struct UHT_STATICS
{
	struct TwinBLDImportSession_eventImportSatelliteForSelectedTiles_Parms
	{
		bool bCreateDecalActors;
		FText OutError;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "Comment", "/** Downloads satellite imagery for selected tiles; can optionally create one aligned decal actor per tile. */" },
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
		{ "ToolTip", "Downloads satellite imagery for selected tiles; can optionally create one aligned decal actor per tile." },
	};
#endif // WITH_METADATA

// ********** Begin Function ImportSatelliteForSelectedTiles constinit property declarations *******
	static void NewProp_bCreateDecalActors_SetBit(void* Obj)
	{
		((TwinBLDImportSession_eventImportSatelliteForSelectedTiles_Parms*)Obj)->bCreateDecalActors = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateDecalActors;
	static const UECodeGen_Private::FTextPropertyParams NewProp_OutError;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwinBLDImportSession_eventImportSatelliteForSelectedTiles_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ImportSatelliteForSelectedTiles constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ImportSatelliteForSelectedTiles Property Definitions ******************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCreateDecalActors = { "bCreateDecalActors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TwinBLDImportSession_eventImportSatelliteForSelectedTiles_Parms), &UHT_STATICS::NewProp_bCreateDecalActors_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDImportSession_eventImportSatelliteForSelectedTiles_Parms, OutError), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TwinBLDImportSession_eventImportSatelliteForSelectedTiles_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCreateDecalActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutError,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ImportSatelliteForSelectedTiles Property Definitions ********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDImportSession, nullptr, "ImportSatelliteForSelectedTiles", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDImportSession_eventImportSatelliteForSelectedTiles_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDImportSession_eventImportSatelliteForSelectedTiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDImportSession_ImportSatelliteForSelectedTiles(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDImportSession::execImportSatelliteForSelectedTiles)
{
	P_GET_UBOOL(Z_Param_bCreateDecalActors);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutError);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ImportSatelliteForSelectedTiles(Z_Param_bCreateDecalActors,Z_Param_Out_OutError);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDImportSession Function ImportSatelliteForSelectedTiles *************

// ********** Begin Class UTwinBLDImportSession Function IsTileSelected ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDImportSession_IsTileSelected_Statics
struct UHT_STATICS
{
	struct TwinBLDImportSession_eventIsTileSelected_Parms
	{
		FTwinBLDImportTileId TileId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsTileSelected constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileId;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwinBLDImportSession_eventIsTileSelected_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsTileSelected constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsTileSelected Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TileId = { "TileId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDImportSession_eventIsTileSelected_Parms, TileId), Z_Construct_UScriptStruct_FTwinBLDImportTileId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileId_MetaData), NewProp_TileId_MetaData) }; // a7fb3eb83fa12648e64f8b78b713392a3908503a
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TwinBLDImportSession_eventIsTileSelected_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsTileSelected Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDImportSession, nullptr, "IsTileSelected", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDImportSession_eventIsTileSelected_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDImportSession_eventIsTileSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDImportSession_IsTileSelected(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDImportSession::execIsTileSelected)
{
	P_GET_STRUCT_REF(FTwinBLDImportTileId,Z_Param_Out_TileId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTileSelected(Z_Param_Out_TileId);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDImportSession Function IsTileSelected ******************************

// ********** Begin Class UTwinBLDImportSession Function LoadLocalOsmFile **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDImportSession_LoadLocalOsmFile_Statics
struct UHT_STATICS
{
	struct TwinBLDImportSession_eventLoadLocalOsmFile_Parms
	{
		FString FilePath;
		FText OutError;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadLocalOsmFile constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FTextPropertyParams NewProp_OutError;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwinBLDImportSession_eventLoadLocalOsmFile_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadLocalOsmFile constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadLocalOsmFile Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDImportSession_eventLoadLocalOsmFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDImportSession_eventLoadLocalOsmFile_Parms, OutError), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TwinBLDImportSession_eventLoadLocalOsmFile_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutError,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function LoadLocalOsmFile Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDImportSession, nullptr, "LoadLocalOsmFile", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDImportSession_eventLoadLocalOsmFile_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDImportSession_eventLoadLocalOsmFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDImportSession_LoadLocalOsmFile(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDImportSession::execLoadLocalOsmFile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutError);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadLocalOsmFile(Z_Param_FilePath,Z_Param_Out_OutError);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDImportSession Function LoadLocalOsmFile ****************************

// ********** Begin Class UTwinBLDImportSession Function LoadLocalShapefile ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDImportSession_LoadLocalShapefile_Statics
struct UHT_STATICS
{
	struct TwinBLDImportSession_eventLoadLocalShapefile_Parms
	{
		FString FilePath;
		FText OutError;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "Comment", "/**\n\x09 * Loads a local .shp file and projects its features into world centimeters using the current GeoOrigin/AxisOrder.\n\x09 * Requires an .osm to have been loaded first.\n\x09 */" },
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
		{ "ToolTip", "Loads a local .shp file and projects its features into world centimeters using the current GeoOrigin/AxisOrder.\nRequires an .osm to have been loaded first." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadLocalShapefile constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FTextPropertyParams NewProp_OutError;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwinBLDImportSession_eventLoadLocalShapefile_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadLocalShapefile constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadLocalShapefile Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDImportSession_eventLoadLocalShapefile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDImportSession_eventLoadLocalShapefile_Parms, OutError), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TwinBLDImportSession_eventLoadLocalShapefile_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutError,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function LoadLocalShapefile Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDImportSession, nullptr, "LoadLocalShapefile", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDImportSession_eventLoadLocalShapefile_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDImportSession_eventLoadLocalShapefile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDImportSession_LoadLocalShapefile(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDImportSession::execLoadLocalShapefile)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutError);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadLocalShapefile(Z_Param_FilePath,Z_Param_Out_OutError);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDImportSession Function LoadLocalShapefile **************************

// ********** Begin Class UTwinBLDImportSession Function SetTileSelection **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDImportSession_SetTileSelection_Statics
struct UHT_STATICS
{
	struct TwinBLDImportSession_eventSetTileSelection_Parms
	{
		FTwinBLDImportTileId TileId;
		bool bSelected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetTileSelection constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileId;
	static void NewProp_bSelected_SetBit(void* Obj)
	{
		((TwinBLDImportSession_eventSetTileSelection_Parms*)Obj)->bSelected = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTileSelection constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTileSelection Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TileId = { "TileId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDImportSession_eventSetTileSelection_Parms, TileId), Z_Construct_UScriptStruct_FTwinBLDImportTileId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileId_MetaData), NewProp_TileId_MetaData) }; // a7fb3eb83fa12648e64f8b78b713392a3908503a
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TwinBLDImportSession_eventSetTileSelection_Parms), &UHT_STATICS::NewProp_bSelected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSelected,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetTileSelection Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDImportSession, nullptr, "SetTileSelection", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDImportSession_eventSetTileSelection_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDImportSession_eventSetTileSelection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDImportSession_SetTileSelection(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDImportSession::execSetTileSelection)
{
	P_GET_STRUCT_REF(FTwinBLDImportTileId,Z_Param_Out_TileId);
	P_GET_UBOOL(Z_Param_bSelected);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTileSelection(Z_Param_Out_TileId,Z_Param_bSelected);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDImportSession Function SetTileSelection ****************************

// ********** Begin Class UTwinBLDImportSession Function ToggleTileSelection ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDImportSession_ToggleTileSelection_Statics
struct UHT_STATICS
{
	struct TwinBLDImportSession_eventToggleTileSelection_Parms
	{
		FTwinBLDImportTileId TileId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ToggleTileSelection constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ToggleTileSelection constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ToggleTileSelection Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TileId = { "TileId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDImportSession_eventToggleTileSelection_Parms, TileId), Z_Construct_UScriptStruct_FTwinBLDImportTileId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileId_MetaData), NewProp_TileId_MetaData) }; // a7fb3eb83fa12648e64f8b78b713392a3908503a
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TileId,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ToggleTileSelection Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDImportSession, nullptr, "ToggleTileSelection", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDImportSession_eventToggleTileSelection_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDImportSession_eventToggleTileSelection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDImportSession_ToggleTileSelection(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDImportSession::execToggleTileSelection)
{
	P_GET_STRUCT_REF(FTwinBLDImportTileId,Z_Param_Out_TileId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleTileSelection(Z_Param_Out_TileId);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDImportSession Function ToggleTileSelection *************************

// ********** Begin Class UTwinBLDImportSession ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UTwinBLDImportSession_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TwinBLDImportSession.h" },
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceHash_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeoOrigin_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeoTransformRevision_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "Comment", "/** Session mirror of ATwinBLDLevelSettings::GeoTransformRevision. */" },
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
		{ "ToolTip", "Session mirror of ATwinBLDLevelSettings::GeoTransformRevision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisOrder_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileRecords_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerationInProgress_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapefileSourcePath_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapefileSourceHash_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapefileSourceSpatialReference_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShapefileHadSpatialReference_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShapefileReprojectedToWgs84_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShapefileUsedWgs84Fallback_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapefileSkippedFeatureCount_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapefileCrsWarningMessage_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceStreetMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedTileMaps_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportCustomizer_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTrialModeActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTrialSelectedTiles_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTrialTileSizeMeters_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedTiles_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingTiles_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingLandscapeBatchRecordIndices_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionRevision_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeFeaturesWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapefileBoundsWorldCm_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapefileRevision_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingTileRecordIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetupLandscapePCG_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimePCGGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticPCGGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastStatusText_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SatelliteImageProvider_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalOrthoImageProvider_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveLocalOrthoFolder_MetaData[] = {
		{ "Comment", "/** Non-empty while a local-ortho batch is active. */" },
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
		{ "ToolTip", "Non-empty while a local-ortho batch is active." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveLocalOrthoSourceCrs_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveLocalOrthoNativePixelSizeCm_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingSatelliteTiles_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSatelliteTile_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSatelliteImportInProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateSatelliteDecalsAfterImport_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SatelliteImportTilesTotal_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SatelliteImportTilesCompleted_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SatelliteImportTilesFailed_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveGenerationGeoTransformRevision_MetaData[] = {
		{ "Comment", "/** GeoTransformRevision snapshotted when the current landscape/tile generation batch began. */" },
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
		{ "ToolTip", "GeoTransformRevision snapshotted when the current landscape/tile generation batch began." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSatelliteGeoTransformRevision_MetaData[] = {
		{ "Comment", "/** GeoTransformRevision snapshotted when the current satellite import batch began. */" },
		{ "ModuleRelativePath", "Public/TwinBLDImportSession.h" },
		{ "ToolTip", "GeoTransformRevision snapshotted when the current satellite import batch began." },
	};
#endif // WITH_METADATA

// ********** Begin Class UTwinBLDImportSession constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourcePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceHash;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeoOrigin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GeoTransformRevision;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisOrder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileRecords_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TileRecords;
	static void NewProp_bGenerationInProgress_SetBit(void* Obj)
	{
		((UTwinBLDImportSession*)Obj)->bGenerationInProgress = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerationInProgress;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ShapefileSourcePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ShapefileSourceHash;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ShapefileSourceSpatialReference;
	static void NewProp_bShapefileHadSpatialReference_SetBit(void* Obj)
	{
		((UTwinBLDImportSession*)Obj)->bShapefileHadSpatialReference = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShapefileHadSpatialReference;
	static void NewProp_bShapefileReprojectedToWgs84_SetBit(void* Obj)
	{
		((UTwinBLDImportSession*)Obj)->bShapefileReprojectedToWgs84 = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShapefileReprojectedToWgs84;
	static void NewProp_bShapefileUsedWgs84Fallback_SetBit(void* Obj)
	{
		((UTwinBLDImportSession*)Obj)->bShapefileUsedWgs84Fallback = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShapefileUsedWgs84Fallback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShapefileSkippedFeatureCount;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ShapefileCrsWarningMessage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceStreetMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratedTileMaps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedTileMaps;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImportCustomizer;
	static void NewProp_bTrialModeActive_SetBit(void* Obj)
	{
		((UTwinBLDImportSession*)Obj)->bTrialModeActive = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrialModeActive;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTrialSelectedTiles;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTrialTileSizeMeters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedTiles_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_SelectedTiles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PendingTiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingTiles;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PendingLandscapeBatchRecordIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingLandscapeBatchRecordIndices;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_SelectionRevision;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShapeFeaturesWorld_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ShapeFeaturesWorld;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShapefileBoundsWorldCm;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_ShapefileRevision;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PendingTileRecordIndex;
	static void NewProp_bSetupLandscapePCG_SetBit(void* Obj)
	{
		((UTwinBLDImportSession*)Obj)->bSetupLandscapePCG = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupLandscapePCG;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimePCGGraph;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticPCGGraph;
	static const UECodeGen_Private::FTextPropertyParams NewProp_LastStatusText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SatelliteImageProvider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocalOrthoImageProvider;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActiveLocalOrthoFolder;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActiveLocalOrthoSourceCrs;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ActiveLocalOrthoNativePixelSizeCm;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PendingSatelliteTiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingSatelliteTiles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveSatelliteTile;
	static void NewProp_bSatelliteImportInProgress_SetBit(void* Obj)
	{
		((UTwinBLDImportSession*)Obj)->bSatelliteImportInProgress = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSatelliteImportInProgress;
	static void NewProp_bCreateSatelliteDecalsAfterImport_SetBit(void* Obj)
	{
		((UTwinBLDImportSession*)Obj)->bCreateSatelliteDecalsAfterImport = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateSatelliteDecalsAfterImport;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SatelliteImportTilesTotal;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SatelliteImportTilesCompleted;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SatelliteImportTilesFailed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveGenerationGeoTransformRevision;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveSatelliteGeoTransformRevision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UTwinBLDImportSession constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ClearTileSelection"), .Pointer = &UTwinBLDImportSession::execClearTileSelection },
		{ .NameUTF8 = UTF8TEXT("GenerateSelectedTiles"), .Pointer = &UTwinBLDImportSession::execGenerateSelectedTiles },
		{ .NameUTF8 = UTF8TEXT("HandleLandscapeBatchGenerated"), .Pointer = &UTwinBLDImportSession::execHandleLandscapeBatchGenerated },
		{ .NameUTF8 = UTF8TEXT("HandleLandscapeGenerated"), .Pointer = &UTwinBLDImportSession::execHandleLandscapeGenerated },
		{ .NameUTF8 = UTF8TEXT("HandleSatelliteImportComplete"), .Pointer = &UTwinBLDImportSession::execHandleSatelliteImportComplete },
		{ .NameUTF8 = UTF8TEXT("HasStrictValidShapefileCrs"), .Pointer = &UTwinBLDImportSession::execHasStrictValidShapefileCrs },
		{ .NameUTF8 = UTF8TEXT("ImportSatelliteForSelectedTiles"), .Pointer = &UTwinBLDImportSession::execImportSatelliteForSelectedTiles },
		{ .NameUTF8 = UTF8TEXT("IsTileSelected"), .Pointer = &UTwinBLDImportSession::execIsTileSelected },
		{ .NameUTF8 = UTF8TEXT("LoadLocalOsmFile"), .Pointer = &UTwinBLDImportSession::execLoadLocalOsmFile },
		{ .NameUTF8 = UTF8TEXT("LoadLocalShapefile"), .Pointer = &UTwinBLDImportSession::execLoadLocalShapefile },
		{ .NameUTF8 = UTF8TEXT("SetTileSelection"), .Pointer = &UTwinBLDImportSession::execSetTileSelection },
		{ .NameUTF8 = UTF8TEXT("ToggleTileSelection"), .Pointer = &UTwinBLDImportSession::execToggleTileSelection },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTwinBLDImportSession_ClearTileSelection, "ClearTileSelection" }, // ae8535852e7a3b9afc23576d7f898a2cf8cee333
		{ &Z_Construct_UFunction_UTwinBLDImportSession_GenerateSelectedTiles, "GenerateSelectedTiles" }, // 42deddb1e867b29a66d05f2903ca283d1a51304d
		{ &Z_Construct_UFunction_UTwinBLDImportSession_HandleLandscapeBatchGenerated, "HandleLandscapeBatchGenerated" }, // 1f90e50ca49f2d3a43b7cca2f17d3c2e2154a289
		{ &Z_Construct_UFunction_UTwinBLDImportSession_HandleLandscapeGenerated, "HandleLandscapeGenerated" }, // 6a0485b2721c57ac5bda7948c209f3aa6413229f
		{ &Z_Construct_UFunction_UTwinBLDImportSession_HandleSatelliteImportComplete, "HandleSatelliteImportComplete" }, // a56d4dd8f793351be08488c9bb1f847c950b8656
		{ &Z_Construct_UFunction_UTwinBLDImportSession_HasStrictValidShapefileCrs, "HasStrictValidShapefileCrs" }, // a2d0295600bcfebe8adecf0c57df1de86cbcdff4
		{ &Z_Construct_UFunction_UTwinBLDImportSession_ImportSatelliteForSelectedTiles, "ImportSatelliteForSelectedTiles" }, // 14283c3fbb0d60b983ab8e4af8f743f056f28f02
		{ &Z_Construct_UFunction_UTwinBLDImportSession_IsTileSelected, "IsTileSelected" }, // bf4cd423e96ed3044923aa8cd79322db79ed469b
		{ &Z_Construct_UFunction_UTwinBLDImportSession_LoadLocalOsmFile, "LoadLocalOsmFile" }, // 3c8d33cd5b4ec21dd323d7e6fac39ae8c6e76a54
		{ &Z_Construct_UFunction_UTwinBLDImportSession_LoadLocalShapefile, "LoadLocalShapefile" }, // b183cc7e9e05e3b3b76900e2bedfed78612d8757
		{ &Z_Construct_UFunction_UTwinBLDImportSession_SetTileSelection, "SetTileSelection" }, // bd94f339a801341b5963e5a7240d71b1cd0b7365
		{ &Z_Construct_UFunction_UTwinBLDImportSession_ToggleTileSelection, "ToggleTileSelection" }, // 3ccb4d436863cb14998b0184bbb8110c133fc628
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinBLDImportSession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UTwinBLDImportSession Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, Options), Z_Construct_UScriptStruct_FTwinBLDImportOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Options_MetaData), NewProp_Options_MetaData) }; // d3c1107a75b8a86825bd8d3c19469a2b9249498f
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, SourcePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePath_MetaData), NewProp_SourcePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SourceHash = { "SourceHash", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, SourceHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceHash_MetaData), NewProp_SourceHash_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GeoOrigin = { "GeoOrigin", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, GeoOrigin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeoOrigin_MetaData), NewProp_GeoOrigin_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_GeoTransformRevision = { "GeoTransformRevision", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, GeoTransformRevision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeoTransformRevision_MetaData), NewProp_GeoTransformRevision_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AxisOrder = { "AxisOrder", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, AxisOrder), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisOrder_MetaData), NewProp_AxisOrder_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TileRecords_Inner = { "TileRecords", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTwinBLDImportTileRecord, METADATA_PARAMS(0, nullptr) }; // 1a2c00eeeb1264fa6e5130e6cf7975642a0d5342
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_TileRecords = { "TileRecords", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, TileRecords), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileRecords_MetaData), NewProp_TileRecords_MetaData) }; // 1a2c00eeeb1264fa6e5130e6cf7975642a0d5342
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bGenerationInProgress = { "bGenerationInProgress", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UTwinBLDImportSession), &UHT_STATICS::NewProp_bGenerationInProgress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerationInProgress_MetaData), NewProp_bGenerationInProgress_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ShapefileSourcePath = { "ShapefileSourcePath", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, ShapefileSourcePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapefileSourcePath_MetaData), NewProp_ShapefileSourcePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ShapefileSourceHash = { "ShapefileSourceHash", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, ShapefileSourceHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapefileSourceHash_MetaData), NewProp_ShapefileSourceHash_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ShapefileSourceSpatialReference = { "ShapefileSourceSpatialReference", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, ShapefileSourceSpatialReference), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapefileSourceSpatialReference_MetaData), NewProp_ShapefileSourceSpatialReference_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShapefileHadSpatialReference = { "bShapefileHadSpatialReference", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UTwinBLDImportSession), &UHT_STATICS::NewProp_bShapefileHadSpatialReference_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShapefileHadSpatialReference_MetaData), NewProp_bShapefileHadSpatialReference_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShapefileReprojectedToWgs84 = { "bShapefileReprojectedToWgs84", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UTwinBLDImportSession), &UHT_STATICS::NewProp_bShapefileReprojectedToWgs84_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShapefileReprojectedToWgs84_MetaData), NewProp_bShapefileReprojectedToWgs84_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShapefileUsedWgs84Fallback = { "bShapefileUsedWgs84Fallback", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UTwinBLDImportSession), &UHT_STATICS::NewProp_bShapefileUsedWgs84Fallback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShapefileUsedWgs84Fallback_MetaData), NewProp_bShapefileUsedWgs84Fallback_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ShapefileSkippedFeatureCount = { "ShapefileSkippedFeatureCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, ShapefileSkippedFeatureCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapefileSkippedFeatureCount_MetaData), NewProp_ShapefileSkippedFeatureCount_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ShapefileCrsWarningMessage = { "ShapefileCrsWarningMessage", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, ShapefileCrsWarningMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapefileCrsWarningMessage_MetaData), NewProp_ShapefileCrsWarningMessage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SourceStreetMap = { "SourceStreetMap", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, SourceStreetMap), Z_Construct_UClass_UStreetMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceStreetMap_MetaData), NewProp_SourceStreetMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GeneratedTileMaps_Inner = { "GeneratedTileMaps", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStreetMap, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_GeneratedTileMaps = { "GeneratedTileMaps", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, GeneratedTileMaps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedTileMaps_MetaData), NewProp_GeneratedTileMaps_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TileManager = { "TileManager", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, TileManager), Z_Construct_UClass_UTileManager, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileManager_MetaData), NewProp_TileManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LandscapeManager = { "LandscapeManager", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, LandscapeManager), Z_Construct_UClass_ULandscapeManager, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeManager_MetaData), NewProp_LandscapeManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ImportCustomizer = { "ImportCustomizer", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, ImportCustomizer), Z_Construct_UClass_UStreetMapImportCustomizerBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportCustomizer_MetaData), NewProp_ImportCustomizer_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bTrialModeActive = { "bTrialModeActive", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UTwinBLDImportSession), &UHT_STATICS::NewProp_bTrialModeActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTrialModeActive_MetaData), NewProp_bTrialModeActive_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxTrialSelectedTiles = { "MaxTrialSelectedTiles", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, MaxTrialSelectedTiles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTrialSelectedTiles_MetaData), NewProp_MaxTrialSelectedTiles_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxTrialTileSizeMeters = { "MaxTrialTileSizeMeters", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, MaxTrialTileSizeMeters), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTrialTileSizeMeters_MetaData), NewProp_MaxTrialTileSizeMeters_MetaData) };
static_assert(TModels_V<CGetTypeHashable, FTwinBLDImportTileId>, "The structure 'FTwinBLDImportTileId' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SelectedTiles_ElementProp = { "SelectedTiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTwinBLDImportTileId, METADATA_PARAMS(0, nullptr) }; // a7fb3eb83fa12648e64f8b78b713392a3908503a
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_SelectedTiles = { "SelectedTiles", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, SelectedTiles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedTiles_MetaData), NewProp_SelectedTiles_MetaData) }; // a7fb3eb83fa12648e64f8b78b713392a3908503a
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PendingTiles_Inner = { "PendingTiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTwinBLDImportTileId, METADATA_PARAMS(0, nullptr) }; // a7fb3eb83fa12648e64f8b78b713392a3908503a
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PendingTiles = { "PendingTiles", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, PendingTiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingTiles_MetaData), NewProp_PendingTiles_MetaData) }; // a7fb3eb83fa12648e64f8b78b713392a3908503a
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PendingLandscapeBatchRecordIndices_Inner = { "PendingLandscapeBatchRecordIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PendingLandscapeBatchRecordIndices = { "PendingLandscapeBatchRecordIndices", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, PendingLandscapeBatchRecordIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingLandscapeBatchRecordIndices_MetaData), NewProp_PendingLandscapeBatchRecordIndices_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams UHT_STATICS::NewProp_SelectionRevision = { "SelectionRevision", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::UInt64, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, SelectionRevision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionRevision_MetaData), NewProp_SelectionRevision_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ShapeFeaturesWorld_Inner = { "ShapeFeaturesWorld", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTwinBLDShapeFeature, METADATA_PARAMS(0, nullptr) }; // 56811273e47c969b7aa1d579244c9e2da99a3fc7
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ShapeFeaturesWorld = { "ShapeFeaturesWorld", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, ShapeFeaturesWorld), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeFeaturesWorld_MetaData), NewProp_ShapeFeaturesWorld_MetaData) }; // 56811273e47c969b7aa1d579244c9e2da99a3fc7
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ShapefileBoundsWorldCm = { "ShapefileBoundsWorldCm", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, ShapefileBoundsWorldCm), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapefileBoundsWorldCm_MetaData), NewProp_ShapefileBoundsWorldCm_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams UHT_STATICS::NewProp_ShapefileRevision = { "ShapefileRevision", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::UInt64, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, ShapefileRevision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapefileRevision_MetaData), NewProp_ShapefileRevision_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PendingTileRecordIndex = { "PendingTileRecordIndex", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, PendingTileRecordIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingTileRecordIndex_MetaData), NewProp_PendingTileRecordIndex_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSetupLandscapePCG = { "bSetupLandscapePCG", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UTwinBLDImportSession), &UHT_STATICS::NewProp_bSetupLandscapePCG_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetupLandscapePCG_MetaData), NewProp_bSetupLandscapePCG_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RuntimePCGGraph = { "RuntimePCGGraph", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, RuntimePCGGraph), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimePCGGraph_MetaData), NewProp_RuntimePCGGraph_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StaticPCGGraph = { "StaticPCGGraph", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, StaticPCGGraph), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticPCGGraph_MetaData), NewProp_StaticPCGGraph_MetaData) };
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_LastStatusText = { "LastStatusText", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, LastStatusText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastStatusText_MetaData), NewProp_LastStatusText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SatelliteImageProvider = { "SatelliteImageProvider", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, SatelliteImageProvider), Z_Construct_UClass_USatelliteImageProvider, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SatelliteImageProvider_MetaData), NewProp_SatelliteImageProvider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LocalOrthoImageProvider = { "LocalOrthoImageProvider", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, LocalOrthoImageProvider), Z_Construct_UClass_ULocalOrthoImageProvider, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalOrthoImageProvider_MetaData), NewProp_LocalOrthoImageProvider_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ActiveLocalOrthoFolder = { "ActiveLocalOrthoFolder", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, ActiveLocalOrthoFolder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveLocalOrthoFolder_MetaData), NewProp_ActiveLocalOrthoFolder_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ActiveLocalOrthoSourceCrs = { "ActiveLocalOrthoSourceCrs", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, ActiveLocalOrthoSourceCrs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveLocalOrthoSourceCrs_MetaData), NewProp_ActiveLocalOrthoSourceCrs_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ActiveLocalOrthoNativePixelSizeCm = { "ActiveLocalOrthoNativePixelSizeCm", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, ActiveLocalOrthoNativePixelSizeCm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveLocalOrthoNativePixelSizeCm_MetaData), NewProp_ActiveLocalOrthoNativePixelSizeCm_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PendingSatelliteTiles_Inner = { "PendingSatelliteTiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTwinBLDImportTileId, METADATA_PARAMS(0, nullptr) }; // a7fb3eb83fa12648e64f8b78b713392a3908503a
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PendingSatelliteTiles = { "PendingSatelliteTiles", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, PendingSatelliteTiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingSatelliteTiles_MetaData), NewProp_PendingSatelliteTiles_MetaData) }; // a7fb3eb83fa12648e64f8b78b713392a3908503a
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ActiveSatelliteTile = { "ActiveSatelliteTile", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, ActiveSatelliteTile), Z_Construct_UScriptStruct_FTwinBLDImportTileId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveSatelliteTile_MetaData), NewProp_ActiveSatelliteTile_MetaData) }; // a7fb3eb83fa12648e64f8b78b713392a3908503a
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSatelliteImportInProgress = { "bSatelliteImportInProgress", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UTwinBLDImportSession), &UHT_STATICS::NewProp_bSatelliteImportInProgress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSatelliteImportInProgress_MetaData), NewProp_bSatelliteImportInProgress_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCreateSatelliteDecalsAfterImport = { "bCreateSatelliteDecalsAfterImport", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UTwinBLDImportSession), &UHT_STATICS::NewProp_bCreateSatelliteDecalsAfterImport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateSatelliteDecalsAfterImport_MetaData), NewProp_bCreateSatelliteDecalsAfterImport_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SatelliteImportTilesTotal = { "SatelliteImportTilesTotal", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, SatelliteImportTilesTotal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SatelliteImportTilesTotal_MetaData), NewProp_SatelliteImportTilesTotal_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SatelliteImportTilesCompleted = { "SatelliteImportTilesCompleted", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, SatelliteImportTilesCompleted), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SatelliteImportTilesCompleted_MetaData), NewProp_SatelliteImportTilesCompleted_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SatelliteImportTilesFailed = { "SatelliteImportTilesFailed", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, SatelliteImportTilesFailed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SatelliteImportTilesFailed_MetaData), NewProp_SatelliteImportTilesFailed_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ActiveGenerationGeoTransformRevision = { "ActiveGenerationGeoTransformRevision", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, ActiveGenerationGeoTransformRevision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveGenerationGeoTransformRevision_MetaData), NewProp_ActiveGenerationGeoTransformRevision_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ActiveSatelliteGeoTransformRevision = { "ActiveSatelliteGeoTransformRevision", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDImportSession, ActiveSatelliteGeoTransformRevision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveSatelliteGeoTransformRevision_MetaData), NewProp_ActiveSatelliteGeoTransformRevision_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Options,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourcePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeoOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeoTransformRevision,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AxisOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TileRecords_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TileRecords,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bGenerationInProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShapefileSourcePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShapefileSourceHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShapefileSourceSpatialReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShapefileHadSpatialReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShapefileReprojectedToWgs84,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShapefileUsedWgs84Fallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShapefileSkippedFeatureCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShapefileCrsWarningMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceStreetMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeneratedTileMaps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeneratedTileMaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TileManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapeManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ImportCustomizer,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bTrialModeActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxTrialSelectedTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxTrialTileSizeMeters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedTiles_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PendingTiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PendingTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PendingLandscapeBatchRecordIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PendingLandscapeBatchRecordIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectionRevision,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShapeFeaturesWorld_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShapeFeaturesWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShapefileBoundsWorldCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShapefileRevision,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PendingTileRecordIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSetupLandscapePCG,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RuntimePCGGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StaticPCGGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LastStatusText,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SatelliteImageProvider,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LocalOrthoImageProvider,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveLocalOrthoFolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveLocalOrthoSourceCrs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveLocalOrthoNativePixelSizeCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PendingSatelliteTiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PendingSatelliteTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveSatelliteTile,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSatelliteImportInProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCreateSatelliteDecalsAfterImport,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SatelliteImportTilesTotal,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SatelliteImportTilesCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SatelliteImportTilesFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveGenerationGeoTransformRevision,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveSatelliteGeoTransformRevision,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UTwinBLDImportSession Property Definitions *********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UTwinBLDImportSession,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UTwinBLDImportSession_StaticRegisterNativesUTwinBLDImportSession()
{
	UClass* Class = UTwinBLDImportSession::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTwinBLDImportSession;
UClass* Z_Construct_UClass_UTwinBLDImportSession(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UTwinBLDImportSession;
		if (!Z_Registration_Info_UClass_UTwinBLDImportSession.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("TwinBLDImportSession"),
				Z_Registration_Info_UClass_UTwinBLDImportSession.InnerSingleton,
				UTwinBLDImportSession_StaticRegisterNativesUTwinBLDImportSession,
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
		return Z_Registration_Info_UClass_UTwinBLDImportSession.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UTwinBLDImportSession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTwinBLDImportSession.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UTwinBLDImportSession.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTwinBLDImportSession);
UTwinBLDImportSession::~UTwinBLDImportSession() {}
// ********** End Class UTwinBLDImportSession ******************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDImportSession_h__Script_TwinBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTwinBLDImportSession, TEXT("UTwinBLDImportSession"), &Z_Registration_Info_UClass_UTwinBLDImportSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTwinBLDImportSession), 3628159930U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDImportSession_h__Script_TwinBLDEditor_2adbfbd76295f24828652745e9228fbd7cdc5ba7{
	TEXT("/Script/TwinBLDEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
