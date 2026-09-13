// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoadBLDRuntimeSettings.h"

#ifdef ROADBLDRUNTIME_RoadBLDRuntimeSettings_generated_h
#error "RoadBLDRuntimeSettings.generated.h already included, missing '#pragma once' in RoadBLDRuntimeSettings.h"
#endif
#define ROADBLDRUNTIME_RoadBLDRuntimeSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URoadBLDRuntimeSettings;

// ********** Begin Class URoadBLDRuntimeSettings **************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadBLDRuntimeSettings_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGet);


struct Z_Construct_UClass_URoadBLDRuntimeSettings_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadBLDRuntimeSettings(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadBLDRuntimeSettings_h_19_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URoadBLDRuntimeSettings_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_URoadBLDRuntimeSettings(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URoadBLDRuntimeSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_URoadBLDRuntimeSettings) \
	DECLARE_SERIALIZER(URoadBLDRuntimeSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("RoadBLD");} \



#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadBLDRuntimeSettings_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoadBLDRuntimeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoadBLDRuntimeSettings(URoadBLDRuntimeSettings&&) = delete; \
	URoadBLDRuntimeSettings(const URoadBLDRuntimeSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoadBLDRuntimeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoadBLDRuntimeSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoadBLDRuntimeSettings) \
	NO_API virtual ~URoadBLDRuntimeSettings();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadBLDRuntimeSettings_h_16_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadBLDRuntimeSettings_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadBLDRuntimeSettings_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadBLDRuntimeSettings_h_19_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadBLDRuntimeSettings_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoadBLDRuntimeSettings;

// ********** End Class URoadBLDRuntimeSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadBLDRuntimeSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
