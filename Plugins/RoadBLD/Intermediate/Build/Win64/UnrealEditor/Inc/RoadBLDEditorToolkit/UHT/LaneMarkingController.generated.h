// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LaneMarkingController.h"

#ifdef ROADBLDEDITORTOOLKIT_LaneMarkingController_generated_h
#error "LaneMarkingController.generated.h already included, missing '#pragma once' in LaneMarkingController.h"
#endif
#define ROADBLDEDITORTOOLKIT_LaneMarkingController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ADynamicRoad;
class UClass;
class UDynamicRoadMarking;
class UEdgeCurve;
class ULaneMarkingController;
class UMaterialInterface;
class URoadMarkingLine;
enum class ELaneMarkingToolMode : uint8;
enum class ESegmentBehavior : uint8;

// ********** Begin Class ULaneMarkingController ***************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_LaneMarkingController_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool OnDrawModeActivating_Implementation(bool bHasMaterial); \
	DECLARE_FUNCTION(execGetTargetSegmentParameters); \
	DECLARE_FUNCTION(execOnDrawModeActivating); \
	DECLARE_FUNCTION(execIsFreehandSplineLinear); \
	DECLARE_FUNCTION(execOnFreehandSplineTypeChanged); \
	DECLARE_FUNCTION(execCanDrawFreehandMarking); \
	DECLARE_FUNCTION(execGetFreehandMarkingParameters); \
	DECLARE_FUNCTION(execSetFreehandMarkingParameters); \
	DECLARE_FUNCTION(execSetTargetSegmentParameters); \
	DECLARE_FUNCTION(execSetToolMode); \
	DECLARE_FUNCTION(execInitializeWithRoad); \
	DECLARE_FUNCTION(execCreateForSelectMode); \
	DECLARE_FUNCTION(execCreateForFreehandPreset); \
	DECLARE_FUNCTION(execCreateForDrawMode); \
	DECLARE_FUNCTION(execCreateForRoad);


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_LaneMarkingController_h_40_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ULaneMarkingController_Statics;
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_ULaneMarkingController(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_LaneMarkingController_h_40_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ULaneMarkingController_Statics; \
	friend ROADBLDEDITORTOOLKIT_API UClass* ::Z_Construct_UClass_ULaneMarkingController(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ULaneMarkingController, UWorldBLDEditController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadBLDEditorToolkit"), Z_Construct_UClass_ULaneMarkingController) \
	DECLARE_SERIALIZER(ULaneMarkingController)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_LaneMarkingController_h_40_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULaneMarkingController(ULaneMarkingController&&) = delete; \
	ULaneMarkingController(const ULaneMarkingController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULaneMarkingController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULaneMarkingController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULaneMarkingController) \
	NO_API virtual ~ULaneMarkingController();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_LaneMarkingController_h_37_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_LaneMarkingController_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_LaneMarkingController_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_LaneMarkingController_h_40_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_LaneMarkingController_h_40_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_LaneMarkingController_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULaneMarkingController;

// ********** End Class ULaneMarkingController *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_LaneMarkingController_h

// ********** Begin Enum ELaneMarkingToolMode ******************************************************
#define FOREACH_ENUM_ELANEMARKINGTOOLMODE(op) \
	op(ELaneMarkingToolMode::SelectMode) \
	op(ELaneMarkingToolMode::ChopMode) \
	op(ELaneMarkingToolMode::DrawMode) \
	op(ELaneMarkingToolMode::EditMode) 

enum class ELaneMarkingToolMode : uint8;
template<> struct TIsUEnumClass<ELaneMarkingToolMode> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ELaneMarkingToolMode>();
// ********** End Enum ELaneMarkingToolMode ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
