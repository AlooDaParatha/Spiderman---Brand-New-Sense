// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeightMapProvider.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeHeightMapProvider() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector2(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UHeightMapProvider(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDHeightmap(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UHeightMapProvider(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FTwinBLDHeightmap *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FTwinBLDHeightmap_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FTwinBLDHeightmap>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FTwinBLDHeightmap); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HeightMapProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/HeightMapProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dimensions_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/HeightMapProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightRange_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/HeightMapProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoDataValue_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/HeightMapProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeoBounds_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "Comment", "// Geographic bounds in latitude/longitude. Min = (South, West), Max = (North, East).\n" },
		{ "ModuleRelativePath", "Public/HeightMapProvider.h" },
		{ "ToolTip", "Geographic bounds in latitude/longitude. Min = (South, West), Max = (North, East)." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FTwinBLDHeightmap constinit property declarations *****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dimensions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeightRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoDataValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeoBounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FTwinBLDHeightmap constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwinBLDHeightmap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FTwinBLDHeightmap Property Definitions ****************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDHeightmap, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Dimensions = { "Dimensions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDHeightmap, Dimensions), Z_Construct_UScriptStruct_FIntVector2, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dimensions_MetaData), NewProp_Dimensions_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_HeightRange = { "HeightRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDHeightmap, HeightRange), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightRange_MetaData), NewProp_HeightRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_NoDataValue = { "NoDataValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDHeightmap, NoDataValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoDataValue_MetaData), NewProp_NoDataValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GeoBounds = { "GeoBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDHeightmap, GeoBounds), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeoBounds_MetaData), NewProp_GeoBounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Dimensions,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HeightRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NoDataValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeoBounds,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FTwinBLDHeightmap Property Definitions ******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"TwinBLDHeightmap",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FTwinBLDHeightmap>(),
	alignof(FTwinBLDHeightmap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTwinBLDHeightmap;
UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDHeightmap(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FTwinBLDHeightmap.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FTwinBLDHeightmap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwinBLDHeightmap, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("TwinBLDHeightmap"));
		}
		return Z_Registration_Info_UScriptStruct_FTwinBLDHeightmap.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FTwinBLDHeightmap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTwinBLDHeightmap.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FTwinBLDHeightmap.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FTwinBLDHeightmap ***************************************************

// ********** Begin Class UHeightMapProvider Function CancelOperation ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UHeightMapProvider_CancelOperation_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/HeightMapProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CancelOperation constinit property declarations ***********************
// ********** End Function CancelOperation constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UHeightMapProvider, nullptr, "CancelOperation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UHeightMapProvider_CancelOperation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UHeightMapProvider::execCancelOperation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelOperation();
	P_NATIVE_END;
}
// ********** End Class UHeightMapProvider Function CancelOperation ********************************

// ********** Begin Class UHeightMapProvider Function Clear ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UHeightMapProvider_Clear_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/HeightMapProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Clear constinit property declarations *********************************
// ********** End Function Clear constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UHeightMapProvider, nullptr, "Clear", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UHeightMapProvider_Clear(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UHeightMapProvider::execClear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Clear();
	P_NATIVE_END;
}
// ********** End Class UHeightMapProvider Function Clear ******************************************

