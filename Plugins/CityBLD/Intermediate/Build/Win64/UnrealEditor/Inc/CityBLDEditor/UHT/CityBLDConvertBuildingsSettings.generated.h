// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConvertBuildings/CityBLDConvertBuildingsSettings.h"

#ifdef CITYBLDEDITOR_CityBLDConvertBuildingsSettings_generated_h
#error "CityBLDConvertBuildingsSettings.generated.h already included, missing '#pragma once' in CityBLDConvertBuildingsSettings.h"
#endif
#define CITYBLDEDITOR_CityBLDConvertBuildingsSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCityBLDConvertBuildingsOptions ***********************************
struct Z_Construct_UScriptStruct_FCityBLDConvertBuildingsOptions_Statics;
CITYBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCityBLDConvertBuildingsOptions(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_ConvertBuildings_CityBLDConvertBuildingsSettings_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCityBLDConvertBuildingsOptions_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FCityBLDConvertBuildingsOptions(ETypeConstructPhase::Inner); }


struct FCityBLDConvertBuildingsOptions;
// ********** End ScriptStruct FCityBLDConvertBuildingsOptions *************************************

// ********** Begin Class UCityBLDConvertBuildingsSettings *****************************************
struct Z_Construct_UClass_UCityBLDConvertBuildingsSettings_Statics;
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UCityBLDConvertBuildingsSettings(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_ConvertBuildings_CityBLDConvertBuildingsSettings_h_37_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UCityBLDConvertBuildingsSettings_Statics; \
	friend CITYBLDEDITOR_API UClass* ::Z_Construct_UClass_UCityBLDConvertBuildingsSettings(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCityBLDConvertBuildingsSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CityBLDEditor"), Z_Construct_UClass_UCityBLDConvertBuildingsSettings) \
	DECLARE_SERIALIZER(UCityBLDConvertBuildingsSettings)


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_ConvertBuildings_CityBLDConvertBuildingsSettings_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCityBLDConvertBuildingsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCityBLDConvertBuildingsSettings(UCityBLDConvertBuildingsSettings&&) = delete; \
	UCityBLDConvertBuildingsSettings(const UCityBLDConvertBuildingsSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCityBLDConvertBuildingsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCityBLDConvertBuildingsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCityBLDConvertBuildingsSettings) \
	NO_API virtual ~UCityBLDConvertBuildingsSettings();


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_ConvertBuildings_CityBLDConvertBuildingsSettings_h_34_PROLOG
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_ConvertBuildings_CityBLDConvertBuildingsSettings_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_ConvertBuildings_CityBLDConvertBuildingsSettings_h_37_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_ConvertBuildings_CityBLDConvertBuildingsSettings_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCityBLDConvertBuildingsSettings;

// ********** End Class UCityBLDConvertBuildingsSettings *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_ConvertBuildings_CityBLDConvertBuildingsSettings_h

// ********** Begin Enum ECityBLDBuildingConvertMode ***********************************************
#define FOREACH_ENUM_ECITYBLDBUILDINGCONVERTMODE(op) \
	op(ECityBLDBuildingConvertMode::SingleMeshForAll) \
	op(ECityBLDBuildingConvertMode::MeshPerBuilding) \
	op(ECityBLDBuildingConvertMode::SinglePrefabForAll) \
	op(ECityBLDBuildingConvertMode::PrefabPerBuilding) 

enum class ECityBLDBuildingConvertMode : uint8;
template<> struct TIsUEnumClass<ECityBLDBuildingConvertMode> { enum { Value = true }; };
template<> UE_NODEBUG CITYBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECityBLDBuildingConvertMode>();
// ********** End Enum ECityBLDBuildingConvertMode *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
