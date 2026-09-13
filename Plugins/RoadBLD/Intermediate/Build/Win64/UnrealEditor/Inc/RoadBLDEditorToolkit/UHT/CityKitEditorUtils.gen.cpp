// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CityKitEditorUtils.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeCityKitEditorUtils() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UDataAsset(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprint(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UWorld(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FBulkReferencerSet(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FBulkReferencersParams(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FBulkReferencersResult(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FCityKitCleanupInfo(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FCityKitCleanupParams(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FCityKitCleanupResult(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UCityKitEditorUtils(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_ECityKitLicenseState(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UUntrackedLevelReferenceAsset(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UCityKitEditorUtils(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UUntrackedLevelReferenceAsset(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FCityKitCleanupParams *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FCityKitCleanupParams_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FCityKitCleanupParams>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCityKitCleanupParams); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceOfTruthAssetPath_MetaData[] = {
		{ "Category", "RoadBLD" },
		{ "Comment", "// The \"Source of Truth\" (the thing we consolidate into).\n" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
		{ "ToolTip", "The \"Source of Truth\" (the thing we consolidate into)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CleanupAssetPath_MetaData[] = {
		{ "Category", "RoadBLD" },
		{ "Comment", "// The comparable directory (the assets we suspect should be cleaned up).\n" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
		{ "ToolTip", "The comparable directory (the assets we suspect should be cleaned up)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredAssetTypes_MetaData[] = {
		{ "Category", "RoadBLD" },
		{ "Comment", "// String types of assets that are required (non-matchers are removed).\n" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
		{ "ToolTip", "String types of assets that are required (non-matchers are removed)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoredAssetTypes_MetaData[] = {
		{ "Category", "RoadBLD" },
		{ "Comment", "// String types of assets that are ignored (matchers are removed).\n" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
		{ "ToolTip", "String types of assets that are ignored (matchers are removed)." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCityKitCleanupParams constinit property declarations *************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceOfTruthAssetPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CleanupAssetPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequiredAssetTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RequiredAssetTypes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IgnoredAssetTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoredAssetTypes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCityKitCleanupParams constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCityKitCleanupParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FCityKitCleanupParams Property Definitions ************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SourceOfTruthAssetPath = { "SourceOfTruthAssetPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FCityKitCleanupParams, SourceOfTruthAssetPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceOfTruthAssetPath_MetaData), NewProp_SourceOfTruthAssetPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_CleanupAssetPath = { "CleanupAssetPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FCityKitCleanupParams, CleanupAssetPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CleanupAssetPath_MetaData), NewProp_CleanupAssetPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_RequiredAssetTypes_Inner = { "RequiredAssetTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RequiredAssetTypes = { "RequiredAssetTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FCityKitCleanupParams, RequiredAssetTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredAssetTypes_MetaData), NewProp_RequiredAssetTypes_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_IgnoredAssetTypes_Inner = { "IgnoredAssetTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_IgnoredAssetTypes = { "IgnoredAssetTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FCityKitCleanupParams, IgnoredAssetTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoredAssetTypes_MetaData), NewProp_IgnoredAssetTypes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceOfTruthAssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CleanupAssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RequiredAssetTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RequiredAssetTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IgnoredAssetTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IgnoredAssetTypes,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FCityKitCleanupParams Property Definitions **************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	&NewStructOps,
	"CityKitCleanupParams",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FCityKitCleanupParams>(),
	alignof(FCityKitCleanupParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCityKitCleanupParams;
UScriptStruct* Z_Construct_UScriptStruct_FCityKitCleanupParams(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FCityKitCleanupParams.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FCityKitCleanupParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCityKitCleanupParams, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("CityKitCleanupParams"));
		}
		return Z_Registration_Info_UScriptStruct_FCityKitCleanupParams.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FCityKitCleanupParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCityKitCleanupParams.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCityKitCleanupParams.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FCityKitCleanupParams ***********************************************

// ********** Begin ScriptStruct FCityKitCleanupInfo ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FCityKitCleanupInfo_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FCityKitCleanupInfo>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCityKitCleanupInfo); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CleanupToTruthAssetMap_MetaData[] = {
		{ "Category", "RoadBLD" },
		{ "Comment", "// Mapping of \"Cleanup Asset\" ==> \"Source of Truth Asset\" by literal string path.\n" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
		{ "ToolTip", "Mapping of \"Cleanup Asset\" ==> \"Source of Truth Asset\" by literal string path." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetCountsByType_MetaData[] = {
		{ "Category", "RoadBLD" },
		{ "Comment", "// Simply counts the number of assets by type.\n" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
		{ "ToolTip", "Simply counts the number of assets by type." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCityKitCleanupInfo constinit property declarations ***************
	static const UECodeGen_Private::FStrPropertyParams NewProp_CleanupToTruthAssetMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CleanupToTruthAssetMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CleanupToTruthAssetMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssetCountsByType_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetCountsByType_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AssetCountsByType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCityKitCleanupInfo constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCityKitCleanupInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FCityKitCleanupInfo Property Definitions **************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_CleanupToTruthAssetMap_ValueProp = { "CleanupToTruthAssetMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_CleanupToTruthAssetMap_Key_KeyProp = { "CleanupToTruthAssetMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_CleanupToTruthAssetMap = { "CleanupToTruthAssetMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FCityKitCleanupInfo, CleanupToTruthAssetMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CleanupToTruthAssetMap_MetaData), NewProp_CleanupToTruthAssetMap_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_AssetCountsByType_ValueProp = { "AssetCountsByType", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_AssetCountsByType_Key_KeyProp = { "AssetCountsByType_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_AssetCountsByType = { "AssetCountsByType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FCityKitCleanupInfo, AssetCountsByType), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetCountsByType_MetaData), NewProp_AssetCountsByType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CleanupToTruthAssetMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CleanupToTruthAssetMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CleanupToTruthAssetMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AssetCountsByType_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AssetCountsByType_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AssetCountsByType,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FCityKitCleanupInfo Property Definitions ****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	&NewStructOps,
	"CityKitCleanupInfo",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FCityKitCleanupInfo>(),
	alignof(FCityKitCleanupInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCityKitCleanupInfo;
UScriptStruct* Z_Construct_UScriptStruct_FCityKitCleanupInfo(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FCityKitCleanupInfo.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FCityKitCleanupInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCityKitCleanupInfo, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("CityKitCleanupInfo"));
		}
		return Z_Registration_Info_UScriptStruct_FCityKitCleanupInfo.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FCityKitCleanupInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCityKitCleanupInfo.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCityKitCleanupInfo.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FCityKitCleanupInfo *************************************************

// ********** Begin ScriptStruct FCityKitCleanupResult *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FCityKitCleanupResult_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FCityKitCleanupResult>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCityKitCleanupResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetsConsolidated_MetaData[] = {
		{ "Category", "RoadBLD" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetsFailedToConsolidate_MetaData[] = {
		{ "Category", "RoadBLD" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Errors_MetaData[] = {
		{ "Category", "RoadBLD" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCityKitCleanupResult constinit property declarations *************
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssetsConsolidated;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AssetsFailedToConsolidate;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Errors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Errors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCityKitCleanupResult constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCityKitCleanupResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FCityKitCleanupResult Property Definitions ************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_AssetsConsolidated = { "AssetsConsolidated", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FCityKitCleanupResult, AssetsConsolidated), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetsConsolidated_MetaData), NewProp_AssetsConsolidated_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_AssetsFailedToConsolidate = { "AssetsFailedToConsolidate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FCityKitCleanupResult, AssetsFailedToConsolidate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetsFailedToConsolidate_MetaData), NewProp_AssetsFailedToConsolidate_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Errors_Inner = { "Errors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Errors = { "Errors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FCityKitCleanupResult, Errors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Errors_MetaData), NewProp_Errors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AssetsConsolidated,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AssetsFailedToConsolidate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Errors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Errors,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FCityKitCleanupResult Property Definitions **************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	&NewStructOps,
	"CityKitCleanupResult",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FCityKitCleanupResult>(),
	alignof(FCityKitCleanupResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCityKitCleanupResult;
UScriptStruct* Z_Construct_UScriptStruct_FCityKitCleanupResult(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FCityKitCleanupResult.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FCityKitCleanupResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCityKitCleanupResult, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("CityKitCleanupResult"));
		}
		return Z_Registration_Info_UScriptStruct_FCityKitCleanupResult.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FCityKitCleanupResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCityKitCleanupResult.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCityKitCleanupResult.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FCityKitCleanupResult ***********************************************

// ********** Begin ScriptStruct FBulkReferencersParams ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FBulkReferencersParams_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FBulkReferencersParams>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FBulkReferencersParams); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FolderPath_MetaData[] = {
		{ "Category", "Params" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredFolders_MetaData[] = {
		{ "Category", "Params" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoredFolders_MetaData[] = {
		{ "Category", "Params" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusAssets_MetaData[] = {
		{ "Category", "Params" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FBulkReferencersParams constinit property declarations ************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FolderPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequiredFolders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RequiredFolders;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IgnoredFolders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoredFolders;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FocusAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FocusAssets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FBulkReferencersParams constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBulkReferencersParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FBulkReferencersParams Property Definitions ***********************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_FolderPath = { "FolderPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FBulkReferencersParams, FolderPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FolderPath_MetaData), NewProp_FolderPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_RequiredFolders_Inner = { "RequiredFolders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RequiredFolders = { "RequiredFolders", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FBulkReferencersParams, RequiredFolders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredFolders_MetaData), NewProp_RequiredFolders_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_IgnoredFolders_Inner = { "IgnoredFolders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_IgnoredFolders = { "IgnoredFolders", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FBulkReferencersParams, IgnoredFolders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoredFolders_MetaData), NewProp_IgnoredFolders_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_FocusAssets_Inner = { "FocusAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_FocusAssets = { "FocusAssets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FBulkReferencersParams, FocusAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusAssets_MetaData), NewProp_FocusAssets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FolderPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RequiredFolders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RequiredFolders,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IgnoredFolders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IgnoredFolders,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FocusAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FocusAssets,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FBulkReferencersParams Property Definitions *************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	&NewStructOps,
	"BulkReferencersParams",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FBulkReferencersParams>(),
	alignof(FBulkReferencersParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBulkReferencersParams;
UScriptStruct* Z_Construct_UScriptStruct_FBulkReferencersParams(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FBulkReferencersParams.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FBulkReferencersParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBulkReferencersParams, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("BulkReferencersParams"));
		}
		return Z_Registration_Info_UScriptStruct_FBulkReferencersParams.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FBulkReferencersParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBulkReferencersParams.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FBulkReferencersParams.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FBulkReferencersParams **********************************************

// ********** Begin ScriptStruct FBulkReferencerSet ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FBulkReferencerSet_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FBulkReferencerSet>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FBulkReferencerSet); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencesIn_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencesOut_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FBulkReferencerSet constinit property declarations ****************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReferencesIn_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencesIn;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReferencesOut_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencesOut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FBulkReferencerSet constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBulkReferencerSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FBulkReferencerSet Property Definitions ***************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReferencesIn_Inner = { "ReferencesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReferencesIn = { "ReferencesIn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FBulkReferencerSet, ReferencesIn), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencesIn_MetaData), NewProp_ReferencesIn_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReferencesOut_Inner = { "ReferencesOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReferencesOut = { "ReferencesOut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FBulkReferencerSet, ReferencesOut), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencesOut_MetaData), NewProp_ReferencesOut_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReferencesIn_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReferencesIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReferencesOut_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReferencesOut,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FBulkReferencerSet Property Definitions *****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	&NewStructOps,
	"BulkReferencerSet",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FBulkReferencerSet>(),
	alignof(FBulkReferencerSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBulkReferencerSet;
UScriptStruct* Z_Construct_UScriptStruct_FBulkReferencerSet(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FBulkReferencerSet.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FBulkReferencerSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBulkReferencerSet, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("BulkReferencerSet"));
		}
		return Z_Registration_Info_UScriptStruct_FBulkReferencerSet.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FBulkReferencerSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBulkReferencerSet.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FBulkReferencerSet.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FBulkReferencerSet **************************************************

// ********** Begin ScriptStruct FBulkReferencersResult ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FBulkReferencersResult_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FBulkReferencersResult>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FBulkReferencersResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FolderReferences_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusAssetReferences_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FBulkReferencersResult constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_FolderReferences;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FocusAssetReferences_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FocusAssetReferences_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FocusAssetReferences;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FBulkReferencersResult constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBulkReferencersResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FBulkReferencersResult Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_FolderReferences = { "FolderReferences", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FBulkReferencersResult, FolderReferences), Z_Construct_UScriptStruct_FBulkReferencerSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FolderReferences_MetaData), NewProp_FolderReferences_MetaData) }; // a234622b0eef7df15cace825144f48789c799cdf
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_FocusAssetReferences_ValueProp = { "FocusAssetReferences", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FBulkReferencerSet, METADATA_PARAMS(0, nullptr) }; // a234622b0eef7df15cace825144f48789c799cdf
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_FocusAssetReferences_Key_KeyProp = { "FocusAssetReferences_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_FocusAssetReferences = { "FocusAssetReferences", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FBulkReferencersResult, FocusAssetReferences), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusAssetReferences_MetaData), NewProp_FocusAssetReferences_MetaData) }; // a234622b0eef7df15cace825144f48789c799cdf
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FolderReferences,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FocusAssetReferences_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FocusAssetReferences_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FocusAssetReferences,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FBulkReferencersResult Property Definitions *************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	&NewStructOps,
	"BulkReferencersResult",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FBulkReferencersResult>(),
	alignof(FBulkReferencersResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBulkReferencersResult;
UScriptStruct* Z_Construct_UScriptStruct_FBulkReferencersResult(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FBulkReferencersResult.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FBulkReferencersResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBulkReferencersResult, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("BulkReferencersResult"));
		}
		return Z_Registration_Info_UScriptStruct_FBulkReferencersResult.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FBulkReferencersResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBulkReferencersResult.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FBulkReferencersResult.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FBulkReferencersResult **********************************************

// ********** Begin Enum ECityKitLicenseState ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDEditorToolkit_ECityKitLicenseState_Statics
template<> ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ECityKitLicenseState>()
{
	return Z_Construct_UEnum_RoadBLDEditorToolkit_ECityKitLicenseState(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Invalid.Name", "ECityKitLicenseState::Invalid" },
		{ "Licensed.Name", "ECityKitLicenseState::Licensed" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
		{ "NoMatch.Name", "ECityKitLicenseState::NoMatch" },
		{ "NotFound.Name", "ECityKitLicenseState::NotFound" },
		{ "OutOfDate.Name", "ECityKitLicenseState::OutOfDate" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECityKitLicenseState::NotFound", (int64)ECityKitLicenseState::NotFound },
		{ "ECityKitLicenseState::Invalid", (int64)ECityKitLicenseState::Invalid },
		{ "ECityKitLicenseState::NoMatch", (int64)ECityKitLicenseState::NoMatch },
		{ "ECityKitLicenseState::OutOfDate", (int64)ECityKitLicenseState::OutOfDate },
		{ "ECityKitLicenseState::Licensed", (int64)ECityKitLicenseState::Licensed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	"ECityKitLicenseState",
	"ECityKitLicenseState",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ECityKitLicenseState;
UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_ECityKitLicenseState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ECityKitLicenseState.OuterSingleton)
		{
			ZRIE_ECityKitLicenseState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDEditorToolkit_ECityKitLicenseState, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("ECityKitLicenseState"));
		}
		return ZRIE_ECityKitLicenseState.OuterSingleton;
	}
	if (!ZRIE_ECityKitLicenseState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ECityKitLicenseState.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ECityKitLicenseState.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ECityKitLicenseState ********************************************************

// ********** Begin Class UCityKitEditorUtils Function BulkFindReferencersAcrossFolder *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCityKitEditorUtils_BulkFindReferencersAcrossFolder_Statics
struct UHT_STATICS
{
	struct CityKitEditorUtils_eventBulkFindReferencersAcrossFolder_Parms
	{
		FBulkReferencersParams Params;
		FBulkReferencersResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBuilderEditor|Utils" },
		{ "Comment", "// Finds the list of references crossing the barrier of a particular folder. \n" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
		{ "ToolTip", "Finds the list of references crossing the barrier of a particular folder." },
	};
#endif // WITH_METADATA

// ********** Begin Function BulkFindReferencersAcrossFolder constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BulkFindReferencersAcrossFolder constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BulkFindReferencersAcrossFolder Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(CityKitEditorUtils_eventBulkFindReferencersAcrossFolder_Parms, Params), Z_Construct_UScriptStruct_FBulkReferencersParams, METADATA_PARAMS(0, nullptr) }; // 260e3ab0385193cc77c0f8c5229cddce5f249b01
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(CityKitEditorUtils_eventBulkFindReferencersAcrossFolder_Parms, OutResult), Z_Construct_UScriptStruct_FBulkReferencersResult, METADATA_PARAMS(0, nullptr) }; // cb4ddcccdec7cd598ac418a62a89d85e256b1450
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Params,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function BulkFindReferencersAcrossFolder Property Definitions ********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCityKitEditorUtils, nullptr, "BulkFindReferencersAcrossFolder", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CityKitEditorUtils_eventBulkFindReferencersAcrossFolder_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CityKitEditorUtils_eventBulkFindReferencersAcrossFolder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCityKitEditorUtils_BulkFindReferencersAcrossFolder(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCityKitEditorUtils::execBulkFindReferencersAcrossFolder)
{
	P_GET_STRUCT(FBulkReferencersParams,Z_Param_Params);
	P_GET_STRUCT_REF(FBulkReferencersResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCityKitEditorUtils::BulkFindReferencersAcrossFolder(Z_Param_Params,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// ********** End Class UCityKitEditorUtils Function BulkFindReferencersAcrossFolder ***************

// ********** Begin Class UCityKitEditorUtils Function DeduplicateCityBuildAssets ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCityKitEditorUtils_DeduplicateCityBuildAssets_Statics
struct UHT_STATICS
{
	struct CityKitEditorUtils_eventDeduplicateCityBuildAssets_Parms
	{
		FCityKitCleanupParams CleanupParams;
		FCityKitCleanupInfo InInfo;
		FCityKitCleanupResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBuilderEditor|CityKits" },
		{ "Comment", "// Takes the result from `GatherCityBuildAssetsToDeduplicate()` and actually performs asset consolidation.\n" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
		{ "ToolTip", "Takes the result from `GatherCityBuildAssetsToDeduplicate()` and actually performs asset consolidation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DeduplicateCityBuildAssets constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CleanupParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DeduplicateCityBuildAssets constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DeduplicateCityBuildAssets Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CleanupParams = { "CleanupParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(CityKitEditorUtils_eventDeduplicateCityBuildAssets_Parms, CleanupParams), Z_Construct_UScriptStruct_FCityKitCleanupParams, METADATA_PARAMS(0, nullptr) }; // 82afdd94fda0e932f30896e46f35a4276fbb0293
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InInfo = { "InInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(CityKitEditorUtils_eventDeduplicateCityBuildAssets_Parms, InInfo), Z_Construct_UScriptStruct_FCityKitCleanupInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InInfo_MetaData), NewProp_InInfo_MetaData) }; // 7d09400b37d530a9fdfee1e96d2100be4c33de54
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(CityKitEditorUtils_eventDeduplicateCityBuildAssets_Parms, OutResult), Z_Construct_UScriptStruct_FCityKitCleanupResult, METADATA_PARAMS(0, nullptr) }; // dc40de078914b51864a99945e42d56ba48e16383
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CleanupParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DeduplicateCityBuildAssets Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCityKitEditorUtils, nullptr, "DeduplicateCityBuildAssets", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CityKitEditorUtils_eventDeduplicateCityBuildAssets_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CityKitEditorUtils_eventDeduplicateCityBuildAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCityKitEditorUtils_DeduplicateCityBuildAssets(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCityKitEditorUtils::execDeduplicateCityBuildAssets)
{
	P_GET_STRUCT(FCityKitCleanupParams,Z_Param_CleanupParams);
	P_GET_STRUCT_REF(FCityKitCleanupInfo,Z_Param_Out_InInfo);
	P_GET_STRUCT_REF(FCityKitCleanupResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCityKitEditorUtils::DeduplicateCityBuildAssets(Z_Param_CleanupParams,Z_Param_Out_InInfo,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// ********** End Class UCityKitEditorUtils Function DeduplicateCityBuildAssets ********************

// ********** Begin Class UCityKitEditorUtils Function GatherCityBuildAssetsToDeduplicate **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCityKitEditorUtils_GatherCityBuildAssetsToDeduplicate_Statics
struct UHT_STATICS
{
	struct CityKitEditorUtils_eventGatherCityBuildAssetsToDeduplicate_Parms
	{
		FCityKitCleanupParams CleanupParams;
		FCityKitCleanupInfo OutInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBuilderEditor|CityKits" },
		{ "Comment", "// Compares the literal asset names between two folders and emits the list of asset pairs that can be consolidated.\n// SEE: DeduplicateCityBuildAssets()\n" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
		{ "ToolTip", "Compares the literal asset names between two folders and emits the list of asset pairs that can be consolidated.\nSEE: DeduplicateCityBuildAssets()" },
	};
#endif // WITH_METADATA

// ********** Begin Function GatherCityBuildAssetsToDeduplicate constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_CleanupParams;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GatherCityBuildAssetsToDeduplicate constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GatherCityBuildAssetsToDeduplicate Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CleanupParams = { "CleanupParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(CityKitEditorUtils_eventGatherCityBuildAssetsToDeduplicate_Parms, CleanupParams), Z_Construct_UScriptStruct_FCityKitCleanupParams, METADATA_PARAMS(0, nullptr) }; // 82afdd94fda0e932f30896e46f35a4276fbb0293
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutInfo = { "OutInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(CityKitEditorUtils_eventGatherCityBuildAssetsToDeduplicate_Parms, OutInfo), Z_Construct_UScriptStruct_FCityKitCleanupInfo, METADATA_PARAMS(0, nullptr) }; // 7d09400b37d530a9fdfee1e96d2100be4c33de54
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CleanupParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutInfo,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GatherCityBuildAssetsToDeduplicate Property Definitions *****************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCityKitEditorUtils, nullptr, "GatherCityBuildAssetsToDeduplicate", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CityKitEditorUtils_eventGatherCityBuildAssetsToDeduplicate_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CityKitEditorUtils_eventGatherCityBuildAssetsToDeduplicate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCityKitEditorUtils_GatherCityBuildAssetsToDeduplicate(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCityKitEditorUtils::execGatherCityBuildAssetsToDeduplicate)
{
	P_GET_STRUCT(FCityKitCleanupParams,Z_Param_CleanupParams);
	P_GET_STRUCT_REF(FCityKitCleanupInfo,Z_Param_Out_OutInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCityKitEditorUtils::GatherCityBuildAssetsToDeduplicate(Z_Param_CleanupParams,Z_Param_Out_OutInfo);
	P_NATIVE_END;
}
// ********** End Class UCityKitEditorUtils Function GatherCityBuildAssetsToDeduplicate ************

// ********** Begin Class UCityKitEditorUtils Function GetMousePositionInLevelEditorViewport *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCityKitEditorUtils_GetMousePositionInLevelEditorViewport_Statics
struct UHT_STATICS
{
	struct CityKitEditorUtils_eventGetMousePositionInLevelEditorViewport_Parms
	{
		FVector2D OutViewportPosition;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBuilderEditor|Utils" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetMousePositionInLevelEditorViewport constinit property declarations *
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutViewportPosition;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CityKitEditorUtils_eventGetMousePositionInLevelEditorViewport_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetMousePositionInLevelEditorViewport constinit property declarations ***
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetMousePositionInLevelEditorViewport Property Definitions ************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutViewportPosition = { "OutViewportPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(CityKitEditorUtils_eventGetMousePositionInLevelEditorViewport_Parms, OutViewportPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(CityKitEditorUtils_eventGetMousePositionInLevelEditorViewport_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutViewportPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetMousePositionInLevelEditorViewport Property Definitions **************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCityKitEditorUtils, nullptr, "GetMousePositionInLevelEditorViewport", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CityKitEditorUtils_eventGetMousePositionInLevelEditorViewport_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CityKitEditorUtils_eventGetMousePositionInLevelEditorViewport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCityKitEditorUtils_GetMousePositionInLevelEditorViewport(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCityKitEditorUtils::execGetMousePositionInLevelEditorViewport)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutViewportPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UCityKitEditorUtils::GetMousePositionInLevelEditorViewport(Z_Param_Out_OutViewportPosition);
	P_NATIVE_END;
}
// ********** End Class UCityKitEditorUtils Function GetMousePositionInLevelEditorViewport *********

// ********** Begin Class UCityKitEditorUtils Function MouseIsHoveringOverViewport *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCityKitEditorUtils_MouseIsHoveringOverViewport_Statics
struct UHT_STATICS
{
	struct CityKitEditorUtils_eventMouseIsHoveringOverViewport_Parms
	{
		bool bGame;
		bool bLevelEditor;
		bool bPreview;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBuilderEditor|Utils" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function MouseIsHoveringOverViewport constinit property declarations ***********
	static void NewProp_bGame_SetBit(void* Obj)
	{
		((CityKitEditorUtils_eventMouseIsHoveringOverViewport_Parms*)Obj)->bGame = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGame;
	static void NewProp_bLevelEditor_SetBit(void* Obj)
	{
		((CityKitEditorUtils_eventMouseIsHoveringOverViewport_Parms*)Obj)->bLevelEditor = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLevelEditor;
	static void NewProp_bPreview_SetBit(void* Obj)
	{
		((CityKitEditorUtils_eventMouseIsHoveringOverViewport_Parms*)Obj)->bPreview = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreview;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CityKitEditorUtils_eventMouseIsHoveringOverViewport_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function MouseIsHoveringOverViewport constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function MouseIsHoveringOverViewport Property Definitions **********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bGame = { "bGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(CityKitEditorUtils_eventMouseIsHoveringOverViewport_Parms), &UHT_STATICS::NewProp_bGame_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLevelEditor = { "bLevelEditor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(CityKitEditorUtils_eventMouseIsHoveringOverViewport_Parms), &UHT_STATICS::NewProp_bLevelEditor_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPreview = { "bPreview", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(CityKitEditorUtils_eventMouseIsHoveringOverViewport_Parms), &UHT_STATICS::NewProp_bPreview_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(CityKitEditorUtils_eventMouseIsHoveringOverViewport_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLevelEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function MouseIsHoveringOverViewport Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCityKitEditorUtils, nullptr, "MouseIsHoveringOverViewport", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CityKitEditorUtils_eventMouseIsHoveringOverViewport_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CityKitEditorUtils_eventMouseIsHoveringOverViewport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCityKitEditorUtils_MouseIsHoveringOverViewport(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCityKitEditorUtils::execMouseIsHoveringOverViewport)
{
	P_GET_UBOOL(Z_Param_bGame);
	P_GET_UBOOL(Z_Param_bLevelEditor);
	P_GET_UBOOL(Z_Param_bPreview);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UCityKitEditorUtils::MouseIsHoveringOverViewport(Z_Param_bGame,Z_Param_bLevelEditor,Z_Param_bPreview);
	P_NATIVE_END;
}
// ********** End Class UCityKitEditorUtils Function MouseIsHoveringOverViewport *******************

// ********** Begin Class UCityKitEditorUtils Function OpenExternalUrlLinkInWebBrowser *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCityKitEditorUtils_OpenExternalUrlLinkInWebBrowser_Statics
struct UHT_STATICS
{
	struct CityKitEditorUtils_eventOpenExternalUrlLinkInWebBrowser_Parms
	{
		FString Url;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBuilderEditor|Utils" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OpenExternalUrlLinkInWebBrowser constinit property declarations *******
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OpenExternalUrlLinkInWebBrowser constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OpenExternalUrlLinkInWebBrowser Property Definitions ******************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(CityKitEditorUtils_eventOpenExternalUrlLinkInWebBrowser_Parms, Url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Url_MetaData), NewProp_Url_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Url,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OpenExternalUrlLinkInWebBrowser Property Definitions ********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCityKitEditorUtils, nullptr, "OpenExternalUrlLinkInWebBrowser", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CityKitEditorUtils_eventOpenExternalUrlLinkInWebBrowser_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CityKitEditorUtils_eventOpenExternalUrlLinkInWebBrowser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCityKitEditorUtils_OpenExternalUrlLinkInWebBrowser(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCityKitEditorUtils::execOpenExternalUrlLinkInWebBrowser)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Url);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCityKitEditorUtils::OpenExternalUrlLinkInWebBrowser(Z_Param_Url);
	P_NATIVE_END;
}
// ********** End Class UCityKitEditorUtils Function OpenExternalUrlLinkInWebBrowser ***************

// ********** Begin Class UCityKitEditorUtils Function OpenLevelByAssetReference *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCityKitEditorUtils_OpenLevelByAssetReference_Statics
struct UHT_STATICS
{
	struct CityKitEditorUtils_eventOpenLevelByAssetReference_Parms
	{
		TSoftObjectPtr<UWorld> LevelReference;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBuilderEditor|Utils" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OpenLevelByAssetReference constinit property declarations *************
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LevelReference;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OpenLevelByAssetReference constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OpenLevelByAssetReference Property Definitions ************************
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_LevelReference = { "LevelReference", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(CityKitEditorUtils_eventOpenLevelByAssetReference_Parms, LevelReference), Z_Construct_UClass_UWorld, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LevelReference,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OpenLevelByAssetReference Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCityKitEditorUtils, nullptr, "OpenLevelByAssetReference", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CityKitEditorUtils_eventOpenLevelByAssetReference_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CityKitEditorUtils_eventOpenLevelByAssetReference_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCityKitEditorUtils_OpenLevelByAssetReference(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCityKitEditorUtils::execOpenLevelByAssetReference)
{
	P_GET_SOFTOBJECT(TSoftObjectPtr<UWorld>,Z_Param_LevelReference);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCityKitEditorUtils::OpenLevelByAssetReference(Z_Param_LevelReference);
	P_NATIVE_END;
}
// ********** End Class UCityKitEditorUtils Function OpenLevelByAssetReference *********************

// ********** Begin Class UCityKitEditorUtils Function OpenLevelByDataAsset ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCityKitEditorUtils_OpenLevelByDataAsset_Statics
struct UHT_STATICS
{
	struct CityKitEditorUtils_eventOpenLevelByDataAsset_Parms
	{
		TSoftObjectPtr<UUntrackedLevelReferenceAsset> LevelReferenceAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBuilderEditor|Utils" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OpenLevelByDataAsset constinit property declarations ******************
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LevelReferenceAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OpenLevelByDataAsset constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OpenLevelByDataAsset Property Definitions *****************************
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_LevelReferenceAsset = { "LevelReferenceAsset", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(CityKitEditorUtils_eventOpenLevelByDataAsset_Parms, LevelReferenceAsset), Z_Construct_UClass_UUntrackedLevelReferenceAsset, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LevelReferenceAsset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OpenLevelByDataAsset Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCityKitEditorUtils, nullptr, "OpenLevelByDataAsset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CityKitEditorUtils_eventOpenLevelByDataAsset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CityKitEditorUtils_eventOpenLevelByDataAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCityKitEditorUtils_OpenLevelByDataAsset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCityKitEditorUtils::execOpenLevelByDataAsset)
{
	P_GET_SOFTOBJECT(TSoftObjectPtr<UUntrackedLevelReferenceAsset>,Z_Param_LevelReferenceAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCityKitEditorUtils::OpenLevelByDataAsset(Z_Param_LevelReferenceAsset);
	P_NATIVE_END;
}
// ********** End Class UCityKitEditorUtils Function OpenLevelByDataAsset **************************

// ********** Begin Class UCityKitEditorUtils Function RefreshAndRecompileBlueprint ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCityKitEditorUtils_RefreshAndRecompileBlueprint_Statics
struct UHT_STATICS
{
	struct CityKitEditorUtils_eventRefreshAndRecompileBlueprint_Parms
	{
		UBlueprint* Blueprint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBuilderEditor|Utils" },
		{ "Comment", "// Equivalent to \"File > Refresh All nodes\" followed by \"Compile\"\n" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
		{ "ToolTip", "Equivalent to \"File > Refresh All nodes\" followed by \"Compile\"" },
	};
#endif // WITH_METADATA

// ********** Begin Function RefreshAndRecompileBlueprint constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RefreshAndRecompileBlueprint constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RefreshAndRecompileBlueprint Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(CityKitEditorUtils_eventRefreshAndRecompileBlueprint_Parms, Blueprint), Z_Construct_UClass_UBlueprint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Blueprint,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RefreshAndRecompileBlueprint Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCityKitEditorUtils, nullptr, "RefreshAndRecompileBlueprint", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CityKitEditorUtils_eventRefreshAndRecompileBlueprint_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CityKitEditorUtils_eventRefreshAndRecompileBlueprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCityKitEditorUtils_RefreshAndRecompileBlueprint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCityKitEditorUtils::execRefreshAndRecompileBlueprint)
{
	P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
	P_FINISH;
	P_NATIVE_BEGIN;
	UCityKitEditorUtils::RefreshAndRecompileBlueprint(Z_Param_Blueprint);
	P_NATIVE_END;
}
// ********** End Class UCityKitEditorUtils Function RefreshAndRecompileBlueprint ******************

// ********** Begin Class UCityKitEditorUtils ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UCityKitEditorUtils_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "CityKitEditorUtils.h" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCityKitEditorUtils constinit property declarations **********************
// ********** End Class UCityKitEditorUtils constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BulkFindReferencersAcrossFolder"), .Pointer = &UCityKitEditorUtils::execBulkFindReferencersAcrossFolder },
		{ .NameUTF8 = UTF8TEXT("DeduplicateCityBuildAssets"), .Pointer = &UCityKitEditorUtils::execDeduplicateCityBuildAssets },
		{ .NameUTF8 = UTF8TEXT("GatherCityBuildAssetsToDeduplicate"), .Pointer = &UCityKitEditorUtils::execGatherCityBuildAssetsToDeduplicate },
		{ .NameUTF8 = UTF8TEXT("GetMousePositionInLevelEditorViewport"), .Pointer = &UCityKitEditorUtils::execGetMousePositionInLevelEditorViewport },
		{ .NameUTF8 = UTF8TEXT("MouseIsHoveringOverViewport"), .Pointer = &UCityKitEditorUtils::execMouseIsHoveringOverViewport },
		{ .NameUTF8 = UTF8TEXT("OpenExternalUrlLinkInWebBrowser"), .Pointer = &UCityKitEditorUtils::execOpenExternalUrlLinkInWebBrowser },
		{ .NameUTF8 = UTF8TEXT("OpenLevelByAssetReference"), .Pointer = &UCityKitEditorUtils::execOpenLevelByAssetReference },
		{ .NameUTF8 = UTF8TEXT("OpenLevelByDataAsset"), .Pointer = &UCityKitEditorUtils::execOpenLevelByDataAsset },
		{ .NameUTF8 = UTF8TEXT("RefreshAndRecompileBlueprint"), .Pointer = &UCityKitEditorUtils::execRefreshAndRecompileBlueprint },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCityKitEditorUtils_BulkFindReferencersAcrossFolder, "BulkFindReferencersAcrossFolder" }, // 904b6c4b21dae75df413d9a2c95373ce084b619e
		{ &Z_Construct_UFunction_UCityKitEditorUtils_DeduplicateCityBuildAssets, "DeduplicateCityBuildAssets" }, // 621277e26feab064910c2a6756d461be044d6b43
		{ &Z_Construct_UFunction_UCityKitEditorUtils_GatherCityBuildAssetsToDeduplicate, "GatherCityBuildAssetsToDeduplicate" }, // 47ba8fc6cea75a0f6f2be9056cc3cbc70b4a9dcf
		{ &Z_Construct_UFunction_UCityKitEditorUtils_GetMousePositionInLevelEditorViewport, "GetMousePositionInLevelEditorViewport" }, // 0b0539bdc07ba2eae4709d5a2b7cde68f02c1c7c
		{ &Z_Construct_UFunction_UCityKitEditorUtils_MouseIsHoveringOverViewport, "MouseIsHoveringOverViewport" }, // ca4a3b44837d904ca9b26f026ca2520e750da28e
		{ &Z_Construct_UFunction_UCityKitEditorUtils_OpenExternalUrlLinkInWebBrowser, "OpenExternalUrlLinkInWebBrowser" }, // 519d19acecaf2f6bd4690b8fc2766cfc7db1c6fe
		{ &Z_Construct_UFunction_UCityKitEditorUtils_OpenLevelByAssetReference, "OpenLevelByAssetReference" }, // 6379f3515681692f17444cfc3c721fc69e6d7ec1
		{ &Z_Construct_UFunction_UCityKitEditorUtils_OpenLevelByDataAsset, "OpenLevelByDataAsset" }, // 8d817042ea0d1b65413b0cebffa1a967cf168a40
		{ &Z_Construct_UFunction_UCityKitEditorUtils_RefreshAndRecompileBlueprint, "RefreshAndRecompileBlueprint" }, // 7c2e3fcb879ef2f02e11a628b8835c8725695841
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCityKitEditorUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UCityKitEditorUtils,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UCityKitEditorUtils_StaticRegisterNativesUCityKitEditorUtils()
{
	UClass* Class = UCityKitEditorUtils::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCityKitEditorUtils;
UClass* Z_Construct_UClass_UCityKitEditorUtils(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UCityKitEditorUtils;
		if (!Z_Registration_Info_UClass_UCityKitEditorUtils.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CityKitEditorUtils"),
				Z_Registration_Info_UClass_UCityKitEditorUtils.InnerSingleton,
				UCityKitEditorUtils_StaticRegisterNativesUCityKitEditorUtils,
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
		return Z_Registration_Info_UClass_UCityKitEditorUtils.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UCityKitEditorUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCityKitEditorUtils.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UCityKitEditorUtils.OuterSingleton;
}
#undef UHT_STATICS
UCityKitEditorUtils::UCityKitEditorUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCityKitEditorUtils);
UCityKitEditorUtils::~UCityKitEditorUtils() {}
// ********** End Class UCityKitEditorUtils ********************************************************

// ********** Begin Class UUntrackedLevelReferenceAsset ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UUntrackedLevelReferenceAsset_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CityKitEditorUtils.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelReference_MetaData[] = {
		{ "Category", "Reference" },
		{ "ModuleRelativePath", "Public/CityKitEditorUtils.h" },
		{ "Untracked", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UUntrackedLevelReferenceAsset constinit property declarations ************
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LevelReference;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UUntrackedLevelReferenceAsset constinit property declarations **************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUntrackedLevelReferenceAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UUntrackedLevelReferenceAsset Property Definitions ***********************
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_LevelReference = { "LevelReference", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(UUntrackedLevelReferenceAsset, LevelReference), Z_Construct_UClass_UWorld, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelReference_MetaData), NewProp_LevelReference_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LevelReference,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UUntrackedLevelReferenceAsset Property Definitions *************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDataAsset,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UUntrackedLevelReferenceAsset,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UUntrackedLevelReferenceAsset;
UClass* Z_Construct_UClass_UUntrackedLevelReferenceAsset(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UUntrackedLevelReferenceAsset;
		if (!Z_Registration_Info_UClass_UUntrackedLevelReferenceAsset.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("UntrackedLevelReferenceAsset"),
				Z_Registration_Info_UClass_UUntrackedLevelReferenceAsset.InnerSingleton,
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
		return Z_Registration_Info_UClass_UUntrackedLevelReferenceAsset.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UUntrackedLevelReferenceAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUntrackedLevelReferenceAsset.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UUntrackedLevelReferenceAsset.OuterSingleton;
}
#undef UHT_STATICS
UUntrackedLevelReferenceAsset::UUntrackedLevelReferenceAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UUntrackedLevelReferenceAsset);
UUntrackedLevelReferenceAsset::~UUntrackedLevelReferenceAsset() {}
// ********** End Class UUntrackedLevelReferenceAsset **********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CityKitEditorUtils_h__Script_RoadBLDEditorToolkit_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RoadBLDEditorToolkit_ECityKitLicenseState, TEXT("ECityKitLicenseState"), &ZRIE_ECityKitLicenseState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3342705661U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FCityKitCleanupParams, Z_Construct_UScriptStruct_FCityKitCleanupParams_Statics::NewStructOps, TEXT("CityKitCleanupParams"),&Z_Registration_Info_UScriptStruct_FCityKitCleanupParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCityKitCleanupParams), 2192563604U) },
		{ Z_Construct_UScriptStruct_FCityKitCleanupInfo, Z_Construct_UScriptStruct_FCityKitCleanupInfo_Statics::NewStructOps, TEXT("CityKitCleanupInfo"),&Z_Registration_Info_UScriptStruct_FCityKitCleanupInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCityKitCleanupInfo), 2097758219U) },
		{ Z_Construct_UScriptStruct_FCityKitCleanupResult, Z_Construct_UScriptStruct_FCityKitCleanupResult_Statics::NewStructOps, TEXT("CityKitCleanupResult"),&Z_Registration_Info_UScriptStruct_FCityKitCleanupResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCityKitCleanupResult), 3695238663U) },
		{ Z_Construct_UScriptStruct_FBulkReferencersParams, Z_Construct_UScriptStruct_FBulkReferencersParams_Statics::NewStructOps, TEXT("BulkReferencersParams"),&Z_Registration_Info_UScriptStruct_FBulkReferencersParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBulkReferencersParams), 638466736U) },
		{ Z_Construct_UScriptStruct_FBulkReferencerSet, Z_Construct_UScriptStruct_FBulkReferencerSet_Statics::NewStructOps, TEXT("BulkReferencerSet"),&Z_Registration_Info_UScriptStruct_FBulkReferencerSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBulkReferencerSet), 2721341995U) },
		{ Z_Construct_UScriptStruct_FBulkReferencersResult, Z_Construct_UScriptStruct_FBulkReferencersResult_Statics::NewStructOps, TEXT("BulkReferencersResult"),&Z_Registration_Info_UScriptStruct_FBulkReferencersResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBulkReferencersResult), 3410877644U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCityKitEditorUtils, TEXT("UCityKitEditorUtils"), &Z_Registration_Info_UClass_UCityKitEditorUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCityKitEditorUtils), 3011941581U) },
		{ Z_Construct_UClass_UUntrackedLevelReferenceAsset, TEXT("UUntrackedLevelReferenceAsset"), &Z_Registration_Info_UClass_UUntrackedLevelReferenceAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUntrackedLevelReferenceAsset), 1398702403U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CityKitEditorUtils_h__Script_RoadBLDEditorToolkit_6ec61e7e6d19060d77dee976abcec02d0d6f3e12{
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
