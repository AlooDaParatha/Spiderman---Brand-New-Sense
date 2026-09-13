// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CityBLDRuntimeSettings.h"

#ifdef CITYBLDRUNTIME_CityBLDRuntimeSettings_generated_h
#error "CityBLDRuntimeSettings.generated.h already included, missing '#pragma once' in CityBLDRuntimeSettings.h"
#endif
#define CITYBLDRUNTIME_CityBLDRuntimeSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCityBLDRuntimeSettings;

// ********** Begin Class UCityBLDRuntimeSettings **************************************************
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBLDRuntimeSettings_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGet);


struct Z_Construct_UClass_UCityBLDRuntimeSettings_Statics;
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UCityBLDRuntimeSettings(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBLDRuntimeSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UCityBLDRuntimeSettings_Statics; \
	friend CITYBLDRUNTIME_API UClass* ::Z_Construct_UClass_UCityBLDRuntimeSettings(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCityBLDRuntimeSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CityBLDRuntime"), Z_Construct_UClass_UCityBLDRuntimeSettings) \
	DECLARE_SERIALIZER(UCityBLDRuntimeSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("CityBLD");} \



#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBLDRuntimeSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCityBLDRuntimeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCityBLDRuntimeSettings(UCityBLDRuntimeSettings&&) = delete; \
	UCityBLDRuntimeSettings(const UCityBLDRuntimeSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCityBLDRuntimeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCityBLDRuntimeSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCityBLDRuntimeSettings) \
	NO_API virtual ~UCityBLDRuntimeSettings();


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBLDRuntimeSettings_h_10_PROLOG
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBLDRuntimeSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBLDRuntimeSettings_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBLDRuntimeSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBLDRuntimeSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCityBLDRuntimeSettings;

// ********** End Class UCityBLDRuntimeSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBLDRuntimeSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
