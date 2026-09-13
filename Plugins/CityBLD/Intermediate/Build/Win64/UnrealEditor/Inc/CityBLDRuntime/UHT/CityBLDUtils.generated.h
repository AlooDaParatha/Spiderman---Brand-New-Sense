// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CityBLDUtils.h"

#ifdef CITYBLDRUNTIME_CityBLDUtils_generated_h
#error "CityBLDUtils.generated.h already included, missing '#pragma once' in CityBLDUtils.h"
#endif
#define CITYBLDRUNTIME_CityBLDUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBuildingStyle;
class UClass;

// ********** Begin Class UCityBLDUtils ************************************************************
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBLDUtils_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsPointOnPolygonBoundary2D); \
	DECLARE_FUNCTION(execIsPointInPolygon2D); \
	DECLARE_FUNCTION(execGetBestNumFloorsForHeight); \
	DECLARE_FUNCTION(execRemoveDuplicatePoints3d); \
	DECLARE_FUNCTION(execRemoveDuplicatePoints2d); \
	DECLARE_FUNCTION(execRemoveCollinearPoints3d); \
	DECLARE_FUNCTION(execRemoveCollinearPoints2d); \
	DECLARE_FUNCTION(execFindIntersectionPointFromVector);


struct Z_Construct_UClass_UCityBLDUtils_Statics;
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UCityBLDUtils(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBLDUtils_h_15_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UCityBLDUtils_Statics; \
	friend CITYBLDRUNTIME_API UClass* ::Z_Construct_UClass_UCityBLDUtils(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCityBLDUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CityBLDRuntime"), Z_Construct_UClass_UCityBLDUtils) \
	DECLARE_SERIALIZER(UCityBLDUtils)


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBLDUtils_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCityBLDUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCityBLDUtils(UCityBLDUtils&&) = delete; \
	UCityBLDUtils(const UCityBLDUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCityBLDUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCityBLDUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCityBLDUtils) \
	NO_API virtual ~UCityBLDUtils();


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBLDUtils_h_12_PROLOG
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBLDUtils_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBLDUtils_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBLDUtils_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBLDUtils_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCityBLDUtils;

// ********** End Class UCityBLDUtils **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBLDUtils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
