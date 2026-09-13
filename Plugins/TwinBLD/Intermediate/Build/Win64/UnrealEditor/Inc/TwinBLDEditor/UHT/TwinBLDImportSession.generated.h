// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TwinBLDImportSession.h"

#ifdef TWINBLDEDITOR_TwinBLDImportSession_generated_h
#error "TwinBLDImportSession.generated.h already included, missing '#pragma once' in TwinBLDImportSession.h"
#endif
#define TWINBLDEDITOR_TwinBLDImportSession_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
struct FTwinBLDImportTileId;
struct FTwinBLDLandscapeTileResult;

// ********** Begin Class UTwinBLDImportSession ****************************************************
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDImportSession_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleSatelliteImportComplete); \
	DECLARE_FUNCTION(execHandleLandscapeBatchGenerated); \
	DECLARE_FUNCTION(execHandleLandscapeGenerated); \
	DECLARE_FUNCTION(execIsTileSelected); \
	DECLARE_FUNCTION(execClearTileSelection); \
	DECLARE_FUNCTION(execSetTileSelection); \
	DECLARE_FUNCTION(execToggleTileSelection); \
	DECLARE_FUNCTION(execImportSatelliteForSelectedTiles); \
	DECLARE_FUNCTION(execGenerateSelectedTiles); \
	DECLARE_FUNCTION(execHasStrictValidShapefileCrs); \
	DECLARE_FUNCTION(execLoadLocalShapefile); \
	DECLARE_FUNCTION(execLoadLocalOsmFile);


struct Z_Construct_UClass_UTwinBLDImportSession_Statics;
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDImportSession(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDImportSession_h_38_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UTwinBLDImportSession_Statics; \
	friend TWINBLDEDITOR_API UClass* ::Z_Construct_UClass_UTwinBLDImportSession(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UTwinBLDImportSession, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwinBLDEditor"), Z_Construct_UClass_UTwinBLDImportSession) \
	DECLARE_SERIALIZER(UTwinBLDImportSession)


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDImportSession_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTwinBLDImportSession(UTwinBLDImportSession&&) = delete; \
	UTwinBLDImportSession(const UTwinBLDImportSession&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwinBLDImportSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwinBLDImportSession); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTwinBLDImportSession) \
	NO_API virtual ~UTwinBLDImportSession();


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDImportSession_h_35_PROLOG
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDImportSession_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDImportSession_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDImportSession_h_38_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDImportSession_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTwinBLDImportSession;

// ********** End Class UTwinBLDImportSession ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDImportSession_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
