// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoadControlSplineComponent.h"

#ifdef ROADBLDRUNTIME_RoadControlSplineComponent_generated_h
#error "RoadControlSplineComponent.generated.h already included, missing '#pragma once' in RoadControlSplineComponent.h"
#endif
#define ROADBLDRUNTIME_RoadControlSplineComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USplineComponent;

// ********** Begin Class URoadControlSplineComponent **********************************************
struct Z_Construct_UClass_URoadControlSplineComponent_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadControlSplineComponent(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadControlSplineComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URoadControlSplineComponent_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_URoadControlSplineComponent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URoadControlSplineComponent, USplineComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_URoadControlSplineComponent) \
	DECLARE_SERIALIZER(URoadControlSplineComponent) \
	[[deprecated("Do not call _getUObject(), use Cast.")]] virtual UObject* _getUObject() const override { return const_cast<URoadControlSplineComponent*>(this); }


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadControlSplineComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoadControlSplineComponent(URoadControlSplineComponent&&) = delete; \
	URoadControlSplineComponent(const URoadControlSplineComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoadControlSplineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoadControlSplineComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoadControlSplineComponent) \
	NO_API virtual ~URoadControlSplineComponent();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadControlSplineComponent_h_15_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadControlSplineComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadControlSplineComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadControlSplineComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoadControlSplineComponent;

// ********** End Class URoadControlSplineComponent ************************************************

// ********** Begin ScriptStruct FRoadControlSplinePointData ***************************************
struct Z_Construct_UScriptStruct_FRoadControlSplinePointData_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadControlSplinePointData(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadControlSplineComponent_h_67_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRoadControlSplinePointData_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FRoadControlSplinePointData(ETypeConstructPhase::Inner); }


struct FRoadControlSplinePointData;
// ********** End ScriptStruct FRoadControlSplinePointData *****************************************

// ********** Begin Class URoadControlSplineMetadata ***********************************************
struct Z_Construct_UClass_URoadControlSplineMetadata_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadControlSplineMetadata(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadControlSplineComponent_h_105_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URoadControlSplineMetadata_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_URoadControlSplineMetadata(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URoadControlSplineMetadata, USplineMetadata, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_URoadControlSplineMetadata) \
	DECLARE_SERIALIZER(URoadControlSplineMetadata)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadControlSplineComponent_h_105_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoadControlSplineMetadata(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoadControlSplineMetadata(URoadControlSplineMetadata&&) = delete; \
	URoadControlSplineMetadata(const URoadControlSplineMetadata&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoadControlSplineMetadata); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoadControlSplineMetadata); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoadControlSplineMetadata) \
	NO_API virtual ~URoadControlSplineMetadata();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadControlSplineComponent_h_102_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadControlSplineComponent_h_105_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadControlSplineComponent_h_105_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadControlSplineComponent_h_105_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoadControlSplineMetadata;

// ********** End Class URoadControlSplineMetadata *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadControlSplineComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
