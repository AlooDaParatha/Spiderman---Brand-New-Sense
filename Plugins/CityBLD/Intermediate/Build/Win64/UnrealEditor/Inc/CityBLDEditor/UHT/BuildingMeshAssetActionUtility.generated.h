// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BuildingMeshAssetActionUtility.h"

#ifdef CITYBLDEDITOR_BuildingMeshAssetActionUtility_generated_h
#error "BuildingMeshAssetActionUtility.generated.h already included, missing '#pragma once' in BuildingMeshAssetActionUtility.h"
#endif
#define CITYBLDEDITOR_BuildingMeshAssetActionUtility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBuildingMeshAssetActionUtility ******************************************
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BuildingMeshAssetActionUtility_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBakeDetailMask); \
	DECLARE_FUNCTION(execCreateBuildingMeshAssets);


struct Z_Construct_UClass_UBuildingMeshAssetActionUtility_Statics;
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingMeshAssetActionUtility(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BuildingMeshAssetActionUtility_h_13_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UBuildingMeshAssetActionUtility_Statics; \
	friend CITYBLDEDITOR_API UClass* ::Z_Construct_UClass_UBuildingMeshAssetActionUtility(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UBuildingMeshAssetActionUtility, UAssetActionUtility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CityBLDEditor"), Z_Construct_UClass_UBuildingMeshAssetActionUtility) \
	DECLARE_SERIALIZER(UBuildingMeshAssetActionUtility)


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BuildingMeshAssetActionUtility_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBuildingMeshAssetActionUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBuildingMeshAssetActionUtility(UBuildingMeshAssetActionUtility&&) = delete; \
	UBuildingMeshAssetActionUtility(const UBuildingMeshAssetActionUtility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuildingMeshAssetActionUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuildingMeshAssetActionUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuildingMeshAssetActionUtility) \
	NO_API virtual ~UBuildingMeshAssetActionUtility();


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BuildingMeshAssetActionUtility_h_10_PROLOG
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BuildingMeshAssetActionUtility_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BuildingMeshAssetActionUtility_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BuildingMeshAssetActionUtility_h_13_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BuildingMeshAssetActionUtility_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBuildingMeshAssetActionUtility;

// ********** End Class UBuildingMeshAssetActionUtility ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BuildingMeshAssetActionUtility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
