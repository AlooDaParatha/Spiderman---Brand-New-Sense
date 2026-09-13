// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SatelliteImageProvider.h"

#ifdef TWINBLDEDITOR_SatelliteImageProvider_generated_h
#error "SatelliteImageProvider.generated.h already included, missing '#pragma once' in SatelliteImageProvider.h"
#endif
#define TWINBLDEDITOR_SatelliteImageProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;

// ********** Begin Class USatelliteImageProvider **************************************************
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_SatelliteImageProvider_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execValidateConfiguration); \
	DECLARE_FUNCTION(execIsOperationInProgress); \
	DECLARE_FUNCTION(execCancelOperation); \
	DECLARE_FUNCTION(execGenerateImageFromCoordinates);


struct Z_Construct_UClass_USatelliteImageProvider_Statics;
TWINBLDEDITOR_API UClass* Z_Construct_UClass_USatelliteImageProvider(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_SatelliteImageProvider_h_28_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_USatelliteImageProvider_Statics; \
	friend TWINBLDEDITOR_API UClass* ::Z_Construct_UClass_USatelliteImageProvider(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(USatelliteImageProvider, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwinBLDEditor"), Z_Construct_UClass_USatelliteImageProvider) \
	DECLARE_SERIALIZER(USatelliteImageProvider)


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_SatelliteImageProvider_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USatelliteImageProvider(USatelliteImageProvider&&) = delete; \
	USatelliteImageProvider(const USatelliteImageProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USatelliteImageProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USatelliteImageProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USatelliteImageProvider) \
	NO_API virtual ~USatelliteImageProvider();


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_SatelliteImageProvider_h_25_PROLOG
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_SatelliteImageProvider_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_SatelliteImageProvider_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_SatelliteImageProvider_h_28_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_SatelliteImageProvider_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USatelliteImageProvider;

// ********** End Class USatelliteImageProvider ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_SatelliteImageProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
