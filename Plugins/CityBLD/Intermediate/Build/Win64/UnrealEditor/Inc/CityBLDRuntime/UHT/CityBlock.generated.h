// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CityBlock.h"

#ifdef CITYBLDRUNTIME_CityBlock_generated_h
#error "CityBlock.generated.h already included, missing '#pragma once' in CityBlock.h"
#endif
#define CITYBLDRUNTIME_CityBlock_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACityBlockGeo;
class UMaterialInterface;
struct FOffsetSubdivisionParams;
struct FRecursiveSubdivisionParams;
struct FSkeletonSubdivisionParams;

// ********** Begin Class ACityBlock ***************************************************************
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBlock_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerate); \
	DECLARE_FUNCTION(execAssignLandUsesToParcels); \
	DECLARE_FUNCTION(execBuildMesh); \
	DECLARE_FUNCTION(execGenerateParcelsSkeleton); \
	DECLARE_FUNCTION(execGenerateParcelsRecursive); \
	DECLARE_FUNCTION(execGenerateParcelsOffset); \
	DECLARE_FUNCTION(execEnsureCounterClockwiseOrder); \
	DECLARE_FUNCTION(execDestroyCityBlockGeo); \
	DECLARE_FUNCTION(execHasCityBlockGeo); \
	DECLARE_FUNCTION(execGetCityBlockGeo); \
	DECLARE_FUNCTION(execUnregisterCityBlockGeo); \
	DECLARE_FUNCTION(execRegisterCityBlockGeo); \
	DECLARE_FUNCTION(execEnforceLinearSplinePoints); \
	DECLARE_FUNCTION(execUpdateParcelGenerationSpline); \
	DECLARE_FUNCTION(execUpdateInnerLoopFromOuter);


struct Z_Construct_UClass_ACityBlock_Statics;
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_ACityBlock(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBlock_h_33_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ACityBlock_Statics; \
	friend CITYBLDRUNTIME_API UClass* ::Z_Construct_UClass_ACityBlock(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ACityBlock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CityBLDRuntime"), Z_Construct_UClass_ACityBlock) \
	DECLARE_SERIALIZER(ACityBlock)


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBlock_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACityBlock(ACityBlock&&) = delete; \
	ACityBlock(const ACityBlock&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACityBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACityBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACityBlock) \
	NO_API virtual ~ACityBlock();


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBlock_h_30_PROLOG
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBlock_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBlock_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBlock_h_33_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBlock_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACityBlock;

// ********** End Class ACityBlock *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBlock_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
