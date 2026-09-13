// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicRoad/CustomRoadShape.h"

#ifdef ROADBLDRUNTIME_CustomRoadShape_generated_h
#error "CustomRoadShape.generated.h already included, missing '#pragma once' in CustomRoadShape.h"
#endif
#define ROADBLDRUNTIME_CustomRoadShape_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCustomRoadShapeSegment *******************************************
struct Z_Construct_UScriptStruct_FCustomRoadShapeSegment_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCustomRoadShapeSegment(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_CustomRoadShape_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomRoadShapeSegment_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FCustomRoadShapeSegment(ETypeConstructPhase::Inner); }


struct FCustomRoadShapeSegment;
// ********** End ScriptStruct FCustomRoadShapeSegment *********************************************

// ********** Begin ScriptStruct FCustomRoadShapeSegmentModuleList *********************************
struct Z_Construct_UScriptStruct_FCustomRoadShapeSegmentModuleList_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCustomRoadShapeSegmentModuleList(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_CustomRoadShape_h_51_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomRoadShapeSegmentModuleList_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FCustomRoadShapeSegmentModuleList(ETypeConstructPhase::Inner); }


struct FCustomRoadShapeSegmentModuleList;
// ********** End ScriptStruct FCustomRoadShapeSegmentModuleList ***********************************

// ********** Begin ScriptStruct FCustomRoadShapeDebugAttribute ************************************
struct Z_Construct_UScriptStruct_FCustomRoadShapeDebugAttribute_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCustomRoadShapeDebugAttribute(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_CustomRoadShape_h_60_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomRoadShapeDebugAttribute_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FCustomRoadShapeDebugAttribute(ETypeConstructPhase::Inner); }


struct FCustomRoadShapeDebugAttribute;
// ********** End ScriptStruct FCustomRoadShapeDebugAttribute **************************************

// ********** Begin ScriptStruct FCustomRoadShapeDebugVertex ***************************************
struct Z_Construct_UScriptStruct_FCustomRoadShapeDebugVertex_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCustomRoadShapeDebugVertex(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_CustomRoadShape_h_72_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomRoadShapeDebugVertex_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FCustomRoadShapeDebugVertex(ETypeConstructPhase::Inner); }


struct FCustomRoadShapeDebugVertex;
// ********** End ScriptStruct FCustomRoadShapeDebugVertex *****************************************

// ********** Begin Class ACustomRoadShape *********************************************************
struct Z_Construct_UClass_ACustomRoadShape_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ACustomRoadShape(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_CustomRoadShape_h_108_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ACustomRoadShape_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_ACustomRoadShape(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ACustomRoadShape, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_ACustomRoadShape) \
	DECLARE_SERIALIZER(ACustomRoadShape)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_CustomRoadShape_h_108_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACustomRoadShape(ACustomRoadShape&&) = delete; \
	ACustomRoadShape(const ACustomRoadShape&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomRoadShape); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomRoadShape); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACustomRoadShape) \
	NO_API virtual ~ACustomRoadShape();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_CustomRoadShape_h_105_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_CustomRoadShape_h_108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_CustomRoadShape_h_108_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_CustomRoadShape_h_108_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACustomRoadShape;

// ********** End Class ACustomRoadShape ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_CustomRoadShape_h

// ********** Begin Enum ECustomShapeSegmentType ***************************************************
#define FOREACH_ENUM_ECUSTOMSHAPESEGMENTTYPE(op) \
	op(ECustomShapeSegmentType::Edge) \
	op(ECustomShapeSegmentType::Cut) 

enum class ECustomShapeSegmentType : uint8;
template<> struct TIsUEnumClass<ECustomShapeSegmentType> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ECustomShapeSegmentType>();
// ********** End Enum ECustomShapeSegmentType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
