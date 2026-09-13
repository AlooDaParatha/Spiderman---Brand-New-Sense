// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Authorization/CityBLDLicenseSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeCityBLDLicenseSubsystem() {}

// ********** Begin Cross Module References ********************************************************
EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UCityBLDLicenseSubsystem(ETypeConstructPhase);
CITYBLDEDITOR_API UEnum* Z_Construct_UEnum_CityBLDEditor_ECityBLDLicenseState(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UCityBLDLicenseSubsystem(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ECityBLDLicenseState ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_CityBLDEditor_ECityBLDLicenseState_Statics
template<> CITYBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECityBLDLicenseState>()
{
	return Z_Construct_UEnum_CityBLDEditor_ECityBLDLicenseState(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Checking.Name", "ECityBLDLicenseState::Checking" },
		{ "Error.Name", "ECityBLDLicenseState::Error" },
		{ "Licensed.Name", "ECityBLDLicenseState::Licensed" },
		{ "ModuleRelativePath", "Public/Authorization/CityBLDLicenseSubsystem.h" },
		{ "Unknown.Name", "ECityBLDLicenseState::Unknown" },
		{ "Unlicensed.Name", "ECityBLDLicenseState::Unlicensed" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECityBLDLicenseState::Unknown", (int64)ECityBLDLicenseState::Unknown },
		{ "ECityBLDLicenseState::Checking", (int64)ECityBLDLicenseState::Checking },
		{ "ECityBLDLicenseState::Licensed", (int64)ECityBLDLicenseState::Licensed },
		{ "ECityBLDLicenseState::Unlicensed", (int64)ECityBLDLicenseState::Unlicensed },
		{ "ECityBLDLicenseState::Error", (int64)ECityBLDLicenseState::Error },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
	nullptr,
	"ECityBLDLicenseState",
	"ECityBLDLicenseState",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ECityBLDLicenseState;
UEnum* Z_Construct_UEnum_CityBLDEditor_ECityBLDLicenseState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ECityBLDLicenseState.OuterSingleton)
		{
			ZRIE_ECityBLDLicenseState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CityBLDEditor_ECityBLDLicenseState, (UObject*)Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase::Outer), TEXT("ECityBLDLicenseState"));
		}
		return ZRIE_ECityBLDLicenseState.OuterSingleton;
	}
	if (!ZRIE_ECityBLDLicenseState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ECityBLDLicenseState.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ECityBLDLicenseState.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ECityBLDLicenseState ********************************************************

// ********** Begin Class UCityBLDLicenseSubsystem *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UCityBLDLicenseSubsystem_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * CityBLD-owned license state cache + async refresh.\n *\n * This mirrors RoadBLD's license subsystem but lives in the CityBLD plugin so the\n * allow/deny decision is not dependent on modifications to WorldBLD plugin code.\n */" },
		{ "IncludePath", "Authorization/CityBLDLicenseSubsystem.h" },
		{ "ModuleRelativePath", "Public/Authorization/CityBLDLicenseSubsystem.h" },
		{ "ToolTip", "CityBLD-owned license state cache + async refresh.\n\nThis mirrors RoadBLD's license subsystem but lives in the CityBLD plugin so the\nallow/deny decision is not dependent on modifications to WorldBLD plugin code." },
	};
#endif // WITH_METADATA

// ********** Begin Class UCityBLDLicenseSubsystem constinit property declarations *****************
// ********** End Class UCityBLDLicenseSubsystem constinit property declarations *******************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCityBLDLicenseSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UEditorSubsystem,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UCityBLDLicenseSubsystem,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UCityBLDLicenseSubsystem;
UClass* Z_Construct_UClass_UCityBLDLicenseSubsystem(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UCityBLDLicenseSubsystem;
		if (!Z_Registration_Info_UClass_UCityBLDLicenseSubsystem.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CityBLDLicenseSubsystem"),
				Z_Registration_Info_UClass_UCityBLDLicenseSubsystem.InnerSingleton,
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
		return Z_Registration_Info_UClass_UCityBLDLicenseSubsystem.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UCityBLDLicenseSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCityBLDLicenseSubsystem.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UCityBLDLicenseSubsystem.OuterSingleton;
}
#undef UHT_STATICS
UCityBLDLicenseSubsystem::UCityBLDLicenseSubsystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCityBLDLicenseSubsystem);
UCityBLDLicenseSubsystem::~UCityBLDLicenseSubsystem() {}
// ********** End Class UCityBLDLicenseSubsystem ***************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_Authorization_CityBLDLicenseSubsystem_h__Script_CityBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_CityBLDEditor_ECityBLDLicenseState, TEXT("ECityBLDLicenseState"), &ZRIE_ECityBLDLicenseState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3716316815U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCityBLDLicenseSubsystem, TEXT("UCityBLDLicenseSubsystem"), &Z_Registration_Info_UClass_UCityBLDLicenseSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCityBLDLicenseSubsystem), 1447382109U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_Authorization_CityBLDLicenseSubsystem_h__Script_CityBLDEditor_31c80f14dbe8893bb2ead330f98603ebe0b3d143{
	TEXT("/Script/CityBLDEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
