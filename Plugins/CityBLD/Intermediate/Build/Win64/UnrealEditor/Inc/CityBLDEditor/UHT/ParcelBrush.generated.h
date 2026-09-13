// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ParcelBrush.h"

#ifdef CITYBLDEDITOR_ParcelBrush_generated_h
#error "ParcelBrush.generated.h already included, missing '#pragma once' in ParcelBrush.h"
#endif
#define CITYBLDEDITOR_ParcelBrush_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCityParcel;

// ********** Begin Class AParcelBrush *************************************************************
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ParcelBrush_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearMesh); \
	DECLARE_FUNCTION(execUpdateMeshForParcel); \
	DECLARE_FUNCTION(execUpdateBrush);


struct Z_Construct_UClass_AParcelBrush_Statics;
CITYBLDEDITOR_API UClass* Z_Construct_UClass_AParcelBrush(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ParcelBrush_h_19_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_AParcelBrush_Statics; \
	friend CITYBLDEDITOR_API UClass* ::Z_Construct_UClass_AParcelBrush(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(AParcelBrush, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CityBLDEditor"), Z_Construct_UClass_AParcelBrush) \
	DECLARE_SERIALIZER(AParcelBrush)


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ParcelBrush_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AParcelBrush(AParcelBrush&&) = delete; \
	AParcelBrush(const AParcelBrush&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParcelBrush); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParcelBrush); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AParcelBrush) \
	NO_API virtual ~AParcelBrush();


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ParcelBrush_h_16_PROLOG
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ParcelBrush_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ParcelBrush_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ParcelBrush_h_19_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ParcelBrush_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AParcelBrush;

// ********** End Class AParcelBrush ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ParcelBrush_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
