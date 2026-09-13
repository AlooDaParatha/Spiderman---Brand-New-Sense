// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BuildingStyleProvider.h"

#ifdef TWINBLDEDITOR_BuildingStyleProvider_generated_h
#error "BuildingStyleProvider.generated.h already included, missing '#pragma once' in BuildingStyleProvider.h"
#endif
#define TWINBLDEDITOR_BuildingStyleProvider_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Class UBuildingStyleProvider ***************************************************
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_BuildingStyleProvider_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBuildingStyleComplete_Internal); \
	DECLARE_FUNCTION(execGetBuildingStyleComplete); \
	DECLARE_FUNCTION(execGetBuildingStyle);


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_BuildingStyleProvider_h_14_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UBuildingStyleProvider_Statics;
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingStyleProvider(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_BuildingStyleProvider_h_14_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UBuildingStyleProvider_Statics; \
	friend TWINBLDEDITOR_API UClass* ::Z_Construct_UClass_UBuildingStyleProvider(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UBuildingStyleProvider, UEditorUtilityObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwinBLDEditor"), Z_Construct_UClass_UBuildingStyleProvider) \
	DECLARE_SERIALIZER(UBuildingStyleProvider)


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_BuildingStyleProvider_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBuildingStyleProvider(UBuildingStyleProvider&&) = delete; \
	UBuildingStyleProvider(const UBuildingStyleProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuildingStyleProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuildingStyleProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuildingStyleProvider) \
	NO_API virtual ~UBuildingStyleProvider();


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_BuildingStyleProvider_h_11_PROLOG
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_BuildingStyleProvider_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_BuildingStyleProvider_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_BuildingStyleProvider_h_14_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_BuildingStyleProvider_h_14_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_BuildingStyleProvider_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBuildingStyleProvider;

// ********** End Class UBuildingStyleProvider *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_BuildingStyleProvider_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
