// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwinBLDSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeTwinBLDSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase);
TWINBLDEDITOR_API UEnum* Z_Construct_UEnum_TwinBLDEditor_EHeightmapSource(ETypeConstructPhase);
TWINBLDEDITOR_API UEnum* Z_Construct_UEnum_TwinBLDEditor_EOSMSource(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDMapImportWindowSettings(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDSettings(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDMapImportWindowSettings(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EHeightmapSource **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_TwinBLDEditor_EHeightmapSource_Statics
template<> TWINBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EHeightmapSource>()
{
	return Z_Construct_UEnum_TwinBLDEditor_EHeightmapSource(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AutoBestAvailable.DisplayName", "Auto (USGS, Europe DTM, Copernicus)" },
		{ "AutoBestAvailable.Name", "EHeightmapSource::AutoBestAvailable" },
		{ "BlueprintType", "true" },
		{ "Copernicus.Name", "EHeightmapSource::Copernicus" },
		{ "ModuleRelativePath", "Public/TwinBLDSettings.h" },
		{ "OpenTopographyEuropeDTM.DisplayName", "OpenTopography Europe DTM" },
		{ "OpenTopographyEuropeDTM.Name", "EHeightmapSource::OpenTopographyEuropeDTM" },
		{ "USGS.Name", "EHeightmapSource::USGS" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHeightmapSource::Copernicus", (int64)EHeightmapSource::Copernicus },
		{ "EHeightmapSource::USGS", (int64)EHeightmapSource::USGS },
		{ "EHeightmapSource::OpenTopographyEuropeDTM", (int64)EHeightmapSource::OpenTopographyEuropeDTM },
		{ "EHeightmapSource::AutoBestAvailable", (int64)EHeightmapSource::AutoBestAvailable },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	"EHeightmapSource",
	"EHeightmapSource",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EHeightmapSource;
UEnum* Z_Construct_UEnum_TwinBLDEditor_EHeightmapSource(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EHeightmapSource.OuterSingleton)
		{
			ZRIE_EHeightmapSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TwinBLDEditor_EHeightmapSource, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("EHeightmapSource"));
		}
		return ZRIE_EHeightmapSource.OuterSingleton;
	}
	if (!ZRIE_EHeightmapSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EHeightmapSource.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EHeightmapSource.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EHeightmapSource ************************************************************

// ********** Begin Enum EOSMSource ****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_TwinBLDEditor_EOSMSource_Statics
template<> TWINBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EOSMSource>()
{
	return Z_Construct_UEnum_TwinBLDEditor_EOSMSource(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Geofabrik.Name", "EOSMSource::Geofabrik" },
		{ "ModuleRelativePath", "Public/TwinBLDSettings.h" },
		{ "Overpass.Name", "EOSMSource::Overpass" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOSMSource::Overpass", (int64)EOSMSource::Overpass },
		{ "EOSMSource::Geofabrik", (int64)EOSMSource::Geofabrik },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	"EOSMSource",
	"EOSMSource",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOSMSource;
UEnum* Z_Construct_UEnum_TwinBLDEditor_EOSMSource(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOSMSource.OuterSingleton)
		{
			ZRIE_EOSMSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TwinBLDEditor_EOSMSource, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("EOSMSource"));
		}
		return ZRIE_EOSMSource.OuterSingleton;
	}
	if (!ZRIE_EOSMSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOSMSource.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOSMSource.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOSMSource ******************************************************************

// ********** Begin Class UTwinBLDSettings *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UTwinBLDSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "DisplaynName", "TwinBLD" },
		{ "IncludePath", "TwinBLDSettings.h" },
		{ "ModuleRelativePath", "Public/TwinBLDSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisOrder_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "Comment", "/** OpenStreetMap Import Axis Order */" },
		{ "ModuleRelativePath", "Public/TwinBLDSettings.h" },
		{ "ToolTip", "OpenStreetMap Import Axis Order" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoordSys_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/TwinBLDSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeoOrigin_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/TwinBLDSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapSource_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/TwinBLDSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_USGSElevationEndpoint_MetaData[] = {
		{ "Category", "TwinBLD|Heightmaps" },
		{ "Comment", "/** USGS 3DEP ImageServer export endpoint used for bare-earth DEM downloads. */" },
		{ "ModuleRelativePath", "Public/TwinBLDSettings.h" },
		{ "ToolTip", "USGS 3DEP ImageServer export endpoint used for bare-earth DEM downloads." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_USGSTargetResolutionMeters_MetaData[] = {
		{ "Category", "TwinBLD|Heightmaps" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Desired USGS export pixel spacing in meters before TwinBLD resamples to the Landscape grid. */" },
		{ "ModuleRelativePath", "Public/TwinBLDSettings.h" },
		{ "ToolTip", "Desired USGS export pixel spacing in meters before TwinBLD resamples to the Landscape grid." },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_USGSMaxImageDimension_MetaData[] = {
		{ "Category", "TwinBLD|Heightmaps" },
		{ "ClampMax", "8000" },
		{ "ClampMin", "2" },
		{ "Comment", "/** Max width/height requested from USGS. The public service currently caps exportImage at 8000. */" },
		{ "ModuleRelativePath", "Public/TwinBLDSettings.h" },
		{ "ToolTip", "Max width/height requested from USGS. The public service currently caps exportImage at 8000." },
		{ "UIMax", "8000" },
		{ "UIMin", "2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFallbackToCopernicusWhenUSGSUnavailable_MetaData[] = {
		{ "Category", "TwinBLD|Heightmaps" },
		{ "Comment", "/** When USGS is selected but unavailable for a tile, retry with global Copernicus data. */" },
		{ "ModuleRelativePath", "Public/TwinBLDSettings.h" },
		{ "ToolTip", "When USGS is selected but unavailable for a tile, retry with global Copernicus data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenTopographyEndpoint_MetaData[] = {
		{ "Category", "TwinBLD|Heightmaps" },
		{ "Comment", "/** OpenTopography globaldem endpoint used for Continental Europe DTM downloads. */" },
		{ "ModuleRelativePath", "Public/TwinBLDSettings.h" },
		{ "ToolTip", "OpenTopography globaldem endpoint used for Continental Europe DTM downloads." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenTopographyApiKey_MetaData[] = {
		{ "Category", "TwinBLD|Heightmaps" },
		{ "Comment", "/** API key for OpenTopography EU_DTM downloads. Request one from the OpenTopography portal. */" },
		{ "ModuleRelativePath", "Public/TwinBLDSettings.h" },
		{ "ToolTip", "API key for OpenTopography EU_DTM downloads. Request one from the OpenTopography portal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFallbackToCopernicusWhenPreferredUnavailable_MetaData[] = {
		{ "Category", "TwinBLD|Heightmaps" },
		{ "Comment", "/** When a preferred regional heightmap provider is unavailable, retry with global Copernicus data. */" },
		{ "ModuleRelativePath", "Public/TwinBLDSettings.h" },
		{ "ToolTip", "When a preferred regional heightmap provider is unavailable, retry with global Copernicus data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OsmSource_MetaData[] = {
		{ "Category", "TwinBLD|OpenStreetMap" },
		{ "Comment", "/** Source backend used to download OpenStreetMap data */" },
		{ "ModuleRelativePath", "Public/TwinBLDSettings.h" },
		{ "ToolTip", "Source backend used to download OpenStreetMap data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackBuildingHeight_MetaData[] = {
		{ "Category", "TwinBLD|Building Generation" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Fallback building height in centimeters when no height or building:levels tags are available in OSM data */" },
		{ "ModuleRelativePath", "Public/TwinBLDSettings.h" },
		{ "ToolTip", "Fallback building height in centimeters when no height or building:levels tags are available in OSM data" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFallbackBuildingHeight_MetaData[] = {
		{ "Category", "TwinBLD|Building Generation" },
		{ "Comment", "/** Whether to use the fallback height for buildings that have no height or level information */" },
		{ "ModuleRelativePath", "Public/TwinBLDSettings.h" },
		{ "ToolTip", "Whether to use the fallback height for buildings that have no height or level information" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FacadeDetectionMaxRoadEdgeDistance_MetaData[] = {
		{ "Category", "TwinBLD|Facade Detection" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Maximum XY distance (cm) from sampled building points to nearest road edge to accept facade hints. */" },
		{ "ModuleRelativePath", "Public/TwinBLDSettings.h" },
		{ "ToolTip", "Maximum XY distance (cm) from sampled building points to nearest road edge to accept facade hints." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FacadeDetectionMinUniqueAngleDeg_MetaData[] = {
		{ "Category", "TwinBLD|Facade Detection" },
		{ "ClampMax", "179.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Minimum angular separation (degrees) to keep multiple facade directions (for corner buildings). */" },
		{ "ModuleRelativePath", "Public/TwinBLDSettings.h" },
		{ "ToolTip", "Minimum angular separation (degrees) to keep multiple facade directions (for corner buildings)." },
		{ "UIMax", "179.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FacadeDetectionMaxHintsPerBuilding_MetaData[] = {
		{ "Category", "TwinBLD|Facade Detection" },
		{ "ClampMax", "8" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Upper bound on how many unique facade direction hints are written per building. */" },
		{ "ModuleRelativePath", "Public/TwinBLDSettings.h" },
		{ "ToolTip", "Upper bound on how many unique facade direction hints are written per building." },
		{ "UIMax", "8" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicityApiKey_MetaData[] = {
		{ "Category", "TwinBLD|Replicity" },
		{ "Comment", "/**\n\x09 * Replicity Maps API key (rpl_live_\xe2\x80\xa6). Create one at https://replicity.ai/account.\n\x09 * Used as Authorization: Bearer for satellite imagery. Never ship a non-empty value.\n\x09 */" },
		{ "ModuleRelativePath", "Public/TwinBLDSettings.h" },
		{ "ToolTip", "Replicity Maps API key (rpl_live_\xe2\x80\xa6). Create one at https://replicity.ai/account.\nUsed as Authorization: Bearer for satellite imagery. Never ship a non-empty value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicityMapsBaseUrl_MetaData[] = {
		{ "Category", "TwinBLD|Replicity" },
		{ "Comment", "/** Base URL for Replicity Maps imagery tiles and config. Override for local/staging geo-service testing. */" },
		{ "ModuleRelativePath", "Public/TwinBLDSettings.h" },
		{ "ToolTip", "Base URL for Replicity Maps imagery tiles and config. Override for local/staging geo-service testing." },
	};
#endif // WITH_METADATA

// ********** Begin Class UTwinBLDSettings constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisOrder;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CoordSys;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeoOrigin;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HeightmapSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HeightmapSource;
	static const UECodeGen_Private::FStrPropertyParams NewProp_USGSElevationEndpoint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_USGSTargetResolutionMeters;
	static const UECodeGen_Private::FIntPropertyParams NewProp_USGSMaxImageDimension;
	static void NewProp_bFallbackToCopernicusWhenUSGSUnavailable_SetBit(void* Obj)
	{
		((UTwinBLDSettings*)Obj)->bFallbackToCopernicusWhenUSGSUnavailable = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFallbackToCopernicusWhenUSGSUnavailable;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OpenTopographyEndpoint;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OpenTopographyApiKey;
	static void NewProp_bFallbackToCopernicusWhenPreferredUnavailable_SetBit(void* Obj)
	{
		((UTwinBLDSettings*)Obj)->bFallbackToCopernicusWhenPreferredUnavailable = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFallbackToCopernicusWhenPreferredUnavailable;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OsmSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OsmSource;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FallbackBuildingHeight;
	static void NewProp_bUseFallbackBuildingHeight_SetBit(void* Obj)
	{
		((UTwinBLDSettings*)Obj)->bUseFallbackBuildingHeight = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFallbackBuildingHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FacadeDetectionMaxRoadEdgeDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FacadeDetectionMinUniqueAngleDeg;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FacadeDetectionMaxHintsPerBuilding;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReplicityApiKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReplicityMapsBaseUrl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UTwinBLDSettings constinit property declarations ***************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinBLDSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UTwinBLDSettings Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AxisOrder = { "AxisOrder", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDSettings, AxisOrder), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisOrder_MetaData), NewProp_AxisOrder_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_CoordSys = { "CoordSys", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDSettings, CoordSys), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoordSys_MetaData), NewProp_CoordSys_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GeoOrigin = { "GeoOrigin", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDSettings, GeoOrigin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeoOrigin_MetaData), NewProp_GeoOrigin_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_HeightmapSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_HeightmapSource = { "HeightmapSource", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDSettings, HeightmapSource), Z_Construct_UEnum_TwinBLDEditor_EHeightmapSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightmapSource_MetaData), NewProp_HeightmapSource_MetaData) }; // c3c699db9d57530c8344e63f73afb546239e6f3a
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_USGSElevationEndpoint = { "USGSElevationEndpoint", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDSettings, USGSElevationEndpoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_USGSElevationEndpoint_MetaData), NewProp_USGSElevationEndpoint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_USGSTargetResolutionMeters = { "USGSTargetResolutionMeters", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDSettings, USGSTargetResolutionMeters), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_USGSTargetResolutionMeters_MetaData), NewProp_USGSTargetResolutionMeters_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_USGSMaxImageDimension = { "USGSMaxImageDimension", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDSettings, USGSMaxImageDimension), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_USGSMaxImageDimension_MetaData), NewProp_USGSMaxImageDimension_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFallbackToCopernicusWhenUSGSUnavailable = { "bFallbackToCopernicusWhenUSGSUnavailable", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UTwinBLDSettings), &UHT_STATICS::NewProp_bFallbackToCopernicusWhenUSGSUnavailable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFallbackToCopernicusWhenUSGSUnavailable_MetaData), NewProp_bFallbackToCopernicusWhenUSGSUnavailable_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OpenTopographyEndpoint = { "OpenTopographyEndpoint", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDSettings, OpenTopographyEndpoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenTopographyEndpoint_MetaData), NewProp_OpenTopographyEndpoint_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_OpenTopographyApiKey = { "OpenTopographyApiKey", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDSettings, OpenTopographyApiKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenTopographyApiKey_MetaData), NewProp_OpenTopographyApiKey_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFallbackToCopernicusWhenPreferredUnavailable = { "bFallbackToCopernicusWhenPreferredUnavailable", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UTwinBLDSettings), &UHT_STATICS::NewProp_bFallbackToCopernicusWhenPreferredUnavailable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFallbackToCopernicusWhenPreferredUnavailable_MetaData), NewProp_bFallbackToCopernicusWhenPreferredUnavailable_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_OsmSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_OsmSource = { "OsmSource", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDSettings, OsmSource), Z_Construct_UEnum_TwinBLDEditor_EOSMSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OsmSource_MetaData), NewProp_OsmSource_MetaData) }; // 964e477f8762ea07775ee683e70112503c0cac02
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FallbackBuildingHeight = { "FallbackBuildingHeight", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDSettings, FallbackBuildingHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackBuildingHeight_MetaData), NewProp_FallbackBuildingHeight_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseFallbackBuildingHeight = { "bUseFallbackBuildingHeight", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UTwinBLDSettings), &UHT_STATICS::NewProp_bUseFallbackBuildingHeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFallbackBuildingHeight_MetaData), NewProp_bUseFallbackBuildingHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FacadeDetectionMaxRoadEdgeDistance = { "FacadeDetectionMaxRoadEdgeDistance", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDSettings, FacadeDetectionMaxRoadEdgeDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FacadeDetectionMaxRoadEdgeDistance_MetaData), NewProp_FacadeDetectionMaxRoadEdgeDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FacadeDetectionMinUniqueAngleDeg = { "FacadeDetectionMinUniqueAngleDeg", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDSettings, FacadeDetectionMinUniqueAngleDeg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FacadeDetectionMinUniqueAngleDeg_MetaData), NewProp_FacadeDetectionMinUniqueAngleDeg_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_FacadeDetectionMaxHintsPerBuilding = { "FacadeDetectionMaxHintsPerBuilding", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDSettings, FacadeDetectionMaxHintsPerBuilding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FacadeDetectionMaxHintsPerBuilding_MetaData), NewProp_FacadeDetectionMaxHintsPerBuilding_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReplicityApiKey = { "ReplicityApiKey", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDSettings, ReplicityApiKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicityApiKey_MetaData), NewProp_ReplicityApiKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReplicityMapsBaseUrl = { "ReplicityMapsBaseUrl", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDSettings, ReplicityMapsBaseUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicityMapsBaseUrl_MetaData), NewProp_ReplicityMapsBaseUrl_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AxisOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CoordSys,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeoOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HeightmapSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HeightmapSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_USGSElevationEndpoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_USGSTargetResolutionMeters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_USGSMaxImageDimension,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFallbackToCopernicusWhenUSGSUnavailable,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OpenTopographyEndpoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OpenTopographyApiKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFallbackToCopernicusWhenPreferredUnavailable,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OsmSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OsmSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FallbackBuildingHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseFallbackBuildingHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FacadeDetectionMaxRoadEdgeDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FacadeDetectionMinUniqueAngleDeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FacadeDetectionMaxHintsPerBuilding,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReplicityApiKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReplicityMapsBaseUrl,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UTwinBLDSettings Property Definitions **************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDeveloperSettings,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UTwinBLDSettings,
	"TwinBLD",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x000000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UTwinBLDSettings;
UClass* Z_Construct_UClass_UTwinBLDSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UTwinBLDSettings;
		if (!Z_Registration_Info_UClass_UTwinBLDSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("TwinBLDSettings"),
				Z_Registration_Info_UClass_UTwinBLDSettings.InnerSingleton,
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
		return Z_Registration_Info_UClass_UTwinBLDSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UTwinBLDSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTwinBLDSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UTwinBLDSettings.OuterSingleton;
}
#undef UHT_STATICS
UTwinBLDSettings::UTwinBLDSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTwinBLDSettings);
UTwinBLDSettings::~UTwinBLDSettings() {}
// ********** End Class UTwinBLDSettings ***********************************************************

// ********** Begin Class UTwinBLDMapImportWindowSettings ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UTwinBLDMapImportWindowSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/** Persists TwinBLD map importer tile layout between window instances (not source file paths). */" },
		{ "IncludePath", "TwinBLDSettings.h" },
		{ "ModuleRelativePath", "Public/TwinBLDSettings.h" },
		{ "ToolTip", "Persists TwinBLD map importer tile layout between window instances (not source file paths)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSizeMeters_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileOffsetMetersX_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileOffsetMetersY_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastReplicityCityId_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLDSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTwinBLDMapImportWindowSettings constinit property declarations **********
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileSizeMeters;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileOffsetMetersX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileOffsetMetersY;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LastReplicityCityId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UTwinBLDMapImportWindowSettings constinit property declarations ************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinBLDMapImportWindowSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UTwinBLDMapImportWindowSettings Property Definitions *********************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_TileSizeMeters = { "TileSizeMeters", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDMapImportWindowSettings, TileSizeMeters), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSizeMeters_MetaData), NewProp_TileSizeMeters_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_TileOffsetMetersX = { "TileOffsetMetersX", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDMapImportWindowSettings, TileOffsetMetersX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileOffsetMetersX_MetaData), NewProp_TileOffsetMetersX_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_TileOffsetMetersY = { "TileOffsetMetersY", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDMapImportWindowSettings, TileOffsetMetersY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileOffsetMetersY_MetaData), NewProp_TileOffsetMetersY_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_LastReplicityCityId = { "LastReplicityCityId", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDMapImportWindowSettings, LastReplicityCityId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastReplicityCityId_MetaData), NewProp_LastReplicityCityId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TileSizeMeters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TileOffsetMetersX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TileOffsetMetersY,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LastReplicityCityId,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UTwinBLDMapImportWindowSettings Property Definitions ***********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UTwinBLDMapImportWindowSettings,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UTwinBLDMapImportWindowSettings;
UClass* Z_Construct_UClass_UTwinBLDMapImportWindowSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UTwinBLDMapImportWindowSettings;
		if (!Z_Registration_Info_UClass_UTwinBLDMapImportWindowSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("TwinBLDMapImportWindowSettings"),
				Z_Registration_Info_UClass_UTwinBLDMapImportWindowSettings.InnerSingleton,
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
		return Z_Registration_Info_UClass_UTwinBLDMapImportWindowSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UTwinBLDMapImportWindowSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTwinBLDMapImportWindowSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UTwinBLDMapImportWindowSettings.OuterSingleton;
}
#undef UHT_STATICS
UTwinBLDMapImportWindowSettings::UTwinBLDMapImportWindowSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTwinBLDMapImportWindowSettings);
UTwinBLDMapImportWindowSettings::~UTwinBLDMapImportWindowSettings() {}
// ********** End Class UTwinBLDMapImportWindowSettings ********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDSettings_h__Script_TwinBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_TwinBLDEditor_EHeightmapSource, TEXT("EHeightmapSource"), &ZRIE_EHeightmapSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3284572635U) },
		{ Z_Construct_UEnum_TwinBLDEditor_EOSMSource, TEXT("EOSMSource"), &ZRIE_EOSMSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2521712511U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTwinBLDSettings, TEXT("UTwinBLDSettings"), &Z_Registration_Info_UClass_UTwinBLDSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTwinBLDSettings), 1916868199U) },
		{ Z_Construct_UClass_UTwinBLDMapImportWindowSettings, TEXT("UTwinBLDMapImportWindowSettings"), &Z_Registration_Info_UClass_UTwinBLDMapImportWindowSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTwinBLDMapImportWindowSettings), 4124942583U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDSettings_h__Script_TwinBLDEditor_7708e693f6a8033b15a863db27d472175c37eb1e{
	TEXT("/Script/TwinBLDEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
