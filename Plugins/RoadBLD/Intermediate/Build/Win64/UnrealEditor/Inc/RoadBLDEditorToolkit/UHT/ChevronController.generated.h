// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChevronController.h"

#ifdef ROADBLDEDITORTOOLKIT_ChevronController_generated_h
#error "ChevronController.generated.h already included, missing '#pragma once' in ChevronController.h"
#endif
#define ROADBLDEDITORTOOLKIT_ChevronController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UChevronController;

// ********** Begin Class UChevronController *******************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ChevronController_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateChevronController);


struct Z_Construct_UClass_UChevronController_Statics;
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UChevronController(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ChevronController_h_35_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UChevronController_Statics; \
	friend ROADBLDEDITORTOOLKIT_API UClass* ::Z_Construct_UClass_UChevronController(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UChevronController, UWorldBLDEditController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadBLDEditorToolkit"), Z_Construct_UClass_UChevronController) \
	DECLARE_SERIALIZER(UChevronController)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ChevronController_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UChevronController(UChevronController&&) = delete; \
	UChevronController(const UChevronController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChevronController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChevronController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChevronController) \
	NO_API virtual ~UChevronController();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ChevronController_h_32_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ChevronController_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ChevronController_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ChevronController_h_35_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ChevronController_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UChevronController;

// ********** End Class UChevronController *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ChevronController_h

// ********** Begin Enum EChevronDrawMode **********************************************************
#define FOREACH_ENUM_ECHEVRONDRAWMODE(op) \
	op(EChevronDrawMode::Freehand) \
	op(EChevronDrawMode::Corner) 

enum class EChevronDrawMode : uint8;
template<> struct TIsUEnumClass<EChevronDrawMode> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EChevronDrawMode>();
// ********** End Enum EChevronDrawMode ************************************************************

// ********** Begin Enum EChevronToolState *********************************************************
#define FOREACH_ENUM_ECHEVRONTOOLSTATE(op) \
	op(EChevronToolState::Idle) \
	op(EChevronToolState::Drawing) 

enum class EChevronToolState : uint8;
template<> struct TIsUEnumClass<EChevronToolState> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EChevronToolState>();
// ********** End Enum EChevronToolState ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
