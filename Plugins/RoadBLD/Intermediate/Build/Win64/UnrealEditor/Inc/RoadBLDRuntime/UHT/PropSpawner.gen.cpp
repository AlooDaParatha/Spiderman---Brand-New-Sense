// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PropSpawner.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodePropSpawner() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_EEdgeSnap(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_ESpawnArea(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UPropSpawner(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPropSpawnerSettings(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UPropSpawner(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EEdgeSnap *****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDRuntime_EEdgeSnap_Statics
template<> ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EEdgeSnap>()
{
	return Z_Construct_UEnum_RoadBLDRuntime_EEdgeSnap(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Centerline.DisplayName", "Attach to the road centerline, if attached to a road" },
		{ "Centerline.Name", "EEdgeSnap::Centerline" },
		{ "Comment", "//The Enum we use to select which edge to attach the prop spawner to\n" },
		{ "LeftEdge.DisplayName", "Attach to the outer edge on the left hand side" },
		{ "LeftEdge.Name", "EEdgeSnap::LeftEdge" },
		{ "ModuleRelativePath", "Public/PropSpawner.h" },
		{ "RightEdge.DisplayName", "Attach to the outer edge on the right hand side" },
		{ "RightEdge.Name", "EEdgeSnap::RightEdge" },
		{ "ToolTip", "The Enum we use to select which edge to attach the prop spawner to" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEdgeSnap::Centerline", (int64)EEdgeSnap::Centerline },
		{ "EEdgeSnap::LeftEdge", (int64)EEdgeSnap::LeftEdge },
		{ "EEdgeSnap::RightEdge", (int64)EEdgeSnap::RightEdge },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	"EEdgeSnap",
	"EEdgeSnap",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EEdgeSnap;
UEnum* Z_Construct_UEnum_RoadBLDRuntime_EEdgeSnap(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EEdgeSnap.OuterSingleton)
		{
			ZRIE_EEdgeSnap.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDRuntime_EEdgeSnap, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("EEdgeSnap"));
		}
		return ZRIE_EEdgeSnap.OuterSingleton;
	}
	if (!ZRIE_EEdgeSnap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EEdgeSnap.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EEdgeSnap.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EEdgeSnap *******************************************************************

// ********** Begin Enum ESpawnArea ****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDRuntime_ESpawnArea_Statics
template<> ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ESpawnArea>()
{
	return Z_Construct_UEnum_RoadBLDRuntime_ESpawnArea(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "BridgeSegments.DisplayName", "Only spawn the props along bridge segments of the road, wherever the road is elevated" },
		{ "BridgeSegments.Name", "ESpawnArea::BridgeSegments" },
		{ "Comment", "//The Enum we use to select where on the spline we can spawn props\n" },
		{ "FullSpline.DisplayName", "Spawn the props along the entire road spline, including intersections" },
		{ "FullSpline.Name", "ESpawnArea::FullSpline" },
		{ "ModuleRelativePath", "Public/PropSpawner.h" },
		{ "RoadBeginnings.DisplayName", "Only spawn the props at the start points of intersections" },
		{ "RoadBeginnings.Name", "ESpawnArea::RoadBeginnings" },
		{ "RoadEnds.DisplayName", "Only spawn the props at the end points of intersections" },
		{ "RoadEnds.Name", "ESpawnArea::RoadEnds" },
		{ "RoadOnly.DisplayName", "Spawn the props along the entire road, except in intersections" },
		{ "RoadOnly.Name", "ESpawnArea::RoadOnly" },
		{ "ToolTip", "The Enum we use to select where on the spline we can spawn props" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpawnArea::FullSpline", (int64)ESpawnArea::FullSpline },
		{ "ESpawnArea::RoadOnly", (int64)ESpawnArea::RoadOnly },
		{ "ESpawnArea::RoadBeginnings", (int64)ESpawnArea::RoadBeginnings },
		{ "ESpawnArea::RoadEnds", (int64)ESpawnArea::RoadEnds },
		{ "ESpawnArea::BridgeSegments", (int64)ESpawnArea::BridgeSegments },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	"ESpawnArea",
	"ESpawnArea",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ESpawnArea;
UEnum* Z_Construct_UEnum_RoadBLDRuntime_ESpawnArea(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ESpawnArea.OuterSingleton)
		{
			ZRIE_ESpawnArea.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDRuntime_ESpawnArea, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("ESpawnArea"));
		}
		return ZRIE_ESpawnArea.OuterSingleton;
	}
	if (!ZRIE_ESpawnArea.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ESpawnArea.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ESpawnArea.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ESpawnArea ******************************************************************

// ********** Begin ScriptStruct FPropSpawnerSettings **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FPropSpawnerSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FPropSpawnerSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPropSpawnerSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//The struct we use to pre-define the settings in a preset\n" },
		{ "ModuleRelativePath", "Public/PropSpawner.h" },
		{ "ToolTip", "The struct we use to pre-define the settings in a preset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshesToUse_MetaData[] = {
		{ "Category", "PropSpawner" },
		{ "Comment", "//An array of meshes that the spawner will randomly choose from. Add more entries of a certain mesh to make it appear more often.\n" },
		{ "ModuleRelativePath", "Public/PropSpawner.h" },
		{ "ToolTip", "An array of meshes that the spawner will randomly choose from. Add more entries of a certain mesh to make it appear more often." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeOffset_MetaData[] = {
		{ "Category", "PropSpawner" },
		{ "Comment", "//The sideways offset from whatever edge this prop spawner is attached to. The spawner will choose a random value between the X and Y entries.\n" },
		{ "ModuleRelativePath", "Public/PropSpawner.h" },
		{ "ToolTip", "The sideways offset from whatever edge this prop spawner is attached to. The spawner will choose a random value between the X and Y entries." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinAndMaxScale_MetaData[] = {
		{ "Category", "PropSpawner" },
		{ "Comment", "//The scale multiplier applied to each prop. The spawner will choose a random value between the X and Y entries.\n" },
		{ "ModuleRelativePath", "Public/PropSpawner.h" },
		{ "ToolTip", "The scale multiplier applied to each prop. The spawner will choose a random value between the X and Y entries." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOffset_MetaData[] = {
		{ "Category", "PropSpawner" },
		{ "Comment", "//The vertical Z offset from whatever spline this prop spawner is attached to. The spawner will choose a random value between the X and Y entries.\n" },
		{ "ModuleRelativePath", "Public/PropSpawner.h" },
		{ "ToolTip", "The vertical Z offset from whatever spline this prop spawner is attached to. The spawner will choose a random value between the X and Y entries." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Edge_MetaData[] = {
		{ "Category", "PropSpawner" },
		{ "Comment", "//The edge to snap the props to.\n" },
		{ "ModuleRelativePath", "Public/PropSpawner.h" },
		{ "ToolTip", "The edge to snap the props to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceBetweenProps_MetaData[] = {
		{ "Category", "PropSpawner" },
		{ "Comment", "//The min and max forward distance between props. The spawner will choose a random value between the X and Y entries. Lower values will result in more props being spawned. Keeping the numbers identical will spawn props at evenly spaced distances.\n" },
		{ "ModuleRelativePath", "Public/PropSpawner.h" },
		{ "ToolTip", "The min and max forward distance between props. The spawner will choose a random value between the X and Y entries. Lower values will result in more props being spawned. Keeping the numbers identical will spawn props at evenly spaced distances." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomZRotation_MetaData[] = {
		{ "Category", "PropSpawner" },
		{ "Comment", "//Whether or not we should randomize the rotation of the props around the Z axis.\n" },
		{ "ModuleRelativePath", "Public/PropSpawner.h" },
		{ "ToolTip", "Whether or not we should randomize the rotation of the props around the Z axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlignToWorldZ_MetaData[] = {
		{ "Category", "PropSpawner" },
		{ "Comment", "//Whether or not we should keep the rotation of the props aligned to the world Z axis.\n" },
		{ "ModuleRelativePath", "Public/PropSpawner.h" },
		{ "ToolTip", "Whether or not we should keep the rotation of the props aligned to the world Z axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "Category", "PropSpawner" },
		{ "Comment", "//The offset to apply to the rotation of each prop.\n" },
		{ "ModuleRelativePath", "Public/PropSpawner.h" },
		{ "ToolTip", "The offset to apply to the rotation of each prop." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnArea_MetaData[] = {
		{ "Category", "PropSpawner" },
		{ "Comment", "//Where along the road spline we should spawn the props.\n" },
		{ "ModuleRelativePath", "Public/PropSpawner.h" },
		{ "ToolTip", "Where along the road spline we should spawn the props." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPropSpawnerSettings constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshesToUse_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshesToUse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinAndMaxScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ZOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Edge_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Edge;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceBetweenProps;
	static void NewProp_bRandomZRotation_SetBit(void* Obj)
	{
		((FPropSpawnerSettings*)Obj)->bRandomZRotation = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomZRotation;
	static void NewProp_bAlignToWorldZ_SetBit(void* Obj)
	{
		((FPropSpawnerSettings*)Obj)->bAlignToWorldZ = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignToWorldZ;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpawnArea_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnArea;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FPropSpawnerSettings constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropSpawnerSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FPropSpawnerSettings Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MeshesToUse_Inner = { "MeshesToUse", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_MeshesToUse = { "MeshesToUse", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FPropSpawnerSettings, MeshesToUse), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshesToUse_MetaData), NewProp_MeshesToUse_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EdgeOffset = { "EdgeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FPropSpawnerSettings, EdgeOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeOffset_MetaData), NewProp_EdgeOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_MinAndMaxScale = { "MinAndMaxScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FPropSpawnerSettings, MinAndMaxScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinAndMaxScale_MetaData), NewProp_MinAndMaxScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FPropSpawnerSettings, ZOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOffset_MetaData), NewProp_ZOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Edge_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Edge = { "Edge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FPropSpawnerSettings, Edge), Z_Construct_UEnum_RoadBLDRuntime_EEdgeSnap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Edge_MetaData), NewProp_Edge_MetaData) }; // 22707df88c1b1088ebc466ccda1996320d8ef083
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DistanceBetweenProps = { "DistanceBetweenProps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FPropSpawnerSettings, DistanceBetweenProps), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceBetweenProps_MetaData), NewProp_DistanceBetweenProps_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRandomZRotation = { "bRandomZRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FPropSpawnerSettings), &UHT_STATICS::NewProp_bRandomZRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomZRotation_MetaData), NewProp_bRandomZRotation_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAlignToWorldZ = { "bAlignToWorldZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FPropSpawnerSettings), &UHT_STATICS::NewProp_bAlignToWorldZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlignToWorldZ_MetaData), NewProp_bAlignToWorldZ_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FPropSpawnerSettings, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SpawnArea_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SpawnArea = { "SpawnArea", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FPropSpawnerSettings, SpawnArea), Z_Construct_UEnum_RoadBLDRuntime_ESpawnArea, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnArea_MetaData), NewProp_SpawnArea_MetaData) }; // 1bfe71e0dc50ab033273b3373887565f779ece41
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MeshesToUse_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MeshesToUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinAndMaxScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Edge_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Edge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DistanceBetweenProps,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRandomZRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAlignToWorldZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnArea_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnArea,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FPropSpawnerSettings Property Definitions ***************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"PropSpawnerSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FPropSpawnerSettings>(),
	alignof(FPropSpawnerSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPropSpawnerSettings;
UScriptStruct* Z_Construct_UScriptStruct_FPropSpawnerSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FPropSpawnerSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FPropSpawnerSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropSpawnerSettings, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("PropSpawnerSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FPropSpawnerSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FPropSpawnerSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPropSpawnerSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPropSpawnerSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FPropSpawnerSettings ************************************************

// ********** Begin Class UPropSpawner *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UPropSpawner_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PropSpawner.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PropSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "PropSpawner" },
		{ "ModuleRelativePath", "Public/PropSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedInstMeshComponents_MetaData[] = {
		{ "Category", "PropSpawner" },
		{ "Comment", "//Save the InstMesh Components used to spawn the props, so we can visualize the prop spawner later.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PropSpawner.h" },
		{ "ToolTip", "Save the InstMesh Components used to spawn the props, so we can visualize the prop spawner later." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedInstanceIDs_MetaData[] = {
		{ "Category", "PropSpawner" },
		{ "ModuleRelativePath", "Public/PropSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[] = {
		{ "Category", "PropSpawner" },
		{ "ModuleRelativePath", "Public/PropSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndOffset_MetaData[] = {
		{ "Category", "PropSpawner" },
		{ "ModuleRelativePath", "Public/PropSpawner.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPropSpawner constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedInstMeshComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedInstMeshComponents;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnedInstanceIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedInstanceIDs;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StartOffset;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EndOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPropSpawner constinit property declarations *******************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UPropSpawner Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UPropSpawner, Settings), Z_Construct_UScriptStruct_FPropSpawnerSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 265d8fda6cb7eefd411dafd098c08daf6b6ffd6c
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SpawnedInstMeshComponents_Inner = { "SpawnedInstMeshComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInstancedStaticMeshComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SpawnedInstMeshComponents = { "SpawnedInstMeshComponents", nullptr, (EPropertyFlags)0x011400800000001d, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UPropSpawner, SpawnedInstMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedInstMeshComponents_MetaData), NewProp_SpawnedInstMeshComponents_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SpawnedInstanceIDs_Inner = { "SpawnedInstanceIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SpawnedInstanceIDs = { "SpawnedInstanceIDs", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UPropSpawner, SpawnedInstanceIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedInstanceIDs_MetaData), NewProp_SpawnedInstanceIDs_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UPropSpawner, StartOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartOffset_MetaData), NewProp_StartOffset_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_EndOffset = { "EndOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UPropSpawner, EndOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndOffset_MetaData), NewProp_EndOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnedInstMeshComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnedInstMeshComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnedInstanceIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnedInstanceIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndOffset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UPropSpawner Property Definitions ******************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UPropSpawner,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UPropSpawner;
UClass* Z_Construct_UClass_UPropSpawner(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UPropSpawner;
		if (!Z_Registration_Info_UClass_UPropSpawner.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("PropSpawner"),
				Z_Registration_Info_UClass_UPropSpawner.InnerSingleton,
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
		return Z_Registration_Info_UClass_UPropSpawner.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UPropSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPropSpawner.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UPropSpawner.OuterSingleton;
}
#undef UHT_STATICS
UPropSpawner::UPropSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPropSpawner);
UPropSpawner::~UPropSpawner() {}
// ********** End Class UPropSpawner ***************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_PropSpawner_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RoadBLDRuntime_EEdgeSnap, TEXT("EEdgeSnap"), &ZRIE_EEdgeSnap, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 577797624U) },
		{ Z_Construct_UEnum_RoadBLDRuntime_ESpawnArea, TEXT("ESpawnArea"), &ZRIE_ESpawnArea, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 469660128U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FPropSpawnerSettings, Z_Construct_UScriptStruct_FPropSpawnerSettings_Statics::NewStructOps, TEXT("PropSpawnerSettings"),&Z_Registration_Info_UScriptStruct_FPropSpawnerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropSpawnerSettings), 643665882U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPropSpawner, TEXT("UPropSpawner"), &Z_Registration_Info_UClass_UPropSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPropSpawner), 861042123U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_PropSpawner_h__Script_RoadBLDRuntime_30e6ec688f9a10fc9a5d15d646b1367481f98b8b{
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
