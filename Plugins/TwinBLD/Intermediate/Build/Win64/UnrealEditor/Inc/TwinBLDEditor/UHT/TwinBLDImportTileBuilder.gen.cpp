// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwinBLDImportTileBuilder.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeTwinBLDImportTileBuilder() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDImportTileBuilder(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDImportTileBuilder(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UTwinBLDImportTileBuilder ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UTwinBLDImportTileBuilder_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "TwinBLDImportTileBuilder.h" },
		{ "ModuleRelativePath", "Public/TwinBLDImportTileBuilder.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTwinBLDImportTileBuilder constinit property declarations ****************
// ********** End Class UTwinBLDImportTileBuilder constinit property declarations ******************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinBLDImportTileBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UTwinBLDImportTileBuilder,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UTwinBLDImportTileBuilder;
UClass* Z_Construct_UClass_UTwinBLDImportTileBuilder(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UTwinBLDImportTileBuilder;
		if (!Z_Registration_Info_UClass_UTwinBLDImportTileBuilder.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("TwinBLDImportTileBuilder"),
				Z_Registration_Info_UClass_UTwinBLDImportTileBuilder.InnerSingleton,
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
		return Z_Registration_Info_UClass_UTwinBLDImportTileBuilder.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UTwinBLDImportTileBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTwinBLDImportTileBuilder.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UTwinBLDImportTileBuilder.OuterSingleton;
}
#undef UHT_STATICS
UTwinBLDImportTileBuilder::UTwinBLDImportTileBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTwinBLDImportTileBuilder);
UTwinBLDImportTileBuilder::~UTwinBLDImportTileBuilder() {}
// ********** End Class UTwinBLDImportTileBuilder **************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDImportTileBuilder_h__Script_TwinBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTwinBLDImportTileBuilder, TEXT("UTwinBLDImportTileBuilder"), &Z_Registration_Info_UClass_UTwinBLDImportTileBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTwinBLDImportTileBuilder), 347581187U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDImportTileBuilder_h__Script_TwinBLDEditor_f3c16bed5ddb8a88079d7eef2247f28f13302568{
	TEXT("/Script/TwinBLDEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
