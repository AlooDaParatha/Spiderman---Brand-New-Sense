// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TwinBLDSettings.h"

#ifdef TWINBLDEDITOR_TwinBLDSettings_generated_h
#error "TwinBLDSettings.generated.h already included, missing '#pragma once' in TwinBLDSettings.h"
#endif
#define TWINBLDEDITOR_TwinBLDSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTwinBLDSettings *********************************************************
struct Z_Construct_UClass_UTwinBLDSettings_Statics;
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDSettings(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDSettings_h_27_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UTwinBLDSettings_Statics; \
	friend TWINBLDEDITOR_API UClass* ::Z_Construct_UClass_UTwinBLDSettings(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UTwinBLDSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/TwinBLDEditor"), Z_Construct_UClass_UTwinBLDSettings) \
	DECLARE_SERIALIZER(UTwinBLDSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("TwinBLD");} \



#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDSettings_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTwinBLDSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTwinBLDSettings(UTwinBLDSettings&&) = delete; \
	UTwinBLDSettings(const UTwinBLDSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwinBLDSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwinBLDSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTwinBLDSettings) \
	NO_API virtual ~UTwinBLDSettings();


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDSettings_h_24_PROLOG
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDSettings_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDSettings_h_27_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDSettings_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTwinBLDSettings;

// ********** End Class UTwinBLDSettings ***********************************************************

// ********** Begin Class UTwinBLDMapImportWindowSettings ******************************************
struct Z_Construct_UClass_UTwinBLDMapImportWindowSettings_Statics;
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDMapImportWindowSettings(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDSettings_h_113_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UTwinBLDMapImportWindowSettings_Statics; \
	friend TWINBLDEDITOR_API UClass* ::Z_Construct_UClass_UTwinBLDMapImportWindowSettings(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UTwinBLDMapImportWindowSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TwinBLDEditor"), Z_Construct_UClass_UTwinBLDMapImportWindowSettings) \
	DECLARE_SERIALIZER(UTwinBLDMapImportWindowSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDSettings_h_113_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTwinBLDMapImportWindowSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTwinBLDMapImportWindowSettings(UTwinBLDMapImportWindowSettings&&) = delete; \
	UTwinBLDMapImportWindowSettings(const UTwinBLDMapImportWindowSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwinBLDMapImportWindowSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwinBLDMapImportWindowSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTwinBLDMapImportWindowSettings) \
	NO_API virtual ~UTwinBLDMapImportWindowSettings();


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDSettings_h_110_PROLOG
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDSettings_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDSettings_h_113_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDSettings_h_113_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTwinBLDMapImportWindowSettings;

// ********** End Class UTwinBLDMapImportWindowSettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDSettings_h

// ********** Begin Enum EHeightmapSource **********************************************************
#define FOREACH_ENUM_EHEIGHTMAPSOURCE(op) \
	op(EHeightmapSource::Copernicus) \
	op(EHeightmapSource::USGS) \
	op(EHeightmapSource::OpenTopographyEuropeDTM) \
	op(EHeightmapSource::AutoBestAvailable) 

enum class EHeightmapSource : uint8;
template<> struct TIsUEnumClass<EHeightmapSource> { enum { Value = true }; };
template<> UE_NODEBUG TWINBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EHeightmapSource>();
// ********** End Enum EHeightmapSource ************************************************************

// ********** Begin Enum EOSMSource ****************************************************************
#define FOREACH_ENUM_EOSMSOURCE(op) \
	op(EOSMSource::Overpass) \
	op(EOSMSource::Geofabrik) 

enum class EOSMSource : uint8;
template<> struct TIsUEnumClass<EOSMSource> { enum { Value = true }; };
template<> UE_NODEBUG TWINBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EOSMSource>();
// ********** End Enum EOSMSource ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
