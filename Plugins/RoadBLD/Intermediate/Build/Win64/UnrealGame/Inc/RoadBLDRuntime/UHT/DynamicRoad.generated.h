// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicRoad/DynamicRoad.h"

#ifdef ROADBLDRUNTIME_DynamicRoad_generated_h
#error "DynamicRoad.generated.h already included, missing '#pragma once' in DynamicRoad.h"
#endif
#define ROADBLDRUNTIME_DynamicRoad_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCurveObject;
class UDynamicRoadLane;
class UEdgeCurve;
enum class ERoadSide : uint8;
struct FColor;
struct FDynamicRoadDrawPresetMarking;
struct FRoadCrossSectionEdgeProfile;
struct FRoadSplineAuthoringPoint;

// ********** Begin ScriptStruct FRoadSplineAuthoringPoint *****************************************
struct Z_Construct_UScriptStruct_FRoadSplineAuthoringPoint_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadSplineAuthoringPoint(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoad_h_85_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRoadSplineAuthoringPoint_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FRoadSplineAuthoringPoint(ETypeConstructPhase::Inner); }


struct FRoadSplineAuthoringPoint;
// ********** End ScriptStruct FRoadSplineAuthoringPoint *******************************************

// ********** Begin ScriptStruct FRoadCrossSectionEdgeProfile **************************************
struct Z_Construct_UScriptStruct_FRoadCrossSectionEdgeProfile_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadCrossSectionEdgeProfile(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoad_h_101_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRoadCrossSectionEdgeProfile_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FRoadCrossSectionEdgeProfile(ETypeConstructPhase::Inner); }


struct FRoadCrossSectionEdgeProfile;
// ********** End ScriptStruct FRoadCrossSectionEdgeProfile ****************************************

// ********** Begin ScriptStruct FRoadControlPoint *************************************************
struct Z_Construct_UScriptStruct_FRoadControlPoint_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadControlPoint(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoad_h_114_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRoadControlPoint_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FRoadControlPoint(ETypeConstructPhase::Inner); }


struct FRoadControlPoint;
// ********** End ScriptStruct FRoadControlPoint ***************************************************

// ********** Begin Class ADynamicRoad *************************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoad_h_156_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDrawDebugReferenceLineDetailed); \
	DECLARE_FUNCTION(execValidateRoad); \
	DECLARE_FUNCTION(execDrawDebugGeometricCenterline); \
	DECLARE_FUNCTION(execDrawDebugReferenceLine); \
	DECLARE_FUNCTION(execCreateSemicircle); \
	DECLARE_FUNCTION(execCreateRoundabout); \
	DECLARE_FUNCTION(execConvertDistanceBetweenCurves); \
	DECLARE_FUNCTION(execGetDistanceAlongEdgeAtLocation); \
	DECLARE_FUNCTION(execGetDistanceAndOffsetAtLocation); \
	DECLARE_FUNCTION(execGetAllLanes); \
	DECLARE_FUNCTION(execGetAllEdgeCurves); \
	DECLARE_FUNCTION(execGetClosestEdgeCurveAtLocation); \
	DECLARE_FUNCTION(execGetRoadEdge); \
	DECLARE_FUNCTION(execAddLane); \
	DECLARE_FUNCTION(execGetWorldPositionAtDistance); \
	DECLARE_FUNCTION(execAllowsBridgeRoadModules); \
	DECLARE_FUNCTION(execGetPointLandscapeMirrorHeightOffset); \
	DECLARE_FUNCTION(execUpdatePointLandscapeMirrorHeightOffset); \
	DECLARE_FUNCTION(execGetPointTurnRadius); \
	DECLARE_FUNCTION(execUpdatePointTurnRadius); \
	DECLARE_FUNCTION(execUpdateControlPoints); \
	DECLARE_FUNCTION(execApplyCrossSectionEdgeProfiles); \
	DECLARE_FUNCTION(execReplaceControlSplineFromAuthoringPoints); \
	DECLARE_FUNCTION(execUpdateControlSpline); \
	DECLARE_FUNCTION(execGetElevationAtDistance); \
	DECLARE_FUNCTION(execGetLength); \
	DECLARE_FUNCTION(execCalculateLaneShapes); \
	DECLARE_FUNCTION(execCalculateRefLine); \
	DECLARE_FUNCTION(execGetSideAtLocation); \
	DECLARE_FUNCTION(execGetLaneMidpoint);


struct Z_Construct_UClass_ADynamicRoad_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoad(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoad_h_156_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ADynamicRoad_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_ADynamicRoad(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ADynamicRoad, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_ADynamicRoad) \
	DECLARE_SERIALIZER(ADynamicRoad)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoad_h_156_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADynamicRoad(ADynamicRoad&&) = delete; \
	ADynamicRoad(const ADynamicRoad&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADynamicRoad); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADynamicRoad); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADynamicRoad) \
	NO_API virtual ~ADynamicRoad();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoad_h_153_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoad_h_156_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoad_h_156_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoad_h_156_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoad_h_156_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADynamicRoad;

// ********** End Class ADynamicRoad ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoad_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
