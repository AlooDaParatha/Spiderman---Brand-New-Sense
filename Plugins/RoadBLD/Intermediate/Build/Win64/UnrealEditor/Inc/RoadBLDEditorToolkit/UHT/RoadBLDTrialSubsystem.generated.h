// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Authorization/RoadBLDTrialSubsystem.h"

#ifdef ROADBLDEDITORTOOLKIT_RoadBLDTrialSubsystem_generated_h
#error "RoadBLDTrialSubsystem.generated.h already included, missing '#pragma once' in RoadBLDTrialSubsystem.h"
#endif
#define ROADBLDEDITORTOOLKIT_RoadBLDTrialSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRoadBLDTrialAccountStatus ****************************************
struct Z_Construct_UScriptStruct_FRoadBLDTrialAccountStatus_Statics;
ROADBLDEDITORTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FRoadBLDTrialAccountStatus(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_Authorization_RoadBLDTrialSubsystem_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRoadBLDTrialAccountStatus_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FRoadBLDTrialAccountStatus(ETypeConstructPhase::Inner); }


struct FRoadBLDTrialAccountStatus;
// ********** End ScriptStruct FRoadBLDTrialAccountStatus ******************************************

// ********** Begin Class URoadBLDTrialSubsystem ***************************************************
struct Z_Construct_UClass_URoadBLDTrialSubsystem_Statics;
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadBLDTrialSubsystem(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_Authorization_RoadBLDTrialSubsystem_h_62_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URoadBLDTrialSubsystem_Statics; \
	friend ROADBLDEDITORTOOLKIT_API UClass* ::Z_Construct_UClass_URoadBLDTrialSubsystem(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URoadBLDTrialSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDEditorToolkit"), Z_Construct_UClass_URoadBLDTrialSubsystem) \
	DECLARE_SERIALIZER(URoadBLDTrialSubsystem)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_Authorization_RoadBLDTrialSubsystem_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoadBLDTrialSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoadBLDTrialSubsystem(URoadBLDTrialSubsystem&&) = delete; \
	URoadBLDTrialSubsystem(const URoadBLDTrialSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoadBLDTrialSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoadBLDTrialSubsystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoadBLDTrialSubsystem) \
	NO_API virtual ~URoadBLDTrialSubsystem();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_Authorization_RoadBLDTrialSubsystem_h_59_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_Authorization_RoadBLDTrialSubsystem_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_Authorization_RoadBLDTrialSubsystem_h_62_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_Authorization_RoadBLDTrialSubsystem_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoadBLDTrialSubsystem;

// ********** End Class URoadBLDTrialSubsystem *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_Authorization_RoadBLDTrialSubsystem_h

// ********** Begin Enum ERoadBLDTrialEligibility **************************************************
#define FOREACH_ENUM_EROADBLDTRIALELIGIBILITY(op) \
	op(ERoadBLDTrialEligibility::Eligible_NoPriorTrial) \
	op(ERoadBLDTrialEligibility::Ineligible_TrialPreviouslyActivated) \
	op(ERoadBLDTrialEligibility::UnknownOrError) 

enum class ERoadBLDTrialEligibility : uint8;
template<> struct TIsUEnumClass<ERoadBLDTrialEligibility> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERoadBLDTrialEligibility>();
// ********** End Enum ERoadBLDTrialEligibility ****************************************************

// ********** Begin Enum ERoadBLDLocalTrialRecordStatus ********************************************
#define FOREACH_ENUM_EROADBLDLOCALTRIALRECORDSTATUS(op) \
	op(ERoadBLDLocalTrialRecordStatus::NoRecord) \
	op(ERoadBLDLocalTrialRecordStatus::ValidRecord) \
	op(ERoadBLDLocalTrialRecordStatus::InvalidOrTampered) 

enum class ERoadBLDLocalTrialRecordStatus : uint8;
template<> struct TIsUEnumClass<ERoadBLDLocalTrialRecordStatus> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERoadBLDLocalTrialRecordStatus>();
// ********** End Enum ERoadBLDLocalTrialRecordStatus **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
