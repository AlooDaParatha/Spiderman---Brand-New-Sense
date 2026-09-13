// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/PCGRoadBLDGetSidewalkPartitionsSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodePCGRoadBLDGetSidewalkPartitionsSettings() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UClass* Z_Construct_UClass_UPCGSettings(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_ERoadBLDPCGFilterMode(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UPCGRoadBLDGetSidewalkPartitionsSettings(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UPCGRoadBLDGetSidewalkPartitionsSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ERoadBLDPCGFilterMode *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDRuntime_ERoadBLDPCGFilterMode_Statics
template<> ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ERoadBLDPCGFilterMode>()
{
	return Z_Construct_UEnum_RoadBLDRuntime_ERoadBLDPCGFilterMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Exclude.DisplayName", "Exclude" },
		{ "Exclude.Name", "ERoadBLDPCGFilterMode::Exclude" },
		{ "Include.DisplayName", "Include" },
		{ "Include.Name", "ERoadBLDPCGFilterMode::Include" },
		{ "ModuleRelativePath", "Public/PCG/PCGRoadBLDGetSidewalkPartitionsSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERoadBLDPCGFilterMode::Include", (int64)ERoadBLDPCGFilterMode::Include },
		{ "ERoadBLDPCGFilterMode::Exclude", (int64)ERoadBLDPCGFilterMode::Exclude },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	"ERoadBLDPCGFilterMode",
	"ERoadBLDPCGFilterMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERoadBLDPCGFilterMode;
UEnum* Z_Construct_UEnum_RoadBLDRuntime_ERoadBLDPCGFilterMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERoadBLDPCGFilterMode.OuterSingleton)
		{
			ZRIE_ERoadBLDPCGFilterMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDRuntime_ERoadBLDPCGFilterMode, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("ERoadBLDPCGFilterMode"));
		}
		return ZRIE_ERoadBLDPCGFilterMode.OuterSingleton;
	}
	if (!ZRIE_ERoadBLDPCGFilterMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERoadBLDPCGFilterMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERoadBLDPCGFilterMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERoadBLDPCGFilterMode *******************************************************

// ********** Begin Class UPCGRoadBLDGetSidewalkPartitionsSettings *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UPCGRoadBLDGetSidewalkPartitionsSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * PCG node: Get Sidewalk Partition\n *\n * Runs on a UPCGComponent hosted by ARoadGeo and outputs closed spline data\n * for sidewalk partitions from SourceRoads. Partitions are segmented by\n * intersection masks so one road partition may produce multiple closed loops.\n */" },
		{ "IncludePath", "PCG/PCGRoadBLDGetSidewalkPartitionsSettings.h" },
		{ "ModuleRelativePath", "Public/PCG/PCGRoadBLDGetSidewalkPartitionsSettings.h" },
		{ "ToolTip", "PCG node: Get Sidewalk Partition\n\nRuns on a UPCGComponent hosted by ARoadGeo and outputs closed spline data\nfor sidewalk partitions from SourceRoads. Partitions are segmented by\nintersection masks so one road partition may produce multiple closed loops." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeLeftSidewalk_MetaData[] = {
		{ "Category", "RoadBLD" },
		{ "Comment", "/** Output partitions from left-side sidewalks. */" },
		{ "ModuleRelativePath", "Public/PCG/PCGRoadBLDGetSidewalkPartitionsSettings.h" },
		{ "ToolTip", "Output partitions from left-side sidewalks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeRightSidewalk_MetaData[] = {
		{ "Category", "RoadBLD" },
		{ "Comment", "/** Output partitions from right-side sidewalks. */" },
		{ "ModuleRelativePath", "Public/PCG/PCGRoadBLDGetSidewalkPartitionsSettings.h" },
		{ "ToolTip", "Output partitions from right-side sidewalks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAvoidCurbCuts_MetaData[] = {
		{ "Category", "RoadBLD" },
		{ "Comment", "/** Split partition loops around curb-cut interaction volumes in addition to intersection masks. */" },
		{ "ModuleRelativePath", "Public/PCG/PCGRoadBLDGetSidewalkPartitionsSettings.h" },
		{ "ToolTip", "Split partition loops around curb-cut interaction volumes in addition to intersection masks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartitionIndexFilter_MetaData[] = {
		{ "Category", "RoadBLD" },
		{ "Comment", "/** Optional partition index filter. Empty means no index filtering. */" },
		{ "ModuleRelativePath", "Public/PCG/PCGRoadBLDGetSidewalkPartitionsSettings.h" },
		{ "ToolTip", "Optional partition index filter. Empty means no index filtering." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartitionIndexFilterMode_MetaData[] = {
		{ "Category", "RoadBLD" },
		{ "Comment", "/** How to interpret PartitionIndexFilter. */" },
		{ "ModuleRelativePath", "Public/PCG/PCGRoadBLDGetSidewalkPartitionsSettings.h" },
		{ "ToolTip", "How to interpret PartitionIndexFilter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartitionMaterialFilter_MetaData[] = {
		{ "Category", "RoadBLD" },
		{ "Comment", "/** Optional material filter. Uses effective partition material (partition override or sidewalk fallback). */" },
		{ "ModuleRelativePath", "Public/PCG/PCGRoadBLDGetSidewalkPartitionsSettings.h" },
		{ "ToolTip", "Optional material filter. Uses effective partition material (partition override or sidewalk fallback)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartitionMaterialFilterMode_MetaData[] = {
		{ "Category", "RoadBLD" },
		{ "Comment", "/** How to interpret PartitionMaterialFilter. */" },
		{ "ModuleRelativePath", "Public/PCG/PCGRoadBLDGetSidewalkPartitionsSettings.h" },
		{ "ToolTip", "How to interpret PartitionMaterialFilter." },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGRoadBLDGetSidewalkPartitionsSettings constinit property declarations *
	static void NewProp_bIncludeLeftSidewalk_SetBit(void* Obj)
	{
		((UPCGRoadBLDGetSidewalkPartitionsSettings*)Obj)->bIncludeLeftSidewalk = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeLeftSidewalk;
	static void NewProp_bIncludeRightSidewalk_SetBit(void* Obj)
	{
		((UPCGRoadBLDGetSidewalkPartitionsSettings*)Obj)->bIncludeRightSidewalk = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeRightSidewalk;
	static void NewProp_bAvoidCurbCuts_SetBit(void* Obj)
	{
		((UPCGRoadBLDGetSidewalkPartitionsSettings*)Obj)->bAvoidCurbCuts = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAvoidCurbCuts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PartitionIndexFilter_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PartitionIndexFilter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PartitionIndexFilterMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PartitionIndexFilterMode;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PartitionMaterialFilter_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PartitionMaterialFilter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PartitionMaterialFilterMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PartitionMaterialFilterMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGRoadBLDGetSidewalkPartitionsSettings constinit property declarations ***
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGRoadBLDGetSidewalkPartitionsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UPCGRoadBLDGetSidewalkPartitionsSettings Property Definitions ************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIncludeLeftSidewalk = { "bIncludeLeftSidewalk", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGRoadBLDGetSidewalkPartitionsSettings), &UHT_STATICS::NewProp_bIncludeLeftSidewalk_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeLeftSidewalk_MetaData), NewProp_bIncludeLeftSidewalk_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIncludeRightSidewalk = { "bIncludeRightSidewalk", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGRoadBLDGetSidewalkPartitionsSettings), &UHT_STATICS::NewProp_bIncludeRightSidewalk_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeRightSidewalk_MetaData), NewProp_bIncludeRightSidewalk_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAvoidCurbCuts = { "bAvoidCurbCuts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGRoadBLDGetSidewalkPartitionsSettings), &UHT_STATICS::NewProp_bAvoidCurbCuts_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAvoidCurbCuts_MetaData), NewProp_bAvoidCurbCuts_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PartitionIndexFilter_Inner = { "PartitionIndexFilter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PartitionIndexFilter = { "PartitionIndexFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGRoadBLDGetSidewalkPartitionsSettings, PartitionIndexFilter), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartitionIndexFilter_MetaData), NewProp_PartitionIndexFilter_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_PartitionIndexFilterMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_PartitionIndexFilterMode = { "PartitionIndexFilterMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGRoadBLDGetSidewalkPartitionsSettings, PartitionIndexFilterMode), Z_Construct_UEnum_RoadBLDRuntime_ERoadBLDPCGFilterMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartitionIndexFilterMode_MetaData), NewProp_PartitionIndexFilterMode_MetaData) }; // 57c96a2bb929a2fa2bfd138d138dfe46b79c36d4
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_PartitionMaterialFilter_Inner = { "PartitionMaterialFilter", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PartitionMaterialFilter = { "PartitionMaterialFilter", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGRoadBLDGetSidewalkPartitionsSettings, PartitionMaterialFilter), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartitionMaterialFilter_MetaData), NewProp_PartitionMaterialFilter_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_PartitionMaterialFilterMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_PartitionMaterialFilterMode = { "PartitionMaterialFilterMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGRoadBLDGetSidewalkPartitionsSettings, PartitionMaterialFilterMode), Z_Construct_UEnum_RoadBLDRuntime_ERoadBLDPCGFilterMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartitionMaterialFilterMode_MetaData), NewProp_PartitionMaterialFilterMode_MetaData) }; // 57c96a2bb929a2fa2bfd138d138dfe46b79c36d4
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIncludeLeftSidewalk,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIncludeRightSidewalk,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAvoidCurbCuts,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PartitionIndexFilter_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PartitionIndexFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PartitionIndexFilterMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PartitionIndexFilterMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PartitionMaterialFilter_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PartitionMaterialFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PartitionMaterialFilterMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PartitionMaterialFilterMode,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UPCGRoadBLDGetSidewalkPartitionsSettings Property Definitions **************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UPCGSettings,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UPCGRoadBLDGetSidewalkPartitionsSettings,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGRoadBLDGetSidewalkPartitionsSettings;
UClass* Z_Construct_UClass_UPCGRoadBLDGetSidewalkPartitionsSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UPCGRoadBLDGetSidewalkPartitionsSettings;
		if (!Z_Registration_Info_UClass_UPCGRoadBLDGetSidewalkPartitionsSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("PCGRoadBLDGetSidewalkPartitionsSettings"),
				Z_Registration_Info_UClass_UPCGRoadBLDGetSidewalkPartitionsSettings.InnerSingleton,
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
		return Z_Registration_Info_UClass_UPCGRoadBLDGetSidewalkPartitionsSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UPCGRoadBLDGetSidewalkPartitionsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGRoadBLDGetSidewalkPartitionsSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGRoadBLDGetSidewalkPartitionsSettings.OuterSingleton;
}
#undef UHT_STATICS
UPCGRoadBLDGetSidewalkPartitionsSettings::UPCGRoadBLDGetSidewalkPartitionsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGRoadBLDGetSidewalkPartitionsSettings);
UPCGRoadBLDGetSidewalkPartitionsSettings::~UPCGRoadBLDGetSidewalkPartitionsSettings() {}
// ********** End Class UPCGRoadBLDGetSidewalkPartitionsSettings ***********************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_PCG_PCGRoadBLDGetSidewalkPartitionsSettings_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RoadBLDRuntime_ERoadBLDPCGFilterMode, TEXT("ERoadBLDPCGFilterMode"), &ZRIE_ERoadBLDPCGFilterMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1472817707U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGRoadBLDGetSidewalkPartitionsSettings, TEXT("UPCGRoadBLDGetSidewalkPartitionsSettings"), &Z_Registration_Info_UClass_UPCGRoadBLDGetSidewalkPartitionsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGRoadBLDGetSidewalkPartitionsSettings), 1513384212U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_PCG_PCGRoadBLDGetSidewalkPartitionsSettings_h__Script_RoadBLDRuntime_a9c68b90c9b6ac947df383187fbe587260db3fde{
	TEXT("/Script/RoadBLDRuntime"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
