// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Authorization/TwinBLDLicenseSubsystem.h"

#ifdef TWINBLDEDITOR_TwinBLDLicenseSubsystem_generated_h
#error "TwinBLDLicenseSubsystem.generated.h already included, missing '#pragma once' in TwinBLDLicenseSubsystem.h"
#endif
#define TWINBLDEDITOR_TwinBLDLicenseSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTwinBLDLicenseSubsystem *************************************************
struct Z_Construct_UClass_UTwinBLDLicenseSubsystem_Statics;
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDLicenseSubsystem(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_Authorization_TwinBLDLicenseSubsystem_h_28_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UTwinBLDLicenseSubsystem_Statics; \
	friend TWINBLDEDITOR_API UClass* ::Z_Construct_UClass_UTwinBLDLicenseSubsystem(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UTwinBLDLicenseSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwinBLDEditor"), Z_Construct_UClass_UTwinBLDLicenseSubsystem) \
	DECLARE_SERIALIZER(UTwinBLDLicenseSubsystem)


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_Authorization_TwinBLDLicenseSubsystem_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTwinBLDLicenseSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTwinBLDLicenseSubsystem(UTwinBLDLicenseSubsystem&&) = delete; \
	UTwinBLDLicenseSubsystem(const UTwinBLDLicenseSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwinBLDLicenseSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwinBLDLicenseSubsystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTwinBLDLicenseSubsystem) \
	NO_API virtual ~UTwinBLDLicenseSubsystem();


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_Authorization_TwinBLDLicenseSubsystem_h_25_PROLOG
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_Authorization_TwinBLDLicenseSubsystem_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_Authorization_TwinBLDLicenseSubsystem_h_28_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_Authorization_TwinBLDLicenseSubsystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTwinBLDLicenseSubsystem;

// ********** End Class UTwinBLDLicenseSubsystem ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_Authorization_TwinBLDLicenseSubsystem_h

// ********** Begin Enum ETwinBLDLicenseState ******************************************************
#define FOREACH_ENUM_ETWINBLDLICENSESTATE(op) \
	op(ETwinBLDLicenseState::Unknown) \
	op(ETwinBLDLicenseState::Checking) \
	op(ETwinBLDLicenseState::Licensed) \
	op(ETwinBLDLicenseState::Unlicensed) \
	op(ETwinBLDLicenseState::Error) 

enum class ETwinBLDLicenseState : uint8;
template<> struct TIsUEnumClass<ETwinBLDLicenseState> { enum { Value = true }; };
template<> UE_NODEBUG TWINBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ETwinBLDLicenseState>();
// ********** End Enum ETwinBLDLicenseState ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
