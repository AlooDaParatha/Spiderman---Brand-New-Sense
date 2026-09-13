// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoadController.h"

#ifdef ROADBLDEDITORTOOLKIT_RoadController_generated_h
#error "RoadController.generated.h already included, missing '#pragma once' in RoadController.h"
#endif
#define ROADBLDEDITORTOOLKIT_RoadController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ARoadBrushActor;
class UClass;
class UDynamicRoadDrawPreset;
class URoadController;
enum class EControllerDrawState : uint8;

// ********** Begin ScriptStruct FRoadLandscapePaintSettings ***************************************
struct Z_Construct_UScriptStruct_FRoadLandscapePaintSettings_Statics;
ROADBLDEDITORTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FRoadLandscapePaintSettings(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRoadLandscapePaintSettings_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FRoadLandscapePaintSettings(ETypeConstructPhase::Inner); }


struct FRoadLandscapePaintSettings;
// ********** End ScriptStruct FRoadLandscapePaintSettings *****************************************

// ********** Begin ScriptStruct FDynamicRoadControllerTarget **************************************
struct Z_Construct_UScriptStruct_FDynamicRoadControllerTarget_Statics;
ROADBLDEDITORTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicRoadControllerTarget(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_61_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FDynamicRoadControllerTarget_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FDynamicRoadControllerTarget(ETypeConstructPhase::Inner); }


struct FDynamicRoadControllerTarget;
// ********** End ScriptStruct FDynamicRoadControllerTarget ****************************************

