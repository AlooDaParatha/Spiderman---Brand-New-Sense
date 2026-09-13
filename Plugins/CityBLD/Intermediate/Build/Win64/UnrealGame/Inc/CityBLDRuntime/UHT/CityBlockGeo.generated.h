// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CityBlockGeo.h"

#ifdef CITYBLDRUNTIME_CityBlockGeo_generated_h
#error "CityBlockGeo.generated.h already included, missing '#pragma once' in CityBlockGeo.h"
#endif
#define CITYBLDRUNTIME_CityBlockGeo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACityBlockGeo ************************************************************
struct Z_Construct_UClass_ACityBlockGeo_Statics;
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_ACityBlockGeo(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBlockGeo_h_21_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ACityBlockGeo_Statics; \
	friend CITYBLDRUNTIME_API UClass* ::Z_Construct_UClass_ACityBlockGeo(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ACityBlockGeo, AWorldBLDGeo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CityBLDRuntime"), Z_Construct_UClass_ACityBlockGeo) \
	DECLARE_SERIALIZER(ACityBlockGeo) \
	[[deprecated("Do not call _getUObject(), use Cast.")]] virtual UObject* _getUObject() const override { return const_cast<ACityBlockGeo*>(this); }


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBlockGeo_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACityBlockGeo(ACityBlockGeo&&) = delete; \
	ACityBlockGeo(const ACityBlockGeo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACityBlockGeo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACityBlockGeo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACityBlockGeo) \
	NO_API virtual ~ACityBlockGeo();


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBlockGeo_h_18_PROLOG
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBlockGeo_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBlockGeo_h_21_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBlockGeo_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACityBlockGeo;

// ********** End Class ACityBlockGeo **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBlockGeo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
