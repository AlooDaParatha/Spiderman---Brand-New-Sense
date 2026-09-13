// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Authorization/CityBLDLicenseSubsystem.h"

#ifdef CITYBLDEDITOR_CityBLDLicenseSubsystem_generated_h
#error "CityBLDLicenseSubsystem.generated.h already included, missing '#pragma once' in CityBLDLicenseSubsystem.h"
#endif
#define CITYBLDEDITOR_CityBLDLicenseSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCityBLDLicenseSubsystem *************************************************
struct Z_Construct_UClass_UCityBLDLicenseSubsystem_Statics;
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UCityBLDLicenseSubsystem(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_Authorization_CityBLDLicenseSubsystem_h_28_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UCityBLDLicenseSubsystem_Statics; \
	friend CITYBLDEDITOR_API UClass* ::Z_Construct_UClass_UCityBLDLicenseSubsystem(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCityBLDLicenseSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CityBLDEditor"), Z_Construct_UClass_UCityBLDLicenseSubsystem) \
	DECLARE_SERIALIZER(UCityBLDLicenseSubsystem)


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_Authorization_CityBLDLicenseSubsystem_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCityBLDLicenseSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCityBLDLicenseSubsystem(UCityBLDLicenseSubsystem&&) = delete; \
	UCityBLDLicenseSubsystem(const UCityBLDLicenseSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCityBLDLicenseSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCityBLDLicenseSubsystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCityBLDLicenseSubsystem) \
	NO_API virtual ~UCityBLDLicenseSubsystem();


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_Authorization_CityBLDLicenseSubsystem_h_25_PROLOG
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_Authorization_CityBLDLicenseSubsystem_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_Authorization_CityBLDLicenseSubsystem_h_28_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_Authorization_CityBLDLicenseSubsystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCityBLDLicenseSubsystem;

// ********** End Class UCityBLDLicenseSubsystem ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_Authorization_CityBLDLicenseSubsystem_h

// ********** Begin Enum ECityBLDLicenseState ******************************************************
#define FOREACH_ENUM_ECITYBLDLICENSESTATE(op) \
	op(ECityBLDLicenseState::Unknown) \
	op(ECityBLDLicenseState::Checking) \
	op(ECityBLDLicenseState::Licensed) \
	op(ECityBLDLicenseState::Unlicensed) \
	op(ECityBLDLicenseState::Error) 

enum class ECityBLDLicenseState : uint8;
template<> struct TIsUEnumClass<ECityBLDLicenseState> { enum { Value = true }; };
template<> UE_NODEBUG CITYBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECityBLDLicenseState>();
// ********** End Enum ECityBLDLicenseState ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
