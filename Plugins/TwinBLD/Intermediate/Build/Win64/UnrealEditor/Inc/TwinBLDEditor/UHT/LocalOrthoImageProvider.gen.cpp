// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LocalOrthoImageProvider.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeLocalOrthoImageProvider() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_ULocalOrthoImageProvider(ETypeConstructPhase);
TWINBLDEDITOR_API UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnSatelliteImageComplete__DelegateSignature(ETypeConstructPhase);
TWINBLDEDITOR_API UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnSatelliteImageProgress__DelegateSignature(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_ULocalOrthoImageProvider(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class ULocalOrthoImageProvider Function CancelOperation ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULocalOrthoImageProvider_CancelOperation_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/LocalOrthoImageProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CancelOperation constinit property declarations ***********************
// ********** End Function CancelOperation constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULocalOrthoImageProvider, nullptr, "CancelOperation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ULocalOrthoImageProvider_CancelOperation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULocalOrthoImageProvider::execCancelOperation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelOperation();
	P_NATIVE_END;
}
// ********** End Class ULocalOrthoImageProvider Function CancelOperation **************************

// ********** Begin Class ULocalOrthoImageProvider Function GenerateImageFromLocalOrtho ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULocalOrthoImageProvider_GenerateImageFromLocalOrtho_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/LocalOrthoImageProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateImageFromLocalOrtho constinit property declarations ***********
// ********** End Function GenerateImageFromLocalOrtho constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULocalOrthoImageProvider, nullptr, "GenerateImageFromLocalOrtho", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ULocalOrthoImageProvider_GenerateImageFromLocalOrtho(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULocalOrthoImageProvider::execGenerateImageFromLocalOrtho)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateImageFromLocalOrtho();
	P_NATIVE_END;
}
// ********** End Class ULocalOrthoImageProvider Function GenerateImageFromLocalOrtho **************

