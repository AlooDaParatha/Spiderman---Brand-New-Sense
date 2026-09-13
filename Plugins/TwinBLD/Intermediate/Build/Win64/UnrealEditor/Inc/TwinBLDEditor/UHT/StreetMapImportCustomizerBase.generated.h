// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StreetMap/StreetMapImportCustomizerBase.h"

#ifdef TWINBLDEDITOR_StreetMapImportCustomizerBase_generated_h
#error "StreetMapImportCustomizerBase.generated.h already included, missing '#pragma once' in StreetMapImportCustomizerBase.h"
#endif
#define TWINBLDEDITOR_StreetMapImportCustomizerBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStreetMap;
struct FStreetMapBuilding;
struct FStreetMapRoad;
struct FTwinBLDShapeFeature;

// ********** Begin Class UStreetMapImportCustomizerBase *******************************************
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapImportCustomizerBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSelfDestruct); \
	DECLARE_FUNCTION(execGetStreetMap); \
	DECLARE_FUNCTION(execSetStreetMap); \
	DECLARE_FUNCTION(execProcessParcels); \
	DECLARE_FUNCTION(execProcessRoads); \
	DECLARE_FUNCTION(execProcessBuildings); \
	DECLARE_FUNCTION(execResetState);


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapImportCustomizerBase_h_20_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UStreetMapImportCustomizerBase_Statics;
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UStreetMapImportCustomizerBase(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapImportCustomizerBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UStreetMapImportCustomizerBase_Statics; \
	friend TWINBLDEDITOR_API UClass* ::Z_Construct_UClass_UStreetMapImportCustomizerBase(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UStreetMapImportCustomizerBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TwinBLDEditor"), Z_Construct_UClass_UStreetMapImportCustomizerBase) \
	DECLARE_SERIALIZER(UStreetMapImportCustomizerBase)


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapImportCustomizerBase_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStreetMapImportCustomizerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStreetMapImportCustomizerBase(UStreetMapImportCustomizerBase&&) = delete; \
	UStreetMapImportCustomizerBase(const UStreetMapImportCustomizerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStreetMapImportCustomizerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreetMapImportCustomizerBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreetMapImportCustomizerBase) \
	NO_API virtual ~UStreetMapImportCustomizerBase();


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapImportCustomizerBase_h_17_PROLOG
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapImportCustomizerBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapImportCustomizerBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapImportCustomizerBase_h_20_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapImportCustomizerBase_h_20_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapImportCustomizerBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStreetMapImportCustomizerBase;

// ********** End Class UStreetMapImportCustomizerBase *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapImportCustomizerBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
