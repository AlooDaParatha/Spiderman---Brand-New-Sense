// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicRoad/ClothoidCurve.h"

#ifdef ROADBLDRUNTIME_ClothoidCurve_generated_h
#error "ClothoidCurve.generated.h already included, missing '#pragma once' in ClothoidCurve.h"
#endif
#define ROADBLDRUNTIME_ClothoidCurve_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCurveObject;
class UEdgeCurve;
struct FClothoidPolyline;
struct FCurveIntersectionResult;

// ********** Begin ScriptStruct FOffsetPoint ******************************************************
struct Z_Construct_UScriptStruct_FOffsetPoint_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FOffsetPoint(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidCurve_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOffsetPoint_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FOffsetPoint(ETypeConstructPhase::Inner); }


struct FOffsetPoint;
// ********** End ScriptStruct FOffsetPoint ********************************************************

// ********** Begin ScriptStruct FRoadNetworkCorner ************************************************
struct Z_Construct_UScriptStruct_FRoadNetworkCorner_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadNetworkCorner(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidCurve_h_169_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRoadNetworkCorner_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FRoadNetworkCorner(ETypeConstructPhase::Inner); }


struct FRoadNetworkCorner;
// ********** End ScriptStruct FRoadNetworkCorner **************************************************

// ********** Begin ScriptStruct FPolylinePoint ****************************************************
struct Z_Construct_UScriptStruct_FPolylinePoint_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPolylinePoint(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidCurve_h_250_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPolylinePoint_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FPolylinePoint(ETypeConstructPhase::Inner); }


struct FPolylinePoint;
// ********** End ScriptStruct FPolylinePoint ******************************************************

// ********** Begin ScriptStruct FCurveSection *****************************************************
struct Z_Construct_UScriptStruct_FCurveSection_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCurveSection(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidCurve_h_277_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCurveSection_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FCurveSection(ETypeConstructPhase::Inner); }


struct FCurveSection;
// ********** End ScriptStruct FCurveSection *******************************************************

// ********** Begin ScriptStruct FCurveIntersectionResult ******************************************
struct Z_Construct_UScriptStruct_FCurveIntersectionResult_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCurveIntersectionResult(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidCurve_h_317_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCurveIntersectionResult_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FCurveIntersectionResult(ETypeConstructPhase::Inner); }


struct FCurveIntersectionResult;
// ********** End ScriptStruct FCurveIntersectionResult ********************************************

// ********** Begin ScriptStruct FClothoidPolyline *************************************************
struct Z_Construct_UScriptStruct_FClothoidPolyline_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FClothoidPolyline(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidCurve_h_342_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FClothoidPolyline_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FClothoidPolyline(ETypeConstructPhase::Inner); }


struct FClothoidPolyline;
// ********** End ScriptStruct FClothoidPolyline ***************************************************

// ********** Begin Class UCurveObject *************************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidCurve_h_673_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurveIntersections); \
	DECLARE_FUNCTION(execCreateCurveFromPoints); \
	DECLARE_FUNCTION(execCalculateCurveSections); \
	DECLARE_FUNCTION(execCalculateStandalonePolyline); \
	DECLARE_FUNCTION(execGetAllIntersectionsWith); \
	DECLARE_FUNCTION(execIntersectsWith); \
	DECLARE_FUNCTION(execGetCurveLength); \
	DECLARE_FUNCTION(execGetOffsetAtDistance); \
	DECLARE_FUNCTION(execGetRightVectorAtDistance); \
	DECLARE_FUNCTION(execFindBestDistanceAndOffset); \
	DECLARE_FUNCTION(execGetDistanceAndOffsetAlongPolylineAtLocation); \
	DECLARE_FUNCTION(execGet3DPositionAtDistance);


struct Z_Construct_UClass_UCurveObject_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UCurveObject(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidCurve_h_673_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UCurveObject_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_UCurveObject(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCurveObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_UCurveObject) \
	DECLARE_SERIALIZER(UCurveObject)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidCurve_h_673_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCurveObject(UCurveObject&&) = delete; \
	UCurveObject(const UCurveObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCurveObject) \
	NO_API virtual ~UCurveObject();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidCurve_h_670_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidCurve_h_673_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidCurve_h_673_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidCurve_h_673_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidCurve_h_673_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCurveObject;

// ********** End Class UCurveObject ***************************************************************

// ********** Begin Class UCornerCurve *************************************************************
struct Z_Construct_UClass_UCornerCurve_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UCornerCurve(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidCurve_h_862_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UCornerCurve_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_UCornerCurve(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCornerCurve, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_UCornerCurve) \
	DECLARE_SERIALIZER(UCornerCurve)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidCurve_h_862_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCornerCurve(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCornerCurve(UCornerCurve&&) = delete; \
	UCornerCurve(const UCornerCurve&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCornerCurve); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCornerCurve); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCornerCurve) \
	NO_API virtual ~UCornerCurve();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidCurve_h_859_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidCurve_h_862_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidCurve_h_862_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidCurve_h_862_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCornerCurve;

// ********** End Class UCornerCurve ***************************************************************

// ********** Begin Class UCurveUtils **************************************************************
struct Z_Construct_UClass_UCurveUtils_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UCurveUtils(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidCurve_h_880_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UCurveUtils_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_UCurveUtils(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCurveUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_UCurveUtils) \
	DECLARE_SERIALIZER(UCurveUtils)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidCurve_h_880_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCurveUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCurveUtils(UCurveUtils&&) = delete; \
	UCurveUtils(const UCurveUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveUtils) \
	NO_API virtual ~UCurveUtils();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidCurve_h_877_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidCurve_h_880_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidCurve_h_880_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidCurve_h_880_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCurveUtils;

// ********** End Class UCurveUtils ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidCurve_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
