// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG/PCGRoadBLDGetRoadEdgesSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodePCGRoadBLDGetRoadEdgesSettings() {}

// ********** Begin Cross Module References ********************************************************
PCG_API UClass* Z_Construct_UClass_UPCGSettings(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UPCGRoadBLDGetRoadEdgesSettings(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UPCGRoadBLDGetRoadEdgesSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UPCGRoadBLDGetRoadEdgesSettings ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UPCGRoadBLDGetRoadEdgesSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/**\n * PCG node: Get RoadBLD Edges\n *\n * Runs on a UPCGComponent hosted by ARoadGeo and outputs open spline data for\n * each requested road curve (left edge, right edge, and/or centerline) from SourceRoads.\n *\n * RoadSide metadata: 0 = left edge, 1 = right edge, 2 = centerline (reference line).\n */" },
		{ "IncludePath", "PCG/PCGRoadBLDGetRoadEdgesSettings.h" },
		{ "ModuleRelativePath", "Public/PCG/PCGRoadBLDGetRoadEdgesSettings.h" },
		{ "ToolTip", "PCG node: Get RoadBLD Edges\n\nRuns on a UPCGComponent hosted by ARoadGeo and outputs open spline data for\neach requested road curve (left edge, right edge, and/or centerline) from SourceRoads.\n\nRoadSide metadata: 0 = left edge, 1 = right edge, 2 = centerline (reference line)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeLeftEdge_MetaData[] = {
		{ "Category", "RoadBLD" },
		{ "Comment", "/** Output left road edge (GetRoadEdge(0)). */" },
		{ "ModuleRelativePath", "Public/PCG/PCGRoadBLDGetRoadEdgesSettings.h" },
		{ "ToolTip", "Output left road edge (GetRoadEdge(0))." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeRightEdge_MetaData[] = {
		{ "Category", "RoadBLD" },
		{ "Comment", "/** Output right road edge (GetRoadEdge(1)). */" },
		{ "ModuleRelativePath", "Public/PCG/PCGRoadBLDGetRoadEdgesSettings.h" },
		{ "ToolTip", "Output right road edge (GetRoadEdge(1))." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeCenterline_MetaData[] = {
		{ "Category", "RoadBLD" },
		{ "Comment", "/** Output the road centerline (ReferenceLine). */" },
		{ "ModuleRelativePath", "Public/PCG/PCGRoadBLDGetRoadEdgesSettings.h" },
		{ "ToolTip", "Output the road centerline (ReferenceLine)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyWorldDisplacement_MetaData[] = {
		{ "Category", "RoadBLD" },
		{ "Comment", "/** Offset sampled point Z by RoadBLD World Displacement at each point's world XY. Fades out at road ends and intersection masks to match the road mesh. No-op if World Displacement is disabled in RoadBLD settings. */" },
		{ "ModuleRelativePath", "Public/PCG/PCGRoadBLDGetRoadEdgesSettings.h" },
		{ "ToolTip", "Offset sampled point Z by RoadBLD World Displacement at each point's world XY. Fades out at road ends and intersection masks to match the road mesh. No-op if World Displacement is disabled in RoadBLD settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyRoadCrown_MetaData[] = {
		{ "Category", "RoadBLD" },
		{ "Comment", "/** Offset sampled point Z by the road crown, flattened at road ends and intersection masks to match the road mesh. Outer edges are unaffected (crown is zero there). */" },
		{ "ModuleRelativePath", "Public/PCG/PCGRoadBLDGetRoadEdgesSettings.h" },
		{ "ToolTip", "Offset sampled point Z by the road crown, flattened at road ends and intersection masks to match the road mesh. Outer edges are unaffected (crown is zero there)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAvoidIntersections_MetaData[] = {
		{ "Category", "RoadBLD" },
		{ "Comment", "/** Split output edges and remove spans covered by intersection/road-overlap masks. */" },
		{ "ModuleRelativePath", "Public/PCG/PCGRoadBLDGetRoadEdgesSettings.h" },
		{ "ToolTip", "Split output edges and remove spans covered by intersection/road-overlap masks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionCullingThreshold_MetaData[] = {
		{ "Category", "RoadBLD" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Extra distance from each intersection mask edge where edges should not be emitted. */" },
		{ "ModuleRelativePath", "Public/PCG/PCGRoadBLDGetRoadEdgesSettings.h" },
		{ "ToolTip", "Extra distance from each intersection mask edge where edges should not be emitted." },
		{ "UIMin", "0.0" },
		{ "Units", "cm" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPCGRoadBLDGetRoadEdgesSettings constinit property declarations **********
	static void NewProp_bIncludeLeftEdge_SetBit(void* Obj)
	{
		((UPCGRoadBLDGetRoadEdgesSettings*)Obj)->bIncludeLeftEdge = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeLeftEdge;
	static void NewProp_bIncludeRightEdge_SetBit(void* Obj)
	{
		((UPCGRoadBLDGetRoadEdgesSettings*)Obj)->bIncludeRightEdge = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeRightEdge;
	static void NewProp_bIncludeCenterline_SetBit(void* Obj)
	{
		((UPCGRoadBLDGetRoadEdgesSettings*)Obj)->bIncludeCenterline = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeCenterline;
	static void NewProp_bApplyWorldDisplacement_SetBit(void* Obj)
	{
		((UPCGRoadBLDGetRoadEdgesSettings*)Obj)->bApplyWorldDisplacement = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyWorldDisplacement;
	static void NewProp_bApplyRoadCrown_SetBit(void* Obj)
	{
		((UPCGRoadBLDGetRoadEdgesSettings*)Obj)->bApplyRoadCrown = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyRoadCrown;
	static void NewProp_bAvoidIntersections_SetBit(void* Obj)
	{
		((UPCGRoadBLDGetRoadEdgesSettings*)Obj)->bAvoidIntersections = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAvoidIntersections;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_IntersectionCullingThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPCGRoadBLDGetRoadEdgesSettings constinit property declarations ************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGRoadBLDGetRoadEdgesSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UPCGRoadBLDGetRoadEdgesSettings Property Definitions *********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIncludeLeftEdge = { "bIncludeLeftEdge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGRoadBLDGetRoadEdgesSettings), &UHT_STATICS::NewProp_bIncludeLeftEdge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeLeftEdge_MetaData), NewProp_bIncludeLeftEdge_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIncludeRightEdge = { "bIncludeRightEdge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGRoadBLDGetRoadEdgesSettings), &UHT_STATICS::NewProp_bIncludeRightEdge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeRightEdge_MetaData), NewProp_bIncludeRightEdge_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIncludeCenterline = { "bIncludeCenterline", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGRoadBLDGetRoadEdgesSettings), &UHT_STATICS::NewProp_bIncludeCenterline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeCenterline_MetaData), NewProp_bIncludeCenterline_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bApplyWorldDisplacement = { "bApplyWorldDisplacement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGRoadBLDGetRoadEdgesSettings), &UHT_STATICS::NewProp_bApplyWorldDisplacement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyWorldDisplacement_MetaData), NewProp_bApplyWorldDisplacement_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bApplyRoadCrown = { "bApplyRoadCrown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGRoadBLDGetRoadEdgesSettings), &UHT_STATICS::NewProp_bApplyRoadCrown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyRoadCrown_MetaData), NewProp_bApplyRoadCrown_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAvoidIntersections = { "bAvoidIntersections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGRoadBLDGetRoadEdgesSettings), &UHT_STATICS::NewProp_bAvoidIntersections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAvoidIntersections_MetaData), NewProp_bAvoidIntersections_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_IntersectionCullingThreshold = { "IntersectionCullingThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGRoadBLDGetRoadEdgesSettings, IntersectionCullingThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionCullingThreshold_MetaData), NewProp_IntersectionCullingThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIncludeLeftEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIncludeRightEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIncludeCenterline,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bApplyWorldDisplacement,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bApplyRoadCrown,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAvoidIntersections,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IntersectionCullingThreshold,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UPCGRoadBLDGetRoadEdgesSettings Property Definitions ***********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UPCGSettings,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UPCGRoadBLDGetRoadEdgesSettings,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UPCGRoadBLDGetRoadEdgesSettings;
UClass* Z_Construct_UClass_UPCGRoadBLDGetRoadEdgesSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UPCGRoadBLDGetRoadEdgesSettings;
		if (!Z_Registration_Info_UClass_UPCGRoadBLDGetRoadEdgesSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("PCGRoadBLDGetRoadEdgesSettings"),
				Z_Registration_Info_UClass_UPCGRoadBLDGetRoadEdgesSettings.InnerSingleton,
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
		return Z_Registration_Info_UClass_UPCGRoadBLDGetRoadEdgesSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UPCGRoadBLDGetRoadEdgesSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGRoadBLDGetRoadEdgesSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGRoadBLDGetRoadEdgesSettings.OuterSingleton;
}
#undef UHT_STATICS
UPCGRoadBLDGetRoadEdgesSettings::UPCGRoadBLDGetRoadEdgesSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPCGRoadBLDGetRoadEdgesSettings);
UPCGRoadBLDGetRoadEdgesSettings::~UPCGRoadBLDGetRoadEdgesSettings() {}
// ********** End Class UPCGRoadBLDGetRoadEdgesSettings ********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_PCG_PCGRoadBLDGetRoadEdgesSettings_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGRoadBLDGetRoadEdgesSettings, TEXT("UPCGRoadBLDGetRoadEdgesSettings"), &Z_Registration_Info_UClass_UPCGRoadBLDGetRoadEdgesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGRoadBLDGetRoadEdgesSettings), 777592716U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_PCG_PCGRoadBLDGetRoadEdgesSettings_h__Script_RoadBLDRuntime_cce4858164ac488ebb58a01bbd6d738c62de0b09{
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
