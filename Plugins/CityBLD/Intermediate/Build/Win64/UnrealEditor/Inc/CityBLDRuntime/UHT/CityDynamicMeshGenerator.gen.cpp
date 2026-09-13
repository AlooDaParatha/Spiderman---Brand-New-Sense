// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CityDynamicMeshGenerator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeCityDynamicMeshGenerator() {}

// ********** Begin Cross Module References ********************************************************
WORLDBLDRUNTIME_API UClass* Z_Construct_UClass_UWorldBLDDynamicMeshGenerator(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDRuntime(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UCityDynamicMeshGenerator(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_ACityBlockGeo(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UCityDynamicMeshGenerator(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UCityDynamicMeshGenerator ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UCityDynamicMeshGenerator_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * UCityDynamicMeshGenerator - Mesh generator for city block geometry.\n * Inherits common triangulation and mesh building functionality from UWorldBLDDynamicMeshGenerator.\n * Used to generate Delaunay-triangulated polygons for city block inner loops.\n */" },
		{ "IncludePath", "CityDynamicMeshGenerator.h" },
		{ "ModuleRelativePath", "Public/CityDynamicMeshGenerator.h" },
		{ "ToolTip", "UCityDynamicMeshGenerator - Mesh generator for city block geometry.\nInherits common triangulation and mesh building functionality from UWorldBLDDynamicMeshGenerator.\nUsed to generate Delaunay-triangulated polygons for city block inner loops." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetCityBlockGeoActor_MetaData[] = {
		{ "Comment", "/** The target CityBlockGeo actor that will receive the generated mesh */" },
		{ "ModuleRelativePath", "Public/CityDynamicMeshGenerator.h" },
		{ "ToolTip", "The target CityBlockGeo actor that will receive the generated mesh" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCityDynamicMeshGenerator constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetCityBlockGeoActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCityDynamicMeshGenerator constinit property declarations ******************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCityDynamicMeshGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UCityDynamicMeshGenerator Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetCityBlockGeoActor = { "TargetCityBlockGeoActor", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UCityDynamicMeshGenerator, TargetCityBlockGeoActor), Z_Construct_UClass_ACityBlockGeo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetCityBlockGeoActor_MetaData), NewProp_TargetCityBlockGeoActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetCityBlockGeoActor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UCityDynamicMeshGenerator Property Definitions *****************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldBLDDynamicMeshGenerator,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UCityDynamicMeshGenerator,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UCityDynamicMeshGenerator;
UClass* Z_Construct_UClass_UCityDynamicMeshGenerator(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UCityDynamicMeshGenerator;
		if (!Z_Registration_Info_UClass_UCityDynamicMeshGenerator.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CityDynamicMeshGenerator"),
				Z_Registration_Info_UClass_UCityDynamicMeshGenerator.InnerSingleton,
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
		return Z_Registration_Info_UClass_UCityDynamicMeshGenerator.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UCityDynamicMeshGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCityDynamicMeshGenerator.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UCityDynamicMeshGenerator.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCityDynamicMeshGenerator);
UCityDynamicMeshGenerator::~UCityDynamicMeshGenerator() {}
// ********** End Class UCityDynamicMeshGenerator **************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityDynamicMeshGenerator_h__Script_CityBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCityDynamicMeshGenerator, TEXT("UCityDynamicMeshGenerator"), &Z_Registration_Info_UClass_UCityDynamicMeshGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCityDynamicMeshGenerator), 1204487811U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityDynamicMeshGenerator_h__Script_CityBLDRuntime_ac209da16745092656e774f086c3c01a3663ed97{
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
