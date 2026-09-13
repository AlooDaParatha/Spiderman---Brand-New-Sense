// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoadPresetThumbnailGenerator.h"

#ifdef ROADBLDEDITORTOOLKIT_RoadPresetThumbnailGenerator_generated_h
#error "RoadPresetThumbnailGenerator.generated.h already included, missing '#pragma once' in RoadPresetThumbnailGenerator.h"
#endif
#define ROADBLDEDITORTOOLKIT_RoadPresetThumbnailGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UDynamicRoadDrawPreset;
class UTexture2D;

// ********** Begin Class URoadPresetThumbnailGenerator ********************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadPresetThumbnailGenerator_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerateThumbnailsForAllPresets); \
	DECLARE_FUNCTION(execCaptureViewportThumbnailForPreset); \
	DECLARE_FUNCTION(execGenerateThumbnailForPreset);


struct Z_Construct_UClass_URoadPresetThumbnailGenerator_Statics;
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadPresetThumbnailGenerator(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadPresetThumbnailGenerator_h_19_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URoadPresetThumbnailGenerator_Statics; \
	friend ROADBLDEDITORTOOLKIT_API UClass* ::Z_Construct_UClass_URoadPresetThumbnailGenerator(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URoadPresetThumbnailGenerator, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDEditorToolkit"), Z_Construct_UClass_URoadPresetThumbnailGenerator) \
	DECLARE_SERIALIZER(URoadPresetThumbnailGenerator)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadPresetThumbnailGenerator_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoadPresetThumbnailGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoadPresetThumbnailGenerator(URoadPresetThumbnailGenerator&&) = delete; \
	URoadPresetThumbnailGenerator(const URoadPresetThumbnailGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoadPresetThumbnailGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoadPresetThumbnailGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoadPresetThumbnailGenerator) \
	NO_API virtual ~URoadPresetThumbnailGenerator();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadPresetThumbnailGenerator_h_16_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadPresetThumbnailGenerator_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadPresetThumbnailGenerator_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadPresetThumbnailGenerator_h_19_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadPresetThumbnailGenerator_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoadPresetThumbnailGenerator;

// ********** End Class URoadPresetThumbnailGenerator **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadPresetThumbnailGenerator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
