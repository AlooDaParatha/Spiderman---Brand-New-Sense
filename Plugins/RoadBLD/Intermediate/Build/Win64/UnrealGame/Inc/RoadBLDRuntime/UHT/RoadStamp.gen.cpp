// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoadStamp.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRoadStamp() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_EStampEdgeSnap(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadStamp(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadStampSettings(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoad(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadLane(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadStamp(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EStampEdgeSnap ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDRuntime_EStampEdgeSnap_Statics
template<> ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EStampEdgeSnap>()
{
	return Z_Construct_UEnum_RoadBLDRuntime_EStampEdgeSnap(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Centerline.DisplayName", "Attach to the road centerline(LaneMidpoint)" },
		{ "Centerline.Name", "EStampEdgeSnap::Centerline" },
		{ "Comment", "/**\n * \n *///The Enum we use to select which edge to attach the stamp\n" },
		{ "Lane.DisplayName", "Attach to the road lane" },
		{ "Lane.Name", "EStampEdgeSnap::Lane" },
		{ "LeftEdge.DisplayName", "Attach to the outer edge on the left hand side" },
		{ "LeftEdge.Name", "EStampEdgeSnap::LeftEdge" },
		{ "ModuleRelativePath", "Public/RoadStamp.h" },
		{ "None.Name", "EStampEdgeSnap::None" },
		{ "RightEdge.DisplayName", "Attach to the outer edge on the right hand side" },
		{ "RightEdge.Name", "EStampEdgeSnap::RightEdge" },
		{ "ToolTip", "//The Enum we use to select which edge to attach the stamp" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStampEdgeSnap::None", (int64)EStampEdgeSnap::None },
		{ "EStampEdgeSnap::Centerline", (int64)EStampEdgeSnap::Centerline },
		{ "EStampEdgeSnap::LeftEdge", (int64)EStampEdgeSnap::LeftEdge },
		{ "EStampEdgeSnap::RightEdge", (int64)EStampEdgeSnap::RightEdge },
		{ "EStampEdgeSnap::Lane", (int64)EStampEdgeSnap::Lane },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	"EStampEdgeSnap",
	"EStampEdgeSnap",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EStampEdgeSnap;
UEnum* Z_Construct_UEnum_RoadBLDRuntime_EStampEdgeSnap(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EStampEdgeSnap.OuterSingleton)
		{
			ZRIE_EStampEdgeSnap.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDRuntime_EStampEdgeSnap, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("EStampEdgeSnap"));
		}
		return ZRIE_EStampEdgeSnap.OuterSingleton;
	}
	if (!ZRIE_EStampEdgeSnap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EStampEdgeSnap.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EStampEdgeSnap.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EStampEdgeSnap **************************************************************

// ********** Begin ScriptStruct FRoadStampSettings ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRoadStampSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRoadStampSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRoadStampSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//The struct we use to pre-define the settings in a preset\n" },
		{ "ModuleRelativePath", "Public/RoadStamp.h" },
		{ "ToolTip", "The struct we use to pre-define the settings in a preset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshToUse_MetaData[] = {
		{ "Category", "RoadStamp" },
		{ "Comment", "//The mesh used for this stamp\n" },
		{ "ModuleRelativePath", "Public/RoadStamp.h" },
		{ "ToolTip", "The mesh used for this stamp" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "RoadStamp" },
		{ "Comment", "//The Distance along the road to spawn this stamp at\n" },
		{ "ModuleRelativePath", "Public/RoadStamp.h" },
		{ "ToolTip", "The Distance along the road to spawn this stamp at" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeOffset_MetaData[] = {
		{ "Category", "RoadStamp" },
		{ "Comment", "//The sideways offset from whatever edge this stamp is attached to, be it the centerline, left edge, right edge, or lane.\n" },
		{ "ModuleRelativePath", "Public/RoadStamp.h" },
		{ "ToolTip", "The sideways offset from whatever edge this stamp is attached to, be it the centerline, left edge, right edge, or lane." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StampScale_MetaData[] = {
		{ "Category", "RoadStamp" },
		{ "Comment", "//The scale multiplier applied to the Stamp.\n" },
		{ "ModuleRelativePath", "Public/RoadStamp.h" },
		{ "ToolTip", "The scale multiplier applied to the Stamp." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOffset_MetaData[] = {
		{ "Category", "RoadStamp" },
		{ "Comment", "//The vertical Z offset from whatever element this Stamp is attached to.\n" },
		{ "ModuleRelativePath", "Public/RoadStamp.h" },
		{ "ToolTip", "The vertical Z offset from whatever element this Stamp is attached to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnappingMode_MetaData[] = {
		{ "Category", "RoadStamp" },
		{ "Comment", "//How the snapping is handled.\n" },
		{ "ModuleRelativePath", "Public/RoadStamp.h" },
		{ "ToolTip", "How the snapping is handled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "Category", "RoadStamp" },
		{ "Comment", "//The offset to apply to the rotation of the stamp.\n" },
		{ "ModuleRelativePath", "Public/RoadStamp.h" },
		{ "ToolTip", "The offset to apply to the rotation of the stamp." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLane_MetaData[] = {
		{ "Category", "RoadStamp" },
		{ "Comment", "//The lane to snap the stamp to.\n" },
		{ "ModuleRelativePath", "Public/RoadStamp.h" },
		{ "ToolTip", "The lane to snap the stamp to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRoad_MetaData[] = {
		{ "Category", "RoadStamp" },
		{ "ModuleRelativePath", "Public/RoadStamp.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRoadStampSettings constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshToUse;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EdgeOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StampScale;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ZOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SnappingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SnappingMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetLane;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetRoad;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRoadStampSettings constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadStampSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRoadStampSettings Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MeshToUse = { "MeshToUse", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadStampSettings, MeshToUse), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshToUse_MetaData), NewProp_MeshToUse_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadStampSettings, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_EdgeOffset = { "EdgeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadStampSettings, EdgeOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeOffset_MetaData), NewProp_EdgeOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_StampScale = { "StampScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadStampSettings, StampScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StampScale_MetaData), NewProp_StampScale_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadStampSettings, ZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOffset_MetaData), NewProp_ZOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SnappingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SnappingMode = { "SnappingMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadStampSettings, SnappingMode), Z_Construct_UEnum_RoadBLDRuntime_EStampEdgeSnap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnappingMode_MetaData), NewProp_SnappingMode_MetaData) }; // 0e2bae28311cf536129779c6e09d100ef5cfa047
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadStampSettings, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetLane = { "TargetLane", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadStampSettings, TargetLane), Z_Construct_UClass_UDynamicRoadLane, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLane_MetaData), NewProp_TargetLane_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetRoad = { "TargetRoad", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadStampSettings, TargetRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRoad_MetaData), NewProp_TargetRoad_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MeshToUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StampScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SnappingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SnappingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetLane,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetRoad,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRoadStampSettings Property Definitions *****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"RoadStampSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRoadStampSettings>(),
	alignof(FRoadStampSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRoadStampSettings;
UScriptStruct* Z_Construct_UScriptStruct_FRoadStampSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRoadStampSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRoadStampSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadStampSettings, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("RoadStampSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FRoadStampSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRoadStampSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRoadStampSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRoadStampSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRoadStampSettings **************************************************

// ********** Begin Class URoadStamp ***************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoadStamp_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RoadStamp.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RoadStamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "RoadStamp" },
		{ "ModuleRelativePath", "Public/RoadStamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverride_MetaData[] = {
		{ "Category", "RoadStamp" },
		{ "Comment", "// Optional material override for slot 0 on the stamp mesh component.\n" },
		{ "ModuleRelativePath", "Public/RoadStamp.h" },
		{ "ToolTip", "Optional material override for slot 0 on the stamp mesh component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshInstanceID_MetaData[] = {
		{ "Category", "RoadStamp" },
		{ "ModuleRelativePath", "Public/RoadStamp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMeshComponent_MetaData[] = {
		{ "Category", "RoadStamp" },
		{ "Comment", "//Save the InstMesh Component used to spawn the stamps, so we can select and edit the stamps later.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RoadStamp.h" },
		{ "ToolTip", "Save the InstMesh Component used to spawn the stamps, so we can select and edit the stamps later." },
	};
#endif // WITH_METADATA

// ********** Begin Class URoadStamp constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialOverride;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MeshInstanceID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URoadStamp constinit property declarations *********************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadStamp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URoadStamp Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URoadStamp, Settings), Z_Construct_UScriptStruct_FRoadStampSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 25e7a5ee0ba483aa6f11c2fca08ea2c6301b2012
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MaterialOverride = { "MaterialOverride", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadStamp, MaterialOverride), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialOverride_MetaData), NewProp_MaterialOverride_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MeshInstanceID = { "MeshInstanceID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(URoadStamp, MeshInstanceID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshInstanceID_MetaData), NewProp_MeshInstanceID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetMeshComponent = { "TargetMeshComponent", nullptr, (EPropertyFlags)0x011400000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadStamp, TargetMeshComponent), Z_Construct_UClass_UInstancedStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMeshComponent_MetaData), NewProp_TargetMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaterialOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MeshInstanceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetMeshComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URoadStamp Property Definitions ********************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoadStamp,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_URoadStamp;
UClass* Z_Construct_UClass_URoadStamp(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoadStamp;
		if (!Z_Registration_Info_UClass_URoadStamp.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadStamp"),
				Z_Registration_Info_UClass_URoadStamp.InnerSingleton,
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
		return Z_Registration_Info_UClass_URoadStamp.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoadStamp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoadStamp.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoadStamp.OuterSingleton;
}
#undef UHT_STATICS
URoadStamp::URoadStamp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoadStamp);
URoadStamp::~URoadStamp() {}
// ********** End Class URoadStamp *****************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadStamp_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RoadBLDRuntime_EStampEdgeSnap, TEXT("EStampEdgeSnap"), &ZRIE_EStampEdgeSnap, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 237743656U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FRoadStampSettings, Z_Construct_UScriptStruct_FRoadStampSettings_Statics::NewStructOps, TEXT("RoadStampSettings"),&Z_Registration_Info_UScriptStruct_FRoadStampSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadStampSettings), 635938286U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoadStamp, TEXT("URoadStamp"), &Z_Registration_Info_UClass_URoadStamp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoadStamp), 632650693U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadStamp_h__Script_RoadBLDRuntime_65b04f9d04568e5ccbbaea1f385820e1b6613237{
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
