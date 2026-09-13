// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoadPresetThumbnailGenerator.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRoadPresetThumbnailGenerator() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UTexture2D(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadDrawPreset(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadPresetThumbnailGenerator(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadPresetThumbnailGenerator(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class URoadPresetThumbnailGenerator Function CaptureViewportThumbnailForPreset *
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadPresetThumbnailGenerator_CaptureViewportThumbnailForPreset_Statics
struct UHT_STATICS
{
	struct RoadPresetThumbnailGenerator_eventCaptureViewportThumbnailForPreset_Parms
	{
		TSubclassOf<UDynamicRoadDrawPreset> PresetClass;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Thumbnails" },
		{ "Comment", "/**\n\x09 * Captures the active editor viewport and applies it as the thumbnail texture for the given preset.\n\x09 *\n\x09 * @param PresetClass - The road preset Blueprint class to update\n\x09 * @return The saved thumbnail texture, or nullptr if capture/apply failed\n\x09 */" },
		{ "ModuleRelativePath", "Public/RoadPresetThumbnailGenerator.h" },
		{ "ToolTip", "Captures the active editor viewport and applies it as the thumbnail texture for the given preset.\n\n@param PresetClass - The road preset Blueprint class to update\n@return The saved thumbnail texture, or nullptr if capture/apply failed" },
	};
#endif // WITH_METADATA

// ********** Begin Function CaptureViewportThumbnailForPreset constinit property declarations *****
	static const UECodeGen_Private::FClassPropertyParams NewProp_PresetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CaptureViewportThumbnailForPreset constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CaptureViewportThumbnailForPreset Property Definitions ****************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_PresetClass = { "PresetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(RoadPresetThumbnailGenerator_eventCaptureViewportThumbnailForPreset_Parms, PresetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDynamicRoadDrawPreset, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadPresetThumbnailGenerator_eventCaptureViewportThumbnailForPreset_Parms, ReturnValue), Z_Construct_UClass_UTexture2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PresetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CaptureViewportThumbnailForPreset Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadPresetThumbnailGenerator, nullptr, "CaptureViewportThumbnailForPreset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadPresetThumbnailGenerator_eventCaptureViewportThumbnailForPreset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadPresetThumbnailGenerator_eventCaptureViewportThumbnailForPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadPresetThumbnailGenerator_CaptureViewportThumbnailForPreset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadPresetThumbnailGenerator::execCaptureViewportThumbnailForPreset)
{
	P_GET_OBJECT(UClass,Z_Param_PresetClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=URoadPresetThumbnailGenerator::CaptureViewportThumbnailForPreset(Z_Param_PresetClass);
	P_NATIVE_END;
}
// ********** End Class URoadPresetThumbnailGenerator Function CaptureViewportThumbnailForPreset ***

// ********** Begin Class URoadPresetThumbnailGenerator Function GenerateThumbnailForPreset ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadPresetThumbnailGenerator_GenerateThumbnailForPreset_Statics
struct UHT_STATICS
{
	struct RoadPresetThumbnailGenerator_eventGenerateThumbnailForPreset_Parms
	{
		TSubclassOf<UDynamicRoadDrawPreset> PresetClass;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Thumbnails" },
		{ "Comment", "/**\n\x09 * Generates a thumbnail image for a single road preset and saves it beside the preset asset.\n\x09 * \n\x09 * @param PresetClass - The road preset Blueprint class to generate a thumbnail for\n\x09 * @return The generated thumbnail texture, or nullptr if generation failed\n\x09 */" },
		{ "ModuleRelativePath", "Public/RoadPresetThumbnailGenerator.h" },
		{ "ToolTip", "Generates a thumbnail image for a single road preset and saves it beside the preset asset.\n\n@param PresetClass - The road preset Blueprint class to generate a thumbnail for\n@return The generated thumbnail texture, or nullptr if generation failed" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateThumbnailForPreset constinit property declarations ************
	static const UECodeGen_Private::FClassPropertyParams NewProp_PresetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateThumbnailForPreset constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateThumbnailForPreset Property Definitions ***********************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_PresetClass = { "PresetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(RoadPresetThumbnailGenerator_eventGenerateThumbnailForPreset_Parms, PresetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDynamicRoadDrawPreset, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadPresetThumbnailGenerator_eventGenerateThumbnailForPreset_Parms, ReturnValue), Z_Construct_UClass_UTexture2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PresetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GenerateThumbnailForPreset Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadPresetThumbnailGenerator, nullptr, "GenerateThumbnailForPreset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadPresetThumbnailGenerator_eventGenerateThumbnailForPreset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadPresetThumbnailGenerator_eventGenerateThumbnailForPreset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadPresetThumbnailGenerator_GenerateThumbnailForPreset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadPresetThumbnailGenerator::execGenerateThumbnailForPreset)
{
	P_GET_OBJECT(UClass,Z_Param_PresetClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=URoadPresetThumbnailGenerator::GenerateThumbnailForPreset(Z_Param_PresetClass);
	P_NATIVE_END;
}
// ********** End Class URoadPresetThumbnailGenerator Function GenerateThumbnailForPreset **********

// ********** Begin Class URoadPresetThumbnailGenerator Function GenerateThumbnailsForAllPresets ***
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadPresetThumbnailGenerator_GenerateThumbnailsForAllPresets_Statics
struct UHT_STATICS
{
	struct RoadPresetThumbnailGenerator_eventGenerateThumbnailsForAllPresets_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Thumbnails" },
		{ "Comment", "/**\n\x09 * Generates thumbnails for all road presets found in the project.\n\x09 * Discovers all UDynamicRoadDrawPreset blueprint assets and generates thumbnails for each.\n\x09 * \n\x09 * @return The number of thumbnails successfully generated\n\x09 */" },
		{ "ModuleRelativePath", "Public/RoadPresetThumbnailGenerator.h" },
		{ "ToolTip", "Generates thumbnails for all road presets found in the project.\nDiscovers all UDynamicRoadDrawPreset blueprint assets and generates thumbnails for each.\n\n@return The number of thumbnails successfully generated" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateThumbnailsForAllPresets constinit property declarations *******
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateThumbnailsForAllPresets constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateThumbnailsForAllPresets Property Definitions ******************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RoadPresetThumbnailGenerator_eventGenerateThumbnailsForAllPresets_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GenerateThumbnailsForAllPresets Property Definitions ********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadPresetThumbnailGenerator, nullptr, "GenerateThumbnailsForAllPresets", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadPresetThumbnailGenerator_eventGenerateThumbnailsForAllPresets_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadPresetThumbnailGenerator_eventGenerateThumbnailsForAllPresets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadPresetThumbnailGenerator_GenerateThumbnailsForAllPresets(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadPresetThumbnailGenerator::execGenerateThumbnailsForAllPresets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=URoadPresetThumbnailGenerator::GenerateThumbnailsForAllPresets();
	P_NATIVE_END;
}
// ********** End Class URoadPresetThumbnailGenerator Function GenerateThumbnailsForAllPresets *****

// ********** Begin Class URoadPresetThumbnailGenerator ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoadPresetThumbnailGenerator_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * Blueprint Function Library for generating thumbnail images for road presets.\n * Automatically creates preview images by spawning temporary roads and rendering them.\n */" },
		{ "IncludePath", "RoadPresetThumbnailGenerator.h" },
		{ "ModuleRelativePath", "Public/RoadPresetThumbnailGenerator.h" },
		{ "ToolTip", "Blueprint Function Library for generating thumbnail images for road presets.\nAutomatically creates preview images by spawning temporary roads and rendering them." },
	};
#endif // WITH_METADATA

// ********** Begin Class URoadPresetThumbnailGenerator constinit property declarations ************
// ********** End Class URoadPresetThumbnailGenerator constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CaptureViewportThumbnailForPreset"), .Pointer = &URoadPresetThumbnailGenerator::execCaptureViewportThumbnailForPreset },
		{ .NameUTF8 = UTF8TEXT("GenerateThumbnailForPreset"), .Pointer = &URoadPresetThumbnailGenerator::execGenerateThumbnailForPreset },
		{ .NameUTF8 = UTF8TEXT("GenerateThumbnailsForAllPresets"), .Pointer = &URoadPresetThumbnailGenerator::execGenerateThumbnailsForAllPresets },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URoadPresetThumbnailGenerator_CaptureViewportThumbnailForPreset, "CaptureViewportThumbnailForPreset" }, // 4019dc2bb2834707c5324b7aa6df167030079aaf
		{ &Z_Construct_UFunction_URoadPresetThumbnailGenerator_GenerateThumbnailForPreset, "GenerateThumbnailForPreset" }, // 224ef2a40a62254e67ead0bfbfe67976555aceda
		{ &Z_Construct_UFunction_URoadPresetThumbnailGenerator_GenerateThumbnailsForAllPresets, "GenerateThumbnailsForAllPresets" }, // 623dd321ec6fe6c70dfdc5bc26249579afb97c7c
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadPresetThumbnailGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoadPresetThumbnailGenerator,
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
static void URoadPresetThumbnailGenerator_StaticRegisterNativesURoadPresetThumbnailGenerator()
{
	UClass* Class = URoadPresetThumbnailGenerator::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URoadPresetThumbnailGenerator;
UClass* Z_Construct_UClass_URoadPresetThumbnailGenerator(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoadPresetThumbnailGenerator;
		if (!Z_Registration_Info_UClass_URoadPresetThumbnailGenerator.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadPresetThumbnailGenerator"),
				Z_Registration_Info_UClass_URoadPresetThumbnailGenerator.InnerSingleton,
				URoadPresetThumbnailGenerator_StaticRegisterNativesURoadPresetThumbnailGenerator,
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
		return Z_Registration_Info_UClass_URoadPresetThumbnailGenerator.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoadPresetThumbnailGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoadPresetThumbnailGenerator.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoadPresetThumbnailGenerator.OuterSingleton;
}
#undef UHT_STATICS
URoadPresetThumbnailGenerator::URoadPresetThumbnailGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoadPresetThumbnailGenerator);
URoadPresetThumbnailGenerator::~URoadPresetThumbnailGenerator() {}
// ********** End Class URoadPresetThumbnailGenerator **********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadPresetThumbnailGenerator_h__Script_RoadBLDEditorToolkit_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoadPresetThumbnailGenerator, TEXT("URoadPresetThumbnailGenerator"), &Z_Registration_Info_UClass_URoadPresetThumbnailGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoadPresetThumbnailGenerator), 3328581437U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadPresetThumbnailGenerator_h__Script_RoadBLDEditorToolkit_26f14ec7887d9638b9a847e3467fdbacd162616e{
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
