// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicRoad/DynamicRoadMarking.h"

#ifdef ROADBLDRUNTIME_DynamicRoadMarking_generated_h
#error "DynamicRoadMarking.generated.h already included, missing '#pragma once' in DynamicRoadMarking.h"
#endif
#define ROADBLDRUNTIME_DynamicRoadMarking_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADynamicRoad;

// ********** Begin Class UDynamicRoadMarking ******************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadMarking_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRoad);


struct Z_Construct_UClass_UDynamicRoadMarking_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadMarking(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadMarking_h_16_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UDynamicRoadMarking_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_UDynamicRoadMarking(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UDynamicRoadMarking, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_UDynamicRoadMarking) \
	DECLARE_SERIALIZER(UDynamicRoadMarking)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadMarking_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicRoadMarking(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynamicRoadMarking(UDynamicRoadMarking&&) = delete; \
	UDynamicRoadMarking(const UDynamicRoadMarking&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicRoadMarking); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicRoadMarking); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicRoadMarking) \
	NO_API virtual ~UDynamicRoadMarking();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadMarking_h_13_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadMarking_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadMarking_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadMarking_h_16_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadMarking_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynamicRoadMarking;

// ********** End Class UDynamicRoadMarking ********************************************************

// ********** Begin ScriptStruct FRoadMarkingControlPoint ******************************************
struct Z_Construct_UScriptStruct_FRoadMarkingControlPoint_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadMarkingControlPoint(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadMarking_h_89_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRoadMarkingControlPoint_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FRoadMarkingControlPoint(ETypeConstructPhase::Inner); }


struct FRoadMarkingControlPoint;
// ********** End ScriptStruct FRoadMarkingControlPoint ********************************************

// ********** Begin Class URoadMarkingLine *********************************************************
struct Z_Construct_UClass_URoadMarkingLine_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadMarkingLine(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadMarking_h_158_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URoadMarkingLine_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_URoadMarkingLine(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URoadMarkingLine, UDynamicRoadMarking, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_URoadMarkingLine) \
	DECLARE_SERIALIZER(URoadMarkingLine)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadMarking_h_158_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoadMarkingLine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoadMarkingLine(URoadMarkingLine&&) = delete; \
	URoadMarkingLine(const URoadMarkingLine&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoadMarkingLine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoadMarkingLine); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoadMarkingLine) \
	NO_API virtual ~URoadMarkingLine();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadMarking_h_155_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadMarking_h_158_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadMarking_h_158_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadMarking_h_158_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoadMarkingLine;

// ********** End Class URoadMarkingLine ***********************************************************

// ********** Begin Class URoadMarkingShape ********************************************************
struct Z_Construct_UClass_URoadMarkingShape_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadMarkingShape(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadMarking_h_227_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URoadMarkingShape_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_URoadMarkingShape(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URoadMarkingShape, UDynamicRoadMarking, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_URoadMarkingShape) \
	DECLARE_SERIALIZER(URoadMarkingShape)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadMarking_h_227_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoadMarkingShape(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoadMarkingShape(URoadMarkingShape&&) = delete; \
	URoadMarkingShape(const URoadMarkingShape&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoadMarkingShape); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoadMarkingShape); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoadMarkingShape) \
	NO_API virtual ~URoadMarkingShape();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadMarking_h_224_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadMarking_h_227_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadMarking_h_227_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadMarking_h_227_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoadMarkingShape;

// ********** End Class URoadMarkingShape **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadMarking_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
