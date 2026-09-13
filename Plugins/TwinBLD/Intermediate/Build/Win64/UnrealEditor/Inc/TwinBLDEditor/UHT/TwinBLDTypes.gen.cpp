// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwinBLDTypes.h"
#include "StreetMap/StreetMapUtils.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeTwinBLDTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntRect(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FBuildingSettings(ETypeConstructPhase);
TWINBLDEDITOR_API UEnum* Z_Construct_UEnum_TwinBLDEditor_EOSMWayType(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoadStripSettings(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDGeoOriginChangeImpact(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDImportOptions(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDImportTileBounds(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDImportTileId(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDImportTileRecord(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDLevelTileGenerationRecord(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDSatelliteImportOptions(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UStreetMapImportCustomizer(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UStreetMapImportCustomizerBase(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FTwinBLDImportTileId **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FTwinBLDImportTileId_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FTwinBLDImportTileId>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FTwinBLDImportTileId); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FTwinBLDImportTileId constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FTwinBLDImportTileId constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwinBLDImportTileId>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FTwinBLDImportTileId Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDImportTileId, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDImportTileId, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Y,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FTwinBLDImportTileId Property Definitions ***************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"TwinBLDImportTileId",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FTwinBLDImportTileId>(),
	alignof(FTwinBLDImportTileId),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTwinBLDImportTileId;
UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDImportTileId(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FTwinBLDImportTileId.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FTwinBLDImportTileId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwinBLDImportTileId, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("TwinBLDImportTileId"));
		}
		return Z_Registration_Info_UScriptStruct_FTwinBLDImportTileId.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FTwinBLDImportTileId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTwinBLDImportTileId.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FTwinBLDImportTileId.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FTwinBLDImportTileId ************************************************

// ********** Begin ScriptStruct FTwinBLDImportTileBounds ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FTwinBLDImportTileBounds_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FTwinBLDImportTileBounds>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FTwinBLDImportTileBounds); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileId_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldRectMeters_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldRectCentimeters_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeoBounds_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FTwinBLDImportTileBounds constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldRectMeters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldRectCentimeters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeoBounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FTwinBLDImportTileBounds constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwinBLDImportTileBounds>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FTwinBLDImportTileBounds Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TileId = { "TileId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDImportTileBounds, TileId), Z_Construct_UScriptStruct_FTwinBLDImportTileId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileId_MetaData), NewProp_TileId_MetaData) }; // a7fb3eb83fa12648e64f8b78b713392a3908503a
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WorldRectMeters = { "WorldRectMeters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDImportTileBounds, WorldRectMeters), Z_Construct_UScriptStruct_FIntRect, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldRectMeters_MetaData), NewProp_WorldRectMeters_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WorldRectCentimeters = { "WorldRectCentimeters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDImportTileBounds, WorldRectCentimeters), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldRectCentimeters_MetaData), NewProp_WorldRectCentimeters_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GeoBounds = { "GeoBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDImportTileBounds, GeoBounds), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeoBounds_MetaData), NewProp_GeoBounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldRectMeters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldRectCentimeters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeoBounds,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FTwinBLDImportTileBounds Property Definitions ***********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"TwinBLDImportTileBounds",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FTwinBLDImportTileBounds>(),
	alignof(FTwinBLDImportTileBounds),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTwinBLDImportTileBounds;
UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDImportTileBounds(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FTwinBLDImportTileBounds.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FTwinBLDImportTileBounds.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwinBLDImportTileBounds, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("TwinBLDImportTileBounds"));
		}
		return Z_Registration_Info_UScriptStruct_FTwinBLDImportTileBounds.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FTwinBLDImportTileBounds.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTwinBLDImportTileBounds.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FTwinBLDImportTileBounds.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FTwinBLDImportTileBounds ********************************************

// ********** Begin ScriptStruct FTwinBLDImportOptions *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FTwinBLDImportOptions_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FTwinBLDImportOptions>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FTwinBLDImportOptions); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateLandscape_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateBuildings_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateRoads_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateParcels_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClearExistingGeneratedActors_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapBuildingsToLandscape_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapParcelsToLandscape_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapRoadsToLandscape_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDetectFacades_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPostProcessDeduplicateBuildings_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "Comment", "/** Runs an optional post-process pass that removes redundant overlapping buildings. */" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
		{ "ToolTip", "Runs an optional post-process pass that removes redundant overlapping buildings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportRoofShapes_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "Comment", "/** When true, OSM roof:* tags override BuildingStyle roof types during building generation. */" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
		{ "ToolTip", "When true, OSM roof:* tags override BuildingStyle roof types during building generation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClearExistingRoads_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreetMapCustomizerClass_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnabledRoadTypes_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadStripSettings_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FTwinBLDImportOptions constinit property declarations *************
	static void NewProp_bGenerateLandscape_SetBit(void* Obj)
	{
		((FTwinBLDImportOptions*)Obj)->bGenerateLandscape = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateLandscape;
	static void NewProp_bGenerateBuildings_SetBit(void* Obj)
	{
		((FTwinBLDImportOptions*)Obj)->bGenerateBuildings = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateBuildings;
	static void NewProp_bGenerateRoads_SetBit(void* Obj)
	{
		((FTwinBLDImportOptions*)Obj)->bGenerateRoads = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateRoads;
	static void NewProp_bGenerateParcels_SetBit(void* Obj)
	{
		((FTwinBLDImportOptions*)Obj)->bGenerateParcels = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateParcels;
	static void NewProp_bClearExistingGeneratedActors_SetBit(void* Obj)
	{
		((FTwinBLDImportOptions*)Obj)->bClearExistingGeneratedActors = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearExistingGeneratedActors;
	static void NewProp_bSnapBuildingsToLandscape_SetBit(void* Obj)
	{
		((FTwinBLDImportOptions*)Obj)->bSnapBuildingsToLandscape = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapBuildingsToLandscape;
	static void NewProp_bSnapParcelsToLandscape_SetBit(void* Obj)
	{
		((FTwinBLDImportOptions*)Obj)->bSnapParcelsToLandscape = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapParcelsToLandscape;
	static void NewProp_bSnapRoadsToLandscape_SetBit(void* Obj)
	{
		((FTwinBLDImportOptions*)Obj)->bSnapRoadsToLandscape = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapRoadsToLandscape;
	static void NewProp_bDetectFacades_SetBit(void* Obj)
	{
		((FTwinBLDImportOptions*)Obj)->bDetectFacades = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectFacades;
	static void NewProp_bPostProcessDeduplicateBuildings_SetBit(void* Obj)
	{
		((FTwinBLDImportOptions*)Obj)->bPostProcessDeduplicateBuildings = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPostProcessDeduplicateBuildings;
	static void NewProp_bImportRoofShapes_SetBit(void* Obj)
	{
		((FTwinBLDImportOptions*)Obj)->bImportRoofShapes = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportRoofShapes;
	static void NewProp_bClearExistingRoads_SetBit(void* Obj)
	{
		((FTwinBLDImportOptions*)Obj)->bClearExistingRoads = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearExistingRoads;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StreetMapCustomizerClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnabledRoadTypes_ElementProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EnabledRoadTypes_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_EnabledRoadTypes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoadStripSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FTwinBLDImportOptions constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwinBLDImportOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FTwinBLDImportOptions Property Definitions ************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bGenerateLandscape = { "bGenerateLandscape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDImportOptions), &UHT_STATICS::NewProp_bGenerateLandscape_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateLandscape_MetaData), NewProp_bGenerateLandscape_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bGenerateBuildings = { "bGenerateBuildings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDImportOptions), &UHT_STATICS::NewProp_bGenerateBuildings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateBuildings_MetaData), NewProp_bGenerateBuildings_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bGenerateRoads = { "bGenerateRoads", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDImportOptions), &UHT_STATICS::NewProp_bGenerateRoads_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateRoads_MetaData), NewProp_bGenerateRoads_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bGenerateParcels = { "bGenerateParcels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDImportOptions), &UHT_STATICS::NewProp_bGenerateParcels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateParcels_MetaData), NewProp_bGenerateParcels_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bClearExistingGeneratedActors = { "bClearExistingGeneratedActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDImportOptions), &UHT_STATICS::NewProp_bClearExistingGeneratedActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClearExistingGeneratedActors_MetaData), NewProp_bClearExistingGeneratedActors_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSnapBuildingsToLandscape = { "bSnapBuildingsToLandscape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDImportOptions), &UHT_STATICS::NewProp_bSnapBuildingsToLandscape_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapBuildingsToLandscape_MetaData), NewProp_bSnapBuildingsToLandscape_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSnapParcelsToLandscape = { "bSnapParcelsToLandscape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDImportOptions), &UHT_STATICS::NewProp_bSnapParcelsToLandscape_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapParcelsToLandscape_MetaData), NewProp_bSnapParcelsToLandscape_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSnapRoadsToLandscape = { "bSnapRoadsToLandscape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDImportOptions), &UHT_STATICS::NewProp_bSnapRoadsToLandscape_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapRoadsToLandscape_MetaData), NewProp_bSnapRoadsToLandscape_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDetectFacades = { "bDetectFacades", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDImportOptions), &UHT_STATICS::NewProp_bDetectFacades_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDetectFacades_MetaData), NewProp_bDetectFacades_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPostProcessDeduplicateBuildings = { "bPostProcessDeduplicateBuildings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDImportOptions), &UHT_STATICS::NewProp_bPostProcessDeduplicateBuildings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPostProcessDeduplicateBuildings_MetaData), NewProp_bPostProcessDeduplicateBuildings_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bImportRoofShapes = { "bImportRoofShapes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDImportOptions), &UHT_STATICS::NewProp_bImportRoofShapes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportRoofShapes_MetaData), NewProp_bImportRoofShapes_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bClearExistingRoads = { "bClearExistingRoads", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDImportOptions), &UHT_STATICS::NewProp_bClearExistingRoads_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClearExistingRoads_MetaData), NewProp_bClearExistingRoads_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_StreetMapCustomizerClass = { "StreetMapCustomizerClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDImportOptions, StreetMapCustomizerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UStreetMapImportCustomizerBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreetMapCustomizerClass_MetaData), NewProp_StreetMapCustomizerClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_EnabledRoadTypes_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_EnabledRoadTypes_ElementProp = { "EnabledRoadTypes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, 0, Z_Construct_UEnum_TwinBLDEditor_EOSMWayType, METADATA_PARAMS(0, nullptr) }; // 5b1e381aeff0552c511b4c1744d11a209d3e48e0
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_EnabledRoadTypes = { "EnabledRoadTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDImportOptions, EnabledRoadTypes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnabledRoadTypes_MetaData), NewProp_EnabledRoadTypes_MetaData) }; // 5b1e381aeff0552c511b4c1744d11a209d3e48e0
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RoadStripSettings = { "RoadStripSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDImportOptions, RoadStripSettings), Z_Construct_UScriptStruct_FStreetMapRoadStripSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadStripSettings_MetaData), NewProp_RoadStripSettings_MetaData) }; // b801dcef2552d12a234bd4425015d26813a95616
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bGenerateLandscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bGenerateBuildings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bGenerateRoads,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bGenerateParcels,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bClearExistingGeneratedActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSnapBuildingsToLandscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSnapParcelsToLandscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSnapRoadsToLandscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDetectFacades,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPostProcessDeduplicateBuildings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bImportRoofShapes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bClearExistingRoads,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StreetMapCustomizerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnabledRoadTypes_ElementProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnabledRoadTypes_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnabledRoadTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadStripSettings,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FTwinBLDImportOptions Property Definitions **************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"TwinBLDImportOptions",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FTwinBLDImportOptions>(),
	alignof(FTwinBLDImportOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTwinBLDImportOptions;
UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDImportOptions(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FTwinBLDImportOptions.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FTwinBLDImportOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwinBLDImportOptions, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("TwinBLDImportOptions"));
		}
		return Z_Registration_Info_UScriptStruct_FTwinBLDImportOptions.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FTwinBLDImportOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTwinBLDImportOptions.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FTwinBLDImportOptions.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FTwinBLDImportOptions ***********************************************

// ********** Begin ScriptStruct FTwinBLDImportTileRecord ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FTwinBLDImportTileRecord_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FTwinBLDImportTileRecord>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FTwinBLDImportTileRecord); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceHash_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileId_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedActorRefs_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeoOrigin_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisOrder_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeoTransformRevision_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "Comment", "/** GeoTransformRevision from ATwinBLDLevelSettings when this tile generation started. */" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
		{ "ToolTip", "GeoTransformRevision from ATwinBLDLevelSettings when this tile generation started." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FTwinBLDImportTileRecord constinit property declarations **********
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourcePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceHash;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GeneratedActorRefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedActorRefs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeoOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisOrder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GeoTransformRevision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FTwinBLDImportTileRecord constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwinBLDImportTileRecord>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FTwinBLDImportTileRecord Property Definitions *********************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDImportTileRecord, SourcePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePath_MetaData), NewProp_SourcePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SourceHash = { "SourceHash", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDImportTileRecord, SourceHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceHash_MetaData), NewProp_SourceHash_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TileId = { "TileId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDImportTileRecord, TileId), Z_Construct_UScriptStruct_FTwinBLDImportTileId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileId_MetaData), NewProp_TileId_MetaData) }; // a7fb3eb83fa12648e64f8b78b713392a3908503a
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDImportTileRecord, Bounds), Z_Construct_UScriptStruct_FTwinBLDImportTileBounds, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounds_MetaData), NewProp_Bounds_MetaData) }; // 79c17f3cf7d256950f1b3695cbb221a318b8eade
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_GeneratedActorRefs_Inner = { "GeneratedActorRefs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_GeneratedActorRefs = { "GeneratedActorRefs", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDImportTileRecord, GeneratedActorRefs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedActorRefs_MetaData), NewProp_GeneratedActorRefs_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GeoOrigin = { "GeoOrigin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDImportTileRecord, GeoOrigin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeoOrigin_MetaData), NewProp_GeoOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AxisOrder = { "AxisOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDImportTileRecord, AxisOrder), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisOrder_MetaData), NewProp_AxisOrder_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_GeoTransformRevision = { "GeoTransformRevision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDImportTileRecord, GeoTransformRevision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeoTransformRevision_MetaData), NewProp_GeoTransformRevision_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourcePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeneratedActorRefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeneratedActorRefs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeoOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AxisOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeoTransformRevision,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FTwinBLDImportTileRecord Property Definitions ***********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"TwinBLDImportTileRecord",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FTwinBLDImportTileRecord>(),
	alignof(FTwinBLDImportTileRecord),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTwinBLDImportTileRecord;
UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDImportTileRecord(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FTwinBLDImportTileRecord.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FTwinBLDImportTileRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwinBLDImportTileRecord, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("TwinBLDImportTileRecord"));
		}
		return Z_Registration_Info_UScriptStruct_FTwinBLDImportTileRecord.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FTwinBLDImportTileRecord.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTwinBLDImportTileRecord.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FTwinBLDImportTileRecord.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FTwinBLDImportTileRecord ********************************************

// ********** Begin ScriptStruct FTwinBLDLevelTileGenerationRecord *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FTwinBLDLevelTileGenerationRecord_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FTwinBLDLevelTileGenerationRecord>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FTwinBLDLevelTileGenerationRecord); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Persistent per-tile generation history owned by ATwinBLDLevelSettings. */" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
		{ "ToolTip", "Persistent per-tile generation history owned by ATwinBLDLevelSettings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceHash_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileId_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldRectMeters_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGeneratedBuildings_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGeneratedRoads_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGeneratedLandscape_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGeneratedParcels_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGeneratedSatellite_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingsGeoTransformRevision_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "Comment", "/** GeoTransformRevision recorded when each content type was last marked generated. */" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
		{ "ToolTip", "GeoTransformRevision recorded when each content type was last marked generated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadsGeoTransformRevision_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeGeoTransformRevision_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParcelsGeoTransformRevision_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SatelliteGeoTransformRevision_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FTwinBLDLevelTileGenerationRecord constinit property declarations *
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceHash;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldRectMeters;
	static void NewProp_bGeneratedBuildings_SetBit(void* Obj)
	{
		((FTwinBLDLevelTileGenerationRecord*)Obj)->bGeneratedBuildings = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGeneratedBuildings;
	static void NewProp_bGeneratedRoads_SetBit(void* Obj)
	{
		((FTwinBLDLevelTileGenerationRecord*)Obj)->bGeneratedRoads = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGeneratedRoads;
	static void NewProp_bGeneratedLandscape_SetBit(void* Obj)
	{
		((FTwinBLDLevelTileGenerationRecord*)Obj)->bGeneratedLandscape = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGeneratedLandscape;
	static void NewProp_bGeneratedParcels_SetBit(void* Obj)
	{
		((FTwinBLDLevelTileGenerationRecord*)Obj)->bGeneratedParcels = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGeneratedParcels;
	static void NewProp_bGeneratedSatellite_SetBit(void* Obj)
	{
		((FTwinBLDLevelTileGenerationRecord*)Obj)->bGeneratedSatellite = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGeneratedSatellite;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BuildingsGeoTransformRevision;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoadsGeoTransformRevision;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LandscapeGeoTransformRevision;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParcelsGeoTransformRevision;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SatelliteGeoTransformRevision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FTwinBLDLevelTileGenerationRecord constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwinBLDLevelTileGenerationRecord>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FTwinBLDLevelTileGenerationRecord Property Definitions ************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SourceHash = { "SourceHash", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDLevelTileGenerationRecord, SourceHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceHash_MetaData), NewProp_SourceHash_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TileId = { "TileId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDLevelTileGenerationRecord, TileId), Z_Construct_UScriptStruct_FTwinBLDImportTileId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileId_MetaData), NewProp_TileId_MetaData) }; // a7fb3eb83fa12648e64f8b78b713392a3908503a
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WorldRectMeters = { "WorldRectMeters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDLevelTileGenerationRecord, WorldRectMeters), Z_Construct_UScriptStruct_FIntRect, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldRectMeters_MetaData), NewProp_WorldRectMeters_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bGeneratedBuildings = { "bGeneratedBuildings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDLevelTileGenerationRecord), &UHT_STATICS::NewProp_bGeneratedBuildings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGeneratedBuildings_MetaData), NewProp_bGeneratedBuildings_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bGeneratedRoads = { "bGeneratedRoads", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDLevelTileGenerationRecord), &UHT_STATICS::NewProp_bGeneratedRoads_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGeneratedRoads_MetaData), NewProp_bGeneratedRoads_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bGeneratedLandscape = { "bGeneratedLandscape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDLevelTileGenerationRecord), &UHT_STATICS::NewProp_bGeneratedLandscape_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGeneratedLandscape_MetaData), NewProp_bGeneratedLandscape_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bGeneratedParcels = { "bGeneratedParcels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDLevelTileGenerationRecord), &UHT_STATICS::NewProp_bGeneratedParcels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGeneratedParcels_MetaData), NewProp_bGeneratedParcels_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bGeneratedSatellite = { "bGeneratedSatellite", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDLevelTileGenerationRecord), &UHT_STATICS::NewProp_bGeneratedSatellite_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGeneratedSatellite_MetaData), NewProp_bGeneratedSatellite_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_BuildingsGeoTransformRevision = { "BuildingsGeoTransformRevision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDLevelTileGenerationRecord, BuildingsGeoTransformRevision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingsGeoTransformRevision_MetaData), NewProp_BuildingsGeoTransformRevision_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_RoadsGeoTransformRevision = { "RoadsGeoTransformRevision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDLevelTileGenerationRecord, RoadsGeoTransformRevision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadsGeoTransformRevision_MetaData), NewProp_RoadsGeoTransformRevision_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LandscapeGeoTransformRevision = { "LandscapeGeoTransformRevision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDLevelTileGenerationRecord, LandscapeGeoTransformRevision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeGeoTransformRevision_MetaData), NewProp_LandscapeGeoTransformRevision_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ParcelsGeoTransformRevision = { "ParcelsGeoTransformRevision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDLevelTileGenerationRecord, ParcelsGeoTransformRevision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParcelsGeoTransformRevision_MetaData), NewProp_ParcelsGeoTransformRevision_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SatelliteGeoTransformRevision = { "SatelliteGeoTransformRevision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDLevelTileGenerationRecord, SatelliteGeoTransformRevision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SatelliteGeoTransformRevision_MetaData), NewProp_SatelliteGeoTransformRevision_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldRectMeters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bGeneratedBuildings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bGeneratedRoads,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bGeneratedLandscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bGeneratedParcels,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bGeneratedSatellite,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingsGeoTransformRevision,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadsGeoTransformRevision,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapeGeoTransformRevision,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParcelsGeoTransformRevision,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SatelliteGeoTransformRevision,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FTwinBLDLevelTileGenerationRecord Property Definitions **************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"TwinBLDLevelTileGenerationRecord",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FTwinBLDLevelTileGenerationRecord>(),
	alignof(FTwinBLDLevelTileGenerationRecord),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTwinBLDLevelTileGenerationRecord;
UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDLevelTileGenerationRecord(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FTwinBLDLevelTileGenerationRecord.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FTwinBLDLevelTileGenerationRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwinBLDLevelTileGenerationRecord, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("TwinBLDLevelTileGenerationRecord"));
		}
		return Z_Registration_Info_UScriptStruct_FTwinBLDLevelTileGenerationRecord.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FTwinBLDLevelTileGenerationRecord.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTwinBLDLevelTileGenerationRecord.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FTwinBLDLevelTileGenerationRecord.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FTwinBLDLevelTileGenerationRecord ***********************************

// ********** Begin ScriptStruct FTwinBLDGeoOriginChangeImpact *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FTwinBLDGeoOriginChangeImpact_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FTwinBLDGeoOriginChangeImpact>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FTwinBLDGeoOriginChangeImpact); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Impact summary for a proposed GeoOrigin change. Modal/UI policy lives outside the session. */" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
		{ "ToolTip", "Impact summary for a proposed GeoOrigin change. Modal/UI policy lives outside the session." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedTileCount_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedGeneratedActorCount_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasLoadedShapefile_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerationInProgress_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSatelliteImportInProgress_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FTwinBLDGeoOriginChangeImpact constinit property declarations *****
	static const UECodeGen_Private::FIntPropertyParams NewProp_GeneratedTileCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LoadedGeneratedActorCount;
	static void NewProp_bHasLoadedShapefile_SetBit(void* Obj)
	{
		((FTwinBLDGeoOriginChangeImpact*)Obj)->bHasLoadedShapefile = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasLoadedShapefile;
	static void NewProp_bGenerationInProgress_SetBit(void* Obj)
	{
		((FTwinBLDGeoOriginChangeImpact*)Obj)->bGenerationInProgress = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerationInProgress;
	static void NewProp_bSatelliteImportInProgress_SetBit(void* Obj)
	{
		((FTwinBLDGeoOriginChangeImpact*)Obj)->bSatelliteImportInProgress = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSatelliteImportInProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FTwinBLDGeoOriginChangeImpact constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwinBLDGeoOriginChangeImpact>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FTwinBLDGeoOriginChangeImpact Property Definitions ****************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_GeneratedTileCount = { "GeneratedTileCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDGeoOriginChangeImpact, GeneratedTileCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedTileCount_MetaData), NewProp_GeneratedTileCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LoadedGeneratedActorCount = { "LoadedGeneratedActorCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDGeoOriginChangeImpact, LoadedGeneratedActorCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedGeneratedActorCount_MetaData), NewProp_LoadedGeneratedActorCount_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHasLoadedShapefile = { "bHasLoadedShapefile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDGeoOriginChangeImpact), &UHT_STATICS::NewProp_bHasLoadedShapefile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasLoadedShapefile_MetaData), NewProp_bHasLoadedShapefile_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bGenerationInProgress = { "bGenerationInProgress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDGeoOriginChangeImpact), &UHT_STATICS::NewProp_bGenerationInProgress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerationInProgress_MetaData), NewProp_bGenerationInProgress_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSatelliteImportInProgress = { "bSatelliteImportInProgress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDGeoOriginChangeImpact), &UHT_STATICS::NewProp_bSatelliteImportInProgress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSatelliteImportInProgress_MetaData), NewProp_bSatelliteImportInProgress_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeneratedTileCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LoadedGeneratedActorCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHasLoadedShapefile,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bGenerationInProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSatelliteImportInProgress,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FTwinBLDGeoOriginChangeImpact Property Definitions ******************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"TwinBLDGeoOriginChangeImpact",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FTwinBLDGeoOriginChangeImpact>(),
	alignof(FTwinBLDGeoOriginChangeImpact),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTwinBLDGeoOriginChangeImpact;
UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDGeoOriginChangeImpact(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FTwinBLDGeoOriginChangeImpact.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FTwinBLDGeoOriginChangeImpact.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwinBLDGeoOriginChangeImpact, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("TwinBLDGeoOriginChangeImpact"));
		}
		return Z_Registration_Info_UScriptStruct_FTwinBLDGeoOriginChangeImpact.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FTwinBLDGeoOriginChangeImpact.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTwinBLDGeoOriginChangeImpact.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FTwinBLDGeoOriginChangeImpact.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FTwinBLDGeoOriginChangeImpact ***************************************

// ********** Begin ScriptStruct FTwinBLDSatelliteImportOptions ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FTwinBLDSatelliteImportOptions_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FTwinBLDSatelliteImportOptions>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FTwinBLDSatelliteImportOptions); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Optional overrides for ImportSatelliteForSelectedTiles. Empty/invalid fields keep provider defaults. */" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
		{ "ToolTip", "Optional overrides for ImportSatelliteForSelectedTiles. Empty/invalid fields keep provider defaults." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateDecalActors_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSourceUrl_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "Comment", "/** Slippy-map URL with {z}/{x}/{y} placeholders. Empty keeps the provider default. */" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
		{ "ToolTip", "Slippy-map URL with {z}/{x}/{y} placeholders. Empty keeps the provider default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomLevel_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ClampMax", "24" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Zoom level override. INDEX_NONE keeps the provider default. */" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
		{ "ToolTip", "Zoom level override. INDEX_NONE keeps the provider default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileCacheSubdirectory_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "Comment", "/**\n\x09 * Optional cache subdirectory under Saved/SatelliteCache.\n\x09 * Use a distinct name when swapping tile sources so Replicity imagery and local orthos do not collide.\n\x09 */" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
		{ "ToolTip", "Optional cache subdirectory under Saved/SatelliteCache.\nUse a distinct name when swapping tile sources so Replicity imagery and local orthos do not collide." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalOrthoFolder_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "Comment", "/**\n\x09 * When non-empty, import from a local folder of georeferenced ortho tiles (.jp2 / .tif)\n\x09 * instead of an HTTP slippy-map tile service.\n\x09 */" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
		{ "ToolTip", "When non-empty, import from a local folder of georeferenced ortho tiles (.jp2 / .tif)\ninstead of an HTTP slippy-map tile service." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalOrthoSourceCrs_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "Comment", "/** Source CRS for LocalOrthoFolder tiles. NYC 2024 ortho default: EPSG:6539. */" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
		{ "ToolTip", "Source CRS for LocalOrthoFolder tiles. NYC 2024 ortho default: EPSG:6539." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalOrthoNativePixelSizeCm_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Native ortho pixel size in centimeters (15.24 = 0.5 US survey foot). */" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
		{ "ToolTip", "Native ortho pixel size in centimeters (15.24 = 0.5 US survey foot)." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FTwinBLDSatelliteImportOptions constinit property declarations ****
	static void NewProp_bCreateDecalActors_SetBit(void* Obj)
	{
		((FTwinBLDSatelliteImportOptions*)Obj)->bCreateDecalActors = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateDecalActors;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TileSourceUrl;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZoomLevel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TileCacheSubdirectory;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocalOrthoFolder;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LocalOrthoSourceCrs;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LocalOrthoNativePixelSizeCm;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FTwinBLDSatelliteImportOptions constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwinBLDSatelliteImportOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FTwinBLDSatelliteImportOptions Property Definitions ***************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCreateDecalActors = { "bCreateDecalActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDSatelliteImportOptions), &UHT_STATICS::NewProp_bCreateDecalActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateDecalActors_MetaData), NewProp_bCreateDecalActors_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_TileSourceUrl = { "TileSourceUrl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDSatelliteImportOptions, TileSourceUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSourceUrl_MetaData), NewProp_TileSourceUrl_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ZoomLevel = { "ZoomLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDSatelliteImportOptions, ZoomLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomLevel_MetaData), NewProp_ZoomLevel_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_TileCacheSubdirectory = { "TileCacheSubdirectory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDSatelliteImportOptions, TileCacheSubdirectory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileCacheSubdirectory_MetaData), NewProp_TileCacheSubdirectory_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_LocalOrthoFolder = { "LocalOrthoFolder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDSatelliteImportOptions, LocalOrthoFolder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalOrthoFolder_MetaData), NewProp_LocalOrthoFolder_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_LocalOrthoSourceCrs = { "LocalOrthoSourceCrs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDSatelliteImportOptions, LocalOrthoSourceCrs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalOrthoSourceCrs_MetaData), NewProp_LocalOrthoSourceCrs_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_LocalOrthoNativePixelSizeCm = { "LocalOrthoNativePixelSizeCm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDSatelliteImportOptions, LocalOrthoNativePixelSizeCm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalOrthoNativePixelSizeCm_MetaData), NewProp_LocalOrthoNativePixelSizeCm_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCreateDecalActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TileSourceUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZoomLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TileCacheSubdirectory,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LocalOrthoFolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LocalOrthoSourceCrs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LocalOrthoNativePixelSizeCm,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FTwinBLDSatelliteImportOptions Property Definitions *****************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"TwinBLDSatelliteImportOptions",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FTwinBLDSatelliteImportOptions>(),
	alignof(FTwinBLDSatelliteImportOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTwinBLDSatelliteImportOptions;
UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDSatelliteImportOptions(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FTwinBLDSatelliteImportOptions.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FTwinBLDSatelliteImportOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwinBLDSatelliteImportOptions, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("TwinBLDSatelliteImportOptions"));
		}
		return Z_Registration_Info_UScriptStruct_FTwinBLDSatelliteImportOptions.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FTwinBLDSatelliteImportOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTwinBLDSatelliteImportOptions.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FTwinBLDSatelliteImportOptions.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FTwinBLDSatelliteImportOptions **************************************

// ********** Begin ScriptStruct FBuildingSettings *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FBuildingSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FBuildingSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FBuildingSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Please add a class description */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
		{ "ToolTip", "Please add a class description" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSimpleBuildings_MetaData[] = {
		{ "Category", "Building Settings" },
		{ "Comment", "/** Buildings are generated as blockout meshes (much faster) */" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
		{ "ToolTip", "Buildings are generated as blockout meshes (much faster)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackBuildingHeight_MetaData[] = {
		{ "Category", "Building Settings" },
		{ "Comment", "/** Please add a variable description */" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
		{ "ToolTip", "Please add a variable description" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfFallbackFloors_MetaData[] = {
		{ "Category", "Building Settings" },
		{ "Comment", "/** Please add a variable description */" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
		{ "ToolTip", "Please add a variable description" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Customizer_MetaData[] = {
		{ "Category", "Building Settings" },
		{ "Comment", "/** Please add a variable description */" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
		{ "ToolTip", "Please add a variable description" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyExistingStructures_MetaData[] = {
		{ "Category", "Building Settings" },
		{ "Comment", "/** If true, destroys existing generated buildings before re-running generation */" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
		{ "ToolTip", "If true, destroys existing generated buildings before re-running generation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapBuildingsToLandscape_MetaData[] = {
		{ "Category", "Building Settings" },
		{ "Comment", "/** Please add a variable description */" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
		{ "ToolTip", "Please add a variable description" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateMeshAssets_MetaData[] = {
		{ "Category", "Building Settings" },
		{ "Comment", "/** Whether or not to create and safe rooftop mesh assets while generating. \n\x09\x09""Disabling this will require you to re-generate buildings later before rooftops appear, but is significantly faster. */" },
		{ "ModuleRelativePath", "Public/TwinBLDTypes.h" },
		{ "ToolTip", "Whether or not to create and safe rooftop mesh assets while generating.\n              Disabling this will require you to re-generate buildings later before rooftops appear, but is significantly faster." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FBuildingSettings constinit property declarations *****************
	static void NewProp_bSimpleBuildings_SetBit(void* Obj)
	{
		((FBuildingSettings*)Obj)->bSimpleBuildings = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimpleBuildings;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FallbackBuildingHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfFallbackFloors;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Customizer;
	static void NewProp_bDestroyExistingStructures_SetBit(void* Obj)
	{
		((FBuildingSettings*)Obj)->bDestroyExistingStructures = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyExistingStructures;
	static void NewProp_bSnapBuildingsToLandscape_SetBit(void* Obj)
	{
		((FBuildingSettings*)Obj)->bSnapBuildingsToLandscape = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapBuildingsToLandscape;
	static void NewProp_bCreateMeshAssets_SetBit(void* Obj)
	{
		((FBuildingSettings*)Obj)->bCreateMeshAssets = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateMeshAssets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FBuildingSettings constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildingSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FBuildingSettings Property Definitions ****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSimpleBuildings = { "bSimpleBuildings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FBuildingSettings), &UHT_STATICS::NewProp_bSimpleBuildings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSimpleBuildings_MetaData), NewProp_bSimpleBuildings_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_FallbackBuildingHeight = { "FallbackBuildingHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingSettings, FallbackBuildingHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackBuildingHeight_MetaData), NewProp_FallbackBuildingHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxNumberOfFallbackFloors = { "MaxNumberOfFallbackFloors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingSettings, MaxNumberOfFallbackFloors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumberOfFallbackFloors_MetaData), NewProp_MaxNumberOfFallbackFloors_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_Customizer = { "Customizer", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingSettings, Customizer), Z_Construct_UClass_UClass, Z_Construct_UClass_UStreetMapImportCustomizer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Customizer_MetaData), NewProp_Customizer_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDestroyExistingStructures = { "bDestroyExistingStructures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FBuildingSettings), &UHT_STATICS::NewProp_bDestroyExistingStructures_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDestroyExistingStructures_MetaData), NewProp_bDestroyExistingStructures_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSnapBuildingsToLandscape = { "bSnapBuildingsToLandscape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FBuildingSettings), &UHT_STATICS::NewProp_bSnapBuildingsToLandscape_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapBuildingsToLandscape_MetaData), NewProp_bSnapBuildingsToLandscape_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCreateMeshAssets = { "bCreateMeshAssets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FBuildingSettings), &UHT_STATICS::NewProp_bCreateMeshAssets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateMeshAssets_MetaData), NewProp_bCreateMeshAssets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSimpleBuildings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FallbackBuildingHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxNumberOfFallbackFloors,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Customizer,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDestroyExistingStructures,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSnapBuildingsToLandscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCreateMeshAssets,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FBuildingSettings Property Definitions ******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"BuildingSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FBuildingSettings>(),
	alignof(FBuildingSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBuildingSettings;
UScriptStruct* Z_Construct_UScriptStruct_FBuildingSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FBuildingSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FBuildingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildingSettings, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("BuildingSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FBuildingSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FBuildingSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBuildingSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FBuildingSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FBuildingSettings ***************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDTypes_h__Script_TwinBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FTwinBLDImportTileId, Z_Construct_UScriptStruct_FTwinBLDImportTileId_Statics::NewStructOps, TEXT("TwinBLDImportTileId"),&Z_Registration_Info_UScriptStruct_FTwinBLDImportTileId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwinBLDImportTileId), 2818260664U) },
		{ Z_Construct_UScriptStruct_FTwinBLDImportTileBounds, Z_Construct_UScriptStruct_FTwinBLDImportTileBounds_Statics::NewStructOps, TEXT("TwinBLDImportTileBounds"),&Z_Registration_Info_UScriptStruct_FTwinBLDImportTileBounds, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwinBLDImportTileBounds), 2042724156U) },
		{ Z_Construct_UScriptStruct_FTwinBLDImportOptions, Z_Construct_UScriptStruct_FTwinBLDImportOptions_Statics::NewStructOps, TEXT("TwinBLDImportOptions"),&Z_Registration_Info_UScriptStruct_FTwinBLDImportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwinBLDImportOptions), 3552645242U) },
		{ Z_Construct_UScriptStruct_FTwinBLDImportTileRecord, Z_Construct_UScriptStruct_FTwinBLDImportTileRecord_Statics::NewStructOps, TEXT("TwinBLDImportTileRecord"),&Z_Registration_Info_UScriptStruct_FTwinBLDImportTileRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwinBLDImportTileRecord), 439091438U) },
		{ Z_Construct_UScriptStruct_FTwinBLDLevelTileGenerationRecord, Z_Construct_UScriptStruct_FTwinBLDLevelTileGenerationRecord_Statics::NewStructOps, TEXT("TwinBLDLevelTileGenerationRecord"),&Z_Registration_Info_UScriptStruct_FTwinBLDLevelTileGenerationRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwinBLDLevelTileGenerationRecord), 3264701654U) },
		{ Z_Construct_UScriptStruct_FTwinBLDGeoOriginChangeImpact, Z_Construct_UScriptStruct_FTwinBLDGeoOriginChangeImpact_Statics::NewStructOps, TEXT("TwinBLDGeoOriginChangeImpact"),&Z_Registration_Info_UScriptStruct_FTwinBLDGeoOriginChangeImpact, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwinBLDGeoOriginChangeImpact), 3198482462U) },
		{ Z_Construct_UScriptStruct_FTwinBLDSatelliteImportOptions, Z_Construct_UScriptStruct_FTwinBLDSatelliteImportOptions_Statics::NewStructOps, TEXT("TwinBLDSatelliteImportOptions"),&Z_Registration_Info_UScriptStruct_FTwinBLDSatelliteImportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwinBLDSatelliteImportOptions), 160528688U) },
		{ Z_Construct_UScriptStruct_FBuildingSettings, Z_Construct_UScriptStruct_FBuildingSettings_Statics::NewStructOps, TEXT("BuildingSettings"),&Z_Registration_Info_UScriptStruct_FBuildingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuildingSettings), 1451052778U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDTypes_h__Script_TwinBLDEditor_8d9025add59e72ca653c138d2c9f627d916a30ec{
	TEXT("/Script/TwinBLDEditor"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
