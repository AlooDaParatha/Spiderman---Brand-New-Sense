// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Authorization/TwinBLDTrialSubsystem.h"

#ifdef TWINBLDEDITOR_TwinBLDTrialSubsystem_generated_h
#error "TwinBLDTrialSubsystem.generated.h already included, missing '#pragma once' in TwinBLDTrialSubsystem.h"
#endif
#define TWINBLDEDITOR_TwinBLDTrialSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTwinBLDTrialAccountStatus ****************************************
struct Z_Construct_UScriptStruct_FTwinBLDTrialAccountStatus_Statics;
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDTrialAccountStatus(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_Authorization_TwinBLDTrialSubsystem_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTwinBLDTrialAccountStatus_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FTwinBLDTrialAccountStatus(ETypeConstructPhase::Inner); }


struct FTwinBLDTrialAccountStatus;
// ********** End ScriptStruct FTwinBLDTrialAccountStatus ******************************************

// ********** Begin Class UTwinBLDTrialSubsystem ***************************************************
struct Z_Construct_UClass_UTwinBLDTrialSubsystem_Statics;
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDTrialSubsystem(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_Authorization_TwinBLDTrialSubsystem_h_63_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UTwinBLDTrialSubsystem_Statics; \
	friend TWINBLDEDITOR_API UClass* ::Z_Construct_UClass_UTwinBLDTrialSubsystem(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UTwinBLDTrialSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwinBLDEditor"), Z_Construct_UClass_UTwinBLDTrialSubsystem) \
	DECLARE_SERIALIZER(UTwinBLDTrialSubsystem)


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_Authorization_TwinBLDTrialSubsystem_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTwinBLDTrialSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTwinBLDTrialSubsystem(UTwinBLDTrialSubsystem&&) = delete; \
	UTwinBLDTrialSubsystem(const UTwinBLDTrialSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwinBLDTrialSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwinBLDTrialSubsystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTwinBLDTrialSubsystem) \
	NO_API virtual ~UTwinBLDTrialSubsystem();


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_Authorization_TwinBLDTrialSubsystem_h_60_PROLOG
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_Authorization_TwinBLDTrialSubsystem_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_Authorization_TwinBLDTrialSubsystem_h_63_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_Authorization_TwinBLDTrialSubsystem_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTwinBLDTrialSubsystem;

// ********** End Class UTwinBLDTrialSubsystem *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_Authorization_TwinBLDTrialSubsystem_h

// ********** Begin Enum ETwinBLDTrialEligibility **************************************************
#define FOREACH_ENUM_ETWINBLDTRIALELIGIBILITY(op) \
	op(ETwinBLDTrialEligibility::Eligible_NoPriorTrial) \
	op(ETwinBLDTrialEligibility::Ineligible_TrialPreviouslyActivated) \
	op(ETwinBLDTrialEligibility::UnknownOrError) 

enum class ETwinBLDTrialEligibility : uint8;
template<> struct TIsUEnumClass<ETwinBLDTrialEligibility> { enum { Value = true }; };
template<> UE_NODEBUG TWINBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ETwinBLDTrialEligibility>();
// ********** End Enum ETwinBLDTrialEligibility ****************************************************

// ********** Begin Enum ETwinBLDLocalTrialRecordStatus ********************************************
#define FOREACH_ENUM_ETWINBLDLOCALTRIALRECORDSTATUS(op) \
	op(ETwinBLDLocalTrialRecordStatus::NoRecord) \
	op(ETwinBLDLocalTrialRecordStatus::ValidRecord) \
	op(ETwinBLDLocalTrialRecordStatus::InvalidOrTampered) 

enum class ETwinBLDLocalTrialRecordStatus : uint8;
template<> struct TIsUEnumClass<ETwinBLDLocalTrialRecordStatus> { enum { Value = true }; };
template<> UE_NODEBUG TWINBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ETwinBLDLocalTrialRecordStatus>();
// ********** End Enum ETwinBLDLocalTrialRecordStatus **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
