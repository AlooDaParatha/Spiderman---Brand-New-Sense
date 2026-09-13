// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoadBLDRuntimeSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRoadBLDRuntimeSettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionEnabled(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadBLDRuntimeSettings(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadBLDRuntimeSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class URoadBLDRuntimeSettings Function Get *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadBLDRuntimeSettings_Get_Statics
struct UHT_STATICS
{
	struct RoadBLDRuntimeSettings_eventGet_Parms
	{
		URoadBLDRuntimeSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "DisplayName", "RoadBLD Settings" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Get constinit property declarations ***********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Get constinit property declarations *************************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Get Property Definitions **********************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBLDRuntimeSettings_eventGet_Parms, ReturnValue), Z_Construct_UClass_URoadBLDRuntimeSettings, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function Get Property Definitions ************************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadBLDRuntimeSettings, nullptr, "Get", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadBLDRuntimeSettings_eventGet_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadBLDRuntimeSettings_eventGet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadBLDRuntimeSettings_Get(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadBLDRuntimeSettings::execGet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URoadBLDRuntimeSettings**)Z_Param__Result=URoadBLDRuntimeSettings::Get();
	P_NATIVE_END;
}
// ********** End Class URoadBLDRuntimeSettings Function Get ***************************************

// ********** Begin Class URoadBLDRuntimeSettings **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoadBLDRuntimeSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "RoadBLDRuntimeSettings.h" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadModuleTextureScale_MetaData[] = {
		{ "Category", "Road Module UV Settings" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "10.0" },
		{ "Comment", "/** Texture scale for road module UV generation (units per texture repeat) */" },
		{ "DisplayName", "Road Module Texture Scale" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Texture scale for road module UV generation (units per texture repeat)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseConsistentUVGeneration_MetaData[] = {
		{ "Category", "Road Module UV Settings" },
		{ "Comment", "/** Enable consistent UV generation for road modules */" },
		{ "DisplayName", "Use Consistent UV Generation" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Enable consistent UV generation for road modules" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLeftHandDriving_MetaData[] = {
		{ "Category", "Road Behavior Settings" },
		{ "Comment", "/** Enable left-hand driving mode (lanes on the left side drive forward, right side drives backward) */" },
		{ "DisplayName", "Left-Hand Driving Mode" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Enable left-hand driving mode (lanes on the left side drive forward, right side drives backward)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLinkedRoadPoints_MetaData[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/**\n     * Enable editor-side linked endpoint propagation tools in road editing workflows.\n     * Persisted EndpointLinks are still authored and consumed by rebuild/runtime even when this is disabled.\n     */" },
		{ "DisplayName", "Enable Linked Road Points" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Enable editor-side linked endpoint propagation tools in road editing workflows.\nPersisted EndpointLinks are still authored and consumed by rebuild/runtime even when this is disabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAbutmentGeneration_MetaData[] = {
		{ "Category", "Road Behavior Settings" },
		{ "Comment", "/** Master toggle for bridge abutment generation. When disabled, roads skip abutment mesh generation even if enabled per-road/preset. */" },
		{ "DisplayName", "Enable Abutment Generation" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Master toggle for bridge abutment generation. When disabled, roads skip abutment mesh generation even if enabled per-road/preset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRoadCrownGeneration_MetaData[] = {
		{ "Category", "Road Behavior Settings" },
		{ "Comment", "/** Master toggle for road crown generation. When disabled, roads generate a flat cross-section regardless of per-road crown height. */" },
		{ "DisplayName", "Enable Road Crown Generation" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Master toggle for road crown generation. When disabled, roads generate a flat cross-section regardless of per-road crown height." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAsyncRebuild_MetaData[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** When enabled, the compute-only stages of road network rebuild run on a background thread. */" },
		{ "DisplayName", "Enable Async Rebuild(recommended)" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "When enabled, the compute-only stages of road network rebuild run on a background thread." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommitFrameBudgetMs_MetaData[] = {
		{ "Category", "Experimental" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Frame budget (ms) for the progressive rebuild phases. Each tick processes sub-phases until\n     *  the budget is exceeded, then defers remaining work to the next tick.\n     *  0 = synchronous (all sub-phases in one frame, legacy behaviour).\n     *  Ignored when Adaptive Commit Frame Budget is enabled. */" },
		{ "DisplayName", "Commit Frame Budget (ms)" },
		{ "EditCondition", "!bAdaptiveCommitFrameBudget" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Frame budget (ms) for the progressive rebuild phases. Each tick processes sub-phases until\nthe budget is exceeded, then defers remaining work to the next tick.\n0 = synchronous (all sub-phases in one frame, legacy behaviour).\nIgnored when Adaptive Commit Frame Budget is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAdaptiveCommitFrameBudget_MetaData[] = {
		{ "Category", "Experimental" },
		{ "Comment", "/** When enabled, automatically selects a Commit Frame Budget based on the number of roads in\n     *  the network. There is always a minimum budget (never 0); small/medium networks use a higher\n     *  budget(typically 16ms), larger networks use a tighter budget to keep the editor responsive between commit\n     *  sub-phases. */" },
		{ "DisplayName", "Adaptive Commit Frame Budget(recommended)" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "When enabled, automatically selects a Commit Frame Budget based on the number of roads in\nthe network. There is always a minimum budget (never 0); small/medium networks use a higher\nbudget(typically 16ms), larger networks use a tighter budget to keep the editor responsive between commit\nsub-phases." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuppressStaleRoadNetworkWarning_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "/** Suppress the viewport warning text when stale road networks exist. */" },
		{ "DisplayName", "Suppress Stale Road Network Warning" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Suppress the viewport warning text when stale road networks exist." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRebuildRoadsAfterEveryEdit_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/**\n     * When enabled, road editing tools rebuild the owning road network after each edit and when exiting the tool.\n     * Disable to defer rebuilds and run them manually (e.g. via Rebuild Road Networks).\n     */" },
		{ "DisplayName", "Rebuild Roads After Every Edit" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "When enabled, road editing tools rebuild the owning road network after each edit and when exiting the tool.\nDisable to defer rebuilds and run them manually (e.g. via Rebuild Road Networks)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBuildLowQualityRoadsDuringEditing_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "/**\n     * When enabled, interactive edits in the Road and Road Network controllers rebuild roads using\n     * a low-quality mesh (coarser polylines, no PCG, no details) for faster feedback while drawing.\n     * High-quality meshes are restored when the tool exits (if Build High Quality Roads On Tool Exit is also enabled).\n     */" },
		{ "DisplayName", "Build Low Quality Roads During Editing" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "When enabled, interactive edits in the Road and Road Network controllers rebuild roads using\na low-quality mesh (coarser polylines, no PCG, no details) for faster feedback while drawing.\nHigh-quality meshes are restored when the tool exits (if Build High Quality Roads On Tool Exit is also enabled)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBuildHighQualityRoadsOnToolExit_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "/**\n     * When enabled, the Road and Road Network controllers issue a full high-quality rebuild for all\n     * roads edited during the session on tool exit, replacing any low-quality meshes produced during editing.\n     * Only relevant when Build Low Quality Roads During Editing is enabled.\n     */" },
		{ "DisplayName", "Build High Quality Roads On Tool Exit" },
		{ "EditCondition", "bBuildLowQualityRoadsDuringEditing" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "When enabled, the Road and Road Network controllers issue a full high-quality rebuild for all\nroads edited during the session on tool exit, replacing any low-quality meshes produced during editing.\nOnly relevant when Build Low Quality Roads During Editing is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDynamicMeshDisplayDuringEditing_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "/**\n     * When enabled, low-quality editing rebuilds display the real generated road surface on a\n     * transient DynamicMesh component instead of calling UStaticMesh::BuildFromMeshDescriptions.\n     * High-quality static meshes are restored on tool exit. Requires both low-quality editing and\n     * the tool-exit HQ rebuild so dynamic-backed actors always have a scheduled upgrade.\n     */" },
		{ "DisplayName", "Use DynamicMesh Display During Editing" },
		{ "EditCondition", "bBuildLowQualityRoadsDuringEditing && bBuildHighQualityRoadsOnToolExit" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "When enabled, low-quality editing rebuilds display the real generated road surface on a\ntransient DynamicMesh component instead of calling UStaticMesh::BuildFromMeshDescriptions.\nHigh-quality static meshes are restored on tool exit. Requires both low-quality editing and\nthe tool-exit HQ rebuild so dynamic-backed actors always have a scheduled upgrade." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDrawTurnRadius_MetaData[] = {
		{ "Category", "Road Drawing Settings" },
		{ "ClampMax", "100000.0" },
		{ "ClampMin", "100.0" },
		{ "Comment", "/**\n     * Default turn radius (in cm) applied to new road control points when drawing in Straight mode.\n     * Higher values produce more gradual curves at intersections; lower values allow tighter turns.\n     */" },
		{ "DisplayName", "Default Draw Turn Radius (cm)" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Default turn radius (in cm) applied to new road control points when drawing in Straight mode.\nHigher values produce more gradual curves at intersections; lower values allow tighter turns." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysUsePreviewMode_MetaData[] = {
		{ "Category", "Preview Mode" },
		{ "Comment", "/**\n     * When enabled, every road network stays in Preview Mode permanently: proxy meshes are built\n     * regardless of network size, Rebuild Roads and Build > Rebuild Road Networks keep producing\n     * proxies, and neither the auto-enable toast nor the exit prompt appear.\n     */" },
		{ "DisplayName", "Always Use Preview Mode" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "When enabled, every road network stays in Preview Mode permanently: proxy meshes are built\nregardless of network size, Rebuild Roads and Build > Rebuild Road Networks keep producing\nproxies, and neither the auto-enable toast nor the exit prompt appear." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoEnablePreviewMode_MetaData[] = {
		{ "Category", "Preview Mode" },
		{ "Comment", "/**\n     * When enabled, Preview Mode turns on automatically once a network exceeds the size thresholds\n     * (or when entering the Road / Road Network tools with an already-large network). Disable to\n     * keep editing at final quality unless Preview Mode is turned on manually.\n     */" },
		{ "DisplayName", "Auto-Enable Preview Mode" },
		{ "EditCondition", "!bAlwaysUsePreviewMode" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "When enabled, Preview Mode turns on automatically once a network exceeds the size thresholds\n(or when entering the Road / Road Network tools with an already-large network). Disable to\nkeep editing at final quality unless Preview Mode is turned on manually." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewPolylineSampleInterval_MetaData[] = {
		{ "Category", "Preview Mode" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "200.0" },
		{ "Comment", "/** Sampling distance (in cm) along outer edge curves when generating Preview Mode proxy meshes.\n     *  Larger values produce coarser proxies that are faster to build. */" },
		{ "DisplayName", "Preview Polyline Sample Interval (cm)" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Sampling distance (in cm) along outer edge curves when generating Preview Mode proxy meshes.\nLarger values produce coarser proxies that are faster to build." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadCollisionType_MetaData[] = {
		{ "Category", "Road Collision Settings" },
		{ "Comment", "/** Collision enabled state to apply to spline-mesh road modules spawned during road mesh generation. */" },
		{ "DisplayName", "Road Collision Type" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Collision enabled state to apply to spline-mesh road modules spawned during road mesh generation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBakeSplineRoadModulesIntoRoadGeo_MetaData[] = {
		{ "Category", "Road Collision Settings" },
		{ "Comment", "/**\n     * If enabled, spline-mesh road modules are baked into the RoadGeo root static mesh during rebuild.\n     * This reduces component count and memory usage at the cost of additional editor-time merge work.\n     * Recommended to leave this off while actively editing roads, then enable it for a runtime performance boost.\n     */" },
		{ "DisplayName", "Bake Spline Modules Into RoadGeo Mesh" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "If enabled, spline-mesh road modules are baked into the RoadGeo root static mesh during rebuild.\nThis reduces component count and memory usage at the cost of additional editor-time merge work.\nRecommended to leave this off while actively editing roads, then enable it for a runtime performance boost." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAdaptiveDensity_MetaData[] = {
		{ "Category", "Polyline Optimization Settings" },
		{ "Comment", "/** Enable adaptive density optimization for polylines (removes redundant points on straight segments).\n     *  Automatically disabled when World Displacement is enabled, as displacement requires a uniform vertex distribution. */" },
		{ "DisplayName", "Use Adaptive Density" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Enable adaptive density optimization for polylines (removes redundant points on straight segments).\nAutomatically disabled when World Displacement is enabled, as displacement requires a uniform vertex distribution." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolylineDensity_MetaData[] = {
		{ "Category", "Polyline Optimization Settings" },
		{ "ClampMax", "2000.0" },
		{ "ClampMin", "10.0" },
		{ "Comment", "/** Sampling interval (in cm) used when generating road geometry. Smaller values produce denser, smoother meshes at the cost of performance. 100 is good for maximum visual quality, 500 is good for performance-critical cases. */" },
		{ "DisplayName", "Road Mesh Density (cm between vertices)" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Sampling interval (in cm) used when generating road geometry. Smaller values produce denser, smoother meshes at the cost of performance. 100 is good for maximum visual quality, 500 is good for performance-critical cases." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowQualityPolylineDensityMultiplier_MetaData[] = {
		{ "Category", "Polyline Optimization Settings" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Multiplier applied to PolylineDensity when rebuilding in low-quality mode (active during\n     *  interactive editing in the Road and Road Network controllers). Larger values produce\n     *  coarser meshes during editing; default 4.0 gives a 4x coarser mesh. */" },
		{ "DisplayName", "Low-Quality Mode Density Multiplier" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Multiplier applied to PolylineDensity when rebuilding in low-quality mode (active during\ninteractive editing in the Road and Road Network controllers). Larger values produce\ncoarser meshes during editing; default 4.0 gives a 4x coarser mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCornerOffset_MetaData[] = {
		{ "Category", "Road Network Corner Settings" },
		{ "ClampMax", "5000.0" },
		{ "ClampMin", "50.0" },
		{ "Comment", "/** Default offset distance from intersection point for road network corner start/end points (in cm). NOTE: We recommend clicking \"Respawn Roads\" to destroy any saved corners after changing this value. */" },
		{ "DisplayName", "Default Corner Offset" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Default offset distance from intersection point for road network corner start/end points (in cm). NOTE: We recommend clicking \"Respawn Roads\" to destroy any saved corners after changing this value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCornerRadius_MetaData[] = {
		{ "Category", "Road Network Corner Settings" },
		{ "ClampMax", "2000.0" },
		{ "ClampMin", "10.0" },
		{ "Comment", "/** Default radius for road network corner curves (in cm). NOTE: We recommend clicking \"Respawn Roads\" to destroy any saved corners after changing this value. */" },
		{ "DisplayName", "Default Corner Radius" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Default radius for road network corner curves (in cm). NOTE: We recommend clicking \"Respawn Roads\" to destroy any saved corners after changing this value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionHeightThreshold_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "Road Network Intersection Settings" },
		{ "ClampMax", "100000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n     * Maximum vertical separation (in cm) allowed when considering two edges as intersecting for\n     * intersection/corner detection.\n     *\n     * Larger values allow intersections between roads at significantly different elevations (e.g., bridges/overpasses),\n     * smaller values will ignore those and keep intersections planar.\n     */" },
		{ "DisplayName", "Intersection Height Threshold" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Maximum vertical separation (in cm) allowed when considering two edges as intersecting for\nintersection/corner detection.\n\nLarger values allow intersections between roads at significantly different elevations (e.g., bridges/overpasses),\nsmaller values will ignore those and keep intersections planar." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadNetworkTileSize_MetaData[] = {
		{ "Category", "Road Network Tiles" },
		{ "ClampMax", "1000000.0" },
		{ "ClampMin", "1000.0" },
		{ "Comment", "/**\n     * World-XY size (cm) of one road-network tile. The grid is aligned to the world origin and\n     * stored sparsely (only occupied or last-rebuild stale/affected cells). Used for occupancy\n     * tracking, rebuild write-scope, and (when height-patch backend is on) one landscape patch per tile.\n     */" },
		{ "DisplayName", "Road Network Tile Size (cm)" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "World-XY size (cm) of one road-network tile. The grid is aligned to the world origin and\nstored sparsely (only occupied or last-rebuild stale/affected cells). Used for occupancy\ntracking, rebuild write-scope, and (when height-patch backend is on) one landscape patch per tile." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMatchIntersectionReferenceLineHeights_MetaData[] = {
		{ "Category", "Road Network Intersection Settings" },
		{ "Comment", "/**\n     * If enabled, when two road reference lines intersect within the height threshold,\n     * the narrower road receives a generated vertical-profile adjustment so both roads\n     * meet at a shared reference-line elevation through the intersection.\n     */" },
		{ "DisplayName", "Match Intersection Reference Line Heights" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "If enabled, when two road reference lines intersect within the height threshold,\nthe narrower road receives a generated vertical-profile adjustment so both roads\nmeet at a shared reference-line elevation through the intersection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableIntersectionLandscapePatch_MetaData[] = {
		{ "Category", "Road Network Intersection Settings" },
		{ "Comment", "/** Enables editor-only landscape flattening under merged intersections.\n     *  Flattening is composited into the per-tile landscape patch (never a per-actor patch). */" },
		{ "DisplayName", "Enable Intersection Landscape Patch" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Enables editor-only landscape flattening under merged intersections.\nFlattening is composited into the per-tile landscape patch (never a per-actor patch)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionPatchTexelCm_MetaData[] = {
		{ "Category", "Road Network Intersection Settings" },
		{ "ClampMax", "2000.0" },
		{ "ClampMin", "10.0" },
		{ "Comment", "/**\n     * World-space texel size (cm) used to bake intersection landscape flattening. Lower = higher\n     * quality and cost. Shares the height lattice with Road Height Patch Texel Size (finer wins).\n     */" },
		{ "DisplayName", "Intersection Patch Texel Size (cm)" },
		{ "EditCondition", "bEnableIntersectionLandscapePatch" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "World-space texel size (cm) used to bake intersection landscape flattening. Lower = higher\nquality and cost. Shares the height lattice with Road Height Patch Texel Size (finer wins)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionPatchMarginCm_MetaData[] = {
		{ "Category", "Road Network Intersection Settings" },
		{ "ClampMax", "5000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Additional world-space margin (cm) around the intersection bounds included in patch coverage. */" },
		{ "DisplayName", "Intersection Patch Margin (cm)" },
		{ "EditCondition", "bEnableIntersectionLandscapePatch" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Additional world-space margin (cm) around the intersection bounds included in patch coverage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionPatchFalloffCm_MetaData[] = {
		{ "Category", "Road Network Intersection Settings" },
		{ "ClampMax", "2000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Falloff distance (cm) applied by the patch blend outside the alpha mask edge. */" },
		{ "DisplayName", "Intersection Patch Falloff (cm)" },
		{ "EditCondition", "bEnableIntersectionLandscapePatch" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Falloff distance (cm) applied by the patch blend outside the alpha mask edge." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableIntersectionLandscapeVisibilityHole_MetaData[] = {
		{ "Category", "Road Network Intersection Settings" },
		{ "Comment", "/**\n     * Punches landscape visibility holes under merged intersection RoadGeos so terrain\n     * does not render through the junction mesh. Not applied to single-source-road RoadGeos.\n     */" },
		{ "DisplayName", "Enable Intersection Landscape Visibility Hole" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Punches landscape visibility holes under merged intersection RoadGeos so terrain\ndoes not render through the junction mesh. Not applied to single-source-road RoadGeos." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionVisibilityHoleInsetCm_MetaData[] = {
		{ "Category", "Road Network Intersection Settings" },
		{ "ClampMax", "2000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n     * Inset (cm) from the intersection outer ring (and hole rings) before the visibility\n     * hole is painted. Keeps hole edges under the opaque intersection mesh.\n     */" },
		{ "DisplayName", "Intersection Visibility Hole Inset (cm)" },
		{ "EditCondition", "bEnableIntersectionLandscapeVisibilityHole" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Inset (cm) from the intersection outer ring (and hole rings) before the visibility\nhole is painted. Keeps hole edges under the opaque intersection mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRoadLandscapePaint_MetaData[] = {
		{ "Category", "Landscape Paint Settings" },
		{ "Comment", "/** Enables editor-only landscape weight painting beneath roads during rebuild commit. */" },
		{ "DisplayName", "Enable Road Landscape Paint" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Enables editor-only landscape weight painting beneath roads during rebuild commit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadPaintTexelCm_MetaData[] = {
		{ "Category", "Landscape Paint Settings" },
		{ "ClampMax", "2000.0" },
		{ "ClampMin", "10.0" },
		{ "Comment", "/**\n     * World-space texel size (cm) used to bake road landscape paint mask textures.\n     * Also drives the intersection visibility-hole mask. Independent of the height patch texel size.\n     */" },
		{ "DisplayName", "Road Paint Texel Size (cm)" },
		{ "EditCondition", "bEnableRoadLandscapePaint" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "World-space texel size (cm) used to bake road landscape paint mask textures.\nAlso drives the intersection visibility-hole mask. Independent of the height patch texel size." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCreatePaintLayerInfo_MetaData[] = {
		{ "Category", "Landscape Paint Settings" },
		{ "Comment", "/** Auto-creates layer info assets for configured paint layers when missing on a target landscape. */" },
		{ "DisplayName", "Auto-Create Paint Layer Info" },
		{ "EditCondition", "bEnableRoadLandscapePaint" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Auto-creates layer info assets for configured paint layers when missing on a target landscape." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLandscapePaintLayerName_MetaData[] = {
		{ "Category", "Landscape Paint Settings" },
		{ "Comment", "/** Default paint layer used when a preset leaves the layer name unset. */" },
		{ "DisplayName", "Default Landscape Paint Layer" },
		{ "EditCondition", "bEnableRoadLandscapePaint" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Default paint layer used when a preset leaves the layer name unset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRoadLandscapeHeightPatch_MetaData[] = {
		{ "Category", "Landscape Paint Settings" },
		{ "Comment", "/**\n     * Flatten terrain under roads and intersections with one landscape texture patch per occupied\n     * road-network tile, instead of LandscapeMirrorSpline actors.\n     * Per-road Align Landscape / bEnableLandscapeSplineMirroring still selects which roads flatten.\n     * Sidewalks are excluded from height coverage. Toggle requires a full network rebuild.\n     */" },
		{ "DisplayName", "Use Road Landscape Height Patch" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Flatten terrain under roads and intersections with one landscape texture patch per occupied\nroad-network tile, instead of LandscapeMirrorSpline actors.\nPer-road Align Landscape / bEnableLandscapeSplineMirroring still selects which roads flatten.\nSidewalks are excluded from height coverage. Toggle requires a full network rebuild." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadHeightPatchTexelCm_MetaData[] = {
		{ "Category", "Landscape Paint Settings" },
		{ "ClampMax", "2000.0" },
		{ "ClampMin", "10.0" },
		{ "Comment", "/**\n     * World-space texel size (cm) for tile landscape height-patch textures.\n     * Independent of Road Paint Texel Size: height and paint are baked on separate lattices, so\n     * a fine paint mask no longer forces the (much more expensive) height bake to match it.\n     * Intersection Patch Texel Size, when enabled, still caps this - intersections write height too.\n     */" },
		{ "DisplayName", "Road Height Patch Texel Size (cm)" },
		{ "EditCondition", "bUseRoadLandscapeHeightPatch" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "World-space texel size (cm) for tile landscape height-patch textures.\nIndependent of Road Paint Texel Size: height and paint are baked on separate lattices, so\na fine paint mask no longer forces the (much more expensive) height bake to match it.\nIntersection Patch Texel Size, when enabled, still caps this - intersections write height too." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLandscapeFalloffCm_MetaData[] = {
		{ "Category", "Landscape Paint Settings" },
		{ "ClampMax", "100000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n     * Maximum outward height-patch falloff (cm). Clamped to the road-network tile size at bake time\n     * so the 3x3 occupancy gather still sees every contributor that can reach a texel.\n     */" },
		{ "DisplayName", "Max Landscape Falloff (cm)" },
		{ "EditCondition", "bUseRoadLandscapeHeightPatch" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Maximum outward height-patch falloff (cm). Clamped to the road-network tile size at bake time\nso the 3x3 occupancy gather still sees every contributor that can reach a texel." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeHeightFalloffCm_MetaData[] = {
		{ "Category", "Landscape Paint Settings" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n     * Absolute height-patch falloff (cm). When > 0, every road uses this radius instead of\n     * width \xc3\x97 LandscapeFalloffMultiplier \xc3\x97 LandscapeSideFalloffFactor, unless the road sets its\n     * own LandscapeFalloffCm. 0 keeps the width-based default.\n     */" },
		{ "DisplayName", "Landscape Height Falloff (cm)" },
		{ "EditCondition", "bUseRoadLandscapeHeightPatch" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Absolute height-patch falloff (cm). When > 0, every road uses this radius instead of\nwidth \xc3\x97 LandscapeFalloffMultiplier \xc3\x97 LandscapeSideFalloffFactor, unless the road sets its\nown LandscapeFalloffCm. 0 keeps the width-based default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRefreshLandBLDPCGAfterLandscapeChanges_MetaData[] = {
		{ "Category", "Landscape Paint Settings" },
		{ "Comment", "/**\n     * After road landscape height/paint commits, refresh LandBLD Static PCG and LandBLD Runtime PCG\n     * volumes so foliage/content picks up the updated heightmap and weight layers.\n     */" },
		{ "DisplayName", "Refresh LandBLD PCG After Landscape Changes" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "After road landscape height/paint commits, refresh LandBLD Static PCG and LandBLD Runtime PCG\nvolumes so foliage/content picks up the updated heightmap and weight layers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionHeightMatchBlendDistanceMultiplier_MetaData[] = {
		{ "Category", "Road Network Intersection Settings" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/**\n     * Controls how far generated intersection reference-line height adjustments blend\n     * along the narrower road. Effective blend distance is:\n     *   NarrowRoadWidthAtIntersection * IntersectionHeightMatchBlendDistanceMultiplier\n     */" },
		{ "DisplayName", "Intersection Height Match Blend Distance Multiplier" },
		{ "EditCondition", "bMatchIntersectionReferenceLineHeights" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Controls how far generated intersection reference-line height adjustments blend\nalong the narrower road. Effective blend distance is:\n  NarrowRoadWidthAtIntersection * IntersectionHeightMatchBlendDistanceMultiplier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSolidCenterlineMat_MetaData[] = {
		{ "Category", "Default Lane Marking Materials" },
		{ "Comment", "/** Default material for solid centerlines */" },
		{ "DisplayName", "Default Solid Centerline Material" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Default material for solid centerlines" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDottedCenterlineMat_MetaData[] = {
		{ "Category", "Default Lane Marking Materials" },
		{ "Comment", "/** Default material for dotted centerlines */" },
		{ "DisplayName", "Default Dotted Centerline Material" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Default material for dotted centerlines" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBrokenLaneBorderMat_MetaData[] = {
		{ "Category", "Default Lane Marking Materials" },
		{ "Comment", "/** Default material for broken lane borders */" },
		{ "DisplayName", "Default Broken Lane Border Material" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Default material for broken lane borders" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSolidLaneBorderMat_MetaData[] = {
		{ "Category", "Default Lane Marking Materials" },
		{ "Comment", "/** Default material for solid lane borders */" },
		{ "DisplayName", "Default Solid Lane Border Material" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Default material for solid lane borders" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDottedLaneBorderMat_MetaData[] = {
		{ "Category", "Default Lane Marking Materials" },
		{ "Comment", "/** Default material for dotted lane borders */" },
		{ "DisplayName", "Default Dotted Lane Border Material" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Default material for dotted lane borders" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAbutmentMaterial_MetaData[] = {
		{ "Category", "Default Road Materials" },
		{ "Comment", "/** Default material used for bridge abutment walls/caps when a road does not provide an explicit abutment material. */" },
		{ "DisplayName", "Default Abutment Material" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Default material used for bridge abutment walls/caps when a road does not provide an explicit abutment material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadSurfacePhysicalMaterial_MetaData[] = {
		{ "Category", "Road Collision Settings" },
		{ "Comment", "/** Physical material override applied to generated RoadGeo road surface mesh components. */" },
		{ "DisplayName", "Road Surface Physical Material" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Physical material override applied to generated RoadGeo road surface mesh components." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMarkingWidth_MetaData[] = {
		{ "Category", "Lane Marking Settings" },
		{ "ClampMax", "500.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Default width (in cm) for lane markings when generating presets (e.g., merge centerline marking). */" },
		{ "DisplayName", "Default Marking Width" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Default width (in cm) for lane markings when generating presets (e.g., merge centerline marking)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkingZOffset_MetaData[] = {
		{ "Category", "Lane Marking Settings" },
		{ "ClampMax", "50.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Vertical offset (in cm) applied to generated lane marking meshes to prevent Z-fighting with the road surface. */" },
		{ "DisplayName", "Marking Z Offset" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Vertical offset (in cm) applied to generated lane marking meshes to prevent Z-fighting with the road surface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultChevronAngle_MetaData[] = {
		{ "Category", "Chevron Marking Settings" },
		{ "ClampMax", "75.0" },
		{ "ClampMin", "15.0" },
		{ "Comment", "/** Default chevron gore angle in degrees. */" },
		{ "DisplayName", "Default Chevron Angle" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Default chevron gore angle in degrees." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultChevronSpacing_MetaData[] = {
		{ "Category", "Chevron Marking Settings" },
		{ "ClampMax", "2000.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Default spacing between chevron lines (cm). */" },
		{ "DisplayName", "Default Chevron Spacing" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Default spacing between chevron lines (cm)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultChevronWidth_MetaData[] = {
		{ "Category", "Chevron Marking Settings" },
		{ "ClampMax", "500.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Default chevron line width (cm). Falls back to Default Marking Width when unset at placement. */" },
		{ "DisplayName", "Default Chevron Width" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Default chevron line width (cm). Falls back to Default Marking Width when unset at placement." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultChevronMaterial_MetaData[] = {
		{ "Category", "Chevron Marking Settings" },
		{ "Comment", "/** Default material for newly placed chevron markings. Falls back to Default Solid Lane Border Material. */" },
		{ "DisplayName", "Default Chevron Material" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Default material for newly placed chevron markings. Falls back to Default Solid Lane Border Material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableIntersectionAwareMarkingProjection_MetaData[] = {
		{ "Category", "Lane Marking Settings" },
		{ "Comment", "/** Master toggle for lane-marking surface projection optimizations in intersection regions. */" },
		{ "DisplayName", "Enable Intersection-Aware Marking Projection" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Master toggle for lane-marking surface projection optimizations in intersection regions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTraceMarkingsOnlyNearIntersectionMasks_MetaData[] = {
		{ "Category", "Lane Marking Settings" },
		{ "Comment", "/** If enabled, lane marking projection only applies expensive surface traces near intersection masks. */" },
		{ "DisplayName", "Trace Markings Only Near Intersection Masks" },
		{ "EditCondition", "bEnableIntersectionAwareMarkingProjection" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "If enabled, lane marking projection only applies expensive surface traces near intersection masks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkingProjectionIntervalPadding_MetaData[] = {
		{ "Category", "Lane Marking Settings" },
		{ "ClampMax", "200.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Padding (cm) applied to intersection mask intervals when gating lane-marking surface projection traces. */" },
		{ "DisplayName", "Marking Projection Interval Padding (cm)" },
		{ "EditCondition", "bEnableIntersectionAwareMarkingProjection && bTraceMarkingsOnlyNearIntersectionMasks" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Padding (cm) applied to intersection mask intervals when gating lane-marking surface projection traces." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDeterministicRoadGeoHitSelection_MetaData[] = {
		{ "Category", "Lane Marking Settings" },
		{ "Comment", "/** If enabled, uses deterministic ARoadGeo-filtered hit selection for lane-marking projection traces. */" },
		{ "DisplayName", "Use Deterministic RoadGeo Hit Selection" },
		{ "EditCondition", "bEnableIntersectionAwareMarkingProjection" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "If enabled, uses deterministic ARoadGeo-filtered hit selection for lane-marking projection traces." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLogMarkingProjectionStats_MetaData[] = {
		{ "Category", "Lane Marking Settings" },
		{ "Comment", "/** Enables lightweight debug logging for lane-marking projection sample/trace counters. */" },
		{ "DisplayName", "Log Marking Projection Stats" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Enables lightweight debug logging for lane-marking projection sample/trace counters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkingMaskMinCrossAngleDeg_MetaData[] = {
		{ "Category", "Lane Marking Settings" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n     * Minimum 2D crossing angle (in degrees) between a road marking edge curve and an overlapping road boundary\n     * for it to be considered a true intersection for marking masking.\n     *\n     * Higher values reduce masking on smooth merges where roads run nearly adjacent/parallel inside an intersection mask.\n     */" },
		{ "DisplayName", "Mask Min Cross Angle (Degrees)" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Minimum 2D crossing angle (in degrees) between a road marking edge curve and an overlapping road boundary\nfor it to be considered a true intersection for marking masking.\n\nHigher values reduce masking on smooth merges where roads run nearly adjacent/parallel inside an intersection mask." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTireWear_MetaData[] = {
		{ "Category", "Tire Wear Settings" },
		{ "Comment", "/** Enable tire wear decal overlay on driving lanes. Generates a thin geometry layer with a tiling material to simulate darkened tire tracks. */" },
		{ "DisplayName", "Enable Tire Wear" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Enable tire wear decal overlay on driving lanes. Generates a thin geometry layer with a tiling material to simulate darkened tire tracks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableIntersectionTireWear_MetaData[] = {
		{ "Category", "Tire Wear Settings" },
		{ "Comment", "/** Enable tire wear decal overlay on intersection surfaces. Generates curved strip geometry connecting lanes that drivers would realistically move between. */" },
		{ "DisplayName", "Enable Intersection Tire Wear" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Enable tire wear decal overlay on intersection surfaces. Generates curved strip geometry connecting lanes that drivers would realistically move between." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TireWearDecalMaterial_MetaData[] = {
		{ "Category", "Tire Wear Settings" },
		{ "Comment", "/** Decal material applied to tire wear geometry on each driving lane. */" },
		{ "DisplayName", "Tire Wear Decal Material" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Decal material applied to tire wear geometry on each driving lane." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableWorldDisplacement_MetaData[] = {
		{ "Category", "World Displacement Settings" },
		{ "Comment", "/** Enable world-aligned Perlin noise displacement on road and intersection meshes. Adds subtle vertical variation to break up perfectly flat surfaces.\n     *  When enabled, Adaptive Density is automatically disabled to ensure uniform vertex distribution for correct displacement sampling. */" },
		{ "DisplayName", "Enable World Displacement" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Enable world-aligned Perlin noise displacement on road and intersection meshes. Adds subtle vertical variation to break up perfectly flat surfaces.\nWhen enabled, Adaptive Density is automatically disabled to ensure uniform vertex distribution for correct displacement sampling." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldDisplacementMax_MetaData[] = {
		{ "Category", "World Displacement Settings" },
		{ "ClampMax", "500.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Maximum absolute displacement intensity (in cm) applied by world displacement noise. */" },
		{ "DisplayName", "World Displacement Max" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Maximum absolute displacement intensity (in cm) applied by world displacement noise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldDisplacementUpwardBias_MetaData[] = {
		{ "Category", "World Displacement Settings" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Constant upward offset (in cm) applied after world displacement noise to reduce ground overlap artifacts. */" },
		{ "DisplayName", "World Displacement Upward Bias" },
		{ "ModuleRelativePath", "Classes/RoadBLDRuntimeSettings.h" },
		{ "ToolTip", "Constant upward offset (in cm) applied after world displacement noise to reduce ground overlap artifacts." },
	};
#endif // WITH_METADATA

// ********** Begin Class URoadBLDRuntimeSettings constinit property declarations ******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoadModuleTextureScale;
	static void NewProp_bUseConsistentUVGeneration_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bUseConsistentUVGeneration = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseConsistentUVGeneration;
	static void NewProp_bLeftHandDriving_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bLeftHandDriving = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeftHandDriving;
	static void NewProp_bEnableLinkedRoadPoints_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bEnableLinkedRoadPoints = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLinkedRoadPoints;
	static void NewProp_bEnableAbutmentGeneration_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bEnableAbutmentGeneration = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAbutmentGeneration;
	static void NewProp_bEnableRoadCrownGeneration_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bEnableRoadCrownGeneration = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRoadCrownGeneration;
	static void NewProp_bEnableAsyncRebuild_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bEnableAsyncRebuild = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAsyncRebuild;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CommitFrameBudgetMs;
	static void NewProp_bAdaptiveCommitFrameBudget_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bAdaptiveCommitFrameBudget = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdaptiveCommitFrameBudget;
	static void NewProp_bSuppressStaleRoadNetworkWarning_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bSuppressStaleRoadNetworkWarning = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuppressStaleRoadNetworkWarning;
	static void NewProp_bRebuildRoadsAfterEveryEdit_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bRebuildRoadsAfterEveryEdit = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRebuildRoadsAfterEveryEdit;
	static void NewProp_bBuildLowQualityRoadsDuringEditing_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bBuildLowQualityRoadsDuringEditing = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildLowQualityRoadsDuringEditing;
	static void NewProp_bBuildHighQualityRoadsOnToolExit_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bBuildHighQualityRoadsOnToolExit = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildHighQualityRoadsOnToolExit;
	static void NewProp_bUseDynamicMeshDisplayDuringEditing_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bUseDynamicMeshDisplayDuringEditing = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDynamicMeshDisplayDuringEditing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultDrawTurnRadius;
	static void NewProp_bAlwaysUsePreviewMode_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bAlwaysUsePreviewMode = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysUsePreviewMode;
	static void NewProp_bAutoEnablePreviewMode_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bAutoEnablePreviewMode = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoEnablePreviewMode;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PreviewPolylineSampleInterval;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RoadCollisionType;
	static void NewProp_bBakeSplineRoadModulesIntoRoadGeo_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bBakeSplineRoadModulesIntoRoadGeo = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeSplineRoadModulesIntoRoadGeo;
	static void NewProp_bUseAdaptiveDensity_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bUseAdaptiveDensity = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAdaptiveDensity;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PolylineDensity;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LowQualityPolylineDensityMultiplier;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DefaultCornerOffset;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DefaultCornerRadius;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_IntersectionHeightThreshold;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RoadNetworkTileSize;
	static void NewProp_bMatchIntersectionReferenceLineHeights_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bMatchIntersectionReferenceLineHeights = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchIntersectionReferenceLineHeights;
	static void NewProp_bEnableIntersectionLandscapePatch_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bEnableIntersectionLandscapePatch = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableIntersectionLandscapePatch;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_IntersectionPatchTexelCm;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_IntersectionPatchMarginCm;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_IntersectionPatchFalloffCm;
	static void NewProp_bEnableIntersectionLandscapeVisibilityHole_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bEnableIntersectionLandscapeVisibilityHole = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableIntersectionLandscapeVisibilityHole;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_IntersectionVisibilityHoleInsetCm;
	static void NewProp_bEnableRoadLandscapePaint_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bEnableRoadLandscapePaint = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRoadLandscapePaint;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RoadPaintTexelCm;
	static void NewProp_bAutoCreatePaintLayerInfo_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bAutoCreatePaintLayerInfo = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCreatePaintLayerInfo;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultLandscapePaintLayerName;
	static void NewProp_bUseRoadLandscapeHeightPatch_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bUseRoadLandscapeHeightPatch = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRoadLandscapeHeightPatch;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RoadHeightPatchTexelCm;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxLandscapeFalloffCm;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LandscapeHeightFalloffCm;
	static void NewProp_bRefreshLandBLDPCGAfterLandscapeChanges_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bRefreshLandBLDPCGAfterLandscapeChanges = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRefreshLandBLDPCGAfterLandscapeChanges;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_IntersectionHeightMatchBlendDistanceMultiplier;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultSolidCenterlineMat;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultDottedCenterlineMat;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultBrokenLaneBorderMat;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultSolidLaneBorderMat;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultDottedLaneBorderMat;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultAbutmentMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RoadSurfacePhysicalMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultMarkingWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MarkingZOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultChevronAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultChevronSpacing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultChevronWidth;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultChevronMaterial;
	static void NewProp_bEnableIntersectionAwareMarkingProjection_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bEnableIntersectionAwareMarkingProjection = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableIntersectionAwareMarkingProjection;
	static void NewProp_bTraceMarkingsOnlyNearIntersectionMasks_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bTraceMarkingsOnlyNearIntersectionMasks = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceMarkingsOnlyNearIntersectionMasks;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MarkingProjectionIntervalPadding;
	static void NewProp_bUseDeterministicRoadGeoHitSelection_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bUseDeterministicRoadGeoHitSelection = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDeterministicRoadGeoHitSelection;
	static void NewProp_bLogMarkingProjectionStats_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bLogMarkingProjectionStats = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogMarkingProjectionStats;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MarkingMaskMinCrossAngleDeg;
	static void NewProp_bEnableTireWear_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bEnableTireWear = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTireWear;
	static void NewProp_bEnableIntersectionTireWear_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bEnableIntersectionTireWear = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableIntersectionTireWear;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TireWearDecalMaterial;
	static void NewProp_bEnableWorldDisplacement_SetBit(void* Obj)
	{
		((URoadBLDRuntimeSettings*)Obj)->bEnableWorldDisplacement = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWorldDisplacement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldDisplacementMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldDisplacementUpwardBias;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URoadBLDRuntimeSettings constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("Get"), .Pointer = &URoadBLDRuntimeSettings::execGet },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URoadBLDRuntimeSettings_Get, "Get" }, // 811328a52ea4b09f6ebae70901fcb69fb7c9d201
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadBLDRuntimeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URoadBLDRuntimeSettings Property Definitions *****************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RoadModuleTextureScale = { "RoadModuleTextureScale", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, RoadModuleTextureScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadModuleTextureScale_MetaData), NewProp_RoadModuleTextureScale_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseConsistentUVGeneration = { "bUseConsistentUVGeneration", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bUseConsistentUVGeneration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseConsistentUVGeneration_MetaData), NewProp_bUseConsistentUVGeneration_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLeftHandDriving = { "bLeftHandDriving", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bLeftHandDriving_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLeftHandDriving_MetaData), NewProp_bLeftHandDriving_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableLinkedRoadPoints = { "bEnableLinkedRoadPoints", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bEnableLinkedRoadPoints_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableLinkedRoadPoints_MetaData), NewProp_bEnableLinkedRoadPoints_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableAbutmentGeneration = { "bEnableAbutmentGeneration", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bEnableAbutmentGeneration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAbutmentGeneration_MetaData), NewProp_bEnableAbutmentGeneration_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableRoadCrownGeneration = { "bEnableRoadCrownGeneration", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bEnableRoadCrownGeneration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRoadCrownGeneration_MetaData), NewProp_bEnableRoadCrownGeneration_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableAsyncRebuild = { "bEnableAsyncRebuild", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bEnableAsyncRebuild_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAsyncRebuild_MetaData), NewProp_bEnableAsyncRebuild_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_CommitFrameBudgetMs = { "CommitFrameBudgetMs", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, CommitFrameBudgetMs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommitFrameBudgetMs_MetaData), NewProp_CommitFrameBudgetMs_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAdaptiveCommitFrameBudget = { "bAdaptiveCommitFrameBudget", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bAdaptiveCommitFrameBudget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAdaptiveCommitFrameBudget_MetaData), NewProp_bAdaptiveCommitFrameBudget_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSuppressStaleRoadNetworkWarning = { "bSuppressStaleRoadNetworkWarning", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bSuppressStaleRoadNetworkWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuppressStaleRoadNetworkWarning_MetaData), NewProp_bSuppressStaleRoadNetworkWarning_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRebuildRoadsAfterEveryEdit = { "bRebuildRoadsAfterEveryEdit", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bRebuildRoadsAfterEveryEdit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRebuildRoadsAfterEveryEdit_MetaData), NewProp_bRebuildRoadsAfterEveryEdit_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bBuildLowQualityRoadsDuringEditing = { "bBuildLowQualityRoadsDuringEditing", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bBuildLowQualityRoadsDuringEditing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBuildLowQualityRoadsDuringEditing_MetaData), NewProp_bBuildLowQualityRoadsDuringEditing_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bBuildHighQualityRoadsOnToolExit = { "bBuildHighQualityRoadsOnToolExit", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bBuildHighQualityRoadsOnToolExit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBuildHighQualityRoadsOnToolExit_MetaData), NewProp_bBuildHighQualityRoadsOnToolExit_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseDynamicMeshDisplayDuringEditing = { "bUseDynamicMeshDisplayDuringEditing", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bUseDynamicMeshDisplayDuringEditing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDynamicMeshDisplayDuringEditing_MetaData), NewProp_bUseDynamicMeshDisplayDuringEditing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DefaultDrawTurnRadius = { "DefaultDrawTurnRadius", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, DefaultDrawTurnRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultDrawTurnRadius_MetaData), NewProp_DefaultDrawTurnRadius_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAlwaysUsePreviewMode = { "bAlwaysUsePreviewMode", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bAlwaysUsePreviewMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysUsePreviewMode_MetaData), NewProp_bAlwaysUsePreviewMode_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoEnablePreviewMode = { "bAutoEnablePreviewMode", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bAutoEnablePreviewMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoEnablePreviewMode_MetaData), NewProp_bAutoEnablePreviewMode_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_PreviewPolylineSampleInterval = { "PreviewPolylineSampleInterval", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, PreviewPolylineSampleInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewPolylineSampleInterval_MetaData), NewProp_PreviewPolylineSampleInterval_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_RoadCollisionType = { "RoadCollisionType", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, RoadCollisionType), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadCollisionType_MetaData), NewProp_RoadCollisionType_MetaData) }; // c8a7ab99d1a880814023560b6b0d1971eef51d4c
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bBakeSplineRoadModulesIntoRoadGeo = { "bBakeSplineRoadModulesIntoRoadGeo", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bBakeSplineRoadModulesIntoRoadGeo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBakeSplineRoadModulesIntoRoadGeo_MetaData), NewProp_bBakeSplineRoadModulesIntoRoadGeo_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseAdaptiveDensity = { "bUseAdaptiveDensity", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bUseAdaptiveDensity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAdaptiveDensity_MetaData), NewProp_bUseAdaptiveDensity_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_PolylineDensity = { "PolylineDensity", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, PolylineDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolylineDensity_MetaData), NewProp_PolylineDensity_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_LowQualityPolylineDensityMultiplier = { "LowQualityPolylineDensityMultiplier", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, LowQualityPolylineDensityMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowQualityPolylineDensityMultiplier_MetaData), NewProp_LowQualityPolylineDensityMultiplier_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_DefaultCornerOffset = { "DefaultCornerOffset", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, DefaultCornerOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCornerOffset_MetaData), NewProp_DefaultCornerOffset_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_DefaultCornerRadius = { "DefaultCornerRadius", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, DefaultCornerRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCornerRadius_MetaData), NewProp_DefaultCornerRadius_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_IntersectionHeightThreshold = { "IntersectionHeightThreshold", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, IntersectionHeightThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionHeightThreshold_MetaData), NewProp_IntersectionHeightThreshold_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_RoadNetworkTileSize = { "RoadNetworkTileSize", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, RoadNetworkTileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadNetworkTileSize_MetaData), NewProp_RoadNetworkTileSize_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bMatchIntersectionReferenceLineHeights = { "bMatchIntersectionReferenceLineHeights", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bMatchIntersectionReferenceLineHeights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMatchIntersectionReferenceLineHeights_MetaData), NewProp_bMatchIntersectionReferenceLineHeights_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableIntersectionLandscapePatch = { "bEnableIntersectionLandscapePatch", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bEnableIntersectionLandscapePatch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableIntersectionLandscapePatch_MetaData), NewProp_bEnableIntersectionLandscapePatch_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_IntersectionPatchTexelCm = { "IntersectionPatchTexelCm", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, IntersectionPatchTexelCm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionPatchTexelCm_MetaData), NewProp_IntersectionPatchTexelCm_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_IntersectionPatchMarginCm = { "IntersectionPatchMarginCm", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, IntersectionPatchMarginCm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionPatchMarginCm_MetaData), NewProp_IntersectionPatchMarginCm_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_IntersectionPatchFalloffCm = { "IntersectionPatchFalloffCm", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, IntersectionPatchFalloffCm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionPatchFalloffCm_MetaData), NewProp_IntersectionPatchFalloffCm_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableIntersectionLandscapeVisibilityHole = { "bEnableIntersectionLandscapeVisibilityHole", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bEnableIntersectionLandscapeVisibilityHole_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableIntersectionLandscapeVisibilityHole_MetaData), NewProp_bEnableIntersectionLandscapeVisibilityHole_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_IntersectionVisibilityHoleInsetCm = { "IntersectionVisibilityHoleInsetCm", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, IntersectionVisibilityHoleInsetCm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionVisibilityHoleInsetCm_MetaData), NewProp_IntersectionVisibilityHoleInsetCm_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableRoadLandscapePaint = { "bEnableRoadLandscapePaint", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bEnableRoadLandscapePaint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRoadLandscapePaint_MetaData), NewProp_bEnableRoadLandscapePaint_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_RoadPaintTexelCm = { "RoadPaintTexelCm", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, RoadPaintTexelCm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadPaintTexelCm_MetaData), NewProp_RoadPaintTexelCm_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoCreatePaintLayerInfo = { "bAutoCreatePaintLayerInfo", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bAutoCreatePaintLayerInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoCreatePaintLayerInfo_MetaData), NewProp_bAutoCreatePaintLayerInfo_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_DefaultLandscapePaintLayerName = { "DefaultLandscapePaintLayerName", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, DefaultLandscapePaintLayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLandscapePaintLayerName_MetaData), NewProp_DefaultLandscapePaintLayerName_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseRoadLandscapeHeightPatch = { "bUseRoadLandscapeHeightPatch", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bUseRoadLandscapeHeightPatch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRoadLandscapeHeightPatch_MetaData), NewProp_bUseRoadLandscapeHeightPatch_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_RoadHeightPatchTexelCm = { "RoadHeightPatchTexelCm", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, RoadHeightPatchTexelCm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadHeightPatchTexelCm_MetaData), NewProp_RoadHeightPatchTexelCm_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_MaxLandscapeFalloffCm = { "MaxLandscapeFalloffCm", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, MaxLandscapeFalloffCm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLandscapeFalloffCm_MetaData), NewProp_MaxLandscapeFalloffCm_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_LandscapeHeightFalloffCm = { "LandscapeHeightFalloffCm", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, LandscapeHeightFalloffCm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeHeightFalloffCm_MetaData), NewProp_LandscapeHeightFalloffCm_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRefreshLandBLDPCGAfterLandscapeChanges = { "bRefreshLandBLDPCGAfterLandscapeChanges", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bRefreshLandBLDPCGAfterLandscapeChanges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRefreshLandBLDPCGAfterLandscapeChanges_MetaData), NewProp_bRefreshLandBLDPCGAfterLandscapeChanges_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_IntersectionHeightMatchBlendDistanceMultiplier = { "IntersectionHeightMatchBlendDistanceMultiplier", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, IntersectionHeightMatchBlendDistanceMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionHeightMatchBlendDistanceMultiplier_MetaData), NewProp_IntersectionHeightMatchBlendDistanceMultiplier_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_DefaultSolidCenterlineMat = { "DefaultSolidCenterlineMat", nullptr, (EPropertyFlags)0x0014000000004005, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, DefaultSolidCenterlineMat), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSolidCenterlineMat_MetaData), NewProp_DefaultSolidCenterlineMat_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_DefaultDottedCenterlineMat = { "DefaultDottedCenterlineMat", nullptr, (EPropertyFlags)0x0014000000004005, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, DefaultDottedCenterlineMat), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultDottedCenterlineMat_MetaData), NewProp_DefaultDottedCenterlineMat_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_DefaultBrokenLaneBorderMat = { "DefaultBrokenLaneBorderMat", nullptr, (EPropertyFlags)0x0014000000004005, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, DefaultBrokenLaneBorderMat), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBrokenLaneBorderMat_MetaData), NewProp_DefaultBrokenLaneBorderMat_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_DefaultSolidLaneBorderMat = { "DefaultSolidLaneBorderMat", nullptr, (EPropertyFlags)0x0014000000004005, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, DefaultSolidLaneBorderMat), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSolidLaneBorderMat_MetaData), NewProp_DefaultSolidLaneBorderMat_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_DefaultDottedLaneBorderMat = { "DefaultDottedLaneBorderMat", nullptr, (EPropertyFlags)0x0014000000004005, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, DefaultDottedLaneBorderMat), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultDottedLaneBorderMat_MetaData), NewProp_DefaultDottedLaneBorderMat_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_DefaultAbutmentMaterial = { "DefaultAbutmentMaterial", nullptr, (EPropertyFlags)0x0014000000004005, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, DefaultAbutmentMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAbutmentMaterial_MetaData), NewProp_DefaultAbutmentMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_RoadSurfacePhysicalMaterial = { "RoadSurfacePhysicalMaterial", nullptr, (EPropertyFlags)0x0014000000004005, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, RoadSurfacePhysicalMaterial), Z_Construct_UClass_UPhysicalMaterial, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadSurfacePhysicalMaterial_MetaData), NewProp_RoadSurfacePhysicalMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DefaultMarkingWidth = { "DefaultMarkingWidth", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, DefaultMarkingWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMarkingWidth_MetaData), NewProp_DefaultMarkingWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MarkingZOffset = { "MarkingZOffset", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, MarkingZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkingZOffset_MetaData), NewProp_MarkingZOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DefaultChevronAngle = { "DefaultChevronAngle", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, DefaultChevronAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultChevronAngle_MetaData), NewProp_DefaultChevronAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DefaultChevronSpacing = { "DefaultChevronSpacing", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, DefaultChevronSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultChevronSpacing_MetaData), NewProp_DefaultChevronSpacing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DefaultChevronWidth = { "DefaultChevronWidth", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, DefaultChevronWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultChevronWidth_MetaData), NewProp_DefaultChevronWidth_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_DefaultChevronMaterial = { "DefaultChevronMaterial", nullptr, (EPropertyFlags)0x0014000000004005, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, DefaultChevronMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultChevronMaterial_MetaData), NewProp_DefaultChevronMaterial_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableIntersectionAwareMarkingProjection = { "bEnableIntersectionAwareMarkingProjection", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bEnableIntersectionAwareMarkingProjection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableIntersectionAwareMarkingProjection_MetaData), NewProp_bEnableIntersectionAwareMarkingProjection_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bTraceMarkingsOnlyNearIntersectionMasks = { "bTraceMarkingsOnlyNearIntersectionMasks", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bTraceMarkingsOnlyNearIntersectionMasks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTraceMarkingsOnlyNearIntersectionMasks_MetaData), NewProp_bTraceMarkingsOnlyNearIntersectionMasks_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MarkingProjectionIntervalPadding = { "MarkingProjectionIntervalPadding", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, MarkingProjectionIntervalPadding), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkingProjectionIntervalPadding_MetaData), NewProp_MarkingProjectionIntervalPadding_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseDeterministicRoadGeoHitSelection = { "bUseDeterministicRoadGeoHitSelection", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bUseDeterministicRoadGeoHitSelection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDeterministicRoadGeoHitSelection_MetaData), NewProp_bUseDeterministicRoadGeoHitSelection_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLogMarkingProjectionStats = { "bLogMarkingProjectionStats", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bLogMarkingProjectionStats_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLogMarkingProjectionStats_MetaData), NewProp_bLogMarkingProjectionStats_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MarkingMaskMinCrossAngleDeg = { "MarkingMaskMinCrossAngleDeg", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, MarkingMaskMinCrossAngleDeg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkingMaskMinCrossAngleDeg_MetaData), NewProp_MarkingMaskMinCrossAngleDeg_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableTireWear = { "bEnableTireWear", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bEnableTireWear_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableTireWear_MetaData), NewProp_bEnableTireWear_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableIntersectionTireWear = { "bEnableIntersectionTireWear", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bEnableIntersectionTireWear_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableIntersectionTireWear_MetaData), NewProp_bEnableIntersectionTireWear_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_TireWearDecalMaterial = { "TireWearDecalMaterial", nullptr, (EPropertyFlags)0x0014000000004005, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, TireWearDecalMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TireWearDecalMaterial_MetaData), NewProp_TireWearDecalMaterial_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableWorldDisplacement = { "bEnableWorldDisplacement", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDRuntimeSettings), &UHT_STATICS::NewProp_bEnableWorldDisplacement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableWorldDisplacement_MetaData), NewProp_bEnableWorldDisplacement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_WorldDisplacementMax = { "WorldDisplacementMax", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, WorldDisplacementMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldDisplacementMax_MetaData), NewProp_WorldDisplacementMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_WorldDisplacementUpwardBias = { "WorldDisplacementUpwardBias", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDRuntimeSettings, WorldDisplacementUpwardBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldDisplacementUpwardBias_MetaData), NewProp_WorldDisplacementUpwardBias_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadModuleTextureScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseConsistentUVGeneration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLeftHandDriving,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableLinkedRoadPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableAbutmentGeneration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableRoadCrownGeneration,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableAsyncRebuild,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CommitFrameBudgetMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAdaptiveCommitFrameBudget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSuppressStaleRoadNetworkWarning,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRebuildRoadsAfterEveryEdit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bBuildLowQualityRoadsDuringEditing,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bBuildHighQualityRoadsOnToolExit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseDynamicMeshDisplayDuringEditing,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultDrawTurnRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAlwaysUsePreviewMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoEnablePreviewMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreviewPolylineSampleInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadCollisionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bBakeSplineRoadModulesIntoRoadGeo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseAdaptiveDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PolylineDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LowQualityPolylineDensityMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultCornerOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultCornerRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IntersectionHeightThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadNetworkTileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bMatchIntersectionReferenceLineHeights,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableIntersectionLandscapePatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IntersectionPatchTexelCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IntersectionPatchMarginCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IntersectionPatchFalloffCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableIntersectionLandscapeVisibilityHole,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IntersectionVisibilityHoleInsetCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableRoadLandscapePaint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadPaintTexelCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoCreatePaintLayerInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultLandscapePaintLayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseRoadLandscapeHeightPatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadHeightPatchTexelCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxLandscapeFalloffCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapeHeightFalloffCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRefreshLandBLDPCGAfterLandscapeChanges,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IntersectionHeightMatchBlendDistanceMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultSolidCenterlineMat,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultDottedCenterlineMat,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultBrokenLaneBorderMat,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultSolidLaneBorderMat,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultDottedLaneBorderMat,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultAbutmentMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadSurfacePhysicalMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultMarkingWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MarkingZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultChevronAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultChevronSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultChevronWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultChevronMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableIntersectionAwareMarkingProjection,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bTraceMarkingsOnlyNearIntersectionMasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MarkingProjectionIntervalPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseDeterministicRoadGeoHitSelection,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLogMarkingProjectionStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MarkingMaskMinCrossAngleDeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableTireWear,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableIntersectionTireWear,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TireWearDecalMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableWorldDisplacement,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldDisplacementMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldDisplacementUpwardBias,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URoadBLDRuntimeSettings Property Definitions *******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDeveloperSettings,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoadBLDRuntimeSettings,
	"RoadBLD",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void URoadBLDRuntimeSettings_StaticRegisterNativesURoadBLDRuntimeSettings()
{
	UClass* Class = URoadBLDRuntimeSettings::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URoadBLDRuntimeSettings;
UClass* Z_Construct_UClass_URoadBLDRuntimeSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoadBLDRuntimeSettings;
		if (!Z_Registration_Info_UClass_URoadBLDRuntimeSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadBLDRuntimeSettings"),
				Z_Registration_Info_UClass_URoadBLDRuntimeSettings.InnerSingleton,
				URoadBLDRuntimeSettings_StaticRegisterNativesURoadBLDRuntimeSettings,
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
		return Z_Registration_Info_UClass_URoadBLDRuntimeSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoadBLDRuntimeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoadBLDRuntimeSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoadBLDRuntimeSettings.OuterSingleton;
}
#undef UHT_STATICS
URoadBLDRuntimeSettings::URoadBLDRuntimeSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoadBLDRuntimeSettings);
URoadBLDRuntimeSettings::~URoadBLDRuntimeSettings() {}
// ********** End Class URoadBLDRuntimeSettings ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadBLDRuntimeSettings_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoadBLDRuntimeSettings, TEXT("URoadBLDRuntimeSettings"), &Z_Registration_Info_UClass_URoadBLDRuntimeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoadBLDRuntimeSettings), 3734790905U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadBLDRuntimeSettings_h__Script_RoadBLDRuntime_d77f592060823b89e49b2d0207490c42dc1da0a4{
	TEXT("/Script/RoadBLDRuntime"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
