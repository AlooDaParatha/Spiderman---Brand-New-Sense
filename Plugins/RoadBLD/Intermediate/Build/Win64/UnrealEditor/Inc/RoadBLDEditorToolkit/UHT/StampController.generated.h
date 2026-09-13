// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StampController.h"

#ifdef ROADBLDEDITORTOOLKIT_StampController_generated_h
#error "StampController.generated.h already included, missing '#pragma once' in StampController.h"
#endif
#define ROADBLDEDITORTOOLKIT_StampController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class URoadStamp;
class UStampController;
enum class EStampToolMode : uint8;

// ********** Begin Class UStampController *********************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_StampController_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPlacementZOffset); \
	DECLARE_FUNCTION(execGetPlacementZOffset); \
	DECLARE_FUNCTION(execApplyStampClassToSelectedStamp); \
	DECLARE_FUNCTION(execSetStampClassForPlacement); \
	DECLARE_FUNCTION(execDeleteSelectedStamp); \
	DECLARE_FUNCTION(execSetSelectedStampUniformScale); \
	DECLARE_FUNCTION(execSetSelectedStampYaw); \
	DECLARE_FUNCTION(execSetSelectedStampZOffset); \
	DECLARE_FUNCTION(execSetSelectedStampDistance); \
	DECLARE_FUNCTION(execSetSelectedStampEdgeOffset); \
	DECLARE_FUNCTION(execHasSelectedStamp); \
	DECLARE_FUNCTION(execSetToolMode); \
	DECLARE_FUNCTION(execCreateStampController);


struct Z_Construct_UClass_UStampController_Statics;
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UStampController(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_StampController_h_40_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UStampController_Statics; \
	friend ROADBLDEDITORTOOLKIT_API UClass* ::Z_Construct_UClass_UStampController(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UStampController, UWorldBLDEditController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadBLDEditorToolkit"), Z_Construct_UClass_UStampController) \
	DECLARE_SERIALIZER(UStampController)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_StampController_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStampController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStampController(UStampController&&) = delete; \
	UStampController(const UStampController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStampController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStampController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStampController) \
	NO_API virtual ~UStampController();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_StampController_h_37_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_StampController_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_StampController_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_StampController_h_40_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_StampController_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStampController;

// ********** End Class UStampController ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_StampController_h

// ********** Begin Enum EStampToolMode ************************************************************
#define FOREACH_ENUM_ESTAMPTOOLMODE(op) \
	op(EStampToolMode::PlaceMode) \
	op(EStampToolMode::EditMode) 

enum class EStampToolMode : uint8;
template<> struct TIsUEnumClass<EStampToolMode> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EStampToolMode>();
// ********** End Enum EStampToolMode **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