// ********** Begin Class UHeightMapProvider Function IsOperationInProgress ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UHeightMapProvider_IsOperationInProgress_Statics
struct UHT_STATICS
{
	struct HeightMapProvider_eventIsOperationInProgress_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/HeightMapProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsOperationInProgress constinit property declarations *****************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeightMapProvider_eventIsOperationInProgress_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsOperationInProgress constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsOperationInProgress Property Definitions ****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(HeightMapProvider_eventIsOperationInProgress_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsOperationInProgress Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UHeightMapProvider, nullptr, "IsOperationInProgress", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::HeightMapProvider_eventIsOperationInProgress_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::HeightMapProvider_eventIsOperationInProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeightMapProvider_IsOperationInProgress(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UHeightMapProvider::execIsOperationInProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOperationInProgress();
	P_NATIVE_END;
}
// ********** End Class UHeightMapProvider Function IsOperationInProgress **************************

// ********** Begin Class UHeightMapProvider Function ValidateConfiguration ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UHeightMapProvider_ValidateConfiguration_Statics
struct UHT_STATICS
{
	struct HeightMapProvider_eventValidateConfiguration_Parms
	{
		FString OutError;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/HeightMapProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ValidateConfiguration constinit property declarations *****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutError;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeightMapProvider_eventValidateConfiguration_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ValidateConfiguration constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ValidateConfiguration Property Definitions ****************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(HeightMapProvider_eventValidateConfiguration_Parms, OutError), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(HeightMapProvider_eventValidateConfiguration_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutError,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ValidateConfiguration Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UHeightMapProvider, nullptr, "ValidateConfiguration", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::HeightMapProvider_eventValidateConfiguration_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::HeightMapProvider_eventValidateConfiguration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeightMapProvider_ValidateConfiguration(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UHeightMapProvider::execValidateConfiguration)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutError);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ValidateConfiguration(Z_Param_Out_OutError);
	P_NATIVE_END;
}
// ********** End Class UHeightMapProvider Function ValidateConfiguration **************************

// ********** Begin Class UHeightMapProvider *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UHeightMapProvider_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// UHeightMapProvider - Downloads Copernicus DEM tiles and creates heightmap\n" },
		{ "IncludePath", "HeightMapProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HeightMapProvider.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UHeightMapProvider - Downloads Copernicus DEM tiles and creates heightmap" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileCacheDirectory_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/HeightMapProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCachedTiles_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/HeightMapProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseUrl_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "Comment", "// AWS S3 bucket for Copernicus DEM GLO-30\n" },
		{ "ModuleRelativePath", "Public/HeightMapProvider.h" },
		{ "ToolTip", "AWS S3 bucket for Copernicus DEM GLO-30" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TwinBLD" },
		{ "Comment", "// Bounding box in lat/lon: Min = (South Lat, West Lon), Max = (North Lat, East Lon)\n" },
		{ "ModuleRelativePath", "Public/HeightMapProvider.h" },
		{ "ToolTip", "Bounding box in lat/lon: Min = (South Lat, West Lon), Max = (North Lat, East Lon)" },
	};
#endif // WITH_METADATA

// ********** Begin Class UHeightMapProvider constinit property declarations ***********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_TileCacheDirectory;
	static void NewProp_bUseCachedTiles_SetBit(void* Obj)
	{
		((UHeightMapProvider*)Obj)->bUseCachedTiles = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCachedTiles;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BaseUrl;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UHeightMapProvider constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CancelOperation"), .Pointer = &UHeightMapProvider::execCancelOperation },
		{ .NameUTF8 = UTF8TEXT("Clear"), .Pointer = &UHeightMapProvider::execClear },
		{ .NameUTF8 = UTF8TEXT("IsOperationInProgress"), .Pointer = &UHeightMapProvider::execIsOperationInProgress },
		{ .NameUTF8 = UTF8TEXT("ValidateConfiguration"), .Pointer = &UHeightMapProvider::execValidateConfiguration },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeightMapProvider_CancelOperation, "CancelOperation" }, // 74b1271315e362d5b13df7c8e950fd6dd4ed18a5
		{ &Z_Construct_UFunction_UHeightMapProvider_Clear, "Clear" }, // 6bde8d8890f1f53ce5c9bd99104c00111fda510d
		{ &Z_Construct_UFunction_UHeightMapProvider_IsOperationInProgress, "IsOperationInProgress" }, // af577f1dbf72d3476f73f6df10ccb0a9d6d0ee43
		{ &Z_Construct_UFunction_UHeightMapProvider_ValidateConfiguration, "ValidateConfiguration" }, // 647edef7ab2dda1212044cd0b5760ec18f8260a8
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeightMapProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UHeightMapProvider Property Definitions **********************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_TileCacheDirectory = { "TileCacheDirectory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UHeightMapProvider, TileCacheDirectory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileCacheDirectory_MetaData), NewProp_TileCacheDirectory_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseCachedTiles = { "bUseCachedTiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UHeightMapProvider), &UHT_STATICS::NewProp_bUseCachedTiles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCachedTiles_MetaData), NewProp_bUseCachedTiles_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_BaseUrl = { "BaseUrl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UHeightMapProvider, BaseUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseUrl_MetaData), NewProp_BaseUrl_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UHeightMapProvider, Coordinates), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coordinates_MetaData), NewProp_Coordinates_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TileCacheDirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseCachedTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BaseUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Coordinates,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UHeightMapProvider Property Definitions ************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UHeightMapProvider,
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
static void UHeightMapProvider_StaticRegisterNativesUHeightMapProvider()
{
	UClass* Class = UHeightMapProvider::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHeightMapProvider;
UClass* Z_Construct_UClass_UHeightMapProvider(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UHeightMapProvider;
		if (!Z_Registration_Info_UClass_UHeightMapProvider.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("HeightMapProvider"),
				Z_Registration_Info_UClass_UHeightMapProvider.InnerSingleton,
				UHeightMapProvider_StaticRegisterNativesUHeightMapProvider,
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
		return Z_Registration_Info_UClass_UHeightMapProvider.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UHeightMapProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeightMapProvider.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeightMapProvider.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UHeightMapProvider);
UHeightMapProvider::~UHeightMapProvider() {}
// ********** End Class UHeightMapProvider *********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_HeightMapProvider_h__Script_TwinBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FTwinBLDHeightmap, Z_Construct_UScriptStruct_FTwinBLDHeightmap_Statics::NewStructOps, TEXT("TwinBLDHeightmap"),&Z_Registration_Info_UScriptStruct_FTwinBLDHeightmap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwinBLDHeightmap), 1828184844U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeightMapProvider, TEXT("UHeightMapProvider"), &Z_Registration_Info_UClass_UHeightMapProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeightMapProvider), 1346622036U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_HeightMapProvider_h__Script_TwinBLDEditor_9bfed4619bc6a65afda194e402628aafb5e1197a{
	TEXT("/Script/TwinBLDEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
