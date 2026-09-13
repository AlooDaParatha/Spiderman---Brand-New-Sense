// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeightMapProviderRouter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeHeightMapProviderRouter() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UHeightMapProvider(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UHeightMapProviderRouter(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UHeightMapProvider(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UHeightMapProviderRouter(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UOpenTopographyHeightMapProvider(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UUSGSHeightMapProvider(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UHeightMapProviderRouter *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UHeightMapProviderRouter_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Selects the best configured heightmap source for a tile and emits one FTwinBLDHeightmap.\n" },
		{ "IncludePath", "HeightMapProviderRouter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HeightMapProviderRouter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Selects the best configured heightmap source for a tile and emits one FTwinBLDHeightmap." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CopernicusProvider_MetaData[] = {
		{ "ModuleRelativePath", "Public/HeightMapProviderRouter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_USGSProvider_MetaData[] = {
		{ "ModuleRelativePath", "Public/HeightMapProviderRouter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenTopographyProvider_MetaData[] = {
		{ "ModuleRelativePath", "Public/HeightMapProviderRouter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveProvider_MetaData[] = {
		{ "ModuleRelativePath", "Public/HeightMapProviderRouter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UHeightMapProviderRouter constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CopernicusProvider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_USGSProvider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpenTopographyProvider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveProvider;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UHeightMapProviderRouter constinit property declarations *******************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeightMapProviderRouter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UHeightMapProviderRouter Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CopernicusProvider = { "CopernicusProvider", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UHeightMapProviderRouter, CopernicusProvider), Z_Construct_UClass_UHeightMapProvider, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CopernicusProvider_MetaData), NewProp_CopernicusProvider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_USGSProvider = { "USGSProvider", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UHeightMapProviderRouter, USGSProvider), Z_Construct_UClass_UUSGSHeightMapProvider, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_USGSProvider_MetaData), NewProp_USGSProvider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OpenTopographyProvider = { "OpenTopographyProvider", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UHeightMapProviderRouter, OpenTopographyProvider), Z_Construct_UClass_UOpenTopographyHeightMapProvider, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenTopographyProvider_MetaData), NewProp_OpenTopographyProvider_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ActiveProvider = { "ActiveProvider", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UHeightMapProviderRouter, ActiveProvider), Z_Construct_UClass_UHeightMapProvider, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveProvider_MetaData), NewProp_ActiveProvider_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CopernicusProvider,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_USGSProvider,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OpenTopographyProvider,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ActiveProvider,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UHeightMapProviderRouter Property Definitions ******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UHeightMapProvider,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UHeightMapProviderRouter,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UHeightMapProviderRouter;
UClass* Z_Construct_UClass_UHeightMapProviderRouter(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UHeightMapProviderRouter;
		if (!Z_Registration_Info_UClass_UHeightMapProviderRouter.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("HeightMapProviderRouter"),
				Z_Registration_Info_UClass_UHeightMapProviderRouter.InnerSingleton,
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
		return Z_Registration_Info_UClass_UHeightMapProviderRouter.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UHeightMapProviderRouter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeightMapProviderRouter.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeightMapProviderRouter.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UHeightMapProviderRouter);
UHeightMapProviderRouter::~UHeightMapProviderRouter() {}
// ********** End Class UHeightMapProviderRouter ***************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_HeightMapProviderRouter_h__Script_TwinBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeightMapProviderRouter, TEXT("UHeightMapProviderRouter"), &Z_Registration_Info_UClass_UHeightMapProviderRouter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeightMapProviderRouter), 1999345675U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_HeightMapProviderRouter_h__Script_TwinBLDEditor_4f69bfb743f1940bd1e1c01f4ccd1daf9f74bf47{
	TEXT("/Script/TwinBLDEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
