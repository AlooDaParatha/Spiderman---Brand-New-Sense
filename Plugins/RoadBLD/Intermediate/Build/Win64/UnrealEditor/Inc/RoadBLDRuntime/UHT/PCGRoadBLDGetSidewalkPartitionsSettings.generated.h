// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCG/PCGRoadBLDGetSidewalkPartitionsSettings.h"

#ifdef ROADBLDRUNTIME_PCGRoadBLDGetSidewalkPartitionsSettings_generated_h
#error "PCGRoadBLDGetSidewalkPartitionsSettings.generated.h already included, missing '#pragma once' in PCGRoadBLDGetSidewalkPartitionsSettings.h"
#endif
#define ROADBLDRUNTIME_PCGRoadBLDGetSidewalkPartitionsSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGRoadBLDGetSidewalkPartitionsSettings *********************************
struct Z_Construct_UClass_UPCGRoadBLDGetSidewalkPartitionsSettings_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UPCGRoadBLDGetSidewalkPartitionsSettings(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_PCG_PCGRoadBLDGetSidewalkPartitionsSettings_h_28_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UPCGRoadBLDGetSidewalkPartitionsSettings_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_UPCGRoadBLDGetSidewalkPartitionsSettings(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UPCGRoadBLDGetSidewalkPartitionsSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_UPCGRoadBLDGetSidewalkPartitionsSettings) \
	DECLARE_SERIALIZER(UPCGRoadBLDGetSidewalkPartitionsSettings)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_PCG_PCGRoadBLDGetSidewalkPartitionsSettings_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGRoadBLDGetSidewalkPartitionsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGRoadBLDGetSidewalkPartitionsSettings(UPCGRoadBLDGetSidewalkPartitionsSettings&&) = delete; \
	UPCGRoadBLDGetSidewalkPartitionsSettings(const UPCGRoadBLDGetSidewalkPartitionsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGRoadBLDGetSidewalkPartitionsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGRoadBLDGetSidewalkPartitionsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGRoadBLDGetSidewalkPartitionsSettings) \
	NO_API virtual ~UPCGRoadBLDGetSidewalkPartitionsSettings();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_PCG_PCGRoadBLDGetSidewalkPartitionsSettings_h_25_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_PCG_PCGRoadBLDGetSidewalkPartitionsSettings_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_PCG_PCGRoadBLDGetSidewalkPartitionsSettings_h_28_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_PCG_PCGRoadBLDGetSidewalkPartitionsSettings_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGRoadBLDGetSidewalkPartitionsSettings;

// ********** End Class UPCGRoadBLDGetSidewalkPartitionsSettings ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_PCG_PCGRoadBLDGetSidewalkPartitionsSettings_h

// ********** Begin Enum ERoadBLDPCGFilterMode *****************************************************
#define FOREACH_ENUM_EROADBLDPCGFILTERMODE(op) \
	op(ERoadBLDPCGFilterMode::Include) \
	op(ERoadBLDPCGFilterMode::Exclude) 

enum class ERoadBLDPCGFilterMode : uint8;
template<> struct TIsUEnumClass<ERoadBLDPCGFilterMode> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ERoadBLDPCGFilterMode>();
// ********** End Enum ERoadBLDPCGFilterMode *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
