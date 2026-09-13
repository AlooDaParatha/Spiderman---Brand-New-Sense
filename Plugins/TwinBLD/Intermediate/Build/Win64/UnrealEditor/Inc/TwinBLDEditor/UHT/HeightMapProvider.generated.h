// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HeightMapProvider.h"

#ifdef TWINBLDEDITOR_HeightMapProvider_generated_h
#error "HeightMapProvider.generated.h already included, missing '#pragma once' in HeightMapProvider.h"
#endif
#define TWINBLDEDITOR_HeightMapProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTwinBLDHeightmap *************************************************
struct Z_Construct_UScriptStruct_FTwinBLDHeightmap_Statics;
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDHeightmap(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_HeightMapProvider_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTwinBLDHeightmap_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FTwinBLDHeightmap(ETypeConstructPhase::Inner); }


struct FTwinBLDHeightmap;
// ********** End ScriptStruct FTwinBLDHeightmap ***************************************************

// ********** Begin Class UHeightMapProvider *******************************************************
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_HeightMapProvider_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execValidateConfiguration); \
	DECLARE_FUNCTION(execIsOperationInProgress); \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execCancelOperation);


struct Z_Construct_UClass_UHeightMapProvider_Statics;
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UHeightMapProvider(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_HeightMapProvider_h_84_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UHeightMapProvider_Statics; \
	friend TWINBLDEDITOR_API UClass* ::Z_Construct_UClass_UHeightMapProvider(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UHeightMapProvider, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwinBLDEditor"), Z_Construct_UClass_UHeightMapProvider) \
	DECLARE_SERIALIZER(UHeightMapProvider)


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_HeightMapProvider_h_84_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHeightMapProvider(UHeightMapProvider&&) = delete; \
	UHeightMapProvider(const UHeightMapProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeightMapProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeightMapProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeightMapProvider) \
	NO_API virtual ~UHeightMapProvider();


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_HeightMapProvider_h_81_PROLOG
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_HeightMapProvider_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_HeightMapProvider_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_HeightMapProvider_h_84_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_HeightMapProvider_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHeightMapProvider;

// ********** End Class UHeightMapProvider *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_HeightMapProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
