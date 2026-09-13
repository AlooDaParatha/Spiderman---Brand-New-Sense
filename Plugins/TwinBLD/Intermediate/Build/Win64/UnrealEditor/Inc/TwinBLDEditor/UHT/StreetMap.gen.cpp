// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreetMap/StreetMap.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeStreetMap() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase);
TWINBLDEDITOR_API UEnum* Z_Construct_UEnum_TwinBLDEditor_EOSMGeometryRole(ETypeConstructPhase);
TWINBLDEDITOR_API UEnum* Z_Construct_UEnum_TwinBLDEditor_EOSMWayType(ETypeConstructPhase);
TWINBLDEDITOR_API UEnum* Z_Construct_UEnum_TwinBLDEditor_EStreetMapRoadType(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UStreetMap(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapBuilding(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapBuildingAssemblyStats(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapCollisionSettings(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapElement(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapGeometry(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapNode(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoad(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoadRef(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UStreetMap(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FStreetMapCollisionSettings ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FStreetMapCollisionSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStreetMapCollisionSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateCollision_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** Uses triangle mesh data for collision data. (Cannot be used for physics simulation). */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Uses triangle mesh data for collision data. (Cannot be used for physics simulation)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowDoubleSidedGeometry_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/**\n\x09*\x09If true, the physics triangle mesh will use double sided faces when doing scene queries.\n\x09*\x09This is useful for planes and single sided meshes that need traces to work on both sides.\n\x09*/" },
		{ "editcondition", "bGenerateCollision" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "If true, the physics triangle mesh will use double sided faces when doing scene queries.\nThis is useful for planes and single sided meshes that need traces to work on both sides." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStreetMapCollisionSettings constinit property declarations *******
	static void NewProp_bGenerateCollision_SetBit(void* Obj)
	{
		((FStreetMapCollisionSettings*)Obj)->bGenerateCollision = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateCollision;
	static void NewProp_bAllowDoubleSidedGeometry_SetBit(void* Obj)
	{
		((FStreetMapCollisionSettings*)Obj)->bAllowDoubleSidedGeometry = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDoubleSidedGeometry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStreetMapCollisionSettings constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapCollisionSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FStreetMapCollisionSettings Property Definitions ******************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bGenerateCollision = { "bGenerateCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool, nullptr, nullptr, 1, sizeof(uint8), sizeof(FStreetMapCollisionSettings), &UHT_STATICS::NewProp_bGenerateCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateCollision_MetaData), NewProp_bGenerateCollision_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAllowDoubleSidedGeometry = { "bAllowDoubleSidedGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool, nullptr, nullptr, 1, sizeof(uint8), sizeof(FStreetMapCollisionSettings), &UHT_STATICS::NewProp_bAllowDoubleSidedGeometry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowDoubleSidedGeometry_MetaData), NewProp_bAllowDoubleSidedGeometry_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bGenerateCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAllowDoubleSidedGeometry,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FStreetMapCollisionSettings Property Definitions ********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"StreetMapCollisionSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FStreetMapCollisionSettings>(),
	alignof(FStreetMapCollisionSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStreetMapCollisionSettings;
UScriptStruct* Z_Construct_UScriptStruct_FStreetMapCollisionSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FStreetMapCollisionSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FStreetMapCollisionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapCollisionSettings, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("StreetMapCollisionSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FStreetMapCollisionSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FStreetMapCollisionSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStreetMapCollisionSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStreetMapCollisionSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FStreetMapCollisionSettings *****************************************

// ********** Begin ScriptStruct FStreetMapMeshBuildSettings ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FStreetMapMeshBuildSettings>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStreetMapMeshBuildSettings); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Mesh generation settings */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Mesh generation settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadOffsetZ_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Roads base vertical offset */" },
		{ "DisplayName", "Road Vertical Offset" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Roads base vertical offset" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantBuildings_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** Whether or  */" },
		{ "DisplayName", "Create Buildings" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Whether or" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWant3DBuildings_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** if true buildings mesh will be 3D instead of flat representation. */" },
		{ "DisplayName", "Create 3D Buildings" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "if true buildings mesh will be 3D instead of flat representation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingLevelFloorFactor_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** building level floor conversion factor in centimeters\n\x09\x09@todo: harmonize with OSMToCentimetersScaleFactor refactoring\n\x09*/" },
		{ "DisplayName", "Building Level Floor Factor" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "building level floor conversion factor in centimeters\n              @todo: harmonize with OSMToCentimetersScaleFactor refactoring" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantLitBuildings_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/**\n\x09* If true, buildings mesh will receive light information.\n\x09* Lit buildings can't share vertices beyond quads (all quads have their own face normals), so this uses a lot more geometry.\n\x09*/" },
		{ "DisplayName", "Lit buildings" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "If true, buildings mesh will receive light information.\nLit buildings can't share vertices beyond quads (all quads have their own face normals), so this uses a lot more geometry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreetThickness_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Streets thickness */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Streets thickness" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreetColor_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** Street vertex color */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Street vertex color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MajorRoadThickness_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Major road thickness */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Major road thickness" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MajorRoadColor_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** Major road vertex color */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Major road vertex color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighwayThickness_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Highway thickness */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Highway thickness" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighwayColor_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** Highway vertex color */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Highway vertex color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingBorderThickness_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Streets Thickness */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Streets Thickness" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingBorderLinearColor_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "/** Building border vertex color */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Building border vertex color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingBorderZ_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Buildings border vertical offset */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Buildings border vertical offset" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStreetMapMeshBuildSettings constinit property declarations *******
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoadOffsetZ;
	static void NewProp_bWantBuildings_SetBit(void* Obj)
	{
		((FStreetMapMeshBuildSettings*)Obj)->bWantBuildings = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantBuildings;
	static void NewProp_bWant3DBuildings_SetBit(void* Obj)
	{
		((FStreetMapMeshBuildSettings*)Obj)->bWant3DBuildings = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWant3DBuildings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BuildingLevelFloorFactor;
	static void NewProp_bWantLitBuildings_SetBit(void* Obj)
	{
		((FStreetMapMeshBuildSettings*)Obj)->bWantLitBuildings = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantLitBuildings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StreetThickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StreetColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MajorRoadThickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MajorRoadColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HighwayThickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HighwayColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BuildingBorderThickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuildingBorderLinearColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BuildingBorderZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStreetMapMeshBuildSettings constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapMeshBuildSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FStreetMapMeshBuildSettings Property Definitions ******************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RoadOffsetZ = { "RoadOffsetZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapMeshBuildSettings, RoadOffsetZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadOffsetZ_MetaData), NewProp_RoadOffsetZ_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bWantBuildings = { "bWantBuildings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool, nullptr, nullptr, 1, sizeof(uint8), sizeof(FStreetMapMeshBuildSettings), &UHT_STATICS::NewProp_bWantBuildings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantBuildings_MetaData), NewProp_bWantBuildings_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bWant3DBuildings = { "bWant3DBuildings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool, nullptr, nullptr, 1, sizeof(uint8), sizeof(FStreetMapMeshBuildSettings), &UHT_STATICS::NewProp_bWant3DBuildings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWant3DBuildings_MetaData), NewProp_bWant3DBuildings_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BuildingLevelFloorFactor = { "BuildingLevelFloorFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapMeshBuildSettings, BuildingLevelFloorFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingLevelFloorFactor_MetaData), NewProp_BuildingLevelFloorFactor_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bWantLitBuildings = { "bWantLitBuildings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool, nullptr, nullptr, 1, sizeof(uint8), sizeof(FStreetMapMeshBuildSettings), &UHT_STATICS::NewProp_bWantLitBuildings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantLitBuildings_MetaData), NewProp_bWantLitBuildings_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StreetThickness = { "StreetThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapMeshBuildSettings, StreetThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreetThickness_MetaData), NewProp_StreetThickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_StreetColor = { "StreetColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapMeshBuildSettings, StreetColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreetColor_MetaData), NewProp_StreetColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MajorRoadThickness = { "MajorRoadThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapMeshBuildSettings, MajorRoadThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MajorRoadThickness_MetaData), NewProp_MajorRoadThickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_MajorRoadColor = { "MajorRoadColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapMeshBuildSettings, MajorRoadColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MajorRoadColor_MetaData), NewProp_MajorRoadColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_HighwayThickness = { "HighwayThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapMeshBuildSettings, HighwayThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighwayThickness_MetaData), NewProp_HighwayThickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_HighwayColor = { "HighwayColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapMeshBuildSettings, HighwayColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighwayColor_MetaData), NewProp_HighwayColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BuildingBorderThickness = { "BuildingBorderThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapMeshBuildSettings, BuildingBorderThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingBorderThickness_MetaData), NewProp_BuildingBorderThickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BuildingBorderLinearColor = { "BuildingBorderLinearColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapMeshBuildSettings, BuildingBorderLinearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingBorderLinearColor_MetaData), NewProp_BuildingBorderLinearColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BuildingBorderZ = { "BuildingBorderZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapMeshBuildSettings, BuildingBorderZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingBorderZ_MetaData), NewProp_BuildingBorderZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadOffsetZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bWantBuildings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bWant3DBuildings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingLevelFloorFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bWantLitBuildings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StreetThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StreetColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MajorRoadThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MajorRoadColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HighwayThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HighwayColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingBorderThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingBorderLinearColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingBorderZ,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FStreetMapMeshBuildSettings Property Definitions ********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"StreetMapMeshBuildSettings",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FStreetMapMeshBuildSettings>(),
	alignof(FStreetMapMeshBuildSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStreetMapMeshBuildSettings;
UScriptStruct* Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FStreetMapMeshBuildSettings.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FStreetMapMeshBuildSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("StreetMapMeshBuildSettings"));
		}
		return Z_Registration_Info_UScriptStruct_FStreetMapMeshBuildSettings.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FStreetMapMeshBuildSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStreetMapMeshBuildSettings.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStreetMapMeshBuildSettings.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FStreetMapMeshBuildSettings *****************************************

// ********** Begin Enum EStreetMapRoadType ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_TwinBLDEditor_EStreetMapRoadType_Statics
template<> TWINBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EStreetMapRoadType>()
{
	return Z_Construct_UEnum_TwinBLDEditor_EStreetMapRoadType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Types of roads \n" },
		{ "Highway.Name", "Highway" },
		{ "MajorRoad.Comment", "// Major road or minor state highway \n" },
		{ "MajorRoad.Name", "MajorRoad" },
		{ "MajorRoad.ToolTip", "Major road or minor state highway" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "Other.Comment", "// Other (path, bus route, etc) \n" },
		{ "Other.Name", "Other" },
		{ "Other.ToolTip", "Other (path, bus route, etc)" },
		{ "Street.Comment", "// Small road or residential street \n" },
		{ "Street.Name", "Street" },
		{ "Street.ToolTip", "Small road or residential street" },
		{ "ToolTip", "Types of roads" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Street", (int64)Street },
		{ "MajorRoad", (int64)MajorRoad },
		{ "Highway", (int64)Highway },
		{ "Other", (int64)Other },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	"EStreetMapRoadType",
	"EStreetMapRoadType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	(uint8)UEnum::EUnderlyingType::int32,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EStreetMapRoadType;
UEnum* Z_Construct_UEnum_TwinBLDEditor_EStreetMapRoadType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EStreetMapRoadType.OuterSingleton)
		{
			ZRIE_EStreetMapRoadType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TwinBLDEditor_EStreetMapRoadType, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("EStreetMapRoadType"));
		}
		return ZRIE_EStreetMapRoadType.OuterSingleton;
	}
	if (!ZRIE_EStreetMapRoadType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EStreetMapRoadType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EStreetMapRoadType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EStreetMapRoadType **********************************************************

// ********** Begin Enum EOSMGeometryRole **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_TwinBLDEditor_EOSMGeometryRole_Statics
template<> TWINBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EOSMGeometryRole>()
{
	return Z_Construct_UEnum_TwinBLDEditor_EOSMGeometryRole(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Member roles for building and multipolygon Relation types \n" },
		{ "EOSMGeometryRole_Inner.Name", "EOSMGeometryRole::EOSMGeometryRole_Inner" },
		{ "EOSMGeometryRole_None.Name", "EOSMGeometryRole::EOSMGeometryRole_None" },
		{ "EOSMGeometryRole_Outer.Name", "EOSMGeometryRole::EOSMGeometryRole_Outer" },
		{ "EOSMGeometryRole_Outline.Name", "EOSMGeometryRole::EOSMGeometryRole_Outline" },
		{ "EOSMGeometryRole_Part.Name", "EOSMGeometryRole::EOSMGeometryRole_Part" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Member roles for building and multipolygon Relation types" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOSMGeometryRole::EOSMGeometryRole_None", (int64)EOSMGeometryRole::EOSMGeometryRole_None },
		{ "EOSMGeometryRole::EOSMGeometryRole_Outline", (int64)EOSMGeometryRole::EOSMGeometryRole_Outline },
		{ "EOSMGeometryRole::EOSMGeometryRole_Inner", (int64)EOSMGeometryRole::EOSMGeometryRole_Inner },
		{ "EOSMGeometryRole::EOSMGeometryRole_Outer", (int64)EOSMGeometryRole::EOSMGeometryRole_Outer },
		{ "EOSMGeometryRole::EOSMGeometryRole_Part", (int64)EOSMGeometryRole::EOSMGeometryRole_Part },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	"EOSMGeometryRole",
	"EOSMGeometryRole",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EOSMGeometryRole;
UEnum* Z_Construct_UEnum_TwinBLDEditor_EOSMGeometryRole(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EOSMGeometryRole.OuterSingleton)
		{
			ZRIE_EOSMGeometryRole.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TwinBLDEditor_EOSMGeometryRole, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("EOSMGeometryRole"));
		}
		return ZRIE_EOSMGeometryRole.OuterSingleton;
	}
	if (!ZRIE_EOSMGeometryRole.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EOSMGeometryRole.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EOSMGeometryRole.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EOSMGeometryRole ************************************************************

// ********** Begin ScriptStruct FStreetMapRoad ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FStreetMapRoad_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FStreetMapRoad>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStreetMapRoad); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OSMId_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadName_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// Name of the road \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Name of the road" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadType_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// Type of road \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Type of road" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawType_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// Raw OSM Type for this map element. \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Raw OSM Type for this map element." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndices_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// Nodes along this road, one at each point in the RoadPoints list \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Nodes along this road, one at each point in the RoadPoints list" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadPoints_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// List of all of the points on this road, one for each node in the NodeIndices list \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "List of all of the points on this road, one for each node in the NodeIndices list" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// Tags associated with this map element. \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Tags associated with this map element." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsMin_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// 2D bounds (min) of this road's points \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "2D bounds (min) of this road's points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsMax_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// 2D bounds (max) of this road's points \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "2D bounds (max) of this road's points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOneWay_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// True if this node is a one way.  One way nodes are only traversable in the order the nodes are listed in the above array. \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "True if this node is a one way.  One way nodes are only traversable in the order the nodes are listed in the above array." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStreetMapRoad constinit property declarations ********************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_OSMId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RoadName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RoadType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RawType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RawType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeIndices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoadPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoadPoints;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundsMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundsMax;
	static void NewProp_bIsOneWay_SetBit(void* Obj)
	{
		((FStreetMapRoad*)Obj)->bIsOneWay = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOneWay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStreetMapRoad constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapRoad>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FStreetMapRoad Property Definitions *******************************
const UECodeGen_Private::FInt64PropertyParams UHT_STATICS::NewProp_OSMId = { "OSMId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoad, OSMId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OSMId_MetaData), NewProp_OSMId_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_RoadName = { "RoadName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoad, RoadName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadName_MetaData), NewProp_RoadName_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_RoadType = { "RoadType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoad, RoadType), Z_Construct_UEnum_TwinBLDEditor_EStreetMapRoadType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadType_MetaData), NewProp_RoadType_MetaData) }; // 0f5a1fedd02c5628a8efb3d71cfa355a900ab739
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_RawType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_RawType = { "RawType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoad, RawType), Z_Construct_UEnum_TwinBLDEditor_EOSMWayType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawType_MetaData), NewProp_RawType_MetaData) }; // 5b1e381aeff0552c511b4c1744d11a209d3e48e0
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NodeIndices_Inner = { "NodeIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_NodeIndices = { "NodeIndices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoad, NodeIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeIndices_MetaData), NewProp_NodeIndices_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RoadPoints_Inner = { "RoadPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RoadPoints = { "RoadPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoad, RoadPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadPoints_MetaData), NewProp_RoadPoints_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Tags_ValueProp = { "Tags", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Tags_Key_KeyProp = { "Tags_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoad, Tags), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BoundsMin = { "BoundsMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoad, BoundsMin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsMin_MetaData), NewProp_BoundsMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BoundsMax = { "BoundsMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoad, BoundsMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsMax_MetaData), NewProp_BoundsMax_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsOneWay = { "bIsOneWay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool, nullptr, nullptr, 1, sizeof(uint8), sizeof(FStreetMapRoad), &UHT_STATICS::NewProp_bIsOneWay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOneWay_MetaData), NewProp_bIsOneWay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OSMId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RawType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RawType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeIndices,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tags_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tags_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoundsMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoundsMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsOneWay,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FStreetMapRoad Property Definitions *********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"StreetMapRoad",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FStreetMapRoad>(),
	alignof(FStreetMapRoad),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStreetMapRoad;
UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoad(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FStreetMapRoad.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FStreetMapRoad.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapRoad, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("StreetMapRoad"));
		}
		return Z_Registration_Info_UScriptStruct_FStreetMapRoad.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FStreetMapRoad.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStreetMapRoad.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStreetMapRoad.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FStreetMapRoad ******************************************************

// ********** Begin ScriptStruct FStreetMapRoadRef *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FStreetMapRoadRef>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStreetMapRoadRef); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Nodes have a list of road refs, one for each road that intersects this node.  \n// Each road ref references a road and also the \n// point along that road where this node exists. \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Nodes have a list of road refs, one for each road that intersects this node.\nEach road ref references a road and also the\npoint along that road where this node exists." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadIndex_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// Index of road in the list of all roads in this street map \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Index of road in the list of all roads in this street map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadPointIndex_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// Index of the point along road where this node exists \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Index of the point along road where this node exists" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStreetMapRoadRef constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoadIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoadPointIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStreetMapRoadRef constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapRoadRef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FStreetMapRoadRef Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_RoadIndex = { "RoadIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoadRef, RoadIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadIndex_MetaData), NewProp_RoadIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_RoadPointIndex = { "RoadPointIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapRoadRef, RoadPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadPointIndex_MetaData), NewProp_RoadPointIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadPointIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FStreetMapRoadRef Property Definitions ******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"StreetMapRoadRef",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FStreetMapRoadRef>(),
	alignof(FStreetMapRoadRef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStreetMapRoadRef;
UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoadRef(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FStreetMapRoadRef.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FStreetMapRoadRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapRoadRef, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("StreetMapRoadRef"));
		}
		return Z_Registration_Info_UScriptStruct_FStreetMapRoadRef.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FStreetMapRoadRef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStreetMapRoadRef.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStreetMapRoadRef.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FStreetMapRoadRef ***************************************************

// ********** Begin ScriptStruct FStreetMapNode ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FStreetMapNode_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FStreetMapNode>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStreetMapNode); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Describes a node on a road.  \n// Nodes usually connect at least two roads together, but they might also exist at the end of a dead-end street.  \n// They are sort of like an \"intersection\". \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Describes a node on a road.\nNodes usually connect at least two roads together, but they might also exist at the end of a dead-end street.\nThey are sort of like an \"intersection\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadRefs_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// All of the roads that intersect this node.  We have references to each of these roads, as well as the point along each\n// road where this node exists \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "All of the roads that intersect this node.  We have references to each of these roads, as well as the point along each\nroad where this node exists" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStreetMapNode constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoadRefs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoadRefs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStreetMapNode constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FStreetMapNode Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RoadRefs_Inner = { "RoadRefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStreetMapRoadRef, METADATA_PARAMS(0, nullptr) }; // 92b3a034cc2f3e59518a31bc9d921da03c29cbd8
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RoadRefs = { "RoadRefs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapNode, RoadRefs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadRefs_MetaData), NewProp_RoadRefs_MetaData) }; // 92b3a034cc2f3e59518a31bc9d921da03c29cbd8
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadRefs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadRefs,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FStreetMapNode Property Definitions *********************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"StreetMapNode",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FStreetMapNode>(),
	alignof(FStreetMapNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStreetMapNode;
UScriptStruct* Z_Construct_UScriptStruct_FStreetMapNode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FStreetMapNode.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FStreetMapNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapNode, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("StreetMapNode"));
		}
		return Z_Registration_Info_UScriptStruct_FStreetMapNode.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FStreetMapNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStreetMapNode.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStreetMapNode.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FStreetMapNode ******************************************************

// ********** Begin ScriptStruct FStreetMapGeometry ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FStreetMapGeometry_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FStreetMapGeometry>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStreetMapGeometry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A part of a building \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "A part of a building" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OSMId_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// Tags associated with this map element. \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Tags associated with this map element." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// Supposed to be a polygon points. \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Supposed to be a polygon points." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// Max Z (in meters) \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Max Z (in meters)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinHeight_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// Starting Z (in meters) \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Starting Z (in meters)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Levels_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// Levels of the building \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Levels of the building" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingColor_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStreetMapGeometry constinit property declarations ****************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_OSMId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Levels;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Role_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Role;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuildingColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStreetMapGeometry constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapGeometry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FStreetMapGeometry Property Definitions ***************************
const UECodeGen_Private::FInt64PropertyParams UHT_STATICS::NewProp_OSMId = { "OSMId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapGeometry, OSMId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OSMId_MetaData), NewProp_OSMId_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Tags_ValueProp = { "Tags", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Tags_Key_KeyProp = { "Tags_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapGeometry, Tags), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapGeometry, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapGeometry, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MinHeight = { "MinHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapGeometry, MinHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinHeight_MetaData), NewProp_MinHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Levels = { "Levels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapGeometry, Levels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Levels_MetaData), NewProp_Levels_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapGeometry, Role), Z_Construct_UEnum_TwinBLDEditor_EOSMGeometryRole, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Role_MetaData), NewProp_Role_MetaData) }; // 48f2403b032f9934abfed637846abe7589d894ac
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BuildingColor = { "BuildingColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapGeometry, BuildingColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingColor_MetaData), NewProp_BuildingColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OSMId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tags_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tags_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Levels,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Role_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Role,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingColor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FStreetMapGeometry Property Definitions *****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"StreetMapGeometry",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FStreetMapGeometry>(),
	alignof(FStreetMapGeometry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStreetMapGeometry;
UScriptStruct* Z_Construct_UScriptStruct_FStreetMapGeometry(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FStreetMapGeometry.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FStreetMapGeometry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapGeometry, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("StreetMapGeometry"));
		}
		return Z_Registration_Info_UScriptStruct_FStreetMapGeometry.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FStreetMapGeometry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStreetMapGeometry.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStreetMapGeometry.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FStreetMapGeometry **************************************************

// ********** Begin ScriptStruct FStreetMapBuilding ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FStreetMapBuilding_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FStreetMapBuilding>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStreetMapBuilding); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OSMId_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingName_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// Name of the building \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Name of the building" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawType_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// Raw OSM Type for this map element. \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Raw OSM Type for this map element." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingPoints_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// Polygon points that define the perimeter of the building \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Polygon points that define the perimeter of the building" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// Polygons that form the building \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Polygons that form the building" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// Tags associated with this map element. \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Tags associated with this map element." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// Height of the building in meters (if known, otherwise zero) \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Height of the building in meters (if known, otherwise zero)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingLevels_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// Levels of the building (if known, otherwise zero) \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Levels of the building (if known, otherwise zero)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsMin_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// 2D bounds (min) of this building's points \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "2D bounds (min) of this building's points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsMax_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// 2D bounds (max) of this building's points \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "2D bounds (max) of this building's points" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStreetMapBuilding constinit property declarations ****************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_OSMId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BuildingName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RawType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RawType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuildingPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BuildingPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Geometry_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Geometry;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Height;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BuildingLevels;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundsMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundsMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStreetMapBuilding constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapBuilding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FStreetMapBuilding Property Definitions ***************************
const UECodeGen_Private::FInt64PropertyParams UHT_STATICS::NewProp_OSMId = { "OSMId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapBuilding, OSMId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OSMId_MetaData), NewProp_OSMId_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_BuildingName = { "BuildingName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapBuilding, BuildingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingName_MetaData), NewProp_BuildingName_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_RawType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_RawType = { "RawType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapBuilding, RawType), Z_Construct_UEnum_TwinBLDEditor_EOSMWayType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawType_MetaData), NewProp_RawType_MetaData) }; // 5b1e381aeff0552c511b4c1744d11a209d3e48e0
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BuildingPoints_Inner = { "BuildingPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_BuildingPoints = { "BuildingPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapBuilding, BuildingPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingPoints_MetaData), NewProp_BuildingPoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Geometry_Inner = { "Geometry", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStreetMapGeometry, METADATA_PARAMS(0, nullptr) }; // 3a17d466a30c6968a4a1b903f3715106bf4287eb
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapBuilding, Geometry), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Geometry_MetaData), NewProp_Geometry_MetaData) }; // 3a17d466a30c6968a4a1b903f3715106bf4287eb
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Tags_ValueProp = { "Tags", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Tags_Key_KeyProp = { "Tags_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapBuilding, Tags), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapBuilding, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_BuildingLevels = { "BuildingLevels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapBuilding, BuildingLevels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingLevels_MetaData), NewProp_BuildingLevels_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BoundsMin = { "BoundsMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapBuilding, BoundsMin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsMin_MetaData), NewProp_BoundsMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BoundsMax = { "BoundsMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapBuilding, BoundsMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsMax_MetaData), NewProp_BoundsMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OSMId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RawType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RawType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Geometry_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Geometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tags_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tags_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoundsMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoundsMax,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FStreetMapBuilding Property Definitions *****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"StreetMapBuilding",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FStreetMapBuilding>(),
	alignof(FStreetMapBuilding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStreetMapBuilding;
UScriptStruct* Z_Construct_UScriptStruct_FStreetMapBuilding(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FStreetMapBuilding.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FStreetMapBuilding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapBuilding, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("StreetMapBuilding"));
		}
		return Z_Registration_Info_UScriptStruct_FStreetMapBuilding.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FStreetMapBuilding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStreetMapBuilding.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStreetMapBuilding.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FStreetMapBuilding **************************************************

// ********** Begin ScriptStruct FStreetMapBuildingAssemblyStats ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FStreetMapBuildingAssemblyStats_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FStreetMapBuildingAssemblyStats>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStreetMapBuildingAssemblyStats); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Counters describing how standalone `building:part` ways were reassembled into multi-tier massing.\n *\n * OpenStreetMap's \"Simple 3D Buildings\" scheme associates a part with its parent outline by spatial\n * containment rather than relation membership, so the importer has to rebuild those links\n * geometrically. These counters record the outcome for import reporting and regression tests.\n */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Counters describing how standalone `building:part` ways were reassembled into multi-tier massing.\n\nOpenStreetMap's \"Simple 3D Buildings\" scheme associates a part with its parent outline by spatial\ncontainment rather than relation membership, so the importer has to rebuild those links\ngeometrically. These counters record the outcome for import reporting and regression tests." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutlineBuildings_MetaData[] = {
		{ "Category", "TwinBLD|Buildings" },
		{ "Comment", "/** Buildings present before assembly (outline ways plus relation buildings). */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Buildings present before assembly (outline ways plus relation buildings)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartsConsidered_MetaData[] = {
		{ "Category", "TwinBLD|Buildings" },
		{ "Comment", "/** Standalone `building:part` ways handed to the assembler. */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Standalone `building:part` ways handed to the assembler." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartsAttached_MetaData[] = {
		{ "Category", "TwinBLD|Buildings" },
		{ "Comment", "/** Parts successfully attached to an outline. */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Parts successfully attached to an outline." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartsOrphaned_MetaData[] = {
		{ "Category", "TwinBLD|Buildings" },
		{ "Comment", "/** Parts that matched no outline. */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Parts that matched no outline." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartsRejected_MetaData[] = {
		{ "Category", "TwinBLD|Buildings" },
		{ "Comment", "/** Parts rejected for degenerate or sub-threshold area. */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Parts rejected for degenerate or sub-threshold area." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrphanBuildingsEmitted_MetaData[] = {
		{ "Category", "TwinBLD|Buildings" },
		{ "Comment", "/** Buildings synthesized from clusters of orphan parts. */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Buildings synthesized from clusters of orphan parts." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingsWithParts_MetaData[] = {
		{ "Category", "TwinBLD|Buildings" },
		{ "Comment", "/** Buildings that ended up with at least one part, i.e. that will produce floor plates. */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Buildings that ended up with at least one part, i.e. that will produce floor plates." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseTiersSynthesized_MetaData[] = {
		{ "Category", "TwinBLD|Buildings" },
		{ "Comment", "/** Outline tiers inserted beneath a floating lowest part. */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Outline tiers inserted beneath a floating lowest part." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResidualTiersSynthesized_MetaData[] = {
		{ "Category", "TwinBLD|Buildings" },
		{ "Comment", "/** Podium tiers inserted where parts left the outline uncovered. */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Podium tiers inserted where parts left the outline uncovered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoveredRelationMemberBuildings_MetaData[] = {
		{ "Category", "TwinBLD|Buildings" },
		{ "Comment", "/** Buildings recovered that would otherwise have been dropped for belonging to a non-building relation. */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Buildings recovered that would otherwise have been dropped for belonging to a non-building relation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultipolygonBuildings_MetaData[] = {
		{ "Category", "TwinBLD|Buildings" },
		{ "Comment", "/** Buildings built from `type=multipolygon` relations carrying a building tag. */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Buildings built from `type=multipolygon` relations carrying a building tag." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerRings_MetaData[] = {
		{ "Category", "TwinBLD|Buildings" },
		{ "Comment", "/** Inner rings captured for subtraction from their enclosing footprint. */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Inner rings captured for subtraction from their enclosing footprint." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStreetMapBuildingAssemblyStats constinit property declarations ***
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutlineBuildings;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PartsConsidered;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PartsAttached;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PartsOrphaned;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PartsRejected;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OrphanBuildingsEmitted;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BuildingsWithParts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BaseTiersSynthesized;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResidualTiersSynthesized;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RecoveredRelationMemberBuildings;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MultipolygonBuildings;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InnerRings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStreetMapBuildingAssemblyStats constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapBuildingAssemblyStats>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FStreetMapBuildingAssemblyStats Property Definitions **************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OutlineBuildings = { "OutlineBuildings", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapBuildingAssemblyStats, OutlineBuildings), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutlineBuildings_MetaData), NewProp_OutlineBuildings_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PartsConsidered = { "PartsConsidered", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapBuildingAssemblyStats, PartsConsidered), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartsConsidered_MetaData), NewProp_PartsConsidered_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PartsAttached = { "PartsAttached", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapBuildingAssemblyStats, PartsAttached), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartsAttached_MetaData), NewProp_PartsAttached_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PartsOrphaned = { "PartsOrphaned", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapBuildingAssemblyStats, PartsOrphaned), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartsOrphaned_MetaData), NewProp_PartsOrphaned_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PartsRejected = { "PartsRejected", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapBuildingAssemblyStats, PartsRejected), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartsRejected_MetaData), NewProp_PartsRejected_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OrphanBuildingsEmitted = { "OrphanBuildingsEmitted", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapBuildingAssemblyStats, OrphanBuildingsEmitted), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrphanBuildingsEmitted_MetaData), NewProp_OrphanBuildingsEmitted_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_BuildingsWithParts = { "BuildingsWithParts", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapBuildingAssemblyStats, BuildingsWithParts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingsWithParts_MetaData), NewProp_BuildingsWithParts_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_BaseTiersSynthesized = { "BaseTiersSynthesized", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapBuildingAssemblyStats, BaseTiersSynthesized), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseTiersSynthesized_MetaData), NewProp_BaseTiersSynthesized_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ResidualTiersSynthesized = { "ResidualTiersSynthesized", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapBuildingAssemblyStats, ResidualTiersSynthesized), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResidualTiersSynthesized_MetaData), NewProp_ResidualTiersSynthesized_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_RecoveredRelationMemberBuildings = { "RecoveredRelationMemberBuildings", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapBuildingAssemblyStats, RecoveredRelationMemberBuildings), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoveredRelationMemberBuildings_MetaData), NewProp_RecoveredRelationMemberBuildings_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MultipolygonBuildings = { "MultipolygonBuildings", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapBuildingAssemblyStats, MultipolygonBuildings), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultipolygonBuildings_MetaData), NewProp_MultipolygonBuildings_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_InnerRings = { "InnerRings", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapBuildingAssemblyStats, InnerRings), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerRings_MetaData), NewProp_InnerRings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutlineBuildings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PartsConsidered,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PartsAttached,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PartsOrphaned,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PartsRejected,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OrphanBuildingsEmitted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingsWithParts,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BaseTiersSynthesized,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ResidualTiersSynthesized,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RecoveredRelationMemberBuildings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MultipolygonBuildings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InnerRings,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FStreetMapBuildingAssemblyStats Property Definitions ****************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"StreetMapBuildingAssemblyStats",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FStreetMapBuildingAssemblyStats>(),
	alignof(FStreetMapBuildingAssemblyStats),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStreetMapBuildingAssemblyStats;
UScriptStruct* Z_Construct_UScriptStruct_FStreetMapBuildingAssemblyStats(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FStreetMapBuildingAssemblyStats.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FStreetMapBuildingAssemblyStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapBuildingAssemblyStats, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("StreetMapBuildingAssemblyStats"));
		}
		return Z_Registration_Info_UScriptStruct_FStreetMapBuildingAssemblyStats.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FStreetMapBuildingAssemblyStats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStreetMapBuildingAssemblyStats.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStreetMapBuildingAssemblyStats.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FStreetMapBuildingAssemblyStats *************************************

// ********** Begin ScriptStruct FStreetMapElement *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FStreetMapElement_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FStreetMapElement>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FStreetMapElement); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A generic  \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "A generic" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OSMId_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// Name of the element \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Name of the element" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawType_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// Raw OSM Type for this map element. \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Raw OSM Type for this map element." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClosedLoop_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// Whether or not the `Points` represent a closed loop. \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Whether or not the `Points` represent a closed loop." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// Polygon points that define the the element (could be a boundary or a polyline) \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Polygon points that define the the element (could be a boundary or a polyline)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// Tags associated with this map element. \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Tags associated with this map element." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsMin_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// 2D bounds (min) of this element's points \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "2D bounds (min) of this element's points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundsMax_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// 2D bounds (max) of this element's points \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "2D bounds (max) of this element's points" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FStreetMapElement constinit property declarations *****************
	static const UECodeGen_Private::FInt64PropertyParams NewProp_OSMId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RawType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RawType;
	static void NewProp_bClosedLoop_SetBit(void* Obj)
	{
		((FStreetMapElement*)Obj)->bClosedLoop = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClosedLoop;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundsMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundsMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FStreetMapElement constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreetMapElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FStreetMapElement Property Definitions ****************************
const UECodeGen_Private::FInt64PropertyParams UHT_STATICS::NewProp_OSMId = { "OSMId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapElement, OSMId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OSMId_MetaData), NewProp_OSMId_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapElement, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_RawType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_RawType = { "RawType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapElement, RawType), Z_Construct_UEnum_TwinBLDEditor_EOSMWayType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawType_MetaData), NewProp_RawType_MetaData) }; // 5b1e381aeff0552c511b4c1744d11a209d3e48e0
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bClosedLoop = { "bClosedLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FStreetMapElement), &UHT_STATICS::NewProp_bClosedLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClosedLoop_MetaData), NewProp_bClosedLoop_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapElement, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Tags_ValueProp = { "Tags", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Tags_Key_KeyProp = { "Tags_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapElement, Tags), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BoundsMin = { "BoundsMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapElement, BoundsMin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsMin_MetaData), NewProp_BoundsMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BoundsMax = { "BoundsMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FStreetMapElement, BoundsMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundsMax_MetaData), NewProp_BoundsMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OSMId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RawType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RawType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bClosedLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tags_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tags_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoundsMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BoundsMax,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FStreetMapElement Property Definitions ******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"StreetMapElement",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FStreetMapElement>(),
	alignof(FStreetMapElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FStreetMapElement;
UScriptStruct* Z_Construct_UScriptStruct_FStreetMapElement(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FStreetMapElement.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FStreetMapElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreetMapElement, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("StreetMapElement"));
		}
		return Z_Registration_Info_UScriptStruct_FStreetMapElement.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FStreetMapElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FStreetMapElement.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FStreetMapElement.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FStreetMapElement ***************************************************

// ********** Begin Class UStreetMap ***************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UStreetMap_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A loaded street map \n" },
		{ "IncludePath", "StreetMap/StreetMap.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "A loaded street map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Roads_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// List of nodes on this map.  Nodes describe interesting points along roads, usually where roads intersect or at the end of a dead-end street \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "List of nodes on this map.  Nodes describe interesting points along roads, usually where roads intersect or at the end of a dead-end street" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Buildings_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherElements_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// List of all other elements that are not roads or buildings \n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "List of all other elements that are not roads or buildings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingAssemblyStats_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// Result of reconstructing multi-tier massing from standalone `building:part` ways at import time.\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Result of reconstructing multi-tier massing from standalone `building:part` ways at import time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// Geographic coordinates\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Geographic coordinates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// Bounds in UE units\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Bounds in UE units" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisOrder_MetaData[] = {
		{ "Category", "StreetMap" },
		{ "Comment", "// Axis order during import\n" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Axis order during import" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "// Importing data and options used for this mesh \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMap.h" },
		{ "ToolTip", "Importing data and options used for this mesh" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA

// ********** Begin Class UStreetMap constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Roads_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Roads;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Nodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Buildings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Buildings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OtherElements_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OtherElements;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuildingAssemblyStats;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisOrder;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UStreetMap constinit property declarations *********************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreetMap>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UStreetMap Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Roads_Inner = { "Roads", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStreetMapRoad, METADATA_PARAMS(0, nullptr) }; // 6c8508bd7d96d0a405df0ec09f79a18dcc8f2b44
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Roads = { "Roads", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMap, Roads), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Roads_MetaData), NewProp_Roads_MetaData) }; // 6c8508bd7d96d0a405df0ec09f79a18dcc8f2b44
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStreetMapNode, METADATA_PARAMS(0, nullptr) }; // 1721baaefce61c3802ec1904ef9e1fc1ef929c95
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMap, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nodes_MetaData), NewProp_Nodes_MetaData) }; // 1721baaefce61c3802ec1904ef9e1fc1ef929c95
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Buildings_Inner = { "Buildings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStreetMapBuilding, METADATA_PARAMS(0, nullptr) }; // 9c80cd0a6043d885eef18e6aeb7753379022d92d
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Buildings = { "Buildings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMap, Buildings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Buildings_MetaData), NewProp_Buildings_MetaData) }; // 9c80cd0a6043d885eef18e6aeb7753379022d92d
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OtherElements_Inner = { "OtherElements", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStreetMapElement, METADATA_PARAMS(0, nullptr) }; // 592f4d185ad18692ba3e6832337625f253cb67e6
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OtherElements = { "OtherElements", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMap, OtherElements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherElements_MetaData), NewProp_OtherElements_MetaData) }; // 592f4d185ad18692ba3e6832337625f253cb67e6
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_BuildingAssemblyStats = { "BuildingAssemblyStats", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMap, BuildingAssemblyStats), Z_Construct_UScriptStruct_FStreetMapBuildingAssemblyStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingAssemblyStats_MetaData), NewProp_BuildingAssemblyStats_MetaData) }; // 8f676e9c39fc5f3c3aee8583f135bc4e31b678f0
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMap, Coordinates), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coordinates_MetaData), NewProp_Coordinates_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMap, Bounds), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounds_MetaData), NewProp_Bounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AxisOrder = { "AxisOrder", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMap, AxisOrder), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisOrder_MetaData), NewProp_AxisOrder_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00120008000a0009, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMap, AssetImportData), Z_Construct_UClass_UAssetImportData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetImportData_MetaData), NewProp_AssetImportData_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Roads_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Roads,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Nodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Nodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Buildings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Buildings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherElements_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OtherElements,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingAssemblyStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Coordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AxisOrder,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UStreetMap Property Definitions ********************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UStreetMap,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UStreetMap;
UClass* Z_Construct_UClass_UStreetMap(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UStreetMap;
		if (!Z_Registration_Info_UClass_UStreetMap.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("StreetMap"),
				Z_Registration_Info_UClass_UStreetMap.InnerSingleton,
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
		return Z_Registration_Info_UClass_UStreetMap.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UStreetMap.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStreetMap.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UStreetMap.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UStreetMap);
UStreetMap::~UStreetMap() {}
// ********** End Class UStreetMap *****************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMap_h__Script_TwinBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_TwinBLDEditor_EStreetMapRoadType, TEXT("EStreetMapRoadType"), &ZRIE_EStreetMapRoadType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 257564653U) },
		{ Z_Construct_UEnum_TwinBLDEditor_EOSMGeometryRole, TEXT("EOSMGeometryRole"), &ZRIE_EOSMGeometryRole, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1223835707U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FStreetMapCollisionSettings, Z_Construct_UScriptStruct_FStreetMapCollisionSettings_Statics::NewStructOps, TEXT("StreetMapCollisionSettings"),&Z_Registration_Info_UScriptStruct_FStreetMapCollisionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreetMapCollisionSettings), 1577109228U) },
		{ Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings, Z_Construct_UScriptStruct_FStreetMapMeshBuildSettings_Statics::NewStructOps, TEXT("StreetMapMeshBuildSettings"),&Z_Registration_Info_UScriptStruct_FStreetMapMeshBuildSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreetMapMeshBuildSettings), 1979881211U) },
		{ Z_Construct_UScriptStruct_FStreetMapRoad, Z_Construct_UScriptStruct_FStreetMapRoad_Statics::NewStructOps, TEXT("StreetMapRoad"),&Z_Registration_Info_UScriptStruct_FStreetMapRoad, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreetMapRoad), 1820657853U) },
		{ Z_Construct_UScriptStruct_FStreetMapRoadRef, Z_Construct_UScriptStruct_FStreetMapRoadRef_Statics::NewStructOps, TEXT("StreetMapRoadRef"),&Z_Registration_Info_UScriptStruct_FStreetMapRoadRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreetMapRoadRef), 2461245492U) },
		{ Z_Construct_UScriptStruct_FStreetMapNode, Z_Construct_UScriptStruct_FStreetMapNode_Statics::NewStructOps, TEXT("StreetMapNode"),&Z_Registration_Info_UScriptStruct_FStreetMapNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreetMapNode), 388086446U) },
		{ Z_Construct_UScriptStruct_FStreetMapGeometry, Z_Construct_UScriptStruct_FStreetMapGeometry_Statics::NewStructOps, TEXT("StreetMapGeometry"),&Z_Registration_Info_UScriptStruct_FStreetMapGeometry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreetMapGeometry), 974640230U) },
		{ Z_Construct_UScriptStruct_FStreetMapBuilding, Z_Construct_UScriptStruct_FStreetMapBuilding_Statics::NewStructOps, TEXT("StreetMapBuilding"),&Z_Registration_Info_UScriptStruct_FStreetMapBuilding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreetMapBuilding), 2625686794U) },
		{ Z_Construct_UScriptStruct_FStreetMapBuildingAssemblyStats, Z_Construct_UScriptStruct_FStreetMapBuildingAssemblyStats_Statics::NewStructOps, TEXT("StreetMapBuildingAssemblyStats"),&Z_Registration_Info_UScriptStruct_FStreetMapBuildingAssemblyStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreetMapBuildingAssemblyStats), 2405920412U) },
		{ Z_Construct_UScriptStruct_FStreetMapElement, Z_Construct_UScriptStruct_FStreetMapElement_Statics::NewStructOps, TEXT("StreetMapElement"),&Z_Registration_Info_UScriptStruct_FStreetMapElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreetMapElement), 1496272152U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStreetMap, TEXT("UStreetMap"), &Z_Registration_Info_UClass_UStreetMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStreetMap), 7497046U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMap_h__Script_TwinBLDEditor_fdc7e4edd25f5ff76faf167069ccaed6c0dac51d{
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
