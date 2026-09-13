// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreetMap/StreetMapTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeStreetMapTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase);
TWINBLDEDITOR_API UEnum* Z_Construct_UEnum_TwinBLDEditor_EOSMWayType(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapVertex(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EOSMWayType ***************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_TwinBLDEditor_EOSMWayType_Statics
template<> TWINBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EOSMWayType>()
{
	return Z_Construct_UEnum_TwinBLDEditor_EOSMWayType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Bridleway.Comment", "/** Paths normally used by horses */" },
		{ "Bridleway.Name", "EOSMWayType::Bridleway" },
		{ "Bridleway.ToolTip", "Paths normally used by horses" },
		{ "Building.Comment", "/** Default type of building.  A general catch-all. */" },
		{ "Building.Name", "EOSMWayType::Building" },
		{ "Building.ToolTip", "Default type of building.  A general catch-all." },
		{ "Bus_Guideway.Comment", "/** A busway where the vehicle guided by the way (though not a railway) and is not suitable for other traffic. */" },
		{ "Bus_Guideway.Name", "EOSMWayType::Bus_Guideway" },
		{ "Bus_Guideway.ToolTip", "A busway where the vehicle guided by the way (though not a railway) and is not suitable for other traffic." },
		{ "Comment", "/** Types of ways */" },
		{ "Construction.Comment", "/** For roads under construction. */" },
		{ "Construction.Name", "EOSMWayType::Construction" },
		{ "Construction.ToolTip", "For roads under construction." },
		{ "Cycleway.Comment", "/** For designated cycleways. */" },
		{ "Cycleway.Name", "EOSMWayType::Cycleway" },
		{ "Cycleway.ToolTip", "For designated cycleways." },
		{ "Footway.Comment", "/** For designated footpaths; i.e., mainly/exclusively for pedestrians. This includes walking tracks and gravel paths. */" },
		{ "Footway.Name", "EOSMWayType::Footway" },
		{ "Footway.ToolTip", "For designated footpaths; i.e., mainly/exclusively for pedestrians. This includes walking tracks and gravel paths." },
		{ "Living_Street.Comment", "/** Residential streets where pedestrians have legal priority over cars, speeds are kept very low and where children are allowed to play on the street. */" },
		{ "Living_Street.Name", "EOSMWayType::Living_Street" },
		{ "Living_Street.ToolTip", "Residential streets where pedestrians have legal priority over cars, speeds are kept very low and where children are allowed to play on the street." },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapTypes.h" },
		{ "Motorway.Comment", "/** A restricted access major divided highway, normally with 2 or more running lanes plus emergency hard shoulder. Equivalent to the Freeway, Autobahn, etc. */" },
		{ "Motorway.Name", "EOSMWayType::Motorway" },
		{ "Motorway.ToolTip", "A restricted access major divided highway, normally with 2 or more running lanes plus emergency hard shoulder. Equivalent to the Freeway, Autobahn, etc." },
		{ "Motorway_Link.Comment", "/** The link roads (sliproads/ramps) leading to/from a motorway from/to a motorway or lower class highway. Normally with the same motorway restrictions. */" },
		{ "Motorway_Link.Name", "EOSMWayType::Motorway_Link" },
		{ "Motorway_Link.ToolTip", "The link roads (sliproads/ramps) leading to/from a motorway from/to a motorway or lower class highway. Normally with the same motorway restrictions." },
		{ "Other.Comment", "/** Currently unrecognized type */" },
		{ "Other.Name", "EOSMWayType::Other" },
		{ "Other.ToolTip", "Currently unrecognized type" },
		{ "Path.Comment", "/** A non-specific path. */" },
		{ "Path.Name", "EOSMWayType::Path" },
		{ "Path.ToolTip", "A non-specific path." },
		{ "Pedestrian.Comment", "/** For roads used mainly/exclusively for pedestrians in shopping and some residential areas which may allow access by motorised vehicles only for very limited periods of the day. */" },
		{ "Pedestrian.Name", "EOSMWayType::Pedestrian" },
		{ "Pedestrian.ToolTip", "For roads used mainly/exclusively for pedestrians in shopping and some residential areas which may allow access by motorised vehicles only for very limited periods of the day." },
		{ "Primary.Comment", "/** The next most important roads in a country's system. (Often link larger towns.) */" },
		{ "Primary.Name", "EOSMWayType::Primary" },
		{ "Primary.ToolTip", "The next most important roads in a country's system. (Often link larger towns.)" },
		{ "Primary_Link.Comment", "/** The link roads (sliproads/ramps) leading to/from a primary road from/to a primary road or lower class highway. */" },
		{ "Primary_Link.Name", "EOSMWayType::Primary_Link" },
		{ "Primary_Link.ToolTip", "The link roads (sliproads/ramps) leading to/from a primary road from/to a primary road or lower class highway." },
		{ "Proposed.Comment", "/** For planned roads, use with proposed=* and also proposed=* with a value of the proposed highway value. */" },
		{ "Proposed.Name", "EOSMWayType::Proposed" },
		{ "Proposed.ToolTip", "For planned roads, use with proposed=* and also proposed=* with a value of the proposed highway value." },
		{ "Raceway.Comment", "/** A course or track for (motor) racing */" },
		{ "Raceway.Name", "EOSMWayType::Raceway" },
		{ "Raceway.ToolTip", "A course or track for (motor) racing" },
		{ "Residential.Comment", "/** Roads which are primarily lined with and serve as an access to housing. */" },
		{ "Residential.Name", "EOSMWayType::Residential" },
		{ "Residential.ToolTip", "Roads which are primarily lined with and serve as an access to housing." },
		{ "Road.Comment", "/** A road where the mapper is unable to ascertain the classification from the information available. */" },
		{ "Road.Name", "EOSMWayType::Road" },
		{ "Road.ToolTip", "A road where the mapper is unable to ascertain the classification from the information available." },
		{ "Secondary.Comment", "/** The next most important roads in a country's system. (Often link smaller towns and villages.) */" },
		{ "Secondary.Name", "EOSMWayType::Secondary" },
		{ "Secondary.ToolTip", "The next most important roads in a country's system. (Often link smaller towns and villages.)" },
		{ "Secondary_Link.Comment", "/** The link roads (sliproads/ramps) leading to/from a secondary road from/to a secondary road or lower class highway. */" },
		{ "Secondary_Link.Name", "EOSMWayType::Secondary_Link" },
		{ "Secondary_Link.ToolTip", "The link roads (sliproads/ramps) leading to/from a secondary road from/to a secondary road or lower class highway." },
		{ "Service.Comment", "/** For access roads to, or within an industrial estate, camp site, business park, car park etc. */" },
		{ "Service.Name", "EOSMWayType::Service" },
		{ "Service.ToolTip", "For access roads to, or within an industrial estate, camp site, business park, car park etc." },
		{ "Steps.Comment", "/** For flights of steps (stairs) on footways. */" },
		{ "Steps.Name", "EOSMWayType::Steps" },
		{ "Steps.ToolTip", "For flights of steps (stairs) on footways." },
		{ "Tertiary.Comment", "/** The next most important roads in a country's system. */" },
		{ "Tertiary.Name", "EOSMWayType::Tertiary" },
		{ "Tertiary.ToolTip", "The next most important roads in a country's system." },
		{ "Tertiary_Link.Comment", "/** The link roads (sliproads/ramps) leading to/from a tertiary road from/to a tertiary road or lower class highway. */" },
		{ "Tertiary_Link.Name", "EOSMWayType::Tertiary_Link" },
		{ "Tertiary_Link.ToolTip", "The link roads (sliproads/ramps) leading to/from a tertiary road from/to a tertiary road or lower class highway." },
		{ "ToolTip", "Types of ways" },
		{ "Track.Comment", "/** Roads for agricultural or forestry uses etc, often rough with unpaved/unsealed surfaces, that can be used only by off-road vehicles (4WD, tractors, ATVs, etc.) */" },
		{ "Track.Name", "EOSMWayType::Track" },
		{ "Track.ToolTip", "Roads for agricultural or forestry uses etc, often rough with unpaved/unsealed surfaces, that can be used only by off-road vehicles (4WD, tractors, ATVs, etc.)" },
		{ "Trunk.Comment", "/** The most important roads in a country's system that aren't motorways. (Need not necessarily be a divided highway.) */" },
		{ "Trunk.Name", "EOSMWayType::Trunk" },
		{ "Trunk.ToolTip", "The most important roads in a country's system that aren't motorways. (Need not necessarily be a divided highway.)" },
		{ "Trunk_Link.Comment", "/** The link roads (sliproads/ramps) leading to/from a trunk road from/to a trunk road or lower class highway. */" },
		{ "Trunk_Link.Name", "EOSMWayType::Trunk_Link" },
		{ "Trunk_Link.ToolTip", "The link roads (sliproads/ramps) leading to/from a trunk road from/to a trunk road or lower class highway." },
		{ "Unclassified.Comment", "/** The least most important through roads in a country's system, i.e. minor roads of a lower classification than tertiary, but which serve a purpose other than access to properties. */" },
		{ "Unclassified.Name", "EOSMWayType::Unclassified" },
		{ "Unclassified.ToolTip", "The least most important through roads in a country's system, i.e. minor roads of a lower classification than tertiary, but which serve a purpose other than access to properties." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOSMWayType::Motorway", (int64)EOSMWayType::Motorway },
		{ "EOSMWayType::Motorway_Link", (int64)EOSMWayType::Motorway_Link },
		{ "EOSMWayType::Trunk", (int64)EOSMWayType::Trunk },
		{ "EOSMWayType::Trunk_Link", (int64)EOSMWayType::Trunk_Link },
		{ "EOSMWayType::Primary", (int64)EOSMWayType::Primary },
		{ "EOSMWayType::Primary_Link", (int64)EOSMWayType::Primary_Link },
		{ "EOSMWayType::Secondary", (int64)EOSMWayType::Secondary },
		{ "EOSMWayType::Secondary_Link", (int64)EOSMWayType::Secondary_Link },
		{ "EOSMWayType::Tertiary", (int64)EOSMWayType::Tertiary },
		{ "EOSMWayType::Tertiary_Link", (int64)EOSMWayType::Tertiary_Link },
		{ "EOSMWayType::Residential", (int64)EOSMWayType::Residential },
		{ "EOSMWayType::Service", (int64)EOSMWayType::Service },
		{ "EOSMWayType::Unclassified", (int64)EOSMWayType::Unclassified },
		{ "EOSMWayType::Living_Street", (int64)EOSMWayType::Living_Street },
		{ "EOSMWayType::Pedestrian", (int64)EOSMWayType::Pedestrian },
		{ "EOSMWayType::Track", (int64)EOSMWayType::Track },
		{ "EOSMWayType::Bus_Guideway", (int64)EOSMWayType::Bus_Guideway },
		{ "EOSMWayType::Raceway", (int64)EOSMWayType::Raceway },
		{ "EOSMWayType::Road", (int64)EOSMWayType::Road },
		{ "EOSMWayType::Footway", (int64)EOSMWayType::Footway },
		{ "EOSMWayType::Cycleway", (int64)EOSMWayType::Cycleway },
		{ "EOSMWayType::Bridleway", (int64)EOSMWayType::Bridleway },
		{ "EOSMWayType::Steps", (int64)EOSMWayType::Steps },
		{ "EOSMWayType::Path", (int64)EOSMWayType::Path },
		{ "EOSMWayType::Proposed", (int64)EOSMWayType::Proposed },
		{ "EOSMWayType::Construction", (int64)EOSMWayType::Construction },
		{ "EOSMWayType::Building", (int64)EOSMWayType::Building },
		{ "EOSMWayType::Other", (int64)EOSMWayType::Other },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	"EOSMWayType",
	"EOSMWayType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOSMWayType;
UEnum* Z_Construct_UEnum_TwinBLDEditor_EOSMWayType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOSMWayType.OuterSingleton)
		{
			ZRIE_EOSMWayType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TwinBLDEditor_EOSMWayType, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("EOSMWayType"));
		}
		return ZRIE_EOSMWayType.OuterSingleton;
	}
	if (!ZRIE_EOSMWayType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOSMWayType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOSMWayType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOSMWayType *****************************************************************

// ********** Begin ScriptStruct FStreetMapVertex **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FStreetMapVertex_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FStreetMapVertex>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStreetMapVertex); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\x09""A single vertex on a street map mesh */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapTypes.h" },
		{ "ToolTip", "A single vertex on a street map mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Comment", "/** Location of the vertex in local space */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapTypes.h" },
		{ "ToolTip", "Location of the vertex in local space" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureCoordinate_MetaData[] = {
		{ "Comment", "/** Texture coordinate */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapTypes.h" },
		{ "ToolTip", "Texture coordinate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentX_MetaData[] = {
		{ "Comment", "/** Tangent vector X */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapTypes.h" },
		{ "ToolTip", "Tangent vector X" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentZ_MetaData[] = {
		{ "Comment", "/** Tangent vector Z (normal) */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapTypes.h" },
		{ "ToolTip", "Tangent vector Z (normal)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Comment", "/** Color */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapTypes.h" },
		{ "ToolTip", "Color" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStreetMapVertex constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureCoordinate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TangentX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TangentZ;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStreetMapVertex constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapVertex>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FStreetMapVertex Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapVertex, Position), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TextureCoordinate = { "TextureCoordinate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapVertex, TextureCoordinate), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureCoordinate_MetaData), NewProp_TextureCoordinate_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TangentX = { "TangentX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapVertex, TangentX), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentX_MetaData), NewProp_TangentX_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TangentZ = { "TangentZ", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapVertex, TangentZ), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentZ_MetaData), NewProp_TangentZ_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapVertex, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextureCoordinate,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TangentX,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TangentZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FStreetMapVertex Property Definitions *******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"StreetMapVertex",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FStreetMapVertex>(),
	alignof(FStreetMapVertex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStreetMapVertex;
UScriptStruct* Z_Construct_UScriptStruct_FStreetMapVertex(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FStreetMapVertex.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FStreetMapVertex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapVertex, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("StreetMapVertex"));
		}
		return Z_Registration_Info_UScriptStruct_FStreetMapVertex.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FStreetMapVertex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStreetMapVertex.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStreetMapVertex.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FStreetMapVertex ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapTypes_h__Script_TwinBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_TwinBLDEditor_EOSMWayType, TEXT("EOSMWayType"), &ZRIE_EOSMWayType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1528707098U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FStreetMapVertex, Z_Construct_UScriptStruct_FStreetMapVertex_Statics::NewStructOps, TEXT("StreetMapVertex"),&Z_Registration_Info_UScriptStruct_FStreetMapVertex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreetMapVertex), 3662528142U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapTypes_h__Script_TwinBLDEditor_0419d79376879fe1402b72aef1409668ca67930b{
	TEXT("/Script/TwinBLDEditor"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
