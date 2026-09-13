// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StraightSkeleton.h"

#ifdef CITYBLDRUNTIME_StraightSkeleton_generated_h
#error "StraightSkeleton.generated.h already included, missing '#pragma once' in StraightSkeleton.h"
#endif
#define CITYBLDRUNTIME_StraightSkeleton_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;

// ********** Begin ScriptStruct FSSKelResult ******************************************************
struct Z_Construct_UScriptStruct_FSSKelResult_Statics;
CITYBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSSKelResult(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_StraightSkeleton_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSSKelResult_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FSSKelResult(ETypeConstructPhase::Inner); }


struct FSSKelResult;
// ********** End ScriptStruct FSSKelResult ********************************************************

// ********** Begin ScriptStruct FSNode ************************************************************
struct Z_Construct_UScriptStruct_FSNode_Statics;
CITYBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSNode(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_StraightSkeleton_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSNode_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FSNode(ETypeConstructPhase::Inner); }


struct FSNode;
// ********** End ScriptStruct FSNode **************************************************************

// ********** Begin Class ASSkelDebug **************************************************************
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_StraightSkeleton_h_232_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDrawNodeNeighbours); \
	DECLARE_FUNCTION(execDrawNodeVertex); \
	DECLARE_FUNCTION(execRebuildAndPrint); \
	DECLARE_FUNCTION(execStepBuild); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execInitSkel);


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_StraightSkeleton_h_232_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ASSkelDebug_Statics;
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_ASSkelDebug(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_StraightSkeleton_h_232_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ASSkelDebug_Statics; \
	friend CITYBLDRUNTIME_API UClass* ::Z_Construct_UClass_ASSkelDebug(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ASSkelDebug, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CityBLDRuntime"), Z_Construct_UClass_ASSkelDebug) \
	DECLARE_SERIALIZER(ASSkelDebug)


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_StraightSkeleton_h_232_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASSkelDebug(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASSkelDebug(ASSkelDebug&&) = delete; \
	ASSkelDebug(const ASSkelDebug&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASSkelDebug); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASSkelDebug); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASSkelDebug) \
	NO_API virtual ~ASSkelDebug();


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_StraightSkeleton_h_229_PROLOG
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_StraightSkeleton_h_232_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_StraightSkeleton_h_232_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_StraightSkeleton_h_232_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_StraightSkeleton_h_232_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_StraightSkeleton_h_232_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASSkelDebug;

// ********** End Class ASSkelDebug ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_StraightSkeleton_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
