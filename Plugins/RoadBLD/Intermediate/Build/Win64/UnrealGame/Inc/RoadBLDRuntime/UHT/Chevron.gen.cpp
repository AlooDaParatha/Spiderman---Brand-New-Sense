// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicRoad/Chevron.h"
#include "DynamicRoad/Store/RoadNetworkChevronTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeChevron() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UChevron(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChevronBoundaryAttachment(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_EChevronAuthoringMode(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UChevron(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UChevron *****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UChevron_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * Transient editor facade for a store-backed chevron authoring record.\n * Outer is the owning ADynamicRoadNetwork. The network never keeps a reflected array of these.\n */" },
		{ "IncludePath", "DynamicRoad/Chevron.h" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Chevron.h" },
		{ "ToolTip", "Transient editor facade for a store-backed chevron authoring record.\nOuter is the owning ADynamicRoadNetwork. The network never keeps a reflected array of these." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChevronID_MetaData[] = {
		{ "Category", "Chevron" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Chevron.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CornerID_MetaData[] = {
		{ "Category", "Chevron" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Chevron.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartEdgeID_MetaData[] = {
		{ "Category", "Chevron" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Chevron.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndEdgeID_MetaData[] = {
		{ "Category", "Chevron" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Chevron.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceRoadAID_MetaData[] = {
		{ "Category", "Chevron" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Chevron.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceRoadBID_MetaData[] = {
		{ "Category", "Chevron" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Chevron.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastIntersectionSignature_MetaData[] = {
		{ "Category", "Chevron" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Chevron.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastIntersectionLocation_MetaData[] = {
		{ "Category", "Chevron" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Chevron.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[] = {
		{ "Category", "Chevron" },
		{ "ClampMax", "75.0" },
		{ "ClampMin", "15.0" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Chevron.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Chevron" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Chevron.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spacing_MetaData[] = {
		{ "Category", "Chevron" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Chevron.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "Chevron" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Chevron.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterOffset_MetaData[] = {
		{ "Category", "Chevron" },
		{ "Comment", "/** Lateral shift (cm) of the V-apex column along the pattern right axis given by Rotation. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Chevron.h" },
		{ "ToolTip", "Lateral shift (cm) of the V-apex column along the pattern right axis given by Rotation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Chevron" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Chevron.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Chevron" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Chevron.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundaryAttachments_MetaData[] = {
		{ "Category", "Chevron" },
		{ "Comment", "/** Not Blueprint-exposed: FChevronBoundaryAttachment is editor/store data only. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Chevron.h" },
		{ "ToolTip", "Not Blueprint-exposed: FChevronBoundaryAttachment is editor/store data only." },
	};
#endif // WITH_METADATA

// ********** Begin Class UChevron constinit property declarations *********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChevronID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CornerID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartEdgeID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndEdgeID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceRoadAID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceRoadBID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastIntersectionSignature;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastIntersectionLocation;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Angle;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Spacing;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Width;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CenterOffset;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundaryAttachments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoundaryAttachments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UChevron constinit property declarations ***********************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChevron>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UChevron Property Definitions ********************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ChevronID = { "ChevronID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UChevron, ChevronID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChevronID_MetaData), NewProp_ChevronID_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CornerID = { "CornerID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UChevron, CornerID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CornerID_MetaData), NewProp_CornerID_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_StartEdgeID = { "StartEdgeID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UChevron, StartEdgeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartEdgeID_MetaData), NewProp_StartEdgeID_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EndEdgeID = { "EndEdgeID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UChevron, EndEdgeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndEdgeID_MetaData), NewProp_EndEdgeID_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SourceRoadAID = { "SourceRoadAID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UChevron, SourceRoadAID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceRoadAID_MetaData), NewProp_SourceRoadAID_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SourceRoadBID = { "SourceRoadBID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UChevron, SourceRoadBID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceRoadBID_MetaData), NewProp_SourceRoadBID_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LastIntersectionSignature = { "LastIntersectionSignature", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UChevron, LastIntersectionSignature), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastIntersectionSignature_MetaData), NewProp_LastIntersectionSignature_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LastIntersectionLocation = { "LastIntersectionLocation", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UChevron, LastIntersectionLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastIntersectionLocation_MetaData), NewProp_LastIntersectionLocation_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UChevron, Angle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Angle_MetaData), NewProp_Angle_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UChevron, Rotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Spacing = { "Spacing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UChevron, Spacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spacing_MetaData), NewProp_Spacing_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UChevron, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_CenterOffset = { "CenterOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UChevron, CenterOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterOffset_MetaData), NewProp_CenterOffset_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(UChevron, Material), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UChevron, Mode), Z_Construct_UEnum_RoadBLDRuntime_EChevronAuthoringMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 62d4f92eb8dfb2fc9bdb18cfe8f89fc8e5c1e15e
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BoundaryAttachments_Inner = { "BoundaryAttachments", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChevronBoundaryAttachment, METADATA_PARAMS(0, nullptr) }; // 4034e8b6e1e5ad30fea5ebe18d1ecea2fa1139e0
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_BoundaryAttachments = { "BoundaryAttachments", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UChevron, BoundaryAttachments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundaryAttachments_MetaData), NewProp_BoundaryAttachments_MetaData) }; // 4034e8b6e1e5ad30fea5ebe18d1ecea2fa1139e0
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChevronID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CornerID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartEdgeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndEdgeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceRoadAID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceRoadBID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LastIntersectionSignature,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LastIntersectionLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Angle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Spacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CenterOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoundaryAttachments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoundaryAttachments,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UChevron Property Definitions **********************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UChevron,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UChevron;
UClass* Z_Construct_UClass_UChevron(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UChevron;
		if (!Z_Registration_Info_UClass_UChevron.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Chevron"),
				Z_Registration_Info_UClass_UChevron.InnerSingleton,
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
		return Z_Registration_Info_UClass_UChevron.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UChevron.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChevron.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UChevron.OuterSingleton;
}
#undef UHT_STATICS
UChevron::UChevron(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UChevron);
UChevron::~UChevron() {}
// ********** End Class UChevron *******************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_Chevron_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChevron, TEXT("UChevron"), &Z_Registration_Info_UClass_UChevron, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChevron), 694866715U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_Chevron_h__Script_RoadBLDRuntime_796bfb9df4334e96aff2a1ef76c429acf85f7818{
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
