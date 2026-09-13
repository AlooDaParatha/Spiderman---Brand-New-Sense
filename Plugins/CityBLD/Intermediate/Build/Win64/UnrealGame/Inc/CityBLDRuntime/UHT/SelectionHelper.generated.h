// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SelectionHelper.h"

#ifdef CITYBLDRUNTIME_SelectionHelper_generated_h
#error "SelectionHelper.generated.h already included, missing '#pragma once' in SelectionHelper.h"
#endif
#define CITYBLDRUNTIME_SelectionHelper_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
struct FPrimitiveDrawWrapper;

// ********** Begin Class ASelectionHelperBase *****************************************************
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_SelectionHelper_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerateEdgeSplines); \
	DECLARE_FUNCTION(execResetPointsAndEdges); \
	DECLARE_FUNCTION(execRenderElements); \
	DECLARE_FUNCTION(execUpdateSnapPointsFromHits); \
	DECLARE_FUNCTION(execUpdatePointsAndEdges);


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_SelectionHelper_h_15_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ASelectionHelperBase_Statics;
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_ASelectionHelperBase(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_SelectionHelper_h_15_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ASelectionHelperBase_Statics; \
	friend CITYBLDRUNTIME_API UClass* ::Z_Construct_UClass_ASelectionHelperBase(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ASelectionHelperBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CityBLDRuntime"), Z_Construct_UClass_ASelectionHelperBase) \
	DECLARE_SERIALIZER(ASelectionHelperBase)


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_SelectionHelper_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASelectionHelperBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASelectionHelperBase(ASelectionHelperBase&&) = delete; \
	ASelectionHelperBase(const ASelectionHelperBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASelectionHelperBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASelectionHelperBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASelectionHelperBase) \
	NO_API virtual ~ASelectionHelperBase();


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_SelectionHelper_h_12_PROLOG
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_SelectionHelper_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_SelectionHelper_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_SelectionHelper_h_15_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_SelectionHelper_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_SelectionHelper_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASelectionHelperBase;

// ********** End Class ASelectionHelperBase *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_SelectionHelper_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
