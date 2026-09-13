// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Authorization/RoadBLDTrialSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRoadBLDTrialSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime(ETypeConstructPhase);
EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_ERoadBLDLocalTrialRecordStatus(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_ERoadBLDTrialEligibility(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FRoadBLDTrialAccountStatus(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadBLDTrialSubsystem(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadBLDTrialSubsystem(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ERoadBLDTrialEligibility **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDEditorToolkit_ERoadBLDTrialEligibility_Statics
template<> ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERoadBLDTrialEligibility>()
{
	return Z_Construct_UEnum_RoadBLDEditorToolkit_ERoadBLDTrialEligibility(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Eligible_NoPriorTrial.Name", "ERoadBLDTrialEligibility::Eligible_NoPriorTrial" },
		{ "Ineligible_TrialPreviouslyActivated.Name", "ERoadBLDTrialEligibility::Ineligible_TrialPreviouslyActivated" },
		{ "ModuleRelativePath", "Public/Authorization/RoadBLDTrialSubsystem.h" },
		{ "UnknownOrError.Name", "ERoadBLDTrialEligibility::UnknownOrError" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERoadBLDTrialEligibility::Eligible_NoPriorTrial", (int64)ERoadBLDTrialEligibility::Eligible_NoPriorTrial },
		{ "ERoadBLDTrialEligibility::Ineligible_TrialPreviouslyActivated", (int64)ERoadBLDTrialEligibility::Ineligible_TrialPreviouslyActivated },
		{ "ERoadBLDTrialEligibility::UnknownOrError", (int64)ERoadBLDTrialEligibility::UnknownOrError },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	"ERoadBLDTrialEligibility",
	"ERoadBLDTrialEligibility",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERoadBLDTrialEligibility;
UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_ERoadBLDTrialEligibility(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERoadBLDTrialEligibility.OuterSingleton)
		{
			ZRIE_ERoadBLDTrialEligibility.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDEditorToolkit_ERoadBLDTrialEligibility, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("ERoadBLDTrialEligibility"));
		}
		return ZRIE_ERoadBLDTrialEligibility.OuterSingleton;
	}
	if (!ZRIE_ERoadBLDTrialEligibility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERoadBLDTrialEligibility.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERoadBLDTrialEligibility.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERoadBLDTrialEligibility ****************************************************

// ********** Begin Enum ERoadBLDLocalTrialRecordStatus ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDEditorToolkit_ERoadBLDLocalTrialRecordStatus_Statics
template<> ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERoadBLDLocalTrialRecordStatus>()
{
	return Z_Construct_UEnum_RoadBLDEditorToolkit_ERoadBLDLocalTrialRecordStatus(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "InvalidOrTampered.Name", "ERoadBLDLocalTrialRecordStatus::InvalidOrTampered" },
		{ "ModuleRelativePath", "Public/Authorization/RoadBLDTrialSubsystem.h" },
		{ "NoRecord.Name", "ERoadBLDLocalTrialRecordStatus::NoRecord" },
		{ "ValidRecord.Name", "ERoadBLDLocalTrialRecordStatus::ValidRecord" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERoadBLDLocalTrialRecordStatus::NoRecord", (int64)ERoadBLDLocalTrialRecordStatus::NoRecord },
		{ "ERoadBLDLocalTrialRecordStatus::ValidRecord", (int64)ERoadBLDLocalTrialRecordStatus::ValidRecord },
		{ "ERoadBLDLocalTrialRecordStatus::InvalidOrTampered", (int64)ERoadBLDLocalTrialRecordStatus::InvalidOrTampered },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	"ERoadBLDLocalTrialRecordStatus",
	"ERoadBLDLocalTrialRecordStatus",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERoadBLDLocalTrialRecordStatus;
UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_ERoadBLDLocalTrialRecordStatus(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERoadBLDLocalTrialRecordStatus.OuterSingleton)
		{
			ZRIE_ERoadBLDLocalTrialRecordStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDEditorToolkit_ERoadBLDLocalTrialRecordStatus, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("ERoadBLDLocalTrialRecordStatus"));
		}
		return ZRIE_ERoadBLDLocalTrialRecordStatus.OuterSingleton;
	}
	if (!ZRIE_ERoadBLDLocalTrialRecordStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERoadBLDLocalTrialRecordStatus.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERoadBLDLocalTrialRecordStatus.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERoadBLDLocalTrialRecordStatus **********************************************

// ********** Begin ScriptStruct FRoadBLDTrialAccountStatus ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRoadBLDTrialAccountStatus_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRoadBLDTrialAccountStatus>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRoadBLDTrialAccountStatus); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Authorization/RoadBLDTrialSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasTrial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Authorization/RoadBLDTrialSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrialStatus_MetaData[] = {
		{ "ModuleRelativePath", "Public/Authorization/RoadBLDTrialSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasTrialObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/Authorization/RoadBLDTrialSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrialStartUtc_MetaData[] = {
		{ "ModuleRelativePath", "Public/Authorization/RoadBLDTrialSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrialEndUtc_MetaData[] = {
		{ "ModuleRelativePath", "Public/Authorization/RoadBLDTrialSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DaysRemaining_MetaData[] = {
		{ "ModuleRelativePath", "Public/Authorization/RoadBLDTrialSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRoadBLDTrialAccountStatus constinit property declarations ********
	static void NewProp_bHasTrial_SetBit(void* Obj)
	{
		((FRoadBLDTrialAccountStatus*)Obj)->bHasTrial = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasTrial;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TrialStatus;
	static void NewProp_bHasTrialObject_SetBit(void* Obj)
	{
		((FRoadBLDTrialAccountStatus*)Obj)->bHasTrialObject = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasTrialObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrialStartUtc;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrialEndUtc;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DaysRemaining;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRoadBLDTrialAccountStatus constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadBLDTrialAccountStatus>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRoadBLDTrialAccountStatus Property Definitions *******************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHasTrial = { "bHasTrial", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadBLDTrialAccountStatus), &UHT_STATICS::NewProp_bHasTrial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasTrial_MetaData), NewProp_bHasTrial_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_TrialStatus = { "TrialStatus", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadBLDTrialAccountStatus, TrialStatus), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrialStatus_MetaData), NewProp_TrialStatus_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHasTrialObject = { "bHasTrialObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadBLDTrialAccountStatus), &UHT_STATICS::NewProp_bHasTrialObject_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasTrialObject_MetaData), NewProp_bHasTrialObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TrialStartUtc = { "TrialStartUtc", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadBLDTrialAccountStatus, TrialStartUtc), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrialStartUtc_MetaData), NewProp_TrialStartUtc_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TrialEndUtc = { "TrialEndUtc", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadBLDTrialAccountStatus, TrialEndUtc), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrialEndUtc_MetaData), NewProp_TrialEndUtc_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_DaysRemaining = { "DaysRemaining", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadBLDTrialAccountStatus, DaysRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DaysRemaining_MetaData), NewProp_DaysRemaining_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHasTrial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TrialStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHasTrialObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TrialStartUtc,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TrialEndUtc,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DaysRemaining,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRoadBLDTrialAccountStatus Property Definitions *********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	&NewStructOps,
	"RoadBLDTrialAccountStatus",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRoadBLDTrialAccountStatus>(),
	alignof(FRoadBLDTrialAccountStatus),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRoadBLDTrialAccountStatus;
UScriptStruct* Z_Construct_UScriptStruct_FRoadBLDTrialAccountStatus(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRoadBLDTrialAccountStatus.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRoadBLDTrialAccountStatus.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadBLDTrialAccountStatus, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("RoadBLDTrialAccountStatus"));
		}
		return Z_Registration_Info_UScriptStruct_FRoadBLDTrialAccountStatus.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRoadBLDTrialAccountStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRoadBLDTrialAccountStatus.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRoadBLDTrialAccountStatus.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRoadBLDTrialAccountStatus ******************************************

// ********** Begin Class URoadBLDTrialSubsystem ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoadBLDTrialSubsystem_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * RoadBLD-owned trial state checks + activation.\n *\n * Important: This subsystem lives in the closed-source RoadBLD plugin so that trial gating cannot\n * be bypassed by modifying open-source WorldBLD code.\n */" },
		{ "IncludePath", "Authorization/RoadBLDTrialSubsystem.h" },
		{ "ModuleRelativePath", "Public/Authorization/RoadBLDTrialSubsystem.h" },
		{ "ToolTip", "RoadBLD-owned trial state checks + activation.\n\nImportant: This subsystem lives in the closed-source RoadBLD plugin so that trial gating cannot\nbe bypassed by modifying open-source WorldBLD code." },
	};
#endif // WITH_METADATA

// ********** Begin Class URoadBLDTrialSubsystem constinit property declarations *******************
// ********** End Class URoadBLDTrialSubsystem constinit property declarations *********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadBLDTrialSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UEditorSubsystem,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoadBLDTrialSubsystem,
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
FClassRegistrationInfo Z_Registration_Info_UClass_URoadBLDTrialSubsystem;
UClass* Z_Construct_UClass_URoadBLDTrialSubsystem(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoadBLDTrialSubsystem;
		if (!Z_Registration_Info_UClass_URoadBLDTrialSubsystem.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadBLDTrialSubsystem"),
				Z_Registration_Info_UClass_URoadBLDTrialSubsystem.InnerSingleton,
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
		return Z_Registration_Info_UClass_URoadBLDTrialSubsystem.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoadBLDTrialSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoadBLDTrialSubsystem.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoadBLDTrialSubsystem.OuterSingleton;
}
#undef UHT_STATICS
URoadBLDTrialSubsystem::URoadBLDTrialSubsystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoadBLDTrialSubsystem);
URoadBLDTrialSubsystem::~URoadBLDTrialSubsystem() {}
// ********** End Class URoadBLDTrialSubsystem *****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_Authorization_RoadBLDTrialSubsystem_h__Script_RoadBLDEditorToolkit_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RoadBLDEditorToolkit_ERoadBLDTrialEligibility, TEXT("ERoadBLDTrialEligibility"), &ZRIE_ERoadBLDTrialEligibility, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1911051719U) },
		{ Z_Construct_UEnum_RoadBLDEditorToolkit_ERoadBLDLocalTrialRecordStatus, TEXT("ERoadBLDLocalTrialRecordStatus"), &ZRIE_ERoadBLDLocalTrialRecordStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 173163702U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FRoadBLDTrialAccountStatus, Z_Construct_UScriptStruct_FRoadBLDTrialAccountStatus_Statics::NewStructOps, TEXT("RoadBLDTrialAccountStatus"),&Z_Registration_Info_UScriptStruct_FRoadBLDTrialAccountStatus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadBLDTrialAccountStatus), 4153374346U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoadBLDTrialSubsystem, TEXT("URoadBLDTrialSubsystem"), &Z_Registration_Info_UClass_URoadBLDTrialSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoadBLDTrialSubsystem), 1010118900U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_Authorization_RoadBLDTrialSubsystem_h__Script_RoadBLDEditorToolkit_840030ff905f3192a50bddda031a40e9d1784e26{
	TEXT("/Script/RoadBLDEditorToolkit"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
