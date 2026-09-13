// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoadBLDDynamicMeshUtils.h"

#ifdef ROADBLDRUNTIME_RoadBLDDynamicMeshUtils_generated_h
#error "RoadBLDDynamicMeshUtils.generated.h already included, missing '#pragma once' in RoadBLDDynamicMeshUtils.h"
#endif
#define ROADBLDRUNTIME_RoadBLDDynamicMeshUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCurveFloat;
class UDynamicMesh;
struct FAppendSweepPolylineParameters;
struct FExtractCurveParams;
struct FGeometryScriptPrimitiveOptions;
struct FWorldBLDKitElementEdge;

// ********** Begin ScriptStruct FAppendSweepPolylineParameters ************************************
struct Z_Construct_UScriptStruct_FAppendSweepPolylineParameters_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAppendSweepPolylineParameters(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadBLDDynamicMeshUtils_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAppendSweepPolylineParameters_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FAppendSweepPolylineParameters(ETypeConstructPhase::Inner); }


struct FAppendSweepPolylineParameters;
// ********** End ScriptStruct FAppendSweepPolylineParameters **************************************

// ********** Begin Class URoadBLDDynamicMeshUtils *************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadBLDDynamicMeshUtils_h_186_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReverseSplineDistances); \
	DECLARE_FUNCTION(execExtractCurveSamples); \
	DECLARE_FUNCTION(execCalculateConsistentPolylineUVs); \
	DECLARE_FUNCTION(execCalculateAdaptivePolylineUVs); \
	DECLARE_FUNCTION(execAppendSweepPolylineToDynamicMeshInRanges); \
	DECLARE_FUNCTION(execAppendSweepPolylineToDynamicMeshV2);


struct Z_Construct_UClass_URoadBLDDynamicMeshUtils_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadBLDDynamicMeshUtils(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadBLDDynamicMeshUtils_h_186_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URoadBLDDynamicMeshUtils_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_URoadBLDDynamicMeshUtils(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URoadBLDDynamicMeshUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_URoadBLDDynamicMeshUtils) \
	DECLARE_SERIALIZER(URoadBLDDynamicMeshUtils)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadBLDDynamicMeshUtils_h_186_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoadBLDDynamicMeshUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoadBLDDynamicMeshUtils(URoadBLDDynamicMeshUtils&&) = delete; \
	URoadBLDDynamicMeshUtils(const URoadBLDDynamicMeshUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoadBLDDynamicMeshUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoadBLDDynamicMeshUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoadBLDDynamicMeshUtils) \
	NO_API virtual ~URoadBLDDynamicMeshUtils();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadBLDDynamicMeshUtils_h_183_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadBLDDynamicMeshUtils_h_186_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadBLDDynamicMeshUtils_h_186_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadBLDDynamicMeshUtils_h_186_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadBLDDynamicMeshUtils_h_186_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoadBLDDynamicMeshUtils;

// ********** End Class URoadBLDDynamicMeshUtils ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadBLDDynamicMeshUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
