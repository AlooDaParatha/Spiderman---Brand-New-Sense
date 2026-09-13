// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicRoad/DynamicRoadLane.h"

#ifdef ROADBLDRUNTIME_DynamicRoadLane_generated_h
#error "DynamicRoadLane.generated.h already included, missing '#pragma once' in DynamicRoadLane.h"
#endif
#define ROADBLDRUNTIME_DynamicRoadLane_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLaneWidthSegment *************************************************
struct Z_Construct_UScriptStruct_FLaneWidthSegment_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FLaneWidthSegment(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadLane_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLaneWidthSegment_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FLaneWidthSegment(ETypeConstructPhase::Inner); }


struct FLaneWidthSegment;
// ********** End ScriptStruct FLaneWidthSegment ***************************************************

// ********** Begin Class UDynamicRoadLane *********************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadLane_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRegenerateOffsetPointsFromActiveSegments);


struct Z_Construct_UClass_UDynamicRoadLane_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadLane(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadLane_h_51_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UDynamicRoadLane_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_UDynamicRoadLane(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UDynamicRoadLane, UCurveObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_UDynamicRoadLane) \
	DECLARE_SERIALIZER(UDynamicRoadLane)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadLane_h_51_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynamicRoadLane(UDynamicRoadLane&&) = delete; \
	UDynamicRoadLane(const UDynamicRoadLane&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicRoadLane); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicRoadLane); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDynamicRoadLane) \
	NO_API virtual ~UDynamicRoadLane();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadLane_h_48_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadLane_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadLane_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadLane_h_51_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadLane_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynamicRoadLane;

// ********** End Class UDynamicRoadLane ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadLane_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
