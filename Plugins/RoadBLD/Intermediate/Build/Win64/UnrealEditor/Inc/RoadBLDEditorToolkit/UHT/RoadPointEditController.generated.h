// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoadPointEditController.h"

#ifdef ROADBLDEDITORTOOLKIT_RoadPointEditController_generated_h
#error "RoadPointEditController.generated.h already included, missing '#pragma once' in RoadPointEditController.h"
#endif
#define ROADBLDEDITORTOOLKIT_RoadPointEditController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEdgeCurve;
class URoadPointEditController;

// ********** Begin ScriptStruct FRoadPointGizmoMetadata *******************************************
struct Z_Construct_UScriptStruct_FRoadPointGizmoMetadata_Statics;
ROADBLDEDITORTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FRoadPointGizmoMetadata(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadPointEditController_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRoadPointGizmoMetadata_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FRoadPointGizmoMetadata(ETypeConstructPhase::Inner); }


struct FRoadPointGizmoMetadata;
// ********** End ScriptStruct FRoadPointGizmoMetadata *********************************************

// ********** Begin Class URoadPointEditController *************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadPointEditController_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateFromEdgeCurve);


struct Z_Construct_UClass_URoadPointEditController_Statics;
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadPointEditController(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadPointEditController_h_35_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URoadPointEditController_Statics; \
	friend ROADBLDEDITORTOOLKIT_API UClass* ::Z_Construct_UClass_URoadPointEditController(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URoadPointEditController, UWorldBLDEditController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadBLDEditorToolkit"), Z_Construct_UClass_URoadPointEditController) \
	DECLARE_SERIALIZER(URoadPointEditController)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadPointEditController_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoadPointEditController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoadPointEditController(URoadPointEditController&&) = delete; \
	URoadPointEditController(const URoadPointEditController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoadPointEditController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoadPointEditController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoadPointEditController) \
	NO_API virtual ~URoadPointEditController();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadPointEditController_h_32_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadPointEditController_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadPointEditController_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadPointEditController_h_35_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadPointEditController_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoadPointEditController;

// ********** End Class URoadPointEditController ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadPointEditController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
