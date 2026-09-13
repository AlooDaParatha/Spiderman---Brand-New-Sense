// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Crossing.h"

#ifdef ROADBLDRUNTIME_Crossing_generated_h
#error "Crossing.generated.h already included, missing '#pragma once' in Crossing.h"
#endif
#define ROADBLDRUNTIME_Crossing_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACrossing ****************************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_Crossing_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RebuildCrossing_Implementation(); \
	DECLARE_FUNCTION(execRebuildCrossing);


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_Crossing_h_31_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ACrossing_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ACrossing(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_Crossing_h_31_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ACrossing_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_ACrossing(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ACrossing, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_ACrossing) \
	DECLARE_SERIALIZER(ACrossing)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_Crossing_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACrossing(ACrossing&&) = delete; \
	ACrossing(const ACrossing&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACrossing); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACrossing); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACrossing) \
	NO_API virtual ~ACrossing();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_Crossing_h_28_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_Crossing_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_Crossing_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_Crossing_h_31_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_Crossing_h_31_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_Crossing_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACrossing;

// ********** End Class ACrossing ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_Crossing_h

// ********** Begin Enum EMarkingRotation **********************************************************
#define FOREACH_ENUM_EMARKINGROTATION(op) \
	op(EMarkingRotation::StreetAligned) \
	op(EMarkingRotation::CrossingAligned) 

enum class EMarkingRotation : uint8;
template<> struct TIsUEnumClass<EMarkingRotation> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EMarkingRotation>();
// ********** End Enum EMarkingRotation ************************************************************

// ********** Begin Enum EMarkingPlacement *********************************************************
#define FOREACH_ENUM_EMARKINGPLACEMENT(op) \
	op(EMarkingPlacement::EvenSpacing) \
	op(EMarkingPlacement::StretchToFit) 

enum class EMarkingPlacement : uint8;
template<> struct TIsUEnumClass<EMarkingPlacement> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EMarkingPlacement>();
// ********** End Enum EMarkingPlacement ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
