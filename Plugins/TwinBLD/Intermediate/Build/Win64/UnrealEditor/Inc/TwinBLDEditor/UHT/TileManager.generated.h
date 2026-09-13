// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TileManager.h"

#ifdef TWINBLDEDITOR_TileManager_generated_h
#error "TileManager.generated.h already included, missing '#pragma once' in TileManager.h"
#endif
#define TWINBLDEDITOR_TileManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTileManager *************************************************************
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TileManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTilesArray); \
	DECLARE_FUNCTION(execGetTilesBounds); \
	DECLARE_FUNCTION(execGetTileWorldBounds); \
	DECLARE_FUNCTION(execGetTileFromWorld); \
	DECLARE_FUNCTION(execUpdateActiveTiles);


struct Z_Construct_UClass_UTileManager_Statics;
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTileManager(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TileManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UTileManager_Statics; \
	friend TWINBLDEDITOR_API UClass* ::Z_Construct_UClass_UTileManager(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UTileManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwinBLDEditor"), Z_Construct_UClass_UTileManager) \
	DECLARE_SERIALIZER(UTileManager)


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TileManager_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTileManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTileManager(UTileManager&&) = delete; \
	UTileManager(const UTileManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTileManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTileManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTileManager) \
	NO_API virtual ~UTileManager();


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TileManager_h_11_PROLOG
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TileManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TileManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TileManager_h_14_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TileManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTileManager;

// ********** End Class UTileManager ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TileManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
