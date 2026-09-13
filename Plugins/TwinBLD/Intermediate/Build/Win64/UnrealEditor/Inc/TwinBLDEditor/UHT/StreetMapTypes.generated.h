// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StreetMap/StreetMapTypes.h"

#ifdef TWINBLDEDITOR_StreetMapTypes_generated_h
#error "StreetMapTypes.generated.h already included, missing '#pragma once' in StreetMapTypes.h"
#endif
#define TWINBLDEDITOR_StreetMapTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FStreetMapVertex **************************************************
struct Z_Construct_UScriptStruct_FStreetMapVertex_Statics;
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapVertex(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapTypes_h_128_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FStreetMapVertex_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FStreetMapVertex(ETypeConstructPhase::Inner); }


struct FStreetMapVertex;
// ********** End ScriptStruct FStreetMapVertex ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapTypes_h

// ********** Begin Enum EOSMWayType ***************************************************************
#define FOREACH_ENUM_EOSMWAYTYPE(op) \
	op(EOSMWayType::Motorway) \
	op(EOSMWayType::Motorway_Link) \
	op(EOSMWayType::Trunk) \
	op(EOSMWayType::Trunk_Link) \
	op(EOSMWayType::Primary) \
	op(EOSMWayType::Primary_Link) \
	op(EOSMWayType::Secondary) \
	op(EOSMWayType::Secondary_Link) \
	op(EOSMWayType::Tertiary) \
	op(EOSMWayType::Tertiary_Link) \
	op(EOSMWayType::Residential) \
	op(EOSMWayType::Service) \
	op(EOSMWayType::Unclassified) \
	op(EOSMWayType::Living_Street) \
	op(EOSMWayType::Pedestrian) \
	op(EOSMWayType::Track) \
	op(EOSMWayType::Bus_Guideway) \
	op(EOSMWayType::Raceway) \
	op(EOSMWayType::Road) \
	op(EOSMWayType::Footway) \
	op(EOSMWayType::Cycleway) \
	op(EOSMWayType::Bridleway) \
	op(EOSMWayType::Steps) \
	op(EOSMWayType::Path) \
	op(EOSMWayType::Proposed) \
	op(EOSMWayType::Construction) \
	op(EOSMWayType::Building) \
	op(EOSMWayType::Other) 

enum class EOSMWayType : uint8;
template<> struct TIsUEnumClass<EOSMWayType> { enum { Value = true }; };
template<> UE_NODEBUG TWINBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EOSMWayType>();
// ********** End Enum EOSMWayType *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
