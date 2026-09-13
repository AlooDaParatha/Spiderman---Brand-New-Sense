// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StaticMeshRotateAssetActionUtility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeStaticMeshRotateAssetActionUtility() {}

// ********** Begin Cross Module References ********************************************************
BLUTILITY_API UClass* Z_Construct_UClass_UAssetActionUtility(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UStaticMeshRotateAssetActionUtility(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UStaticMeshRotateAssetActionUtility(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UStaticMeshRotateAssetActionUtility Function RotateSelectedStaticMeshes **
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStaticMeshRotateAssetActionUtility_RotateSelectedStaticMeshes_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "CityBLD|Static Mesh" },
		{ "Comment", "/** Rotate the geometry of selected StaticMesh assets around their origin by a chosen axis and angle.\n\x09 *  Bakes the rotation directly into mesh vertex data, collision shapes, and sockets. No reimport required. */" },
		{ "ModuleRelativePath", "Public/StaticMeshRotateAssetActionUtility.h" },
		{ "ToolTip", "Rotate the geometry of selected StaticMesh assets around their origin by a chosen axis and angle.\nBakes the rotation directly into mesh vertex data, collision shapes, and sockets. No reimport required." },
	};
#endif // WITH_METADATA

// ********** Begin Function RotateSelectedStaticMeshes constinit property declarations ************
// ********** End Function RotateSelectedStaticMeshes constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStaticMeshRotateAssetActionUtility, nullptr, "RotateSelectedStaticMeshes", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UStaticMeshRotateAssetActionUtility_RotateSelectedStaticMeshes(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStaticMeshRotateAssetActionUtility::execRotateSelectedStaticMeshes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RotateSelectedStaticMeshes();
	P_NATIVE_END;
}
// ********** End Class UStaticMeshRotateAssetActionUtility Function RotateSelectedStaticMeshes ****

// ********** Begin Class UStaticMeshRotateAssetActionUtility **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UStaticMeshRotateAssetActionUtility_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "StaticMeshRotateAssetActionUtility.h" },
		{ "ModuleRelativePath", "Public/StaticMeshRotateAssetActionUtility.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UStaticMeshRotateAssetActionUtility constinit property declarations ******
// ********** End Class UStaticMeshRotateAssetActionUtility constinit property declarations ********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RotateSelectedStaticMeshes"), .Pointer = &UStaticMeshRotateAssetActionUtility::execRotateSelectedStaticMeshes },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStaticMeshRotateAssetActionUtility_RotateSelectedStaticMeshes, "RotateSelectedStaticMeshes" }, // 7551219c3c01fb683193e0f056395594c652d9fc
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMeshRotateAssetActionUtility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAssetActionUtility,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UStaticMeshRotateAssetActionUtility,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UStaticMeshRotateAssetActionUtility_StaticRegisterNativesUStaticMeshRotateAssetActionUtility()
{
	UClass* Class = UStaticMeshRotateAssetActionUtility::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStaticMeshRotateAssetActionUtility;
UClass* Z_Construct_UClass_UStaticMeshRotateAssetActionUtility(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UStaticMeshRotateAssetActionUtility;
		if (!Z_Registration_Info_UClass_UStaticMeshRotateAssetActionUtility.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("StaticMeshRotateAssetActionUtility"),
				Z_Registration_Info_UClass_UStaticMeshRotateAssetActionUtility.InnerSingleton,
				UStaticMeshRotateAssetActionUtility_StaticRegisterNativesUStaticMeshRotateAssetActionUtility,
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
		return Z_Registration_Info_UClass_UStaticMeshRotateAssetActionUtility.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UStaticMeshRotateAssetActionUtility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaticMeshRotateAssetActionUtility.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UStaticMeshRotateAssetActionUtility.OuterSingleton;
}
#undef UHT_STATICS
UStaticMeshRotateAssetActionUtility::UStaticMeshRotateAssetActionUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UStaticMeshRotateAssetActionUtility);
UStaticMeshRotateAssetActionUtility::~UStaticMeshRotateAssetActionUtility() {}
// ********** End Class UStaticMeshRotateAssetActionUtility ****************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_StaticMeshRotateAssetActionUtility_h__Script_CityBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStaticMeshRotateAssetActionUtility, TEXT("UStaticMeshRotateAssetActionUtility"), &Z_Registration_Info_UClass_UStaticMeshRotateAssetActionUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaticMeshRotateAssetActionUtility), 665160228U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_StaticMeshRotateAssetActionUtility_h__Script_CityBLDEditor_b5305a57362d915370cf4604221648d89638bc6d{
	TEXT("/Script/CityBLDEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
