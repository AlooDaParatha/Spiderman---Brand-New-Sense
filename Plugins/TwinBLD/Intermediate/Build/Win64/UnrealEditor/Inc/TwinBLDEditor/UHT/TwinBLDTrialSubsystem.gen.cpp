// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Authorization/TwinBLDTrialSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeTwinBLDTrialSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime(ETypeConstructPhase);
EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase);
TWINBLDEDITOR_API UEnum* Z_Construct_UEnum_TwinBLDEditor_ETwinBLDLocalTrialRecordStatus(ETypeConstructPhase);
TWINBLDEDITOR_API UEnum* Z_Construct_UEnum_TwinBLDEditor_ETwinBLDTrialEligibility(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDTrialAccountStatus(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDTrialSubsystem(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDTrialSubsystem(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ETwinBLDTrialEligibility **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_TwinBLDEditor_ETwinBLDTrialEligibility_Statics
template<> TWINBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ETwinBLDTrialEligibility>()
{
	return Z_Construct_UEnum_TwinBLDEditor_ETwinBLDTrialEligibility(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Eligible_NoPriorTrial.Name", "ETwinBLDTrialEligibility::Eligible_NoPriorTrial" },
		{ "Ineligible_TrialPreviouslyActivated.Name", "ETwinBLDTrialEligibility::Ineligible_TrialPreviouslyActivated" },
		{ "ModuleRelativePath", "Public/Authorization/TwinBLDTrialSubsystem.h" },
		{ "UnknownOrError.Name", "ETwinBLDTrialEligibility::UnknownOrError" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETwinBLDTrialEligibility::Eligible_NoPriorTrial", (int64)ETwinBLDTrialEligibility::Eligible_NoPriorTrial },
		{ "ETwinBLDTrialEligibility::Ineligible_TrialPreviouslyActivated", (int64)ETwinBLDTrialEligibility::Ineligible_TrialPreviouslyActivated },
		{ "ETwinBLDTrialEligibility::UnknownOrError", (int64)ETwinBLDTrialEligibility::UnknownOrError },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	"ETwinBLDTrialEligibility",
	"ETwinBLDTrialEligibility",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ETwinBLDTrialEligibility;
UEnum* Z_Construct_UEnum_TwinBLDEditor_ETwinBLDTrialEligibility(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ETwinBLDTrialEligibility.OuterSingleton)
		{
			ZRIE_ETwinBLDTrialEligibility.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TwinBLDEditor_ETwinBLDTrialEligibility, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("ETwinBLDTrialEligibility"));
		}
		return ZRIE_ETwinBLDTrialEligibility.OuterSingleton;
	}
	if (!ZRIE_ETwinBLDTrialEligibility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ETwinBLDTrialEligibility.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ETwinBLDTrialEligibility.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ETwinBLDTrialEligibility ****************************************************

// ********** Begin Enum ETwinBLDLocalTrialRecordStatus ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_TwinBLDEditor_ETwinBLDLocalTrialRecordStatus_Statics
template<> TWINBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ETwinBLDLocalTrialRecordStatus>()
{
	return Z_Construct_UEnum_TwinBLDEditor_ETwinBLDLocalTrialRecordStatus(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "InvalidOrTampered.Name", "ETwinBLDLocalTrialRecordStatus::InvalidOrTampered" },
		{ "ModuleRelativePath", "Public/Authorization/TwinBLDTrialSubsystem.h" },
		{ "NoRecord.Name", "ETwinBLDLocalTrialRecordStatus::NoRecord" },
		{ "ValidRecord.Name", "ETwinBLDLocalTrialRecordStatus::ValidRecord" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETwinBLDLocalTrialRecordStatus::NoRecord", (int64)ETwinBLDLocalTrialRecordStatus::NoRecord },
		{ "ETwinBLDLocalTrialRecordStatus::ValidRecord", (int64)ETwinBLDLocalTrialRecordStatus::ValidRecord },
		{ "ETwinBLDLocalTrialRecordStatus::InvalidOrTampered", (int64)ETwinBLDLocalTrialRecordStatus::InvalidOrTampered },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	"ETwinBLDLocalTrialRecordStatus",
	"ETwinBLDLocalTrialRecordStatus",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ETwinBLDLocalTrialRecordStatus;
UEnum* Z_Construct_UEnum_TwinBLDEditor_ETwinBLDLocalTrialRecordStatus(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ETwinBLDLocalTrialRecordStatus.OuterSingleton)
		{
			ZRIE_ETwinBLDLocalTrialRecordStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TwinBLDEditor_ETwinBLDLocalTrialRecordStatus, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("ETwinBLDLocalTrialRecordStatus"));
		}
		return ZRIE_ETwinBLDLocalTrialRecordStatus.OuterSingleton;
	}
	if (!ZRIE_ETwinBLDLocalTrialRecordStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ETwinBLDLocalTrialRecordStatus.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ETwinBLDLocalTrialRecordStatus.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ETwinBLDLocalTrialRecordStatus **********************************************

// ********** Begin ScriptStruct FTwinBLDTrialAccountStatus ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FTwinBLDTrialAccountStatus_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FTwinBLDTrialAccountStatus>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FTwinBLDTrialAccountStatus); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Authorization/TwinBLDTrialSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasTrial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Authorization/TwinBLDTrialSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrialStatus_MetaData[] = {
		{ "ModuleRelativePath", "Public/Authorization/TwinBLDTrialSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasTrialObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/Authorization/TwinBLDTrialSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrialStartUtc_MetaData[] = {
		{ "ModuleRelativePath", "Public/Authorization/TwinBLDTrialSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrialEndUtc_MetaData[] = {
		{ "ModuleRelativePath", "Public/Authorization/TwinBLDTrialSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DaysRemaining_MetaData[] = {
		{ "ModuleRelativePath", "Public/Authorization/TwinBLDTrialSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FTwinBLDTrialAccountStatus constinit property declarations ********
	static void NewProp_bHasTrial_SetBit(void* Obj)
	{
		((FTwinBLDTrialAccountStatus*)Obj)->bHasTrial = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasTrial;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TrialStatus;
	static void NewProp_bHasTrialObject_SetBit(void* Obj)
	{
		((FTwinBLDTrialAccountStatus*)Obj)->bHasTrialObject = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasTrialObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrialStartUtc;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrialEndUtc;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DaysRemaining;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FTwinBLDTrialAccountStatus constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwinBLDTrialAccountStatus>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FTwinBLDTrialAccountStatus Property Definitions *******************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHasTrial = { "bHasTrial", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDTrialAccountStatus), &UHT_STATICS::NewProp_bHasTrial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasTrial_MetaData), NewProp_bHasTrial_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_TrialStatus = { "TrialStatus", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDTrialAccountStatus, TrialStatus), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrialStatus_MetaData), NewProp_TrialStatus_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHasTrialObject = { "bHasTrialObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDTrialAccountStatus), &UHT_STATICS::NewProp_bHasTrialObject_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasTrialObject_MetaData), NewProp_bHasTrialObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TrialStartUtc = { "TrialStartUtc", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDTrialAccountStatus, TrialStartUtc), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrialStartUtc_MetaData), NewProp_TrialStartUtc_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TrialEndUtc = { "TrialEndUtc", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDTrialAccountStatus, TrialEndUtc), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrialEndUtc_MetaData), NewProp_TrialEndUtc_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_DaysRemaining = { "DaysRemaining", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDTrialAccountStatus, DaysRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DaysRemaining_MetaData), NewProp_DaysRemaining_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHasTrial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TrialStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHasTrialObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TrialStartUtc,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TrialEndUtc,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DaysRemaining,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FTwinBLDTrialAccountStatus Property Definitions *********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"TwinBLDTrialAccountStatus",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FTwinBLDTrialAccountStatus>(),
	alignof(FTwinBLDTrialAccountStatus),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTwinBLDTrialAccountStatus;
UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDTrialAccountStatus(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FTwinBLDTrialAccountStatus.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FTwinBLDTrialAccountStatus.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwinBLDTrialAccountStatus, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("TwinBLDTrialAccountStatus"));
		}
		return Z_Registration_Info_UScriptStruct_FTwinBLDTrialAccountStatus.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FTwinBLDTrialAccountStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTwinBLDTrialAccountStatus.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FTwinBLDTrialAccountStatus.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FTwinBLDTrialAccountStatus ******************************************

// ********** Begin Class UTwinBLDTrialSubsystem ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UTwinBLDTrialSubsystem_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * TwinBLD-owned trial state checks + activation.\n *\n * Mirrors RoadBLD/CityBLD trial systems (including encrypted local activation record) so trial\n * gating doesn't depend on changes in WorldBLD plugin code. Lives entirely inside the\n * closed-source TwinBLD plugin.\n */" },
		{ "IncludePath", "Authorization/TwinBLDTrialSubsystem.h" },
		{ "ModuleRelativePath", "Public/Authorization/TwinBLDTrialSubsystem.h" },
		{ "ToolTip", "TwinBLD-owned trial state checks + activation.\n\nMirrors RoadBLD/CityBLD trial systems (including encrypted local activation record) so trial\ngating doesn't depend on changes in WorldBLD plugin code. Lives entirely inside the\nclosed-source TwinBLD plugin." },
	};
#endif // WITH_METADATA

// ********** Begin Class UTwinBLDTrialSubsystem constinit property declarations *******************
// ********** End Class UTwinBLDTrialSubsystem constinit property declarations *********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinBLDTrialSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UEditorSubsystem,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UTwinBLDTrialSubsystem,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UTwinBLDTrialSubsystem;
UClass* Z_Construct_UClass_UTwinBLDTrialSubsystem(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UTwinBLDTrialSubsystem;
		if (!Z_Registration_Info_UClass_UTwinBLDTrialSubsystem.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("TwinBLDTrialSubsystem"),
				Z_Registration_Info_UClass_UTwinBLDTrialSubsystem.InnerSingleton,
				nullptr,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UTwinBLDTrialSubsystem.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UTwinBLDTrialSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTwinBLDTrialSubsystem.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UTwinBLDTrialSubsystem.OuterSingleton;
}
#undef UHT_STATICS
UTwinBLDTrialSubsystem::UTwinBLDTrialSubsystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTwinBLDTrialSubsystem);
UTwinBLDTrialSubsystem::~UTwinBLDTrialSubsystem() {}
// ********** End Class UTwinBLDTrialSubsystem *****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_Authorization_TwinBLDTrialSubsystem_h__Script_TwinBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_TwinBLDEditor_ETwinBLDTrialEligibility, TEXT("ETwinBLDTrialEligibility"), &ZRIE_ETwinBLDTrialEligibility, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 343186191U) },
		{ Z_Construct_UEnum_TwinBLDEditor_ETwinBLDLocalTrialRecordStatus, TEXT("ETwinBLDLocalTrialRecordStatus"), &ZRIE_ETwinBLDLocalTrialRecordStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3934710808U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FTwinBLDTrialAccountStatus, Z_Construct_UScriptStruct_FTwinBLDTrialAccountStatus_Statics::NewStructOps, TEXT("TwinBLDTrialAccountStatus"),&Z_Registration_Info_UScriptStruct_FTwinBLDTrialAccountStatus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwinBLDTrialAccountStatus), 2666849911U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTwinBLDTrialSubsystem, TEXT("UTwinBLDTrialSubsystem"), &Z_Registration_Info_UClass_UTwinBLDTrialSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTwinBLDTrialSubsystem), 1377025648U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_Authorization_TwinBLDTrialSubsystem_h__Script_TwinBLDEditor_0d06977f2c94909ac61a354bc8a72b038ae86a80{
	TEXT("/Script/TwinBLDEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
