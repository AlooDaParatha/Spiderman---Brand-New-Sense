// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SignController.h"

#ifdef ROADBLDEDITORTOOLKIT_SignController_generated_h
#error "SignController.generated.h already included, missing '#pragma once' in SignController.h"
#endif
#define ROADBLDEDITORTOOLKIT_SignController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ARoadSign;
class UClass;
class USignController;

// ********** Begin Class USignController **********************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_SignController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateSignController);


struct Z_Construct_UClass_USignController_Statics;
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_USignController(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_SignController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_USignController_Statics; \
	friend ROADBLDEDITORTOOLKIT_API UClass* ::Z_Construct_UClass_USignController(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(USignController, UPlacementController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadBLDEditorToolkit"), Z_Construct_UClass_USignController) \
	DECLARE_SERIALIZER(USignController)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_SignController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USignController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USignController(USignController&&) = delete; \
	USignController(const USignController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USignController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USignController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USignController) \
	NO_API virtual ~USignController();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_SignController_h_13_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_SignController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_SignController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_SignController_h_16_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_SignController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USignController;

// ********** End Class USignController ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_SignController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
