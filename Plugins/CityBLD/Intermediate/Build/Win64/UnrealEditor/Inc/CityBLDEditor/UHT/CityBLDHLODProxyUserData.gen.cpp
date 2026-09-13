// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HLOD/CityBLDHLODProxyUserData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeCityBLDHLODProxyUserData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UCityBLDHLODProxyUserData(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UCityBLDHLODProxyUserData(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UCityBLDHLODProxyUserData ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UCityBLDHLODProxyUserData_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * Stored on generated HLOD proxy static meshes to record the source building's HLOD state hash.\n * Allows the proxy cache to detect whether a cached proxy is still up to date.\n */" },
		{ "IncludePath", "HLOD/CityBLDHLODProxyUserData.h" },
		{ "ModuleRelativePath", "Private/HLOD/CityBLDHLODProxyUserData.h" },
		{ "ToolTip", "Stored on generated HLOD proxy static meshes to record the source building's HLOD state hash.\nAllows the proxy cache to detect whether a cached proxy is still up to date." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceStateHash_MetaData[] = {
		{ "Comment", "/** Hash of the source building's baked state (see AModularBuildingActor::ComputeHLODStateHash). */" },
		{ "ModuleRelativePath", "Private/HLOD/CityBLDHLODProxyUserData.h" },
		{ "ToolTip", "Hash of the source building's baked state (see AModularBuildingActor::ComputeHLODStateHash)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceBuildingPath_MetaData[] = {
		{ "Comment", "/** Path name of the source building actor this proxy was generated from (for diagnostics). */" },
		{ "ModuleRelativePath", "Private/HLOD/CityBLDHLODProxyUserData.h" },
		{ "ToolTip", "Path name of the source building actor this proxy was generated from (for diagnostics)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BakedProxyMaterial_MetaData[] = {
		{ "Comment", "/** Optional per-building material baked from render-capture textures onto the proxy UVs. */" },
		{ "ModuleRelativePath", "Private/HLOD/CityBLDHLODProxyUserData.h" },
		{ "ToolTip", "Optional per-building material baked from render-capture textures onto the proxy UVs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferredProxyMaterial_MetaData[] = {
		{ "Comment", "/**\n\x09 * Material mode selected by the user for the most recent HLOD build.\n\x09 * This is the authoritative component material during commandlet / BuildHLODWorld builds,\n\x09 * where the process-local material selection scope is unavailable.\n\x09 */" },
		{ "ModuleRelativePath", "Private/HLOD/CityBLDHLODProxyUserData.h" },
		{ "ToolTip", "Material mode selected by the user for the most recent HLOD build.\nThis is the authoritative component material during commandlet / BuildHLODWorld builds,\nwhere the process-local material selection scope is unavailable." },
	};
#endif // WITH_METADATA

// ********** Begin Class UCityBLDHLODProxyUserData constinit property declarations ****************
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_SourceStateHash;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceBuildingPath;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BakedProxyMaterial;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreferredProxyMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCityBLDHLODProxyUserData constinit property declarations ******************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCityBLDHLODProxyUserData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UCityBLDHLODProxyUserData Property Definitions ***************************
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_SourceStateHash = { "SourceStateHash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(UCityBLDHLODProxyUserData, SourceStateHash), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceStateHash_MetaData), NewProp_SourceStateHash_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SourceBuildingPath = { "SourceBuildingPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UCityBLDHLODProxyUserData, SourceBuildingPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceBuildingPath_MetaData), NewProp_SourceBuildingPath_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_BakedProxyMaterial = { "BakedProxyMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(UCityBLDHLODProxyUserData, BakedProxyMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BakedProxyMaterial_MetaData), NewProp_BakedProxyMaterial_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_PreferredProxyMaterial = { "PreferredProxyMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(UCityBLDHLODProxyUserData, PreferredProxyMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferredProxyMaterial_MetaData), NewProp_PreferredProxyMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceStateHash,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceBuildingPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BakedProxyMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PreferredProxyMaterial,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UCityBLDHLODProxyUserData Property Definitions *****************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAssetUserData,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UCityBLDHLODProxyUserData,
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
	0x002010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UCityBLDHLODProxyUserData;
UClass* Z_Construct_UClass_UCityBLDHLODProxyUserData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UCityBLDHLODProxyUserData;
		if (!Z_Registration_Info_UClass_UCityBLDHLODProxyUserData.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CityBLDHLODProxyUserData"),
				Z_Registration_Info_UClass_UCityBLDHLODProxyUserData.InnerSingleton,
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
		return Z_Registration_Info_UClass_UCityBLDHLODProxyUserData.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UCityBLDHLODProxyUserData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCityBLDHLODProxyUserData.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UCityBLDHLODProxyUserData.OuterSingleton;
}
#undef UHT_STATICS
UCityBLDHLODProxyUserData::UCityBLDHLODProxyUserData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCityBLDHLODProxyUserData);
UCityBLDHLODProxyUserData::~UCityBLDHLODProxyUserData() {}
// ********** End Class UCityBLDHLODProxyUserData **************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_HLOD_CityBLDHLODProxyUserData_h__Script_CityBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCityBLDHLODProxyUserData, TEXT("UCityBLDHLODProxyUserData"), &Z_Registration_Info_UClass_UCityBLDHLODProxyUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCityBLDHLODProxyUserData), 2643706694U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_HLOD_CityBLDHLODProxyUserData_h__Script_CityBLDEditor_9e9ba5fc1cb8d48ad67d6826ebae1f802afb3d8c{
	TEXT("/Script/CityBLDEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
