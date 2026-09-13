// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LaneSelectionController.h"

#ifdef ROADBLDEDITORTOOLKIT_LaneSelectionController_generated_h
#error "LaneSelectionController.generated.h already included, missing '#pragma once' in LaneSelectionController.h"
#endif
#define ROADBLDEDITORTOOLKIT_LaneSelectionController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULaneSelectionController;
class UMaterialInterface;

// ********** Begin Class ULaneSelectionController *************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_LaneSelectionController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateLaneSelectionControllerWithMaterials);


struct Z_Construct_UClass_ULaneSelectionController_Statics;
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_ULaneSelectionController(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_LaneSelectionController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ULaneSelectionController_Statics; \
	friend ROADBLDEDITORTOOLKIT_API UClass* ::Z_Construct_UClass_ULaneSelectionController(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ULaneSelectionController, UWorldBLDEditController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadBLDEditorToolkit"), Z_Construct_UClass_ULaneSelectionController) \
	DECLARE_SERIALIZER(ULaneSelectionController)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_LaneSelectionController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULaneSelectionController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULaneSelectionController(ULaneSelectionController&&) = delete; \
	ULaneSelectionController(const ULaneSelectionController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULaneSelectionController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULaneSelectionController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULaneSelectionController) \
	NO_API virtual ~ULaneSelectionController();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_LaneSelectionController_h_16_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_LaneSelectionController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_LaneSelectionController_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_LaneSelectionController_h_19_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_LaneSelectionController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULaneSelectionController;

// ********** End Class ULaneSelectionController ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_LaneSelectionController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
