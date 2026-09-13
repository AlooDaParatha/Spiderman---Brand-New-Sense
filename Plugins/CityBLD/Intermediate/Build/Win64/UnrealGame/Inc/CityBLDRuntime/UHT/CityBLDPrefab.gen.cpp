// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CityBLDPrefab.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeCityBLDPrefab() {}

// ********** Begin Cross Module References ********************************************************
WORLDBLDRUNTIME_API UClass* Z_Construct_UClass_AWorldBLDPrefab(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDRuntime(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_ACityBLDPrefab(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_ACityBLDPrefab(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class ACityBLDPrefab ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ACityBLDPrefab_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * CityBLD-specific prefab actor.\n * Currently a thin wrapper around AWorldBLDPrefab for future CityBLD extensions.\n */" },
		{ "IncludePath", "CityBLDPrefab.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CityBLDPrefab.h" },
		{ "ToolTip", "CityBLD-specific prefab actor.\nCurrently a thin wrapper around AWorldBLDPrefab for future CityBLD extensions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[] = {
		{ "Category", "CityBLD|Prefab" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CityBLDPrefab.h" },
		{ "ToolTip", "Authoritative prefab footprint used for parcel fitting. Author extents/offset in the prefab BP. X=depth (forward), Y=width (right)." },
	};
#endif // WITH_METADATA

// ********** Begin Class ACityBLDPrefab constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundingBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ACityBLDPrefab constinit property declarations *****************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACityBLDPrefab>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ACityBLDPrefab Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ACityBLDPrefab, BoundingBox), Z_Construct_UClass_UBoxComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundingBox_MetaData), NewProp_BoundingBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoundingBox,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ACityBLDPrefab Property Definitions ****************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AWorldBLDPrefab,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ACityBLDPrefab,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_ACityBLDPrefab;
UClass* Z_Construct_UClass_ACityBLDPrefab(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ACityBLDPrefab;
		if (!Z_Registration_Info_UClass_ACityBLDPrefab.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CityBLDPrefab"),
				Z_Registration_Info_UClass_ACityBLDPrefab.InnerSingleton,
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
		return Z_Registration_Info_UClass_ACityBLDPrefab.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ACityBLDPrefab.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACityBLDPrefab.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ACityBLDPrefab.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ACityBLDPrefab);
ACityBLDPrefab::~ACityBLDPrefab() {}
// ********** End Class ACityBLDPrefab *************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBLDPrefab_h__Script_CityBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACityBLDPrefab, TEXT("ACityBLDPrefab"), &Z_Registration_Info_UClass_ACityBLDPrefab, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACityBLDPrefab), 3071191092U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBLDPrefab_h__Script_CityBLDRuntime_6c6b42abef6d8fcdad7d3b8f1607ad50cff4a7b3{
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
