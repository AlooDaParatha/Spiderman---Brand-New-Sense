// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicLandscape/LandscapeMirrorSpline.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeLandscapeMirrorSpline() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USplineComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USplineMetadata(ETypeConstructPhase);
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape(ETypeConstructPhase);
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineControlPoint(ETypeConstructPhase);
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineInterface(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_ELandscapeSplineVisibility(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeControlPointData(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ULandscapeMirrorSplineBase(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ULandscapeMirrorSplineMetadata(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ULandscapeMirrorSplineBase(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ULandscapeMirrorSplineMetadata(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FLandscapeControlPointData ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FLandscapeControlPointData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FLandscapeControlPointData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FLandscapeControlPointData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicLandscape/LandscapeMirrorSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HalfWidth_MetaData[] = {
		{ "Category", "Landscape Splines" },
		{ "ModuleRelativePath", "Public/DynamicLandscape/LandscapeMirrorSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightOffset_MetaData[] = {
		{ "Category", "Landscape Splines" },
		{ "ModuleRelativePath", "Public/DynamicLandscape/LandscapeMirrorSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerWidthRatio_MetaData[] = {
		{ "Category", "Landscape Splines" },
		{ "ModuleRelativePath", "Public/DynamicLandscape/LandscapeMirrorSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SideFalloff_MetaData[] = {
		{ "Category", "Landscape Splines" },
		{ "ModuleRelativePath", "Public/DynamicLandscape/LandscapeMirrorSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftSideFalloffFactor_MetaData[] = {
		{ "Category", "Landscape Splines" },
		{ "ModuleRelativePath", "Public/DynamicLandscape/LandscapeMirrorSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightSideFalloffFactor_MetaData[] = {
		{ "Category", "Landscape Splines" },
		{ "ModuleRelativePath", "Public/DynamicLandscape/LandscapeMirrorSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndFalloff_MetaData[] = {
		{ "Category", "Landscape Splines" },
		{ "ModuleRelativePath", "Public/DynamicLandscape/LandscapeMirrorSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRaiseTerrain_MetaData[] = {
		{ "Category", "Landscape Splines" },
		{ "Comment", "// Note: Controls the segment between the current point and the next point, if one exists.\n" },
		{ "ModuleRelativePath", "Public/DynamicLandscape/LandscapeMirrorSpline.h" },
		{ "ToolTip", "Note: Controls the segment between the current point and the next point, if one exists." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLowerTerrain_MetaData[] = {
		{ "Category", "Landscape Splines" },
		{ "Comment", "// Note: Controls the segment between the current point and the next point, if one exists.\n" },
		{ "ModuleRelativePath", "Public/DynamicLandscape/LandscapeMirrorSpline.h" },
		{ "ToolTip", "Note: Controls the segment between the current point and the next point, if one exists." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTangentOverride_MetaData[] = {
		{ "Category", "Landscape Splines" },
		{ "ModuleRelativePath", "Public/DynamicLandscape/LandscapeMirrorSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentOverride_MetaData[] = {
		{ "Category", "Landscape Splines" },
		{ "ModuleRelativePath", "Public/DynamicLandscape/LandscapeMirrorSpline.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FLandscapeControlPointData constinit property declarations ********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LayerWidthRatio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SideFalloff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftSideFalloffFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightSideFalloffFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndFalloff;
	static void NewProp_bRaiseTerrain_SetBit(void* Obj)
	{
		((FLandscapeControlPointData*)Obj)->bRaiseTerrain = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRaiseTerrain;
	static void NewProp_bLowerTerrain_SetBit(void* Obj)
	{
		((FLandscapeControlPointData*)Obj)->bLowerTerrain = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLowerTerrain;
	static void NewProp_bEnableTangentOverride_SetBit(void* Obj)
	{
		((FLandscapeControlPointData*)Obj)->bEnableTangentOverride = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTangentOverride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TangentOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FLandscapeControlPointData constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeControlPointData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FLandscapeControlPointData Property Definitions *******************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_HalfWidth = { "HalfWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeControlPointData, HalfWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HalfWidth_MetaData), NewProp_HalfWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_HeightOffset = { "HeightOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeControlPointData, HeightOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightOffset_MetaData), NewProp_HeightOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LayerWidthRatio = { "LayerWidthRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeControlPointData, LayerWidthRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerWidthRatio_MetaData), NewProp_LayerWidthRatio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SideFalloff = { "SideFalloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeControlPointData, SideFalloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SideFalloff_MetaData), NewProp_SideFalloff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LeftSideFalloffFactor = { "LeftSideFalloffFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeControlPointData, LeftSideFalloffFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftSideFalloffFactor_MetaData), NewProp_LeftSideFalloffFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RightSideFalloffFactor = { "RightSideFalloffFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeControlPointData, RightSideFalloffFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightSideFalloffFactor_MetaData), NewProp_RightSideFalloffFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_EndFalloff = { "EndFalloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeControlPointData, EndFalloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndFalloff_MetaData), NewProp_EndFalloff_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRaiseTerrain = { "bRaiseTerrain", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FLandscapeControlPointData), &UHT_STATICS::NewProp_bRaiseTerrain_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRaiseTerrain_MetaData), NewProp_bRaiseTerrain_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLowerTerrain = { "bLowerTerrain", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FLandscapeControlPointData), &UHT_STATICS::NewProp_bLowerTerrain_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLowerTerrain_MetaData), NewProp_bLowerTerrain_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableTangentOverride = { "bEnableTangentOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FLandscapeControlPointData), &UHT_STATICS::NewProp_bEnableTangentOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableTangentOverride_MetaData), NewProp_bEnableTangentOverride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TangentOverride = { "TangentOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeControlPointData, TangentOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentOverride_MetaData), NewProp_TangentOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HalfWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HeightOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerWidthRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SideFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LeftSideFalloffFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RightSideFalloffFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRaiseTerrain,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLowerTerrain,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableTangentOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TangentOverride,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FLandscapeControlPointData Property Definitions *********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"LandscapeControlPointData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FLandscapeControlPointData>(),
	alignof(FLandscapeControlPointData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLandscapeControlPointData;
UScriptStruct* Z_Construct_UScriptStruct_FLandscapeControlPointData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FLandscapeControlPointData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FLandscapeControlPointData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeControlPointData, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("LandscapeControlPointData"));
		}
		return Z_Registration_Info_UScriptStruct_FLandscapeControlPointData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FLandscapeControlPointData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLandscapeControlPointData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FLandscapeControlPointData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FLandscapeControlPointData ******************************************

// ********** Begin Enum ELandscapeSplineVisibility ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDRuntime_ELandscapeSplineVisibility_Statics
template<> ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeSplineVisibility>()
{
	return Z_Construct_UEnum_RoadBLDRuntime_ELandscapeSplineVisibility(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Mesh.Name", "ELandscapeSplineVisibility::Mesh" },
		{ "ModuleRelativePath", "Public/DynamicLandscape/LandscapeMirrorSpline.h" },
		{ "None.Name", "ELandscapeSplineVisibility::None" },
		{ "Wireframe.Name", "ELandscapeSplineVisibility::Wireframe" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELandscapeSplineVisibility::None", (int64)ELandscapeSplineVisibility::None },
		{ "ELandscapeSplineVisibility::Mesh", (int64)ELandscapeSplineVisibility::Mesh },
		{ "ELandscapeSplineVisibility::Wireframe", (int64)ELandscapeSplineVisibility::Wireframe },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	"ELandscapeSplineVisibility",
	"ELandscapeSplineVisibility",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ELandscapeSplineVisibility;
UEnum* Z_Construct_UEnum_RoadBLDRuntime_ELandscapeSplineVisibility(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ELandscapeSplineVisibility.OuterSingleton)
		{
			ZRIE_ELandscapeSplineVisibility.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDRuntime_ELandscapeSplineVisibility, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("ELandscapeSplineVisibility"));
		}
		return ZRIE_ELandscapeSplineVisibility.OuterSingleton;
	}
	if (!ZRIE_ELandscapeSplineVisibility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ELandscapeSplineVisibility.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ELandscapeSplineVisibility.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ELandscapeSplineVisibility **************************************************

// ********** Begin Class ULandscapeMirrorSplineMetadata *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ULandscapeMirrorSplineMetadata_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "DynamicLandscape/LandscapeMirrorSpline.h" },
		{ "ModuleRelativePath", "Public/DynamicLandscape/LandscapeMirrorSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicLandscape/LandscapeMirrorSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumControlPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicLandscape/LandscapeMirrorSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysRotateForward_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicLandscape/LandscapeMirrorSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bJoinSegmentsOnRemovePoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicLandscape/LandscapeMirrorSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoChangeConnectionsOnMove_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicLandscape/LandscapeMirrorSpline.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULandscapeMirrorSplineMetadata constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartPoint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumControlPoints;
	static void NewProp_bAlwaysRotateForward_SetBit(void* Obj)
	{
		((ULandscapeMirrorSplineMetadata*)Obj)->bAlwaysRotateForward = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysRotateForward;
	static void NewProp_bJoinSegmentsOnRemovePoint_SetBit(void* Obj)
	{
		((ULandscapeMirrorSplineMetadata*)Obj)->bJoinSegmentsOnRemovePoint = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bJoinSegmentsOnRemovePoint;
	static void NewProp_bAutoChangeConnectionsOnMove_SetBit(void* Obj)
	{
		((ULandscapeMirrorSplineMetadata*)Obj)->bAutoChangeConnectionsOnMove = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoChangeConnectionsOnMove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ULandscapeMirrorSplineMetadata constinit property declarations *************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeMirrorSplineMetadata>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ULandscapeMirrorSplineMetadata Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeMirrorSplineMetadata, StartPoint), Z_Construct_UClass_ULandscapeSplineControlPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPoint_MetaData), NewProp_StartPoint_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NumControlPoints = { "NumControlPoints", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeMirrorSplineMetadata, NumControlPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumControlPoints_MetaData), NewProp_NumControlPoints_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAlwaysRotateForward = { "bAlwaysRotateForward", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ULandscapeMirrorSplineMetadata), &UHT_STATICS::NewProp_bAlwaysRotateForward_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysRotateForward_MetaData), NewProp_bAlwaysRotateForward_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bJoinSegmentsOnRemovePoint = { "bJoinSegmentsOnRemovePoint", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ULandscapeMirrorSplineMetadata), &UHT_STATICS::NewProp_bJoinSegmentsOnRemovePoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bJoinSegmentsOnRemovePoint_MetaData), NewProp_bJoinSegmentsOnRemovePoint_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoChangeConnectionsOnMove = { "bAutoChangeConnectionsOnMove", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ULandscapeMirrorSplineMetadata), &UHT_STATICS::NewProp_bAutoChangeConnectionsOnMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoChangeConnectionsOnMove_MetaData), NewProp_bAutoChangeConnectionsOnMove_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NumControlPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAlwaysRotateForward,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bJoinSegmentsOnRemovePoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoChangeConnectionsOnMove,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ULandscapeMirrorSplineMetadata Property Definitions ************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_USplineMetadata,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ULandscapeMirrorSplineMetadata,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_ULandscapeMirrorSplineMetadata;
UClass* Z_Construct_UClass_ULandscapeMirrorSplineMetadata(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ULandscapeMirrorSplineMetadata;
		if (!Z_Registration_Info_UClass_ULandscapeMirrorSplineMetadata.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("LandscapeMirrorSplineMetadata"),
				Z_Registration_Info_UClass_ULandscapeMirrorSplineMetadata.InnerSingleton,
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
		return Z_Registration_Info_UClass_ULandscapeMirrorSplineMetadata.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ULandscapeMirrorSplineMetadata.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeMirrorSplineMetadata.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeMirrorSplineMetadata.OuterSingleton;
}
#undef UHT_STATICS
ULandscapeMirrorSplineMetadata::ULandscapeMirrorSplineMetadata(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULandscapeMirrorSplineMetadata);
ULandscapeMirrorSplineMetadata::~ULandscapeMirrorSplineMetadata() {}
// ********** End Class ULandscapeMirrorSplineMetadata *********************************************

// ********** Begin Class ULandscapeMirrorSplineBase ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ULandscapeMirrorSplineBase_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "HideCategories", "Activation Physics Collision HLOD LOD TextureStreaming Navigation RayTracing Lighting Rendering Mobile Trigger VirtualTexture" },
		{ "IncludePath", "DynamicLandscape/LandscapeMirrorSpline.h" },
		{ "ModuleRelativePath", "Public/DynamicLandscape/LandscapeMirrorSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeSplineOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicLandscape/LandscapeMirrorSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedVisibility_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicLandscape/LandscapeMirrorSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasEverSynced_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicLandscape/LandscapeMirrorSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRegistered_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicLandscape/LandscapeMirrorSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeferSplineLayerRefresh_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicLandscape/LandscapeMirrorSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPendingSplineLayerRefresh_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicLandscape/LandscapeMirrorSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeakLandscape_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicLandscape/LandscapeMirrorSpline.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ULandscapeMirrorSplineBase constinit property declarations ***************
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_LandscapeSplineOwner;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CachedVisibility_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CachedVisibility;
	static void NewProp_bHasEverSynced_SetBit(void* Obj)
	{
		((ULandscapeMirrorSplineBase*)Obj)->bHasEverSynced = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasEverSynced;
	static void NewProp_bIsRegistered_SetBit(void* Obj)
	{
		((ULandscapeMirrorSplineBase*)Obj)->bIsRegistered = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRegistered;
	static void NewProp_bDeferSplineLayerRefresh_SetBit(void* Obj)
	{
		((ULandscapeMirrorSplineBase*)Obj)->bDeferSplineLayerRefresh = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeferSplineLayerRefresh;
	static void NewProp_bPendingSplineLayerRefresh_SetBit(void* Obj)
	{
		((ULandscapeMirrorSplineBase*)Obj)->bPendingSplineLayerRefresh = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPendingSplineLayerRefresh;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_WeakLandscape;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ULandscapeMirrorSplineBase constinit property declarations *****************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeMirrorSplineBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ULandscapeMirrorSplineBase Property Definitions **************************
const UECodeGen_Private::FInterfacePropertyParams UHT_STATICS::NewProp_LandscapeSplineOwner = { "LandscapeSplineOwner", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Interface, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeMirrorSplineBase, LandscapeSplineOwner), Z_Construct_UClass_ULandscapeSplineInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeSplineOwner_MetaData), NewProp_LandscapeSplineOwner_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CachedVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CachedVisibility = { "CachedVisibility", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeMirrorSplineBase, CachedVisibility), Z_Construct_UEnum_RoadBLDRuntime_ELandscapeSplineVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedVisibility_MetaData), NewProp_CachedVisibility_MetaData) }; // fd590258b0d9e6cd9cdde21ec4320cdc8f86180d
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHasEverSynced = { "bHasEverSynced", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ULandscapeMirrorSplineBase), &UHT_STATICS::NewProp_bHasEverSynced_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasEverSynced_MetaData), NewProp_bHasEverSynced_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsRegistered = { "bIsRegistered", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ULandscapeMirrorSplineBase), &UHT_STATICS::NewProp_bIsRegistered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRegistered_MetaData), NewProp_bIsRegistered_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDeferSplineLayerRefresh = { "bDeferSplineLayerRefresh", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ULandscapeMirrorSplineBase), &UHT_STATICS::NewProp_bDeferSplineLayerRefresh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeferSplineLayerRefresh_MetaData), NewProp_bDeferSplineLayerRefresh_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPendingSplineLayerRefresh = { "bPendingSplineLayerRefresh", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ULandscapeMirrorSplineBase), &UHT_STATICS::NewProp_bPendingSplineLayerRefresh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPendingSplineLayerRefresh_MetaData), NewProp_bPendingSplineLayerRefresh_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams UHT_STATICS::NewProp_WeakLandscape = { "WeakLandscape", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, nullptr, nullptr, 1, STRUCT_OFFSET(ULandscapeMirrorSplineBase, WeakLandscape), Z_Construct_UClass_ALandscape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeakLandscape_MetaData), NewProp_WeakLandscape_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapeSplineOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedVisibility_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHasEverSynced,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsRegistered,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDeferSplineLayerRefresh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPendingSplineLayerRefresh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WeakLandscape,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ULandscapeMirrorSplineBase Property Definitions ****************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_USplineComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ULandscapeMirrorSplineBase,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_ULandscapeMirrorSplineBase;
UClass* Z_Construct_UClass_ULandscapeMirrorSplineBase(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ULandscapeMirrorSplineBase;
		if (!Z_Registration_Info_UClass_ULandscapeMirrorSplineBase.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("LandscapeMirrorSplineBase"),
				Z_Registration_Info_UClass_ULandscapeMirrorSplineBase.InnerSingleton,
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
		return Z_Registration_Info_UClass_ULandscapeMirrorSplineBase.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ULandscapeMirrorSplineBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeMirrorSplineBase.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ULandscapeMirrorSplineBase.OuterSingleton;
}
#undef UHT_STATICS
ULandscapeMirrorSplineBase::ULandscapeMirrorSplineBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ULandscapeMirrorSplineBase);
ULandscapeMirrorSplineBase::~ULandscapeMirrorSplineBase() {}
// ********** End Class ULandscapeMirrorSplineBase *************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicLandscape_LandscapeMirrorSpline_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RoadBLDRuntime_ELandscapeSplineVisibility, TEXT("ELandscapeSplineVisibility"), &ZRIE_ELandscapeSplineVisibility, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4250468952U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FLandscapeControlPointData, Z_Construct_UScriptStruct_FLandscapeControlPointData_Statics::NewStructOps, TEXT("LandscapeControlPointData"),&Z_Registration_Info_UScriptStruct_FLandscapeControlPointData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeControlPointData), 3022586600U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeMirrorSplineMetadata, TEXT("ULandscapeMirrorSplineMetadata"), &Z_Registration_Info_UClass_ULandscapeMirrorSplineMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeMirrorSplineMetadata), 631988050U) },
		{ Z_Construct_UClass_ULandscapeMirrorSplineBase, TEXT("ULandscapeMirrorSplineBase"), &Z_Registration_Info_UClass_ULandscapeMirrorSplineBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeMirrorSplineBase), 4232326701U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicLandscape_LandscapeMirrorSpline_h__Script_RoadBLDRuntime_e15ebfc98ca6cb0a858b353761827912cd0d4b14{
	TEXT("/Script/RoadBLDRuntime"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
