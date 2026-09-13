// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContextMenu/CityBlockContextMenuFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeCityBlockContextMenuFactory() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
WORLDBLDEDITOR_API UClass* Z_Construct_UClass_IWorldBLDContextMenuFactory(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UCityBlockContextMenuFactory(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UCityBlockContextMenuFactory(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UCityBlockContextMenuFactory *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UCityBlockContextMenuFactory_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * Context menu factory for CityBLD city blocks.\n */" },
		{ "IncludePath", "ContextMenu/CityBlockContextMenuFactory.h" },
		{ "ModuleRelativePath", "Public/ContextMenu/CityBlockContextMenuFactory.h" },
		{ "ToolTip", "Context menu factory for CityBLD city blocks." },
	};
#endif // WITH_METADATA

// ********** Begin Class UCityBlockContextMenuFactory constinit property declarations *************
// ********** End Class UCityBlockContextMenuFactory constinit property declarations ***************
	static FTypeConstructFunc* DependentSingletons[];
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCityBlockContextMenuFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams UHT_STATICS::InterfaceParams[] = {
	{ Z_Construct_UClass_UWorldBLDContextMenuFactory, (int32)VTABLE_OFFSET(UCityBlockContextMenuFactory, IWorldBLDContextMenuFactory), false },  // 08dd0d69de03ab2d1d108f17a02e00aaf28fe09e
};
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UCityBlockContextMenuFactory,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UCityBlockContextMenuFactory;
UClass* Z_Construct_UClass_UCityBlockContextMenuFactory(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UCityBlockContextMenuFactory;
		if (!Z_Registration_Info_UClass_UCityBlockContextMenuFactory.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CityBlockContextMenuFactory"),
				Z_Registration_Info_UClass_UCityBlockContextMenuFactory.InnerSingleton,
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
		return Z_Registration_Info_UClass_UCityBlockContextMenuFactory.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UCityBlockContextMenuFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCityBlockContextMenuFactory.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UCityBlockContextMenuFactory.OuterSingleton;
}
#undef UHT_STATICS
UCityBlockContextMenuFactory::UCityBlockContextMenuFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCityBlockContextMenuFactory);
UCityBlockContextMenuFactory::~UCityBlockContextMenuFactory() {}
// ********** End Class UCityBlockContextMenuFactory ***********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ContextMenu_CityBlockContextMenuFactory_h__Script_CityBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCityBlockContextMenuFactory, TEXT("UCityBlockContextMenuFactory"), &Z_Registration_Info_UClass_UCityBlockContextMenuFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCityBlockContextMenuFactory), 874651354U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ContextMenu_CityBlockContextMenuFactory_h__Script_CityBLDEditor_66b64504dbd04eafc0783f57663a6999c42b501a{
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
