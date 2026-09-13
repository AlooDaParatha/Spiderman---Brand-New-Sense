// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContextMenu/IntersectionContextMenuFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeIntersectionContextMenuFactory() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
WORLDBLDEDITOR_API UClass* Z_Construct_UClass_IWorldBLDContextMenuFactory(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UIntersectionContextMenuFactory(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UIntersectionContextMenuFactory(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UIntersectionContextMenuFactory ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UIntersectionContextMenuFactory_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * Context menu factory for intersection RoadGeo actors that own a landscape patch.\n *\n * The menu is invoked via ARoadGeo selection (ARoadGeo implements IWorldBLDContextMenuProvider\n * and resolves to itself when it has an intersection landscape patch).\n */" },
		{ "IncludePath", "ContextMenu/IntersectionContextMenuFactory.h" },
		{ "ModuleRelativePath", "Public/ContextMenu/IntersectionContextMenuFactory.h" },
		{ "ToolTip", "Context menu factory for intersection RoadGeo actors that own a landscape patch.\n\nThe menu is invoked via ARoadGeo selection (ARoadGeo implements IWorldBLDContextMenuProvider\nand resolves to itself when it has an intersection landscape patch)." },
	};
#endif // WITH_METADATA

// ********** Begin Class UIntersectionContextMenuFactory constinit property declarations **********
// ********** End Class UIntersectionContextMenuFactory constinit property declarations ************
	static FTypeConstructFunc* DependentSingletons[];
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIntersectionContextMenuFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams UHT_STATICS::InterfaceParams[] = {
	{ Z_Construct_UClass_UWorldBLDContextMenuFactory, (int32)VTABLE_OFFSET(UIntersectionContextMenuFactory, IWorldBLDContextMenuFactory), false },  // 08dd0d69de03ab2d1d108f17a02e00aaf28fe09e
};
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UIntersectionContextMenuFactory,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UIntersectionContextMenuFactory;
UClass* Z_Construct_UClass_UIntersectionContextMenuFactory(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UIntersectionContextMenuFactory;
		if (!Z_Registration_Info_UClass_UIntersectionContextMenuFactory.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("IntersectionContextMenuFactory"),
				Z_Registration_Info_UClass_UIntersectionContextMenuFactory.InnerSingleton,
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
		return Z_Registration_Info_UClass_UIntersectionContextMenuFactory.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UIntersectionContextMenuFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIntersectionContextMenuFactory.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UIntersectionContextMenuFactory.OuterSingleton;
}
#undef UHT_STATICS
UIntersectionContextMenuFactory::UIntersectionContextMenuFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UIntersectionContextMenuFactory);
UIntersectionContextMenuFactory::~UIntersectionContextMenuFactory() {}
// ********** End Class UIntersectionContextMenuFactory ********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ContextMenu_IntersectionContextMenuFactory_h__Script_RoadBLDEditorToolkit_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIntersectionContextMenuFactory, TEXT("UIntersectionContextMenuFactory"), &Z_Registration_Info_UClass_UIntersectionContextMenuFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIntersectionContextMenuFactory), 3740456013U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ContextMenu_IntersectionContextMenuFactory_h__Script_RoadBLDEditorToolkit_04f6438d2d5b65dfefb7ebbed927e657d652ce46{
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
