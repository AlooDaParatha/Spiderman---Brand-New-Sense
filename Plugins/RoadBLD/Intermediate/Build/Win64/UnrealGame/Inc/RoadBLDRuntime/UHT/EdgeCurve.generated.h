// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicRoad/EdgeCurve.h"

#ifdef ROADBLDRUNTIME_EdgeCurve_generated_h
#error "EdgeCurve.generated.h already included, missing '#pragma once' in EdgeCurve.h"
#endif
#define ROADBLDRUNTIME_EdgeCurve_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLaneMarkingSegment ***********************************************
struct Z_Construct_UScriptStruct_FLaneMarkingSegment_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FLaneMarkingSegment(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_EdgeCurve_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLaneMarkingSegment_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FLaneMarkingSegment(ETypeConstructPhase::Inner); }


struct FLaneMarkingSegment;
// ********** End ScriptStruct FLaneMarkingSegment *************************************************

// ********** Begin Class UEdgeCurve ***************************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_EdgeCurve_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDebugVisualizeOffsetPoints); \
	DECLARE_FUNCTION(execSortOffsetPointsByDistance); \
	DECLARE_FUNCTION(execGetSide);


struct Z_Construct_UClass_UEdgeCurve_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UEdgeCurve(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_EdgeCurve_h_41_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UEdgeCurve_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_UEdgeCurve(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UEdgeCurve, UCurveObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_UEdgeCurve) \
	DECLARE_SERIALIZER(UEdgeCurve)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_EdgeCurve_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEdgeCurve(UEdgeCurve&&) = delete; \
	UEdgeCurve(const UEdgeCurve&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEdgeCurve); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdgeCurve); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEdgeCurve) \
	NO_API virtual ~UEdgeCurve();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_EdgeCurve_h_38_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_EdgeCurve_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_EdgeCurve_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_EdgeCurve_h_41_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_EdgeCurve_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEdgeCurve;

// ********** End Class UEdgeCurve *****************************************************************

// ********** Begin Class UReferenceLine ***********************************************************
struct Z_Construct_UClass_UReferenceLine_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UReferenceLine(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_EdgeCurve_h_108_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UReferenceLine_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_UReferenceLine(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UReferenceLine, UCurveObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_UReferenceLine) \
	DECLARE_SERIALIZER(UReferenceLine)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_EdgeCurve_h_108_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReferenceLine(UReferenceLine&&) = delete; \
	UReferenceLine(const UReferenceLine&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReferenceLine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReferenceLine); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UReferenceLine) \
	NO_API virtual ~UReferenceLine();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_EdgeCurve_h_105_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_EdgeCurve_h_108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_EdgeCurve_h_108_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_EdgeCurve_h_108_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReferenceLine;

// ********** End Class UReferenceLine *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_EdgeCurve_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
