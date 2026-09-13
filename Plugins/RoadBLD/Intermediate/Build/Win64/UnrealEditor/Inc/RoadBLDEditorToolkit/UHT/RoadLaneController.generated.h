// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoadLaneController.h"

#ifdef ROADBLDEDITORTOOLKIT_RoadLaneController_generated_h
#error "RoadLaneController.generated.h already included, missing '#pragma once' in RoadLaneController.h"
#endif
#define ROADBLDEDITORTOOLKIT_RoadLaneController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UMaterialInterface;
class URoadBLDSidewalkPreset;
class URoadLaneController;
enum class ELaneToolDomain : uint8;
enum class ELaneToolMode : uint8;
enum class ELaneToolState : uint8;
enum class ELaneType : uint8;

// ********** Begin ScriptStruct FRoadLanePointMetadata ********************************************
struct Z_Construct_UScriptStruct_FRoadLanePointMetadata_Statics;
ROADBLDEDITORTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FRoadLanePointMetadata(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadLaneController_h_54_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRoadLanePointMetadata_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FRoadLanePointMetadata(ETypeConstructPhase::Inner); }


struct FRoadLanePointMetadata;
// ********** End ScriptStruct FRoadLanePointMetadata **********************************************

// ********** Begin Class URoadLaneController ******************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadLaneController_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConfigureSelectedLaneFromPreset); \
	DECLARE_FUNCTION(execIsSelectedSidewalkPartition); \
	DECLARE_FUNCTION(execHasSelectedStrip); \
	DECLARE_FUNCTION(execApplySidewalkPresetToSelection); \
	DECLARE_FUNCTION(execSetSelectedPartitionMaterial); \
	DECLARE_FUNCTION(execSetSelectedPartitionWalkable); \
	DECLARE_FUNCTION(execRemoveSelectedSidewalk); \
	DECLARE_FUNCTION(execRemoveSelectedStrip); \
	DECLARE_FUNCTION(execSetLockWidths); \
	DECLARE_FUNCTION(execGetToolMode); \
	DECLARE_FUNCTION(execSetToolMode); \
	DECLARE_FUNCTION(execSetDomain); \
	DECLARE_FUNCTION(execSwitchToState); \
	DECLARE_FUNCTION(execCreateRoadLaneController);


struct Z_Construct_UClass_URoadLaneController_Statics;
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadLaneController(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadLaneController_h_82_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URoadLaneController_Statics; \
	friend ROADBLDEDITORTOOLKIT_API UClass* ::Z_Construct_UClass_URoadLaneController(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URoadLaneController, UWorldBLDEditController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadBLDEditorToolkit"), Z_Construct_UClass_URoadLaneController) \
	DECLARE_SERIALIZER(URoadLaneController)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadLaneController_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoadLaneController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoadLaneController(URoadLaneController&&) = delete; \
	URoadLaneController(const URoadLaneController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoadLaneController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoadLaneController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoadLaneController) \
	NO_API virtual ~URoadLaneController();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadLaneController_h_79_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadLaneController_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadLaneController_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadLaneController_h_82_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadLaneController_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoadLaneController;

// ********** End Class URoadLaneController ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadLaneController_h

// ********** Begin Enum ELaneToolState ************************************************************
#define FOREACH_ENUM_ELANETOOLSTATE(op) \
	op(ELaneToolState::SelectLane) \
	op(ELaneToolState::SelectEdge) \
	op(ELaneToolState::EditOffsets) \
	op(ELaneToolState::AddLane) \
	op(ELaneToolState::SliceStrip) 

enum class ELaneToolState : uint8;
template<> struct TIsUEnumClass<ELaneToolState> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ELaneToolState>();
// ********** End Enum ELaneToolState **************************************************************

// ********** Begin Enum ELaneToolDomain ***********************************************************
#define FOREACH_ENUM_ELANETOOLDOMAIN(op) \
	op(ELaneToolDomain::Lanes) \
	op(ELaneToolDomain::Sidewalks) 

enum class ELaneToolDomain : uint8;
template<> struct TIsUEnumClass<ELaneToolDomain> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ELaneToolDomain>();
// ********** End Enum ELaneToolDomain *************************************************************

// ********** Begin Enum ELaneToolMode *************************************************************
#define FOREACH_ENUM_ELANETOOLMODE(op) \
	op(ELaneToolMode::Select) \
	op(ELaneToolMode::Add) \
	op(ELaneToolMode::Slice) 

enum class ELaneToolMode : uint8;
template<> struct TIsUEnumClass<ELaneToolMode> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ELaneToolMode>();
// ********** End Enum ELaneToolMode ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
