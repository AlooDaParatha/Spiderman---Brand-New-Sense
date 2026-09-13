// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoadModuleController.h"

#ifdef ROADBLDEDITORTOOLKIT_RoadModuleController_generated_h
#error "RoadModuleController.generated.h already included, missing '#pragma once' in RoadModuleController.h"
#endif
#define ROADBLDEDITORTOOLKIT_RoadModuleController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class URoadModuleController;
class URoadModuleObject;

// ********** Begin Class URoadModuleEdgeSelectionProxy ********************************************
struct Z_Construct_UClass_URoadModuleEdgeSelectionProxy_Statics;
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadModuleEdgeSelectionProxy(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadModuleController_h_25_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URoadModuleEdgeSelectionProxy_Statics; \
	friend ROADBLDEDITORTOOLKIT_API UClass* ::Z_Construct_UClass_URoadModuleEdgeSelectionProxy(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URoadModuleEdgeSelectionProxy, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/RoadBLDEditorToolkit"), Z_Construct_UClass_URoadModuleEdgeSelectionProxy) \
	DECLARE_SERIALIZER(URoadModuleEdgeSelectionProxy)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadModuleController_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoadModuleEdgeSelectionProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoadModuleEdgeSelectionProxy(URoadModuleEdgeSelectionProxy&&) = delete; \
	URoadModuleEdgeSelectionProxy(const URoadModuleEdgeSelectionProxy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoadModuleEdgeSelectionProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoadModuleEdgeSelectionProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoadModuleEdgeSelectionProxy) \
	NO_API virtual ~URoadModuleEdgeSelectionProxy();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadModuleController_h_22_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadModuleController_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadModuleController_h_25_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadModuleController_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoadModuleEdgeSelectionProxy;

// ********** End Class URoadModuleEdgeSelectionProxy **********************************************

// ********** Begin Class URoadModuleController ****************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadModuleController_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateRoadModuleControllerWithClass); \
	DECLARE_FUNCTION(execCreateRoadModuleController);


struct Z_Construct_UClass_URoadModuleController_Statics;
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadModuleController(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadModuleController_h_42_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URoadModuleController_Statics; \
	friend ROADBLDEDITORTOOLKIT_API UClass* ::Z_Construct_UClass_URoadModuleController(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URoadModuleController, UWorldBLDEditController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadBLDEditorToolkit"), Z_Construct_UClass_URoadModuleController) \
	DECLARE_SERIALIZER(URoadModuleController)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadModuleController_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoadModuleController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoadModuleController(URoadModuleController&&) = delete; \
	URoadModuleController(const URoadModuleController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoadModuleController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoadModuleController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoadModuleController) \
	NO_API virtual ~URoadModuleController();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadModuleController_h_39_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadModuleController_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadModuleController_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadModuleController_h_42_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadModuleController_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoadModuleController;

// ********** End Class URoadModuleController ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadModuleController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