// ********** Begin Class ULocalOrthoImageProvider Function IsOperationInProgress ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULocalOrthoImageProvider_IsOperationInProgress_Statics
struct UHT_STATICS
{
	struct LocalOrthoImageProvider_eventIsOperationInProgress_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/LocalOrthoImageProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsOperationInProgress constinit property declarations *****************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LocalOrthoImageProvider_eventIsOperationInProgress_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsOperationInProgress constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsOperationInProgress Property Definitions ****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(LocalOrthoImageProvider_eventIsOperationInProgress_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsOperationInProgress Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULocalOrthoImageProvider, nullptr, "IsOperationInProgress", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LocalOrthoImageProvider_eventIsOperationInProgress_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LocalOrthoImageProvider_eventIsOperationInProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalOrthoImageProvider_IsOperationInProgress(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULocalOrthoImageProvider::execIsOperationInProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOperationInProgress();
	P_NATIVE_END;
}
// ********** End Class ULocalOrthoImageProvider Function IsOperationInProgress ********************

// ********** Begin Class ULocalOrthoImageProvider Function ValidateConfiguration ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULocalOrthoImageProvider_ValidateConfiguration_Statics
struct UHT_STATICS
{
	struct LocalOrthoImageProvider_eventValidateConfiguration_Parms
	{
		FString OutError;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/LocalOrthoImageProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ValidateConfiguration constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutError;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LocalOrthoImageProvider_eventValidateConfiguration_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ValidateConfiguration constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ValidateConfiguration Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(LocalOrthoImageProvider_eventValidateConfiguration_Parms, OutError), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(LocalOrthoImageProvider_eventValidateConfiguration_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutError,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ValidateConfiguration Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULocalOrthoImageProvider, nullptr, "ValidateConfiguration", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LocalOrthoImageProvider_eventValidateConfiguration_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LocalOrthoImageProvider_eventValidateConfiguration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalOrthoImageProvider_ValidateConfiguration(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULocalOrthoImageProvider::execValidateConfiguration)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutError);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ValidateConfiguration(Z_Param_Out_OutError);
	P_NATIVE_END;
}
// ********** End Class ULocalOrthoImageProvider Function ValidateConfiguration ********************

// ********** Begin Class ULocalOrthoImageProvider *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ULocalOrthoImageProvider_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Builds a world-aligned RGB texture by mosaicking local georeferenced ortho tiles\n * (JPEG2000 / GeoTIFF / any GDAL-readable raster with a geotransform).\n *\n * Sampling matches USatelliteImageProvider world-projection convention:\n * texture U = west\xe2\x86\x92""east, V = north\xe2\x86\x92south, aligned to TargetWorldBoundsCm via GeoOrigin.\n */" },
		{ "IncludePath", "LocalOrthoImageProvider.h" },
		{ "ModuleRelativePath", "Public/LocalOrthoImageProvider.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Builds a world-aligned RGB texture by mosaicking local georeferenced ortho tiles\n(JPEG2000 / GeoTIFF / any GDAL-readable raster with a geotransform).\n\nSampling matches USatelliteImageProvider world-projection convention:\ntexture U = west\xe2\x86\x92""east, V = north\xe2\x86\x92south, aligned to TargetWorldBoundsCm via GeoOrigin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/LocalOrthoImageProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnProgress_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/LocalOrthoImageProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrthoFolder_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "Comment", "/** Folder containing georeferenced ortho tiles (.jp2 / .tif / etc.). */" },
		{ "ModuleRelativePath", "Public/LocalOrthoImageProvider.h" },
		{ "ToolTip", "Folder containing georeferenced ortho tiles (.jp2 / .tif / etc.)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetWorldBoundsCm_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "Comment", "/** Optional target bounds in world-space centimeters (required for generation). */" },
		{ "ModuleRelativePath", "Public/LocalOrthoImageProvider.h" },
		{ "ToolTip", "Optional target bounds in world-space centimeters (required for generation)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeoOrigin_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/LocalOrthoImageProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisOrder_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/LocalOrthoImageProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceCrs_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "Comment", "/**\n\x09 * Source horizontal CRS for the ortho tiles (PROJ / EPSG string).\n\x09 * NYC planimetric / 2024 ortho default: NAD83(2011) NY Long Island ftUS.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LocalOrthoImageProvider.h" },
		{ "ToolTip", "Source horizontal CRS for the ortho tiles (PROJ / EPSG string).\nNYC planimetric / 2024 ortho default: NAD83(2011) NY Long Island ftUS." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NativePixelSizeCm_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Native ortho pixel size used to size the output texture (cm). 15.24 cm = 0.5 US survey ft. */" },
		{ "ModuleRelativePath", "Public/LocalOrthoImageProvider.h" },
		{ "ToolTip", "Native ortho pixel size used to size the output texture (cm). 15.24 cm = 0.5 US survey ft." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxOutputDimension_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ClampMax", "8192" },
		{ "ClampMin", "256" },
		{ "Comment", "/** Hard cap on either output texture dimension. */" },
		{ "ModuleRelativePath", "Public/LocalOrthoImageProvider.h" },
		{ "ToolTip", "Hard cap on either output texture dimension." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateAsset_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/LocalOrthoImageProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureAssetName_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/LocalOrthoImageProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULocalOrthoImageProvider constinit property declarations *****************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProgress;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OrthoFolder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetWorldBoundsCm;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeoOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisOrder;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceCrs;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_NativePixelSizeCm;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxOutputDimension;
	static void NewProp_bCreateAsset_SetBit(void* Obj)
	{
		((ULocalOrthoImageProvider*)Obj)->bCreateAsset = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateAsset;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TextureAssetName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ULocalOrthoImageProvider constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CancelOperation"), .Pointer = &ULocalOrthoImageProvider::execCancelOperation },
		{ .NameUTF8 = UTF8TEXT("GenerateImageFromLocalOrtho"), .Pointer = &ULocalOrthoImageProvider::execGenerateImageFromLocalOrtho },
		{ .NameUTF8 = UTF8TEXT("IsOperationInProgress"), .Pointer = &ULocalOrthoImageProvider::execIsOperationInProgress },
		{ .NameUTF8 = UTF8TEXT("ValidateConfiguration"), .Pointer = &ULocalOrthoImageProvider::execValidateConfiguration },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULocalOrthoImageProvider_CancelOperation, "CancelOperation" }, // 8961de6af066e77af7b64efb3790de303525d0b3
		{ &Z_Construct_UFunction_ULocalOrthoImageProvider_GenerateImageFromLocalOrtho, "GenerateImageFromLocalOrtho" }, // 3e3f5005ae33700a7c10d62667c4d90026c07f0c
		{ &Z_Construct_UFunction_ULocalOrthoImageProvider_IsOperationInProgress, "IsOperationInProgress" }, // ae12de9c248e97f0c20c8f2e3eec03845b3e2f68
		{ &Z_Construct_UFunction_ULocalOrthoImageProvider_ValidateConfiguration, "ValidateConfiguration" }, // 783e167a7f36f154a0ee6d87593b451ce23fa884
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalOrthoImageProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ULocalOrthoImageProvider Property Definitions ****************************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalOrthoImageProvider, OnComplete), Z_Construct_UDelegateFunction_TwinBLDEditor_OnSatelliteImageComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 2c318451cf9692dbe3ea0865a7fef01f2ba26807
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnProgress = { "OnProgress", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalOrthoImageProvider, OnProgress), Z_Construct_UDelegateFunction_TwinBLDEditor_OnSatelliteImageProgress__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnProgress_MetaData), NewProp_OnProgress_MetaData) }; // be1c94ee05b53befb5e51669b60d4ff93921f849
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OrthoFolder = { "OrthoFolder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalOrthoImageProvider, OrthoFolder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrthoFolder_MetaData), NewProp_OrthoFolder_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TargetWorldBoundsCm = { "TargetWorldBoundsCm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalOrthoImageProvider, TargetWorldBoundsCm), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetWorldBoundsCm_MetaData), NewProp_TargetWorldBoundsCm_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GeoOrigin = { "GeoOrigin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalOrthoImageProvider, GeoOrigin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeoOrigin_MetaData), NewProp_GeoOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AxisOrder = { "AxisOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalOrthoImageProvider, AxisOrder), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisOrder_MetaData), NewProp_AxisOrder_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SourceCrs = { "SourceCrs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalOrthoImageProvider, SourceCrs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceCrs_MetaData), NewProp_SourceCrs_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_NativePixelSizeCm = { "NativePixelSizeCm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalOrthoImageProvider, NativePixelSizeCm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NativePixelSizeCm_MetaData), NewProp_NativePixelSizeCm_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxOutputDimension = { "MaxOutputDimension", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalOrthoImageProvider, MaxOutputDimension), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxOutputDimension_MetaData), NewProp_MaxOutputDimension_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCreateAsset = { "bCreateAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ULocalOrthoImageProvider), &UHT_STATICS::NewProp_bCreateAsset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateAsset_MetaData), NewProp_bCreateAsset_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_TextureAssetName = { "TextureAssetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalOrthoImageProvider, TextureAssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureAssetName_MetaData), NewProp_TextureAssetName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OrthoFolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetWorldBoundsCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeoOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AxisOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceCrs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NativePixelSizeCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxOutputDimension,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCreateAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextureAssetName,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ULocalOrthoImageProvider Property Definitions ******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ULocalOrthoImageProvider,
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
static void ULocalOrthoImageProvider_StaticRegisterNativesULocalOrthoImageProvider()
{
	UClass* Class = ULocalOrthoImageProvider::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULocalOrthoImageProvider;
UClass* Z_Construct_UClass_ULocalOrthoImageProvider(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ULocalOrthoImageProvider;
		if (!Z_Registration_Info_UClass_ULocalOrthoImageProvider.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("LocalOrthoImageProvider"),
				Z_Registration_Info_UClass_ULocalOrthoImageProvider.InnerSingleton,
				ULocalOrthoImageProvider_StaticRegisterNativesULocalOrthoImageProvider,
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
		return Z_Registration_Info_UClass_ULocalOrthoImageProvider.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ULocalOrthoImageProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocalOrthoImageProvider.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ULocalOrthoImageProvider.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULocalOrthoImageProvider);
ULocalOrthoImageProvider::~ULocalOrthoImageProvider() {}
// ********** End Class ULocalOrthoImageProvider ***************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_LocalOrthoImageProvider_h__Script_TwinBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULocalOrthoImageProvider, TEXT("ULocalOrthoImageProvider"), &Z_Registration_Info_UClass_ULocalOrthoImageProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocalOrthoImageProvider), 1989532771U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_LocalOrthoImageProvider_h__Script_TwinBLDEditor_36cbe3be0d831e0796149c4e381dc059244f1dea{
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
