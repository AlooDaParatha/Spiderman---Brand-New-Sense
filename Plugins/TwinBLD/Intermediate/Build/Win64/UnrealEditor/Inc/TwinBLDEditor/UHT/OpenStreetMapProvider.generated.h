// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenStreetMapProvider.h"

#ifdef TWINBLDEDITOR_OpenStreetMapProvider_generated_h
#error "OpenStreetMapProvider.generated.h already included, missing '#pragma once' in OpenStreetMapProvider.h"
#endif
#define TWINBLDEDITOR_OpenStreetMapProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStreetMap;

// ********** Begin Class UOsmProvider *************************************************************
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_OpenStreetMapProvider_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadOSMData); \
	DECLARE_FUNCTION(execImportOsmContent); \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execDownloadUrls);


struct Z_Construct_UClass_UOsmProvider_Statics;
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UOsmProvider(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_OpenStreetMapProvider_h_22_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UOsmProvider_Statics; \
	friend TWINBLDEDITOR_API UClass* ::Z_Construct_UClass_UOsmProvider(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UOsmProvider, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwinBLDEditor"), Z_Construct_UClass_UOsmProvider) \
	DECLARE_SERIALIZER(UOsmProvider)


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_OpenStreetMapProvider_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOsmProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOsmProvider(UOsmProvider&&) = delete; \
	UOsmProvider(const UOsmProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOsmProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOsmProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOsmProvider) \
	NO_API virtual ~UOsmProvider();


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_OpenStreetMapProvider_h_19_PROLOG
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_OpenStreetMapProvider_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_OpenStreetMapProvider_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_OpenStreetMapProvider_h_22_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_OpenStreetMapProvider_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOsmProvider;

// ********** End Class UOsmProvider ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_OpenStreetMapProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
