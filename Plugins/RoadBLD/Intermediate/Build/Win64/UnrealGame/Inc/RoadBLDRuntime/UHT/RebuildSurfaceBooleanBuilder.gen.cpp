// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicRoad/Rebuild/RebuildSurfaceBooleanBuilder.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRebuildSurfaceBooleanBuilder() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URebuildSurfaceBooleanBuilder(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URebuildSurfaceBooleanBuilder(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class URebuildSurfaceBooleanBuilder ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URebuildSurfaceBooleanBuilder_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * SurfaceBooleanBuilder stage for the RoadBLD rebuild refactor.\n *\n * Produces a single merged road surface by:\n * 1. Extracting each road's 2D outline polygon from its outer edge polylines\n * 2. Extracting corner fillet polygons from the IntersectionModel\n * 3. Building corner-authoritative merge groups (roads connected by corners are merged)\n * 4. Performing a Clipper2 boolean union per merge group via UClipperUtils\n * 5. Re-projecting vertices to 3D using only same-group source polygons\n *\n * Output: Context.MergedSurfacePlan (compute-only; no world side effects)\n */" },
		{ "IncludePath", "DynamicRoad/Rebuild/RebuildSurfaceBooleanBuilder.h" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Rebuild/RebuildSurfaceBooleanBuilder.h" },
		{ "ToolTip", "SurfaceBooleanBuilder stage for the RoadBLD rebuild refactor.\n\nProduces a single merged road surface by:\n1. Extracting each road's 2D outline polygon from its outer edge polylines\n2. Extracting corner fillet polygons from the IntersectionModel\n3. Building corner-authoritative merge groups (roads connected by corners are merged)\n4. Performing a Clipper2 boolean union per merge group via UClipperUtils\n5. Re-projecting vertices to 3D using only same-group source polygons\n\nOutput: Context.MergedSurfacePlan (compute-only; no world side effects)" },
	};
#endif // WITH_METADATA

// ********** Begin Class URebuildSurfaceBooleanBuilder constinit property declarations ************
// ********** End Class URebuildSurfaceBooleanBuilder constinit property declarations **************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URebuildSurfaceBooleanBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URebuildSurfaceBooleanBuilder,
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
FClassRegistrationInfo Z_Registration_Info_UClass_URebuildSurfaceBooleanBuilder;
UClass* Z_Construct_UClass_URebuildSurfaceBooleanBuilder(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URebuildSurfaceBooleanBuilder;
		if (!Z_Registration_Info_UClass_URebuildSurfaceBooleanBuilder.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RebuildSurfaceBooleanBuilder"),
				Z_Registration_Info_UClass_URebuildSurfaceBooleanBuilder.InnerSingleton,
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
		return Z_Registration_Info_UClass_URebuildSurfaceBooleanBuilder.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URebuildSurfaceBooleanBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URebuildSurfaceBooleanBuilder.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URebuildSurfaceBooleanBuilder.OuterSingleton;
}
#undef UHT_STATICS
URebuildSurfaceBooleanBuilder::URebuildSurfaceBooleanBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URebuildSurfaceBooleanBuilder);
URebuildSurfaceBooleanBuilder::~URebuildSurfaceBooleanBuilder() {}
// ********** End Class URebuildSurfaceBooleanBuilder **********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_Rebuild_RebuildSurfaceBooleanBuilder_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URebuildSurfaceBooleanBuilder, TEXT("URebuildSurfaceBooleanBuilder"), &Z_Registration_Info_UClass_URebuildSurfaceBooleanBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URebuildSurfaceBooleanBuilder), 3659837568U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_Rebuild_RebuildSurfaceBooleanBuilder_h__Script_RoadBLDRuntime_74dca4ceee0bbb151355552a861fd71f4da5edd7{
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
