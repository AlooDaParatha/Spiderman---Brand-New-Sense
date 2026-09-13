// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoadNetworkController.h"

#ifdef ROADBLDEDITORTOOLKIT_RoadNetworkController_generated_h
#error "RoadNetworkController.generated.h already included, missing '#pragma once' in RoadNetworkController.h"
#endif
#define ROADBLDEDITORTOOLKIT_RoadNetworkController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USplineComponent;

// ********** Begin Class URoadNetworkController ***************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadNetworkController_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnRoadSplinePointSelectionChanged_Implementation(USplineComponent* Spline, TSet<int32> const& SelectedPoints); \
	DECLARE_FUNCTION(execHandleSplinePointSelectionChanged); \
	DECLARE_FUNCTION(execGetCornerParameters); \
	DECLARE_FUNCTION(execSetCornerParameters); \
	DECLARE_FUNCTION(execOnRoadSplinePointSelectionChanged);


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadNetworkController_h_34_CALLBACK_WRAPPERS
struct Z_Construct_UClass_URoadNetworkController_Statics;
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadNetworkController(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadNetworkController_h_34_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URoadNetworkController_Statics; \
	friend ROADBLDEDITORTOOLKIT_API UClass* ::Z_Construct_UClass_URoadNetworkController(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URoadNetworkController, UWorldBLDEditController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadBLDEditorToolkit"), Z_Construct_UClass_URoadNetworkController) \
	DECLARE_SERIALIZER(URoadNetworkController)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadNetworkController_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoadNetworkController(URoadNetworkController&&) = delete; \
	URoadNetworkController(const URoadNetworkController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoadNetworkController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoadNetworkController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URoadNetworkController) \
	NO_API virtual ~URoadNetworkController();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadNetworkController_h_31_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadNetworkController_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadNetworkController_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadNetworkController_h_34_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadNetworkController_h_34_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadNetworkController_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoadNetworkController;

// ********** End Class URoadNetworkController *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadNetworkController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
