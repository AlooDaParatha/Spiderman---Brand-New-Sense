// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DrivewayComponent.h"

#ifdef ROADBLDRUNTIME_DrivewayComponent_generated_h
#error "DrivewayComponent.generated.h already included, missing '#pragma once' in DrivewayComponent.h"
#endif
#define ROADBLDRUNTIME_DrivewayComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDrivewayComponent *******************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DrivewayComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearDriveway); \
	DECLARE_FUNCTION(execBuildDriveway);


struct Z_Construct_UClass_UDrivewayComponent_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDrivewayComponent(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DrivewayComponent_h_35_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UDrivewayComponent_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_UDrivewayComponent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UDrivewayComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_UDrivewayComponent) \
	DECLARE_SERIALIZER(UDrivewayComponent)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DrivewayComponent_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDrivewayComponent(UDrivewayComponent&&) = delete; \
	UDrivewayComponent(const UDrivewayComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDrivewayComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDrivewayComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDrivewayComponent) \
	NO_API virtual ~UDrivewayComponent();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DrivewayComponent_h_32_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DrivewayComponent_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DrivewayComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DrivewayComponent_h_35_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DrivewayComponent_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDrivewayComponent;

// ********** End Class UDrivewayComponent *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DrivewayComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
