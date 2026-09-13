// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdgeSelectionController.h"

#ifdef ROADBLDEDITORTOOLKIT_EdgeSelectionController_generated_h
#error "EdgeSelectionController.generated.h already included, missing '#pragma once' in EdgeSelectionController.h"
#endif
#define ROADBLDEDITORTOOLKIT_EdgeSelectionController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADynamicRoad;
class UEdgeCurve;
class UEdgeSelectionController;

// ********** Begin Class UEdgeSelectionController *************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_EdgeSelectionController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTransitionToRoadPointEditController); \
	DECLARE_FUNCTION(execCreateEdgeSelectionController);


struct Z_Construct_UClass_UEdgeSelectionController_Statics;
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UEdgeSelectionController(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_EdgeSelectionController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UEdgeSelectionController_Statics; \
	friend ROADBLDEDITORTOOLKIT_API UClass* ::Z_Construct_UClass_UEdgeSelectionController(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UEdgeSelectionController, UWorldBLDEditController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadBLDEditorToolkit"), Z_Construct_UClass_UEdgeSelectionController) \
	DECLARE_SERIALIZER(UEdgeSelectionController)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_EdgeSelectionController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEdgeSelectionController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEdgeSelectionController(UEdgeSelectionController&&) = delete; \
	UEdgeSelectionController(const UEdgeSelectionController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEdgeSelectionController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdgeSelectionController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdgeSelectionController) \
	NO_API virtual ~UEdgeSelectionController();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_EdgeSelectionController_h_14_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_EdgeSelectionController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_EdgeSelectionController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_EdgeSelectionController_h_17_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_EdgeSelectionController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEdgeSelectionController;

// ********** End Class UEdgeSelectionController ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_EdgeSelectionController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
