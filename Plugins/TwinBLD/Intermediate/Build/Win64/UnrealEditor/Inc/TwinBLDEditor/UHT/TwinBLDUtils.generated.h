// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TwinBLDUtils.h"

#ifdef TWINBLDEDITOR_TwinBLDUtils_generated_h
#error "TwinBLDUtils.generated.h already included, missing '#pragma once' in TwinBLDUtils.h"
#endif
#define TWINBLDEDITOR_TwinBLDUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UClass;
struct FProjParameters;

// ********** Begin Class UTwinBLDUtils ************************************************************
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDUtils_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConvert2dTo3d); \
	DECLARE_FUNCTION(execGetProjectProjParameters); \
	DECLARE_FUNCTION(execBoundsToMeters); \
	DECLARE_FUNCTION(execGetBoxCenter); \
	DECLARE_FUNCTION(execRectToBox); \
	DECLARE_FUNCTION(execRectToBox2); \
	DECLARE_FUNCTION(execBox2ToRect); \
	DECLARE_FUNCTION(execDestroyActorsOfClass); \
	DECLARE_FUNCTION(execTransformCoordinatesBounds); \
	DECLARE_FUNCTION(execTransformCoordinatesPoint);


struct Z_Construct_UClass_UTwinBLDUtils_Statics;
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDUtils(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDUtils_h_15_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UTwinBLDUtils_Statics; \
	friend TWINBLDEDITOR_API UClass* ::Z_Construct_UClass_UTwinBLDUtils(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UTwinBLDUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwinBLDEditor"), Z_Construct_UClass_UTwinBLDUtils) \
	DECLARE_SERIALIZER(UTwinBLDUtils)


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDUtils_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTwinBLDUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTwinBLDUtils(UTwinBLDUtils&&) = delete; \
	UTwinBLDUtils(const UTwinBLDUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwinBLDUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwinBLDUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTwinBLDUtils) \
	NO_API virtual ~UTwinBLDUtils();


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDUtils_h_12_PROLOG
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDUtils_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDUtils_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDUtils_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDUtils_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTwinBLDUtils;

// ********** End Class UTwinBLDUtils **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
