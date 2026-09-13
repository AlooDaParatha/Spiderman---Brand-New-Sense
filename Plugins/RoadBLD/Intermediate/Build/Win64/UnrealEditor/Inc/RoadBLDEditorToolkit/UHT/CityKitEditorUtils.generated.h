// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CityKitEditorUtils.h"

#ifdef ROADBLDEDITORTOOLKIT_CityKitEditorUtils_generated_h
#error "CityKitEditorUtils.generated.h already included, missing '#pragma once' in CityKitEditorUtils.h"
#endif
#define ROADBLDEDITORTOOLKIT_CityKitEditorUtils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlueprint;
class UUntrackedLevelReferenceAsset;
class UWorld;
struct FBulkReferencersParams;
struct FBulkReferencersResult;
struct FCityKitCleanupInfo;
struct FCityKitCleanupParams;
struct FCityKitCleanupResult;

// ********** Begin ScriptStruct FCityKitCleanupParams *********************************************
struct Z_Construct_UScriptStruct_FCityKitCleanupParams_Statics;
ROADBLDEDITORTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FCityKitCleanupParams(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CityKitEditorUtils_h_11_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCityKitCleanupParams_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FCityKitCleanupParams(ETypeConstructPhase::Inner); }


struct FCityKitCleanupParams;
// ********** End ScriptStruct FCityKitCleanupParams ***********************************************

// ********** Begin ScriptStruct FCityKitCleanupInfo ***********************************************
struct Z_Construct_UScriptStruct_FCityKitCleanupInfo_Statics;
ROADBLDEDITORTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FCityKitCleanupInfo(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CityKitEditorUtils_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCityKitCleanupInfo_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FCityKitCleanupInfo(ETypeConstructPhase::Inner); }


struct FCityKitCleanupInfo;
// ********** End ScriptStruct FCityKitCleanupInfo *************************************************

// ********** Begin ScriptStruct FCityKitCleanupResult *********************************************
struct Z_Construct_UScriptStruct_FCityKitCleanupResult_Statics;
ROADBLDEDITORTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FCityKitCleanupResult(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CityKitEditorUtils_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCityKitCleanupResult_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FCityKitCleanupResult(ETypeConstructPhase::Inner); }


struct FCityKitCleanupResult;
// ********** End ScriptStruct FCityKitCleanupResult ***********************************************

// ********** Begin ScriptStruct FBulkReferencersParams ********************************************
struct Z_Construct_UScriptStruct_FBulkReferencersParams_Statics;
ROADBLDEDITORTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FBulkReferencersParams(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CityKitEditorUtils_h_62_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBulkReferencersParams_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FBulkReferencersParams(ETypeConstructPhase::Inner); }


struct FBulkReferencersParams;
// ********** End ScriptStruct FBulkReferencersParams **********************************************

// ********** Begin ScriptStruct FBulkReferencerSet ************************************************
struct Z_Construct_UScriptStruct_FBulkReferencerSet_Statics;
ROADBLDEDITORTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FBulkReferencerSet(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CityKitEditorUtils_h_80_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBulkReferencerSet_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FBulkReferencerSet(ETypeConstructPhase::Inner); }


struct FBulkReferencerSet;
// ********** End ScriptStruct FBulkReferencerSet **************************************************

// ********** Begin ScriptStruct FBulkReferencersResult ********************************************
struct Z_Construct_UScriptStruct_FBulkReferencersResult_Statics;
ROADBLDEDITORTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FBulkReferencersResult(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CityKitEditorUtils_h_92_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBulkReferencersResult_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FBulkReferencersResult(ETypeConstructPhase::Inner); }


struct FBulkReferencersResult;
// ********** End ScriptStruct FBulkReferencersResult **********************************************

// ********** Begin Class UCityKitEditorUtils ******************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CityKitEditorUtils_h_114_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRefreshAndRecompileBlueprint); \
	DECLARE_FUNCTION(execOpenExternalUrlLinkInWebBrowser); \
	DECLARE_FUNCTION(execOpenLevelByDataAsset); \
	DECLARE_FUNCTION(execOpenLevelByAssetReference); \
	DECLARE_FUNCTION(execGetMousePositionInLevelEditorViewport); \
	DECLARE_FUNCTION(execMouseIsHoveringOverViewport); \
	DECLARE_FUNCTION(execBulkFindReferencersAcrossFolder); \
	DECLARE_FUNCTION(execDeduplicateCityBuildAssets); \
	DECLARE_FUNCTION(execGatherCityBuildAssetsToDeduplicate);


struct Z_Construct_UClass_UCityKitEditorUtils_Statics;
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UCityKitEditorUtils(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CityKitEditorUtils_h_114_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UCityKitEditorUtils_Statics; \
	friend ROADBLDEDITORTOOLKIT_API UClass* ::Z_Construct_UClass_UCityKitEditorUtils(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCityKitEditorUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDEditorToolkit"), Z_Construct_UClass_UCityKitEditorUtils) \
	DECLARE_SERIALIZER(UCityKitEditorUtils)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CityKitEditorUtils_h_114_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCityKitEditorUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCityKitEditorUtils(UCityKitEditorUtils&&) = delete; \
	UCityKitEditorUtils(const UCityKitEditorUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCityKitEditorUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCityKitEditorUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCityKitEditorUtils) \
	NO_API virtual ~UCityKitEditorUtils();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CityKitEditorUtils_h_111_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CityKitEditorUtils_h_114_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CityKitEditorUtils_h_114_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CityKitEditorUtils_h_114_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CityKitEditorUtils_h_114_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCityKitEditorUtils;

// ********** End Class UCityKitEditorUtils ********************************************************

// ********** Begin Class UUntrackedLevelReferenceAsset ********************************************
struct Z_Construct_UClass_UUntrackedLevelReferenceAsset_Statics;
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UUntrackedLevelReferenceAsset(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CityKitEditorUtils_h_182_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UUntrackedLevelReferenceAsset_Statics; \
	friend ROADBLDEDITORTOOLKIT_API UClass* ::Z_Construct_UClass_UUntrackedLevelReferenceAsset(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UUntrackedLevelReferenceAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDEditorToolkit"), Z_Construct_UClass_UUntrackedLevelReferenceAsset) \
	DECLARE_SERIALIZER(UUntrackedLevelReferenceAsset)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CityKitEditorUtils_h_182_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUntrackedLevelReferenceAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUntrackedLevelReferenceAsset(UUntrackedLevelReferenceAsset&&) = delete; \
	UUntrackedLevelReferenceAsset(const UUntrackedLevelReferenceAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUntrackedLevelReferenceAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUntrackedLevelReferenceAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUntrackedLevelReferenceAsset) \
	NO_API virtual ~UUntrackedLevelReferenceAsset();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CityKitEditorUtils_h_179_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CityKitEditorUtils_h_182_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CityKitEditorUtils_h_182_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CityKitEditorUtils_h_182_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUntrackedLevelReferenceAsset;

// ********** End Class UUntrackedLevelReferenceAsset **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CityKitEditorUtils_h

// ********** Begin Enum ECityKitLicenseState ******************************************************
#define FOREACH_ENUM_ECITYKITLICENSESTATE(op) \
	op(ECityKitLicenseState::NotFound) \
	op(ECityKitLicenseState::Invalid) \
	op(ECityKitLicenseState::NoMatch) \
	op(ECityKitLicenseState::OutOfDate) \
	op(ECityKitLicenseState::Licensed) 

enum class ECityKitLicenseState : uint8;
template<> struct TIsUEnumClass<ECityKitLicenseState> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ECityKitLicenseState>();
// ********** End Enum ECityKitLicenseState ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
