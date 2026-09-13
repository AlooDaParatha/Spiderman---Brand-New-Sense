// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TwinBLD.h"

#ifdef TWINBLDEDITOR_TwinBLD_generated_h
#error "TwinBLD.generated.h already included, missing '#pragma once' in TwinBLD.h"
#endif
#define TWINBLDEDITOR_TwinBLD_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UClass;
class UObject;
class UStreetMap;
struct FBuildingsGenerationParameters;
struct FRoadsGenerationParameters;
struct FStreetMapBuilding;
struct FStreetMapRoad;

// ********** Begin Class ATwinBLDLevelSettings ****************************************************
struct Z_Construct_UClass_ATwinBLDLevelSettings_Statics;
TWINBLDEDITOR_API UClass* Z_Construct_UClass_ATwinBLDLevelSettings(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLD_h_22_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ATwinBLDLevelSettings_Statics; \
	friend TWINBLDEDITOR_API UClass* ::Z_Construct_UClass_ATwinBLDLevelSettings(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ATwinBLDLevelSettings, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TwinBLDEditor"), Z_Construct_UClass_ATwinBLDLevelSettings) \
	DECLARE_SERIALIZER(ATwinBLDLevelSettings)


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLD_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATwinBLDLevelSettings(ATwinBLDLevelSettings&&) = delete; \
	ATwinBLDLevelSettings(const ATwinBLDLevelSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATwinBLDLevelSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATwinBLDLevelSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATwinBLDLevelSettings) \
	NO_API virtual ~ATwinBLDLevelSettings();


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLD_h_19_PROLOG
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLD_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLD_h_22_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLD_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATwinBLDLevelSettings;

// ********** End Class ATwinBLDLevelSettings ******************************************************

// ********** Begin ScriptStruct FBuildingsGenerationParameters ************************************
struct Z_Construct_UScriptStruct_FBuildingsGenerationParameters_Statics;
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FBuildingsGenerationParameters(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLD_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBuildingsGenerationParameters_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FBuildingsGenerationParameters(ETypeConstructPhase::Inner); }


struct FBuildingsGenerationParameters;
// ********** End ScriptStruct FBuildingsGenerationParameters **************************************

// ********** Begin ScriptStruct FRoadsGenerationParameters ****************************************
struct Z_Construct_UScriptStruct_FRoadsGenerationParameters_Statics;
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FRoadsGenerationParameters(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLD_h_63_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRoadsGenerationParameters_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FRoadsGenerationParameters(ETypeConstructPhase::Inner); }


struct FRoadsGenerationParameters;
// ********** End ScriptStruct FRoadsGenerationParameters ******************************************

// ********** Begin ScriptStruct FTwinBLDParameters ************************************************
struct Z_Construct_UScriptStruct_FTwinBLDParameters_Statics;
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDParameters(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLD_h_69_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTwinBLDParameters_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FTwinBLDParameters(ETypeConstructPhase::Inner); }


struct FTwinBLDParameters;
// ********** End ScriptStruct FTwinBLDParameters **************************************************

// ********** Begin Class UTwinBLD *****************************************************************
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLD_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleSpawnRoadsComplete); \
	DECLARE_FUNCTION(execHandleSpawnBuildingsComplete); \
	DECLARE_FUNCTION(execSetStreetMapCustomizer); \
	DECLARE_FUNCTION(execGetStreetMapTransform); \
	DECLARE_FUNCTION(execSpawnBuildings); \
	DECLARE_FUNCTION(execSpawnRoads); \
	DECLARE_FUNCTION(execSetOrigin); \
	DECLARE_FUNCTION(execSetStreetMap);


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLD_h_81_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UTwinBLD_Statics;
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLD(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLD_h_81_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UTwinBLD_Statics; \
	friend TWINBLDEDITOR_API UClass* ::Z_Construct_UClass_UTwinBLD(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UTwinBLD, UEditorUtilityObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwinBLDEditor"), Z_Construct_UClass_UTwinBLD) \
	DECLARE_SERIALIZER(UTwinBLD)


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLD_h_81_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTwinBLD(UTwinBLD&&) = delete; \
	UTwinBLD(const UTwinBLD&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwinBLD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwinBLD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTwinBLD) \
	NO_API virtual ~UTwinBLD();


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLD_h_78_PROLOG
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLD_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLD_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLD_h_81_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLD_h_81_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLD_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTwinBLD;

// ********** End Class UTwinBLD *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLD_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
