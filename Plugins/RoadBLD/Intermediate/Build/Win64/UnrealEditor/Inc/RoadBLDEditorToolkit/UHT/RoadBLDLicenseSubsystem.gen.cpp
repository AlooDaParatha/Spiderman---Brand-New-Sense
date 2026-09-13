// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Authorization/RoadBLDLicenseSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRoadBLDLicenseSubsystem() {}

// ********** Begin Cross Module References ********************************************************
EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_ERoadBLDLicenseState(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadBLDLicenseSubsystem(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadBLDLicenseSubsystem(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ERoadBLDLicenseState ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDEditorToolkit_ERoadBLDLicenseState_Statics
template<> ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ERoadBLDLicenseState>()
{
	return Z_Construct_UEnum_RoadBLDEditorToolkit_ERoadBLDLicenseState(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Checking.Name", "ERoadBLDLicenseState::Checking" },
		{ "Error.Name", "ERoadBLDLicenseState::Error" },
		{ "Licensed.Name", "ERoadBLDLicenseState::Licensed" },
		{ "ModuleRelativePath", "Public/Authorization/RoadBLDLicenseSubsystem.h" },
		{ "Unknown.Name", "ERoadBLDLicenseState::Unknown" },
		{ "Unlicensed.Name", "ERoadBLDLicenseState::Unlicensed" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERoadBLDLicenseState::Unknown", (int64)ERoadBLDLicenseState::Unknown },
		{ "ERoadBLDLicenseState::Checking", (int64)ERoadBLDLicenseState::Checking },
		{ "ERoadBLDLicenseState::Licensed", (int64)ERoadBLDLicenseState::Licensed },
		{ "ERoadBLDLicenseState::Unlicensed", (int64)ERoadBLDLicenseState::Unlicensed },
		{ "ERoadBLDLicenseState::Error", (int64)ERoadBLDLicenseState::Error },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	"ERoadBLDLicenseState",
	"ERoadBLDLicenseState",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERoadBLDLicenseState;
UEnum* Z_Construct_UEnum_RoadBLDEditorToolkit_ERoadBLDLicenseState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERoadBLDLicenseState.OuterSingleton)
		{
			ZRIE_ERoadBLDLicenseState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDEditorToolkit_ERoadBLDLicenseState, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("ERoadBLDLicenseState"));
		}
		return ZRIE_ERoadBLDLicenseState.OuterSingleton;
	}
	if (!ZRIE_ERoadBLDLicenseState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERoadBLDLicenseState.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERoadBLDLicenseState.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERoadBLDLicenseState ********************************************************

// ********** Begin Class URoadBLDLicenseSubsystem *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoadBLDLicenseSubsystem_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * RoadBLD-owned license state cache + async refresh.\n *\n * Important: This subsystem is part of the closed-source RoadBLD plugin so that\n * the allow/deny decision cannot be bypassed by modifying open-source WorldBLD code.\n */" },
		{ "IncludePath", "Authorization/RoadBLDLicenseSubsystem.h" },
		{ "ModuleRelativePath", "Public/Authorization/RoadBLDLicenseSubsystem.h" },
		{ "ToolTip", "RoadBLD-owned license state cache + async refresh.\n\nImportant: This subsystem is part of the closed-source RoadBLD plugin so that\nthe allow/deny decision cannot be bypassed by modifying open-source WorldBLD code." },
	};
#endif // WITH_METADATA

// ********** Begin Class URoadBLDLicenseSubsystem constinit property declarations *****************
// ********** End Class URoadBLDLicenseSubsystem constinit property declarations *******************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadBLDLicenseSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UEditorSubsystem,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoadBLDLicenseSubsystem,
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
FClassRegistrationInfo Z_Registration_Info_UClass_URoadBLDLicenseSubsystem;
UClass* Z_Construct_UClass_URoadBLDLicenseSubsystem(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoadBLDLicenseSubsystem;
		if (!Z_Registration_Info_UClass_URoadBLDLicenseSubsystem.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadBLDLicenseSubsystem"),
				Z_Registration_Info_UClass_URoadBLDLicenseSubsystem.InnerSingleton,
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
		return Z_Registration_Info_UClass_URoadBLDLicenseSubsystem.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoadBLDLicenseSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoadBLDLicenseSubsystem.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoadBLDLicenseSubsystem.OuterSingleton;
}
#undef UHT_STATICS
URoadBLDLicenseSubsystem::URoadBLDLicenseSubsystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoadBLDLicenseSubsystem);
URoadBLDLicenseSubsystem::~URoadBLDLicenseSubsystem() {}
// ********** End Class URoadBLDLicenseSubsystem ***************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_Authorization_RoadBLDLicenseSubsystem_h__Script_RoadBLDEditorToolkit_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RoadBLDEditorToolkit_ERoadBLDLicenseState, TEXT("ERoadBLDLicenseState"), &ZRIE_ERoadBLDLicenseState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2694522608U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoadBLDLicenseSubsystem, TEXT("URoadBLDLicenseSubsystem"), &Z_Registration_Info_UClass_URoadBLDLicenseSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoadBLDLicenseSubsystem), 3876994036U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_Authorization_RoadBLDLicenseSubsystem_h__Script_RoadBLDEditorToolkit_bb366a2133c68183eaaf4e883203ede2ba60d1a7{
	TEXT("/Script/RoadBLDEditorToolkit"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
