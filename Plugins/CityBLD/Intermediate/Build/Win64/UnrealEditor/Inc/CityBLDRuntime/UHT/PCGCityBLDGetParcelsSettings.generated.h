// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCG/PCGCityBLDGetParcelsSettings.h"

#ifdef CITYBLDRUNTIME_PCGCityBLDGetParcelsSettings_generated_h
#error "PCGCityBLDGetParcelsSettings.generated.h already included, missing '#pragma once' in PCGCityBLDGetParcelsSettings.h"
#endif
#define CITYBLDRUNTIME_PCGCityBLDGetParcelsSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGCityBLDGetParcelsSettings ********************************************
struct Z_Construct_UClass_UPCGCityBLDGetParcelsSettings_Statics;
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UPCGCityBLDGetParcelsSettings(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_PCG_PCGCityBLDGetParcelsSettings_h_46_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UPCGCityBLDGetParcelsSettings_Statics; \
	friend CITYBLDRUNTIME_API UClass* ::Z_Construct_UClass_UPCGCityBLDGetParcelsSettings(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UPCGCityBLDGetParcelsSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CityBLDRuntime"), Z_Construct_UClass_UPCGCityBLDGetParcelsSettings) \
	DECLARE_SERIALIZER(UPCGCityBLDGetParcelsSettings)


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_PCG_PCGCityBLDGetParcelsSettings_h_46_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGCityBLDGetParcelsSettings(UPCGCityBLDGetParcelsSettings&&) = delete; \
	UPCGCityBLDGetParcelsSettings(const UPCGCityBLDGetParcelsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGCityBLDGetParcelsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGCityBLDGetParcelsSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGCityBLDGetParcelsSettings) \
	NO_API virtual ~UPCGCityBLDGetParcelsSettings();


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_PCG_PCGCityBLDGetParcelsSettings_h_43_PROLOG
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_PCG_PCGCityBLDGetParcelsSettings_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_PCG_PCGCityBLDGetParcelsSettings_h_46_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_PCG_PCGCityBLDGetParcelsSettings_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGCityBLDGetParcelsSettings;

// ********** End Class UPCGCityBLDGetParcelsSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_PCG_PCGCityBLDGetParcelsSettings_h

// ********** Begin Enum ECityBLDParcelOutlineSource ***********************************************
#define FOREACH_ENUM_ECITYBLDPARCELOUTLINESOURCE(op) \
	op(ECityBLDParcelOutlineSource::Parcels) \
	op(ECityBLDParcelOutlineSource::BlockInnerLoop) \
	op(ECityBLDParcelOutlineSource::BlockOuterLoop) 

enum class ECityBLDParcelOutlineSource : uint8;
template<> struct TIsUEnumClass<ECityBLDParcelOutlineSource> { enum { Value = true }; };
template<> UE_NODEBUG CITYBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ECityBLDParcelOutlineSource>();
// ********** End Enum ECityBLDParcelOutlineSource *************************************************

// ********** Begin Enum ECityBLDLandUseFilterMode *************************************************
#define FOREACH_ENUM_ECITYBLDLANDUSEFILTERMODE(op) \
	op(ECityBLDLandUseFilterMode::Include) \
	op(ECityBLDLandUseFilterMode::Exclude) 

enum class ECityBLDLandUseFilterMode : uint8;
template<> struct TIsUEnumClass<ECityBLDLandUseFilterMode> { enum { Value = true }; };
template<> UE_NODEBUG CITYBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ECityBLDLandUseFilterMode>();
// ********** End Enum ECityBLDLandUseFilterMode ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
