// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicRoad/IDynamicRoadRefLineInterface.h"

#ifdef ROADBLDRUNTIME_IDynamicRoadRefLineInterface_generated_h
#error "IDynamicRoadRefLineInterface.generated.h already included, missing '#pragma once' in IDynamicRoadRefLineInterface.h"
#endif
#define ROADBLDRUNTIME_IDynamicRoadRefLineInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UDynamicRoadRefLineInterface *****************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_IDynamicRoadRefLineInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateCurve_Implementation() {}; \
	virtual void RemovePoint_Implementation(int32 Index, bool UpdateCurve) {}; \
	virtual void InsertPoint_Implementation(int32 PointIndex, FVector WorldLocation, ESplinePointType::Type SplinePointType, bool KeepCurve) {}; \
	virtual FVector GetLocationAtInputKey_Implementation(double InputKey, ESplineCoordinateSpace::Type CoordSpace) const { return FVector(ForceInit); }; \
	virtual FVector GetLocationAtDistance_Implementation(double Distance, ESplineCoordinateSpace::Type CoordSpace) const { return FVector(ForceInit); }; \
	virtual FTransform GetTransformAtLocation_Implementation(FVector const& Location, ESplineCoordinateSpace::Type CoordSpace) const { return FTransform(); }; \
	virtual FTransform GetTransformAtInputKey_Implementation(double InputKey, ESplineCoordinateSpace::Type CoordSpace) const { return FTransform(); }; \
	virtual FTransform GetTransformAtDistance_Implementation(double Distance, ESplineCoordinateSpace::Type CoordSpace) const { return FTransform(); }; \
	virtual double GetInputKeyAtLocation_Implementation(FVector const& Location, ESplineCoordinateSpace::Type CoordSpace) const { return 0; }; \
	virtual double GetDistanceAtLocation_Implementation(FVector const& Location, ESplineCoordinateSpace::Type CoordSpace) const { return 0; }; \
	virtual double GetInputKeyAtDistance_Implementation(double Distance) const { return 0; }; \
	virtual double GetDistanceAtInputKey_Implementation(double InputKey) const { return 0; }; \
	virtual bool IsLoop_Implementation() const { return false; }; \
	virtual int32 GetNumberOfSegments_Implementation() const { return 0; }; \
	virtual int32 GetNumberOfPoints_Implementation() const { return 0; }; \
	virtual double GetLength_Implementation() const { return 0; }; \
	DECLARE_FUNCTION(execUpdateCurve); \
	DECLARE_FUNCTION(execRemovePoint); \
	DECLARE_FUNCTION(execInsertPoint); \
	DECLARE_FUNCTION(execGetLocationAtInputKey); \
	DECLARE_FUNCTION(execGetLocationAtDistance); \
	DECLARE_FUNCTION(execGetTransformAtLocation); \
	DECLARE_FUNCTION(execGetTransformAtInputKey); \
	DECLARE_FUNCTION(execGetTransformAtDistance); \
	DECLARE_FUNCTION(execGetInputKeyAtLocation); \
	DECLARE_FUNCTION(execGetDistanceAtLocation); \
	DECLARE_FUNCTION(execGetInputKeyAtDistance); \
	DECLARE_FUNCTION(execGetDistanceAtInputKey); \
	DECLARE_FUNCTION(execIsLoop); \
	DECLARE_FUNCTION(execGetNumberOfSegments); \
	DECLARE_FUNCTION(execGetNumberOfPoints); \
	DECLARE_FUNCTION(execGetLength);


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_IDynamicRoadRefLineInterface_h_12_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UDynamicRoadRefLineInterface_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadRefLineInterface(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_IDynamicRoadRefLineInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ROADBLDRUNTIME_API UDynamicRoadRefLineInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynamicRoadRefLineInterface(UDynamicRoadRefLineInterface&&) = delete; \
	UDynamicRoadRefLineInterface(const UDynamicRoadRefLineInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ROADBLDRUNTIME_API, UDynamicRoadRefLineInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicRoadRefLineInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicRoadRefLineInterface) \
	virtual ~UDynamicRoadRefLineInterface() = default;


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_IDynamicRoadRefLineInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	friend struct ::Z_Construct_UClass_UDynamicRoadRefLineInterface_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_UDynamicRoadRefLineInterface(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UDynamicRoadRefLineInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_UDynamicRoadRefLineInterface) \
	DECLARE_SERIALIZER(UDynamicRoadRefLineInterface)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_IDynamicRoadRefLineInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_IDynamicRoadRefLineInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_IDynamicRoadRefLineInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_IDynamicRoadRefLineInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDynamicRoadRefLineInterface() {} \
public: \
	typedef UDynamicRoadRefLineInterface UClassType; \
	typedef IDynamicRoadRefLineInterface ThisClass; \
	static double Execute_GetDistanceAtInputKey(const UObject* O, double InputKey); \
	static double Execute_GetDistanceAtLocation(const UObject* O, FVector const& Location, ESplineCoordinateSpace::Type CoordSpace); \
	static double Execute_GetInputKeyAtDistance(const UObject* O, double Distance); \
	static double Execute_GetInputKeyAtLocation(const UObject* O, FVector const& Location, ESplineCoordinateSpace::Type CoordSpace); \
	static double Execute_GetLength(const UObject* O); \
	static FVector Execute_GetLocationAtDistance(const UObject* O, double Distance, ESplineCoordinateSpace::Type CoordSpace); \
	static FVector Execute_GetLocationAtInputKey(const UObject* O, double InputKey, ESplineCoordinateSpace::Type CoordSpace); \
	static int32 Execute_GetNumberOfPoints(const UObject* O); \
	static int32 Execute_GetNumberOfSegments(const UObject* O); \
	static FTransform Execute_GetTransformAtDistance(const UObject* O, double Distance, ESplineCoordinateSpace::Type CoordSpace); \
	static FTransform Execute_GetTransformAtInputKey(const UObject* O, double InputKey, ESplineCoordinateSpace::Type CoordSpace); \
	static FTransform Execute_GetTransformAtLocation(const UObject* O, FVector const& Location, ESplineCoordinateSpace::Type CoordSpace); \
	static void Execute_InsertPoint(UObject* O, int32 PointIndex, FVector WorldLocation, ESplinePointType::Type SplinePointType, bool KeepCurve); \
	static bool Execute_IsLoop(const UObject* O); \
	static void Execute_RemovePoint(UObject* O, int32 Index, bool UpdateCurve); \
	static void Execute_UpdateCurve(UObject* O); \
	[[deprecated("Do not call _getUObject(), use Cast.")]] virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_IDynamicRoadRefLineInterface_h_9_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_IDynamicRoadRefLineInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_IDynamicRoadRefLineInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_IDynamicRoadRefLineInterface_h_12_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_IDynamicRoadRefLineInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynamicRoadRefLineInterface;

// ********** End Interface UDynamicRoadRefLineInterface *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_IDynamicRoadRefLineInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
