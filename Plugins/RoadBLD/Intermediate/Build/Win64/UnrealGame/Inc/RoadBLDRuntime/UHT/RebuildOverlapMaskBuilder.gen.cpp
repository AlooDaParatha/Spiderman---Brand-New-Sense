// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicRoad/Rebuild/RebuildOverlapMaskBuilder.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRebuildOverlapMaskBuilder() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URebuildOverlapMaskBuilder(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URebuildOverlapMaskBuilder(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class URebuildOverlapMaskBuilder ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URebuildOverlapMaskBuilder_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * OverlapMaskBuilder stage for the RoadBLD rebuild refactor.\n *\n * Computes per-road overlap masks by sampling each road's outer edges and\n * geometric centerline against all other roads in the network. Masks represent reference-line distance\n * intervals where a road geometrically overlaps with at least one other road.\n *\n * Runs after CurveBuilder (requires edge polylines) and before\n * SurfaceBooleanBuilder (which consumes the masks for polygon segmentation)\n * and MeshBuilder (which consumes them for lane-marking suppression).\n *\n * Output: Context.OverlapMasks (compute-only; no world side effects)\n */" },
		{ "IncludePath", "DynamicRoad/Rebuild/RebuildOverlapMaskBuilder.h" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Rebuild/RebuildOverlapMaskBuilder.h" },
		{ "ToolTip", "OverlapMaskBuilder stage for the RoadBLD rebuild refactor.\n\nComputes per-road overlap masks by sampling each road's outer edges and\ngeometric centerline against all other roads in the network. Masks represent reference-line distance\nintervals where a road geometrically overlaps with at least one other road.\n\nRuns after CurveBuilder (requires edge polylines) and before\nSurfaceBooleanBuilder (which consumes the masks for polygon segmentation)\nand MeshBuilder (which consumes them for lane-marking suppression).\n\nOutput: Context.OverlapMasks (compute-only; no world side effects)" },
	};
#endif // WITH_METADATA

// ********** Begin Class URebuildOverlapMaskBuilder constinit property declarations ***************
// ********** End Class URebuildOverlapMaskBuilder constinit property declarations *****************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URebuildOverlapMaskBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URebuildOverlapMaskBuilder,
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
FClassRegistrationInfo Z_Registration_Info_UClass_URebuildOverlapMaskBuilder;
UClass* Z_Construct_UClass_URebuildOverlapMaskBuilder(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URebuildOverlapMaskBuilder;
		if (!Z_Registration_Info_UClass_URebuildOverlapMaskBuilder.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RebuildOverlapMaskBuilder"),
				Z_Registration_Info_UClass_URebuildOverlapMaskBuilder.InnerSingleton,
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
		return Z_Registration_Info_UClass_URebuildOverlapMaskBuilder.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URebuildOverlapMaskBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URebuildOverlapMaskBuilder.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URebuildOverlapMaskBuilder.OuterSingleton;
}
#undef UHT_STATICS
URebuildOverlapMaskBuilder::URebuildOverlapMaskBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URebuildOverlapMaskBuilder);
URebuildOverlapMaskBuilder::~URebuildOverlapMaskBuilder() {}
// ********** End Class URebuildOverlapMaskBuilder *************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_Rebuild_RebuildOverlapMaskBuilder_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URebuildOverlapMaskBuilder, TEXT("URebuildOverlapMaskBuilder"), &Z_Registration_Info_UClass_URebuildOverlapMaskBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URebuildOverlapMaskBuilder), 79105470U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_Rebuild_RebuildOverlapMaskBuilder_h__Script_RoadBLDRuntime_beb1e124adc8cf5ece137909b99d8ede35e0592c{
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
