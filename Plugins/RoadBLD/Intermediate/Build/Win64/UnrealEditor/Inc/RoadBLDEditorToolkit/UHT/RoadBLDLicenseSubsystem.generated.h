// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Authorization/RoadBLDLicenseSubsystem.h"

#ifdef ROADBLDEDITORTOOLKIT_RoadBLDLicenseSubsystem_generated_h
#error "RoadBLDLicenseSubsystem.generated.h already included, missing '#pragma once' in RoadBLDLicenseSubsystem.h"
#endif
#define ROADBLDEDITORTOOLKIT_RoadBLDLicenseSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URoadBLDLicenseSubsystem *************************************************
struct Z_Construct_UClass_URoadBLDLicenseSubsystem_Statics;
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadBLDLicenseSubsystem(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_Authorization_RoadBLDLicenseSubsystem_h_28_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URoadBLDLicenseSubsystem_Statics; \
	friend ROADBLDEDITORTOOLKIT_API UClass* ::Z_Construct_UClass_URoadBLDLicenseSubsystem(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URoadBLDLicenseSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDEditorToolkit"), Z_Construct_UClass_URoadBLDLicenseSubsystem) \
	DECLARE_SERIALIZER(URoadBLDLicenseSubsystem)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_Authorization_RoadBLDLicenseSubsystem_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoadBLDLicenseSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoadBLDLicenseSubsystem(URoadBLDLicenseSubsystem&&) = delete; \
	URoadBLDLicenseSubsystem(const URoadBLDLicenseSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoadBLDLicenseSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoadBLDLicenseSubsystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoadBLDLicenseSubsystem) \
	NO_API virtual ~URoadBLDLicenseSubsystem();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_Authorization_RoadBLDLicenseSubsystem_h_25_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_Authorization_RoadBLDLicenseSubsystem_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_Authorization_RoadBLDLicenseSubsystem_h_28_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_Authorization_RoadBLDLicenseSubsystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoadBLDLicenseSubsystem;

// ********** End Class URoadBLDLicenseSubsystem ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_Authorization_RoadBLDLicenseSubsystem_h

// ********** Begin Enum ERoadBLDLicenseState ******************************************************
#define FOREACH_ENUM_EROADBLDLICENSESTATE(op) \
	op(ERoadBLDLicenseState::Unknown) \
	op(ERoadBLDLicenseState::Checking) \
	op(ERoadBLDLicenseState::Licensed) \
	op(ERoadBLDLicenseState::Unlicensed) \
	op(ERoadBLDLicenseState::Error) 

enum class ERoadBLDLicenseState : uint8;
template<> struct TIsUEnumClass<ERoadBLDLicenseState> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERoadBLDLicenseState>();
// ********** End Enum ERoadBLDLicenseState ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
