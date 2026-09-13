// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShapefileReader.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeShapefileReader() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase);
TWINBLDEDITOR_API UEnum* Z_Construct_UEnum_TwinBLDEditor_EShapeGeometryKind(ETypeConstructPhase);
TWINBLDEDITOR_API UEnum* Z_Construct_UEnum_TwinBLDEditor_ETwinBLDVerticalTransformPolicy(ETypeConstructPhase);
TWINBLDEDITOR_API UEnum* Z_Construct_UEnum_TwinBLDEditor_ETwinBLDVerticalUnit(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FShapePolygon2D(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FShapePolyline2D(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UShapefileReader(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDFeatureWorldTransformOptions(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDShapeFeature(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDShapefileReadOptions(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDShapefileReadResult(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDShapefileReadSummary(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UShapefileReader(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EShapeGeometryKind ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_TwinBLDEditor_EShapeGeometryKind_Statics
template<> TWINBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EShapeGeometryKind>()
{
	return Z_Construct_UEnum_TwinBLDEditor_EShapeGeometryKind(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "LineString.Name", "EShapeGeometryKind::LineString" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
		{ "MultiLineString.Name", "EShapeGeometryKind::MultiLineString" },
		{ "MultiPoint.Name", "EShapeGeometryKind::MultiPoint" },
		{ "MultiPolygon.Name", "EShapeGeometryKind::MultiPolygon" },
		{ "None.Name", "EShapeGeometryKind::None" },
		{ "Point.Name", "EShapeGeometryKind::Point" },
		{ "Polygon.Name", "EShapeGeometryKind::Polygon" },
		{ "Unsupported.Name", "EShapeGeometryKind::Unsupported" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EShapeGeometryKind::None", (int64)EShapeGeometryKind::None },
		{ "EShapeGeometryKind::Point", (int64)EShapeGeometryKind::Point },
		{ "EShapeGeometryKind::LineString", (int64)EShapeGeometryKind::LineString },
		{ "EShapeGeometryKind::Polygon", (int64)EShapeGeometryKind::Polygon },
		{ "EShapeGeometryKind::MultiPoint", (int64)EShapeGeometryKind::MultiPoint },
		{ "EShapeGeometryKind::MultiLineString", (int64)EShapeGeometryKind::MultiLineString },
		{ "EShapeGeometryKind::MultiPolygon", (int64)EShapeGeometryKind::MultiPolygon },
		{ "EShapeGeometryKind::Unsupported", (int64)EShapeGeometryKind::Unsupported },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	"EShapeGeometryKind",
	"EShapeGeometryKind",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EShapeGeometryKind;
UEnum* Z_Construct_UEnum_TwinBLDEditor_EShapeGeometryKind(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EShapeGeometryKind.OuterSingleton)
		{
			ZRIE_EShapeGeometryKind.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TwinBLDEditor_EShapeGeometryKind, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("EShapeGeometryKind"));
		}
		return ZRIE_EShapeGeometryKind.OuterSingleton;
	}
	if (!ZRIE_EShapeGeometryKind.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EShapeGeometryKind.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EShapeGeometryKind.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EShapeGeometryKind **********************************************************

// ********** Begin ScriptStruct FShapePolyline2D **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FShapePolyline2D_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FShapePolyline2D>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FShapePolyline2D); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZValues_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// Optional source/world Z values aligned one-to-one with Points.\n" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
		{ "ToolTip", "Optional source/world Z values aligned one-to-one with Points." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasZ_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FShapePolyline2D constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ZValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ZValues;
	static void NewProp_bHasZ_SetBit(void* Obj)
	{
		((FShapePolyline2D*)Obj)->bHasZ = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FShapePolyline2D constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShapePolyline2D>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FShapePolyline2D Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FShapePolyline2D, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ZValues_Inner = { "ZValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ZValues = { "ZValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FShapePolyline2D, ZValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZValues_MetaData), NewProp_ZValues_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHasZ = { "bHasZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FShapePolyline2D), &UHT_STATICS::NewProp_bHasZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasZ_MetaData), NewProp_bHasZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHasZ,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FShapePolyline2D Property Definitions *******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"ShapePolyline2D",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FShapePolyline2D>(),
	alignof(FShapePolyline2D),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FShapePolyline2D;
UScriptStruct* Z_Construct_UScriptStruct_FShapePolyline2D(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FShapePolyline2D.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FShapePolyline2D.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShapePolyline2D, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("ShapePolyline2D"));
		}
		return Z_Registration_Info_UScriptStruct_FShapePolyline2D.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FShapePolyline2D.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FShapePolyline2D.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FShapePolyline2D.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FShapePolyline2D ****************************************************

// ********** Begin ScriptStruct FShapePolygon2D ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FShapePolygon2D_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FShapePolygon2D>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FShapePolygon2D); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rings_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// One polygon: Rings[0] = exterior, Rings[1..] = interior holes (layer CRS, XY).\n" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
		{ "ToolTip", "One polygon: Rings[0] = exterior, Rings[1..] = interior holes (layer CRS, XY)." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FShapePolygon2D constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FShapePolygon2D constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShapePolygon2D>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FShapePolygon2D Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Rings_Inner = { "Rings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FShapePolyline2D, METADATA_PARAMS(0, nullptr) }; // 6e57a6336fbc5ebc9f2ff1ea0c64821a850ced64
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Rings = { "Rings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FShapePolygon2D, Rings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rings_MetaData), NewProp_Rings_MetaData) }; // 6e57a6336fbc5ebc9f2ff1ea0c64821a850ced64
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Rings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Rings,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FShapePolygon2D Property Definitions ********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"ShapePolygon2D",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FShapePolygon2D>(),
	alignof(FShapePolygon2D),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FShapePolygon2D;
UScriptStruct* Z_Construct_UScriptStruct_FShapePolygon2D(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FShapePolygon2D.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FShapePolygon2D.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShapePolygon2D, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("ShapePolygon2D"));
		}
		return Z_Registration_Info_UScriptStruct_FShapePolygon2D.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FShapePolygon2D.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FShapePolygon2D.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FShapePolygon2D.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FShapePolygon2D *****************************************************

// ********** Begin ScriptStruct FTwinBLDShapeFeature **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FTwinBLDShapeFeature_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FTwinBLDShapeFeature>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FTwinBLDShapeFeature); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// One vector feature. Existing 2D fields remain the primary horizontal geometry;\n// optional Z values are stored in parallel arrays.\n// Interpret Points / LineParts / Polygons by GeometryKind.\n" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
		{ "ToolTip", "One vector feature. Existing 2D fields remain the primary horizontal geometry;\noptional Z values are stored in parallel arrays.\nInterpret Points / LineParts / Polygons by GeometryKind." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FeatureId_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryKind_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// Point (one vertex), LineString (chain), or MultiPoint (N vertices).\n" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
		{ "ToolTip", "Point (one vertex), LineString (chain), or MultiPoint (N vertices)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZValues_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// Optional Z values aligned one-to-one with Points.\n" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
		{ "ToolTip", "Optional Z values aligned one-to-one with Points." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineParts_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Polygons_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// DBF / OGR attribute fields (string values; numerics converted to text).\n" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
		{ "ToolTip", "DBF / OGR attribute fields (string values; numerics converted to text)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasZ_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bZValuesInWorldCentimeters_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// True after an Ex world transform converts preserved source Z values to absolute UE centimeters.\n" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
		{ "ToolTip", "True after an Ex world transform converts preserved source Z values to absolute UE centimeters." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FTwinBLDShapeFeature constinit property declarations **************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_FeatureId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GeometryKind_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GeometryKind;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ZValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ZValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LineParts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LineParts;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Polygons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Polygons;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Attributes_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Attributes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Attributes;
	static void NewProp_bHasZ_SetBit(void* Obj)
	{
		((FTwinBLDShapeFeature*)Obj)->bHasZ = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasZ;
	static void NewProp_bZValuesInWorldCentimeters_SetBit(void* Obj)
	{
		((FTwinBLDShapeFeature*)Obj)->bZValuesInWorldCentimeters = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bZValuesInWorldCentimeters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FTwinBLDShapeFeature constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwinBLDShapeFeature>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FTwinBLDShapeFeature Property Definitions *************************
const UECodeGen_Private::FInt64PropertyParams UHT_STATICS::NewProp_FeatureId = { "FeatureId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDShapeFeature, FeatureId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FeatureId_MetaData), NewProp_FeatureId_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_GeometryKind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_GeometryKind = { "GeometryKind", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDShapeFeature, GeometryKind), Z_Construct_UEnum_TwinBLDEditor_EShapeGeometryKind, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryKind_MetaData), NewProp_GeometryKind_MetaData) }; // 2e3cfb2905dbe0d28579938c03c769dafbe0322d
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDShapeFeature, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ZValues_Inner = { "ZValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ZValues = { "ZValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDShapeFeature, ZValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZValues_MetaData), NewProp_ZValues_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LineParts_Inner = { "LineParts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FShapePolyline2D, METADATA_PARAMS(0, nullptr) }; // 6e57a6336fbc5ebc9f2ff1ea0c64821a850ced64
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_LineParts = { "LineParts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDShapeFeature, LineParts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineParts_MetaData), NewProp_LineParts_MetaData) }; // 6e57a6336fbc5ebc9f2ff1ea0c64821a850ced64
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Polygons_Inner = { "Polygons", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FShapePolygon2D, METADATA_PARAMS(0, nullptr) }; // daaf160af0e299bdb921bf709a96b3c897d6f3c1
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Polygons = { "Polygons", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDShapeFeature, Polygons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Polygons_MetaData), NewProp_Polygons_MetaData) }; // daaf160af0e299bdb921bf709a96b3c897d6f3c1
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Attributes_ValueProp = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Attributes_Key_KeyProp = { "Attributes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDShapeFeature, Attributes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHasZ = { "bHasZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDShapeFeature), &UHT_STATICS::NewProp_bHasZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasZ_MetaData), NewProp_bHasZ_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bZValuesInWorldCentimeters = { "bZValuesInWorldCentimeters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDShapeFeature), &UHT_STATICS::NewProp_bZValuesInWorldCentimeters_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bZValuesInWorldCentimeters_MetaData), NewProp_bZValuesInWorldCentimeters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FeatureId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeometryKind_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeometryKind,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LineParts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LineParts,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Polygons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Polygons,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Attributes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Attributes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Attributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHasZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bZValuesInWorldCentimeters,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FTwinBLDShapeFeature Property Definitions ***************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"TwinBLDShapeFeature",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FTwinBLDShapeFeature>(),
	alignof(FTwinBLDShapeFeature),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTwinBLDShapeFeature;
UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDShapeFeature(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FTwinBLDShapeFeature.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FTwinBLDShapeFeature.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwinBLDShapeFeature, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("TwinBLDShapeFeature"));
		}
		return Z_Registration_Info_UScriptStruct_FTwinBLDShapeFeature.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FTwinBLDShapeFeature.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTwinBLDShapeFeature.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FTwinBLDShapeFeature.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FTwinBLDShapeFeature ************************************************

// ********** Begin Enum ETwinBLDVerticalUnit ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_TwinBLDEditor_ETwinBLDVerticalUnit_Statics
template<> TWINBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ETwinBLDVerticalUnit>()
{
	return Z_Construct_UEnum_TwinBLDEditor_ETwinBLDVerticalUnit(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Meters.Name", "ETwinBLDVerticalUnit::Meters" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
		{ "Unknown.Name", "ETwinBLDVerticalUnit::Unknown" },
		{ "USSurveyFeet.Name", "ETwinBLDVerticalUnit::USSurveyFeet" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETwinBLDVerticalUnit::Unknown", (int64)ETwinBLDVerticalUnit::Unknown },
		{ "ETwinBLDVerticalUnit::Meters", (int64)ETwinBLDVerticalUnit::Meters },
		{ "ETwinBLDVerticalUnit::USSurveyFeet", (int64)ETwinBLDVerticalUnit::USSurveyFeet },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	"ETwinBLDVerticalUnit",
	"ETwinBLDVerticalUnit",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ETwinBLDVerticalUnit;
UEnum* Z_Construct_UEnum_TwinBLDEditor_ETwinBLDVerticalUnit(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ETwinBLDVerticalUnit.OuterSingleton)
		{
			ZRIE_ETwinBLDVerticalUnit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TwinBLDEditor_ETwinBLDVerticalUnit, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("ETwinBLDVerticalUnit"));
		}
		return ZRIE_ETwinBLDVerticalUnit.OuterSingleton;
	}
	if (!ZRIE_ETwinBLDVerticalUnit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ETwinBLDVerticalUnit.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ETwinBLDVerticalUnit.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ETwinBLDVerticalUnit ********************************************************

// ********** Begin Enum ETwinBLDVerticalTransformPolicy *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_TwinBLDEditor_ETwinBLDVerticalTransformPolicy_Statics
template<> TWINBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ETwinBLDVerticalTransformPolicy>()
{
	return Z_Construct_UEnum_TwinBLDEditor_ETwinBLDVerticalTransformPolicy(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AbsoluteWorldCentimeters.Name", "ETwinBLDVerticalTransformPolicy::AbsoluteWorldCentimeters" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
		{ "PreserveSourceValues.Name", "ETwinBLDVerticalTransformPolicy::PreserveSourceValues" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETwinBLDVerticalTransformPolicy::PreserveSourceValues", (int64)ETwinBLDVerticalTransformPolicy::PreserveSourceValues },
		{ "ETwinBLDVerticalTransformPolicy::AbsoluteWorldCentimeters", (int64)ETwinBLDVerticalTransformPolicy::AbsoluteWorldCentimeters },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	"ETwinBLDVerticalTransformPolicy",
	"ETwinBLDVerticalTransformPolicy",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ETwinBLDVerticalTransformPolicy;
UEnum* Z_Construct_UEnum_TwinBLDEditor_ETwinBLDVerticalTransformPolicy(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ETwinBLDVerticalTransformPolicy.OuterSingleton)
		{
			ZRIE_ETwinBLDVerticalTransformPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TwinBLDEditor_ETwinBLDVerticalTransformPolicy, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("ETwinBLDVerticalTransformPolicy"));
		}
		return ZRIE_ETwinBLDVerticalTransformPolicy.OuterSingleton;
	}
	if (!ZRIE_ETwinBLDVerticalTransformPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ETwinBLDVerticalTransformPolicy.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ETwinBLDVerticalTransformPolicy.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ETwinBLDVerticalTransformPolicy *********************************************

// ********** Begin ScriptStruct FTwinBLDFeatureWorldTransformOptions ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FTwinBLDFeatureWorldTransformOptions_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FTwinBLDFeatureWorldTransformOptions>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FTwinBLDFeatureWorldTransformOptions); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceVerticalUnit_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// NAVD88 is treated as the same absolute vertical datum used by TwinBLD landscapes.\n" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
		{ "ToolTip", "NAVD88 is treated as the same absolute vertical datum used by TwinBLD landscapes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalPolicy_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FTwinBLDFeatureWorldTransformOptions constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceVerticalUnit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceVerticalUnit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VerticalPolicy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FTwinBLDFeatureWorldTransformOptions constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwinBLDFeatureWorldTransformOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FTwinBLDFeatureWorldTransformOptions Property Definitions *********
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SourceVerticalUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SourceVerticalUnit = { "SourceVerticalUnit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDFeatureWorldTransformOptions, SourceVerticalUnit), Z_Construct_UEnum_TwinBLDEditor_ETwinBLDVerticalUnit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceVerticalUnit_MetaData), NewProp_SourceVerticalUnit_MetaData) }; // 37deada7e1decad69e2da7a77ba8228d66dcfdc5
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_VerticalPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_VerticalPolicy = { "VerticalPolicy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDFeatureWorldTransformOptions, VerticalPolicy), Z_Construct_UEnum_TwinBLDEditor_ETwinBLDVerticalTransformPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalPolicy_MetaData), NewProp_VerticalPolicy_MetaData) }; // 6ee6a673556ba7a7ea3a0141f9c0bbf329c7ae2c
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceVerticalUnit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceVerticalUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VerticalPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VerticalPolicy,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FTwinBLDFeatureWorldTransformOptions Property Definitions ***********
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"TwinBLDFeatureWorldTransformOptions",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FTwinBLDFeatureWorldTransformOptions>(),
	alignof(FTwinBLDFeatureWorldTransformOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTwinBLDFeatureWorldTransformOptions;
UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDFeatureWorldTransformOptions(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FTwinBLDFeatureWorldTransformOptions.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FTwinBLDFeatureWorldTransformOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwinBLDFeatureWorldTransformOptions, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("TwinBLDFeatureWorldTransformOptions"));
		}
		return Z_Registration_Info_UScriptStruct_FTwinBLDFeatureWorldTransformOptions.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FTwinBLDFeatureWorldTransformOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTwinBLDFeatureWorldTransformOptions.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FTwinBLDFeatureWorldTransformOptions.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FTwinBLDFeatureWorldTransformOptions ********************************

// ********** Begin ScriptStruct FTwinBLDShapefileReadSummary **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FTwinBLDShapefileReadSummary_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FTwinBLDShapefileReadSummary>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FTwinBLDShapefileReadSummary); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceSpatialReference_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// Raw layer CRS string reported by GDAL/OGR (if available).\n" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
		{ "ToolTip", "Raw layer CRS string reported by GDAL/OGR (if available)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHadSpatialReference_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// True when the source layer exposed a spatial reference (typically from .prj).\n" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
		{ "ToolTip", "True when the source layer exposed a spatial reference (typically from .prj)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReprojectedToWgs84_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// True when a source CRS -> WGS84 coordinate transform was created and applied.\n" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
		{ "ToolTip", "True when a source CRS -> WGS84 coordinate transform was created and applied." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedWgs84Fallback_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// True when data was consumed without reprojection and interpreted as WGS84 lon/lat.\n" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
		{ "ToolTip", "True when data was consumed without reprojection and interpreted as WGS84 lon/lat." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkippedFeatureCount_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// Number of features skipped due to geometry reprojection failures.\n" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
		{ "ToolTip", "Number of features skipped due to geometry reprojection failures." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarningMessage_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// Human-readable warning text for the most relevant CRS fallback issue.\n" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
		{ "ToolTip", "Human-readable warning text for the most relevant CRS fallback issue." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FTwinBLDShapefileReadSummary constinit property declarations ******
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceSpatialReference;
	static void NewProp_bHadSpatialReference_SetBit(void* Obj)
	{
		((FTwinBLDShapefileReadSummary*)Obj)->bHadSpatialReference = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHadSpatialReference;
	static void NewProp_bReprojectedToWgs84_SetBit(void* Obj)
	{
		((FTwinBLDShapefileReadSummary*)Obj)->bReprojectedToWgs84 = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReprojectedToWgs84;
	static void NewProp_bUsedWgs84Fallback_SetBit(void* Obj)
	{
		((FTwinBLDShapefileReadSummary*)Obj)->bUsedWgs84Fallback = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedWgs84Fallback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SkippedFeatureCount;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WarningMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FTwinBLDShapefileReadSummary constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwinBLDShapefileReadSummary>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FTwinBLDShapefileReadSummary Property Definitions *****************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SourceSpatialReference = { "SourceSpatialReference", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDShapefileReadSummary, SourceSpatialReference), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceSpatialReference_MetaData), NewProp_SourceSpatialReference_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHadSpatialReference = { "bHadSpatialReference", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDShapefileReadSummary), &UHT_STATICS::NewProp_bHadSpatialReference_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHadSpatialReference_MetaData), NewProp_bHadSpatialReference_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bReprojectedToWgs84 = { "bReprojectedToWgs84", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDShapefileReadSummary), &UHT_STATICS::NewProp_bReprojectedToWgs84_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReprojectedToWgs84_MetaData), NewProp_bReprojectedToWgs84_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUsedWgs84Fallback = { "bUsedWgs84Fallback", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDShapefileReadSummary), &UHT_STATICS::NewProp_bUsedWgs84Fallback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedWgs84Fallback_MetaData), NewProp_bUsedWgs84Fallback_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_SkippedFeatureCount = { "SkippedFeatureCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDShapefileReadSummary, SkippedFeatureCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkippedFeatureCount_MetaData), NewProp_SkippedFeatureCount_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_WarningMessage = { "WarningMessage", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDShapefileReadSummary, WarningMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarningMessage_MetaData), NewProp_WarningMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceSpatialReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHadSpatialReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bReprojectedToWgs84,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUsedWgs84Fallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SkippedFeatureCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WarningMessage,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FTwinBLDShapefileReadSummary Property Definitions *******************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"TwinBLDShapefileReadSummary",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FTwinBLDShapefileReadSummary>(),
	alignof(FTwinBLDShapefileReadSummary),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTwinBLDShapefileReadSummary;
UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDShapefileReadSummary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FTwinBLDShapefileReadSummary.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FTwinBLDShapefileReadSummary.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwinBLDShapefileReadSummary, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("TwinBLDShapefileReadSummary"));
		}
		return Z_Registration_Info_UScriptStruct_FTwinBLDShapefileReadSummary.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FTwinBLDShapefileReadSummary.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTwinBLDShapefileReadSummary.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FTwinBLDShapefileReadSummary.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FTwinBLDShapefileReadSummary ****************************************

// ********** Begin ScriptStruct FTwinBLDShapefileReadOptions **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FTwinBLDShapefileReadOptions_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FTwinBLDShapefileReadOptions>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FTwinBLDShapefileReadOptions); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerIndex_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFeatures_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// -1 reads all features.\n" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
		{ "ToolTip", "-1 reads all features." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveZ_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireSpatialReference_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// Reject layers without a usable CRS instead of interpreting coordinates as WGS84.\n" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
		{ "ToolTip", "Reject layers without a usable CRS instead of interpreting coordinates as WGS84." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedCrsToken_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// Optional OGR user-input CRS token (for example \"EPSG:2263\") that the source CRS must match.\n" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
		{ "ToolTip", "Optional OGR user-input CRS token (for example \"EPSG:2263\") that the source CRS must match." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FTwinBLDShapefileReadOptions constinit property declarations ******
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxFeatures;
	static void NewProp_bPreserveZ_SetBit(void* Obj)
	{
		((FTwinBLDShapefileReadOptions*)Obj)->bPreserveZ = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveZ;
	static void NewProp_bRequireSpatialReference_SetBit(void* Obj)
	{
		((FTwinBLDShapefileReadOptions*)Obj)->bRequireSpatialReference = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireSpatialReference;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpectedCrsToken;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FTwinBLDShapefileReadOptions constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwinBLDShapefileReadOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FTwinBLDShapefileReadOptions Property Definitions *****************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDShapefileReadOptions, LayerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerIndex_MetaData), NewProp_LayerIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxFeatures = { "MaxFeatures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDShapefileReadOptions, MaxFeatures), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFeatures_MetaData), NewProp_MaxFeatures_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPreserveZ = { "bPreserveZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDShapefileReadOptions), &UHT_STATICS::NewProp_bPreserveZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreserveZ_MetaData), NewProp_bPreserveZ_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRequireSpatialReference = { "bRequireSpatialReference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDShapefileReadOptions), &UHT_STATICS::NewProp_bRequireSpatialReference_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireSpatialReference_MetaData), NewProp_bRequireSpatialReference_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ExpectedCrsToken = { "ExpectedCrsToken", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDShapefileReadOptions, ExpectedCrsToken), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpectedCrsToken_MetaData), NewProp_ExpectedCrsToken_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxFeatures,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPreserveZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRequireSpatialReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ExpectedCrsToken,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FTwinBLDShapefileReadOptions Property Definitions *******************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"TwinBLDShapefileReadOptions",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FTwinBLDShapefileReadOptions>(),
	alignof(FTwinBLDShapefileReadOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTwinBLDShapefileReadOptions;
UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDShapefileReadOptions(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FTwinBLDShapefileReadOptions.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FTwinBLDShapefileReadOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwinBLDShapefileReadOptions, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("TwinBLDShapefileReadOptions"));
		}
		return Z_Registration_Info_UScriptStruct_FTwinBLDShapefileReadOptions.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FTwinBLDShapefileReadOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTwinBLDShapefileReadOptions.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FTwinBLDShapefileReadOptions.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FTwinBLDShapefileReadOptions ****************************************

// ********** Begin ScriptStruct FTwinBLDShapefileReadResult ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FTwinBLDShapefileReadResult_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FTwinBLDShapefileReadResult>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FTwinBLDShapefileReadResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Features_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Summary_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FTwinBLDShapefileReadResult constinit property declarations *******
	static void NewProp_bSuccess_SetBit(void* Obj)
	{
		((FTwinBLDShapefileReadResult*)Obj)->bSuccess = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Features_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Features;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Summary;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FTwinBLDShapefileReadResult constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwinBLDShapefileReadResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FTwinBLDShapefileReadResult Property Definitions ******************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDShapefileReadResult), &UHT_STATICS::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Features_Inner = { "Features", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTwinBLDShapeFeature, METADATA_PARAMS(0, nullptr) }; // 56811273e47c969b7aa1d579244c9e2da99a3fc7
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Features = { "Features", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDShapefileReadResult, Features), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Features_MetaData), NewProp_Features_MetaData) }; // 56811273e47c969b7aa1d579244c9e2da99a3fc7
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Summary = { "Summary", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDShapefileReadResult, Summary), Z_Construct_UScriptStruct_FTwinBLDShapefileReadSummary, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Summary_MetaData), NewProp_Summary_MetaData) }; // 804c61bc3bc45d68ff3f5dddf632ccdc4e8d5486
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FTwinBLDShapefileReadResult, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Features_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Features,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Summary,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FTwinBLDShapefileReadResult Property Definitions ********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"TwinBLDShapefileReadResult",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FTwinBLDShapefileReadResult>(),
	alignof(FTwinBLDShapefileReadResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTwinBLDShapefileReadResult;
UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDShapefileReadResult(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FTwinBLDShapefileReadResult.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FTwinBLDShapefileReadResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwinBLDShapefileReadResult, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("TwinBLDShapefileReadResult"));
		}
		return Z_Registration_Info_UScriptStruct_FTwinBLDShapefileReadResult.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FTwinBLDShapefileReadResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTwinBLDShapefileReadResult.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FTwinBLDShapefileReadResult.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FTwinBLDShapefileReadResult *****************************************

// ********** Begin Class UShapefileReader Function ConvertVerticalValueToCentimeters **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UShapefileReader_ConvertVerticalValueToCentimeters_Statics
struct UHT_STATICS
{
	struct ShapefileReader_eventConvertVerticalValueToCentimeters_Parms
	{
		double Value;
		ETwinBLDVerticalUnit SourceUnit;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertVerticalValueToCentimeters constinit property declarations *****
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceUnit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceUnit;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConvertVerticalValueToCentimeters constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConvertVerticalValueToCentimeters Property Definitions ****************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(ShapefileReader_eventConvertVerticalValueToCentimeters_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SourceUnit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SourceUnit = { "SourceUnit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(ShapefileReader_eventConvertVerticalValueToCentimeters_Parms, SourceUnit), Z_Construct_UEnum_TwinBLDEditor_ETwinBLDVerticalUnit, METADATA_PARAMS(0, nullptr) }; // 37deada7e1decad69e2da7a77ba8228d66dcfdc5
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(ShapefileReader_eventConvertVerticalValueToCentimeters_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceUnit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceUnit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ConvertVerticalValueToCentimeters Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UShapefileReader, nullptr, "ConvertVerticalValueToCentimeters", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ShapefileReader_eventConvertVerticalValueToCentimeters_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ShapefileReader_eventConvertVerticalValueToCentimeters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShapefileReader_ConvertVerticalValueToCentimeters(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UShapefileReader::execConvertVerticalValueToCentimeters)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
	P_GET_ENUM(ETwinBLDVerticalUnit,Z_Param_SourceUnit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=UShapefileReader::ConvertVerticalValueToCentimeters(Z_Param_Value,ETwinBLDVerticalUnit(Z_Param_SourceUnit));
	P_NATIVE_END;
}
// ********** End Class UShapefileReader Function ConvertVerticalValueToCentimeters ****************

// ********** Begin Class UShapefileReader Function GetLastReadSummary *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UShapefileReader_GetLastReadSummary_Statics
struct UHT_STATICS
{
	struct ShapefileReader_eventGetLastReadSummary_Parms
	{
		FTwinBLDShapefileReadSummary ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLastReadSummary constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLastReadSummary constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLastReadSummary Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ShapefileReader_eventGetLastReadSummary_Parms, ReturnValue), Z_Construct_UScriptStruct_FTwinBLDShapefileReadSummary, METADATA_PARAMS(0, nullptr) }; // 804c61bc3bc45d68ff3f5dddf632ccdc4e8d5486
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetLastReadSummary Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UShapefileReader, nullptr, "GetLastReadSummary", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ShapefileReader_eventGetLastReadSummary_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ShapefileReader_eventGetLastReadSummary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShapefileReader_GetLastReadSummary(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UShapefileReader::execGetLastReadSummary)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTwinBLDShapefileReadSummary*)Z_Param__Result=UShapefileReader::GetLastReadSummary();
	P_NATIVE_END;
}
// ********** End Class UShapefileReader Function GetLastReadSummary *******************************

// ********** Begin Class UShapefileReader Function GetShapeFileBounds *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UShapefileReader_GetShapeFileBounds_Statics
struct UHT_STATICS
{
	struct ShapefileReader_eventGetShapeFileBounds_Parms
	{
		FString SHapefilePath;
		FBox2D Bounds;
		int32 LayerIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "CPP_Default_LayerIndex", "0" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SHapefilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetShapeFileBounds constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_SHapefilePath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetShapeFileBounds constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetShapeFileBounds Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SHapefilePath = { "SHapefilePath", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(ShapefileReader_eventGetShapeFileBounds_Parms, SHapefilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SHapefilePath_MetaData), NewProp_SHapefilePath_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ShapefileReader_eventGetShapeFileBounds_Parms, Bounds), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ShapefileReader_eventGetShapeFileBounds_Parms, LayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SHapefilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetShapeFileBounds Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UShapefileReader, nullptr, "GetShapeFileBounds", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ShapefileReader_eventGetShapeFileBounds_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ShapefileReader_eventGetShapeFileBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShapefileReader_GetShapeFileBounds(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UShapefileReader::execGetShapeFileBounds)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SHapefilePath);
	P_GET_STRUCT_REF(FBox2D,Z_Param_Out_Bounds);
	P_GET_PROPERTY(FIntProperty,Z_Param_LayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	UShapefileReader::GetShapeFileBounds(Z_Param_SHapefilePath,Z_Param_Out_Bounds,Z_Param_LayerIndex);
	P_NATIVE_END;
}
// ********** End Class UShapefileReader Function GetShapeFileBounds *******************************

// ********** Begin Class UShapefileReader Function PrintShapefileInfo *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UShapefileReader_PrintShapefileInfo_Statics
struct UHT_STATICS
{
	struct ShapefileReader_eventPrintShapefileInfo_Parms
	{
		FString ShapefilePath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapefilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PrintShapefileInfo constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ShapefilePath;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ShapefileReader_eventPrintShapefileInfo_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PrintShapefileInfo constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PrintShapefileInfo Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ShapefilePath = { "ShapefilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(ShapefileReader_eventPrintShapefileInfo_Parms, ShapefilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapefilePath_MetaData), NewProp_ShapefilePath_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ShapefileReader_eventPrintShapefileInfo_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShapefilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PrintShapefileInfo Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UShapefileReader, nullptr, "PrintShapefileInfo", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ShapefileReader_eventPrintShapefileInfo_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ShapefileReader_eventPrintShapefileInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShapefileReader_PrintShapefileInfo(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UShapefileReader::execPrintShapefileInfo)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ShapefilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UShapefileReader::PrintShapefileInfo(Z_Param_ShapefilePath);
	P_NATIVE_END;
}
// ********** End Class UShapefileReader Function PrintShapefileInfo *******************************

// ********** Begin Class UShapefileReader Function ReadShapefileLayer *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UShapefileReader_ReadShapefileLayer_Statics
struct UHT_STATICS
{
	struct ShapefileReader_eventReadShapefileLayer_Parms
	{
		FString ShapefilePath;
		TArray<FTwinBLDShapeFeature> OutFeatures;
		int32 LayerIndex;
		int32 MaxFeatures;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "// Reads feature geometries from one layer.\n// If the layer CRS is known, features are reprojected to WGS84 first and returned as XY=(Lon, Lat).\n// If the layer CRS is missing/unsupported, data is consumed as-is and interpreted as XY=(Lon, Lat).\n// MaxFeatures = -1 reads all.\n" },
		{ "CPP_Default_LayerIndex", "0" },
		{ "CPP_Default_MaxFeatures", "-1" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
		{ "ToolTip", "Reads feature geometries from one layer.\nIf the layer CRS is known, features are reprojected to WGS84 first and returned as XY=(Lon, Lat).\nIf the layer CRS is missing/unsupported, data is consumed as-is and interpreted as XY=(Lon, Lat).\nMaxFeatures = -1 reads all." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapefilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReadShapefileLayer constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ShapefilePath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutFeatures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutFeatures;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxFeatures;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ShapefileReader_eventReadShapefileLayer_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReadShapefileLayer constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReadShapefileLayer Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ShapefilePath = { "ShapefilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(ShapefileReader_eventReadShapefileLayer_Parms, ShapefilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapefilePath_MetaData), NewProp_ShapefilePath_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutFeatures_Inner = { "OutFeatures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTwinBLDShapeFeature, METADATA_PARAMS(0, nullptr) }; // 56811273e47c969b7aa1d579244c9e2da99a3fc7
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutFeatures = { "OutFeatures", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ShapefileReader_eventReadShapefileLayer_Parms, OutFeatures), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 56811273e47c969b7aa1d579244c9e2da99a3fc7
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ShapefileReader_eventReadShapefileLayer_Parms, LayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxFeatures = { "MaxFeatures", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ShapefileReader_eventReadShapefileLayer_Parms, MaxFeatures), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ShapefileReader_eventReadShapefileLayer_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShapefilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutFeatures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutFeatures,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxFeatures,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ReadShapefileLayer Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UShapefileReader, nullptr, "ReadShapefileLayer", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ShapefileReader_eventReadShapefileLayer_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ShapefileReader_eventReadShapefileLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShapefileReader_ReadShapefileLayer(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UShapefileReader::execReadShapefileLayer)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ShapefilePath);
	P_GET_TARRAY_REF(FTwinBLDShapeFeature,Z_Param_Out_OutFeatures);
	P_GET_PROPERTY(FIntProperty,Z_Param_LayerIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxFeatures);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UShapefileReader::ReadShapefileLayer(Z_Param_ShapefilePath,Z_Param_Out_OutFeatures,Z_Param_LayerIndex,Z_Param_MaxFeatures);
	P_NATIVE_END;
}
// ********** End Class UShapefileReader Function ReadShapefileLayer *******************************

// ********** Begin Class UShapefileReader Function TransformFeatureCoordinates ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UShapefileReader_TransformFeatureCoordinates_Statics
struct UHT_STATICS
{
	struct ShapefileReader_eventTransformFeatureCoordinates_Parms
	{
		FTwinBLDShapeFeature Feature;
		FVector2D Origin;
		FIntPoint AxisOrder;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function TransformFeatureCoordinates constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Feature;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TransformFeatureCoordinates constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TransformFeatureCoordinates Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Feature = { "Feature", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ShapefileReader_eventTransformFeatureCoordinates_Parms, Feature), Z_Construct_UScriptStruct_FTwinBLDShapeFeature, METADATA_PARAMS(0, nullptr) }; // 56811273e47c969b7aa1d579244c9e2da99a3fc7
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ShapefileReader_eventTransformFeatureCoordinates_Parms, Origin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AxisOrder = { "AxisOrder", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ShapefileReader_eventTransformFeatureCoordinates_Parms, AxisOrder), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisOrder_MetaData), NewProp_AxisOrder_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Feature,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AxisOrder,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function TransformFeatureCoordinates Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UShapefileReader, nullptr, "TransformFeatureCoordinates", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ShapefileReader_eventTransformFeatureCoordinates_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ShapefileReader_eventTransformFeatureCoordinates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UShapefileReader_TransformFeatureCoordinates(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UShapefileReader::execTransformFeatureCoordinates)
{
	P_GET_STRUCT_REF(FTwinBLDShapeFeature,Z_Param_Out_Feature);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Origin);
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_AxisOrder);
	P_FINISH;
	P_NATIVE_BEGIN;
	UShapefileReader::TransformFeatureCoordinates(Z_Param_Out_Feature,Z_Param_Out_Origin,Z_Param_Out_AxisOrder);
	P_NATIVE_END;
}
// ********** End Class UShapefileReader Function TransformFeatureCoordinates **********************

// ********** Begin Class UShapefileReader *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UShapefileReader_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "ShapefileReader.h" },
		{ "ModuleRelativePath", "Public/ShapefileReader.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UShapefileReader constinit property declarations *************************
// ********** End Class UShapefileReader constinit property declarations ***************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ConvertVerticalValueToCentimeters"), .Pointer = &UShapefileReader::execConvertVerticalValueToCentimeters },
		{ .NameUTF8 = UTF8TEXT("GetLastReadSummary"), .Pointer = &UShapefileReader::execGetLastReadSummary },
		{ .NameUTF8 = UTF8TEXT("GetShapeFileBounds"), .Pointer = &UShapefileReader::execGetShapeFileBounds },
		{ .NameUTF8 = UTF8TEXT("PrintShapefileInfo"), .Pointer = &UShapefileReader::execPrintShapefileInfo },
		{ .NameUTF8 = UTF8TEXT("ReadShapefileLayer"), .Pointer = &UShapefileReader::execReadShapefileLayer },
		{ .NameUTF8 = UTF8TEXT("TransformFeatureCoordinates"), .Pointer = &UShapefileReader::execTransformFeatureCoordinates },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UShapefileReader_ConvertVerticalValueToCentimeters, "ConvertVerticalValueToCentimeters" }, // 4ea7ab535519187bde4e83ffb7c1459efca3a528
		{ &Z_Construct_UFunction_UShapefileReader_GetLastReadSummary, "GetLastReadSummary" }, // 70e7da7a67a2da5a357228c36e76bea7a4f73892
		{ &Z_Construct_UFunction_UShapefileReader_GetShapeFileBounds, "GetShapeFileBounds" }, // f103336408aea81a2c36a1178441aec8933d43ce
		{ &Z_Construct_UFunction_UShapefileReader_PrintShapefileInfo, "PrintShapefileInfo" }, // 743bee1765cb6ab66d767147afa561a0e819da45
		{ &Z_Construct_UFunction_UShapefileReader_ReadShapefileLayer, "ReadShapefileLayer" }, // 4af735a2e6e0a5e26e3149529f50991d29bbbc8f
		{ &Z_Construct_UFunction_UShapefileReader_TransformFeatureCoordinates, "TransformFeatureCoordinates" }, // 22b17f5defdce8bcc08dac617811f3f6b7bb73f8
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShapefileReader>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UShapefileReader,
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
static void UShapefileReader_StaticRegisterNativesUShapefileReader()
{
	UClass* Class = UShapefileReader::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UShapefileReader;
UClass* Z_Construct_UClass_UShapefileReader(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UShapefileReader;
		if (!Z_Registration_Info_UClass_UShapefileReader.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ShapefileReader"),
				Z_Registration_Info_UClass_UShapefileReader.InnerSingleton,
				UShapefileReader_StaticRegisterNativesUShapefileReader,
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
		return Z_Registration_Info_UClass_UShapefileReader.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UShapefileReader.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShapefileReader.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UShapefileReader.OuterSingleton;
}
#undef UHT_STATICS
UShapefileReader::UShapefileReader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UShapefileReader);
UShapefileReader::~UShapefileReader() {}
// ********** End Class UShapefileReader ***********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_ShapefileReader_h__Script_TwinBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_TwinBLDEditor_EShapeGeometryKind, TEXT("EShapeGeometryKind"), &ZRIE_EShapeGeometryKind, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 775748393U) },
		{ Z_Construct_UEnum_TwinBLDEditor_ETwinBLDVerticalUnit, TEXT("ETwinBLDVerticalUnit"), &ZRIE_ETwinBLDVerticalUnit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 937340327U) },
		{ Z_Construct_UEnum_TwinBLDEditor_ETwinBLDVerticalTransformPolicy, TEXT("ETwinBLDVerticalTransformPolicy"), &ZRIE_ETwinBLDVerticalTransformPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1860609651U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FShapePolyline2D, Z_Construct_UScriptStruct_FShapePolyline2D_Statics::NewStructOps, TEXT("ShapePolyline2D"),&Z_Registration_Info_UScriptStruct_FShapePolyline2D, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShapePolyline2D), 1851237939U) },
		{ Z_Construct_UScriptStruct_FShapePolygon2D, Z_Construct_UScriptStruct_FShapePolygon2D_Statics::NewStructOps, TEXT("ShapePolygon2D"),&Z_Registration_Info_UScriptStruct_FShapePolygon2D, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShapePolygon2D), 3668907530U) },
		{ Z_Construct_UScriptStruct_FTwinBLDShapeFeature, Z_Construct_UScriptStruct_FTwinBLDShapeFeature_Statics::NewStructOps, TEXT("TwinBLDShapeFeature"),&Z_Registration_Info_UScriptStruct_FTwinBLDShapeFeature, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwinBLDShapeFeature), 1451299443U) },
		{ Z_Construct_UScriptStruct_FTwinBLDFeatureWorldTransformOptions, Z_Construct_UScriptStruct_FTwinBLDFeatureWorldTransformOptions_Statics::NewStructOps, TEXT("TwinBLDFeatureWorldTransformOptions"),&Z_Registration_Info_UScriptStruct_FTwinBLDFeatureWorldTransformOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwinBLDFeatureWorldTransformOptions), 635855825U) },
		{ Z_Construct_UScriptStruct_FTwinBLDShapefileReadSummary, Z_Construct_UScriptStruct_FTwinBLDShapefileReadSummary_Statics::NewStructOps, TEXT("TwinBLDShapefileReadSummary"),&Z_Registration_Info_UScriptStruct_FTwinBLDShapefileReadSummary, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwinBLDShapefileReadSummary), 2152489404U) },
		{ Z_Construct_UScriptStruct_FTwinBLDShapefileReadOptions, Z_Construct_UScriptStruct_FTwinBLDShapefileReadOptions_Statics::NewStructOps, TEXT("TwinBLDShapefileReadOptions"),&Z_Registration_Info_UScriptStruct_FTwinBLDShapefileReadOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwinBLDShapefileReadOptions), 3488684646U) },
		{ Z_Construct_UScriptStruct_FTwinBLDShapefileReadResult, Z_Construct_UScriptStruct_FTwinBLDShapefileReadResult_Statics::NewStructOps, TEXT("TwinBLDShapefileReadResult"),&Z_Registration_Info_UScriptStruct_FTwinBLDShapefileReadResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwinBLDShapefileReadResult), 2326506241U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UShapefileReader, TEXT("UShapefileReader"), &Z_Registration_Info_UClass_UShapefileReader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShapefileReader), 2189717600U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_ShapefileReader_h__Script_TwinBLDEditor_43e790d24d2f0fb8f5ee0b98e596d564fa1f0d6a{
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
