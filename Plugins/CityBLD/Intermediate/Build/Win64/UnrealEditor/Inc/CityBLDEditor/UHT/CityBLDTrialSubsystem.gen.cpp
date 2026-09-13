// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Authorization/CityBLDTrialSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeCityBLDTrialSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime(ETypeConstructPhase);
EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase);
CITYBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCityBLDTrialAccountStatus(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UCityBLDTrialSubsystem(ETypeConstructPhase);
CITYBLDEDITOR_API UEnum* Z_Construct_UEnum_CityBLDEditor_ECityBLDLocalTrialRecordStatus(ETypeConstructPhase);
CITYBLDEDITOR_API UEnum* Z_Construct_UEnum_CityBLDEditor_ECityBLDTrialEligibility(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UCityBLDTrialSubsystem(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ECityBLDTrialEligibility **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_CityBLDEditor_ECityBLDTrialEligibility_Statics
template<> CITYBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECityBLDTrialEligibility>()
{
	return Z_Construct_UEnum_CityBLDEditor_ECityBLDTrialEligibility(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Eligible_NoPriorTrial.Name", "ECityBLDTrialEligibility::Eligible_NoPriorTrial" },
		{ "Ineligible_TrialPreviouslyActivated.Name", "ECityBLDTrialEligibility::Ineligible_TrialPreviouslyActivated" },
		{ "ModuleRelativePath", "Public/Authorization/CityBLDTrialSubsystem.h" },
		{ "UnknownOrError.Name", "ECityBLDTrialEligibility::UnknownOrError" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECityBLDTrialEligibility::Eligible_NoPriorTrial", (int64)ECityBLDTrialEligibility::Eligible_NoPriorTrial },
		{ "ECityBLDTrialEligibility::Ineligible_TrialPreviouslyActivated", (int64)ECityBLDTrialEligibility::Ineligible_TrialPreviouslyActivated },
		{ "ECityBLDTrialEligibility::UnknownOrError", (int64)ECityBLDTrialEligibility::UnknownOrError },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
	nullptr,
	"ECityBLDTrialEligibility",
	"ECityBLDTrialEligibility",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ECityBLDTrialEligibility;
UEnum* Z_Construct_UEnum_CityBLDEditor_ECityBLDTrialEligibility(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ECityBLDTrialEligibility.OuterSingleton)
		{
			ZRIE_ECityBLDTrialEligibility.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CityBLDEditor_ECityBLDTrialEligibility, (UObject*)Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase::Outer), TEXT("ECityBLDTrialEligibility"));
		}
		return ZRIE_ECityBLDTrialEligibility.OuterSingleton;
	}
	if (!ZRIE_ECityBLDTrialEligibility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ECityBLDTrialEligibility.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ECityBLDTrialEligibility.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ECityBLDTrialEligibility ****************************************************

// ********** Begin Enum ECityBLDLocalTrialRecordStatus ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_CityBLDEditor_ECityBLDLocalTrialRecordStatus_Statics
template<> CITYBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECityBLDLocalTrialRecordStatus>()
{
	return Z_Construct_UEnum_CityBLDEditor_ECityBLDLocalTrialRecordStatus(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "InvalidOrTampered.Name", "ECityBLDLocalTrialRecordStatus::InvalidOrTampered" },
		{ "ModuleRelativePath", "Public/Authorization/CityBLDTrialSubsystem.h" },
		{ "NoRecord.Name", "ECityBLDLocalTrialRecordStatus::NoRecord" },
		{ "ValidRecord.Name", "ECityBLDLocalTrialRecordStatus::ValidRecord" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECityBLDLocalTrialRecordStatus::NoRecord", (int64)ECityBLDLocalTrialRecordStatus::NoRecord },
		{ "ECityBLDLocalTrialRecordStatus::ValidRecord", (int64)ECityBLDLocalTrialRecordStatus::ValidRecord },
		{ "ECityBLDLocalTrialRecordStatus::InvalidOrTampered", (int64)ECityBLDLocalTrialRecordStatus::InvalidOrTampered },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
	nullptr,
	"ECityBLDLocalTrialRecordStatus",
	"ECityBLDLocalTrialRecordStatus",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ECityBLDLocalTrialRecordStatus;
UEnum* Z_Construct_UEnum_CityBLDEditor_ECityBLDLocalTrialRecordStatus(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ECityBLDLocalTrialRecordStatus.OuterSingleton)
		{
			ZRIE_ECityBLDLocalTrialRecordStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CityBLDEditor_ECityBLDLocalTrialRecordStatus, (UObject*)Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase::Outer), TEXT("ECityBLDLocalTrialRecordStatus"));
		}
		return ZRIE_ECityBLDLocalTrialRecordStatus.OuterSingleton;
	}
	if (!ZRIE_ECityBLDLocalTrialRecordStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ECityBLDLocalTrialRecordStatus.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ECityBLDLocalTrialRecordStatus.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ECityBLDLocalTrialRecordStatus **********************************************

// ********** Begin ScriptStruct FCityBLDTrialAccountStatus ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FCityBLDTrialAccountStatus_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FCityBLDTrialAccountStatus>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCityBLDTrialAccountStatus); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Authorization/CityBLDTrialSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasTrial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Authorization/CityBLDTrialSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrialStatus_MetaData[] = {
		{ "ModuleRelativePath", "Public/Authorization/CityBLDTrialSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasTrialObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/Authorization/CityBLDTrialSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrialStartUtc_MetaData[] = {
		{ "ModuleRelativePath", "Public/Authorization/CityBLDTrialSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrialEndUtc_MetaData[] = {
		{ "ModuleRelativePath", "Public/Authorization/CityBLDTrialSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DaysRemaining_MetaData[] = {
		{ "ModuleRelativePath", "Public/Authorization/CityBLDTrialSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCityBLDTrialAccountStatus constinit property declarations ********
	static void NewProp_bHasTrial_SetBit(void* Obj)
	{
		((FCityBLDTrialAccountStatus*)Obj)->bHasTrial = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasTrial;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TrialStatus;
	static void NewProp_bHasTrialObject_SetBit(void* Obj)
	{
		((FCityBLDTrialAccountStatus*)Obj)->bHasTrialObject = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasTrialObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrialStartUtc;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrialEndUtc;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DaysRemaining;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCityBLDTrialAccountStatus constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCityBLDTrialAccountStatus>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FCityBLDTrialAccountStatus Property Definitions *******************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHasTrial = { "bHasTrial", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FCityBLDTrialAccountStatus), &UHT_STATICS::NewProp_bHasTrial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasTrial_MetaData), NewProp_bHasTrial_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_TrialStatus = { "TrialStatus", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FCityBLDTrialAccountStatus, TrialStatus), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrialStatus_MetaData), NewProp_TrialStatus_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHasTrialObject = { "bHasTrialObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FCityBLDTrialAccountStatus), &UHT_STATICS::NewProp_bHasTrialObject_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasTrialObject_MetaData), NewProp_bHasTrialObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TrialStartUtc = { "TrialStartUtc", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FCityBLDTrialAccountStatus, TrialStartUtc), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrialStartUtc_MetaData), NewProp_TrialStartUtc_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TrialEndUtc = { "TrialEndUtc", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FCityBLDTrialAccountStatus, TrialEndUtc), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrialEndUtc_MetaData), NewProp_TrialEndUtc_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_DaysRemaining = { "DaysRemaining", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FCityBLDTrialAccountStatus, DaysRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DaysRemaining_MetaData), NewProp_DaysRemaining_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHasTrial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TrialStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHasTrialObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TrialStartUtc,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TrialEndUtc,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DaysRemaining,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FCityBLDTrialAccountStatus Property Definitions *********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
	nullptr,
	&NewStructOps,
	"CityBLDTrialAccountStatus",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FCityBLDTrialAccountStatus>(),
	alignof(FCityBLDTrialAccountStatus),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCityBLDTrialAccountStatus;
UScriptStruct* Z_Construct_UScriptStruct_FCityBLDTrialAccountStatus(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FCityBLDTrialAccountStatus.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FCityBLDTrialAccountStatus.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCityBLDTrialAccountStatus, (UObject*)Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase::Outer), TEXT("CityBLDTrialAccountStatus"));
		}
		return Z_Registration_Info_UScriptStruct_FCityBLDTrialAccountStatus.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FCityBLDTrialAccountStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCityBLDTrialAccountStatus.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCityBLDTrialAccountStatus.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FCityBLDTrialAccountStatus ******************************************

// ********** Begin Class UCityBLDTrialSubsystem ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UCityBLDTrialSubsystem_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * CityBLD-owned trial state checks + activation.\n *\n * Mirrors RoadBLD's trial system (including encrypted local activation record) so trial\n * gating doesn't depend on changes in WorldBLD plugin code.\n */" },
		{ "IncludePath", "Authorization/CityBLDTrialSubsystem.h" },
		{ "ModuleRelativePath", "Public/Authorization/CityBLDTrialSubsystem.h" },
		{ "ToolTip", "CityBLD-owned trial state checks + activation.\n\nMirrors RoadBLD's trial system (including encrypted local activation record) so trial\ngating doesn't depend on changes in WorldBLD plugin code." },
	};
#endif // WITH_METADATA

// ********** Begin Class UCityBLDTrialSubsystem constinit property declarations *******************
// ********** End Class UCityBLDTrialSubsystem constinit property declarations *********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCityBLDTrialSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UEditorSubsystem,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UCityBLDTrialSubsystem,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UCityBLDTrialSubsystem;
UClass* Z_Construct_UClass_UCityBLDTrialSubsystem(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UCityBLDTrialSubsystem;
		if (!Z_Registration_Info_UClass_UCityBLDTrialSubsystem.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CityBLDTrialSubsystem"),
				Z_Registration_Info_UClass_UCityBLDTrialSubsystem.InnerSingleton,
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
		return Z_Registration_Info_UClass_UCityBLDTrialSubsystem.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UCityBLDTrialSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCityBLDTrialSubsystem.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UCityBLDTrialSubsystem.OuterSingleton;
}
#undef UHT_STATICS
UCityBLDTrialSubsystem::UCityBLDTrialSubsystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCityBLDTrialSubsystem);
UCityBLDTrialSubsystem::~UCityBLDTrialSubsystem() {}
// ********** End Class UCityBLDTrialSubsystem *****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_Authorization_CityBLDTrialSubsystem_h__Script_CityBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_CityBLDEditor_ECityBLDTrialEligibility, TEXT("ECityBLDTrialEligibility"), &ZRIE_ECityBLDTrialEligibility, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1085312747U) },
		{ Z_Construct_UEnum_CityBLDEditor_ECityBLDLocalTrialRecordStatus, TEXT("ECityBLDLocalTrialRecordStatus"), &ZRIE_ECityBLDLocalTrialRecordStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 285691114U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FCityBLDTrialAccountStatus, Z_Construct_UScriptStruct_FCityBLDTrialAccountStatus_Statics::NewStructOps, TEXT("CityBLDTrialAccountStatus"),&Z_Registration_Info_UScriptStruct_FCityBLDTrialAccountStatus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCityBLDTrialAccountStatus), 3400344518U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCityBLDTrialSubsystem, TEXT("UCityBLDTrialSubsystem"), &Z_Registration_Info_UClass_UCityBLDTrialSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCityBLDTrialSubsystem), 235426973U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_Authorization_CityBLDTrialSubsystem_h__Script_CityBLDEditor_6c7abd9282a8408b863a26d856b7f6bc38aaf0c0{
	TEXT("/Script/CityBLDEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
