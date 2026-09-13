// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicRoad/Store/RoadNetworkChevronTypes.h"

#ifdef ROADBLDRUNTIME_RoadNetworkChevronTypes_generated_h
#error "RoadNetworkChevronTypes.generated.h already included, missing '#pragma once' in RoadNetworkChevronTypes.h"
#endif
#define ROADBLDRUNTIME_RoadNetworkChevronTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChevronBoundaryAttachment ****************************************
struct Z_Construct_UScriptStruct_FChevronBoundaryAttachment_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChevronBoundaryAttachment(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_Store_RoadNetworkChevronTypes_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChevronBoundaryAttachment_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FChevronBoundaryAttachment(ETypeConstructPhase::Inner); }


struct FChevronBoundaryAttachment;
// ********** End ScriptStruct FChevronBoundaryAttachment ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_Store_RoadNetworkChevronTypes_h

// ********** Begin Enum EChevronAuthoringMode *****************************************************
#define FOREACH_ENUM_ECHEVRONAUTHORINGMODE(op) \
	op(EChevronAuthoringMode::Corner) \
	op(EChevronAuthoringMode::Freehand) 

enum class EChevronAuthoringMode : uint8;
template<> struct TIsUEnumClass<EChevronAuthoringMode> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EChevronAuthoringMode>();
// ********** End Enum EChevronAuthoringMode *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
