// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoadUtilityLibrary.h"

#ifdef ROADBLDRUNTIME_RoadUtilityLibrary_generated_h
#error "RoadUtilityLibrary.generated.h already included, missing '#pragma once' in RoadUtilityLibrary.h"
#endif
#define ROADBLDRUNTIME_RoadUtilityLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ADynamicRoad;
class ARoadGeo;
class UCurveObject;
class UDynamicRoadLane;
class UEdgeCurve;
class UMaterialInterface;
class UObject;
class USplineComponent;
enum class ERoadGeoTriangulationMethod : uint8;
struct FElementFilterSpec;
struct FGeometryScriptSplineSamplingOptions;
struct FWorldBLDKitElementEdge;
struct FWorldBLDKitElementPoint;

// ********** Begin Class URoadUtilityLibrary ******************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadUtilityLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindPolylineIntersections); \
	DECLARE_FUNCTION(execFindBridgeSegmentsOnCurve); \
	DECLARE_FUNCTION(execFindBridgeSegments); \
	DECLARE_FUNCTION(execCreateDebugRoadGeoFromPerimeter); \
	DECLARE_FUNCTION(execGetOuterLanes); \
	DECLARE_FUNCTION(execGetLaneAtLocation); \
	DECLARE_FUNCTION(execFindCityKitElementEdges); \
	DECLARE_FUNCTION(execFindWorldBLDKitElementPoints); \
	DECLARE_FUNCTION(execGetCurvePoints); \
	DECLARE_FUNCTION(execGetControlPoints); \
	DECLARE_FUNCTION(execPointsOnClothoidAdaptive); \
	DECLARE_FUNCTION(execPointsOnClothoid); \
	DECLARE_FUNCTION(execFitCubic); \
	DECLARE_FUNCTION(execGetAverageLocation); \
	DECLARE_FUNCTION(execSampleSplineToTransforms); \
	DECLARE_FUNCTION(execAppendSpline); \
	DECLARE_FUNCTION(execCutSpline); \
	DECLARE_FUNCTION(execInvertSpline); \
	DECLARE_FUNCTION(execInsertSplinePoint); \
	DECLARE_FUNCTION(execIsPointBetweenEdgeCurves_WindingNumberXY);


struct Z_Construct_UClass_URoadUtilityLibrary_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadUtilityLibrary(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadUtilityLibrary_h_32_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URoadUtilityLibrary_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_URoadUtilityLibrary(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URoadUtilityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_URoadUtilityLibrary) \
	DECLARE_SERIALIZER(URoadUtilityLibrary)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadUtilityLibrary_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoadUtilityLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoadUtilityLibrary(URoadUtilityLibrary&&) = delete; \
	URoadUtilityLibrary(const URoadUtilityLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoadUtilityLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoadUtilityLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoadUtilityLibrary) \
	NO_API virtual ~URoadUtilityLibrary();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadUtilityLibrary_h_29_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadUtilityLibrary_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadUtilityLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadUtilityLibrary_h_32_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadUtilityLibrary_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoadUtilityLibrary;

// ********** End Class URoadUtilityLibrary ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadUtilityLibrary_h

// ********** Begin Enum ERoadGeoTriangulationMethod ***********************************************
#define FOREACH_ENUM_EROADGEOTRIANGULATIONMETHOD(op) \
	op(ERoadGeoTriangulationMethod::Simple) \
	op(ERoadGeoTriangulationMethod::Robust) \
	op(ERoadGeoTriangulationMethod::Delaunay) 

enum class ERoadGeoTriangulationMethod : uint8;
template<> struct TIsUEnumClass<ERoadGeoTriangulationMethod> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ERoadGeoTriangulationMethod>();
// ********** End Enum ERoadGeoTriangulationMethod *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
