// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicRoad/Rebuild/RebuildCornerBuilder.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRebuildCornerBuilder() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URebuildCornerBuilder(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URebuildCornerBuilder(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class URebuildCornerBuilder ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URebuildCornerBuilder_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * CornerBuilder stage for the RoadBLD rebuild refactor.\n *\n * Responsibilities:\n * - Detect edge intersections between PendingRoads and RoadsToTestAgainst (scoped)\n * - Match against existing corners to preserve user-edited radii/offsets (stable GUID reuse)\n * - Skip endpoint-snap intersections\n * - Apply road-type defaults (walkways use smaller offsets/radii)\n * - Output Context.IntersectionModel for affected corners only (no side effects)\n */" },
		{ "IncludePath", "DynamicRoad/Rebuild/RebuildCornerBuilder.h" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Rebuild/RebuildCornerBuilder.h" },
		{ "ToolTip", "CornerBuilder stage for the RoadBLD rebuild refactor.\n\nResponsibilities:\n- Detect edge intersections between PendingRoads and RoadsToTestAgainst (scoped)\n- Match against existing corners to preserve user-edited radii/offsets (stable GUID reuse)\n- Skip endpoint-snap intersections\n- Apply road-type defaults (walkways use smaller offsets/radii)\n- Output Context.IntersectionModel for affected corners only (no side effects)" },
	};
#endif // WITH_METADATA

// ********** Begin Class URebuildCornerBuilder constinit property declarations ********************
// ********** End Class URebuildCornerBuilder constinit property declarations **********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URebuildCornerBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URebuildCornerBuilder,
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
FClassRegistrationInfo Z_Registration_Info_UClass_URebuildCornerBuilder;
UClass* Z_Construct_UClass_URebuildCornerBuilder(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URebuildCornerBuilder;
		if (!Z_Registration_Info_UClass_URebuildCornerBuilder.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RebuildCornerBuilder"),
				Z_Registration_Info_UClass_URebuildCornerBuilder.InnerSingleton,
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
		return Z_Registration_Info_UClass_URebuildCornerBuilder.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URebuildCornerBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URebuildCornerBuilder.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URebuildCornerBuilder.OuterSingleton;
}
#undef UHT_STATICS
URebuildCornerBuilder::URebuildCornerBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URebuildCornerBuilder);
URebuildCornerBuilder::~URebuildCornerBuilder() {}
// ********** End Class URebuildCornerBuilder ******************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_Rebuild_RebuildCornerBuilder_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URebuildCornerBuilder, TEXT("URebuildCornerBuilder"), &Z_Registration_Info_UClass_URebuildCornerBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URebuildCornerBuilder), 3348343517U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_Rebuild_RebuildCornerBuilder_h__Script_RoadBLDRuntime_0750db14db53390d8733c5aed0c7ab75b81b10ac{
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
