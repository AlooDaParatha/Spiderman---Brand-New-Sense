// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorEvents.h"

#ifdef ROADBLDRUNTIME_EditorEvents_generated_h
#error "EditorEvents.generated.h already included, missing '#pragma once' in EditorEvents.h"
#endif
#define ROADBLDRUNTIME_EditorEvents_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;

// ********** Begin Class UEditorEventsBP **********************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_EditorEvents_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDefaultIntersectionMaterial);


struct Z_Construct_UClass_UEditorEventsBP_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UEditorEventsBP(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_EditorEvents_h_27_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UEditorEventsBP_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_UEditorEventsBP(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UEditorEventsBP, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_UEditorEventsBP) \
	DECLARE_SERIALIZER(UEditorEventsBP)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_EditorEvents_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorEventsBP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorEventsBP(UEditorEventsBP&&) = delete; \
	UEditorEventsBP(const UEditorEventsBP&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorEventsBP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorEventsBP); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorEventsBP) \
	NO_API virtual ~UEditorEventsBP();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_EditorEvents_h_24_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_EditorEvents_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_EditorEvents_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_EditorEvents_h_27_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_EditorEvents_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorEventsBP;

// ********** End Class UEditorEventsBP ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_EditorEvents_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
