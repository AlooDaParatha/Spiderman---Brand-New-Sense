// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContextMenu/DynamicRoadContextMenuFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDynamicRoadContextMenuFactory() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
WORLDBLDEDITOR_API UClass* Z_Construct_UClass_IWorldBLDContextMenuFactory(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UDynamicRoadContextMenuFactory(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UDynamicRoadContextMenuFactory(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UDynamicRoadContextMenuFactory *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDynamicRoadContextMenuFactory_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * Context menu factory for RoadBLD dynamic roads.\n *\n * Note: The menu is typically invoked via ARoadGeo selection (ARoadGeo implements IWorldBLDContextMenuProvider\n * and resolves to its single source ADynamicRoad), but the factory supports direct ADynamicRoad selection too.\n */" },
		{ "IncludePath", "ContextMenu/DynamicRoadContextMenuFactory.h" },
		{ "ModuleRelativePath", "Public/ContextMenu/DynamicRoadContextMenuFactory.h" },
		{ "ToolTip", "Context menu factory for RoadBLD dynamic roads.\n\nNote: The menu is typically invoked via ARoadGeo selection (ARoadGeo implements IWorldBLDContextMenuProvider\nand resolves to its single source ADynamicRoad), but the factory supports direct ADynamicRoad selection too." },
	};
#endif // WITH_METADATA

// ********** Begin Class UDynamicRoadContextMenuFactory constinit property declarations ***********
// ********** End Class UDynamicRoadContextMenuFactory constinit property declarations *************
	static FTypeConstructFunc* DependentSingletons[];
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicRoadContextMenuFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams UHT_STATICS::InterfaceParams[] = {
	{ Z_Construct_UClass_UWorldBLDContextMenuFactory, (int32)VTABLE_OFFSET(UDynamicRoadContextMenuFactory, IWorldBLDContextMenuFactory), false },  // 08dd0d69de03ab2d1d108f17a02e00aaf28fe09e
};
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDynamicRoadContextMenuFactory,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UDynamicRoadContextMenuFactory;
UClass* Z_Construct_UClass_UDynamicRoadContextMenuFactory(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDynamicRoadContextMenuFactory;
		if (!Z_Registration_Info_UClass_UDynamicRoadContextMenuFactory.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DynamicRoadContextMenuFactory"),
				Z_Registration_Info_UClass_UDynamicRoadContextMenuFactory.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDynamicRoadContextMenuFactory.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDynamicRoadContextMenuFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicRoadContextMenuFactory.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDynamicRoadContextMenuFactory.OuterSingleton;
}
#undef UHT_STATICS
UDynamicRoadContextMenuFactory::UDynamicRoadContextMenuFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDynamicRoadContextMenuFactory);
UDynamicRoadContextMenuFactory::~UDynamicRoadContextMenuFactory() {}
// ********** End Class UDynamicRoadContextMenuFactory *********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ContextMenu_DynamicRoadContextMenuFactory_h__Script_RoadBLDEditorToolkit_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDynamicRoadContextMenuFactory, TEXT("UDynamicRoadContextMenuFactory"), &Z_Registration_Info_UClass_UDynamicRoadContextMenuFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicRoadContextMenuFactory), 2326675782U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ContextMenu_DynamicRoadContextMenuFactory_h__Script_RoadBLDEditorToolkit_476221850b232c09df323a70ec8548f161c17656{
	TEXT("/Script/RoadBLDEditorToolkit"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
