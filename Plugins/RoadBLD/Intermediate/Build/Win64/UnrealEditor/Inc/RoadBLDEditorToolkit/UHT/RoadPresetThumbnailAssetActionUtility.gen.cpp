// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoadPresetThumbnailAssetActionUtility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRoadPresetThumbnailAssetActionUtility() {}

// ********** Begin Cross Module References ********************************************************
BLUTILITY_API UClass* Z_Construct_UClass_UAssetActionUtility(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadPresetThumbnailAssetActionUtility(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadPresetThumbnailAssetActionUtility(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class URoadPresetThumbnailAssetActionUtility Function CaptureViewportAsPresetThumbnail 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadPresetThumbnailAssetActionUtility_CaptureViewportAsPresetThumbnail_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "RoadBLD|Thumbnails" },
		{ "ModuleRelativePath", "Public/RoadPresetThumbnailAssetActionUtility.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CaptureViewportAsPresetThumbnail constinit property declarations ******
// ********** End Function CaptureViewportAsPresetThumbnail constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadPresetThumbnailAssetActionUtility, nullptr, "CaptureViewportAsPresetThumbnail", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URoadPresetThumbnailAssetActionUtility_CaptureViewportAsPresetThumbnail(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadPresetThumbnailAssetActionUtility::execCaptureViewportAsPresetThumbnail)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CaptureViewportAsPresetThumbnail();
	P_NATIVE_END;
}
// ********** End Class URoadPresetThumbnailAssetActionUtility Function CaptureViewportAsPresetThumbnail 

// ********** Begin Class URoadPresetThumbnailAssetActionUtility ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoadPresetThumbnailAssetActionUtility_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * Captures the active level viewport and applies it as PresetImage for selected road preset assets.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "RoadPresetThumbnailAssetActionUtility.h" },
		{ "ModuleRelativePath", "Public/RoadPresetThumbnailAssetActionUtility.h" },
		{ "ToolTip", "Captures the active level viewport and applies it as PresetImage for selected road preset assets." },
	};
#endif // WITH_METADATA

// ********** Begin Class URoadPresetThumbnailAssetActionUtility constinit property declarations ***
// ********** End Class URoadPresetThumbnailAssetActionUtility constinit property declarations *****
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CaptureViewportAsPresetThumbnail"), .Pointer = &URoadPresetThumbnailAssetActionUtility::execCaptureViewportAsPresetThumbnail },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URoadPresetThumbnailAssetActionUtility_CaptureViewportAsPresetThumbnail, "CaptureViewportAsPresetThumbnail" }, // c9f31194b3eda4c5d72372a2f4610283018d50ea
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadPresetThumbnailAssetActionUtility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAssetActionUtility,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoadPresetThumbnailAssetActionUtility,
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
static void URoadPresetThumbnailAssetActionUtility_StaticRegisterNativesURoadPresetThumbnailAssetActionUtility()
{
	UClass* Class = URoadPresetThumbnailAssetActionUtility::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URoadPresetThumbnailAssetActionUtility;
UClass* Z_Construct_UClass_URoadPresetThumbnailAssetActionUtility(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoadPresetThumbnailAssetActionUtility;
		if (!Z_Registration_Info_UClass_URoadPresetThumbnailAssetActionUtility.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadPresetThumbnailAssetActionUtility"),
				Z_Registration_Info_UClass_URoadPresetThumbnailAssetActionUtility.InnerSingleton,
				URoadPresetThumbnailAssetActionUtility_StaticRegisterNativesURoadPresetThumbnailAssetActionUtility,
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
		return Z_Registration_Info_UClass_URoadPresetThumbnailAssetActionUtility.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoadPresetThumbnailAssetActionUtility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoadPresetThumbnailAssetActionUtility.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoadPresetThumbnailAssetActionUtility.OuterSingleton;
}
#undef UHT_STATICS
URoadPresetThumbnailAssetActionUtility::URoadPresetThumbnailAssetActionUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoadPresetThumbnailAssetActionUtility);
URoadPresetThumbnailAssetActionUtility::~URoadPresetThumbnailAssetActionUtility() {}
// ********** End Class URoadPresetThumbnailAssetActionUtility *************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadPresetThumbnailAssetActionUtility_h__Script_RoadBLDEditorToolkit_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoadPresetThumbnailAssetActionUtility, TEXT("URoadPresetThumbnailAssetActionUtility"), &Z_Registration_Info_UClass_URoadPresetThumbnailAssetActionUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoadPresetThumbnailAssetActionUtility), 3972114455U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadPresetThumbnailAssetActionUtility_h__Script_RoadBLDEditorToolkit_24a9e5e0741530d2a4ff2dbef5c49217b936518a{
	TEXT("/Script/RoadBLDEditorToolkit"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
