// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BakeToMesh/RoadBLDBakeToMeshLibrary.h"

#ifdef ROADBLDEDITORTOOLKIT_RoadBLDBakeToMeshLibrary_generated_h
#error "RoadBLDBakeToMeshLibrary.generated.h already included, missing '#pragma once' in RoadBLDBakeToMeshLibrary.h"
#endif
#define ROADBLDEDITORTOOLKIT_RoadBLDBakeToMeshLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ARoadGeo;

// ********** Begin Class URoadBLDBakeToMeshLibrary ************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_BakeToMesh_RoadBLDBakeToMeshLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBakeSelectedRoadGeoToMesh); \
	DECLARE_FUNCTION(execBakeRoadGeoToMesh);


struct Z_Construct_UClass_URoadBLDBakeToMeshLibrary_Statics;
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadBLDBakeToMeshLibrary(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_BakeToMesh_RoadBLDBakeToMeshLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URoadBLDBakeToMeshLibrary_Statics; \
	friend ROADBLDEDITORTOOLKIT_API UClass* ::Z_Construct_UClass_URoadBLDBakeToMeshLibrary(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URoadBLDBakeToMeshLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDEditorToolkit"), Z_Construct_UClass_URoadBLDBakeToMeshLibrary) \
	DECLARE_SERIALIZER(URoadBLDBakeToMeshLibrary)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_BakeToMesh_RoadBLDBakeToMeshLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoadBLDBakeToMeshLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoadBLDBakeToMeshLibrary(URoadBLDBakeToMeshLibrary&&) = delete; \
	URoadBLDBakeToMeshLibrary(const URoadBLDBakeToMeshLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoadBLDBakeToMeshLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoadBLDBakeToMeshLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoadBLDBakeToMeshLibrary) \
	NO_API virtual ~URoadBLDBakeToMeshLibrary();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_BakeToMesh_RoadBLDBakeToMeshLibrary_h_12_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_BakeToMesh_RoadBLDBakeToMeshLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_BakeToMesh_RoadBLDBakeToMeshLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_BakeToMesh_RoadBLDBakeToMeshLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_BakeToMesh_RoadBLDBakeToMeshLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoadBLDBakeToMeshLibrary;

// ********** End Class URoadBLDBakeToMeshLibrary **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_BakeToMesh_RoadBLDBakeToMeshLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
