// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HLOD/CityBLDHLODBuildSettingsProxy.h"

#ifdef CITYBLDEDITOR_CityBLDHLODBuildSettingsProxy_generated_h
#error "CityBLDHLODBuildSettingsProxy.generated.h already included, missing '#pragma once' in CityBLDHLODBuildSettingsProxy.h"
#endif
#define CITYBLDEDITOR_CityBLDHLODBuildSettingsProxy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCityBLDHLODBuildSettingsProxy *******************************************
struct Z_Construct_UClass_UCityBLDHLODBuildSettingsProxy_Statics;
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UCityBLDHLODBuildSettingsProxy(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_HLOD_CityBLDHLODBuildSettingsProxy_h_28_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UCityBLDHLODBuildSettingsProxy_Statics; \
	friend CITYBLDEDITOR_API UClass* ::Z_Construct_UClass_UCityBLDHLODBuildSettingsProxy(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCityBLDHLODBuildSettingsProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CityBLDEditor"), Z_Construct_UClass_UCityBLDHLODBuildSettingsProxy) \
	DECLARE_SERIALIZER(UCityBLDHLODBuildSettingsProxy)


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_HLOD_CityBLDHLODBuildSettingsProxy_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCityBLDHLODBuildSettingsProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCityBLDHLODBuildSettingsProxy(UCityBLDHLODBuildSettingsProxy&&) = delete; \
	UCityBLDHLODBuildSettingsProxy(const UCityBLDHLODBuildSettingsProxy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCityBLDHLODBuildSettingsProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCityBLDHLODBuildSettingsProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCityBLDHLODBuildSettingsProxy) \
	NO_API virtual ~UCityBLDHLODBuildSettingsProxy();


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_HLOD_CityBLDHLODBuildSettingsProxy_h_25_PROLOG
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_HLOD_CityBLDHLODBuildSettingsProxy_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_HLOD_CityBLDHLODBuildSettingsProxy_h_28_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_HLOD_CityBLDHLODBuildSettingsProxy_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCityBLDHLODBuildSettingsProxy;

// ********** End Class UCityBLDHLODBuildSettingsProxy *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_HLOD_CityBLDHLODBuildSettingsProxy_h

// ********** Begin Enum ECityBLDHLODMaterialSource ************************************************
#define FOREACH_ENUM_ECITYBLDHLODMATERIALSOURCE(op) \
	op(ECityBLDHLODMaterialSource::UseBuildingStyleMaterial) \
	op(ECityBLDHLODMaterialSource::BakeUniqueMaterialInstance) 

enum class ECityBLDHLODMaterialSource : uint8;
template<> struct TIsUEnumClass<ECityBLDHLODMaterialSource> { enum { Value = true }; };
template<> UE_NODEBUG CITYBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECityBLDHLODMaterialSource>();
// ********** End Enum ECityBLDHLODMaterialSource **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
