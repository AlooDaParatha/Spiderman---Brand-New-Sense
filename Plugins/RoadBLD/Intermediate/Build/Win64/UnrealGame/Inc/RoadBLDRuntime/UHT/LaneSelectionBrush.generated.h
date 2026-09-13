// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LaneSelectionBrush.h"

#ifdef ROADBLDRUNTIME_LaneSelectionBrush_generated_h
#error "LaneSelectionBrush.generated.h already included, missing '#pragma once' in LaneSelectionBrush.h"
#endif
#define ROADBLDRUNTIME_LaneSelectionBrush_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ARoadGeo;
class UDynamicRoadLane;
class UStaticMeshComponent;

// ********** Begin Class ALaneSelectionBrush ******************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_LaneSelectionBrush_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCopyMeshFromRoadGeo); \
	DECLARE_FUNCTION(execCopyMeshFromStaticMeshComponent); \
	DECLARE_FUNCTION(execUpdateMeshForLane);


struct Z_Construct_UClass_ALaneSelectionBrush_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ALaneSelectionBrush(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_LaneSelectionBrush_h_21_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ALaneSelectionBrush_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_ALaneSelectionBrush(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ALaneSelectionBrush, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_ALaneSelectionBrush) \
	DECLARE_SERIALIZER(ALaneSelectionBrush)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_LaneSelectionBrush_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALaneSelectionBrush(ALaneSelectionBrush&&) = delete; \
	ALaneSelectionBrush(const ALaneSelectionBrush&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALaneSelectionBrush); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALaneSelectionBrush); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALaneSelectionBrush) \
	NO_API virtual ~ALaneSelectionBrush();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_LaneSelectionBrush_h_18_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_LaneSelectionBrush_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_LaneSelectionBrush_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_LaneSelectionBrush_h_21_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_LaneSelectionBrush_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALaneSelectionBrush;

// ********** End Class ALaneSelectionBrush ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_LaneSelectionBrush_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
