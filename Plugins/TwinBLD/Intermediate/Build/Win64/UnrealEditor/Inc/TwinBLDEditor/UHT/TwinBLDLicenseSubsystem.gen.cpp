// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Authorization/TwinBLDLicenseSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeTwinBLDLicenseSubsystem() {}

// ********** Begin Cross Module References ********************************************************
EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase);
TWINBLDEDITOR_API UEnum* Z_Construct_UEnum_TwinBLDEditor_ETwinBLDLicenseState(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDLicenseSubsystem(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDLicenseSubsystem(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ETwinBLDLicenseState ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_TwinBLDEditor_ETwinBLDLicenseState_Statics
template<> TWINBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ETwinBLDLicenseState>()
{
	return Z_Construct_UEnum_TwinBLDEditor_ETwinBLDLicenseState(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Checking.Name", "ETwinBLDLicenseState::Checking" },
		{ "Error.Name", "ETwinBLDLicenseState::Error" },
		{ "Licensed.Name", "ETwinBLDLicenseState::Licensed" },
		{ "ModuleRelativePath", "Public/Authorization/TwinBLDLicenseSubsystem.h" },
		{ "Unknown.Name", "ETwinBLDLicenseState::Unknown" },
		{ "Unlicensed.Name", "ETwinBLDLicenseState::Unlicensed" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETwinBLDLicenseState::Unknown", (int64)ETwinBLDLicenseState::Unknown },
		{ "ETwinBLDLicenseState::Checking", (int64)ETwinBLDLicenseState::Checking },
		{ "ETwinBLDLicenseState::Licensed", (int64)ETwinBLDLicenseState::Licensed },
		{ "ETwinBLDLicenseState::Unlicensed", (int64)ETwinBLDLicenseState::Unlicensed },
		{ "ETwinBLDLicenseState::Error", (int64)ETwinBLDLicenseState::Error },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	"ETwinBLDLicenseState",
	"ETwinBLDLicenseState",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ETwinBLDLicenseState;
UEnum* Z_Construct_UEnum_TwinBLDEditor_ETwinBLDLicenseState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ETwinBLDLicenseState.OuterSingleton)
		{
			ZRIE_ETwinBLDLicenseState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TwinBLDEditor_ETwinBLDLicenseState, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("ETwinBLDLicenseState"));
		}
		return ZRIE_ETwinBLDLicenseState.OuterSingleton;
	}
	if (!ZRIE_ETwinBLDLicenseState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ETwinBLDLicenseState.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ETwinBLDLicenseState.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ETwinBLDLicenseState ********************************************************

// ********** Begin Class UTwinBLDLicenseSubsystem *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UTwinBLDLicenseSubsystem_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * TwinBLD-owned license state cache + async refresh.\n *\n * Mirrors RoadBLD's license subsystem but lives entirely inside the closed-source TwinBLD plugin\n * so the allow/deny decision cannot be bypassed by modifying open-source WorldBLD code.\n */" },
		{ "IncludePath", "Authorization/TwinBLDLicenseSubsystem.h" },
		{ "ModuleRelativePath", "Public/Authorization/TwinBLDLicenseSubsystem.h" },
		{ "ToolTip", "TwinBLD-owned license state cache + async refresh.\n\nMirrors RoadBLD's license subsystem but lives entirely inside the closed-source TwinBLD plugin\nso the allow/deny decision cannot be bypassed by modifying open-source WorldBLD code." },
	};
#endif // WITH_METADATA

// ********** Begin Class UTwinBLDLicenseSubsystem constinit property declarations *****************
// ********** End Class UTwinBLDLicenseSubsystem constinit property declarations *******************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinBLDLicenseSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UEditorSubsystem,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UTwinBLDLicenseSubsystem,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UTwinBLDLicenseSubsystem;
UClass* Z_Construct_UClass_UTwinBLDLicenseSubsystem(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UTwinBLDLicenseSubsystem;
		if (!Z_Registration_Info_UClass_UTwinBLDLicenseSubsystem.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("TwinBLDLicenseSubsystem"),
				Z_Registration_Info_UClass_UTwinBLDLicenseSubsystem.InnerSingleton,
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
		return Z_Registration_Info_UClass_UTwinBLDLicenseSubsystem.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UTwinBLDLicenseSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTwinBLDLicenseSubsystem.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UTwinBLDLicenseSubsystem.OuterSingleton;
}
#undef UHT_STATICS
UTwinBLDLicenseSubsystem::UTwinBLDLicenseSubsystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTwinBLDLicenseSubsystem);
UTwinBLDLicenseSubsystem::~UTwinBLDLicenseSubsystem() {}
// ********** End Class UTwinBLDLicenseSubsystem ***************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_Authorization_TwinBLDLicenseSubsystem_h__Script_TwinBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_TwinBLDEditor_ETwinBLDLicenseState, TEXT("ETwinBLDLicenseState"), &ZRIE_ETwinBLDLicenseState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2642425143U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTwinBLDLicenseSubsystem, TEXT("UTwinBLDLicenseSubsystem"), &Z_Registration_Info_UClass_UTwinBLDLicenseSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTwinBLDLicenseSubsystem), 3748431644U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_Authorization_TwinBLDLicenseSubsystem_h__Script_TwinBLDEditor_13686458d2e32f38244eadf5427cdd0b9706528b{
	TEXT("/Script/TwinBLDEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
