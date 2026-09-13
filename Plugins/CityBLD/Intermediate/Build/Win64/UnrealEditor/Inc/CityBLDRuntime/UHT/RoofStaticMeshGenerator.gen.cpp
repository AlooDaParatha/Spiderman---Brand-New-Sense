// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoofStaticMeshGenerator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRoofStaticMeshGenerator() {}

// ********** Begin Cross Module References ********************************************************
WORLDBLDRUNTIME_API UClass* Z_Construct_UClass_UWorldBLDDynamicMeshGenerator(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDRuntime(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_URoofStaticMeshGenerator(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_URoofStaticMeshGenerator(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class URoofStaticMeshGenerator *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoofStaticMeshGenerator_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * Builds an actor-owned static mesh for rooftop geometry.\n * Preserves per-corner UVs, per-corner normals, and per-triangle material IDs (used as slot indices).\n *\n * Slot ordering is index-stable (slot 0..N-1), even if some slots are unused.\n */" },
		{ "IncludePath", "RoofStaticMeshGenerator.h" },
		{ "ModuleRelativePath", "Private/RoofStaticMeshGenerator.h" },
		{ "ToolTip", "Builds an actor-owned static mesh for rooftop geometry.\nPreserves per-corner UVs, per-corner normals, and per-triangle material IDs (used as slot indices).\n\nSlot ordering is index-stable (slot 0..N-1), even if some slots are unused." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Private/RoofStaticMeshGenerator.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URoofStaticMeshGenerator constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlotMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SlotMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URoofStaticMeshGenerator constinit property declarations *******************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoofStaticMeshGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URoofStaticMeshGenerator Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SlotMaterials_Inner = { "SlotMaterials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SlotMaterials = { "SlotMaterials", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URoofStaticMeshGenerator, SlotMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotMaterials_MetaData), NewProp_SlotMaterials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SlotMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SlotMaterials,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URoofStaticMeshGenerator Property Definitions ******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldBLDDynamicMeshGenerator,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoofStaticMeshGenerator,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_URoofStaticMeshGenerator;
UClass* Z_Construct_UClass_URoofStaticMeshGenerator(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoofStaticMeshGenerator;
		if (!Z_Registration_Info_UClass_URoofStaticMeshGenerator.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoofStaticMeshGenerator"),
				Z_Registration_Info_UClass_URoofStaticMeshGenerator.InnerSingleton,
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
		return Z_Registration_Info_UClass_URoofStaticMeshGenerator.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoofStaticMeshGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoofStaticMeshGenerator.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoofStaticMeshGenerator.OuterSingleton;
}
#undef UHT_STATICS
URoofStaticMeshGenerator::URoofStaticMeshGenerator() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoofStaticMeshGenerator);
URoofStaticMeshGenerator::~URoofStaticMeshGenerator() {}
// ********** End Class URoofStaticMeshGenerator ***************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Private_RoofStaticMeshGenerator_h__Script_CityBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoofStaticMeshGenerator, TEXT("URoofStaticMeshGenerator"), &Z_Registration_Info_UClass_URoofStaticMeshGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoofStaticMeshGenerator), 3926287664U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Private_RoofStaticMeshGenerator_h__Script_CityBLDRuntime_812a8a6b5b168aad0690193905abdff50a9c1e7f{
	TEXT("/Script/CityBLDRuntime"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
