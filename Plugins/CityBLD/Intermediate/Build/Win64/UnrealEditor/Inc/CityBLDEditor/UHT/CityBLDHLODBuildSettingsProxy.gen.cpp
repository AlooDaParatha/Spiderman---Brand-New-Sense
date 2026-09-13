// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HLOD/CityBLDHLODBuildSettingsProxy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeCityBLDHLODBuildSettingsProxy() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UCityBLDHLODBuildSettingsProxy(ETypeConstructPhase);
CITYBLDEDITOR_API UEnum* Z_Construct_UEnum_CityBLDEditor_ECityBLDHLODMaterialSource(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UCityBLDHLODBuildSettingsProxy(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ECityBLDHLODMaterialSource ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_CityBLDEditor_ECityBLDHLODMaterialSource_Statics
template<> CITYBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECityBLDHLODMaterialSource>()
{
	return Z_Construct_UEnum_CityBLDEditor_ECityBLDHLODMaterialSource(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BakeUniqueMaterialInstance.Comment", "/** Bake a unique per-building material instance from render-capture textures. */" },
		{ "BakeUniqueMaterialInstance.DisplayName", "Bake Unique Material Instance - recommended for small cities, best results, no setup required" },
		{ "BakeUniqueMaterialInstance.Name", "ECityBLDHLODMaterialSource::BakeUniqueMaterialInstance" },
		{ "BakeUniqueMaterialInstance.ToolTip", "Bake a unique per-building material instance from render-capture textures." },
		{ "Comment", "/** Where generated building HLOD proxies get their material from for this build. */" },
		{ "ModuleRelativePath", "Private/HLOD/CityBLDHLODBuildSettingsProxy.h" },
		{ "ToolTip", "Where generated building HLOD proxies get their material from for this build." },
		{ "UseBuildingStyleMaterial.Comment", "/** Use each building's Building Style asset HLODMaterial (shared per style). */" },
		{ "UseBuildingStyleMaterial.DisplayName", "Get HLOD Material From Building Style - recommended for large cities, fast, but you must set this in the Building's Style asset" },
		{ "UseBuildingStyleMaterial.Name", "ECityBLDHLODMaterialSource::UseBuildingStyleMaterial" },
		{ "UseBuildingStyleMaterial.ToolTip", "Use each building's Building Style asset HLODMaterial (shared per style)." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECityBLDHLODMaterialSource::UseBuildingStyleMaterial", (int64)ECityBLDHLODMaterialSource::UseBuildingStyleMaterial },
		{ "ECityBLDHLODMaterialSource::BakeUniqueMaterialInstance", (int64)ECityBLDHLODMaterialSource::BakeUniqueMaterialInstance },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
	nullptr,
	"ECityBLDHLODMaterialSource",
	"ECityBLDHLODMaterialSource",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ECityBLDHLODMaterialSource;
UEnum* Z_Construct_UEnum_CityBLDEditor_ECityBLDHLODMaterialSource(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ECityBLDHLODMaterialSource.OuterSingleton)
		{
			ZRIE_ECityBLDHLODMaterialSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CityBLDEditor_ECityBLDHLODMaterialSource, (UObject*)Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase::Outer), TEXT("ECityBLDHLODMaterialSource"));
		}
		return ZRIE_ECityBLDHLODMaterialSource.OuterSingleton;
	}
	if (!ZRIE_ECityBLDHLODMaterialSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ECityBLDHLODMaterialSource.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ECityBLDHLODMaterialSource.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ECityBLDHLODMaterialSource **************************************************

// ********** Begin Class UCityBLDHLODBuildSettingsProxy *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UCityBLDHLODBuildSettingsProxy_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * Transient settings object shown in the Build Building HLODs modal.\n * Kept as a UObject so Property Editor can drive HLOD options without custom Slate.\n */" },
		{ "IncludePath", "HLOD/CityBLDHLODBuildSettingsProxy.h" },
		{ "ModuleRelativePath", "Private/HLOD/CityBLDHLODBuildSettingsProxy.h" },
		{ "ToolTip", "Transient settings object shown in the Build Building HLODs modal.\nKept as a UObject so Property Editor can drive HLOD options without custom Slate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSource_MetaData[] = {
		{ "Category", "HLOD" },
		{ "DisplayName", "HLOD Material Source" },
		{ "ModuleRelativePath", "Private/HLOD/CityBLDHLODBuildSettingsProxy.h" },
		{ "ToolTip", "Use the Building Style asset's HLOD Material, or bake a unique material instance per building from render-capture textures." },
	};
#endif // WITH_METADATA

// ********** Begin Class UCityBLDHLODBuildSettingsProxy constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCityBLDHLODBuildSettingsProxy constinit property declarations *************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCityBLDHLODBuildSettingsProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UCityBLDHLODBuildSettingsProxy Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_MaterialSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_MaterialSource = { "MaterialSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UCityBLDHLODBuildSettingsProxy, MaterialSource), Z_Construct_UEnum_CityBLDEditor_ECityBLDHLODMaterialSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialSource_MetaData), NewProp_MaterialSource_MetaData) }; // 47355c7e0938f616a955ac14aa1dde6cf6fc0c7e
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaterialSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaterialSource,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UCityBLDHLODBuildSettingsProxy Property Definitions ************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UCityBLDHLODBuildSettingsProxy,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UCityBLDHLODBuildSettingsProxy;
UClass* Z_Construct_UClass_UCityBLDHLODBuildSettingsProxy(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UCityBLDHLODBuildSettingsProxy;
		if (!Z_Registration_Info_UClass_UCityBLDHLODBuildSettingsProxy.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CityBLDHLODBuildSettingsProxy"),
				Z_Registration_Info_UClass_UCityBLDHLODBuildSettingsProxy.InnerSingleton,
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
		return Z_Registration_Info_UClass_UCityBLDHLODBuildSettingsProxy.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UCityBLDHLODBuildSettingsProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCityBLDHLODBuildSettingsProxy.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UCityBLDHLODBuildSettingsProxy.OuterSingleton;
}
#undef UHT_STATICS
UCityBLDHLODBuildSettingsProxy::UCityBLDHLODBuildSettingsProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCityBLDHLODBuildSettingsProxy);
UCityBLDHLODBuildSettingsProxy::~UCityBLDHLODBuildSettingsProxy() {}
// ********** End Class UCityBLDHLODBuildSettingsProxy *********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_HLOD_CityBLDHLODBuildSettingsProxy_h__Script_CityBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_CityBLDEditor_ECityBLDHLODMaterialSource, TEXT("ECityBLDHLODMaterialSource"), &ZRIE_ECityBLDHLODMaterialSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1194679422U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCityBLDHLODBuildSettingsProxy, TEXT("UCityBLDHLODBuildSettingsProxy"), &Z_Registration_Info_UClass_UCityBLDHLODBuildSettingsProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCityBLDHLODBuildSettingsProxy), 1846656881U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_HLOD_CityBLDHLODBuildSettingsProxy_h__Script_CityBLDEditor_ce6a02b9dc0b2e6db22c0ec9266199813dacde7e{
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
