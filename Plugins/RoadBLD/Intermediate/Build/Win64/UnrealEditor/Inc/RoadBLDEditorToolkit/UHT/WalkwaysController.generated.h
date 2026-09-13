// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WalkwaysController.h"

#ifdef ROADBLDEDITORTOOLKIT_WalkwaysController_generated_h
#error "WalkwaysController.generated.h already included, missing '#pragma once' in WalkwaysController.h"
#endif
#define ROADBLDEDITORTOOLKIT_WalkwaysController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACrossing;
class UClass;
class URoadBLDSidewalkPreset;
class UWalkwaysController;
enum class EWalkwaysEditMode : uint8;

// ********** Begin Class UWalkwaysController ******************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_WalkwaysController_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetEditMode); \
	DECLARE_FUNCTION(execSetEditMode); \
	DECLARE_FUNCTION(execCreateWalkwaysController);


struct Z_Construct_UClass_UWalkwaysController_Statics;
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UWalkwaysController(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_WalkwaysController_h_28_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UWalkwaysController_Statics; \
	friend ROADBLDEDITORTOOLKIT_API UClass* ::Z_Construct_UClass_UWalkwaysController(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UWalkwaysController, UWorldBLDEditController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadBLDEditorToolkit"), Z_Construct_UClass_UWalkwaysController) \
	DECLARE_SERIALIZER(UWalkwaysController)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_WalkwaysController_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWalkwaysController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWalkwaysController(UWalkwaysController&&) = delete; \
	UWalkwaysController(const UWalkwaysController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWalkwaysController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWalkwaysController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWalkwaysController) \
	NO_API virtual ~UWalkwaysController();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_WalkwaysController_h_25_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_WalkwaysController_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_WalkwaysController_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_WalkwaysController_h_28_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_WalkwaysController_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWalkwaysController;

// ********** End Class UWalkwaysController ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_WalkwaysController_h

// ********** Begin Enum EWalkwaysEditMode *********************************************************
#define FOREACH_ENUM_EWALKWAYSEDITMODE(op) \
	op(EWalkwaysEditMode::EditSidewalks) \
	op(EWalkwaysEditMode::EditCrossings) 

enum class EWalkwaysEditMode : uint8;
template<> struct TIsUEnumClass<EWalkwaysEditMode> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EWalkwaysEditMode>();
// ********** End Enum EWalkwaysEditMode ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
