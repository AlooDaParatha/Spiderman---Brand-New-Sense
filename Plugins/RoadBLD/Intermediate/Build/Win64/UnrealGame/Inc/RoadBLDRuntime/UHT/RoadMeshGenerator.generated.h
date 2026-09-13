// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoadMeshGenerator.h"

#ifdef ROADBLDRUNTIME_RoadMeshGenerator_generated_h
#error "RoadMeshGenerator.generated.h already included, missing '#pragma once' in RoadMeshGenerator.h"
#endif
#define ROADBLDRUNTIME_RoadMeshGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class USplineComponent;
class UStaticMesh;
class UStaticMeshComponent;

// ********** Begin Class URoadDynamicMeshGenerator ************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadMeshGenerator_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetChevronRotationFromSpline); \
	DECLARE_FUNCTION(execGenerateChevronGoreMarkingsToComponent);


struct Z_Construct_UClass_URoadDynamicMeshGenerator_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadDynamicMeshGenerator(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadMeshGenerator_h_43_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URoadDynamicMeshGenerator_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_URoadDynamicMeshGenerator(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URoadDynamicMeshGenerator, UWorldBLDDynamicMeshGenerator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_URoadDynamicMeshGenerator) \
	DECLARE_SERIALIZER(URoadDynamicMeshGenerator)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadMeshGenerator_h_43_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoadDynamicMeshGenerator(URoadDynamicMeshGenerator&&) = delete; \
	URoadDynamicMeshGenerator(const URoadDynamicMeshGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoadDynamicMeshGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoadDynamicMeshGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URoadDynamicMeshGenerator) \
	NO_API virtual ~URoadDynamicMeshGenerator();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadMeshGenerator_h_40_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadMeshGenerator_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadMeshGenerator_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadMeshGenerator_h_43_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadMeshGenerator_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoadDynamicMeshGenerator;

// ********** End Class URoadDynamicMeshGenerator **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadMeshGenerator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
