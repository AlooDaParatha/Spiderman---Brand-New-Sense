// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StreetMap/StreetMapImportCustomizer.h"

#ifdef TWINBLDEDITOR_StreetMapImportCustomizer_generated_h
#error "StreetMapImportCustomizer.generated.h already included, missing '#pragma once' in StreetMapImportCustomizer.h"
#endif
#define TWINBLDEDITOR_StreetMapImportCustomizer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACityBlock;
class UClass;
class UDynamicRoadDrawPreset;
class UStreetMap;
struct FStreetMapBuilding;
struct FStreetMapRoad;
struct FStreetMapRoadStrip;
struct FTwinBLDShapeFeature;

// ********** Begin Class UStreetMapImportCustomizer ***********************************************
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapImportCustomizer_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetStreetMapContext); \
	DECLARE_FUNCTION(execCustomizeGeneratedBuildingActor); \
	DECLARE_FUNCTION(execProcessStreetMapBuilding); \
	DECLARE_FUNCTION(execFindRoadFacingFaces); \
	DECLARE_FUNCTION(execSplitSelfIntersectingRoads); \
	DECLARE_FUNCTION(execSetRoadPresetClass); \
	DECLARE_FUNCTION(execProcessRoadStrip); \
	DECLARE_FUNCTION(execCustomizeParcel); \
	DECLARE_FUNCTION(execCustomizeBuilding); \
	DECLARE_FUNCTION(execProcessBuilding);


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapImportCustomizer_h_31_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UStreetMapImportCustomizer_Statics;
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UStreetMapImportCustomizer(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapImportCustomizer_h_31_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UStreetMapImportCustomizer_Statics; \
	friend TWINBLDEDITOR_API UClass* ::Z_Construct_UClass_UStreetMapImportCustomizer(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UStreetMapImportCustomizer, UStreetMapImportCustomizerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwinBLDEditor"), Z_Construct_UClass_UStreetMapImportCustomizer) \
	DECLARE_SERIALIZER(UStreetMapImportCustomizer)


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapImportCustomizer_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStreetMapImportCustomizer(UStreetMapImportCustomizer&&) = delete; \
	UStreetMapImportCustomizer(const UStreetMapImportCustomizer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStreetMapImportCustomizer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreetMapImportCustomizer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreetMapImportCustomizer) \
	NO_API virtual ~UStreetMapImportCustomizer();


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapImportCustomizer_h_28_PROLOG
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapImportCustomizer_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapImportCustomizer_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapImportCustomizer_h_31_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapImportCustomizer_h_31_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapImportCustomizer_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStreetMapImportCustomizer;

// ********** End Class UStreetMapImportCustomizer *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapImportCustomizer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
