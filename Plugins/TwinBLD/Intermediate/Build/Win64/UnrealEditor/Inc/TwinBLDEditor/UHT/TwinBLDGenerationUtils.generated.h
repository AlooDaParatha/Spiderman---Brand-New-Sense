// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TwinBLDGenerationUtils.h"

#ifdef TWINBLDEDITOR_TwinBLDGenerationUtils_generated_h
#error "TwinBLDGenerationUtils.generated.h already included, missing '#pragma once' in TwinBLDGenerationUtils.h"
#endif
#define TWINBLDEDITOR_TwinBLDGenerationUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ALandscape;
class UClass;
class UObject;
class UTwinBLDLandscapeImportOptions;
struct FBuildingGenerationModalOptions;
struct FParcelsGenerationModalOptions;
struct FRoadStripGenerationOptions;
struct FStreetMapRoadStripSettings;

// ********** Begin Class UStreetMapRoadStripDialogSettings ****************************************
struct Z_Construct_UClass_UStreetMapRoadStripDialogSettings_Statics;
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UStreetMapRoadStripDialogSettings(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_20_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UStreetMapRoadStripDialogSettings_Statics; \
	friend TWINBLDEDITOR_API UClass* ::Z_Construct_UClass_UStreetMapRoadStripDialogSettings(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UStreetMapRoadStripDialogSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwinBLDEditor"), Z_Construct_UClass_UStreetMapRoadStripDialogSettings) \
	DECLARE_SERIALIZER(UStreetMapRoadStripDialogSettings)


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStreetMapRoadStripDialogSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStreetMapRoadStripDialogSettings(UStreetMapRoadStripDialogSettings&&) = delete; \
	UStreetMapRoadStripDialogSettings(const UStreetMapRoadStripDialogSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStreetMapRoadStripDialogSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreetMapRoadStripDialogSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreetMapRoadStripDialogSettings) \
	NO_API virtual ~UStreetMapRoadStripDialogSettings();


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_17_PROLOG
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_20_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStreetMapRoadStripDialogSettings;

// ********** End Class UStreetMapRoadStripDialogSettings ******************************************

// ********** Begin Class UTwinBLDGenerationDialogSettings *****************************************
struct Z_Construct_UClass_UTwinBLDGenerationDialogSettings_Statics;
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDGenerationDialogSettings(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_31_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UTwinBLDGenerationDialogSettings_Statics; \
	friend TWINBLDEDITOR_API UClass* ::Z_Construct_UClass_UTwinBLDGenerationDialogSettings(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UTwinBLDGenerationDialogSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwinBLDEditor"), Z_Construct_UClass_UTwinBLDGenerationDialogSettings) \
	DECLARE_SERIALIZER(UTwinBLDGenerationDialogSettings)


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTwinBLDGenerationDialogSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTwinBLDGenerationDialogSettings(UTwinBLDGenerationDialogSettings&&) = delete; \
	UTwinBLDGenerationDialogSettings(const UTwinBLDGenerationDialogSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwinBLDGenerationDialogSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwinBLDGenerationDialogSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTwinBLDGenerationDialogSettings) \
	NO_API virtual ~UTwinBLDGenerationDialogSettings();


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_28_PROLOG
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_31_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTwinBLDGenerationDialogSettings;

// ********** End Class UTwinBLDGenerationDialogSettings *******************************************

// ********** Begin Class UTwinBLDReplicityRoadDialogSettings **************************************
struct Z_Construct_UClass_UTwinBLDReplicityRoadDialogSettings_Statics;
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDReplicityRoadDialogSettings(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_41_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UTwinBLDReplicityRoadDialogSettings_Statics; \
	friend TWINBLDEDITOR_API UClass* ::Z_Construct_UClass_UTwinBLDReplicityRoadDialogSettings(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UTwinBLDReplicityRoadDialogSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwinBLDEditor"), Z_Construct_UClass_UTwinBLDReplicityRoadDialogSettings) \
	DECLARE_SERIALIZER(UTwinBLDReplicityRoadDialogSettings)


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTwinBLDReplicityRoadDialogSettings(UTwinBLDReplicityRoadDialogSettings&&) = delete; \
	UTwinBLDReplicityRoadDialogSettings(const UTwinBLDReplicityRoadDialogSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwinBLDReplicityRoadDialogSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwinBLDReplicityRoadDialogSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTwinBLDReplicityRoadDialogSettings) \
	NO_API virtual ~UTwinBLDReplicityRoadDialogSettings();


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_38_PROLOG
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_41_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTwinBLDReplicityRoadDialogSettings;

// ********** End Class UTwinBLDReplicityRoadDialogSettings ****************************************

// ********** Begin ScriptStruct FRoadStripGenerationOptions ***************************************
struct Z_Construct_UScriptStruct_FRoadStripGenerationOptions_Statics;
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FRoadStripGenerationOptions(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_53_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRoadStripGenerationOptions_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FRoadStripGenerationOptions(ETypeConstructPhase::Inner); }


struct FRoadStripGenerationOptions;
// ********** End ScriptStruct FRoadStripGenerationOptions *****************************************

// ********** Begin ScriptStruct FBuildingGenerationModalOptions ***********************************
struct Z_Construct_UScriptStruct_FBuildingGenerationModalOptions_Statics;
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FBuildingGenerationModalOptions(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_83_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBuildingGenerationModalOptions_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FBuildingGenerationModalOptions(ETypeConstructPhase::Inner); }


struct FBuildingGenerationModalOptions;
// ********** End ScriptStruct FBuildingGenerationModalOptions *************************************

// ********** Begin ScriptStruct FParcelsGenerationModalOptions ************************************
struct Z_Construct_UScriptStruct_FParcelsGenerationModalOptions_Statics;
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FParcelsGenerationModalOptions(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_111_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FParcelsGenerationModalOptions_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FParcelsGenerationModalOptions(ETypeConstructPhase::Inner); }


struct FParcelsGenerationModalOptions;
// ********** End ScriptStruct FParcelsGenerationModalOptions **************************************

// ********** Begin Class UTwinBLDLandscapeImportOptions *******************************************
struct Z_Construct_UClass_UTwinBLDLandscapeImportOptions_Statics;
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDLandscapeImportOptions(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_126_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UTwinBLDLandscapeImportOptions_Statics; \
	friend TWINBLDEDITOR_API UClass* ::Z_Construct_UClass_UTwinBLDLandscapeImportOptions(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UTwinBLDLandscapeImportOptions, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwinBLDEditor"), Z_Construct_UClass_UTwinBLDLandscapeImportOptions) \
	DECLARE_SERIALIZER(UTwinBLDLandscapeImportOptions)


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_126_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTwinBLDLandscapeImportOptions(UTwinBLDLandscapeImportOptions&&) = delete; \
	UTwinBLDLandscapeImportOptions(const UTwinBLDLandscapeImportOptions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwinBLDLandscapeImportOptions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwinBLDLandscapeImportOptions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTwinBLDLandscapeImportOptions) \
	NO_API virtual ~UTwinBLDLandscapeImportOptions();


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_123_PROLOG
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_126_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_126_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_126_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTwinBLDLandscapeImportOptions;

// ********** End Class UTwinBLDLandscapeImportOptions *********************************************

// ********** Begin Class UTwinBLDGenerationUtils **************************************************
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_151_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetupLandscapePCG); \
	DECLARE_FUNCTION(execEnableLandscapeSplineMirroringAndSnapRoads); \
	DECLARE_FUNCTION(execHasBuildingActors); \
	DECLARE_FUNCTION(execHasRoadNetworkActor); \
	DECLARE_FUNCTION(execHasLandscapeActorInLevel); \
	DECLARE_FUNCTION(execShowParcelsGenerationOptionsModal); \
	DECLARE_FUNCTION(execShowBuildingGenerationOptionsModal); \
	DECLARE_FUNCTION(execShowGenerateRoadStripsOptionsModal); \
	DECLARE_FUNCTION(execImportLandscapeWithDialog);


struct Z_Construct_UClass_UTwinBLDGenerationUtils_Statics;
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDGenerationUtils(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_151_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UTwinBLDGenerationUtils_Statics; \
	friend TWINBLDEDITOR_API UClass* ::Z_Construct_UClass_UTwinBLDGenerationUtils(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UTwinBLDGenerationUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwinBLDEditor"), Z_Construct_UClass_UTwinBLDGenerationUtils) \
	DECLARE_SERIALIZER(UTwinBLDGenerationUtils)


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_151_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTwinBLDGenerationUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTwinBLDGenerationUtils(UTwinBLDGenerationUtils&&) = delete; \
	UTwinBLDGenerationUtils(const UTwinBLDGenerationUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwinBLDGenerationUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwinBLDGenerationUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTwinBLDGenerationUtils) \
	NO_API virtual ~UTwinBLDGenerationUtils();


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_148_PROLOG
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_151_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_151_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_151_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h_151_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTwinBLDGenerationUtils;

// ********** End Class UTwinBLDGenerationUtils ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
