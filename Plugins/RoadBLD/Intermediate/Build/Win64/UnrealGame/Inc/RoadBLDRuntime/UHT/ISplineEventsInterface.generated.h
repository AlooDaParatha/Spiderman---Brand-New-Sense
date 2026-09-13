// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicRoad/ISplineEventsInterface.h"

#ifdef ROADBLDRUNTIME_ISplineEventsInterface_generated_h
#error "ISplineEventsInterface.generated.h already included, missing '#pragma once' in ISplineEventsInterface.h"
#endif
#define ROADBLDRUNTIME_ISplineEventsInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USplineComponent;
class USplineMetadata;

// ********** Begin Interface USplineEventsInterface ***********************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_ISplineEventsInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnFixup_Implementation(int32 NumPoints, USplineComponent* SplineComp) {}; \
	virtual void OnReset_Implementation(int32 NumPoints) {}; \
	virtual void OnCopyPoint_Implementation(const USplineMetadata* FromSplineMetadata, int32 FromIndex, int32 ToIndex) {}; \
	virtual void OnDuplicatePoint_Implementation(int32 Index) {}; \
	virtual void OnRemovePoint_Implementation(int32 Index) {}; \
	virtual void OnAddPoint_Implementation(float InputKey) {}; \
	virtual void OnUpdatePoint_Implementation(int32 Index, float t, bool bClosedLoop) {}; \
	virtual void OnInsertPoint_Implementation(int32 Index, float t, bool bClosedLoop) {}; \
	DECLARE_FUNCTION(execOnFixup); \
	DECLARE_FUNCTION(execOnReset); \
	DECLARE_FUNCTION(execOnCopyPoint); \
	DECLARE_FUNCTION(execOnDuplicatePoint); \
	DECLARE_FUNCTION(execOnRemovePoint); \
	DECLARE_FUNCTION(execOnAddPoint); \
	DECLARE_FUNCTION(execOnUpdatePoint); \
	DECLARE_FUNCTION(execOnInsertPoint);


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_ISplineEventsInterface_h_15_CALLBACK_WRAPPERS
struct Z_Construct_UClass_USplineEventsInterface_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_USplineEventsInterface(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_ISplineEventsInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ROADBLDRUNTIME_API USplineEventsInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USplineEventsInterface(USplineEventsInterface&&) = delete; \
	USplineEventsInterface(const USplineEventsInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ROADBLDRUNTIME_API, USplineEventsInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineEventsInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineEventsInterface) \
	virtual ~USplineEventsInterface() = default;


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_ISplineEventsInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	friend struct ::Z_Construct_UClass_USplineEventsInterface_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_USplineEventsInterface(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(USplineEventsInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_USplineEventsInterface) \
	DECLARE_SERIALIZER(USplineEventsInterface)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_ISplineEventsInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_ISplineEventsInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_ISplineEventsInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_ISplineEventsInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISplineEventsInterface() {} \
public: \
	typedef USplineEventsInterface UClassType; \
	typedef ISplineEventsInterface ThisClass; \
	static void Execute_OnAddPoint(UObject* O, float InputKey); \
	static void Execute_OnCopyPoint(UObject* O, const USplineMetadata* FromSplineMetadata, int32 FromIndex, int32 ToIndex); \
	static void Execute_OnDuplicatePoint(UObject* O, int32 Index); \
	static void Execute_OnFixup(UObject* O, int32 NumPoints, USplineComponent* SplineComp); \
	static void Execute_OnInsertPoint(UObject* O, int32 Index, float t, bool bClosedLoop); \
	static void Execute_OnRemovePoint(UObject* O, int32 Index); \
	static void Execute_OnReset(UObject* O, int32 NumPoints); \
	static void Execute_OnUpdatePoint(UObject* O, int32 Index, float t, bool bClosedLoop); \
	[[deprecated("Do not call _getUObject(), use Cast.")]] virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_ISplineEventsInterface_h_12_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_ISplineEventsInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_ISplineEventsInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_ISplineEventsInterface_h_15_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_ISplineEventsInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USplineEventsInterface;

// ********** End Interface USplineEventsInterface *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_ISplineEventsInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
