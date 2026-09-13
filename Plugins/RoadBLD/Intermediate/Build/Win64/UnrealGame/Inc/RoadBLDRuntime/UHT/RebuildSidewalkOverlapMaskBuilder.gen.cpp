// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicRoad/Rebuild/RebuildSidewalkOverlapMaskBuilder.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRebuildSidewalkOverlapMaskBuilder() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URebuildSidewalkOverlapMaskBuilder(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URebuildSidewalkOverlapMaskBuilder(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class URebuildSidewalkOverlapMaskBuilder ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URebuildSidewalkOverlapMaskBuilder_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/** Computes overlap masks on sidewalk inner edges for flat sidewalk trimming. */" },
		{ "IncludePath", "DynamicRoad/Rebuild/RebuildSidewalkOverlapMaskBuilder.h" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Rebuild/RebuildSidewalkOverlapMaskBuilder.h" },
		{ "ToolTip", "Computes overlap masks on sidewalk inner edges for flat sidewalk trimming." },
	};
#endif // WITH_METADATA

// ********** Begin Class URebuildSidewalkOverlapMaskBuilder constinit property declarations *******
// ********** End Class URebuildSidewalkOverlapMaskBuilder constinit property declarations *********
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URebuildSidewalkOverlapMaskBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URebuildSidewalkOverlapMaskBuilder,
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
FClassRegistrationInfo Z_Registration_Info_UClass_URebuildSidewalkOverlapMaskBuilder;
UClass* Z_Construct_UClass_URebuildSidewalkOverlapMaskBuilder(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URebuildSidewalkOverlapMaskBuilder;
		if (!Z_Registration_Info_UClass_URebuildSidewalkOverlapMaskBuilder.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RebuildSidewalkOverlapMaskBuilder"),
				Z_Registration_Info_UClass_URebuildSidewalkOverlapMaskBuilder.InnerSingleton,
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
		return Z_Registration_Info_UClass_URebuildSidewalkOverlapMaskBuilder.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URebuildSidewalkOverlapMaskBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URebuildSidewalkOverlapMaskBuilder.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URebuildSidewalkOverlapMaskBuilder.OuterSingleton;
}
#undef UHT_STATICS
URebuildSidewalkOverlapMaskBuilder::URebuildSidewalkOverlapMaskBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URebuildSidewalkOverlapMaskBuilder);
URebuildSidewalkOverlapMaskBuilder::~URebuildSidewalkOverlapMaskBuilder() {}
// ********** End Class URebuildSidewalkOverlapMaskBuilder *****************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_Rebuild_RebuildSidewalkOverlapMaskBuilder_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URebuildSidewalkOverlapMaskBuilder, TEXT("URebuildSidewalkOverlapMaskBuilder"), &Z_Registration_Info_UClass_URebuildSidewalkOverlapMaskBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URebuildSidewalkOverlapMaskBuilder), 2312308312U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_Rebuild_RebuildSidewalkOverlapMaskBuilder_h__Script_RoadBLDRuntime_513eddeb67ad48c93ac9be7b21773e0704f6fc23{
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
