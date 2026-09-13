// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CityParcelPCGHostActor.h"

#ifdef CITYBLDRUNTIME_CityParcelPCGHostActor_generated_h
#error "CityParcelPCGHostActor.generated.h already included, missing '#pragma once' in CityParcelPCGHostActor.h"
#endif
#define CITYBLDRUNTIME_CityParcelPCGHostActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACityBlock;
class UCityParcel;
class UClass;
class ULandUse;

// ********** Begin Class ACityParcelPCGHostActor **************************************************
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityParcelPCGHostActor_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCleanupPCG); \
	DECLARE_FUNCTION(execInitializeFromParcel);


struct Z_Construct_UClass_ACityParcelPCGHostActor_Statics;
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_ACityParcelPCGHostActor(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityParcelPCGHostActor_h_26_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ACityParcelPCGHostActor_Statics; \
	friend CITYBLDRUNTIME_API UClass* ::Z_Construct_UClass_ACityParcelPCGHostActor(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ACityParcelPCGHostActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CityBLDRuntime"), Z_Construct_UClass_ACityParcelPCGHostActor) \
	DECLARE_SERIALIZER(ACityParcelPCGHostActor)


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityParcelPCGHostActor_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACityParcelPCGHostActor(ACityParcelPCGHostActor&&) = delete; \
	ACityParcelPCGHostActor(const ACityParcelPCGHostActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACityParcelPCGHostActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACityParcelPCGHostActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACityParcelPCGHostActor) \
	NO_API virtual ~ACityParcelPCGHostActor();


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityParcelPCGHostActor_h_23_PROLOG
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityParcelPCGHostActor_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityParcelPCGHostActor_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityParcelPCGHostActor_h_26_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityParcelPCGHostActor_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACityParcelPCGHostActor;

// ********** End Class ACityParcelPCGHostActor ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityParcelPCGHostActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
