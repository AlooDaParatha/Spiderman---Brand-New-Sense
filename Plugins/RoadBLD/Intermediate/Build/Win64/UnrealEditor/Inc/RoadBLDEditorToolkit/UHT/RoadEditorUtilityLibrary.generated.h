// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoadEditorUtilityLibrary.h"

#ifdef ROADBLDEDITORTOOLKIT_RoadEditorUtilityLibrary_generated_h
#error "RoadEditorUtilityLibrary.generated.h already included, missing '#pragma once' in RoadEditorUtilityLibrary.h"
#endif
#define ROADBLDEDITORTOOLKIT_RoadEditorUtilityLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADynamicRoad;
class ADynamicRoadNetwork;
class ARoadGeo;
class UDynamicRoadDrawPreset;
class UDynamicRoadLane;
class UEdgeCurve;
class UMaterialInterface;
class URoadBLDRuntimeSettings;
class URoadControlSplineComponent;
struct FDynamicRoadLaneProfile;
struct FLinearColor;
struct FPrimitiveDrawParams;
struct FPrimitiveDrawWrapper;

// ********** Begin ScriptStruct FSpawnRoadElementParams *******************************************
struct Z_Construct_UScriptStruct_FSpawnRoadElementParams_Statics;
ROADBLDEDITORTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnRoadElementParams(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadEditorUtilityLibrary_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSpawnRoadElementParams_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FSpawnRoadElementParams(ETypeConstructPhase::Inner); }


struct FSpawnRoadElementParams;
// ********** End ScriptStruct FSpawnRoadElementParams *********************************************

// ********** Begin Class URoadEditorFunctionLibrary ***********************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadEditorUtilityLibrary_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRebuildStaleRoadNetworksInLevel); \
	DECLARE_FUNCTION(execRefreshIntersectionLandscapePatchesForRoadGeos); \
	DECLARE_FUNCTION(execGetAllLandscapePaintLayerNames); \
	DECLARE_FUNCTION(execWorldHasAnyLandscape); \
	DECLARE_FUNCTION(execRefreshLandscapePaintForRoads); \
	DECLARE_FUNCTION(execRefreshLandscapeAlignmentForRoads); \
	DECLARE_FUNCTION(execRebuildAllRoadNetworksInLevel); \
	DECLARE_FUNCTION(execCalculateRefLineForInteractiveEdit); \
	DECLARE_FUNCTION(execRebuildRoadsByOwningNetwork); \
	DECLARE_FUNCTION(execShouldRebuildRoadsAfterEveryEdit); \
	DECLARE_FUNCTION(execFindRoadNetworkForRoad); \
	DECLARE_FUNCTION(execHasAnyStaleRoadNetworkInLevel); \
	DECLARE_FUNCTION(execGetStaleRoadNetworksInLevel); \
	DECLARE_FUNCTION(execGetAllRoadNetworksInLevel); \
	DECLARE_FUNCTION(execFindRoadNetworkInLevel); \
	DECLARE_FUNCTION(execOpenRoadBLDProjectSettings); \
	DECLARE_FUNCTION(execUpdateRoadBLDSettings); \
	DECLARE_FUNCTION(execCheckRoadShapeValidity); \
	DECLARE_FUNCTION(execUpdatePreviewRoad); \
	DECLARE_FUNCTION(execDuplicateRoad); \
	DECLARE_FUNCTION(execCreateMergePreset); \
	DECLARE_FUNCTION(execPDI_DrawRoadLaneDirectionArrows); \
	DECLARE_FUNCTION(execPDI_DrawRoadEdgeCurves); \
	DECLARE_FUNCTION(execPDI_DrawEdgeCurve); \
	DECLARE_FUNCTION(execMakeLanesProfileFromRoadDrawPreset);


struct Z_Construct_UClass_URoadEditorFunctionLibrary_Statics;
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadEditorFunctionLibrary(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadEditorUtilityLibrary_h_47_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URoadEditorFunctionLibrary_Statics; \
	friend ROADBLDEDITORTOOLKIT_API UClass* ::Z_Construct_UClass_URoadEditorFunctionLibrary(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URoadEditorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDEditorToolkit"), Z_Construct_UClass_URoadEditorFunctionLibrary) \
	DECLARE_SERIALIZER(URoadEditorFunctionLibrary)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadEditorUtilityLibrary_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoadEditorFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoadEditorFunctionLibrary(URoadEditorFunctionLibrary&&) = delete; \
	URoadEditorFunctionLibrary(const URoadEditorFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoadEditorFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoadEditorFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoadEditorFunctionLibrary) \
	NO_API virtual ~URoadEditorFunctionLibrary();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadEditorUtilityLibrary_h_44_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadEditorUtilityLibrary_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadEditorUtilityLibrary_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadEditorUtilityLibrary_h_47_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadEditorUtilityLibrary_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoadEditorFunctionLibrary;

// ********** End Class URoadEditorFunctionLibrary *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadEditorUtilityLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
