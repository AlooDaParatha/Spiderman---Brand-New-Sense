// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintLibraries/TwinBLDMapUtilsLibrary.h"

#ifdef TWINBLDEDITOR_TwinBLDMapUtilsLibrary_generated_h
#error "TwinBLDMapUtilsLibrary.generated.h already included, missing '#pragma once' in TwinBLDMapUtilsLibrary.h"
#endif
#define TWINBLDEDITOR_TwinBLDMapUtilsLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;

// ********** Begin Class UTwinBLDMapUtilsLibrary **************************************************
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_BlueprintLibraries_TwinBLDMapUtilsLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOpenLocalOSMImporter); \
	DECLARE_FUNCTION(execDetectBuildingFacadesSmart); \
	DECLARE_FUNCTION(execSnapRoadsToLandscape); \
	DECLARE_FUNCTION(execSnapBuildingsToLandscape); \
	DECLARE_FUNCTION(execValidateBLDRAndOpenAIKey);


struct Z_Construct_UClass_UTwinBLDMapUtilsLibrary_Statics;
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDMapUtilsLibrary(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_BlueprintLibraries_TwinBLDMapUtilsLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UTwinBLDMapUtilsLibrary_Statics; \
	friend TWINBLDEDITOR_API UClass* ::Z_Construct_UClass_UTwinBLDMapUtilsLibrary(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UTwinBLDMapUtilsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwinBLDEditor"), Z_Construct_UClass_UTwinBLDMapUtilsLibrary) \
	DECLARE_SERIALIZER(UTwinBLDMapUtilsLibrary)


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_BlueprintLibraries_TwinBLDMapUtilsLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTwinBLDMapUtilsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTwinBLDMapUtilsLibrary(UTwinBLDMapUtilsLibrary&&) = delete; \
	UTwinBLDMapUtilsLibrary(const UTwinBLDMapUtilsLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwinBLDMapUtilsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwinBLDMapUtilsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTwinBLDMapUtilsLibrary) \
	NO_API virtual ~UTwinBLDMapUtilsLibrary();


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_BlueprintLibraries_TwinBLDMapUtilsLibrary_h_14_PROLOG
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_BlueprintLibraries_TwinBLDMapUtilsLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_BlueprintLibraries_TwinBLDMapUtilsLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_BlueprintLibraries_TwinBLDMapUtilsLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_BlueprintLibraries_TwinBLDMapUtilsLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTwinBLDMapUtilsLibrary;

// ********** End Class UTwinBLDMapUtilsLibrary ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_BlueprintLibraries_TwinBLDMapUtilsLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
