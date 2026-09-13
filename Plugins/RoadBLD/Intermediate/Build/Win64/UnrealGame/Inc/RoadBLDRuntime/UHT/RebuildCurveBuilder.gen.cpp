// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicRoad/Rebuild/RebuildCurveBuilder.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRebuildCurveBuilder() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URebuildCurveBuilder(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URebuildCurveBuilder(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class URebuildCurveBuilder *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URebuildCurveBuilder_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * CurveBuilder stage for the RoadBLD rebuild refactor.\n *\n * Responsibilities:\n * - Recalculate curves for ModifiedRoads (incremental) or every pending road (full rebuild)\n * - Validate curve data for PendingRoads\n * - Repair missing/invalid polylines (post-load corruption) via CalculateRefLine/CalculateLaneShapes\n * - Snapshot essential curve polyline data into FRebuildContext::RoadSnapshots (PendingRoads only)\n * - Build octree query boxes for outer edge curves (PendingRoads only)\n *\n * Callers that need to defer snapshot/octree generation until the pending-road scope is final\n * (e.g. after an octree-broadphase expansion step) should call BuildCurvesOnly() followed by\n * SnapshotRoadCurves(), SnapshotRoadProperties(), and BuildOctrees() explicitly, rather than\n * calling Build() which performs all steps in one shot.\n */" },
		{ "IncludePath", "DynamicRoad/Rebuild/RebuildCurveBuilder.h" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Rebuild/RebuildCurveBuilder.h" },
		{ "ToolTip", "CurveBuilder stage for the RoadBLD rebuild refactor.\n\nResponsibilities:\n- Recalculate curves for ModifiedRoads (incremental) or every pending road (full rebuild)\n- Validate curve data for PendingRoads\n- Repair missing/invalid polylines (post-load corruption) via CalculateRefLine/CalculateLaneShapes\n- Snapshot essential curve polyline data into FRebuildContext::RoadSnapshots (PendingRoads only)\n- Build octree query boxes for outer edge curves (PendingRoads only)\n\nCallers that need to defer snapshot/octree generation until the pending-road scope is final\n(e.g. after an octree-broadphase expansion step) should call BuildCurvesOnly() followed by\nSnapshotRoadCurves(), SnapshotRoadProperties(), and BuildOctrees() explicitly, rather than\ncalling Build() which performs all steps in one shot." },
	};
#endif // WITH_METADATA

// ********** Begin Class URebuildCurveBuilder constinit property declarations *********************
// ********** End Class URebuildCurveBuilder constinit property declarations ***********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URebuildCurveBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URebuildCurveBuilder,
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
FClassRegistrationInfo Z_Registration_Info_UClass_URebuildCurveBuilder;
UClass* Z_Construct_UClass_URebuildCurveBuilder(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URebuildCurveBuilder;
		if (!Z_Registration_Info_UClass_URebuildCurveBuilder.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RebuildCurveBuilder"),
				Z_Registration_Info_UClass_URebuildCurveBuilder.InnerSingleton,
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
		return Z_Registration_Info_UClass_URebuildCurveBuilder.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URebuildCurveBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URebuildCurveBuilder.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URebuildCurveBuilder.OuterSingleton;
}
#undef UHT_STATICS
URebuildCurveBuilder::URebuildCurveBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URebuildCurveBuilder);
URebuildCurveBuilder::~URebuildCurveBuilder() {}
// ********** End Class URebuildCurveBuilder *******************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_Rebuild_RebuildCurveBuilder_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URebuildCurveBuilder, TEXT("URebuildCurveBuilder"), &Z_Registration_Info_UClass_URebuildCurveBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URebuildCurveBuilder), 12770269U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_Rebuild_RebuildCurveBuilder_h__Script_RoadBLDRuntime_410ecfe996c12823eb272126a9781b6d4b37aa16{
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
