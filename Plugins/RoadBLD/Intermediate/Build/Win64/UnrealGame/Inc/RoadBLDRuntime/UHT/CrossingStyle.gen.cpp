// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrossingStyle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeCrossingStyle() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UCrossingStyle(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_ECrossingType(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UCrossingStyle(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ECrossingType *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDRuntime_ECrossingType_Statics
template<> ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ECrossingType>()
{
	return Z_Construct_UEnum_RoadBLDRuntime_ECrossingType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Ladder.DisplayName", "Ladder" },
		{ "Ladder.Name", "ECrossingType::Ladder" },
		{ "ModuleRelativePath", "Public/CrossingStyle.h" },
		{ "ParallelLines.DisplayName", "Parallel Lines" },
		{ "ParallelLines.Name", "ECrossingType::ParallelLines" },
		{ "Zebra.DisplayName", "Zebra" },
		{ "Zebra.Name", "ECrossingType::Zebra" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECrossingType::Zebra", (int64)ECrossingType::Zebra },
		{ "ECrossingType::Ladder", (int64)ECrossingType::Ladder },
		{ "ECrossingType::ParallelLines", (int64)ECrossingType::ParallelLines },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	"ECrossingType",
	"ECrossingType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ECrossingType;
UEnum* Z_Construct_UEnum_RoadBLDRuntime_ECrossingType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ECrossingType.OuterSingleton)
		{
			ZRIE_ECrossingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDRuntime_ECrossingType, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("ECrossingType"));
		}
		return ZRIE_ECrossingType.OuterSingleton;
	}
	if (!ZRIE_ECrossingType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ECrossingType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ECrossingType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ECrossingType ***************************************************************

// ********** Begin Class UCrossingStyle ***********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UCrossingStyle_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CrossingStyle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CrossingStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossingType_MetaData[] = {
		{ "Category", "Crossing Style" },
		{ "ModuleRelativePath", "Public/CrossingStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZebraMeshes_MetaData[] = {
		{ "Category", "Crossing Style" },
		{ "EditCondition", "(CrossingType == ECrossingType::Zebra || CrossingType == ECrossingType::Ladder) && !bUseProceduralMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CrossingStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParallelLinesMesh_MetaData[] = {
		{ "Category", "Crossing Style" },
		{ "EditCondition", "(CrossingType == ECrossingType::Ladder || CrossingType == ECrossingType::ParallelLines) && !bUseProceduralMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CrossingStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseProceduralMesh_MetaData[] = {
		{ "Category", "Crossing Style" },
		{ "ModuleRelativePath", "Public/CrossingStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlattenSidewalks_MetaData[] = {
		{ "Category", "Crossing Style" },
		{ "ModuleRelativePath", "Public/CrossingStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TactileMeshes_MetaData[] = {
		{ "Category", "Crossing Style" },
		{ "Comment", "// Meshes to spawn near each flatten-sidewalk interaction endpoint. Value is a local-space offset.\n" },
		{ "EditCondition", "bFlattenSidewalks" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CrossingStyle.h" },
		{ "ToolTip", "Meshes to spawn near each flatten-sidewalk interaction endpoint. Value is a local-space offset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParallelLinesMaterial_MetaData[] = {
		{ "Category", "Crossing Style" },
		{ "EditCondition", "bUseProceduralMesh && (CrossingType == ECrossingType::Ladder || CrossingType == ECrossingType::ParallelLines)" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CrossingStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZebraMarkingsMaterial_MetaData[] = {
		{ "Category", "Crossing Style" },
		{ "EditCondition", "bUseProceduralMesh && (CrossingType == ECrossingType::Zebra || CrossingType == ECrossingType::Ladder)" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CrossingStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZebraSpacing_MetaData[] = {
		{ "Category", "Crossing Style" },
		{ "ClampMin", "1.0" },
		{ "EditCondition", "bUseProceduralMesh && (CrossingType == ECrossingType::Zebra || CrossingType == ECrossingType::Ladder)" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CrossingStyle.h" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParallelLinesVTiling_MetaData[] = {
		{ "Category", "Crossing Style" },
		{ "ClampMin", "0.01" },
		{ "EditCondition", "bUseProceduralMesh && (CrossingType == ECrossingType::Ladder || CrossingType == ECrossingType::ParallelLines)" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CrossingStyle.h" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZebraXScale_MetaData[] = {
		{ "Category", "Crossing Style" },
		{ "ClampMin", "0.01" },
		{ "EditCondition", "bUseProceduralMesh && (CrossingType == ECrossingType::Zebra || CrossingType == ECrossingType::Ladder)" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CrossingStyle.h" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZebraYScale_MetaData[] = {
		{ "Category", "Crossing Style" },
		{ "ClampMin", "0.01" },
		{ "EditCondition", "bUseProceduralMesh && (CrossingType == ECrossingType::Zebra || CrossingType == ECrossingType::Ladder)" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CrossingStyle.h" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParallelLinesWidth_MetaData[] = {
		{ "Category", "Crossing Style" },
		{ "ClampMin", "0.01" },
		{ "EditCondition", "bUseProceduralMesh && (CrossingType == ECrossingType::Ladder || CrossingType == ECrossingType::ParallelLines)" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CrossingStyle.h" },
		{ "UIMin", "0.01" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCrossingStyle constinit property declarations ***************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_CrossingType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CrossingType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ZebraMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ZebraMeshes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParallelLinesMesh;
	static void NewProp_bUseProceduralMesh_SetBit(void* Obj)
	{
		((UCrossingStyle*)Obj)->bUseProceduralMesh = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseProceduralMesh;
	static void NewProp_bFlattenSidewalks_SetBit(void* Obj)
	{
		((UCrossingStyle*)Obj)->bFlattenSidewalks = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlattenSidewalks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TactileMeshes_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TactileMeshes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TactileMeshes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParallelLinesMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ZebraMarkingsMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZebraSpacing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ParallelLinesVTiling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZebraXScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZebraYScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ParallelLinesWidth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCrossingStyle constinit property declarations *****************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrossingStyle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UCrossingStyle Property Definitions **************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CrossingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CrossingType = { "CrossingType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UCrossingStyle, CrossingType), Z_Construct_UEnum_RoadBLDRuntime_ECrossingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossingType_MetaData), NewProp_CrossingType_MetaData) }; // 0bb0aaa07a5b7b62104003ff6f7e417f2231215c
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ZebraMeshes_Inner = { "ZebraMeshes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ZebraMeshes = { "ZebraMeshes", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UCrossingStyle, ZebraMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZebraMeshes_MetaData), NewProp_ZebraMeshes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ParallelLinesMesh = { "ParallelLinesMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UCrossingStyle, ParallelLinesMesh), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParallelLinesMesh_MetaData), NewProp_ParallelLinesMesh_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseProceduralMesh = { "bUseProceduralMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrossingStyle), &UHT_STATICS::NewProp_bUseProceduralMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseProceduralMesh_MetaData), NewProp_bUseProceduralMesh_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFlattenSidewalks = { "bFlattenSidewalks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UCrossingStyle), &UHT_STATICS::NewProp_bFlattenSidewalks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlattenSidewalks_MetaData), NewProp_bFlattenSidewalks_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TactileMeshes_ValueProp = { "TactileMeshes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TactileMeshes_Key_KeyProp = { "TactileMeshes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_TactileMeshes = { "TactileMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UCrossingStyle, TactileMeshes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TactileMeshes_MetaData), NewProp_TactileMeshes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ParallelLinesMaterial = { "ParallelLinesMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UCrossingStyle, ParallelLinesMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParallelLinesMaterial_MetaData), NewProp_ParallelLinesMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ZebraMarkingsMaterial = { "ZebraMarkingsMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UCrossingStyle, ZebraMarkingsMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZebraMarkingsMaterial_MetaData), NewProp_ZebraMarkingsMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ZebraSpacing = { "ZebraSpacing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UCrossingStyle, ZebraSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZebraSpacing_MetaData), NewProp_ZebraSpacing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ParallelLinesVTiling = { "ParallelLinesVTiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UCrossingStyle, ParallelLinesVTiling), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParallelLinesVTiling_MetaData), NewProp_ParallelLinesVTiling_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ZebraXScale = { "ZebraXScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UCrossingStyle, ZebraXScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZebraXScale_MetaData), NewProp_ZebraXScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ZebraYScale = { "ZebraYScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UCrossingStyle, ZebraYScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZebraYScale_MetaData), NewProp_ZebraYScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ParallelLinesWidth = { "ParallelLinesWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UCrossingStyle, ParallelLinesWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParallelLinesWidth_MetaData), NewProp_ParallelLinesWidth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CrossingType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CrossingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZebraMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZebraMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParallelLinesMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseProceduralMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFlattenSidewalks,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TactileMeshes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TactileMeshes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TactileMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParallelLinesMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZebraMarkingsMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZebraSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParallelLinesVTiling,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZebraXScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZebraYScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParallelLinesWidth,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UCrossingStyle Property Definitions ****************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UCrossingStyle,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UCrossingStyle;
UClass* Z_Construct_UClass_UCrossingStyle(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UCrossingStyle;
		if (!Z_Registration_Info_UClass_UCrossingStyle.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CrossingStyle"),
				Z_Registration_Info_UClass_UCrossingStyle.InnerSingleton,
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
		return Z_Registration_Info_UClass_UCrossingStyle.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UCrossingStyle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCrossingStyle.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UCrossingStyle.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCrossingStyle);
UCrossingStyle::~UCrossingStyle() {}
// ********** End Class UCrossingStyle *************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_CrossingStyle_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RoadBLDRuntime_ECrossingType, TEXT("ECrossingType"), &ZRIE_ECrossingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 196127392U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCrossingStyle, TEXT("UCrossingStyle"), &Z_Registration_Info_UClass_UCrossingStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCrossingStyle), 2298337345U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_CrossingStyle_h__Script_RoadBLDRuntime_547240dabda2dbcc84d865e29f99513b60f7daaa{
	TEXT("/Script/RoadBLDRuntime"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
