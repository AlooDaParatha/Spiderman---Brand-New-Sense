// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoadGeo.h"

#ifdef ROADBLDRUNTIME_RoadGeo_generated_h
#error "RoadGeo.generated.h already included, missing '#pragma once' in RoadGeo.h"
#endif
#define ROADBLDRUNTIME_RoadGeo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADynamicRoad;

// ********** Begin ScriptStruct FRoadGeoSidewalkPartitionInterval *********************************
struct Z_Construct_UScriptStruct_FRoadGeoSidewalkPartitionInterval_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadGeoSidewalkPartitionInterval(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadGeo_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRoadGeoSidewalkPartitionInterval_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FRoadGeoSidewalkPartitionInterval(ETypeConstructPhase::Inner); }


struct FRoadGeoSidewalkPartitionInterval;
// ********** End ScriptStruct FRoadGeoSidewalkPartitionInterval ***********************************

// ********** Begin Class ARoadGeo *****************************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadGeo_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSingleSourceRoad);


struct Z_Construct_UClass_ARoadGeo_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ARoadGeo(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadGeo_h_84_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ARoadGeo_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_ARoadGeo(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ARoadGeo, AWorldBLDGeo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_ARoadGeo) \
	DECLARE_SERIALIZER(ARoadGeo) \
	[[deprecated("Do not call _getUObject(), use Cast.")]] virtual UObject* _getUObject() const override { return const_cast<ARoadGeo*>(this); }


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadGeo_h_84_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARoadGeo(ARoadGeo&&) = delete; \
	ARoadGeo(const ARoadGeo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoadGeo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoadGeo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARoadGeo) \
	NO_API virtual ~ARoadGeo();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadGeo_h_81_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadGeo_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadGeo_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadGeo_h_84_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadGeo_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARoadGeo;

// ********** End Class ARoadGeo *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadGeo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
