// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenStreetMapProvider.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeOpenStreetMapProvider() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntRect(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase);
TWINBLDEDITOR_API UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnRetrieveOsmComplete__DelegateSignature(ETypeConstructPhase);
TWINBLDEDITOR_API UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnStreetMapRecieved__DelegateSignature(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UOsmProvider(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UOsmProvider(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UStreetMap(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UStreetMapFactory(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FOnRetrieveOsmComplete ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_TwinBLDEditor_OnRetrieveOsmComplete__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_TwinBLDEditor_eventOnRetrieveOsmComplete_Parms
	{
		TArray<FString> Files;
		FBox2D Coordinates;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenStreetMapProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnRetrieveOsmComplete constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Files_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Files;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinates;
	static void NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_TwinBLDEditor_eventOnRetrieveOsmComplete_Parms*)Obj)->bSuccess = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnRetrieveOsmComplete constinit property declarations ******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnRetrieveOsmComplete Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TwinBLDEditor_eventOnRetrieveOsmComplete_Parms, Files), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TwinBLDEditor_eventOnRetrieveOsmComplete_Parms, Coordinates), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_TwinBLDEditor_eventOnRetrieveOsmComplete_Parms), &UHT_STATICS::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Files_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Files,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Coordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnRetrieveOsmComplete Property Definitions *****************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor, nullptr, "OnRetrieveOsmComplete__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_TwinBLDEditor_eventOnRetrieveOsmComplete_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_TwinBLDEditor_eventOnRetrieveOsmComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnRetrieveOsmComplete__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnRetrieveOsmComplete **************************************************

// ********** Begin Delegate FOnStreetMapRecieved **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_TwinBLDEditor_OnStreetMapRecieved__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_TwinBLDEditor_eventOnStreetMapRecieved_Parms
	{
		UStreetMap* StreetMap;
		FBox2D Coordinates;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenStreetMapProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnStreetMapRecieved constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StreetMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinates;
	static void NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_TwinBLDEditor_eventOnStreetMapRecieved_Parms*)Obj)->bSuccess = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnStreetMapRecieved constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnStreetMapRecieved Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StreetMap = { "StreetMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TwinBLDEditor_eventOnStreetMapRecieved_Parms, StreetMap), Z_Construct_UClass_UStreetMap, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TwinBLDEditor_eventOnStreetMapRecieved_Parms, Coordinates), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_TwinBLDEditor_eventOnStreetMapRecieved_Parms), &UHT_STATICS::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StreetMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Coordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnStreetMapRecieved Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor, nullptr, "OnStreetMapRecieved__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_TwinBLDEditor_eventOnStreetMapRecieved_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_TwinBLDEditor_eventOnStreetMapRecieved_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnStreetMapRecieved__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnStreetMapRecieved ****************************************************

// ********** Begin Class UOsmProvider Function Cancel *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOsmProvider_Cancel_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/OpenStreetMapProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Cancel constinit property declarations ********************************
// ********** End Function Cancel constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOsmProvider, nullptr, "Cancel", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UOsmProvider_Cancel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOsmProvider::execCancel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Cancel();
	P_NATIVE_END;
}
// ********** End Class UOsmProvider Function Cancel ***********************************************

