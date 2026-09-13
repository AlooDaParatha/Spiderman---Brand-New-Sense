// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ParcelController.h"

#ifdef CITYBLDEDITOR_ParcelController_generated_h
#error "ParcelController.generated.h already included, missing '#pragma once' in ParcelController.h"
#endif
#define CITYBLDEDITOR_ParcelController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCityParcel;

// ********** Begin Class UParcelController ********************************************************
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ParcelController_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateSelectedParcel);


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ParcelController_h_24_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UParcelController_Statics;
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UParcelController(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ParcelController_h_24_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UParcelController_Statics; \
	friend CITYBLDEDITOR_API UClass* ::Z_Construct_UClass_UParcelController(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UParcelController, UWorldBLDEditController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CityBLDEditor"), Z_Construct_UClass_UParcelController) \
	DECLARE_SERIALIZER(UParcelController)


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ParcelController_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UParcelController(UParcelController&&) = delete; \
	UParcelController(const UParcelController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParcelController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParcelController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UParcelController) \
	NO_API virtual ~UParcelController();


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ParcelController_h_21_PROLOG
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ParcelController_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ParcelController_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ParcelController_h_24_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ParcelController_h_24_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ParcelController_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UParcelController;

// ********** End Class UParcelController **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ParcelController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
