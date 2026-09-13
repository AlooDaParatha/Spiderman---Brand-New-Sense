// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreetMap/StreetMapUtils.h"
#include "StreetMap/StreetMap.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeStreetMapUtils() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USplineComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FBuildingFootprint(ETypeConstructPhase);
TWINBLDEDITOR_API UEnum* Z_Construct_UEnum_TwinBLDEditor_EOSMWayType(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FRoadsIndicesourceSet(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapBuilding(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapBuildingFootprintResult(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapBuildingFootprintSettings(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoad(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoadJoint(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoadJointItem(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoadStrip(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoadStripResult(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoadStripSettings(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapSegmentTags(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UStreetMapUtils(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UStreetMap(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UStreetMapUtils(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FStreetMapBuildingFootprintSettings *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FStreetMapBuildingFootprintSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FStreetMapBuildingFootprintSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStreetMapBuildingFootprintSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStreetMapBuildingFootprintSettings constinit property declarations 
// ********** End ScriptStruct FStreetMapBuildingFootprintSettings constinit property declarations *
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapBuildingFootprintSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"StreetMapBuildingFootprintSettings",
	nullptr,
	0,
	DataSizeOf<FStreetMapBuildingFootprintSettings>(),
	alignof(FStreetMapBuildingFootprintSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStreetMapBuildingFootprintSettings;
UScriptStruct* Z_Construct_UScriptStruct_FStreetMapBuildingFootprintSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FStreetMapBuildingFootprintSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FStreetMapBuildingFootprintSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapBuildingFootprintSettings, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("StreetMapBuildingFootprintSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FStreetMapBuildingFootprintSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FStreetMapBuildingFootprintSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStreetMapBuildingFootprintSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStreetMapBuildingFootprintSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FStreetMapBuildingFootprintSettings *********************************

// ********** Begin ScriptStruct FBuildingFootprint ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FBuildingFootprint_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FBuildingFootprint>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FBuildingFootprint); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//USTRUCT(BlueprintType)\n//struct FStreetMapBuildingPart\n//{\n//\x09GENERATED_BODY()\n//\n//\x09UPROPERTY(Category = StreetMap, BlueprintReadWrite, EditAnywhere) TMap<FName, FString> Tags;\x09\n//\x09UPROPERTY(Category = StreetMap, BlueprintReadWrite, EditAnywhere) TArray<FVector2D> Points;\x09\n//\x09UPROPERTY(Category = StreetMap, BlueprintReadWrite, EditAnywhere) float Height {0};\n//\x09UPROPERTY(Category = StreetMap, BlueprintReadWrite, EditAnywhere) float MinHeight {0};\n//\x09UPROPERTY(Category = StreetMap, EditAnywhere) int32 Levels {0};\n//\x09UPROPERTY(Category = StreetMap, EditAnywhere) EBuildingPartRole Role { EBuildingPartRole::EBPRole_None};\n//};\n//\n//USTRUCT(BlueprintType)\n//struct FStreetMapBuildingFootprint\n//{\n//\x09GENERATED_BODY()\n//\x09\x09\n//\x09UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = \"Footprint\")\n//\x09int32 SourceIndex{ -1 };\n//\n//\x09UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=\"Footprint\")\n//\x09TArray<FStreetMapBuildingPart> Parts;\n//\x09\n//\x09UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=\"Footprint\")\n//\x09TMap<FName, FString> Tags;\x09\n//};\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
		{ "ToolTip", "USTRUCT(BlueprintType)\nstruct FStreetMapBuildingPart\n{\n       GENERATED_BODY()\n\n       UPROPERTY(Category = StreetMap, BlueprintReadWrite, EditAnywhere) TMap<FName, FString> Tags;\n       UPROPERTY(Category = StreetMap, BlueprintReadWrite, EditAnywhere) TArray<FVector2D> Points;\n       UPROPERTY(Category = StreetMap, BlueprintReadWrite, EditAnywhere) float Height {0};\n       UPROPERTY(Category = StreetMap, BlueprintReadWrite, EditAnywhere) float MinHeight {0};\n       UPROPERTY(Category = StreetMap, EditAnywhere) int32 Levels {0};\n       UPROPERTY(Category = StreetMap, EditAnywhere) EBuildingPartRole Role { EBuildingPartRole::EBPRole_None};\n};\n\nUSTRUCT(BlueprintType)\nstruct FStreetMapBuildingFootprint\n{\n       GENERATED_BODY()\n\n       UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = \"Footprint\")\n       int32 SourceIndex{ -1 };\n\n       UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=\"Footprint\")\n       TArray<FStreetMapBuildingPart> Parts;\n\n       UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=\"Footprint\")\n       TMap<FName, FString> Tags;\n};" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterPoint_MetaData[] = {
		{ "Category", "Footprint" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuggestedOrientation_MetaData[] = {
		{ "Category", "Footprint" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[] = {
		{ "Category", "Footprint" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportantSegments_MetaData[] = {
		{ "Category", "Footprint" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuggestedHeight_MetaData[] = {
		{ "Category", "Footprint" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SquareMeters_MetaData[] = {
		{ "Category", "Footprint" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "Footprint" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceIndex_MetaData[] = {
		{ "Category", "Footprint" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FBuildingFootprint constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CenterPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SuggestedOrientation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ImportantSegments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ImportantSegments;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SuggestedHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SquareMeters;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FBuildingFootprint constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildingFootprint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FBuildingFootprint Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CenterPoint = { "CenterPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingFootprint, CenterPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterPoint_MetaData), NewProp_CenterPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SuggestedOrientation = { "SuggestedOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingFootprint, SuggestedOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuggestedOrientation_MetaData), NewProp_SuggestedOrientation_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingFootprint, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Positions_MetaData), NewProp_Positions_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ImportantSegments_Inner = { "ImportantSegments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ImportantSegments = { "ImportantSegments", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingFootprint, ImportantSegments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportantSegments_MetaData), NewProp_ImportantSegments_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SuggestedHeight = { "SuggestedHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingFootprint, SuggestedHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuggestedHeight_MetaData), NewProp_SuggestedHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SquareMeters = { "SquareMeters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingFootprint, SquareMeters), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SquareMeters_MetaData), NewProp_SquareMeters_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Tags_ValueProp = { "Tags", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Tags_Key_KeyProp = { "Tags_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingFootprint, Tags), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingFootprint, SourceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceIndex_MetaData), NewProp_SourceIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CenterPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SuggestedOrientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Positions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Positions,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ImportantSegments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ImportantSegments,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SuggestedHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SquareMeters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tags_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tags_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FBuildingFootprint Property Definitions *****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"BuildingFootprint",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FBuildingFootprint>(),
	alignof(FBuildingFootprint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBuildingFootprint;
UScriptStruct* Z_Construct_UScriptStruct_FBuildingFootprint(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FBuildingFootprint.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FBuildingFootprint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildingFootprint, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("BuildingFootprint"));
		}
		return Z_Registration_Info_UScriptStruct_FBuildingFootprint.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FBuildingFootprint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBuildingFootprint.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FBuildingFootprint.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FBuildingFootprint **************************************************

// ********** Begin ScriptStruct FStreetMapBuildingFootprintResult *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FStreetMapBuildingFootprintResult_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FStreetMapBuildingFootprintResult>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStreetMapBuildingFootprintResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Footprints_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStreetMapBuildingFootprintResult constinit property declarations *
	static const UECodeGen_Private::FStructPropertyParams NewProp_Footprints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Footprints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStreetMapBuildingFootprintResult constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapBuildingFootprintResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FStreetMapBuildingFootprintResult Property Definitions ************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Footprints_Inner = { "Footprints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBuildingFootprint, METADATA_PARAMS(0, nullptr) }; // 9b02bad4ef00291fb32d6f7741b13cc4390a406d
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Footprints = { "Footprints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapBuildingFootprintResult, Footprints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Footprints_MetaData), NewProp_Footprints_MetaData) }; // 9b02bad4ef00291fb32d6f7741b13cc4390a406d
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Footprints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Footprints,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FStreetMapBuildingFootprintResult Property Definitions **************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"StreetMapBuildingFootprintResult",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FStreetMapBuildingFootprintResult>(),
	alignof(FStreetMapBuildingFootprintResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStreetMapBuildingFootprintResult;
UScriptStruct* Z_Construct_UScriptStruct_FStreetMapBuildingFootprintResult(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FStreetMapBuildingFootprintResult.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FStreetMapBuildingFootprintResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapBuildingFootprintResult, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("StreetMapBuildingFootprintResult"));
		}
		return Z_Registration_Info_UScriptStruct_FStreetMapBuildingFootprintResult.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FStreetMapBuildingFootprintResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStreetMapBuildingFootprintResult.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStreetMapBuildingFootprintResult.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FStreetMapBuildingFootprintResult ***********************************

// ********** Begin ScriptStruct FStreetMapSegmentTags *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FStreetMapSegmentTags_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FStreetMapSegmentTags>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStreetMapSegmentTags); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Wrapper struct for segment tags to allow use in TArray with UPROPERTY\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
		{ "ToolTip", "Wrapper struct for segment tags to allow use in TArray with UPROPERTY" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "Tags" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStreetMapSegmentTags constinit property declarations *************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStreetMapSegmentTags constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapSegmentTags>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FStreetMapSegmentTags Property Definitions ************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Tags_ValueProp = { "Tags", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Tags_Key_KeyProp = { "Tags_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapSegmentTags, Tags), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tags_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tags_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tags,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FStreetMapSegmentTags Property Definitions **************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"StreetMapSegmentTags",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FStreetMapSegmentTags>(),
	alignof(FStreetMapSegmentTags),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStreetMapSegmentTags;
UScriptStruct* Z_Construct_UScriptStruct_FStreetMapSegmentTags(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FStreetMapSegmentTags.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FStreetMapSegmentTags.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapSegmentTags, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("StreetMapSegmentTags"));
		}
		return Z_Registration_Info_UScriptStruct_FStreetMapSegmentTags.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FStreetMapSegmentTags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStreetMapSegmentTags.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStreetMapSegmentTags.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FStreetMapSegmentTags ***********************************************

// ********** Begin ScriptStruct FStreetMapRoadJointItem *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FStreetMapRoadJointItem_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FStreetMapRoadJointItem>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStreetMapRoadJointItem); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadActor_MetaData[] = {
		{ "Category", "Road" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadIndex_MetaData[] = {
		{ "Category", "Road" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadPointIndex_MetaData[] = {
		{ "Category", "Road" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStreetMapRoadJointItem constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoadActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoadIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoadPointIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStreetMapRoadJointItem constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapRoadJointItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FStreetMapRoadJointItem Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoadActor = { "RoadActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoadJointItem, RoadActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadActor_MetaData), NewProp_RoadActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_RoadIndex = { "RoadIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoadJointItem, RoadIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadIndex_MetaData), NewProp_RoadIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_RoadPointIndex = { "RoadPointIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoadJointItem, RoadPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadPointIndex_MetaData), NewProp_RoadPointIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadPointIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FStreetMapRoadJointItem Property Definitions ************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"StreetMapRoadJointItem",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FStreetMapRoadJointItem>(),
	alignof(FStreetMapRoadJointItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStreetMapRoadJointItem;
UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoadJointItem(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FStreetMapRoadJointItem.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FStreetMapRoadJointItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapRoadJointItem, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("StreetMapRoadJointItem"));
		}
		return Z_Registration_Info_UScriptStruct_FStreetMapRoadJointItem.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FStreetMapRoadJointItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStreetMapRoadJointItem.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStreetMapRoadJointItem.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FStreetMapRoadJointItem *********************************************

// ********** Begin ScriptStruct FStreetMapRoadJoint ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FStreetMapRoadJoint_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FStreetMapRoadJoint>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStreetMapRoadJoint); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "Category", "Road" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrincipalAssignedActor_MetaData[] = {
		{ "Category", "Road" },
		{ "Comment", "// Runtime variable used to store the actor that was spawned.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
		{ "ToolTip", "Runtime variable used to store the actor that was spawned." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStreetMapRoadJoint constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrincipalAssignedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStreetMapRoadJoint constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapRoadJoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FStreetMapRoadJoint Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStreetMapRoadJointItem, METADATA_PARAMS(0, nullptr) }; // a7af6809c4a2837cbade0b70e4c31c586f633211
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoadJoint, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // a7af6809c4a2837cbade0b70e4c31c586f633211
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PrincipalAssignedActor = { "PrincipalAssignedActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoadJoint, PrincipalAssignedActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrincipalAssignedActor_MetaData), NewProp_PrincipalAssignedActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PrincipalAssignedActor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FStreetMapRoadJoint Property Definitions ****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"StreetMapRoadJoint",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FStreetMapRoadJoint>(),
	alignof(FStreetMapRoadJoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStreetMapRoadJoint;
UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoadJoint(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FStreetMapRoadJoint.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FStreetMapRoadJoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapRoadJoint, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("StreetMapRoadJoint"));
		}
		return Z_Registration_Info_UScriptStruct_FStreetMapRoadJoint.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FStreetMapRoadJoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStreetMapRoadJoint.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStreetMapRoadJoint.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FStreetMapRoadJoint *************************************************

// ********** Begin ScriptStruct FRoadsIndicesourceSet *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRoadsIndicesourceSet_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRoadsIndicesourceSet>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRoadsIndicesourceSet); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceIndices_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRoadsIndicesourceSet constinit property declarations *************
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRoadsIndicesourceSet constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadsIndicesourceSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRoadsIndicesourceSet Property Definitions ************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SourceIndices_Inner = { "SourceIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SourceIndices = { "SourceIndices", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadsIndicesourceSet, SourceIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceIndices_MetaData), NewProp_SourceIndices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceIndices,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRoadsIndicesourceSet Property Definitions **************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"RoadsIndicesourceSet",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRoadsIndicesourceSet>(),
	alignof(FRoadsIndicesourceSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRoadsIndicesourceSet;
UScriptStruct* Z_Construct_UScriptStruct_FRoadsIndicesourceSet(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRoadsIndicesourceSet.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRoadsIndicesourceSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadsIndicesourceSet, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("RoadsIndicesourceSet"));
		}
		return Z_Registration_Info_UScriptStruct_FRoadsIndicesourceSet.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRoadsIndicesourceSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRoadsIndicesourceSet.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRoadsIndicesourceSet.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRoadsIndicesourceSet ***********************************************

// ********** Begin ScriptStruct FStreetMapRoadStripSettings ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FStreetMapRoadStripSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FStreetMapRoadStripSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStreetMapRoadStripSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugFocusRoads_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipUnnamedRoads_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// When true, roads without a \"name\" tag will be skipped\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
		{ "ToolTip", "When true, roads without a \"name\" tag will be skipped" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMergeContinuousRoads_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// When true, road strips with the same name that are geometrically connected will be merged\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
		{ "ToolTip", "When true, road strips with the same name that are geometrically connected will be merged" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStitchGeometricallyAlignedRoads_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// When true, endpoint-aligned strips are stitched even if source roads differ.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
		{ "ToolTip", "When true, endpoint-aligned strips are stitched even if source roads differ." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePointSimplification_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// When enabled, applies endpoint-preserving simplification to imported road points before merge/stitch.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
		{ "ToolTip", "When enabled, applies endpoint-preserving simplification to imported road points before merge/stitch." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointSimplificationToleranceCm_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Simplification tolerance in world centimeters (higher values remove more points).\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
		{ "ToolTip", "Simplification tolerance in world centimeters (higher values remove more points)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGeneratedTurnRadius_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Default turn radius assigned to generated road control spline points.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
		{ "ToolTip", "Default turn radius assigned to generated road control spline points." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StitchEndpointToleranceCm_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Maximum endpoint separation (in cm) allowed for stitching.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
		{ "ToolTip", "Maximum endpoint separation (in cm) allowed for stitching." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StitchMaxDeflectionDeg_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Maximum heading mismatch at a stitched join (0 = perfectly collinear).\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
		{ "ToolTip", "Maximum heading mismatch at a stitched join (0 = perfectly collinear)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireStitchTagCompatibility_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// When true, candidate strips must agree on key road tags before stitching.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
		{ "ToolTip", "When true, candidate strips must agree on key road tags before stitching." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeBridges_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// When false, roads tagged as bridges are excluded from import.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
		{ "ToolTip", "When false, roads tagged as bridges are excluded from import." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeTunnels_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// When false, roads tagged as tunnels are excluded from import.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
		{ "ToolTip", "When false, roads tagged as tunnels are excluded from import." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxGeneratedRoadLengthCm_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Maximum generated strip length in world centimeters (0 disables splitting).\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
		{ "ToolTip", "Maximum generated strip length in world centimeters (0 disables splitting)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OctreeQueryExtent_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceThresholdSq_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColliniearAngleThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DuplicatesDistanceThreshold_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceWeight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleWeight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToLandscape_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSplitSelfIntersectingRoads_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnabledWayTypes_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHeight_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStreetMapRoadStripSettings constinit property declarations *******
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugFocusRoads_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugFocusRoads;
	static void NewProp_bSkipUnnamedRoads_SetBit(void* Obj)
	{
		((FStreetMapRoadStripSettings*)Obj)->bSkipUnnamedRoads = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipUnnamedRoads;
	static void NewProp_bMergeContinuousRoads_SetBit(void* Obj)
	{
		((FStreetMapRoadStripSettings*)Obj)->bMergeContinuousRoads = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeContinuousRoads;
	static void NewProp_bStitchGeometricallyAlignedRoads_SetBit(void* Obj)
	{
		((FStreetMapRoadStripSettings*)Obj)->bStitchGeometricallyAlignedRoads = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStitchGeometricallyAlignedRoads;
	static void NewProp_bEnablePointSimplification_SetBit(void* Obj)
	{
		((FStreetMapRoadStripSettings*)Obj)->bEnablePointSimplification = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePointSimplification;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PointSimplificationToleranceCm;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultGeneratedTurnRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StitchEndpointToleranceCm;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StitchMaxDeflectionDeg;
	static void NewProp_bRequireStitchTagCompatibility_SetBit(void* Obj)
	{
		((FStreetMapRoadStripSettings*)Obj)->bRequireStitchTagCompatibility = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireStitchTagCompatibility;
	static void NewProp_bIncludeBridges_SetBit(void* Obj)
	{
		((FStreetMapRoadStripSettings*)Obj)->bIncludeBridges = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeBridges;
	static void NewProp_bIncludeTunnels_SetBit(void* Obj)
	{
		((FStreetMapRoadStripSettings*)Obj)->bIncludeTunnels = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeTunnels;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxGeneratedRoadLengthCm;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OctreeQueryExtent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceThresholdSq;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ColliniearAngleThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DuplicatesDistanceThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleWeight;
	static void NewProp_bSnapToLandscape_SetBit(void* Obj)
	{
		((FStreetMapRoadStripSettings*)Obj)->bSnapToLandscape = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToLandscape;
	static void NewProp_bSplitSelfIntersectingRoads_SetBit(void* Obj)
	{
		((FStreetMapRoadStripSettings*)Obj)->bSplitSelfIntersectingRoads = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplitSelfIntersectingRoads;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnabledWayTypes_ElementProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EnabledWayTypes_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_EnabledWayTypes;
	static void NewProp_bUseHeight_SetBit(void* Obj)
	{
		((FStreetMapRoadStripSettings*)Obj)->bUseHeight = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStreetMapRoadStripSettings constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapRoadStripSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FStreetMapRoadStripSettings Property Definitions ******************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_DebugFocusRoads_Inner = { "DebugFocusRoads", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_DebugFocusRoads = { "DebugFocusRoads", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoadStripSettings, DebugFocusRoads), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugFocusRoads_MetaData), NewProp_DebugFocusRoads_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSkipUnnamedRoads = { "bSkipUnnamedRoads", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FStreetMapRoadStripSettings), &UHT_STATICS::NewProp_bSkipUnnamedRoads_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipUnnamedRoads_MetaData), NewProp_bSkipUnnamedRoads_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bMergeContinuousRoads = { "bMergeContinuousRoads", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FStreetMapRoadStripSettings), &UHT_STATICS::NewProp_bMergeContinuousRoads_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMergeContinuousRoads_MetaData), NewProp_bMergeContinuousRoads_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bStitchGeometricallyAlignedRoads = { "bStitchGeometricallyAlignedRoads", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FStreetMapRoadStripSettings), &UHT_STATICS::NewProp_bStitchGeometricallyAlignedRoads_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStitchGeometricallyAlignedRoads_MetaData), NewProp_bStitchGeometricallyAlignedRoads_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnablePointSimplification = { "bEnablePointSimplification", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FStreetMapRoadStripSettings), &UHT_STATICS::NewProp_bEnablePointSimplification_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePointSimplification_MetaData), NewProp_bEnablePointSimplification_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PointSimplificationToleranceCm = { "PointSimplificationToleranceCm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoadStripSettings, PointSimplificationToleranceCm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointSimplificationToleranceCm_MetaData), NewProp_PointSimplificationToleranceCm_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DefaultGeneratedTurnRadius = { "DefaultGeneratedTurnRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoadStripSettings, DefaultGeneratedTurnRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultGeneratedTurnRadius_MetaData), NewProp_DefaultGeneratedTurnRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StitchEndpointToleranceCm = { "StitchEndpointToleranceCm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoadStripSettings, StitchEndpointToleranceCm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StitchEndpointToleranceCm_MetaData), NewProp_StitchEndpointToleranceCm_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StitchMaxDeflectionDeg = { "StitchMaxDeflectionDeg", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoadStripSettings, StitchMaxDeflectionDeg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StitchMaxDeflectionDeg_MetaData), NewProp_StitchMaxDeflectionDeg_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRequireStitchTagCompatibility = { "bRequireStitchTagCompatibility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FStreetMapRoadStripSettings), &UHT_STATICS::NewProp_bRequireStitchTagCompatibility_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireStitchTagCompatibility_MetaData), NewProp_bRequireStitchTagCompatibility_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIncludeBridges = { "bIncludeBridges", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FStreetMapRoadStripSettings), &UHT_STATICS::NewProp_bIncludeBridges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeBridges_MetaData), NewProp_bIncludeBridges_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIncludeTunnels = { "bIncludeTunnels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FStreetMapRoadStripSettings), &UHT_STATICS::NewProp_bIncludeTunnels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeTunnels_MetaData), NewProp_bIncludeTunnels_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaxGeneratedRoadLengthCm = { "MaxGeneratedRoadLengthCm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoadStripSettings, MaxGeneratedRoadLengthCm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxGeneratedRoadLengthCm_MetaData), NewProp_MaxGeneratedRoadLengthCm_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_OctreeQueryExtent = { "OctreeQueryExtent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoadStripSettings, OctreeQueryExtent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OctreeQueryExtent_MetaData), NewProp_OctreeQueryExtent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DistanceThresholdSq = { "DistanceThresholdSq", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoadStripSettings, DistanceThresholdSq), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceThresholdSq_MetaData), NewProp_DistanceThresholdSq_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AngleThreshold = { "AngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoadStripSettings, AngleThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleThreshold_MetaData), NewProp_AngleThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ColliniearAngleThreshold = { "ColliniearAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoadStripSettings, ColliniearAngleThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColliniearAngleThreshold_MetaData), NewProp_ColliniearAngleThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DuplicatesDistanceThreshold = { "DuplicatesDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoadStripSettings, DuplicatesDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DuplicatesDistanceThreshold_MetaData), NewProp_DuplicatesDistanceThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DistanceWeight = { "DistanceWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoadStripSettings, DistanceWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceWeight_MetaData), NewProp_DistanceWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_AngleWeight = { "AngleWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoadStripSettings, AngleWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleWeight_MetaData), NewProp_AngleWeight_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSnapToLandscape = { "bSnapToLandscape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FStreetMapRoadStripSettings), &UHT_STATICS::NewProp_bSnapToLandscape_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapToLandscape_MetaData), NewProp_bSnapToLandscape_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSplitSelfIntersectingRoads = { "bSplitSelfIntersectingRoads", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FStreetMapRoadStripSettings), &UHT_STATICS::NewProp_bSplitSelfIntersectingRoads_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSplitSelfIntersectingRoads_MetaData), NewProp_bSplitSelfIntersectingRoads_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_EnabledWayTypes_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_EnabledWayTypes_ElementProp = { "EnabledWayTypes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, 0, Z_Construct_UEnum_TwinBLDEditor_EOSMWayType, METADATA_PARAMS(0, nullptr) }; // 5b1e381aeff0552c511b4c1744d11a209d3e48e0
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_EnabledWayTypes = { "EnabledWayTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoadStripSettings, EnabledWayTypes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnabledWayTypes_MetaData), NewProp_EnabledWayTypes_MetaData) }; // 5b1e381aeff0552c511b4c1744d11a209d3e48e0
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseHeight = { "bUseHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FStreetMapRoadStripSettings), &UHT_STATICS::NewProp_bUseHeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHeight_MetaData), NewProp_bUseHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DebugFocusRoads_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DebugFocusRoads,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSkipUnnamedRoads,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bMergeContinuousRoads,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bStitchGeometricallyAlignedRoads,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnablePointSimplification,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointSimplificationToleranceCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultGeneratedTurnRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StitchEndpointToleranceCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StitchMaxDeflectionDeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRequireStitchTagCompatibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIncludeBridges,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIncludeTunnels,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxGeneratedRoadLengthCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OctreeQueryExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DistanceThresholdSq,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AngleThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ColliniearAngleThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DuplicatesDistanceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DistanceWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AngleWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSnapToLandscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSplitSelfIntersectingRoads,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnabledWayTypes_ElementProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnabledWayTypes_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnabledWayTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseHeight,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FStreetMapRoadStripSettings Property Definitions ********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"StreetMapRoadStripSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FStreetMapRoadStripSettings>(),
	alignof(FStreetMapRoadStripSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStreetMapRoadStripSettings;
UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoadStripSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FStreetMapRoadStripSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FStreetMapRoadStripSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapRoadStripSettings, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("StreetMapRoadStripSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FStreetMapRoadStripSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FStreetMapRoadStripSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStreetMapRoadStripSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStreetMapRoadStripSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FStreetMapRoadStripSettings *****************************************

// ********** Begin ScriptStruct FStreetMapRoadStrip ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FStreetMapRoadStrip_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FStreetMapRoadStrip>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStreetMapRoadStrip); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceIndex_MetaData[] = {
		{ "Category", "Road" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
		{ "Category", "Road" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[] = {
		{ "Category", "Road" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrincipalAssignedActor_MetaData[] = {
		{ "Category", "Road" },
		{ "Comment", "// Runtime variable used to store the actor that was spawned.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
		{ "ToolTip", "Runtime variable used to store the actor that was spawned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergedSourceIndices_MetaData[] = {
		{ "Category", "Road" },
		{ "Comment", "// Array of source indices when multiple road segments are merged (empty if single segment)\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
		{ "ToolTip", "Array of source indices when multiple road segments are merged (empty if single segment)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergedSegmentTags_MetaData[] = {
		{ "Category", "Road" },
		{ "Comment", "// Array of tags for each merged segment, preserving individual segment metadata\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
		{ "ToolTip", "Array of tags for each merged segment, preserving individual segment metadata" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStreetMapRoadStrip constinit property declarations ***************
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrincipalAssignedActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MergedSourceIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MergedSourceIndices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MergedSegmentTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MergedSegmentTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStreetMapRoadStrip constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapRoadStrip>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FStreetMapRoadStrip Property Definitions **************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoadStrip, SourceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceIndex_MetaData), NewProp_SourceIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoadStrip, StartPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPosition_MetaData), NewProp_StartPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoadStrip, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Positions_MetaData), NewProp_Positions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PrincipalAssignedActor = { "PrincipalAssignedActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoadStrip, PrincipalAssignedActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrincipalAssignedActor_MetaData), NewProp_PrincipalAssignedActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MergedSourceIndices_Inner = { "MergedSourceIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_MergedSourceIndices = { "MergedSourceIndices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoadStrip, MergedSourceIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergedSourceIndices_MetaData), NewProp_MergedSourceIndices_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_MergedSegmentTags_Inner = { "MergedSegmentTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStreetMapSegmentTags, METADATA_PARAMS(0, nullptr) }; // edf3c2a3dd1f178c25a167fdbe2a4672bb1db4ce
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_MergedSegmentTags = { "MergedSegmentTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoadStrip, MergedSegmentTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergedSegmentTags_MetaData), NewProp_MergedSegmentTags_MetaData) }; // edf3c2a3dd1f178c25a167fdbe2a4672bb1db4ce
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Positions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Positions,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PrincipalAssignedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MergedSourceIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MergedSourceIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MergedSegmentTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MergedSegmentTags,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FStreetMapRoadStrip Property Definitions ****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"StreetMapRoadStrip",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FStreetMapRoadStrip>(),
	alignof(FStreetMapRoadStrip),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStreetMapRoadStrip;
UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoadStrip(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FStreetMapRoadStrip.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FStreetMapRoadStrip.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapRoadStrip, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("StreetMapRoadStrip"));
		}
		return Z_Registration_Info_UScriptStruct_FStreetMapRoadStrip.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FStreetMapRoadStrip.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStreetMapRoadStrip.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStreetMapRoadStrip.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FStreetMapRoadStrip *************************************************

// ********** Begin ScriptStruct FStreetMapRoadStripResult *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FStreetMapRoadStripResult_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FStreetMapRoadStripResult>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStreetMapRoadStripResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Roads_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Joints_MetaData[] = {
		{ "Category", "Result" },
		{ "Comment", "/* Node Index */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
		{ "ToolTip", "Node Index" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStreetMapRoadStripResult constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Roads_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Roads;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Joints_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Joints_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Joints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStreetMapRoadStripResult constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapRoadStripResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FStreetMapRoadStripResult Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Roads_Inner = { "Roads", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStreetMapRoadStrip, METADATA_PARAMS(0, nullptr) }; // a74a443d3a42b75c1ed2b2ff33a39d1db070153c
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Roads = { "Roads", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoadStripResult, Roads), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Roads_MetaData), NewProp_Roads_MetaData) }; // a74a443d3a42b75c1ed2b2ff33a39d1db070153c
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Joints_ValueProp = { "Joints", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FStreetMapRoadJoint, METADATA_PARAMS(0, nullptr) }; // 5d49f22e408713523bf7d05c7378d292a5948f4f
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Joints_Key_KeyProp = { "Joints_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_Joints = { "Joints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoadStripResult, Joints), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Joints_MetaData), NewProp_Joints_MetaData) }; // 5d49f22e408713523bf7d05c7378d292a5948f4f
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Roads_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Roads,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Joints_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Joints_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Joints,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FStreetMapRoadStripResult Property Definitions **********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"StreetMapRoadStripResult",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FStreetMapRoadStripResult>(),
	alignof(FStreetMapRoadStripResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStreetMapRoadStripResult;
UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoadStripResult(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FStreetMapRoadStripResult.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FStreetMapRoadStripResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapRoadStripResult, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("StreetMapRoadStripResult"));
		}
		return Z_Registration_Info_UScriptStruct_FStreetMapRoadStripResult.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FStreetMapRoadStripResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStreetMapRoadStripResult.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStreetMapRoadStripResult.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FStreetMapRoadStripResult *******************************************

// ********** Begin Class UStreetMapUtils Function GenerateBuildingFootprint ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStreetMapUtils_GenerateBuildingFootprint_Statics
struct UHT_STATICS
{
	struct StreetMapUtils_eventGenerateBuildingFootprint_Parms
	{
		FStreetMapBuilding MapBuilding;
		FStreetMapBuildingFootprintSettings Settings;
		int32 SourceIndex;
		FTransform StreetMapComponentTransform;
		FBuildingFootprint Footprint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapBuilding_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreetMapComponentTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateBuildingFootprint constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapBuilding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StreetMapComponentTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Footprint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateBuildingFootprint constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateBuildingFootprint Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_MapBuilding = { "MapBuilding", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapUtils_eventGenerateBuildingFootprint_Parms, MapBuilding), Z_Construct_UScriptStruct_FStreetMapBuilding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapBuilding_MetaData), NewProp_MapBuilding_MetaData) }; // 9c80cd0a6043d885eef18e6aeb7753379022d92d
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapUtils_eventGenerateBuildingFootprint_Parms, Settings), Z_Construct_UScriptStruct_FStreetMapBuildingFootprintSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // cf4bba6ab5b0ca3af5253f76cee92cc5eb1512ac
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapUtils_eventGenerateBuildingFootprint_Parms, SourceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_StreetMapComponentTransform = { "StreetMapComponentTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapUtils_eventGenerateBuildingFootprint_Parms, StreetMapComponentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreetMapComponentTransform_MetaData), NewProp_StreetMapComponentTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Footprint = { "Footprint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapUtils_eventGenerateBuildingFootprint_Parms, Footprint), Z_Construct_UScriptStruct_FBuildingFootprint, METADATA_PARAMS(0, nullptr) }; // 9b02bad4ef00291fb32d6f7741b13cc4390a406d
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MapBuilding,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StreetMapComponentTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Footprint,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GenerateBuildingFootprint Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStreetMapUtils, nullptr, "GenerateBuildingFootprint", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::StreetMapUtils_eventGenerateBuildingFootprint_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::StreetMapUtils_eventGenerateBuildingFootprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreetMapUtils_GenerateBuildingFootprint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStreetMapUtils::execGenerateBuildingFootprint)
{
	P_GET_STRUCT_REF(FStreetMapBuilding,Z_Param_Out_MapBuilding);
	P_GET_STRUCT_REF(FStreetMapBuildingFootprintSettings,Z_Param_Out_Settings);
	P_GET_PROPERTY(FIntProperty,Z_Param_SourceIndex);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_StreetMapComponentTransform);
	P_GET_STRUCT_REF(FBuildingFootprint,Z_Param_Out_Footprint);
	P_FINISH;
	P_NATIVE_BEGIN;
	UStreetMapUtils::GenerateBuildingFootprint(Z_Param_Out_MapBuilding,Z_Param_Out_Settings,Z_Param_SourceIndex,Z_Param_Out_StreetMapComponentTransform,Z_Param_Out_Footprint);
	P_NATIVE_END;
}
// ********** End Class UStreetMapUtils Function GenerateBuildingFootprint *************************

// ********** Begin Class UStreetMapUtils Function GenerateBuildingFootprintsFromOSM ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStreetMapUtils_GenerateBuildingFootprintsFromOSM_Statics
struct UHT_STATICS
{
	struct StreetMapUtils_eventGenerateBuildingFootprintsFromOSM_Parms
	{
		const UStreetMap* UsedStreetMap;
		FStreetMapBuildingFootprintSettings Settings;
		FTransform Transform;
		FStreetMapBuildingFootprintResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsedStreetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateBuildingFootprintsFromOSM constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UsedStreetMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateBuildingFootprintsFromOSM constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateBuildingFootprintsFromOSM Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_UsedStreetMap = { "UsedStreetMap", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapUtils_eventGenerateBuildingFootprintsFromOSM_Parms, UsedStreetMap), Z_Construct_UClass_UStreetMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsedStreetMap_MetaData), NewProp_UsedStreetMap_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapUtils_eventGenerateBuildingFootprintsFromOSM_Parms, Settings), Z_Construct_UScriptStruct_FStreetMapBuildingFootprintSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // cf4bba6ab5b0ca3af5253f76cee92cc5eb1512ac
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapUtils_eventGenerateBuildingFootprintsFromOSM_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapUtils_eventGenerateBuildingFootprintsFromOSM_Parms, OutResult), Z_Construct_UScriptStruct_FStreetMapBuildingFootprintResult, METADATA_PARAMS(0, nullptr) }; // 42cc5bd6e021120c01e60baaedb05231b613ee96
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UsedStreetMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GenerateBuildingFootprintsFromOSM Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStreetMapUtils, nullptr, "GenerateBuildingFootprintsFromOSM", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::StreetMapUtils_eventGenerateBuildingFootprintsFromOSM_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::StreetMapUtils_eventGenerateBuildingFootprintsFromOSM_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreetMapUtils_GenerateBuildingFootprintsFromOSM(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStreetMapUtils::execGenerateBuildingFootprintsFromOSM)
{
	P_GET_OBJECT(UStreetMap,Z_Param_UsedStreetMap);
	P_GET_STRUCT_REF(FStreetMapBuildingFootprintSettings,Z_Param_Out_Settings);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
	P_GET_STRUCT_REF(FStreetMapBuildingFootprintResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UStreetMapUtils::GenerateBuildingFootprintsFromOSM(Z_Param_UsedStreetMap,Z_Param_Out_Settings,Z_Param_Out_Transform,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// ********** End Class UStreetMapUtils Function GenerateBuildingFootprintsFromOSM *****************

// ********** Begin Class UStreetMapUtils Function GenerateRoadStripsFromOSM ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStreetMapUtils_GenerateRoadStripsFromOSM_Statics
struct UHT_STATICS
{
	struct StreetMapUtils_eventGenerateRoadStripsFromOSM_Parms
	{
		const UStreetMap* StreetMap;
		FStreetMapRoadStripSettings Settings;
		FTransform Transform;
		FStreetMapRoadStripResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateRoadStripsFromOSM constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StreetMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateRoadStripsFromOSM constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateRoadStripsFromOSM Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StreetMap = { "StreetMap", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapUtils_eventGenerateRoadStripsFromOSM_Parms, StreetMap), Z_Construct_UClass_UStreetMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreetMap_MetaData), NewProp_StreetMap_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapUtils_eventGenerateRoadStripsFromOSM_Parms, Settings), Z_Construct_UScriptStruct_FStreetMapRoadStripSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // b801dcef2552d12a234bd4425015d26813a95616
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapUtils_eventGenerateRoadStripsFromOSM_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapUtils_eventGenerateRoadStripsFromOSM_Parms, OutResult), Z_Construct_UScriptStruct_FStreetMapRoadStripResult, METADATA_PARAMS(0, nullptr) }; // f1c79207f3d20fa63282a6fa78f3bff2283dcfc6
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StreetMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GenerateRoadStripsFromOSM Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStreetMapUtils, nullptr, "GenerateRoadStripsFromOSM", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::StreetMapUtils_eventGenerateRoadStripsFromOSM_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::StreetMapUtils_eventGenerateRoadStripsFromOSM_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreetMapUtils_GenerateRoadStripsFromOSM(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStreetMapUtils::execGenerateRoadStripsFromOSM)
{
	P_GET_OBJECT(UStreetMap,Z_Param_StreetMap);
	P_GET_STRUCT_REF(FStreetMapRoadStripSettings,Z_Param_Out_Settings);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
	P_GET_STRUCT_REF(FStreetMapRoadStripResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UStreetMapUtils::GenerateRoadStripsFromOSM(Z_Param_StreetMap,Z_Param_Out_Settings,Z_Param_Out_Transform,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// ********** End Class UStreetMapUtils Function GenerateRoadStripsFromOSM *************************

// ********** Begin Class UStreetMapUtils Function GenerateRoadStripsFromOSM2 **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStreetMapUtils_GenerateRoadStripsFromOSM2_Statics
struct UHT_STATICS
{
	struct StreetMapUtils_eventGenerateRoadStripsFromOSM2_Parms
	{
		const UStreetMap* StreetMap;
		FStreetMapRoadStripSettings Settings;
		FTransform Transform;
		FStreetMapRoadStripResult OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateRoadStripsFromOSM2 constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StreetMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateRoadStripsFromOSM2 constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateRoadStripsFromOSM2 Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StreetMap = { "StreetMap", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapUtils_eventGenerateRoadStripsFromOSM2_Parms, StreetMap), Z_Construct_UClass_UStreetMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreetMap_MetaData), NewProp_StreetMap_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapUtils_eventGenerateRoadStripsFromOSM2_Parms, Settings), Z_Construct_UScriptStruct_FStreetMapRoadStripSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // b801dcef2552d12a234bd4425015d26813a95616
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapUtils_eventGenerateRoadStripsFromOSM2_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapUtils_eventGenerateRoadStripsFromOSM2_Parms, OutResult), Z_Construct_UScriptStruct_FStreetMapRoadStripResult, METADATA_PARAMS(0, nullptr) }; // f1c79207f3d20fa63282a6fa78f3bff2283dcfc6
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StreetMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GenerateRoadStripsFromOSM2 Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStreetMapUtils, nullptr, "GenerateRoadStripsFromOSM2", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::StreetMapUtils_eventGenerateRoadStripsFromOSM2_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::StreetMapUtils_eventGenerateRoadStripsFromOSM2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreetMapUtils_GenerateRoadStripsFromOSM2(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStreetMapUtils::execGenerateRoadStripsFromOSM2)
{
	P_GET_OBJECT(UStreetMap,Z_Param_StreetMap);
	P_GET_STRUCT_REF(FStreetMapRoadStripSettings,Z_Param_Out_Settings);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
	P_GET_STRUCT_REF(FStreetMapRoadStripResult,Z_Param_Out_OutResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UStreetMapUtils::GenerateRoadStripsFromOSM2(Z_Param_StreetMap,Z_Param_Out_Settings,Z_Param_Out_Transform,Z_Param_Out_OutResult);
	P_NATIVE_END;
}
// ********** End Class UStreetMapUtils Function GenerateRoadStripsFromOSM2 ************************

// ********** Begin Class UStreetMapUtils Function GetBuildingMeshHeight ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStreetMapUtils_GetBuildingMeshHeight_Statics
struct UHT_STATICS
{
	struct StreetMapUtils_eventGetBuildingMeshHeight_Parms
	{
		FStreetMapBuilding Building;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Building_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBuildingMeshHeight constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Building;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBuildingMeshHeight constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBuildingMeshHeight Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Building = { "Building", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapUtils_eventGetBuildingMeshHeight_Parms, Building), Z_Construct_UScriptStruct_FStreetMapBuilding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Building_MetaData), NewProp_Building_MetaData) }; // 9c80cd0a6043d885eef18e6aeb7753379022d92d
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapUtils_eventGetBuildingMeshHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Building,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetBuildingMeshHeight Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStreetMapUtils, nullptr, "GetBuildingMeshHeight", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::StreetMapUtils_eventGetBuildingMeshHeight_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::StreetMapUtils_eventGetBuildingMeshHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreetMapUtils_GetBuildingMeshHeight(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStreetMapUtils::execGetBuildingMeshHeight)
{
	P_GET_STRUCT_REF(FStreetMapBuilding,Z_Param_Out_Building);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UStreetMapUtils::GetBuildingMeshHeight(Z_Param_Out_Building);
	P_NATIVE_END;
}
// ********** End Class UStreetMapUtils Function GetBuildingMeshHeight *****************************

// ********** Begin Class UStreetMapUtils Function OsmRoadFromRoadStrip ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStreetMapUtils_OsmRoadFromRoadStrip_Statics
struct UHT_STATICS
{
	struct StreetMapUtils_eventOsmRoadFromRoadStrip_Parms
	{
		FStreetMapRoadStrip RoadStrip;
		FStreetMapRoad OutRoad;
		bool OutValid;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadStrip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OsmRoadFromRoadStrip constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoadStrip;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRoad;
	static void NewProp_OutValid_SetBit(void* Obj)
	{
		((StreetMapUtils_eventOsmRoadFromRoadStrip_Parms*)Obj)->OutValid = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutValid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OsmRoadFromRoadStrip constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OsmRoadFromRoadStrip Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RoadStrip = { "RoadStrip", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapUtils_eventOsmRoadFromRoadStrip_Parms, RoadStrip), Z_Construct_UScriptStruct_FStreetMapRoadStrip, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadStrip_MetaData), NewProp_RoadStrip_MetaData) }; // a74a443d3a42b75c1ed2b2ff33a39d1db070153c
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutRoad = { "OutRoad", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapUtils_eventOsmRoadFromRoadStrip_Parms, OutRoad), Z_Construct_UScriptStruct_FStreetMapRoad, METADATA_PARAMS(0, nullptr) }; // 6c8508bd7d96d0a405df0ec09f79a18dcc8f2b44
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_OutValid = { "OutValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(StreetMapUtils_eventOsmRoadFromRoadStrip_Parms), &UHT_STATICS::NewProp_OutValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadStrip,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutValid,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OsmRoadFromRoadStrip Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStreetMapUtils, nullptr, "OsmRoadFromRoadStrip", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::StreetMapUtils_eventOsmRoadFromRoadStrip_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::StreetMapUtils_eventOsmRoadFromRoadStrip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreetMapUtils_OsmRoadFromRoadStrip(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStreetMapUtils::execOsmRoadFromRoadStrip)
{
	P_GET_STRUCT_REF(FStreetMapRoadStrip,Z_Param_Out_RoadStrip);
	P_GET_STRUCT_REF(FStreetMapRoad,Z_Param_Out_OutRoad);
	P_GET_UBOOL_REF(Z_Param_Out_OutValid);
	P_FINISH;
	P_NATIVE_BEGIN;
	UStreetMapUtils::OsmRoadFromRoadStrip(Z_Param_Out_RoadStrip,Z_Param_Out_OutRoad,Z_Param_Out_OutValid);
	P_NATIVE_END;
}
// ********** End Class UStreetMapUtils Function OsmRoadFromRoadStrip ******************************

// ********** Begin Class UStreetMapUtils Function SetSplinePointsFromFootprint ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStreetMapUtils_SetSplinePointsFromFootprint_Statics
struct UHT_STATICS
{
	struct StreetMapUtils_eventSetSplinePointsFromFootprint_Parms
	{
		USplineComponent* Spline;
		FBuildingFootprint Footprint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Footprint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSplinePointsFromFootprint constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Footprint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSplinePointsFromFootprint constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSplinePointsFromFootprint Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapUtils_eventSetSplinePointsFromFootprint_Parms, Spline), Z_Construct_UClass_USplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Footprint = { "Footprint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapUtils_eventSetSplinePointsFromFootprint_Parms, Footprint), Z_Construct_UScriptStruct_FBuildingFootprint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Footprint_MetaData), NewProp_Footprint_MetaData) }; // 9b02bad4ef00291fb32d6f7741b13cc4390a406d
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Footprint,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetSplinePointsFromFootprint Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStreetMapUtils, nullptr, "SetSplinePointsFromFootprint", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::StreetMapUtils_eventSetSplinePointsFromFootprint_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::StreetMapUtils_eventSetSplinePointsFromFootprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreetMapUtils_SetSplinePointsFromFootprint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStreetMapUtils::execSetSplinePointsFromFootprint)
{
	P_GET_OBJECT(USplineComponent,Z_Param_Spline);
	P_GET_STRUCT_REF(FBuildingFootprint,Z_Param_Out_Footprint);
	P_FINISH;
	P_NATIVE_BEGIN;
	UStreetMapUtils::SetSplinePointsFromFootprint(Z_Param_Spline,Z_Param_Out_Footprint);
	P_NATIVE_END;
}
// ********** End Class UStreetMapUtils Function SetSplinePointsFromFootprint **********************

// ********** Begin Class UStreetMapUtils Function SetSplinePointsFromPositions ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStreetMapUtils_SetSplinePointsFromPositions_Statics
struct UHT_STATICS
{
	struct StreetMapUtils_eventSetSplinePointsFromPositions_Parms
	{
		USplineComponent* Spline;
		TArray<FVector> Positions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSplinePointsFromPositions constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSplinePointsFromPositions constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSplinePointsFromPositions Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapUtils_eventSetSplinePointsFromPositions_Parms, Spline), Z_Construct_UClass_USplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapUtils_eventSetSplinePointsFromPositions_Parms, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Positions_MetaData), NewProp_Positions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Positions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Positions,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetSplinePointsFromPositions Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStreetMapUtils, nullptr, "SetSplinePointsFromPositions", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::StreetMapUtils_eventSetSplinePointsFromPositions_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::StreetMapUtils_eventSetSplinePointsFromPositions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreetMapUtils_SetSplinePointsFromPositions(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStreetMapUtils::execSetSplinePointsFromPositions)
{
	P_GET_OBJECT(USplineComponent,Z_Param_Spline);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Positions);
	P_FINISH;
	P_NATIVE_BEGIN;
	UStreetMapUtils::SetSplinePointsFromPositions(Z_Param_Spline,Z_Param_Out_Positions);
	P_NATIVE_END;
}
// ********** End Class UStreetMapUtils Function SetSplinePointsFromPositions **********************

// ********** Begin Class UStreetMapUtils Function SpliceGeneratedRoadsIntoJointDescriptions *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStreetMapUtils_SpliceGeneratedRoadsIntoJointDescriptions_Statics
struct UHT_STATICS
{
	struct StreetMapUtils_eventSpliceGeneratedRoadsIntoJointDescriptions_Parms
	{
		FStreetMapRoadStripResult InResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SpliceGeneratedRoadsIntoJointDescriptions constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_InResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpliceGeneratedRoadsIntoJointDescriptions constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpliceGeneratedRoadsIntoJointDescriptions Property Definitions ********
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InResult = { "InResult", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapUtils_eventSpliceGeneratedRoadsIntoJointDescriptions_Parms, InResult), Z_Construct_UScriptStruct_FStreetMapRoadStripResult, METADATA_PARAMS(0, nullptr) }; // f1c79207f3d20fa63282a6fa78f3bff2283dcfc6
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InResult,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SpliceGeneratedRoadsIntoJointDescriptions Property Definitions **********
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStreetMapUtils, nullptr, "SpliceGeneratedRoadsIntoJointDescriptions", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::StreetMapUtils_eventSpliceGeneratedRoadsIntoJointDescriptions_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::StreetMapUtils_eventSpliceGeneratedRoadsIntoJointDescriptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreetMapUtils_SpliceGeneratedRoadsIntoJointDescriptions(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStreetMapUtils::execSpliceGeneratedRoadsIntoJointDescriptions)
{
	P_GET_STRUCT_REF(FStreetMapRoadStripResult,Z_Param_Out_InResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	UStreetMapUtils::SpliceGeneratedRoadsIntoJointDescriptions(Z_Param_Out_InResult);
	P_NATIVE_END;
}
// ********** End Class UStreetMapUtils Function SpliceGeneratedRoadsIntoJointDescriptions *********

// ********** Begin Class UStreetMapUtils **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UStreetMapUtils_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "StreetMap/StreetMapUtils.h" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UStreetMapUtils constinit property declarations **************************
// ********** End Class UStreetMapUtils constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GenerateBuildingFootprint"), .Pointer = &UStreetMapUtils::execGenerateBuildingFootprint },
		{ .NameUTF8 = UTF8TEXT("GenerateBuildingFootprintsFromOSM"), .Pointer = &UStreetMapUtils::execGenerateBuildingFootprintsFromOSM },
		{ .NameUTF8 = UTF8TEXT("GenerateRoadStripsFromOSM"), .Pointer = &UStreetMapUtils::execGenerateRoadStripsFromOSM },
		{ .NameUTF8 = UTF8TEXT("GenerateRoadStripsFromOSM2"), .Pointer = &UStreetMapUtils::execGenerateRoadStripsFromOSM2 },
		{ .NameUTF8 = UTF8TEXT("GetBuildingMeshHeight"), .Pointer = &UStreetMapUtils::execGetBuildingMeshHeight },
		{ .NameUTF8 = UTF8TEXT("OsmRoadFromRoadStrip"), .Pointer = &UStreetMapUtils::execOsmRoadFromRoadStrip },
		{ .NameUTF8 = UTF8TEXT("SetSplinePointsFromFootprint"), .Pointer = &UStreetMapUtils::execSetSplinePointsFromFootprint },
		{ .NameUTF8 = UTF8TEXT("SetSplinePointsFromPositions"), .Pointer = &UStreetMapUtils::execSetSplinePointsFromPositions },
		{ .NameUTF8 = UTF8TEXT("SpliceGeneratedRoadsIntoJointDescriptions"), .Pointer = &UStreetMapUtils::execSpliceGeneratedRoadsIntoJointDescriptions },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStreetMapUtils_GenerateBuildingFootprint, "GenerateBuildingFootprint" }, // ce84590435325aa44e457c3d15996c634c643fdd
		{ &Z_Construct_UFunction_UStreetMapUtils_GenerateBuildingFootprintsFromOSM, "GenerateBuildingFootprintsFromOSM" }, // bfe3aef88c7e613ba816f75c53bbcb7d290ed04d
		{ &Z_Construct_UFunction_UStreetMapUtils_GenerateRoadStripsFromOSM, "GenerateRoadStripsFromOSM" }, // ba4fe6a9a17390dcb312c9b96ccb08a33257ea5d
		{ &Z_Construct_UFunction_UStreetMapUtils_GenerateRoadStripsFromOSM2, "GenerateRoadStripsFromOSM2" }, // dc9ce6ad3903f8386f89a8286d2df82b5821caf1
		{ &Z_Construct_UFunction_UStreetMapUtils_GetBuildingMeshHeight, "GetBuildingMeshHeight" }, // 96875731723247c6073217a24e847c19ada44f65
		{ &Z_Construct_UFunction_UStreetMapUtils_OsmRoadFromRoadStrip, "OsmRoadFromRoadStrip" }, // 7f590c8aacce792f507b78db251d4a93d2cc091d
		{ &Z_Construct_UFunction_UStreetMapUtils_SetSplinePointsFromFootprint, "SetSplinePointsFromFootprint" }, // 1d754688d3d679932ac2a2c9752861d3e4185df5
		{ &Z_Construct_UFunction_UStreetMapUtils_SetSplinePointsFromPositions, "SetSplinePointsFromPositions" }, // c8b590a4a1f4c78aebaca2e2a03499561b37dba9
		{ &Z_Construct_UFunction_UStreetMapUtils_SpliceGeneratedRoadsIntoJointDescriptions, "SpliceGeneratedRoadsIntoJointDescriptions" }, // b03577db199b0da4588ba5b3daeea07409b26b1c
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreetMapUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UStreetMapUtils,
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
static void UStreetMapUtils_StaticRegisterNativesUStreetMapUtils()
{
	UClass* Class = UStreetMapUtils::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStreetMapUtils;
UClass* Z_Construct_UClass_UStreetMapUtils(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UStreetMapUtils;
		if (!Z_Registration_Info_UClass_UStreetMapUtils.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("StreetMapUtils"),
				Z_Registration_Info_UClass_UStreetMapUtils.InnerSingleton,
				UStreetMapUtils_StaticRegisterNativesUStreetMapUtils,
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
		return Z_Registration_Info_UClass_UStreetMapUtils.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UStreetMapUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStreetMapUtils.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UStreetMapUtils.OuterSingleton;
}
#undef UHT_STATICS
UStreetMapUtils::UStreetMapUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UStreetMapUtils);
UStreetMapUtils::~UStreetMapUtils() {}
// ********** End Class UStreetMapUtils ************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapUtils_h__Script_TwinBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FStreetMapBuildingFootprintSettings, Z_Construct_UScriptStruct_FStreetMapBuildingFootprintSettings_Statics::NewStructOps, TEXT("StreetMapBuildingFootprintSettings"),&Z_Registration_Info_UScriptStruct_FStreetMapBuildingFootprintSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreetMapBuildingFootprintSettings), 3477846634U) },
		{ Z_Construct_UScriptStruct_FBuildingFootprint, Z_Construct_UScriptStruct_FBuildingFootprint_Statics::NewStructOps, TEXT("BuildingFootprint"),&Z_Registration_Info_UScriptStruct_FBuildingFootprint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuildingFootprint), 2600647380U) },
		{ Z_Construct_UScriptStruct_FStreetMapBuildingFootprintResult, Z_Construct_UScriptStruct_FStreetMapBuildingFootprintResult_Statics::NewStructOps, TEXT("StreetMapBuildingFootprintResult"),&Z_Registration_Info_UScriptStruct_FStreetMapBuildingFootprintResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreetMapBuildingFootprintResult), 1120689110U) },
		{ Z_Construct_UScriptStruct_FStreetMapSegmentTags, Z_Construct_UScriptStruct_FStreetMapSegmentTags_Statics::NewStructOps, TEXT("StreetMapSegmentTags"),&Z_Registration_Info_UScriptStruct_FStreetMapSegmentTags, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreetMapSegmentTags), 3992175267U) },
		{ Z_Construct_UScriptStruct_FStreetMapRoadJointItem, Z_Construct_UScriptStruct_FStreetMapRoadJointItem_Statics::NewStructOps, TEXT("StreetMapRoadJointItem"),&Z_Registration_Info_UScriptStruct_FStreetMapRoadJointItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreetMapRoadJointItem), 2813290505U) },
		{ Z_Construct_UScriptStruct_FStreetMapRoadJoint, Z_Construct_UScriptStruct_FStreetMapRoadJoint_Statics::NewStructOps, TEXT("StreetMapRoadJoint"),&Z_Registration_Info_UScriptStruct_FStreetMapRoadJoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreetMapRoadJoint), 1565127214U) },
		{ Z_Construct_UScriptStruct_FRoadsIndicesourceSet, Z_Construct_UScriptStruct_FRoadsIndicesourceSet_Statics::NewStructOps, TEXT("RoadsIndicesourceSet"),&Z_Registration_Info_UScriptStruct_FRoadsIndicesourceSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadsIndicesourceSet), 1357053341U) },
		{ Z_Construct_UScriptStruct_FStreetMapRoadStripSettings, Z_Construct_UScriptStruct_FStreetMapRoadStripSettings_Statics::NewStructOps, TEXT("StreetMapRoadStripSettings"),&Z_Registration_Info_UScriptStruct_FStreetMapRoadStripSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreetMapRoadStripSettings), 3087129839U) },
		{ Z_Construct_UScriptStruct_FStreetMapRoadStrip, Z_Construct_UScriptStruct_FStreetMapRoadStrip_Statics::NewStructOps, TEXT("StreetMapRoadStrip"),&Z_Registration_Info_UScriptStruct_FStreetMapRoadStrip, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreetMapRoadStrip), 2806662205U) },
		{ Z_Construct_UScriptStruct_FStreetMapRoadStripResult, Z_Construct_UScriptStruct_FStreetMapRoadStripResult_Statics::NewStructOps, TEXT("StreetMapRoadStripResult"),&Z_Registration_Info_UScriptStruct_FStreetMapRoadStripResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreetMapRoadStripResult), 4056388103U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStreetMapUtils, TEXT("UStreetMapUtils"), &Z_Registration_Info_UClass_UStreetMapUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStreetMapUtils), 3731429363U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapUtils_h__Script_TwinBLDEditor_e26ca25a813c0d7adcccdba4972ef00e438ef5f9{
	TEXT("/Script/TwinBLDEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
