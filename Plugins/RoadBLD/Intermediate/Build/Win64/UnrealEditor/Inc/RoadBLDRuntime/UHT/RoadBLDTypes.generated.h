// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoadBLDTypes.h"

#ifdef ROADBLDRUNTIME_RoadBLDTypes_generated_h
#error "RoadBLDTypes.generated.h already included, missing '#pragma once' in RoadBLDTypes.h"
#endif
#define ROADBLDRUNTIME_RoadBLDTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSpawnModuleDesc **************************************************
struct Z_Construct_UScriptStruct_FSpawnModuleDesc_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnModuleDesc(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadBLDTypes_h_58_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSpawnModuleDesc_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FSpawnModuleDesc(ETypeConstructPhase::Inner); }


struct FSpawnModuleDesc;
// ********** End ScriptStruct FSpawnModuleDesc ****************************************************

// ********** Begin ScriptStruct FRoadSnap *********************************************************
struct Z_Construct_UScriptStruct_FRoadSnap_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadSnap(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadBLDTypes_h_75_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRoadSnap_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FRoadSnap(ETypeConstructPhase::Inner); }


struct FRoadSnap;
// ********** End ScriptStruct FRoadSnap ***********************************************************

// ********** Begin ScriptStruct FRoadEndpointLink *************************************************
struct Z_Construct_UScriptStruct_FRoadEndpointLink_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadEndpointLink(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadBLDTypes_h_87_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRoadEndpointLink_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FRoadEndpointLink(ETypeConstructPhase::Inner); }


struct FRoadEndpointLink;
// ********** End ScriptStruct FRoadEndpointLink ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadBLDTypes_h

// ********** Begin Enum ERoadModulePosition *******************************************************
#define FOREACH_ENUM_EROADMODULEPOSITION(op) \
	op(ERoadModulePosition::Left) \
	op(ERoadModulePosition::Right) \
	op(ERoadModulePosition::Center) \
	op(ERoadModulePosition::SidewalkLeft) \
	op(ERoadModulePosition::SidewalkRight) 

enum class ERoadModulePosition : uint8;
template<> struct TIsUEnumClass<ERoadModulePosition> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ERoadModulePosition>();
// ********** End Enum ERoadModulePosition *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