// ********** Begin Class UDynamicRoadDrawParameters ***********************************************
struct Z_Construct_UClass_UDynamicRoadDrawParameters_Statics;
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UDynamicRoadDrawParameters(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_83_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UDynamicRoadDrawParameters_Statics; \
	friend ROADBLDEDITORTOOLKIT_API UClass* ::Z_Construct_UClass_UDynamicRoadDrawParameters(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UDynamicRoadDrawParameters, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDEditorToolkit"), Z_Construct_UClass_UDynamicRoadDrawParameters) \
	DECLARE_SERIALIZER(UDynamicRoadDrawParameters)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_83_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicRoadDrawParameters(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynamicRoadDrawParameters(UDynamicRoadDrawParameters&&) = delete; \
	UDynamicRoadDrawParameters(const UDynamicRoadDrawParameters&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicRoadDrawParameters); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicRoadDrawParameters); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicRoadDrawParameters) \
	NO_API virtual ~UDynamicRoadDrawParameters();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_80_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_83_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_83_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynamicRoadDrawParameters;

// ********** End Class UDynamicRoadDrawParameters *************************************************

// ********** Begin Class UDynamicRoadDrawSectionParameters ****************************************
struct Z_Construct_UClass_UDynamicRoadDrawSectionParameters_Statics;
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UDynamicRoadDrawSectionParameters(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_93_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UDynamicRoadDrawSectionParameters_Statics; \
	friend ROADBLDEDITORTOOLKIT_API UClass* ::Z_Construct_UClass_UDynamicRoadDrawSectionParameters(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UDynamicRoadDrawSectionParameters, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDEditorToolkit"), Z_Construct_UClass_UDynamicRoadDrawSectionParameters) \
	DECLARE_SERIALIZER(UDynamicRoadDrawSectionParameters)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_93_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicRoadDrawSectionParameters(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynamicRoadDrawSectionParameters(UDynamicRoadDrawSectionParameters&&) = delete; \
	UDynamicRoadDrawSectionParameters(const UDynamicRoadDrawSectionParameters&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicRoadDrawSectionParameters); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicRoadDrawSectionParameters); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicRoadDrawSectionParameters) \
	NO_API virtual ~UDynamicRoadDrawSectionParameters();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_90_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_93_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynamicRoadDrawSectionParameters;

// ********** End Class UDynamicRoadDrawSectionParameters ******************************************

// ********** Begin Class UPointCurve **************************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurvePoints);


struct Z_Construct_UClass_UPointCurve_Statics;
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UPointCurve(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_105_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UPointCurve_Statics; \
	friend ROADBLDEDITORTOOLKIT_API UClass* ::Z_Construct_UClass_UPointCurve(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UPointCurve, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDEditorToolkit"), Z_Construct_UClass_UPointCurve) \
	DECLARE_SERIALIZER(UPointCurve)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_105_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPointCurve(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPointCurve(UPointCurve&&) = delete; \
	UPointCurve(const UPointCurve&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointCurve); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointCurve); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointCurve) \
	NO_API virtual ~UPointCurve();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_102_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_105_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_105_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_105_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPointCurve;

// ********** End Class UPointCurve ****************************************************************

// ********** Begin Class ARoadBrushActor **********************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_144_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCalculatePresetWidth); \
	DECLARE_FUNCTION(execUpdateScaleFromPreset);


struct Z_Construct_UClass_ARoadBrushActor_Statics;
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_ARoadBrushActor(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_144_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ARoadBrushActor_Statics; \
	friend ROADBLDEDITORTOOLKIT_API UClass* ::Z_Construct_UClass_ARoadBrushActor(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ARoadBrushActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadBLDEditorToolkit"), Z_Construct_UClass_ARoadBrushActor) \
	DECLARE_SERIALIZER(ARoadBrushActor)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_144_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARoadBrushActor(ARoadBrushActor&&) = delete; \
	ARoadBrushActor(const ARoadBrushActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoadBrushActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoadBrushActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARoadBrushActor) \
	NO_API virtual ~ARoadBrushActor();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_141_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_144_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_144_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_144_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_144_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARoadBrushActor;

// ********** End Class ARoadBrushActor ************************************************************

// ********** Begin Class URoadController **********************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_185_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateRoadController);


struct Z_Construct_UClass_URoadController_Statics;
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadController(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_185_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URoadController_Statics; \
	friend ROADBLDEDITORTOOLKIT_API UClass* ::Z_Construct_UClass_URoadController(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URoadController, UWorldBLDEditController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadBLDEditorToolkit"), Z_Construct_UClass_URoadController) \
	DECLARE_SERIALIZER(URoadController)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_185_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoadController(URoadController&&) = delete; \
	URoadController(const URoadController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoadController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoadController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URoadController) \
	NO_API virtual ~URoadController();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_182_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_185_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_185_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_185_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h_185_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoadController;

// ********** End Class URoadController ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadController_h

// ********** Begin Enum EControllerDrawState ******************************************************
#define FOREACH_ENUM_ECONTROLLERDRAWSTATE(op) \
	op(EControllerDrawState::None) \
	op(EControllerDrawState::DrawStart) \
	op(EControllerDrawState::DrawContinue) \
	op(EControllerDrawState::DrawCurve) \
	op(EControllerDrawState::SelectLane) \
	op(EControllerDrawState::DrawLane) \
	op(EControllerDrawState::StartCircle) \
	op(EControllerDrawState::DrawCircle) 

enum class EControllerDrawState : uint8;
template<> struct TIsUEnumClass<EControllerDrawState> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EControllerDrawState>();
// ********** End Enum EControllerDrawState ********************************************************

// ********** Begin Enum ECurveMode ****************************************************************
#define FOREACH_ENUM_ECURVEMODE(op) \
	op(ECurveMode::StraightRoads) \
	op(ECurveMode::CurvedRoads) \
	op(ECurveMode::CircularRoads) 

enum class ECurveMode : uint8;
template<> struct TIsUEnumClass<ECurveMode> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ECurveMode>();
// ********** End Enum ECurveMode ******************************************************************

// ********** Begin Enum EAttachedElement **********************************************************
#define FOREACH_ENUM_EATTACHEDELEMENT(op) \
	op(EAttachedElement::None) \
	op(EAttachedElement::DrawStart) \
	op(EAttachedElement::DrawContinue) \
	op(EAttachedElement::DrawCurve) \
	op(EAttachedElement::SelectLane) \
	op(EAttachedElement::DrawLane) 

enum class EAttachedElement : uint8;
template<> struct TIsUEnumClass<EAttachedElement> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<EAttachedElement>();
// ********** End Enum EAttachedElement ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
