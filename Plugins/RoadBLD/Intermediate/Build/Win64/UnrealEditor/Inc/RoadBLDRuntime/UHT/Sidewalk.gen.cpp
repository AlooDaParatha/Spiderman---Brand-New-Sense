// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicRoad/Sidewalk.h"
#include "DynamicRoad/DynamicRoadData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeSidewalk() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadLane(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_USidewalk(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_USidewalkPartition(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSidewalkPartitionDescriptor(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UEdgeCurve(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadModuleObject(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_USidewalk(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_USidewalkPartition(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class USidewalkPartition *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_USidewalkPartition_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * USidewalk - A dedicated sidewalk object that generates flat geometry between two EdgeCurves.\n * Unlike the legacy sidewalk system (UDynamicRoadLane with SidewalkProfile), this class uses\n * a simple constant ZOffset for elevation and delegates curb geometry to a URoadModuleObject.\n */" },
		{ "IncludePath", "DynamicRoad/Sidewalk.h" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Sidewalk.h" },
		{ "ToolTip", "USidewalk - A dedicated sidewalk object that generates flat geometry between two EdgeCurves.\nUnlike the legacy sidewalk system (UDynamicRoadLane with SidewalkProfile), this class uses\na simple constant ZOffset for elevation and delegates curb geometry to a URoadModuleObject." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "RoadBLD|Sidewalk" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Sidewalk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWalkable_MetaData[] = {
		{ "Category", "RoadBLD|Sidewalk" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Sidewalk.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USidewalkPartition constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static void NewProp_bWalkable_SetBit(void* Obj)
	{
		((USidewalkPartition*)Obj)->bWalkable = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWalkable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USidewalkPartition constinit property declarations *************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USidewalkPartition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class USidewalkPartition Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(USidewalkPartition, Material), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bWalkable = { "bWalkable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(USidewalkPartition), &UHT_STATICS::NewProp_bWalkable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWalkable_MetaData), NewProp_bWalkable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bWalkable,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class USidewalkPartition Property Definitions ************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDynamicRoadLane,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_USidewalkPartition,
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
FClassRegistrationInfo Z_Registration_Info_UClass_USidewalkPartition;
UClass* Z_Construct_UClass_USidewalkPartition(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = USidewalkPartition;
		if (!Z_Registration_Info_UClass_USidewalkPartition.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("SidewalkPartition"),
				Z_Registration_Info_UClass_USidewalkPartition.InnerSingleton,
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
		return Z_Registration_Info_UClass_USidewalkPartition.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_USidewalkPartition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USidewalkPartition.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_USidewalkPartition.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USidewalkPartition);
USidewalkPartition::~USidewalkPartition() {}
// ********** End Class USidewalkPartition *********************************************************

// ********** Begin Class USidewalk ****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_USidewalk_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DynamicRoad/Sidewalk.h" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Sidewalk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOffset_MetaData[] = {
		{ "Category", "RoadBLD|Sidewalk" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Sidewalk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurbCutLowerAmount_MetaData[] = {
		{ "Category", "RoadBLD|Sidewalk" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Maximum curb-cut lowering (cm) applied around FlattenSidewalks interaction volumes. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Sidewalk.h" },
		{ "ToolTip", "Maximum curb-cut lowering (cm) applied around FlattenSidewalks interaction volumes." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurbCutMaterial_MetaData[] = {
		{ "Category", "RoadBLD|Sidewalk" },
		{ "Comment", "/** Optional override material applied to sidewalk quads affected by curb-cut interactions. */" },
		{ "DisplayName", "Curb Cut Material" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Sidewalk.h" },
		{ "ToolTip", "Optional override material applied to sidewalk quads affected by curb-cut interactions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurbClass_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "RoadBLD|Sidewalk" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Sidewalk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "RoadBLD|Sidewalk" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Sidewalk.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CornerMaterial_MetaData[] = {
		{ "Category", "RoadBLD|Sidewalk" },
		{ "Comment", "/** When set, flat sidewalk geometry on intersection corner segments uses this instead of Material. */" },
		{ "DisplayName", "Corner Material" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Sidewalk.h" },
		{ "ToolTip", "When set, flat sidewalk geometry on intersection corner segments uses this instead of Material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartitionDescriptors_MetaData[] = {
		{ "Category", "RoadBLD|Sidewalk" },
		{ "Comment", "/** Authoring descriptors used to create partition edge curves and partition lane objects. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Sidewalk.h" },
		{ "ToolTip", "Authoring descriptors used to create partition edge curves and partition lane objects." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartitionEdgeCurves_MetaData[] = {
		{ "Category", "RoadBLD|Sidewalk" },
		{ "Comment", "/** Intermediate edge curves between the sidewalk inner and outer edges that separate partitions. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Sidewalk.h" },
		{ "ToolTip", "Intermediate edge curves between the sidewalk inner and outer edges that separate partitions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Partitions_Inner_MetaData[] = {
		{ "Category", "RoadBLD|Sidewalk" },
		{ "Comment", "/** Ordered partition lanes from inner-to-outer sidewalk side. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Sidewalk.h" },
		{ "ToolTip", "Ordered partition lanes from inner-to-outer sidewalk side." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Partitions_MetaData[] = {
		{ "Category", "RoadBLD|Sidewalk" },
		{ "Comment", "/** Ordered partition lanes from inner-to-outer sidewalk side. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Sidewalk.h" },
		{ "ToolTip", "Ordered partition lanes from inner-to-outer sidewalk side." },
	};
#endif // WITH_METADATA

// ********** Begin Class USidewalk constinit property declarations ********************************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ZOffset;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CurbCutLowerAmount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurbCutMaterial;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CurbClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CornerMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PartitionDescriptors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PartitionDescriptors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartitionEdgeCurves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PartitionEdgeCurves;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Partitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Partitions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USidewalk constinit property declarations **********************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USidewalk>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class USidewalk Property Definitions *******************************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(USidewalk, ZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOffset_MetaData), NewProp_ZOffset_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_CurbCutLowerAmount = { "CurbCutLowerAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(USidewalk, CurbCutLowerAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurbCutLowerAmount_MetaData), NewProp_CurbCutLowerAmount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CurbCutMaterial = { "CurbCutMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(USidewalk, CurbCutMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurbCutMaterial_MetaData), NewProp_CurbCutMaterial_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_CurbClass = { "CurbClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(USidewalk, CurbClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URoadModuleObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurbClass_MetaData), NewProp_CurbClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(USidewalk, Material), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CornerMaterial = { "CornerMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(USidewalk, CornerMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CornerMaterial_MetaData), NewProp_CornerMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PartitionDescriptors_Inner = { "PartitionDescriptors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSidewalkPartitionDescriptor, METADATA_PARAMS(0, nullptr) }; // 7c1c5ca88f7ae153e61685f9d8e224019a24f3ec
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PartitionDescriptors = { "PartitionDescriptors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(USidewalk, PartitionDescriptors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartitionDescriptors_MetaData), NewProp_PartitionDescriptors_MetaData) }; // 7c1c5ca88f7ae153e61685f9d8e224019a24f3ec
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PartitionEdgeCurves_Inner = { "PartitionEdgeCurves", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PartitionEdgeCurves = { "PartitionEdgeCurves", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(USidewalk, PartitionEdgeCurves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartitionEdgeCurves_MetaData), NewProp_PartitionEdgeCurves_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Partitions_Inner = { "Partitions", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_USidewalkPartition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Partitions_Inner_MetaData), NewProp_Partitions_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Partitions = { "Partitions", nullptr, (EPropertyFlags)0x011400800000000d, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(USidewalk, Partitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Partitions_MetaData), NewProp_Partitions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurbCutLowerAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurbCutMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurbClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CornerMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PartitionDescriptors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PartitionDescriptors,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PartitionEdgeCurves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PartitionEdgeCurves,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Partitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Partitions,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class USidewalk Property Definitions *********************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDynamicRoadLane,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_USidewalk,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_USidewalk;
UClass* Z_Construct_UClass_USidewalk(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = USidewalk;
		if (!Z_Registration_Info_UClass_USidewalk.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Sidewalk"),
				Z_Registration_Info_UClass_USidewalk.InnerSingleton,
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
		return Z_Registration_Info_UClass_USidewalk.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_USidewalk.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USidewalk.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_USidewalk.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USidewalk);
USidewalk::~USidewalk() {}
// ********** End Class USidewalk ******************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_Sidewalk_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USidewalkPartition, TEXT("USidewalkPartition"), &Z_Registration_Info_UClass_USidewalkPartition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USidewalkPartition), 3007015746U) },
		{ Z_Construct_UClass_USidewalk, TEXT("USidewalk"), &Z_Registration_Info_UClass_USidewalk, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USidewalk), 706176203U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_Sidewalk_h__Script_RoadBLDRuntime_fa796c45219449741c34b247743da0948dbe0253{
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
