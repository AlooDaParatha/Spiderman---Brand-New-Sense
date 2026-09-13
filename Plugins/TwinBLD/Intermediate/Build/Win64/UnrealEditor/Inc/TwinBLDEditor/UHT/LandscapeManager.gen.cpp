// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeLandscapeManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntRect(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape(ETypeConstructPhase);
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeComponent(ETypeConstructPhase);
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase);
TWINBLDEDITOR_API UEnum* Z_Construct_UEnum_TwinBLDEditor_EHeightmapResampleMethod(ETypeConstructPhase);
TWINBLDEDITOR_API UEnum* Z_Construct_UEnum_TwinBLDEditor_ELandscapeSectionSize(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_ULandscapeManager(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeParameters(ETypeConstructPhase);
TWINBLDEDITOR_API UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnGenerateLandscapeComplete__DelegateSignature(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDLandscapeTileResult(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UHeightMapProvider(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_ULandscapeManager(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FTwinBLDLandscapeTileResult ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FTwinBLDLandscapeTileResult_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FTwinBLDLandscapeTileResult>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FTwinBLDLandscapeTileResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Landscape_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryProxy_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchedProxies_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchedComponents_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FTwinBLDLandscapeTileResult constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Landscape;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimaryProxy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedProxies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TouchedProxies;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchedComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TouchedComponents;
	static void NewProp_bSuccess_SetBit(void* Obj)
	{
		((FTwinBLDLandscapeTileResult*)Obj)->bSuccess = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FTwinBLDLandscapeTileResult constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwinBLDLandscapeTileResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FTwinBLDLandscapeTileResult Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Landscape = { "Landscape", nullptr, (EPropertyFlags)0x0114000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDLandscapeTileResult, Landscape), Z_Construct_UClass_ALandscape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Landscape_MetaData), NewProp_Landscape_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PrimaryProxy = { "PrimaryProxy", nullptr, (EPropertyFlags)0x0114000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDLandscapeTileResult, PrimaryProxy), Z_Construct_UClass_ALandscapeProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryProxy_MetaData), NewProp_PrimaryProxy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TouchedProxies_Inner = { "TouchedProxies", nullptr, (EPropertyFlags)0x0104000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_ALandscapeProxy, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_TouchedProxies = { "TouchedProxies", nullptr, (EPropertyFlags)0x0114000000020015, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDLandscapeTileResult, TouchedProxies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchedProxies_MetaData), NewProp_TouchedProxies_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TouchedComponents_Inner = { "TouchedComponents", nullptr, (EPropertyFlags)0x01040000000a0008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_TouchedComponents = { "TouchedComponents", nullptr, (EPropertyFlags)0x011400800002001d, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDLandscapeTileResult, TouchedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchedComponents_MetaData), NewProp_TouchedComponents_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDLandscapeTileResult), &UHT_STATICS::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Landscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PrimaryProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TouchedProxies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TouchedProxies,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TouchedComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TouchedComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FTwinBLDLandscapeTileResult Property Definitions ********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"TwinBLDLandscapeTileResult",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FTwinBLDLandscapeTileResult>(),
	alignof(FTwinBLDLandscapeTileResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTwinBLDLandscapeTileResult;
UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDLandscapeTileResult(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FTwinBLDLandscapeTileResult.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FTwinBLDLandscapeTileResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwinBLDLandscapeTileResult, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("TwinBLDLandscapeTileResult"));
		}
		return Z_Registration_Info_UScriptStruct_FTwinBLDLandscapeTileResult.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FTwinBLDLandscapeTileResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTwinBLDLandscapeTileResult.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FTwinBLDLandscapeTileResult.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FTwinBLDLandscapeTileResult *****************************************

// ********** Begin Delegate FOnGenerateLandscapeComplete ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_TwinBLDEditor_OnGenerateLandscapeComplete__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_TwinBLDEditor_eventOnGenerateLandscapeComplete_Parms
	{
		FTwinBLDLandscapeTileResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGenerateLandscapeComplete constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGenerateLandscapeComplete constinit property declarations ************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGenerateLandscapeComplete Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TwinBLDEditor_eventOnGenerateLandscapeComplete_Parms, Result), Z_Construct_UScriptStruct_FTwinBLDLandscapeTileResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 0b6277c99f784cd5b5ade692ca6e9d0558c02843
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnGenerateLandscapeComplete Property Definitions ***********************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor, nullptr, "OnGenerateLandscapeComplete__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_TwinBLDEditor_eventOnGenerateLandscapeComplete_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_TwinBLDEditor_eventOnGenerateLandscapeComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnGenerateLandscapeComplete__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnGenerateLandscapeComplete ********************************************

// ********** Begin Enum ELandscapeSectionSize *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_TwinBLDEditor_ELandscapeSectionSize_Statics
template<> TWINBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeSectionSize>()
{
	return Z_Construct_UEnum_TwinBLDEditor_ELandscapeSectionSize(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Valid section sizes in quads for Unreal Engine landscapes.\n// Section size must be (power-of-2) - 1 for proper LOD mipmap storage.\n" },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
		{ "Quads_0.Name", "ELandscapeSectionSize::Quads_0" },
		{ "Quads_127.DisplayName", "127x127 Quads" },
		{ "Quads_127.Name", "ELandscapeSectionSize::Quads_127" },
		{ "Quads_15.DisplayName", "15x15 Quads" },
		{ "Quads_15.Name", "ELandscapeSectionSize::Quads_15" },
		{ "Quads_255.DisplayName", "255x255 Quads" },
		{ "Quads_255.Name", "ELandscapeSectionSize::Quads_255" },
		{ "Quads_31.DisplayName", "31x31 Quads" },
		{ "Quads_31.Name", "ELandscapeSectionSize::Quads_31" },
		{ "Quads_63.DisplayName", "63x63 Quads" },
		{ "Quads_63.Name", "ELandscapeSectionSize::Quads_63" },
		{ "Quads_7.DisplayName", "7x7 Quads" },
		{ "Quads_7.Name", "ELandscapeSectionSize::Quads_7" },
		{ "ToolTip", "Valid section sizes in quads for Unreal Engine landscapes.\nSection size must be (power-of-2) - 1 for proper LOD mipmap storage." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELandscapeSectionSize::Quads_0", (int64)ELandscapeSectionSize::Quads_0 },
		{ "ELandscapeSectionSize::Quads_7", (int64)ELandscapeSectionSize::Quads_7 },
		{ "ELandscapeSectionSize::Quads_15", (int64)ELandscapeSectionSize::Quads_15 },
		{ "ELandscapeSectionSize::Quads_31", (int64)ELandscapeSectionSize::Quads_31 },
		{ "ELandscapeSectionSize::Quads_63", (int64)ELandscapeSectionSize::Quads_63 },
		{ "ELandscapeSectionSize::Quads_127", (int64)ELandscapeSectionSize::Quads_127 },
		{ "ELandscapeSectionSize::Quads_255", (int64)ELandscapeSectionSize::Quads_255 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	"ELandscapeSectionSize",
	"ELandscapeSectionSize",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ELandscapeSectionSize;
UEnum* Z_Construct_UEnum_TwinBLDEditor_ELandscapeSectionSize(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ELandscapeSectionSize.OuterSingleton)
		{
			ZRIE_ELandscapeSectionSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TwinBLDEditor_ELandscapeSectionSize, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("ELandscapeSectionSize"));
		}
		return ZRIE_ELandscapeSectionSize.OuterSingleton;
	}
	if (!ZRIE_ELandscapeSectionSize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ELandscapeSectionSize.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ELandscapeSectionSize.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ELandscapeSectionSize *******************************************************

// ********** Begin Enum EHeightmapResampleMethod **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_TwinBLDEditor_EHeightmapResampleMethod_Statics
template<> TWINBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EHeightmapResampleMethod>()
{
	return Z_Construct_UEnum_TwinBLDEditor_EHeightmapResampleMethod(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "EHR_Bicubic.Comment", "// Smooth Catmull-Rom bicubic sampling. Recommended for DEM imports: removes the faceted\n// look caused by stretching coarse elevation data over the 1 m landscape grid.\n" },
		{ "EHR_Bicubic.DisplayName", "Bicubic (Smooth)" },
		{ "EHR_Bicubic.Name", "EHeightmapResampleMethod::EHR_Bicubic" },
		{ "EHR_Bicubic.ToolTip", "Smooth Catmull-Rom bicubic sampling. Recommended for DEM imports: removes the faceted\nlook caused by stretching coarse elevation data over the 1 m landscape grid." },
		{ "EHR_Lanczos.Comment", "// Windowed-sinc resampling (used by the geographic/whole-landscape resample paths).\n" },
		{ "EHR_Lanczos.DisplayName", "Lanczos" },
		{ "EHR_Lanczos.Name", "EHeightmapResampleMethod::EHR_Lanczos" },
		{ "EHR_Lanczos.ToolTip", "Windowed-sinc resampling (used by the geographic/whole-landscape resample paths)." },
		{ "EHR_Nearest.Comment", "// Crisp/blocky bilinear sampling. Keeps source posts faithfully but shows facets when\n// upsampling coarse DEM data onto the dense landscape grid.\n" },
		{ "EHR_Nearest.DisplayName", "Bilinear (Crisp)" },
		{ "EHR_Nearest.Name", "EHeightmapResampleMethod::EHR_Nearest" },
		{ "EHR_Nearest.ToolTip", "Crisp/blocky bilinear sampling. Keeps source posts faithfully but shows facets when\nupsampling coarse DEM data onto the dense landscape grid." },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHeightmapResampleMethod::EHR_Nearest", (int64)EHeightmapResampleMethod::EHR_Nearest },
		{ "EHeightmapResampleMethod::EHR_Lanczos", (int64)EHeightmapResampleMethod::EHR_Lanczos },
		{ "EHeightmapResampleMethod::EHR_Bicubic", (int64)EHeightmapResampleMethod::EHR_Bicubic },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	"EHeightmapResampleMethod",
	"EHeightmapResampleMethod",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EHeightmapResampleMethod;
UEnum* Z_Construct_UEnum_TwinBLDEditor_EHeightmapResampleMethod(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EHeightmapResampleMethod.OuterSingleton)
		{
			ZRIE_EHeightmapResampleMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TwinBLDEditor_EHeightmapResampleMethod, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("EHeightmapResampleMethod"));
		}
		return ZRIE_EHeightmapResampleMethod.OuterSingleton;
	}
	if (!ZRIE_EHeightmapResampleMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EHeightmapResampleMethod.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EHeightmapResampleMethod.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EHeightmapResampleMethod ****************************************************

// ********** Begin ScriptStruct FLandscapeParameters **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FLandscapeParameters_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FLandscapeParameters>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLandscapeParameters); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionQuads_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "Comment", "// Section size in quads. Must be (power-of-2) - 1.\n" },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
		{ "ToolTip", "Section size in quads. Must be (power-of-2) - 1." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionsPerComponent_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ClampMax", "2" },
		{ "ClampMin", "1" },
		{ "Comment", "// Component size in sections. One or two.\n" },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
		{ "ToolTip", "Component size in sections. One or two." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumComponents_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "Comment", "// Landscape/tile size in components\n" },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
		{ "ToolTip", "Landscape/tile size in components" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeMaterial_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "Comment", "// XY scale remains user-controlled. Z scale is derived from MinHeight/MaxHeight\n// or the auto-detected height range when importing DEM heightmaps.\n" },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
		{ "ToolTip", "XY scale remains user-controlled. Z scale is derived from MinHeight/MaxHeight\nor the auto-detected height range when importing DEM heightmaps." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinHeight_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// Lowest absolute elevation represented by the imported landscape height range, in meters above sea level.\n" },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
		{ "ToolTip", "Lowest absolute elevation represented by the imported landscape height range, in meters above sea level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// Highest absolute elevation represented by the imported landscape height range, in meters above sea level.\n" },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
		{ "ToolTip", "Highest absolute elevation represented by the imported landscape height range, in meters above sea level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseVariableActorZLocation_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// When enabled, new landscape roots choose an absolute height range around the source DEM.\n// The MinHeight/MaxHeight span is still used as the minimum vertical capacity.\n" },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
		{ "ToolTip", "When enabled, new landscape roots choose an absolute height range around the source DEM.\nThe MinHeight/MaxHeight span is still used as the minimum vertical capacity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoTightenHeightRange_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// When enabled (with Use Variable Actor Z Location), the auto height range tightens around the\n// actual source DEM range instead of enforcing the MinHeight/MaxHeight span as a floor. This\n// reduces 16-bit vertical quantization (smoother gentle terrain) but a narrower shared range can\n// clip later tiles added to the same landscape if they exceed it. Leave off for multi-session imports.\n" },
		{ "EditCondition", "bUseVariableActorZLocation" },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
		{ "ToolTip", "When enabled (with Use Variable Actor Z Location), the auto height range tightens around the\nactual source DEM range instead of enforcing the MinHeight/MaxHeight span as a floor. This\nreduces 16-bit vertical quantization (smoother gentle terrain) but a narrower shared range can\nclip later tiles added to the same landscape if they exceed it. Leave off for multi-session imports." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResampleMethod_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLandscapeParameters constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionQuads;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SectionsPerComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NumComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHeight;
	static void NewProp_bUseVariableActorZLocation_SetBit(void* Obj)
	{
		((FLandscapeParameters*)Obj)->bUseVariableActorZLocation = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseVariableActorZLocation;
	static void NewProp_bAutoTightenHeightRange_SetBit(void* Obj)
	{
		((FLandscapeParameters*)Obj)->bAutoTightenHeightRange = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoTightenHeightRange;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResampleMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResampleMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLandscapeParameters constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FLandscapeParameters Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SectionQuads = { "SectionQuads", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeParameters, SectionQuads), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionQuads_MetaData), NewProp_SectionQuads_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SectionsPerComponent = { "SectionsPerComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeParameters, SectionsPerComponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionsPerComponent_MetaData), NewProp_SectionsPerComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NumComponents = { "NumComponents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeParameters, NumComponents), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumComponents_MetaData), NewProp_NumComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LandscapeMaterial = { "LandscapeMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeParameters, LandscapeMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeMaterial_MetaData), NewProp_LandscapeMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeParameters, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MinHeight = { "MinHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeParameters, MinHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinHeight_MetaData), NewProp_MinHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeParameters, MaxHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHeight_MetaData), NewProp_MaxHeight_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseVariableActorZLocation = { "bUseVariableActorZLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FLandscapeParameters), &UHT_STATICS::NewProp_bUseVariableActorZLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseVariableActorZLocation_MetaData), NewProp_bUseVariableActorZLocation_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoTightenHeightRange = { "bAutoTightenHeightRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FLandscapeParameters), &UHT_STATICS::NewProp_bAutoTightenHeightRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoTightenHeightRange_MetaData), NewProp_bAutoTightenHeightRange_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ResampleMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ResampleMethod = { "ResampleMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeParameters, ResampleMethod), Z_Construct_UEnum_TwinBLDEditor_EHeightmapResampleMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResampleMethod_MetaData), NewProp_ResampleMethod_MetaData) }; // 9206e51894a87bb14ecedf9af420ab9c2d9c0144
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SectionQuads,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SectionsPerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NumComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapeMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseVariableActorZLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoTightenHeightRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ResampleMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ResampleMethod,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FLandscapeParameters Property Definitions ***************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"LandscapeParameters",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FLandscapeParameters>(),
	alignof(FLandscapeParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLandscapeParameters;
UScriptStruct* Z_Construct_UScriptStruct_FLandscapeParameters(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FLandscapeParameters.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FLandscapeParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeParameters, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("LandscapeParameters"));
		}
		return Z_Registration_Info_UScriptStruct_FLandscapeParameters.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FLandscapeParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLandscapeParameters.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLandscapeParameters.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FLandscapeParameters ************************************************

// ********** Begin Class ULandscapeManager Function AbsoluteMetersToWorldCentimeters **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULandscapeManager_AbsoluteMetersToWorldCentimeters_Statics
struct UHT_STATICS
{
	struct LandscapeManager_eventAbsoluteMetersToWorldCentimeters_Parms
	{
		double AbsoluteMeters;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// TwinBLD landscapes use absolute world Z, with 1 meter = 100 UE centimeters.\n// NAVD88 meter elevations are therefore compatible without a vertical offset.\n" },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
		{ "ToolTip", "TwinBLD landscapes use absolute world Z, with 1 meter = 100 UE centimeters.\nNAVD88 meter elevations are therefore compatible without a vertical offset." },
	};
#endif // WITH_METADATA

// ********** Begin Function AbsoluteMetersToWorldCentimeters constinit property declarations ******
	static const UECodeGen_Private::FDoublePropertyParams NewProp_AbsoluteMeters;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AbsoluteMetersToWorldCentimeters constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AbsoluteMetersToWorldCentimeters Property Definitions *****************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_AbsoluteMeters = { "AbsoluteMeters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeManager_eventAbsoluteMetersToWorldCentimeters_Parms, AbsoluteMeters), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeManager_eventAbsoluteMetersToWorldCentimeters_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AbsoluteMeters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AbsoluteMetersToWorldCentimeters Property Definitions *******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULandscapeManager, nullptr, "AbsoluteMetersToWorldCentimeters", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LandscapeManager_eventAbsoluteMetersToWorldCentimeters_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LandscapeManager_eventAbsoluteMetersToWorldCentimeters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULandscapeManager_AbsoluteMetersToWorldCentimeters(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULandscapeManager::execAbsoluteMetersToWorldCentimeters)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_AbsoluteMeters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=ULandscapeManager::AbsoluteMetersToWorldCentimeters(Z_Param_AbsoluteMeters);
	P_NATIVE_END;
}
// ********** End Class ULandscapeManager Function AbsoluteMetersToWorldCentimeters ****************

// ********** Begin Class ULandscapeManager Function ApplyHeightmap ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULandscapeManager_ApplyHeightmap_Statics
struct UHT_STATICS
{
	struct LandscapeManager_eventApplyHeightmap_Parms
	{
		FIntRect Rect;
		FIntPoint AxisOrder;
		FVector2D GeoOrigin;
		bool bWholeLandscape;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// Apply heightmap to landscape in rect\n// Rect - world space bounds in meters\n" },
		{ "CPP_Default_bWholeLandscape", "true" },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
		{ "ToolTip", "Apply heightmap to landscape in rect\nRect - world space bounds in meters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rect_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeoOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyHeightmap constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisOrder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeoOrigin;
	static void NewProp_bWholeLandscape_SetBit(void* Obj)
	{
		((LandscapeManager_eventApplyHeightmap_Parms*)Obj)->bWholeLandscape = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWholeLandscape;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyHeightmap constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyHeightmap Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Rect = { "Rect", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeManager_eventApplyHeightmap_Parms, Rect), Z_Construct_UScriptStruct_FIntRect, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rect_MetaData), NewProp_Rect_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AxisOrder = { "AxisOrder", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeManager_eventApplyHeightmap_Parms, AxisOrder), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisOrder_MetaData), NewProp_AxisOrder_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GeoOrigin = { "GeoOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeManager_eventApplyHeightmap_Parms, GeoOrigin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeoOrigin_MetaData), NewProp_GeoOrigin_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bWholeLandscape = { "bWholeLandscape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(LandscapeManager_eventApplyHeightmap_Parms), &UHT_STATICS::NewProp_bWholeLandscape_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Rect,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AxisOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeoOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bWholeLandscape,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ApplyHeightmap Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULandscapeManager, nullptr, "ApplyHeightmap", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LandscapeManager_eventApplyHeightmap_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LandscapeManager_eventApplyHeightmap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULandscapeManager_ApplyHeightmap(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULandscapeManager::execApplyHeightmap)
{
	P_GET_STRUCT_REF(FIntRect,Z_Param_Out_Rect);
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_AxisOrder);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_GeoOrigin);
	P_GET_UBOOL(Z_Param_bWholeLandscape);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyHeightmap(Z_Param_Out_Rect,Z_Param_Out_AxisOrder,Z_Param_Out_GeoOrigin,Z_Param_bWholeLandscape);
	P_NATIVE_END;
}
// ********** End Class ULandscapeManager Function ApplyHeightmap **********************************

// ********** Begin Class ULandscapeManager Function GenerateLandscapeGeo **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULandscapeManager_GenerateLandscapeGeo_Statics
struct UHT_STATICS
{
	struct LandscapeManager_eventGenerateLandscapeGeo_Parms
	{
		FBox2D Coordinates;
		FIntPoint AxisOrder;
		FVector2D GeoOrigin;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// Coordinates - geographic coordinates, lat,lon\n" },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
		{ "ToolTip", "Coordinates - geographic coordinates, lat,lon" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeoOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateLandscapeGeo constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisOrder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeoOrigin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateLandscapeGeo constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateLandscapeGeo Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeManager_eventGenerateLandscapeGeo_Parms, Coordinates), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coordinates_MetaData), NewProp_Coordinates_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AxisOrder = { "AxisOrder", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeManager_eventGenerateLandscapeGeo_Parms, AxisOrder), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisOrder_MetaData), NewProp_AxisOrder_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GeoOrigin = { "GeoOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeManager_eventGenerateLandscapeGeo_Parms, GeoOrigin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeoOrigin_MetaData), NewProp_GeoOrigin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Coordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AxisOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeoOrigin,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GenerateLandscapeGeo Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULandscapeManager, nullptr, "GenerateLandscapeGeo", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LandscapeManager_eventGenerateLandscapeGeo_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LandscapeManager_eventGenerateLandscapeGeo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULandscapeManager_GenerateLandscapeGeo(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULandscapeManager::execGenerateLandscapeGeo)
{
	P_GET_STRUCT_REF(FBox2D,Z_Param_Out_Coordinates);
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_AxisOrder);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_GeoOrigin);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateLandscapeGeo(Z_Param_Out_Coordinates,Z_Param_Out_AxisOrder,Z_Param_Out_GeoOrigin);
	P_NATIVE_END;
}
// ********** End Class ULandscapeManager Function GenerateLandscapeGeo ****************************

// ********** Begin Class ULandscapeManager Function GenerateLandscapeUE ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULandscapeManager_GenerateLandscapeUE_Statics
struct UHT_STATICS
{
	struct LandscapeManager_eventGenerateLandscapeUE_Parms
	{
		FIntRect Rect;
		FIntPoint AxisOrder;
		FVector2D GeoOrigin;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// Rect - world space bounds in meters\n" },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
		{ "ToolTip", "Rect - world space bounds in meters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rect_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeoOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateLandscapeUE constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisOrder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeoOrigin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateLandscapeUE constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateLandscapeUE Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Rect = { "Rect", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeManager_eventGenerateLandscapeUE_Parms, Rect), Z_Construct_UScriptStruct_FIntRect, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rect_MetaData), NewProp_Rect_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AxisOrder = { "AxisOrder", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeManager_eventGenerateLandscapeUE_Parms, AxisOrder), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisOrder_MetaData), NewProp_AxisOrder_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GeoOrigin = { "GeoOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeManager_eventGenerateLandscapeUE_Parms, GeoOrigin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeoOrigin_MetaData), NewProp_GeoOrigin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Rect,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AxisOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeoOrigin,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GenerateLandscapeUE Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULandscapeManager, nullptr, "GenerateLandscapeUE", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LandscapeManager_eventGenerateLandscapeUE_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LandscapeManager_eventGenerateLandscapeUE_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULandscapeManager_GenerateLandscapeUE(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULandscapeManager::execGenerateLandscapeUE)
{
	P_GET_STRUCT_REF(FIntRect,Z_Param_Out_Rect);
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_AxisOrder);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_GeoOrigin);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateLandscapeUE(Z_Param_Out_Rect,Z_Param_Out_AxisOrder,Z_Param_Out_GeoOrigin);
	P_NATIVE_END;
}
// ********** End Class ULandscapeManager Function GenerateLandscapeUE *****************************

// ********** Begin Class ULandscapeManager Function GetLandscapeSize ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULandscapeManager_GetLandscapeSize_Statics
struct UHT_STATICS
{
	struct LandscapeManager_eventGetLandscapeSize_Parms
	{
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// Landscape size in meters\n" },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
		{ "ToolTip", "Landscape size in meters" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLandscapeSize constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLandscapeSize constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLandscapeSize Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeManager_eventGetLandscapeSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetLandscapeSize Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULandscapeManager, nullptr, "GetLandscapeSize", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LandscapeManager_eventGetLandscapeSize_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LandscapeManager_eventGetLandscapeSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULandscapeManager_GetLandscapeSize(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULandscapeManager::execGetLandscapeSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=P_THIS->GetLandscapeSize();
	P_NATIVE_END;
}
// ********** End Class ULandscapeManager Function GetLandscapeSize ********************************

// ********** Begin Class ULandscapeManager Function LandscapeNavd88MetersToWorldCentimeters *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULandscapeManager_LandscapeNavd88MetersToWorldCentimeters_Statics
struct UHT_STATICS
{
	struct LandscapeManager_eventLandscapeNavd88MetersToWorldCentimeters_Parms
	{
		double Navd88Meters;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function LandscapeNavd88MetersToWorldCentimeters constinit property declarations 
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Navd88Meters;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LandscapeNavd88MetersToWorldCentimeters constinit property declarations *
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LandscapeNavd88MetersToWorldCentimeters Property Definitions **********
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Navd88Meters = { "Navd88Meters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeManager_eventLandscapeNavd88MetersToWorldCentimeters_Parms, Navd88Meters), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeManager_eventLandscapeNavd88MetersToWorldCentimeters_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Navd88Meters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function LandscapeNavd88MetersToWorldCentimeters Property Definitions ************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULandscapeManager, nullptr, "LandscapeNavd88MetersToWorldCentimeters", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LandscapeManager_eventLandscapeNavd88MetersToWorldCentimeters_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LandscapeManager_eventLandscapeNavd88MetersToWorldCentimeters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULandscapeManager_LandscapeNavd88MetersToWorldCentimeters(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULandscapeManager::execLandscapeNavd88MetersToWorldCentimeters)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Navd88Meters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=ULandscapeManager::LandscapeNavd88MetersToWorldCentimeters(Z_Param_Navd88Meters);
	P_NATIVE_END;
}
// ********** End Class ULandscapeManager Function LandscapeNavd88MetersToWorldCentimeters *********

// ********** Begin Class ULandscapeManager Function WorldCentimetersToAbsoluteMeters **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ULandscapeManager_WorldCentimetersToAbsoluteMeters_Statics
struct UHT_STATICS
{
	struct LandscapeManager_eventWorldCentimetersToAbsoluteMeters_Parms
	{
		double WorldCentimeters;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function WorldCentimetersToAbsoluteMeters constinit property declarations ******
	static const UECodeGen_Private::FDoublePropertyParams NewProp_WorldCentimeters;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function WorldCentimetersToAbsoluteMeters constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function WorldCentimetersToAbsoluteMeters Property Definitions *****************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_WorldCentimeters = { "WorldCentimeters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeManager_eventWorldCentimetersToAbsoluteMeters_Parms, WorldCentimeters), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeManager_eventWorldCentimetersToAbsoluteMeters_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldCentimeters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function WorldCentimetersToAbsoluteMeters Property Definitions *******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ULandscapeManager, nullptr, "WorldCentimetersToAbsoluteMeters", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LandscapeManager_eventWorldCentimetersToAbsoluteMeters_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LandscapeManager_eventWorldCentimetersToAbsoluteMeters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULandscapeManager_WorldCentimetersToAbsoluteMeters(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ULandscapeManager::execWorldCentimetersToAbsoluteMeters)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_WorldCentimeters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=ULandscapeManager::WorldCentimetersToAbsoluteMeters(Z_Param_WorldCentimeters);
	P_NATIVE_END;
}
// ********** End Class ULandscapeManager Function WorldCentimetersToAbsoluteMeters ****************

// ********** Begin Class ULandscapeManager ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ULandscapeManager_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//EditInlineNew, DefaultToInstanced\n" },
		{ "IncludePath", "LandscapeManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "EditInlineNew, DefaultToInstanced" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightMapProvider_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGenerateLandscapeComplete_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/LandscapeManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULandscapeManager constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightMapProvider;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGenerateLandscapeComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ULandscapeManager constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AbsoluteMetersToWorldCentimeters"), .Pointer = &ULandscapeManager::execAbsoluteMetersToWorldCentimeters },
		{ .NameUTF8 = UTF8TEXT("ApplyHeightmap"), .Pointer = &ULandscapeManager::execApplyHeightmap },
		{ .NameUTF8 = UTF8TEXT("GenerateLandscapeGeo"), .Pointer = &ULandscapeManager::execGenerateLandscapeGeo },
		{ .NameUTF8 = UTF8TEXT("GenerateLandscapeUE"), .Pointer = &ULandscapeManager::execGenerateLandscapeUE },
		{ .NameUTF8 = UTF8TEXT("GetLandscapeSize"), .Pointer = &ULandscapeManager::execGetLandscapeSize },
		{ .NameUTF8 = UTF8TEXT("LandscapeNavd88MetersToWorldCentimeters"), .Pointer = &ULandscapeManager::execLandscapeNavd88MetersToWorldCentimeters },
		{ .NameUTF8 = UTF8TEXT("WorldCentimetersToAbsoluteMeters"), .Pointer = &ULandscapeManager::execWorldCentimetersToAbsoluteMeters },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULandscapeManager_AbsoluteMetersToWorldCentimeters, "AbsoluteMetersToWorldCentimeters" }, // 7692d09d25b0cb23dfbae82743c101f9a02ea504
		{ &Z_Construct_UFunction_ULandscapeManager_ApplyHeightmap, "ApplyHeightmap" }, // 31d19ce0669111e5c56a50846fcf61887b0cbdf8
		{ &Z_Construct_UFunction_ULandscapeManager_GenerateLandscapeGeo, "GenerateLandscapeGeo" }, // c9f88ba7f845c404c1f35141b8e518072795fa3e
		{ &Z_Construct_UFunction_ULandscapeManager_GenerateLandscapeUE, "GenerateLandscapeUE" }, // 39de3d766987549fca10745b359716f33b5babc4
		{ &Z_Construct_UFunction_ULandscapeManager_GetLandscapeSize, "GetLandscapeSize" }, // 7ca65165a05896b35821616b6b49d82583c13196
		{ &Z_Construct_UFunction_ULandscapeManager_LandscapeNavd88MetersToWorldCentimeters, "LandscapeNavd88MetersToWorldCentimeters" }, // ea0b95e826946bffe95bba4efcf0043e22038eb8
		{ &Z_Construct_UFunction_ULandscapeManager_WorldCentimetersToAbsoluteMeters, "WorldCentimetersToAbsoluteMeters" }, // 8326530e808a973dd585740b179a8ebf9b2f23a4
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ULandscapeManager Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HeightMapProvider = { "HeightMapProvider", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeManager, HeightMapProvider), Z_Construct_UClass_UHeightMapProvider, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMapProvider_MetaData), NewProp_HeightMapProvider_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeManager, Parameters), Z_Construct_UScriptStruct_FLandscapeParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // bc2d0e744d6f25e8713eaa9dc3343db4af1e2c88
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnGenerateLandscapeComplete = { "OnGenerateLandscapeComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeManager, OnGenerateLandscapeComplete), Z_Construct_UDelegateFunction_TwinBLDEditor_OnGenerateLandscapeComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGenerateLandscapeComplete_MetaData), NewProp_OnGenerateLandscapeComplete_MetaData) }; // 76a9311f9909b6f080851dd380ac496076650663
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HeightMapProvider,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnGenerateLandscapeComplete,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ULandscapeManager Property Definitions *************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ULandscapeManager,
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
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void ULandscapeManager_StaticRegisterNativesULandscapeManager()
{
	UClass* Class = ULandscapeManager::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULandscapeManager;
UClass* Z_Construct_UClass_ULandscapeManager(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ULandscapeManager;
		if (!Z_Registration_Info_UClass_ULandscapeManager.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("LandscapeManager"),
				Z_Registration_Info_UClass_ULandscapeManager.InnerSingleton,
				ULandscapeManager_StaticRegisterNativesULandscapeManager,
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
		return Z_Registration_Info_UClass_ULandscapeManager.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ULandscapeManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeManager.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeManager.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULandscapeManager);
ULandscapeManager::~ULandscapeManager() {}
// ********** End Class ULandscapeManager **********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_LandscapeManager_h__Script_TwinBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_TwinBLDEditor_ELandscapeSectionSize, TEXT("ELandscapeSectionSize"), &ZRIE_ELandscapeSectionSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 63184643U) },
		{ Z_Construct_UEnum_TwinBLDEditor_EHeightmapResampleMethod, TEXT("EHeightmapResampleMethod"), &ZRIE_EHeightmapResampleMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2449925400U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FTwinBLDLandscapeTileResult, Z_Construct_UScriptStruct_FTwinBLDLandscapeTileResult_Statics::NewStructOps, TEXT("TwinBLDLandscapeTileResult"),&Z_Registration_Info_UScriptStruct_FTwinBLDLandscapeTileResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwinBLDLandscapeTileResult), 191002569U) },
		{ Z_Construct_UScriptStruct_FLandscapeParameters, Z_Construct_UScriptStruct_FLandscapeParameters_Statics::NewStructOps, TEXT("LandscapeParameters"),&Z_Registration_Info_UScriptStruct_FLandscapeParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeParameters), 3157069428U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeManager, TEXT("ULandscapeManager"), &Z_Registration_Info_UClass_ULandscapeManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeManager), 4087493399U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_LandscapeManager_h__Script_TwinBLDEditor_90b75b40cf71f91e5f3698c53fe4c163d3769afd{
	TEXT("/Script/TwinBLDEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
