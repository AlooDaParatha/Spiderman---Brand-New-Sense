// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlockPlacementController.h"

#ifdef CITYBLDEDITOR_BlockPlacementController_generated_h
#error "BlockPlacementController.generated.h already included, missing '#pragma once' in BlockPlacementController.h"
#endif
#define CITYBLDEDITOR_BlockPlacementController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FShapeToolTarget **************************************************
struct Z_Construct_UScriptStruct_FShapeToolTarget_Statics;
CITYBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FShapeToolTarget(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BlockPlacementController_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FShapeToolTarget_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FShapeToolTarget(ETypeConstructPhase::Inner); }


struct FShapeToolTarget;
// ********** End ScriptStruct FShapeToolTarget ****************************************************

// ********** Begin Class UBlockPlacementController ************************************************
struct Z_Construct_UClass_UBlockPlacementController_Statics;
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBlockPlacementController(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BlockPlacementController_h_42_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UBlockPlacementController_Statics; \
	friend CITYBLDEDITOR_API UClass* ::Z_Construct_UClass_UBlockPlacementController(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UBlockPlacementController, UWorldBLDEditController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CityBLDEditor"), Z_Construct_UClass_UBlockPlacementController) \
	DECLARE_SERIALIZER(UBlockPlacementController)


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BlockPlacementController_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlockPlacementController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBlockPlacementController(UBlockPlacementController&&) = delete; \
	UBlockPlacementController(const UBlockPlacementController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlockPlacementController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlockPlacementController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlockPlacementController) \
	NO_API virtual ~UBlockPlacementController();


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BlockPlacementController_h_39_PROLOG
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BlockPlacementController_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BlockPlacementController_h_42_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BlockPlacementController_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBlockPlacementController;

// ********** End Class UBlockPlacementController **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BlockPlacementController_h

// ********** Begin Enum EDynamicShapePlacementMode ************************************************
#define FOREACH_ENUM_EDYNAMICSHAPEPLACEMENTMODE(op) \
	op(EDynamicShapePlacementMode::Automatic) \
	op(EDynamicShapePlacementMode::Manual) 

enum class EDynamicShapePlacementMode : uint8;
template<> struct TIsUEnumClass<EDynamicShapePlacementMode> { enum { Value = true }; };
template<> UE_NODEBUG CITYBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EDynamicShapePlacementMode>();
// ********** End Enum EDynamicShapePlacementMode **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
