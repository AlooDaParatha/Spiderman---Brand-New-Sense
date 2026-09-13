// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicRoad/Rebuild/RebuildProxyMeshBuilder.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRebuildProxyMeshBuilder() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URebuildProxyMeshBuilder(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URebuildProxyMeshBuilder(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class URebuildProxyMeshBuilder *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URebuildProxyMeshBuilder_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * ProxyMeshBuilder stage for RoadBLD Preview Mode.\n *\n * Replaces the corner/mask/boolean/perimeter/mesh/details chain with a single cheap pass: for each\n * pending road, resample its two outer edge polylines down to PreviewPolylineSampleInterval and\n * record them as a paired ribbon in FRebuildContext::ProxyPlan. The commit stage extrudes each\n * pair into a solid prism (top, bottom, side walls, end caps) on a transient dynamic mesh component.\n *\n * Intersections are deliberately not computed: proxy roads simply overlap where they cross.\n *\n * Reads only snapshot data (FRebuildContext::RoadSnapshots), so it performs no UObject mutation\n * and is safe to run off the game thread if the pipeline is ever made async for preview.\n */" },
		{ "IncludePath", "DynamicRoad/Rebuild/RebuildProxyMeshBuilder.h" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Rebuild/RebuildProxyMeshBuilder.h" },
		{ "ToolTip", "ProxyMeshBuilder stage for RoadBLD Preview Mode.\n\nReplaces the corner/mask/boolean/perimeter/mesh/details chain with a single cheap pass: for each\npending road, resample its two outer edge polylines down to PreviewPolylineSampleInterval and\nrecord them as a paired ribbon in FRebuildContext::ProxyPlan. The commit stage extrudes each\npair into a solid prism (top, bottom, side walls, end caps) on a transient dynamic mesh component.\n\nIntersections are deliberately not computed: proxy roads simply overlap where they cross.\n\nReads only snapshot data (FRebuildContext::RoadSnapshots), so it performs no UObject mutation\nand is safe to run off the game thread if the pipeline is ever made async for preview." },
	};
#endif // WITH_METADATA

// ********** Begin Class URebuildProxyMeshBuilder constinit property declarations *****************
// ********** End Class URebuildProxyMeshBuilder constinit property declarations *******************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URebuildProxyMeshBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URebuildProxyMeshBuilder,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_URebuildProxyMeshBuilder;
UClass* Z_Construct_UClass_URebuildProxyMeshBuilder(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URebuildProxyMeshBuilder;
		if (!Z_Registration_Info_UClass_URebuildProxyMeshBuilder.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RebuildProxyMeshBuilder"),
				Z_Registration_Info_UClass_URebuildProxyMeshBuilder.InnerSingleton,
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
		return Z_Registration_Info_UClass_URebuildProxyMeshBuilder.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URebuildProxyMeshBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URebuildProxyMeshBuilder.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URebuildProxyMeshBuilder.OuterSingleton;
}
#undef UHT_STATICS
URebuildProxyMeshBuilder::URebuildProxyMeshBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URebuildProxyMeshBuilder);
URebuildProxyMeshBuilder::~URebuildProxyMeshBuilder() {}
// ********** End Class URebuildProxyMeshBuilder ***************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_Rebuild_RebuildProxyMeshBuilder_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URebuildProxyMeshBuilder, TEXT("URebuildProxyMeshBuilder"), &Z_Registration_Info_UClass_URebuildProxyMeshBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URebuildProxyMeshBuilder), 1770300958U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_Rebuild_RebuildProxyMeshBuilder_h__Script_RoadBLDRuntime_5068e4c4fa8f733167a16fec3a3bc67e1d11e041{
	TEXT("/Script/RoadBLDRuntime"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
