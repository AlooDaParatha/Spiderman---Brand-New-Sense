// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BuildingShapeController.h"

#ifdef CITYBLDEDITOR_BuildingShapeController_generated_h
#error "BuildingShapeController.generated.h already included, missing '#pragma once' in BuildingShapeController.h"
#endif
#define CITYBLDEDITOR_BuildingShapeController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AModularBuildingActor;
class UBuildingShapeController;
class UClass;

// ********** Begin Class UBuildingShapeController *************************************************
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BuildingShapeController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddNewPlateWithInset); \
	DECLARE_FUNCTION(execCreateForBuilding);


struct Z_Construct_UClass_UBuildingShapeController_Statics;
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingShapeController(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BuildingShapeController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UBuildingShapeController_Statics; \
	friend CITYBLDEDITOR_API UClass* ::Z_Construct_UClass_UBuildingShapeController(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UBuildingShapeController, UWorldBLDEditController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CityBLDEditor"), Z_Construct_UClass_UBuildingShapeController) \
	DECLARE_SERIALIZER(UBuildingShapeController)


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BuildingShapeController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBuildingShapeController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBuildingShapeController(UBuildingShapeController&&) = delete; \
	UBuildingShapeController(const UBuildingShapeController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuildingShapeController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuildingShapeController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuildingShapeController) \
	NO_API virtual ~UBuildingShapeController();


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BuildingShapeController_h_15_PROLOG
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BuildingShapeController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BuildingShapeController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BuildingShapeController_h_18_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BuildingShapeController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBuildingShapeController;

// ********** End Class UBuildingShapeController ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BuildingShapeController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
