// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingStyleHLODMaterialAssetActionUtility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeBuildingStyleHLODMaterialAssetActionUtility() {}

// ********** Begin Cross Module References ********************************************************
BLUTILITY_API UClass* Z_Construct_UClass_UAssetActionUtility(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingStyleHLODMaterialAssetActionUtility(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingStyleHLODMaterialAssetActionUtility(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UBuildingStyleHLODMaterialAssetActionUtility Function BakeHLODMaterial ***
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UBuildingStyleHLODMaterialAssetActionUtility_BakeHLODMaterial_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "CityBLD|HLOD" },
		{ "ModuleRelativePath", "Public/BuildingStyleHLODMaterialAssetActionUtility.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function BakeHLODMaterial constinit property declarations **********************
// ********** End Function BakeHLODMaterial constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UBuildingStyleHLODMaterialAssetActionUtility, nullptr, "BakeHLODMaterial", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UBuildingStyleHLODMaterialAssetActionUtility_BakeHLODMaterial(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UBuildingStyleHLODMaterialAssetActionUtility::execBakeHLODMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BakeHLODMaterial();
	P_NATIVE_END;
}
// ********** End Class UBuildingStyleHLODMaterialAssetActionUtility Function BakeHLODMaterial *****

// ********** Begin Class UBuildingStyleHLODMaterialAssetActionUtility *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UBuildingStyleHLODMaterialAssetActionUtility_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * Content Browser action for UBuildingStyle subclasses: bake a shared HLOD material\n * (base color + optional normal map) from a temporary preview building.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "BuildingStyleHLODMaterialAssetActionUtility.h" },
		{ "ModuleRelativePath", "Public/BuildingStyleHLODMaterialAssetActionUtility.h" },
		{ "ToolTip", "Content Browser action for UBuildingStyle subclasses: bake a shared HLOD material\n(base color + optional normal map) from a temporary preview building." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[] = {
		{ "Category", "CityBLD|HLOD" },
		{ "ClampMax", "8192" },
		{ "ClampMin", "16" },
		{ "Comment", "/** Pixel resolution of the generated proxy textures. */" },
		{ "ModuleRelativePath", "Public/BuildingStyleHLODMaterialAssetActionUtility.h" },
		{ "ToolTip", "Pixel resolution of the generated proxy textures." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderCaptureResolution_MetaData[] = {
		{ "Category", "CityBLD|HLOD" },
		{ "ClampMax", "8192" },
		{ "ClampMin", "64" },
		{ "Comment", "/** Pixel resolution of the intermediate render-capture photo set. */" },
		{ "ModuleRelativePath", "Public/BuildingStyleHLODMaterialAssetActionUtility.h" },
		{ "ToolTip", "Pixel resolution of the intermediate render-capture photo set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBakeNormalMap_MetaData[] = {
		{ "Category", "CityBLD|HLOD" },
		{ "Comment", "/** If enabled, also bake a world-space normal map. */" },
		{ "ModuleRelativePath", "Public/BuildingStyleHLODMaterialAssetActionUtility.h" },
		{ "ToolTip", "If enabled, also bake a world-space normal map." },
	};
#endif // WITH_METADATA

// ********** Begin Class UBuildingStyleHLODMaterialAssetActionUtility constinit property declarations 
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RenderCaptureResolution;
	static void NewProp_bBakeNormalMap_SetBit(void* Obj)
	{
		((UBuildingStyleHLODMaterialAssetActionUtility*)Obj)->bBakeNormalMap = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeNormalMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBuildingStyleHLODMaterialAssetActionUtility constinit property declarations 
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BakeHLODMaterial"), .Pointer = &UBuildingStyleHLODMaterialAssetActionUtility::execBakeHLODMaterial },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBuildingStyleHLODMaterialAssetActionUtility_BakeHLODMaterial, "BakeHLODMaterial" }, // d3f858975c767435dcc2e6c70a565b70f345145a
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildingStyleHLODMaterialAssetActionUtility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UBuildingStyleHLODMaterialAssetActionUtility Property Definitions ********
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_TextureSize = { "TextureSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingStyleHLODMaterialAssetActionUtility, TextureSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureSize_MetaData), NewProp_TextureSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_RenderCaptureResolution = { "RenderCaptureResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingStyleHLODMaterialAssetActionUtility, RenderCaptureResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderCaptureResolution_MetaData), NewProp_RenderCaptureResolution_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bBakeNormalMap = { "bBakeNormalMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UBuildingStyleHLODMaterialAssetActionUtility), &UHT_STATICS::NewProp_bBakeNormalMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBakeNormalMap_MetaData), NewProp_bBakeNormalMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RenderCaptureResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bBakeNormalMap,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UBuildingStyleHLODMaterialAssetActionUtility Property Definitions **********
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAssetActionUtility,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UBuildingStyleHLODMaterialAssetActionUtility,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UBuildingStyleHLODMaterialAssetActionUtility_StaticRegisterNativesUBuildingStyleHLODMaterialAssetActionUtility()
{
	UClass* Class = UBuildingStyleHLODMaterialAssetActionUtility::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBuildingStyleHLODMaterialAssetActionUtility;
UClass* Z_Construct_UClass_UBuildingStyleHLODMaterialAssetActionUtility(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UBuildingStyleHLODMaterialAssetActionUtility;
		if (!Z_Registration_Info_UClass_UBuildingStyleHLODMaterialAssetActionUtility.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("BuildingStyleHLODMaterialAssetActionUtility"),
				Z_Registration_Info_UClass_UBuildingStyleHLODMaterialAssetActionUtility.InnerSingleton,
				UBuildingStyleHLODMaterialAssetActionUtility_StaticRegisterNativesUBuildingStyleHLODMaterialAssetActionUtility,
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
		return Z_Registration_Info_UClass_UBuildingStyleHLODMaterialAssetActionUtility.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UBuildingStyleHLODMaterialAssetActionUtility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildingStyleHLODMaterialAssetActionUtility.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuildingStyleHLODMaterialAssetActionUtility.OuterSingleton;
}
#undef UHT_STATICS
UBuildingStyleHLODMaterialAssetActionUtility::UBuildingStyleHLODMaterialAssetActionUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBuildingStyleHLODMaterialAssetActionUtility);
UBuildingStyleHLODMaterialAssetActionUtility::~UBuildingStyleHLODMaterialAssetActionUtility() {}
// ********** End Class UBuildingStyleHLODMaterialAssetActionUtility *******************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BuildingStyleHLODMaterialAssetActionUtility_h__Script_CityBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBuildingStyleHLODMaterialAssetActionUtility, TEXT("UBuildingStyleHLODMaterialAssetActionUtility"), &Z_Registration_Info_UClass_UBuildingStyleHLODMaterialAssetActionUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildingStyleHLODMaterialAssetActionUtility), 2276545778U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BuildingStyleHLODMaterialAssetActionUtility_h__Script_CityBLDEditor_eceb9edcc0f255fe5c68d4e7e9245c719eac0817{
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
