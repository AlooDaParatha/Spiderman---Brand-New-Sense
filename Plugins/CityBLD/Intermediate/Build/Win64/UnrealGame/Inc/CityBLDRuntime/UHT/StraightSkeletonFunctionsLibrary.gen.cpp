// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StraightSkeletonFunctionsLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeStraightSkeletonFunctionsLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDRuntime(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UStraightSkeletonFunctions(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UStraightSkeletonFunctions(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UStraightSkeletonFunctions ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UStraightSkeletonFunctions_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "StraightSkeletonFunctionsLibrary.h" },
		{ "ModuleRelativePath", "Public/StraightSkeletonFunctionsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UStraightSkeletonFunctions constinit property declarations ***************
// ********** End Class UStraightSkeletonFunctions constinit property declarations *****************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStraightSkeletonFunctions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UStraightSkeletonFunctions,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UStraightSkeletonFunctions;
UClass* Z_Construct_UClass_UStraightSkeletonFunctions(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UStraightSkeletonFunctions;
		if (!Z_Registration_Info_UClass_UStraightSkeletonFunctions.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("StraightSkeletonFunctions"),
				Z_Registration_Info_UClass_UStraightSkeletonFunctions.InnerSingleton,
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
		return Z_Registration_Info_UClass_UStraightSkeletonFunctions.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UStraightSkeletonFunctions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStraightSkeletonFunctions.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UStraightSkeletonFunctions.OuterSingleton;
}
#undef UHT_STATICS
UStraightSkeletonFunctions::UStraightSkeletonFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UStraightSkeletonFunctions);
UStraightSkeletonFunctions::~UStraightSkeletonFunctions() {}
// ********** End Class UStraightSkeletonFunctions *************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_StraightSkeletonFunctionsLibrary_h__Script_CityBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStraightSkeletonFunctions, TEXT("UStraightSkeletonFunctions"), &Z_Registration_Info_UClass_UStraightSkeletonFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStraightSkeletonFunctions), 558124633U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_StraightSkeletonFunctionsLibrary_h__Script_CityBLDRuntime_5dd5c57cd13a1676052a5c0fd654eecfb8dc1e6e{
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
