// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HLOD/CityBLDBuildingHLODBuilder.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeCityBLDBuildingHLODBuilder() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UHLODBuilder(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UHLODBuilderSettings(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UCityBLDBuildingHLODBuilder(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UCityBLDBuildingHLODBuilderSettings(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UCityBLDBuildingHLODBuilder(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UCityBLDBuildingHLODBuilderSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UCityBLDBuildingHLODBuilderSettings **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UCityBLDBuildingHLODBuilderSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Settings for the CityBLD building HLOD builder.\n * These are stored on the HLOD layer asset and participate in the HLOD hash so changes trigger rebuilds.\n */" },
		{ "IncludePath", "HLOD/CityBLDBuildingHLODBuilder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HLOD/CityBLDBuildingHLODBuilder.h" },
		{ "ToolTip", "Settings for the CityBLD building HLOD builder.\nThese are stored on the HLOD layer asset and participate in the HLOD hash so changes trigger rebuilds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRoofDetail_MetaData[] = {
		{ "Category", "CityBLD HLOD" },
		{ "Comment", "/** Reserved for future use: bake a more detailed roof silhouette instead of a flat cap. */" },
		{ "ModuleRelativePath", "Public/HLOD/CityBLDBuildingHLODBuilder.h" },
		{ "ToolTip", "Reserved for future use: bake a more detailed roof silhouette instead of a flat cap." },
	};
#endif // WITH_METADATA

// ********** Begin Class UCityBLDBuildingHLODBuilderSettings constinit property declarations ******
	static void NewProp_bRoofDetail_SetBit(void* Obj)
	{
		((UCityBLDBuildingHLODBuilderSettings*)Obj)->bRoofDetail = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRoofDetail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCityBLDBuildingHLODBuilderSettings constinit property declarations ********
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCityBLDBuildingHLODBuilderSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UCityBLDBuildingHLODBuilderSettings Property Definitions *****************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRoofDetail = { "bRoofDetail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UCityBLDBuildingHLODBuilderSettings), &UHT_STATICS::NewProp_bRoofDetail_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRoofDetail_MetaData), NewProp_bRoofDetail_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRoofDetail,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UCityBLDBuildingHLODBuilderSettings Property Definitions *******************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UHLODBuilderSettings,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UCityBLDBuildingHLODBuilderSettings,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x003004A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UCityBLDBuildingHLODBuilderSettings;
UClass* Z_Construct_UClass_UCityBLDBuildingHLODBuilderSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UCityBLDBuildingHLODBuilderSettings;
		if (!Z_Registration_Info_UClass_UCityBLDBuildingHLODBuilderSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CityBLDBuildingHLODBuilderSettings"),
				Z_Registration_Info_UClass_UCityBLDBuildingHLODBuilderSettings.InnerSingleton,
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
		return Z_Registration_Info_UClass_UCityBLDBuildingHLODBuilderSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UCityBLDBuildingHLODBuilderSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCityBLDBuildingHLODBuilderSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UCityBLDBuildingHLODBuilderSettings.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCityBLDBuildingHLODBuilderSettings);
UCityBLDBuildingHLODBuilderSettings::~UCityBLDBuildingHLODBuilderSettings() {}
// ********** End Class UCityBLDBuildingHLODBuilderSettings ****************************************

// ********** Begin Class UCityBLDBuildingHLODBuilder **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UCityBLDBuildingHLODBuilder_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * Custom World Partition HLOD builder that represents each AModularBuildingActor with a cheap\n * footprint prism proxy mesh and the building style's shared HLOD material.\n */" },
		{ "IncludePath", "HLOD/CityBLDBuildingHLODBuilder.h" },
		{ "ModuleRelativePath", "Public/HLOD/CityBLDBuildingHLODBuilder.h" },
		{ "ToolTip", "Custom World Partition HLOD builder that represents each AModularBuildingActor with a cheap\nfootprint prism proxy mesh and the building style's shared HLOD material." },
	};
#endif // WITH_METADATA

// ********** Begin Class UCityBLDBuildingHLODBuilder constinit property declarations **************
// ********** End Class UCityBLDBuildingHLODBuilder constinit property declarations ****************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCityBLDBuildingHLODBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UHLODBuilder,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UCityBLDBuildingHLODBuilder,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x049000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UCityBLDBuildingHLODBuilder;
UClass* Z_Construct_UClass_UCityBLDBuildingHLODBuilder(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UCityBLDBuildingHLODBuilder;
		if (!Z_Registration_Info_UClass_UCityBLDBuildingHLODBuilder.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CityBLDBuildingHLODBuilder"),
				Z_Registration_Info_UClass_UCityBLDBuildingHLODBuilder.InnerSingleton,
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
		return Z_Registration_Info_UClass_UCityBLDBuildingHLODBuilder.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UCityBLDBuildingHLODBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCityBLDBuildingHLODBuilder.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UCityBLDBuildingHLODBuilder.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCityBLDBuildingHLODBuilder);
UCityBLDBuildingHLODBuilder::~UCityBLDBuildingHLODBuilder() {}
// ********** End Class UCityBLDBuildingHLODBuilder ************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_HLOD_CityBLDBuildingHLODBuilder_h__Script_CityBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCityBLDBuildingHLODBuilderSettings, TEXT("UCityBLDBuildingHLODBuilderSettings"), &Z_Registration_Info_UClass_UCityBLDBuildingHLODBuilderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCityBLDBuildingHLODBuilderSettings), 4168698344U) },
		{ Z_Construct_UClass_UCityBLDBuildingHLODBuilder, TEXT("UCityBLDBuildingHLODBuilder"), &Z_Registration_Info_UClass_UCityBLDBuildingHLODBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCityBLDBuildingHLODBuilder), 413104157U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_HLOD_CityBLDBuildingHLODBuilder_h__Script_CityBLDEditor_54cb2b69cd8d7250bebdb6d807e17c0098ddc4f3{
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
