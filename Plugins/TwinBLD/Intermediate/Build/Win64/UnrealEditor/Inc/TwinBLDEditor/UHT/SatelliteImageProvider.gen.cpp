// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SatelliteImageProvider.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeSatelliteImageProvider() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UTexture2D(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase);
TWINBLDEDITOR_API UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnSatelliteImageComplete__DelegateSignature(ETypeConstructPhase);
TWINBLDEDITOR_API UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnSatelliteImageProgress__DelegateSignature(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_USatelliteImageProvider(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_USatelliteImageProvider(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FOnSatelliteImageComplete *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_TwinBLDEditor_OnSatelliteImageComplete__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_TwinBLDEditor_eventOnSatelliteImageComplete_Parms
	{
		UTexture2D* Texture;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/SatelliteImageProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSatelliteImageComplete constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static void NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_TwinBLDEditor_eventOnSatelliteImageComplete_Parms*)Obj)->bSuccess = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnSatelliteImageComplete constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnSatelliteImageComplete Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TwinBLDEditor_eventOnSatelliteImageComplete_Parms, Texture), Z_Construct_UClass_UTexture2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_TwinBLDEditor_eventOnSatelliteImageComplete_Parms), &UHT_STATICS::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnSatelliteImageComplete Property Definitions **************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor, nullptr, "OnSatelliteImageComplete__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_TwinBLDEditor_eventOnSatelliteImageComplete_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_TwinBLDEditor_eventOnSatelliteImageComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnSatelliteImageComplete__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnSatelliteImageComplete ***********************************************

// ********** Begin Delegate FOnSatelliteImageProgress *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_TwinBLDEditor_OnSatelliteImageProgress__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_TwinBLDEditor_eventOnSatelliteImageProgress_Parms
	{
		float Progress;
		FString Status;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/SatelliteImageProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSatelliteImageProgress constinit property declarations *************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Status;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnSatelliteImageProgress constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnSatelliteImageProgress Property Definitions ************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TwinBLDEditor_eventOnSatelliteImageProgress_Parms, Progress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TwinBLDEditor_eventOnSatelliteImageProgress_Parms, Status), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Progress,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Status,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnSatelliteImageProgress Property Definitions **************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor, nullptr, "OnSatelliteImageProgress__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_TwinBLDEditor_eventOnSatelliteImageProgress_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_TwinBLDEditor_eventOnSatelliteImageProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnSatelliteImageProgress__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnSatelliteImageProgress ***********************************************

// ********** Begin Class USatelliteImageProvider Function CancelOperation *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USatelliteImageProvider_CancelOperation_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/SatelliteImageProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CancelOperation constinit property declarations ***********************
// ********** End Function CancelOperation constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USatelliteImageProvider, nullptr, "CancelOperation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_USatelliteImageProvider_CancelOperation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(USatelliteImageProvider::execCancelOperation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelOperation();
	P_NATIVE_END;
}
// ********** End Class USatelliteImageProvider Function CancelOperation ***************************

// ********** Begin Class USatelliteImageProvider Function GenerateImageFromCoordinates ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USatelliteImageProvider_GenerateImageFromCoordinates_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/SatelliteImageProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateImageFromCoordinates constinit property declarations **********
// ********** End Function GenerateImageFromCoordinates constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USatelliteImageProvider, nullptr, "GenerateImageFromCoordinates", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_USatelliteImageProvider_GenerateImageFromCoordinates(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(USatelliteImageProvider::execGenerateImageFromCoordinates)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateImageFromCoordinates();
	P_NATIVE_END;
}
// ********** End Class USatelliteImageProvider Function GenerateImageFromCoordinates **************

