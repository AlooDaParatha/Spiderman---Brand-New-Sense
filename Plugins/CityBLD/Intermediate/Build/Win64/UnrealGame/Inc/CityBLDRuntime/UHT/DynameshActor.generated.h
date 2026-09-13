// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynameshActor.h"

#ifdef CITYBLDRUNTIME_DynameshActor_generated_h
#error "DynameshActor.generated.h already included, missing '#pragma once' in DynameshActor.h"
#endif
#define CITYBLDRUNTIME_DynameshActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AStaticMeshActor;
class UDynamicMesh;

// ********** Begin Class ADynameshActor ***********************************************************
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_DynameshActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIncrementProgress); \
	DECLARE_FUNCTION(execCopyPropertiesFromStaticMesh); \
	DECLARE_FUNCTION(execCopyPropertiesToStaticMesh); \
	DECLARE_FUNCTION(execTriggerTotalRebuild); \
	DECLARE_FUNCTION(execTriggerMeshRebuild); \
	DECLARE_FUNCTION(execOnTotalRebuild); \
	DECLARE_FUNCTION(execOnRebuildGeneratedMesh);


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_DynameshActor_h_28_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ADynameshActor_Statics;
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_ADynameshActor(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_DynameshActor_h_28_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ADynameshActor_Statics; \
	friend CITYBLDRUNTIME_API UClass* ::Z_Construct_UClass_ADynameshActor(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ADynameshActor, ADynamicMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CityBLDRuntime"), Z_Construct_UClass_ADynameshActor) \
	DECLARE_SERIALIZER(ADynameshActor)


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_DynameshActor_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADynameshActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADynameshActor(ADynameshActor&&) = delete; \
	ADynameshActor(const ADynameshActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADynameshActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADynameshActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADynameshActor)


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_DynameshActor_h_25_PROLOG
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_DynameshActor_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_DynameshActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_DynameshActor_h_28_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_DynameshActor_h_28_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_DynameshActor_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADynameshActor;

// ********** End Class ADynameshActor *************************************************************

// ********** Begin Class UDynameshGenerationSubsystem *********************************************
struct Z_Construct_UClass_UDynameshGenerationSubsystem_Statics;
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UDynameshGenerationSubsystem(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_DynameshActor_h_174_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UDynameshGenerationSubsystem_Statics; \
	friend CITYBLDRUNTIME_API UClass* ::Z_Construct_UClass_UDynameshGenerationSubsystem(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UDynameshGenerationSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CityBLDRuntime"), Z_Construct_UClass_UDynameshGenerationSubsystem) \
	DECLARE_SERIALIZER(UDynameshGenerationSubsystem)


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_DynameshActor_h_174_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynameshGenerationSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynameshGenerationSubsystem(UDynameshGenerationSubsystem&&) = delete; \
	UDynameshGenerationSubsystem(const UDynameshGenerationSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynameshGenerationSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynameshGenerationSubsystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynameshGenerationSubsystem) \
	NO_API virtual ~UDynameshGenerationSubsystem();


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_DynameshActor_h_171_PROLOG
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_DynameshActor_h_174_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_DynameshActor_h_174_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_DynameshActor_h_174_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynameshGenerationSubsystem;

// ********** End Class UDynameshGenerationSubsystem ***********************************************

// ********** Begin Class UDynameshGenerationManager ***********************************************
struct Z_Construct_UClass_UDynameshGenerationManager_Statics;
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UDynameshGenerationManager(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_DynameshActor_h_213_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UDynameshGenerationManager_Statics; \
	friend CITYBLDRUNTIME_API UClass* ::Z_Construct_UClass_UDynameshGenerationManager(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UDynameshGenerationManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CityBLDRuntime"), Z_Construct_UClass_UDynameshGenerationManager) \
	DECLARE_SERIALIZER(UDynameshGenerationManager)


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_DynameshActor_h_213_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynameshGenerationManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynameshGenerationManager(UDynameshGenerationManager&&) = delete; \
	UDynameshGenerationManager(const UDynameshGenerationManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynameshGenerationManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynameshGenerationManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynameshGenerationManager) \
	NO_API virtual ~UDynameshGenerationManager();


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_DynameshActor_h_210_PROLOG
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_DynameshActor_h_213_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_DynameshActor_h_213_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_DynameshActor_h_213_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynameshGenerationManager;

// ********** End Class UDynameshGenerationManager *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_DynameshActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
