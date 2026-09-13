// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicRoad/RoadIsland.h"

#ifdef ROADBLDRUNTIME_RoadIsland_generated_h
#error "RoadIsland.generated.h already included, missing '#pragma once' in RoadIsland.h"
#endif
#define ROADBLDRUNTIME_RoadIsland_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USplineComponent;

// ********** Begin Class ARoadIsland **************************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_RoadIsland_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RebuildIslandMesh_Implementation(); \
	DECLARE_FUNCTION(execOnSplineModified); \
	DECLARE_FUNCTION(execEnforceLinearSplinePoints); \
	DECLARE_FUNCTION(execRebuildIslandMesh);


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_RoadIsland_h_25_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ARoadIsland_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ARoadIsland(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_RoadIsland_h_25_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ARoadIsland_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_ARoadIsland(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ARoadIsland, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_ARoadIsland) \
	DECLARE_SERIALIZER(ARoadIsland)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_RoadIsland_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARoadIsland(ARoadIsland&&) = delete; \
	ARoadIsland(const ARoadIsland&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoadIsland); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoadIsland); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARoadIsland) \
	NO_API virtual ~ARoadIsland();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_RoadIsland_h_22_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_RoadIsland_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_RoadIsland_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_RoadIsland_h_25_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_RoadIsland_h_25_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_RoadIsland_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARoadIsland;

// ********** End Class ARoadIsland ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_RoadIsland_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