// ********** Begin Class USatelliteImageProvider Function IsOperationInProgress *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USatelliteImageProvider_IsOperationInProgress_Statics
struct UHT_STATICS
{
	struct SatelliteImageProvider_eventIsOperationInProgress_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/SatelliteImageProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsOperationInProgress constinit property declarations *****************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SatelliteImageProvider_eventIsOperationInProgress_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsOperationInProgress constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsOperationInProgress Property Definitions ****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(SatelliteImageProvider_eventIsOperationInProgress_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsOperationInProgress Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USatelliteImageProvider, nullptr, "IsOperationInProgress", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::SatelliteImageProvider_eventIsOperationInProgress_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::SatelliteImageProvider_eventIsOperationInProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USatelliteImageProvider_IsOperationInProgress(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(USatelliteImageProvider::execIsOperationInProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOperationInProgress();
	P_NATIVE_END;
}
// ********** End Class USatelliteImageProvider Function IsOperationInProgress *********************

// ********** Begin Class USatelliteImageProvider Function ValidateConfiguration *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USatelliteImageProvider_ValidateConfiguration_Statics
struct UHT_STATICS
{
	struct SatelliteImageProvider_eventValidateConfiguration_Parms
	{
		FString OutError;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/SatelliteImageProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ValidateConfiguration constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutError;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SatelliteImageProvider_eventValidateConfiguration_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ValidateConfiguration constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ValidateConfiguration Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(SatelliteImageProvider_eventValidateConfiguration_Parms, OutError), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(SatelliteImageProvider_eventValidateConfiguration_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutError,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ValidateConfiguration Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USatelliteImageProvider, nullptr, "ValidateConfiguration", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::SatelliteImageProvider_eventValidateConfiguration_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::SatelliteImageProvider_eventValidateConfiguration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USatelliteImageProvider_ValidateConfiguration(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(USatelliteImageProvider::execValidateConfiguration)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutError);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ValidateConfiguration(Z_Param_Out_OutError);
	P_NATIVE_END;
}
// ********** End Class USatelliteImageProvider Function ValidateConfiguration *********************

// ********** Begin Class USatelliteImageProvider **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_USatelliteImageProvider_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// USatelliteImageProvider - Downloads Web Mercator tiles and creates a UTexture2D\n" },
		{ "IncludePath", "SatelliteImageProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SatelliteImageProvider.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "USatelliteImageProvider - Downloads Web Mercator tiles and creates a UTexture2D" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/SatelliteImageProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnProgress_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/SatelliteImageProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBoxLatLon_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "Comment", "// Bounding box in lat/lon: Min = (South Lat, West Lon), Max = (North Lat, East Lon)\n" },
		{ "ModuleRelativePath", "Public/SatelliteImageProvider.h" },
		{ "ToolTip", "Bounding box in lat/lon: Min = (South Lat, West Lon), Max = (North Lat, East Lon)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetWorldBoundsCm_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "Comment", "// Optional target bounds in world-space centimeters. When valid, image generation\n// samples by world position to align with OSM projection.\n" },
		{ "ModuleRelativePath", "Public/SatelliteImageProvider.h" },
		{ "ToolTip", "Optional target bounds in world-space centimeters. When valid, image generation\nsamples by world position to align with OSM projection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeoOrigin_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "Comment", "// Projection context used for world->lat/lon sampling.\n" },
		{ "ModuleRelativePath", "Public/SatelliteImageProvider.h" },
		{ "ToolTip", "Projection context used for world->lat/lon sampling." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisOrder_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/SatelliteImageProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomLevel_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ClampMax", "24" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/SatelliteImageProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSourceUrl_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "Comment", "// Slippy map tile URL format. Empty uses the Replicity Maps proxy.\n" },
		{ "ModuleRelativePath", "Public/SatelliteImageProvider.h" },
		{ "ToolTip", "Slippy map tile URL format. Empty uses the Replicity Maps proxy." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileCacheDirectory_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/SatelliteImageProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCachedTiles_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/SatelliteImageProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFailOnMissingTiles_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/SatelliteImageProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedTileResolution_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/SatelliteImageProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDownloadRetries_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ClampMax", "12" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/SatelliteImageProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RetryBackoffSeconds_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/SatelliteImageProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateAsset_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/SatelliteImageProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureAssetName_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "Comment", "// When non-empty, used as the texture asset name instead of the auto-generated lat/lon name.\n// Set this before calling GenerateImageFromCoordinates to avoid collisions when multiple\n// geographically adjacent tiles share the same rounded lat/lon coordinates.\n" },
		{ "ModuleRelativePath", "Public/SatelliteImageProvider.h" },
		{ "ToolTip", "When non-empty, used as the texture asset name instead of the auto-generated lat/lon name.\nSet this before calling GenerateImageFromCoordinates to avoid collisions when multiple\ngeographically adjacent tiles share the same rounded lat/lon coordinates." },
	};
#endif // WITH_METADATA

// ********** Begin Class USatelliteImageProvider constinit property declarations ******************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProgress;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBoxLatLon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetWorldBoundsCm;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeoOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisOrder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZoomLevel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TileSourceUrl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TileCacheDirectory;
	static void NewProp_bUseCachedTiles_SetBit(void* Obj)
	{
		((USatelliteImageProvider*)Obj)->bUseCachedTiles = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCachedTiles;
	static void NewProp_bFailOnMissingTiles_SetBit(void* Obj)
	{
		((USatelliteImageProvider*)Obj)->bFailOnMissingTiles = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFailOnMissingTiles;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedTileResolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDownloadRetries;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RetryBackoffSeconds;
	static void NewProp_bCreateAsset_SetBit(void* Obj)
	{
		((USatelliteImageProvider*)Obj)->bCreateAsset = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateAsset;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TextureAssetName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USatelliteImageProvider constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CancelOperation"), .Pointer = &USatelliteImageProvider::execCancelOperation },
		{ .NameUTF8 = UTF8TEXT("GenerateImageFromCoordinates"), .Pointer = &USatelliteImageProvider::execGenerateImageFromCoordinates },
		{ .NameUTF8 = UTF8TEXT("IsOperationInProgress"), .Pointer = &USatelliteImageProvider::execIsOperationInProgress },
		{ .NameUTF8 = UTF8TEXT("ValidateConfiguration"), .Pointer = &USatelliteImageProvider::execValidateConfiguration },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USatelliteImageProvider_CancelOperation, "CancelOperation" }, // b83b31c0cf40def376f4ccee465646f501409cb0
		{ &Z_Construct_UFunction_USatelliteImageProvider_GenerateImageFromCoordinates, "GenerateImageFromCoordinates" }, // ab44cedaf1b2de85a8586c6825870a3d6674fd07
		{ &Z_Construct_UFunction_USatelliteImageProvider_IsOperationInProgress, "IsOperationInProgress" }, // 96572f0939513f42d45238053997a3033e76391f
		{ &Z_Construct_UFunction_USatelliteImageProvider_ValidateConfiguration, "ValidateConfiguration" }, // 3359ca7fd14550b2a47d58cde0584043721068e4
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USatelliteImageProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class USatelliteImageProvider Property Definitions *****************************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(USatelliteImageProvider, OnComplete), Z_Construct_UDelegateFunction_TwinBLDEditor_OnSatelliteImageComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 2c318451cf9692dbe3ea0865a7fef01f2ba26807
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnProgress = { "OnProgress", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(USatelliteImageProvider, OnProgress), Z_Construct_UDelegateFunction_TwinBLDEditor_OnSatelliteImageProgress__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnProgress_MetaData), NewProp_OnProgress_MetaData) }; // be1c94ee05b53befb5e51669b60d4ff93921f849
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BoundingBoxLatLon = { "BoundingBoxLatLon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(USatelliteImageProvider, BoundingBoxLatLon), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingBoxLatLon_MetaData), NewProp_BoundingBoxLatLon_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TargetWorldBoundsCm = { "TargetWorldBoundsCm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(USatelliteImageProvider, TargetWorldBoundsCm), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetWorldBoundsCm_MetaData), NewProp_TargetWorldBoundsCm_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GeoOrigin = { "GeoOrigin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(USatelliteImageProvider, GeoOrigin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeoOrigin_MetaData), NewProp_GeoOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AxisOrder = { "AxisOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(USatelliteImageProvider, AxisOrder), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisOrder_MetaData), NewProp_AxisOrder_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ZoomLevel = { "ZoomLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(USatelliteImageProvider, ZoomLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomLevel_MetaData), NewProp_ZoomLevel_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_TileSourceUrl = { "TileSourceUrl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(USatelliteImageProvider, TileSourceUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSourceUrl_MetaData), NewProp_TileSourceUrl_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_TileCacheDirectory = { "TileCacheDirectory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(USatelliteImageProvider, TileCacheDirectory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileCacheDirectory_MetaData), NewProp_TileCacheDirectory_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseCachedTiles = { "bUseCachedTiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(USatelliteImageProvider), &UHT_STATICS::NewProp_bUseCachedTiles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCachedTiles_MetaData), NewProp_bUseCachedTiles_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFailOnMissingTiles = { "bFailOnMissingTiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(USatelliteImageProvider), &UHT_STATICS::NewProp_bFailOnMissingTiles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFailOnMissingTiles_MetaData), NewProp_bFailOnMissingTiles_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ExpectedTileResolution = { "ExpectedTileResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(USatelliteImageProvider, ExpectedTileResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpectedTileResolution_MetaData), NewProp_ExpectedTileResolution_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxDownloadRetries = { "MaxDownloadRetries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(USatelliteImageProvider, MaxDownloadRetries), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDownloadRetries_MetaData), NewProp_MaxDownloadRetries_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RetryBackoffSeconds = { "RetryBackoffSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(USatelliteImageProvider, RetryBackoffSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RetryBackoffSeconds_MetaData), NewProp_RetryBackoffSeconds_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCreateAsset = { "bCreateAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(USatelliteImageProvider), &UHT_STATICS::NewProp_bCreateAsset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateAsset_MetaData), NewProp_bCreateAsset_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_TextureAssetName = { "TextureAssetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(USatelliteImageProvider, TextureAssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureAssetName_MetaData), NewProp_TextureAssetName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoundingBoxLatLon,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetWorldBoundsCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeoOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AxisOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZoomLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TileSourceUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TileCacheDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseCachedTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFailOnMissingTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExpectedTileResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxDownloadRetries,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RetryBackoffSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCreateAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextureAssetName,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class USatelliteImageProvider Property Definitions *******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_USatelliteImageProvider,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void USatelliteImageProvider_StaticRegisterNativesUSatelliteImageProvider()
{
	UClass* Class = USatelliteImageProvider::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USatelliteImageProvider;
UClass* Z_Construct_UClass_USatelliteImageProvider(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = USatelliteImageProvider;
		if (!Z_Registration_Info_UClass_USatelliteImageProvider.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("SatelliteImageProvider"),
				Z_Registration_Info_UClass_USatelliteImageProvider.InnerSingleton,
				USatelliteImageProvider_StaticRegisterNativesUSatelliteImageProvider,
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
		return Z_Registration_Info_UClass_USatelliteImageProvider.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_USatelliteImageProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USatelliteImageProvider.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_USatelliteImageProvider.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USatelliteImageProvider);
USatelliteImageProvider::~USatelliteImageProvider() {}
// ********** End Class USatelliteImageProvider ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_SatelliteImageProvider_h__Script_TwinBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USatelliteImageProvider, TEXT("USatelliteImageProvider"), &Z_Registration_Info_UClass_USatelliteImageProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USatelliteImageProvider), 2186243314U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_SatelliteImageProvider_h__Script_TwinBLDEditor_69ab9d81e1743dff568c4ba83f38f81e15caa4ef{
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
