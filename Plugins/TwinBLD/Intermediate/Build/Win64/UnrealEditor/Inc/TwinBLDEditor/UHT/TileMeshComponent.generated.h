// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TileMeshComponent.h"

#ifdef TWINBLDEDITOR_TileMeshComponent_generated_h
#error "TileMeshComponent.generated.h already included, missing '#pragma once' in TileMeshComponent.h"
#endif
#define TWINBLDEDITOR_TileMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTileMeshComponent *******************************************************
struct Z_Construct_UClass_UTileMeshComponent_Statics;
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTileMeshComponent(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TileMeshComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UTileMeshComponent_Statics; \
	friend TWINBLDEDITOR_API UClass* ::Z_Construct_UClass_UTileMeshComponent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UTileMeshComponent, UProceduralMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TwinBLDEditor"), Z_Construct_UClass_UTileMeshComponent) \
	DECLARE_SERIALIZER(UTileMeshComponent)


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TileMeshComponent_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTileMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTileMeshComponent(UTileMeshComponent&&) = delete; \
	UTileMeshComponent(const UTileMeshComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTileMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTileMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTileMeshComponent) \
	NO_API virtual ~UTileMeshComponent();


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TileMeshComponent_h_28_PROLOG
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TileMeshComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TileMeshComponent_h_31_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TileMeshComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTileMeshComponent;

// ********** End Class UTileMeshComponent *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TileMeshComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
