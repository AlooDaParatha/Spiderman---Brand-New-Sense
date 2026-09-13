// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CustomRoadShapeController.h"

#ifdef ROADBLDEDITORTOOLKIT_CustomRoadShapeController_generated_h
#error "CustomRoadShapeController.generated.h already included, missing '#pragma once' in CustomRoadShapeController.h"
#endif
#define ROADBLDEDITORTOOLKIT_CustomRoadShapeController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACustomRoadShape;
class UCustomRoadShapeController;

// ********** Begin Class UCustomRoadShapeController ***********************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CustomRoadShapeController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateForShape);


struct Z_Construct_UClass_UCustomRoadShapeController_Statics;
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UCustomRoadShapeController(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CustomRoadShapeController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UCustomRoadShapeController_Statics; \
	friend ROADBLDEDITORTOOLKIT_API UClass* ::Z_Construct_UClass_UCustomRoadShapeController(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCustomRoadShapeController, UWorldBLDEditController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadBLDEditorToolkit"), Z_Construct_UClass_UCustomRoadShapeController) \
	DECLARE_SERIALIZER(UCustomRoadShapeController)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CustomRoadShapeController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomRoadShapeController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomRoadShapeController(UCustomRoadShapeController&&) = delete; \
	UCustomRoadShapeController(const UCustomRoadShapeController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomRoadShapeController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomRoadShapeController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomRoadShapeController) \
	NO_API virtual ~UCustomRoadShapeController();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CustomRoadShapeController_h_13_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CustomRoadShapeController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CustomRoadShapeController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CustomRoadShapeController_h_16_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CustomRoadShapeController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomRoadShapeController;

// ********** End Class UCustomRoadShapeController *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CustomRoadShapeController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
