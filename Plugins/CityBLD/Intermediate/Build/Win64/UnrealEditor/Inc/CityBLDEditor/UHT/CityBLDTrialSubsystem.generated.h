// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Authorization/CityBLDTrialSubsystem.h"

#ifdef CITYBLDEDITOR_CityBLDTrialSubsystem_generated_h
#error "CityBLDTrialSubsystem.generated.h already included, missing '#pragma once' in CityBLDTrialSubsystem.h"
#endif
#define CITYBLDEDITOR_CityBLDTrialSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCityBLDTrialAccountStatus ****************************************
struct Z_Construct_UScriptStruct_FCityBLDTrialAccountStatus_Statics;
CITYBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCityBLDTrialAccountStatus(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_Authorization_CityBLDTrialSubsystem_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCityBLDTrialAccountStatus_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FCityBLDTrialAccountStatus(ETypeConstructPhase::Inner); }


struct FCityBLDTrialAccountStatus;
// ********** End ScriptStruct FCityBLDTrialAccountStatus ******************************************

// ********** Begin Class UCityBLDTrialSubsystem ***************************************************
struct Z_Construct_UClass_UCityBLDTrialSubsystem_Statics;
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UCityBLDTrialSubsystem(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_Authorization_CityBLDTrialSubsystem_h_62_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UCityBLDTrialSubsystem_Statics; \
	friend CITYBLDEDITOR_API UClass* ::Z_Construct_UClass_UCityBLDTrialSubsystem(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCityBLDTrialSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CityBLDEditor"), Z_Construct_UClass_UCityBLDTrialSubsystem) \
	DECLARE_SERIALIZER(UCityBLDTrialSubsystem)


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_Authorization_CityBLDTrialSubsystem_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCityBLDTrialSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCityBLDTrialSubsystem(UCityBLDTrialSubsystem&&) = delete; \
	UCityBLDTrialSubsystem(const UCityBLDTrialSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCityBLDTrialSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCityBLDTrialSubsystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCityBLDTrialSubsystem) \
	NO_API virtual ~UCityBLDTrialSubsystem();


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_Authorization_CityBLDTrialSubsystem_h_59_PROLOG
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_Authorization_CityBLDTrialSubsystem_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_Authorization_CityBLDTrialSubsystem_h_62_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_Authorization_CityBLDTrialSubsystem_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCityBLDTrialSubsystem;

// ********** End Class UCityBLDTrialSubsystem *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_Authorization_CityBLDTrialSubsystem_h

// ********** Begin Enum ECityBLDTrialEligibility **************************************************
#define FOREACH_ENUM_ECITYBLDTRIALELIGIBILITY(op) \
	op(ECityBLDTrialEligibility::Eligible_NoPriorTrial) \
	op(ECityBLDTrialEligibility::Ineligible_TrialPreviouslyActivated) \
	op(ECityBLDTrialEligibility::UnknownOrError) 

enum class ECityBLDTrialEligibility : uint8;
template<> struct TIsUEnumClass<ECityBLDTrialEligibility> { enum { Value = true }; };
template<> UE_NODEBUG CITYBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECityBLDTrialEligibility>();
// ********** End Enum ECityBLDTrialEligibility ****************************************************

// ********** Begin Enum ECityBLDLocalTrialRecordStatus ********************************************
#define FOREACH_ENUM_ECITYBLDLOCALTRIALRECORDSTATUS(op) \
	op(ECityBLDLocalTrialRecordStatus::NoRecord) \
	op(ECityBLDLocalTrialRecordStatus::ValidRecord) \
	op(ECityBLDLocalTrialRecordStatus::InvalidOrTampered) 

enum class ECityBLDLocalTrialRecordStatus : uint8;
template<> struct TIsUEnumClass<ECityBLDLocalTrialRecordStatus> { enum { Value = true }; };
template<> UE_NODEBUG CITYBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECityBLDLocalTrialRecordStatus>();
// ********** End Enum ECityBLDLocalTrialRecordStatus **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
