// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TileManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeTileManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntRect(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase);
TWINBLDEDITOR_API UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnTileStateChanged__DelegateSignature(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTileManager(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTileManager(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FOnTileStateChanged ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_TwinBLDEditor_OnTileStateChanged__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_TwinBLDEditor_eventOnTileStateChanged_Parms
	{
		FIntPoint Tile;
		bool Enabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/TileManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnTileStateChanged constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tile;
	static void NewProp_Enabled_SetBit(void* Obj)
	{
		((_Script_TwinBLDEditor_eventOnTileStateChanged_Parms*)Obj)->Enabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnTileStateChanged constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnTileStateChanged Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TwinBLDEditor_eventOnTileStateChanged_Parms, Tile), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_TwinBLDEditor_eventOnTileStateChanged_Parms), &UHT_STATICS::NewProp_Enabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tile,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Enabled,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnTileStateChanged Property Definitions ********************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor, nullptr, "OnTileStateChanged__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_TwinBLDEditor_eventOnTileStateChanged_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_TwinBLDEditor_eventOnTileStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnTileStateChanged__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnTileStateChanged *****************************************************

// ********** Begin Class UTileManager Function GetTileFromWorld ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTileManager_GetTileFromWorld_Statics
struct UHT_STATICS
{
	struct TileManager_eventGetTileFromWorld_Parms
	{
		FVector Location;
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/TileManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTileFromWorld constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTileFromWorld constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTileFromWorld Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TileManager_eventGetTileFromWorld_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TileManager_eventGetTileFromWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetTileFromWorld Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTileManager, nullptr, "GetTileFromWorld", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TileManager_eventGetTileFromWorld_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TileManager_eventGetTileFromWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTileManager_GetTileFromWorld(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTileManager::execGetTileFromWorld)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=P_THIS->GetTileFromWorld(Z_Param_Out_Location);
	P_NATIVE_END;
}
// ********** End Class UTileManager Function GetTileFromWorld *************************************

// ********** Begin Class UTileManager Function GetTilesArray **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTileManager_GetTilesArray_Statics
struct UHT_STATICS
{
	struct TileManager_eventGetTilesArray_Parms
	{
		FIntRect Rect;
		TArray<FIntPoint> OutPoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/TileManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTilesArray constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTilesArray constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTilesArray Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Rect = { "Rect", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TileManager_eventGetTilesArray_Parms, Rect), Z_Construct_UScriptStruct_FIntRect, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rect_MetaData), NewProp_Rect_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(TileManager_eventGetTilesArray_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Rect,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPoints,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetTilesArray Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTileManager, nullptr, "GetTilesArray", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TileManager_eventGetTilesArray_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TileManager_eventGetTilesArray_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTileManager_GetTilesArray(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTileManager::execGetTilesArray)
{
	P_GET_STRUCT_REF(FIntRect,Z_Param_Out_Rect);
	P_GET_TARRAY_REF(FIntPoint,Z_Param_Out_OutPoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetTilesArray(Z_Param_Out_Rect,Z_Param_Out_OutPoints);
	P_NATIVE_END;
}
// ********** End Class UTileManager Function GetTilesArray ****************************************

// ********** Begin Class UTileManager Function GetTilesBounds *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTileManager_GetTilesBounds_Statics
struct UHT_STATICS
{
	struct TileManager_eventGetTilesBounds_Parms
	{
		FIntRect Tiles;
		FIntRect Bounds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/TileManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tiles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTilesBounds constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tiles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTilesBounds constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTilesBounds Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Tiles = { "Tiles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TileManager_eventGetTilesBounds_Parms, Tiles), Z_Construct_UScriptStruct_FIntRect, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tiles_MetaData), NewProp_Tiles_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TileManager_eventGetTilesBounds_Parms, Bounds), Z_Construct_UScriptStruct_FIntRect, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Bounds,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetTilesBounds Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTileManager, nullptr, "GetTilesBounds", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TileManager_eventGetTilesBounds_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TileManager_eventGetTilesBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTileManager_GetTilesBounds(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTileManager::execGetTilesBounds)
{
	P_GET_STRUCT_REF(FIntRect,Z_Param_Out_Tiles);
	P_GET_STRUCT_REF(FIntRect,Z_Param_Out_Bounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetTilesBounds(Z_Param_Out_Tiles,Z_Param_Out_Bounds);
	P_NATIVE_END;
}
// ********** End Class UTileManager Function GetTilesBounds ***************************************

// ********** Begin Class UTileManager Function GetTileWorldBounds *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTileManager_GetTileWorldBounds_Statics
struct UHT_STATICS
{
	struct TileManager_eventGetTileWorldBounds_Parms
	{
		FIntPoint Tile;
		float Units;
		FIntRect ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// Default is centimeters\n" },
		{ "CPP_Default_Units", "100.000000" },
		{ "ModuleRelativePath", "Public/TileManager.h" },
		{ "ToolTip", "Default is centimeters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTileWorldBounds constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tile;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Units;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTileWorldBounds constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTileWorldBounds Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TileManager_eventGetTileWorldBounds_Parms, Tile), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tile_MetaData), NewProp_Tile_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Units = { "Units", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(TileManager_eventGetTileWorldBounds_Parms, Units), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TileManager_eventGetTileWorldBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntRect, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tile,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Units,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetTileWorldBounds Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTileManager, nullptr, "GetTileWorldBounds", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TileManager_eventGetTileWorldBounds_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TileManager_eventGetTileWorldBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTileManager_GetTileWorldBounds(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTileManager::execGetTileWorldBounds)
{
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_Tile);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Units);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntRect*)Z_Param__Result=P_THIS->GetTileWorldBounds(Z_Param_Out_Tile,Z_Param_Units);
	P_NATIVE_END;
}
// ********** End Class UTileManager Function GetTileWorldBounds ***********************************

// ********** Begin Class UTileManager Function UpdateActiveTiles **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTileManager_UpdateActiveTiles_Statics
struct UHT_STATICS
{
	struct TileManager_eventUpdateActiveTiles_Parms
	{
		FIntPoint NewCenterTile;
		bool bForce;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "CPP_Default_bForce", "false" },
		{ "ModuleRelativePath", "Public/TileManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewCenterTile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateActiveTiles constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewCenterTile;
	static void NewProp_bForce_SetBit(void* Obj)
	{
		((TileManager_eventUpdateActiveTiles_Parms*)Obj)->bForce = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateActiveTiles constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateActiveTiles Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NewCenterTile = { "NewCenterTile", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TileManager_eventUpdateActiveTiles_Parms, NewCenterTile), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewCenterTile_MetaData), NewProp_NewCenterTile_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TileManager_eventUpdateActiveTiles_Parms), &UHT_STATICS::NewProp_bForce_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewCenterTile,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bForce,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UpdateActiveTiles Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTileManager, nullptr, "UpdateActiveTiles", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TileManager_eventUpdateActiveTiles_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TileManager_eventUpdateActiveTiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTileManager_UpdateActiveTiles(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTileManager::execUpdateActiveTiles)
{
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_NewCenterTile);
	P_GET_UBOOL(Z_Param_bForce);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateActiveTiles(Z_Param_Out_NewCenterTile,Z_Param_bForce);
	P_NATIVE_END;
}
// ********** End Class UTileManager Function UpdateActiveTiles ************************************

// ********** Begin Class UTileManager *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UTileManager_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TileManager.h" },
		{ "ModuleRelativePath", "Public/TileManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTileStateChanged_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/TileManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// Meters\n" },
		{ "ModuleRelativePath", "Public/TileManager.h" },
		{ "ToolTip", "Meters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TilesOffset_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// Meters\n" },
		{ "ModuleRelativePath", "Public/TileManager.h" },
		{ "ToolTip", "Meters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveAreaSize_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/TileManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTiles_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/TileManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterTile_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/TileManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTileManager constinit property declarations *****************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTileStateChanged;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TilesOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveAreaSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveTiles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CenterTile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UTileManager constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetTileFromWorld"), .Pointer = &UTileManager::execGetTileFromWorld },
		{ .NameUTF8 = UTF8TEXT("GetTilesArray"), .Pointer = &UTileManager::execGetTilesArray },
		{ .NameUTF8 = UTF8TEXT("GetTilesBounds"), .Pointer = &UTileManager::execGetTilesBounds },
		{ .NameUTF8 = UTF8TEXT("GetTileWorldBounds"), .Pointer = &UTileManager::execGetTileWorldBounds },
		{ .NameUTF8 = UTF8TEXT("UpdateActiveTiles"), .Pointer = &UTileManager::execUpdateActiveTiles },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTileManager_GetTileFromWorld, "GetTileFromWorld" }, // 3f10859aca64d80853d3bd02935b567e5489d01c
		{ &Z_Construct_UFunction_UTileManager_GetTilesArray, "GetTilesArray" }, // 45e3b636228a03df7d52d030f76d149d3ba5703c
		{ &Z_Construct_UFunction_UTileManager_GetTilesBounds, "GetTilesBounds" }, // 1feac075b5de18d69b42407374f7647d65562f7b
		{ &Z_Construct_UFunction_UTileManager_GetTileWorldBounds, "GetTileWorldBounds" }, // 7f1596340ff9105de5653b7e92dfabcd7fefbe35
		{ &Z_Construct_UFunction_UTileManager_UpdateActiveTiles, "UpdateActiveTiles" }, // e426f59910fb81190598957e5747fac81db9da2e
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UTileManager Property Definitions ****************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnTileStateChanged = { "OnTileStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UTileManager, OnTileStateChanged), Z_Construct_UDelegateFunction_TwinBLDEditor_OnTileStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTileStateChanged_MetaData), NewProp_OnTileStateChanged_MetaData) }; // 6097a5b5e470a849de0989aa6b3e77a1153a3974
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UTileManager, TileSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSize_MetaData), NewProp_TileSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TilesOffset = { "TilesOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UTileManager, TilesOffset), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TilesOffset_MetaData), NewProp_TilesOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ActiveAreaSize = { "ActiveAreaSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UTileManager, ActiveAreaSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveAreaSize_MetaData), NewProp_ActiveAreaSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ActiveTiles = { "ActiveTiles", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UTileManager, ActiveTiles), Z_Construct_UScriptStruct_FIntRect, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveTiles_MetaData), NewProp_ActiveTiles_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CenterTile = { "CenterTile", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UTileManager, CenterTile), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterTile_MetaData), NewProp_CenterTile_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnTileStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TilesOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveAreaSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CenterTile,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UTileManager Property Definitions ******************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UTileManager,
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
	0x008010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UTileManager_StaticRegisterNativesUTileManager()
{
	UClass* Class = UTileManager::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTileManager;
UClass* Z_Construct_UClass_UTileManager(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UTileManager;
		if (!Z_Registration_Info_UClass_UTileManager.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("TileManager"),
				Z_Registration_Info_UClass_UTileManager.InnerSingleton,
				UTileManager_StaticRegisterNativesUTileManager,
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
		return Z_Registration_Info_UClass_UTileManager.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UTileManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTileManager.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UTileManager.OuterSingleton;
}
#undef UHT_STATICS
UTileManager::UTileManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTileManager);
UTileManager::~UTileManager() {}
// ********** End Class UTileManager ***************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TileManager_h__Script_TwinBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTileManager, TEXT("UTileManager"), &Z_Registration_Info_UClass_UTileManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTileManager), 986207976U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TileManager_h__Script_TwinBLDEditor_c00bcc658247d7499064f5f1bc7817ad3d07437a{
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
