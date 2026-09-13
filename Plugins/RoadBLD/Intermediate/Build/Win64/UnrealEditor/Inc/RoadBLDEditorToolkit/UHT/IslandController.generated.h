// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IslandController.h"

#ifdef ROADBLDEDITORTOOLKIT_IslandController_generated_h
#error "IslandController.generated.h already included, missing '#pragma once' in IslandController.h"
#endif
#define ROADBLDEDITORTOOLKIT_IslandController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ARoadIsland;
class UClass;
class UIslandController;

// ********** Begin Class UIslandController ********************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_IslandController_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateIslandController);


struct Z_Construct_UClass_UIslandController_Statics;
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UIslandController(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_IslandController_h_49_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UIslandController_Statics; \
	friend ROADBLDEDITORTOOLKIT_API UClass* ::Z_Construct_UClass_UIslandController(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UIslandController, UWorldBLDEditController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadBLDEditorToolkit"), Z_Construct_UClass_UIslandController) \
	DECLARE_SERIALIZER(UIslandController)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_IslandController_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIslandController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIslandController(UIslandController&&) = delete; \
	UIslandController(const UIslandController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIslandController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIslandController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIslandController) \
	NO_API virtual ~UIslandController();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_IslandController_h_46_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_IslandController_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_IslandController_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_IslandController_h_49_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_IslandController_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIslandController;

// ********** End Class UIslandController **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_IslandController_h

// ********** Begin Enum EIslandToolState **********************************************************
#define FOREACH_ENUM_EISLANDTOOLSTATE(op) \
	op(EIslandToolState::Idle) \
	op(EIslandToolState::Drawing) 

enum class EIslandToolState : uint8;
template<> struct TIsUEnumClass<EIslandToolState> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EIslandToolState>();
// ********** End Enum EIslandToolState ************************************************************

// ********** Begin Enum EIslandDrawMode ***********************************************************
#define FOREACH_ENUM_EISLANDDRAWMODE(op) \
	op(EIslandDrawMode::Freehand) \
	op(EIslandDrawMode::FillLane) \
	op(EIslandDrawMode::EdgeLoopFill) 

enum class EIslandDrawMode : uint8;
template<> struct TIsUEnumClass<EIslandDrawMode> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EIslandDrawMode>();
// ********** End Enum EIslandDrawMode *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
