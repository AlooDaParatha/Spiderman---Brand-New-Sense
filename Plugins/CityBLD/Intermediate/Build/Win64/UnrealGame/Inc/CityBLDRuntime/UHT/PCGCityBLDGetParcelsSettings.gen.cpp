// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/PCGCityBLDGetParcelsSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodePCGCityBLDGetParcelsSettings() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UClass* Z_Construct_UClass_UPCGSettings(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDRuntime(ETypeConstructPhase);
CITYBLDRUNTIME_API UEnum* Z_Construct_UEnum_CityBLDRuntime_ECityBLDLandUseFilterMode(ETypeConstructPhase);
CITYBLDRUNTIME_API UEnum* Z_Construct_UEnum_CityBLDRuntime_ECityBLDParcelOutlineSource(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UPCGCityBLDGetParcelsSettings(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UPCGCityBLDGetParcelsSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ECityBLDParcelOutlineSource ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_CityBLDRuntime_ECityBLDParcelOutlineSource_Statics
template<> CITYBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ECityBLDParcelOutlineSource>()
{
	return Z_Construct_UEnum_CityBLDRuntime_ECityBLDParcelOutlineSource(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlockInnerLoop.Comment", "/** Output a single closed spline datum for the block InnerLoop. */" },
		{ "BlockInnerLoop.DisplayName", "Block InnerLoop" },
		{ "BlockInnerLoop.Name", "ECityBLDParcelOutlineSource::BlockInnerLoop" },
		{ "BlockInnerLoop.ToolTip", "Output a single closed spline datum for the block InnerLoop." },
		{ "BlockOuterLoop.Comment", "/** Output a single closed spline datum for the block OuterLoop. */" },
		{ "BlockOuterLoop.DisplayName", "Block OuterLoop" },
		{ "BlockOuterLoop.Name", "ECityBLDParcelOutlineSource::BlockOuterLoop" },
		{ "BlockOuterLoop.ToolTip", "Output a single closed spline datum for the block OuterLoop." },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PCG/PCGCityBLDGetParcelsSettings.h" },
		{ "Parcels.Comment", "/** Output one closed spline datum per parcel (from UCityParcel::ShapePoints). */" },
		{ "Parcels.DisplayName", "Parcels" },
		{ "Parcels.Name", "ECityBLDParcelOutlineSource::Parcels" },
		{ "Parcels.ToolTip", "Output one closed spline datum per parcel (from UCityParcel::ShapePoints)." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECityBLDParcelOutlineSource::Parcels", (int64)ECityBLDParcelOutlineSource::Parcels },
		{ "ECityBLDParcelOutlineSource::BlockInnerLoop", (int64)ECityBLDParcelOutlineSource::BlockInnerLoop },
		{ "ECityBLDParcelOutlineSource::BlockOuterLoop", (int64)ECityBLDParcelOutlineSource::BlockOuterLoop },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDRuntime,
	nullptr,
	"ECityBLDParcelOutlineSource",
	"ECityBLDParcelOutlineSource",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ECityBLDParcelOutlineSource;
UEnum* Z_Construct_UEnum_CityBLDRuntime_ECityBLDParcelOutlineSource(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ECityBLDParcelOutlineSource.OuterSingleton)
		{
			ZRIE_ECityBLDParcelOutlineSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CityBLDRuntime_ECityBLDParcelOutlineSource, (UObject*)Z_Construct_UPackage__Script_CityBLDRuntime(ETypeConstructPhase::Outer), TEXT("ECityBLDParcelOutlineSource"));
		}
		return ZRIE_ECityBLDParcelOutlineSource.OuterSingleton;
	}
	if (!ZRIE_ECityBLDParcelOutlineSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ECityBLDParcelOutlineSource.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ECityBLDParcelOutlineSource.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ECityBLDParcelOutlineSource *************************************************

// ********** Begin Enum ECityBLDLandUseFilterMode *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_CityBLDRuntime_ECityBLDLandUseFilterMode_Statics
template<> CITYBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ECityBLDLandUseFilterMode>()
{
	return Z_Construct_UEnum_CityBLDRuntime_ECityBLDLandUseFilterMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Exclude.DisplayName", "Exclude" },
		{ "Exclude.Name", "ECityBLDLandUseFilterMode::Exclude" },
		{ "Include.DisplayName", "Include" },
		{ "Include.Name", "ECityBLDLandUseFilterMode::Include" },
		{ "ModuleRelativePath", "Public/PCG/PCGCityBLDGetParcelsSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECityBLDLandUseFilterMode::Include", (int64)ECityBLDLandUseFilterMode::Include },
		{ "ECityBLDLandUseFilterMode::Exclude", (int64)ECityBLDLandUseFilterMode::Exclude },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDRuntime,
	nullptr,
	"ECityBLDLandUseFilterMode",
	"ECityBLDLandUseFilterMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ECityBLDLandUseFilterMode;
UEnum* Z_Construct_UEnum_CityBLDRuntime_ECityBLDLandUseFilterMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ECityBLDLandUseFilterMode.OuterSingleton)
		{
			ZRIE_ECityBLDLandUseFilterMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CityBLDRuntime_ECityBLDLandUseFilterMode, (UObject*)Z_Construct_UPackage__Script_CityBLDRuntime(ETypeConstructPhase::Outer), TEXT("ECityBLDLandUseFilterMode"));
		}
		return ZRIE_ECityBLDLandUseFilterMode.OuterSingleton;
	}
	if (!ZRIE_ECityBLDLandUseFilterMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ECityBLDLandUseFilterMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ECityBLDLandUseFilterMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ECityBLDLandUseFilterMode ***************************************************

// ********** Begin Class UPCGCityBLDGetParcelsSettings ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UPCGCityBLDGetParcelsSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * PCG node: Get CityBLD Parcels\n *\n * Runs on a UPCGComponent hosted on an ACityBlockGeo actor and reads:\n * ACityBlockGeo->SourceBlock->Parcels\n *\n * Outputs one spatial datum per parcel (closed spline) with attributes:\n * - ParcelIndex (int)\n * - ParcelSeed (int)\n * - bIsCourtyard (bool)\n * - LandUseName (string)\n *\n * Can optionally output the block InnerLoop or OuterLoop splines instead.\n */" },
		{ "IncludePath", "PCG/PCGCityBLDGetParcelsSettings.h" },
		{ "ModuleRelativePath", "Public/PCG/PCGCityBLDGetParcelsSettings.h" },
		{ "ToolTip", "PCG node: Get CityBLD Parcels\n\nRuns on a UPCGComponent hosted on an ACityBlockGeo actor and reads:\nACityBlockGeo->SourceBlock->Parcels\n\nOutputs one spatial datum per parcel (closed spline) with attributes:\n- ParcelIndex (int)\n- ParcelSeed (int)\n- bIsCourtyard (bool)\n- LandUseName (string)\n\nCan optionally output the block InnerLoop or OuterLoop splines instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutlineSource_MetaData[] = {
		{ "Category", "CityBLD" },
		{ "Comment", "/** Which outlines to output. */" },
		{ "ModuleRelativePath", "Public/PCG/PCGCityBLDGetParcelsSettings.h" },
		{ "ToolTip", "Which outlines to output." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandUseNameFilter_MetaData[] = {
		{ "Category", "CityBLD" },
		{ "Comment", "/**\n\x09 * Optional LandUseName filter. If empty, no filtering is applied.\n\x09 * Matching is case-sensitive.\n\x09 */" },
		{ "EditCondition", "OutlineSource == ECityBLDParcelOutlineSource::Parcels" },
		{ "ModuleRelativePath", "Public/PCG/PCGCityBLDGetParcelsSettings.h" },
		{ "ToolTip", "Optional LandUseName filter. If empty, no filtering is applied.\nMatching is case-sensitive." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandUseFilterMode_MetaData[] = {
		{ "Category", "CityBLD" },
		{ "Comment", "/** How to interpret LandUseNameFilter. */" },
		{ "EditCondition", "OutlineSource == ECityBLDParcelOutlineSource::Parcels" },
		{ "ModuleRelativePath", "Public/PCG/PCGCityBLDGetParcelsSettings.h" },
		{ "ToolTip", "How to interpret LandUseNameFilter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineOffset_MetaData[] = {
		{ "Category", "CityBLD" },
		{ "Comment", "/**\n\x09 * Offset applied to all output splines, in centimeters.\n\x09 * Positive values expand the spline outward; negative values shrink it inward.\n\x09 * For example, use a small negative value on Block InnerLoop to place sidewalk props\n\x09 * at a fixed inset from the curb edge while preserving the closed-loop shape.\n\x09 * Zero disables offsetting and outputs the original spline unmodified.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PCG/PCGCityBLDGetParcelsSettings.h" },
		{ "ToolTip", "Offset applied to all output splines, in centimeters.\nPositive values expand the spline outward; negative values shrink it inward.\nFor example, use a small negative value on Block InnerLoop to place sidewalk props\nat a fixed inset from the curb edge while preserving the closed-loop shape.\nZero disables offsetting and outputs the original spline unmodified." },
		{ "Units", "cm" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGCityBLDGetParcelsSettings constinit property declarations ************
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutlineSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutlineSource;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LandUseNameFilter_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LandUseNameFilter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LandUseFilterMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LandUseFilterMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplineOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGCityBLDGetParcelsSettings constinit property declarations **************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGCityBLDGetParcelsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UPCGCityBLDGetParcelsSettings Property Definitions ***********************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_OutlineSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_OutlineSource = { "OutlineSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCityBLDGetParcelsSettings, OutlineSource), Z_Construct_UEnum_CityBLDRuntime_ECityBLDParcelOutlineSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutlineSource_MetaData), NewProp_OutlineSource_MetaData) }; // e514b93f97a4dee63e7ab2e5aaa601c14fa02302
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_LandUseNameFilter_Inner = { "LandUseNameFilter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_LandUseNameFilter = { "LandUseNameFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCityBLDGetParcelsSettings, LandUseNameFilter), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandUseNameFilter_MetaData), NewProp_LandUseNameFilter_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_LandUseFilterMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_LandUseFilterMode = { "LandUseFilterMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCityBLDGetParcelsSettings, LandUseFilterMode), Z_Construct_UEnum_CityBLDRuntime_ECityBLDLandUseFilterMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandUseFilterMode_MetaData), NewProp_LandUseFilterMode_MetaData) }; // 006b74ba2964afbb072a7e2fd1412200a62f97b5
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SplineOffset = { "SplineOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGCityBLDGetParcelsSettings, SplineOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineOffset_MetaData), NewProp_SplineOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutlineSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutlineSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandUseNameFilter_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandUseNameFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandUseFilterMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandUseFilterMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SplineOffset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UPCGCityBLDGetParcelsSettings Property Definitions *************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UPCGSettings,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UPCGCityBLDGetParcelsSettings,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGCityBLDGetParcelsSettings;
UClass* Z_Construct_UClass_UPCGCityBLDGetParcelsSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UPCGCityBLDGetParcelsSettings;
		if (!Z_Registration_Info_UClass_UPCGCityBLDGetParcelsSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("PCGCityBLDGetParcelsSettings"),
				Z_Registration_Info_UClass_UPCGCityBLDGetParcelsSettings.InnerSingleton,
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
		return Z_Registration_Info_UClass_UPCGCityBLDGetParcelsSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UPCGCityBLDGetParcelsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGCityBLDGetParcelsSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGCityBLDGetParcelsSettings.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGCityBLDGetParcelsSettings);
UPCGCityBLDGetParcelsSettings::~UPCGCityBLDGetParcelsSettings() {}
// ********** End Class UPCGCityBLDGetParcelsSettings **********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_PCG_PCGCityBLDGetParcelsSettings_h__Script_CityBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_CityBLDRuntime_ECityBLDParcelOutlineSource, TEXT("ECityBLDParcelOutlineSource"), &ZRIE_ECityBLDParcelOutlineSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3843340607U) },
		{ Z_Construct_UEnum_CityBLDRuntime_ECityBLDLandUseFilterMode, TEXT("ECityBLDLandUseFilterMode"), &ZRIE_ECityBLDLandUseFilterMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 7042234U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGCityBLDGetParcelsSettings, TEXT("UPCGCityBLDGetParcelsSettings"), &Z_Registration_Info_UClass_UPCGCityBLDGetParcelsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGCityBLDGetParcelsSettings), 1837362422U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_PCG_PCGCityBLDGetParcelsSettings_h__Script_CityBLDRuntime_139ce534166197710e1d9075f45ba39f29247d52{
	TEXT("/Script/CityBLDRuntime"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