// ********** Begin Class UOsmProvider Function DownloadUrls ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOsmProvider_DownloadUrls_Statics
struct UHT_STATICS
{
	struct OsmProvider_eventDownloadUrls_Parms
	{
		TArray<FString> Urls;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/OpenStreetMapProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Urls_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DownloadUrls constinit property declarations **************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Urls_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Urls;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DownloadUrls constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DownloadUrls Property Definitions *************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Urls_Inner = { "Urls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Urls = { "Urls", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(OsmProvider_eventDownloadUrls_Parms, Urls), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Urls_MetaData), NewProp_Urls_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Urls_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Urls,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DownloadUrls Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOsmProvider, nullptr, "DownloadUrls", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OsmProvider_eventDownloadUrls_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OsmProvider_eventDownloadUrls_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOsmProvider_DownloadUrls(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOsmProvider::execDownloadUrls)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_Urls);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DownloadUrls(Z_Param_Out_Urls);
	P_NATIVE_END;
}
// ********** End Class UOsmProvider Function DownloadUrls *****************************************

// ********** Begin Class UOsmProvider Function ImportOsmContent ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOsmProvider_ImportOsmContent_Statics
struct UHT_STATICS
{
	struct OsmProvider_eventImportOsmContent_Parms
	{
		FString Source;
		FBox2D Bounds;
		UStreetMap* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// Source - Path to file or XML string\x09\n" },
		{ "ModuleRelativePath", "Public/OpenStreetMapProvider.h" },
		{ "ToolTip", "Source - Path to file or XML string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ImportOsmContent constinit property declarations **********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ImportOsmContent constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ImportOsmContent Property Definitions *********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(OsmProvider_eventImportOsmContent_Parms, Source), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OsmProvider_eventImportOsmContent_Parms, Bounds), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounds_MetaData), NewProp_Bounds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(OsmProvider_eventImportOsmContent_Parms, ReturnValue), Z_Construct_UClass_UStreetMap, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ImportOsmContent Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOsmProvider, nullptr, "ImportOsmContent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OsmProvider_eventImportOsmContent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OsmProvider_eventImportOsmContent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOsmProvider_ImportOsmContent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOsmProvider::execImportOsmContent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Source);
	P_GET_STRUCT_REF(FBox2D,Z_Param_Out_Bounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStreetMap**)Z_Param__Result=P_THIS->ImportOsmContent(Z_Param_Source,Z_Param_Out_Bounds);
	P_NATIVE_END;
}
// ********** End Class UOsmProvider Function ImportOsmContent *************************************

// ********** Begin Class UOsmProvider Function LoadOSMData ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UOsmProvider_LoadOSMData_Statics
struct UHT_STATICS
{
	struct OsmProvider_eventLoadOSMData_Parms
	{
		FIntRect Rect;
		FVector2D GeoOrigin;
		FIntPoint AxisOrder;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// Import StreetMap for Geofabrik \n// Rect - world space bounds in meters\n" },
		{ "ModuleRelativePath", "Public/OpenStreetMapProvider.h" },
		{ "ToolTip", "Import StreetMap for Geofabrik\nRect - world space bounds in meters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rect_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeoOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LoadOSMData constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeoOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadOSMData constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadOSMData Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Rect = { "Rect", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OsmProvider_eventLoadOSMData_Parms, Rect), Z_Construct_UScriptStruct_FIntRect, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rect_MetaData), NewProp_Rect_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GeoOrigin = { "GeoOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OsmProvider_eventLoadOSMData_Parms, GeoOrigin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeoOrigin_MetaData), NewProp_GeoOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AxisOrder = { "AxisOrder", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(OsmProvider_eventLoadOSMData_Parms, AxisOrder), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisOrder_MetaData), NewProp_AxisOrder_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Rect,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeoOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AxisOrder,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function LoadOSMData Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UOsmProvider, nullptr, "LoadOSMData", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::OsmProvider_eventLoadOSMData_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::OsmProvider_eventLoadOSMData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOsmProvider_LoadOSMData(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UOsmProvider::execLoadOSMData)
{
	P_GET_STRUCT_REF(FIntRect,Z_Param_Out_Rect);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_GeoOrigin);
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_AxisOrder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadOSMData(Z_Param_Out_Rect,Z_Param_Out_GeoOrigin,Z_Param_Out_AxisOrder);
	P_NATIVE_END;
}
// ********** End Class UOsmProvider Function LoadOSMData ******************************************

// ********** Begin Class UOsmProvider *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UOsmProvider_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OpenStreetMapProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OpenStreetMapProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRetrieveOsmComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenStreetMapProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStreetMapRecieved_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/OpenStreetMapProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverpassEndpoint_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/OpenStreetMapProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeofabrikMasterIndexUrl_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/OpenStreetMapProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverpassRequestTimeoutSeconds_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/OpenStreetMapProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeofabrikDownloadTimeoutSeconds_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/OpenStreetMapProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreetMapFactory_MetaData[] = {
		{ "ModuleRelativePath", "Public/OpenStreetMapProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOsmProvider constinit property declarations *****************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRetrieveOsmComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStreetMapRecieved;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OverpassEndpoint;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GeofabrikMasterIndexUrl;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverpassRequestTimeoutSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GeofabrikDownloadTimeoutSeconds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StreetMapFactory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOsmProvider constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Cancel"), .Pointer = &UOsmProvider::execCancel },
		{ .NameUTF8 = UTF8TEXT("DownloadUrls"), .Pointer = &UOsmProvider::execDownloadUrls },
		{ .NameUTF8 = UTF8TEXT("ImportOsmContent"), .Pointer = &UOsmProvider::execImportOsmContent },
		{ .NameUTF8 = UTF8TEXT("LoadOSMData"), .Pointer = &UOsmProvider::execLoadOSMData },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOsmProvider_Cancel, "Cancel" }, // d35033a2d72c5d458bb2d0e43a25f07762ad63f7
		{ &Z_Construct_UFunction_UOsmProvider_DownloadUrls, "DownloadUrls" }, // 5e6f9422c05a4dc3f2e795ca246cd0889bd7e4a8
		{ &Z_Construct_UFunction_UOsmProvider_ImportOsmContent, "ImportOsmContent" }, // b16edb45ac1a75f2f2831f97cff50e9473b3229e
		{ &Z_Construct_UFunction_UOsmProvider_LoadOSMData, "LoadOSMData" }, // 40e07f93e74ff0a26e2fb5703d0548c790167de2
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOsmProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UOsmProvider Property Definitions ****************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnRetrieveOsmComplete = { "OnRetrieveOsmComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UOsmProvider, OnRetrieveOsmComplete), Z_Construct_UDelegateFunction_TwinBLDEditor_OnRetrieveOsmComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRetrieveOsmComplete_MetaData), NewProp_OnRetrieveOsmComplete_MetaData) }; // 88e21263f7a07e5aa9da2c7e9e89a7213edb6152
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnStreetMapRecieved = { "OnStreetMapRecieved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UOsmProvider, OnStreetMapRecieved), Z_Construct_UDelegateFunction_TwinBLDEditor_OnStreetMapRecieved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStreetMapRecieved_MetaData), NewProp_OnStreetMapRecieved_MetaData) }; // 15da4b807b85a96b122fbfb89415dc812bf94b21
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OverpassEndpoint = { "OverpassEndpoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UOsmProvider, OverpassEndpoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverpassEndpoint_MetaData), NewProp_OverpassEndpoint_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_GeofabrikMasterIndexUrl = { "GeofabrikMasterIndexUrl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UOsmProvider, GeofabrikMasterIndexUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeofabrikMasterIndexUrl_MetaData), NewProp_GeofabrikMasterIndexUrl_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_OverpassRequestTimeoutSeconds = { "OverpassRequestTimeoutSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UOsmProvider, OverpassRequestTimeoutSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverpassRequestTimeoutSeconds_MetaData), NewProp_OverpassRequestTimeoutSeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GeofabrikDownloadTimeoutSeconds = { "GeofabrikDownloadTimeoutSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UOsmProvider, GeofabrikDownloadTimeoutSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeofabrikDownloadTimeoutSeconds_MetaData), NewProp_GeofabrikDownloadTimeoutSeconds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StreetMapFactory = { "StreetMapFactory", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UOsmProvider, StreetMapFactory), Z_Construct_UClass_UStreetMapFactory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreetMapFactory_MetaData), NewProp_StreetMapFactory_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnRetrieveOsmComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnStreetMapRecieved,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OverpassEndpoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeofabrikMasterIndexUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OverpassRequestTimeoutSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeofabrikDownloadTimeoutSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StreetMapFactory,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UOsmProvider Property Definitions ******************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UOsmProvider,
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
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UOsmProvider_StaticRegisterNativesUOsmProvider()
{
	UClass* Class = UOsmProvider::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOsmProvider;
UClass* Z_Construct_UClass_UOsmProvider(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UOsmProvider;
		if (!Z_Registration_Info_UClass_UOsmProvider.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("OsmProvider"),
				Z_Registration_Info_UClass_UOsmProvider.InnerSingleton,
				UOsmProvider_StaticRegisterNativesUOsmProvider,
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
		return Z_Registration_Info_UClass_UOsmProvider.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UOsmProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOsmProvider.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UOsmProvider.OuterSingleton;
}
#undef UHT_STATICS
UOsmProvider::UOsmProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOsmProvider);
UOsmProvider::~UOsmProvider() {}
// ********** End Class UOsmProvider ***************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_OpenStreetMapProvider_h__Script_TwinBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOsmProvider, TEXT("UOsmProvider"), &Z_Registration_Info_UClass_UOsmProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOsmProvider), 2619713253U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_OpenStreetMapProvider_h__Script_TwinBLDEditor_f76d6416b299583c63b88171da85626e79cb9d66{
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
