// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContextMenu/ModularBuildingBatchStyleProxy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeModularBuildingBatchStyleProxy() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UBuildingStyle(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UModularBuildingBatchStyleProxy(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UModularBuildingBatchStyleProxy(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UModularBuildingBatchStyleProxy ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UModularBuildingBatchStyleProxy_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "ContextMenu/ModularBuildingBatchStyleProxy.h" },
		{ "ModuleRelativePath", "Private/ContextMenu/ModularBuildingBatchStyleProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StyleProbabilities_MetaData[] = {
		{ "Category", "Batch Building Edit" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Private/ContextMenu/ModularBuildingBatchStyleProxy.h" },
		{ "ToolTip", "Relative weight used when selecting this Building Style. Higher values increase the chance this style is assigned." },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA

// ********** Begin Class UModularBuildingBatchStyleProxy constinit property declarations **********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StyleProbabilities_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StyleProbabilities_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StyleProbabilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UModularBuildingBatchStyleProxy constinit property declarations ************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularBuildingBatchStyleProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UModularBuildingBatchStyleProxy Property Definitions *********************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StyleProbabilities_ValueProp = { "StyleProbabilities", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_StyleProbabilities_Key_KeyProp = { "StyleProbabilities_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UBuildingStyle, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_StyleProbabilities = { "StyleProbabilities", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UModularBuildingBatchStyleProxy, StyleProbabilities), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StyleProbabilities_MetaData), NewProp_StyleProbabilities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StyleProbabilities_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StyleProbabilities_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StyleProbabilities,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UModularBuildingBatchStyleProxy Property Definitions ***********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UModularBuildingBatchStyleProxy,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UModularBuildingBatchStyleProxy;
UClass* Z_Construct_UClass_UModularBuildingBatchStyleProxy(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UModularBuildingBatchStyleProxy;
		if (!Z_Registration_Info_UClass_UModularBuildingBatchStyleProxy.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ModularBuildingBatchStyleProxy"),
				Z_Registration_Info_UClass_UModularBuildingBatchStyleProxy.InnerSingleton,
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
		return Z_Registration_Info_UClass_UModularBuildingBatchStyleProxy.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UModularBuildingBatchStyleProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularBuildingBatchStyleProxy.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularBuildingBatchStyleProxy.OuterSingleton;
}
#undef UHT_STATICS
UModularBuildingBatchStyleProxy::UModularBuildingBatchStyleProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UModularBuildingBatchStyleProxy);
UModularBuildingBatchStyleProxy::~UModularBuildingBatchStyleProxy() {}
// ********** End Class UModularBuildingBatchStyleProxy ********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_ContextMenu_ModularBuildingBatchStyleProxy_h__Script_CityBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularBuildingBatchStyleProxy, TEXT("UModularBuildingBatchStyleProxy"), &Z_Registration_Info_UClass_UModularBuildingBatchStyleProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularBuildingBatchStyleProxy), 2645814516U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_ContextMenu_ModularBuildingBatchStyleProxy_h__Script_CityBLDEditor_66057284678235b5c2afddcdf08b50194413b127{
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
