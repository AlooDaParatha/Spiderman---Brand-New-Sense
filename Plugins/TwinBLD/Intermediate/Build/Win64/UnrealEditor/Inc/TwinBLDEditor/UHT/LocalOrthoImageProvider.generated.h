// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LocalOrthoImageProvider.h"

#ifdef TWINBLDEDITOR_LocalOrthoImageProvider_generated_h
#error "LocalOrthoImageProvider.generated.h already included, missing '#pragma once' in LocalOrthoImageProvider.h"
#endif
#define TWINBLDEDITOR_LocalOrthoImageProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULocalOrthoImageProvider *************************************************
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_LocalOrthoImageProvider_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execValidateConfiguration); \
	DECLARE_FUNCTION(execIsOperationInProgress); \
	DECLARE_FUNCTION(execCancelOperation); \
	DECLARE_FUNCTION(execGenerateImageFromLocalOrtho);


struct Z_Construct_UClass_ULocalOrthoImageProvider_Statics;
TWINBLDEDITOR_API UClass* Z_Construct_UClass_ULocalOrthoImageProvider(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_LocalOrthoImageProvider_h_22_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ULocalOrthoImageProvider_Statics; \
	friend TWINBLDEDITOR_API UClass* ::Z_Construct_UClass_ULocalOrthoImageProvider(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ULocalOrthoImageProvider, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwinBLDEditor"), Z_Construct_UClass_ULocalOrthoImageProvider) \
	DECLARE_SERIALIZER(ULocalOrthoImageProvider)


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_LocalOrthoImageProvider_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULocalOrthoImageProvider(ULocalOrthoImageProvider&&) = delete; \
	ULocalOrthoImageProvider(const ULocalOrthoImageProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocalOrthoImageProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalOrthoImageProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalOrthoImageProvider) \
	NO_API virtual ~ULocalOrthoImageProvider();


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_LocalOrthoImageProvider_h_19_PROLOG
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_LocalOrthoImageProvider_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_LocalOrthoImageProvider_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_LocalOrthoImageProvider_h_22_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_LocalOrthoImageProvider_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULocalOrthoImageProvider;

// ********** End Class ULocalOrthoImageProvider ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_LocalOrthoImageProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
