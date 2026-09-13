// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoadModuleObject.h"
#include "RoadBLDTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRoadModuleObject() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_EMeshType(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_ERoadModuleCrossSectionSource(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_ERoadModulePosition(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadModuleObject(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadModuleParameters(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnModuleDesc(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnModulesParams(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadModuleObject(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EMeshType *****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDRuntime_EMeshType_Statics
template<> ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EMeshType>()
{
	return Z_Construct_UEnum_RoadBLDRuntime_EMeshType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ProceduralMesh.Name", "EMeshType::ProceduralMesh" },
		{ "SplineMeshes.Name", "EMeshType::SplineMeshes" },
		{ "StaticMeshes.Name", "EMeshType::StaticMeshes" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMeshType::ProceduralMesh", (int64)EMeshType::ProceduralMesh },
		{ "EMeshType::SplineMeshes", (int64)EMeshType::SplineMeshes },
		{ "EMeshType::StaticMeshes", (int64)EMeshType::StaticMeshes },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	"EMeshType",
	"EMeshType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EMeshType;
UEnum* Z_Construct_UEnum_RoadBLDRuntime_EMeshType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EMeshType.OuterSingleton)
		{
			ZRIE_EMeshType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDRuntime_EMeshType, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("EMeshType"));
		}
		return ZRIE_EMeshType.OuterSingleton;
	}
	if (!ZRIE_EMeshType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EMeshType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EMeshType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EMeshType *******************************************************************

// ********** Begin Enum ERoadModuleCrossSectionSource *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDRuntime_ERoadModuleCrossSectionSource_Statics
template<> ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ERoadModuleCrossSectionSource>()
{
	return Z_Construct_UEnum_RoadBLDRuntime_ERoadModuleCrossSectionSource(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "CurveFloat.Name", "ERoadModuleCrossSectionSource::CurveFloat" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "VectorArray.Name", "ERoadModuleCrossSectionSource::VectorArray" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERoadModuleCrossSectionSource::CurveFloat", (int64)ERoadModuleCrossSectionSource::CurveFloat },
		{ "ERoadModuleCrossSectionSource::VectorArray", (int64)ERoadModuleCrossSectionSource::VectorArray },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	"ERoadModuleCrossSectionSource",
	"ERoadModuleCrossSectionSource",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERoadModuleCrossSectionSource;
UEnum* Z_Construct_UEnum_RoadBLDRuntime_ERoadModuleCrossSectionSource(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERoadModuleCrossSectionSource.OuterSingleton)
		{
			ZRIE_ERoadModuleCrossSectionSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDRuntime_ERoadModuleCrossSectionSource, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("ERoadModuleCrossSectionSource"));
		}
		return ZRIE_ERoadModuleCrossSectionSource.OuterSingleton;
	}
	if (!ZRIE_ERoadModuleCrossSectionSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERoadModuleCrossSectionSource.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERoadModuleCrossSectionSource.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERoadModuleCrossSectionSource ***********************************************

// ********** Begin ScriptStruct FSpawnModulesParams ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FSpawnModulesParams_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FSpawnModulesParams>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSpawnModulesParams); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[] = {
		{ "Category", "Roads" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreetStyleName_MetaData[] = {
		{ "Category", "Roads" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Classes_MetaData[] = {
		{ "Category", "Roads" },
		{ "Comment", "// DEPRECATED: The module classes to spawn. SEE: ModulesToSpawn\n" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "DEPRECATED: The module classes to spawn. SEE: ModulesToSpawn" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[] = {
		{ "Category", "Roads" },
		{ "Comment", "// DEPRECATED: Predefined modules positions - Left, Right, Center. SEE: ModulesToSpawn\n" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "DEPRECATED: Predefined modules positions - Left, Right, Center. SEE: ModulesToSpawn" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModulesToSpawn_MetaData[] = {
		{ "Category", "Roads" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSpawnModulesParams constinit property declarations ***************
	static const UECodeGen_Private::FStrPropertyParams NewProp_PresetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StreetStyleName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Classes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Classes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Positions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModulesToSpawn_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModulesToSpawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSpawnModulesParams constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnModulesParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FSpawnModulesParams Property Definitions **************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnModulesParams, PresetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresetName_MetaData), NewProp_PresetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_StreetStyleName = { "StreetStyleName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnModulesParams, StreetStyleName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreetStyleName_MetaData), NewProp_StreetStyleName_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_Classes_Inner = { "Classes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Classes = { "Classes", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnModulesParams, Classes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Classes_MetaData), NewProp_Classes_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnModulesParams, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Positions_MetaData), NewProp_Positions_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ModulesToSpawn_Inner = { "ModulesToSpawn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSpawnModuleDesc, METADATA_PARAMS(0, nullptr) }; // cc6ba34fe513bfaf20ad4dad4dc3e6cf70f3e3b0
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ModulesToSpawn = { "ModulesToSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnModulesParams, ModulesToSpawn), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModulesToSpawn_MetaData), NewProp_ModulesToSpawn_MetaData) }; // cc6ba34fe513bfaf20ad4dad4dc3e6cf70f3e3b0
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PresetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StreetStyleName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Classes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Classes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Positions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Positions,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ModulesToSpawn_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ModulesToSpawn,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FSpawnModulesParams Property Definitions ****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"SpawnModulesParams",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FSpawnModulesParams>(),
	alignof(FSpawnModulesParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSpawnModulesParams;
UScriptStruct* Z_Construct_UScriptStruct_FSpawnModulesParams(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FSpawnModulesParams.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FSpawnModulesParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnModulesParams, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("SpawnModulesParams"));
		}
		return Z_Registration_Info_UScriptStruct_FSpawnModulesParams.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FSpawnModulesParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSpawnModulesParams.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSpawnModulesParams.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FSpawnModulesParams *************************************************

// ********** Begin ScriptStruct FRoadModuleParameters *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRoadModuleParameters_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRoadModuleParameters>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRoadModuleParameters); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshType_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshZOffset_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Lateral path offset from the module edge (cm). Positive moves outward from the roadway. */" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "Lateral path offset from the module edge (cm). Positive moves outward from the roadway." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMeshCrossSection_MetaData[] = {
		{ "Category", "Procedural Mesh" },
		{ "EditCondition", "MeshType == EMeshType::ProceduralMesh && ProceduralMeshCrossSectionSource == ERoadModuleCrossSectionSource::CurveFloat" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMeshCrossSectionSource_MetaData[] = {
		{ "Category", "Procedural Mesh" },
		{ "EditCondition", "MeshType == EMeshType::ProceduralMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMeshCrossSectionPoints_MetaData[] = {
		{ "Category", "Procedural Mesh" },
		{ "EditCondition", "MeshType == EMeshType::ProceduralMesh && ProceduralMeshCrossSectionSource == ERoadModuleCrossSectionSource::VectorArray" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bProceduralMeshCrossSectionClosedLoop_MetaData[] = {
		{ "Category", "Procedural Mesh" },
		{ "EditCondition", "MeshType == EMeshType::ProceduralMesh && ProceduralMeshCrossSectionSource == ERoadModuleCrossSectionSource::VectorArray" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMeshCrossSectionScale_MetaData[] = {
		{ "Category", "Procedural Mesh" },
		{ "EditCondition", "MeshType == EMeshType::ProceduralMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossSectionSideOffset_MetaData[] = {
		{ "Category", "Procedural Mesh" },
		{ "Comment", "/**\n\x09 * Deprecated: previously shifted the procedural cross-section along sweep local Y.\n\x09 * Now folded into Offset via GetEffectiveLateralOffset() so existing modules keep their authored lateral placement.\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Offset instead. CrossSectionSideOffset is still added to Offset for compatibility." },
		{ "EditCondition", "MeshType == EMeshType::ProceduralMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "Deprecated: previously shifted the procedural cross-section along sweep local Y.\nNow folded into Offset via GetEffectiveLateralOffset() so existing modules keep their authored lateral placement." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlipCrossSectionOnSideAxis_MetaData[] = {
		{ "Category", "Procedural Mesh" },
		{ "Comment", "/** Flips the procedural cross-section around the side axis (local Y), effectively inverting profile height (Z). */" },
		{ "EditCondition", "MeshType == EMeshType::ProceduralMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "Flips the procedural cross-section around the side axis (local Y), effectively inverting profile height (Z)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlipCrossSectionOnVerticalAxis_MetaData[] = {
		{ "Category", "Procedural Mesh" },
		{ "Comment", "/** Flips the procedural cross-section around the vertical axis (local Z), effectively inverting lateral profile (Y).\n\x09 *  VectorArray modules are left-right mirrored by default; enable this to restore the unmirrored authored orientation.\n\x09 */" },
		{ "EditCondition", "MeshType == EMeshType::ProceduralMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "Flips the procedural cross-section around the vertical axis (local Z), effectively inverting lateral profile (Y).\nVectorArray modules are left-right mirrored by default; enable this to restore the unmirrored authored orientation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlipProceduralMeshNormals_MetaData[] = {
		{ "Category", "Procedural Mesh" },
		{ "EditCondition", "MeshType == EMeshType::ProceduralMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddEndCaps_MetaData[] = {
		{ "Category", "Procedural Mesh" },
		{ "Comment", "/** Adds filled polygons at the start/end of procedural sweeps to close visible holes. */" },
		{ "EditCondition", "MeshType == EMeshType::ProceduralMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "Adds filled polygons at the start/end of procedural sweeps to close visible holes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFlipEndCaps_MetaData[] = {
		{ "Category", "Procedural Mesh" },
		{ "Comment", "/** If true, inverts end-cap facing direction (normals/winding) for procedural sweep end caps. */" },
		{ "EditCondition", "MeshType == EMeshType::ProceduralMesh && bAddEndCaps" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "If true, inverts end-cap facing direction (normals/winding) for procedural sweep end caps." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateWorldBLDElementEdge_MetaData[] = {
		{ "Category", "Procedural Mesh" },
		{ "EditCondition", "MeshType == EMeshType::ProceduralMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseBuiltInSweepMethod_MetaData[] = {
		{ "Category", "Procedural Mesh" },
		{ "Comment", "// If true, uses Unreal's built-in AppendSweepPolyline for UV generation\n// If false, uses the custom AppendSweepPolylineToDynamicMeshV2 method\n" },
		{ "EditCondition", "MeshType == EMeshType::ProceduralMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "If true, uses Unreal's built-in AppendSweepPolyline for UV generation\nIf false, uses the custom AppendSweepPolylineToDynamicMeshV2 method" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureVScale_MetaData[] = {
		{ "Category", "Procedural Mesh" },
		{ "Comment", "// Texture scale for UV V coordinate (along spline direction). Higher values = more texture repetition.\n// Default 200.0 means the texture repeats every 200 units along the spline.\n" },
		{ "EditCondition", "MeshType == EMeshType::ProceduralMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "Texture scale for UV V coordinate (along spline direction). Higher values = more texture repetition.\nDefault 200.0 means the texture repeats every 200 units along the spline." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateUVs90Degrees_MetaData[] = {
		{ "Category", "Procedural Mesh" },
		{ "Comment", "// If true, rotates UVs by 90 degrees (swaps U and V). Useful for textures that tile horizontally.\n" },
		{ "EditCondition", "MeshType == EMeshType::ProceduralMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "If true, rotates UVs by 90 degrees (swaps U and V). Useful for textures that tile horizontally." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMeshNormalSplitAngleDegrees_MetaData[] = {
		{ "Category", "Procedural Mesh" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Crease threshold for procedural sweep normals. Adjacent faces whose angle is greater than this value\n\x09 * keep a hard edge; shallower transitions are smoothed together.\n\x09 * Set to 0 to keep fully faceted (per-face) normals.\n\x09 */" },
		{ "EditCondition", "MeshType == EMeshType::ProceduralMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "Crease threshold for procedural sweep normals. Adjacent faces whose angle is greater than this value\nkeep a hard edge; shallower transitions are smoothed together.\nSet to 0 to keep fully faceted (per-face) normals." },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMeshMaterial_MetaData[] = {
		{ "Category", "Procedural Mesh" },
		{ "EditCondition", "MeshType == EMeshType::ProceduralMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineMesh_MetaData[] = {
		{ "Category", "Spline Mesh" },
		{ "Comment", "//The standard spline mesh used by roads.\n" },
		{ "EditCondition", "MeshType == EMeshType::SplineMeshes" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "The standard spline mesh used by roads." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionSplineMesh_MetaData[] = {
		{ "Category", "Spline Mesh" },
		{ "Comment", "//The alternative spline mesh used on Road Modules attached to intersection geometry.\n" },
		{ "EditCondition", "MeshType == EMeshType::SplineMeshes" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "The alternative spline mesh used on Road Modules attached to intersection geometry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMirrorSplineMeshLeftRight_MetaData[] = {
		{ "Category", "Spline Mesh" },
		{ "EditCondition", "MeshType == EMeshType::SplineMeshes" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "Mirror the spline mesh left-right along the path. Uses a negative side scale so the same mesh can be reused on the opposite edge." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshesToUse_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "// Array of static meshes to randomly choose from when spawning instances\n" },
		{ "EditCondition", "MeshType == EMeshType::StaticMeshes" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "Array of static meshes to randomly choose from when spawning instances" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceBetweenMeshes_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "// Min/max distance between static mesh instances along the attached edge path. Random value chosen between X and Y.\n" },
		{ "EditCondition", "MeshType == EMeshType::StaticMeshes" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "Min/max distance between static mesh instances along the attached edge path. Random value chosen between X and Y." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeOffset_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "// Sideways offset from the edge. Random value chosen between X and Y.\n" },
		{ "EditCondition", "MeshType == EMeshType::StaticMeshes" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "Sideways offset from the edge. Random value chosen between X and Y." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinAndMaxScale_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "// Scale multiplier range. Random value chosen between X and Y.\n" },
		{ "EditCondition", "MeshType == EMeshType::StaticMeshes" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "Scale multiplier range. Random value chosen between X and Y." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshZOffset_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "// Vertical Z offset range. Random value chosen between X and Y.\n" },
		{ "EditCondition", "MeshType == EMeshType::StaticMeshes" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "Vertical Z offset range. Random value chosen between X and Y." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomZRotation_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "// Randomize rotation around Z axis\n" },
		{ "EditCondition", "MeshType == EMeshType::StaticMeshes" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "Randomize rotation around Z axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlignToWorldZ_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "// Align mesh up vector to world Z instead of spline normal\n" },
		{ "EditCondition", "MeshType == EMeshType::StaticMeshes" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "Align mesh up vector to world Z instead of spline normal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "// Fixed rotation offset applied to all instances\n" },
		{ "EditCondition", "MeshType == EMeshType::StaticMeshes" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "Fixed rotation offset applied to all instances" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipIntersections_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "// Whether to skip spawning in intersection areas\n" },
		{ "EditCondition", "MeshType == EMeshType::StaticMeshes" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "Whether to skip spawning in intersection areas" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTraceForRoad_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "// If enabled, trace against the owning RoadGeo to get an exact Z placement for each instance.\n// Instances are skipped when the trace does not hit.\n" },
		{ "EditCondition", "MeshType == EMeshType::StaticMeshes" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "If enabled, trace against the owning RoadGeo to get an exact Z placement for each instance.\nInstances are skipped when the trace does not hit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsBridgeModule_MetaData[] = {
		{ "Category", "Bridge" },
		{ "Comment", "// If true, this module represents a bridge piece that should only spawn on elevated road segments.\n// Skipped entirely on roads with Conform To Landscape or Align Landscape enabled.\n" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "If true, this module represents a bridge piece that should only spawn on elevated road segments.\nSkipped entirely on roads with Conform To Landscape or Align Landscape enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BridgeElevationThreshold_MetaData[] = {
		{ "Category", "Bridge" },
		{ "Comment", "// Height threshold above ground for determining bridge segments (used with FindBridgeSegments)\n" },
		{ "EditCondition", "bIsBridgeModule" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "Height threshold above ground for determining bridge segments (used with FindBridgeSegments)" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRoadModuleParameters constinit property declarations *************
	static const UECodeGen_Private::FBytePropertyParams NewProp_MeshType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshType;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MeshZOffset;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Offset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralMeshCrossSection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProceduralMeshCrossSectionSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ProceduralMeshCrossSectionSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProceduralMeshCrossSectionPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProceduralMeshCrossSectionPoints;
	static void NewProp_bProceduralMeshCrossSectionClosedLoop_SetBit(void* Obj)
	{
		((FRoadModuleParameters*)Obj)->bProceduralMeshCrossSectionClosedLoop = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProceduralMeshCrossSectionClosedLoop;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ProceduralMeshCrossSectionScale;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CrossSectionSideOffset;
	static void NewProp_bFlipCrossSectionOnSideAxis_SetBit(void* Obj)
	{
		((FRoadModuleParameters*)Obj)->bFlipCrossSectionOnSideAxis = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipCrossSectionOnSideAxis;
	static void NewProp_bFlipCrossSectionOnVerticalAxis_SetBit(void* Obj)
	{
		((FRoadModuleParameters*)Obj)->bFlipCrossSectionOnVerticalAxis = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipCrossSectionOnVerticalAxis;
	static void NewProp_bFlipProceduralMeshNormals_SetBit(void* Obj)
	{
		((FRoadModuleParameters*)Obj)->bFlipProceduralMeshNormals = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipProceduralMeshNormals;
	static void NewProp_bAddEndCaps_SetBit(void* Obj)
	{
		((FRoadModuleParameters*)Obj)->bAddEndCaps = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddEndCaps;
	static void NewProp_bFlipEndCaps_SetBit(void* Obj)
	{
		((FRoadModuleParameters*)Obj)->bFlipEndCaps = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipEndCaps;
	static void NewProp_bGenerateWorldBLDElementEdge_SetBit(void* Obj)
	{
		((FRoadModuleParameters*)Obj)->bGenerateWorldBLDElementEdge = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateWorldBLDElementEdge;
	static void NewProp_bUseBuiltInSweepMethod_SetBit(void* Obj)
	{
		((FRoadModuleParameters*)Obj)->bUseBuiltInSweepMethod = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBuiltInSweepMethod;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TextureVScale;
	static void NewProp_RotateUVs90Degrees_SetBit(void* Obj)
	{
		((FRoadModuleParameters*)Obj)->RotateUVs90Degrees = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RotateUVs90Degrees;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ProceduralMeshNormalSplitAngleDegrees;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralMeshMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IntersectionSplineMesh;
	static void NewProp_bMirrorSplineMeshLeftRight_SetBit(void* Obj)
	{
		((FRoadModuleParameters*)Obj)->bMirrorSplineMeshLeftRight = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMirrorSplineMeshLeftRight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshesToUse_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticMeshesToUse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DistanceBetweenMeshes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinAndMaxScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshZOffset;
	static void NewProp_bRandomZRotation_SetBit(void* Obj)
	{
		((FRoadModuleParameters*)Obj)->bRandomZRotation = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomZRotation;
	static void NewProp_bAlignToWorldZ_SetBit(void* Obj)
	{
		((FRoadModuleParameters*)Obj)->bAlignToWorldZ = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignToWorldZ;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static void NewProp_bSkipIntersections_SetBit(void* Obj)
	{
		((FRoadModuleParameters*)Obj)->bSkipIntersections = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipIntersections;
	static void NewProp_bTraceForRoad_SetBit(void* Obj)
	{
		((FRoadModuleParameters*)Obj)->bTraceForRoad = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceForRoad;
	static void NewProp_bIsBridgeModule_SetBit(void* Obj)
	{
		((FRoadModuleParameters*)Obj)->bIsBridgeModule = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBridgeModule;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_BridgeElevationThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRoadModuleParameters constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadModuleParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRoadModuleParameters Property Definitions ************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadModuleParameters, MeshType), Z_Construct_UEnum_RoadBLDRuntime_EMeshType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshType_MetaData), NewProp_MeshType_MetaData) }; // 6e2d876b16dbbafc23bc84e312eb1ffe7b7e7365
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_MeshZOffset = { "MeshZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadModuleParameters, MeshZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshZOffset_MetaData), NewProp_MeshZOffset_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadModuleParameters, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ProceduralMeshCrossSection = { "ProceduralMeshCrossSection", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadModuleParameters, ProceduralMeshCrossSection), Z_Construct_UClass_UCurveFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProceduralMeshCrossSection_MetaData), NewProp_ProceduralMeshCrossSection_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ProceduralMeshCrossSectionSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ProceduralMeshCrossSectionSource = { "ProceduralMeshCrossSectionSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadModuleParameters, ProceduralMeshCrossSectionSource), Z_Construct_UEnum_RoadBLDRuntime_ERoadModuleCrossSectionSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProceduralMeshCrossSectionSource_MetaData), NewProp_ProceduralMeshCrossSectionSource_MetaData) }; // e0932c4fff69ddf30e3a87700b1a4699da8f47b3
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ProceduralMeshCrossSectionPoints_Inner = { "ProceduralMeshCrossSectionPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ProceduralMeshCrossSectionPoints = { "ProceduralMeshCrossSectionPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadModuleParameters, ProceduralMeshCrossSectionPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProceduralMeshCrossSectionPoints_MetaData), NewProp_ProceduralMeshCrossSectionPoints_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bProceduralMeshCrossSectionClosedLoop = { "bProceduralMeshCrossSectionClosedLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadModuleParameters), &UHT_STATICS::NewProp_bProceduralMeshCrossSectionClosedLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bProceduralMeshCrossSectionClosedLoop_MetaData), NewProp_bProceduralMeshCrossSectionClosedLoop_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ProceduralMeshCrossSectionScale = { "ProceduralMeshCrossSectionScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadModuleParameters, ProceduralMeshCrossSectionScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProceduralMeshCrossSectionScale_MetaData), NewProp_ProceduralMeshCrossSectionScale_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_CrossSectionSideOffset = { "CrossSectionSideOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadModuleParameters, CrossSectionSideOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossSectionSideOffset_MetaData), NewProp_CrossSectionSideOffset_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFlipCrossSectionOnSideAxis = { "bFlipCrossSectionOnSideAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadModuleParameters), &UHT_STATICS::NewProp_bFlipCrossSectionOnSideAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlipCrossSectionOnSideAxis_MetaData), NewProp_bFlipCrossSectionOnSideAxis_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFlipCrossSectionOnVerticalAxis = { "bFlipCrossSectionOnVerticalAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadModuleParameters), &UHT_STATICS::NewProp_bFlipCrossSectionOnVerticalAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlipCrossSectionOnVerticalAxis_MetaData), NewProp_bFlipCrossSectionOnVerticalAxis_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFlipProceduralMeshNormals = { "bFlipProceduralMeshNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadModuleParameters), &UHT_STATICS::NewProp_bFlipProceduralMeshNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlipProceduralMeshNormals_MetaData), NewProp_bFlipProceduralMeshNormals_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAddEndCaps = { "bAddEndCaps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadModuleParameters), &UHT_STATICS::NewProp_bAddEndCaps_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddEndCaps_MetaData), NewProp_bAddEndCaps_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFlipEndCaps = { "bFlipEndCaps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadModuleParameters), &UHT_STATICS::NewProp_bFlipEndCaps_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFlipEndCaps_MetaData), NewProp_bFlipEndCaps_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bGenerateWorldBLDElementEdge = { "bGenerateWorldBLDElementEdge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadModuleParameters), &UHT_STATICS::NewProp_bGenerateWorldBLDElementEdge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateWorldBLDElementEdge_MetaData), NewProp_bGenerateWorldBLDElementEdge_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseBuiltInSweepMethod = { "bUseBuiltInSweepMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadModuleParameters), &UHT_STATICS::NewProp_bUseBuiltInSweepMethod_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseBuiltInSweepMethod_MetaData), NewProp_bUseBuiltInSweepMethod_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_TextureVScale = { "TextureVScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadModuleParameters, TextureVScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureVScale_MetaData), NewProp_TextureVScale_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_RotateUVs90Degrees = { "RotateUVs90Degrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadModuleParameters), &UHT_STATICS::NewProp_RotateUVs90Degrees_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateUVs90Degrees_MetaData), NewProp_RotateUVs90Degrees_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ProceduralMeshNormalSplitAngleDegrees = { "ProceduralMeshNormalSplitAngleDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadModuleParameters, ProceduralMeshNormalSplitAngleDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProceduralMeshNormalSplitAngleDegrees_MetaData), NewProp_ProceduralMeshNormalSplitAngleDegrees_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ProceduralMeshMaterial = { "ProceduralMeshMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadModuleParameters, ProceduralMeshMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProceduralMeshMaterial_MetaData), NewProp_ProceduralMeshMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SplineMesh = { "SplineMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadModuleParameters, SplineMesh), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineMesh_MetaData), NewProp_SplineMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_IntersectionSplineMesh = { "IntersectionSplineMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadModuleParameters, IntersectionSplineMesh), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionSplineMesh_MetaData), NewProp_IntersectionSplineMesh_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bMirrorSplineMeshLeftRight = { "bMirrorSplineMeshLeftRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadModuleParameters), &UHT_STATICS::NewProp_bMirrorSplineMeshLeftRight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMirrorSplineMeshLeftRight_MetaData), NewProp_bMirrorSplineMeshLeftRight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StaticMeshesToUse_Inner = { "StaticMeshesToUse", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_StaticMeshesToUse = { "StaticMeshesToUse", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadModuleParameters, StaticMeshesToUse), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshesToUse_MetaData), NewProp_StaticMeshesToUse_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DistanceBetweenMeshes = { "DistanceBetweenMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadModuleParameters, DistanceBetweenMeshes), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceBetweenMeshes_MetaData), NewProp_DistanceBetweenMeshes_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EdgeOffset = { "EdgeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadModuleParameters, EdgeOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeOffset_MetaData), NewProp_EdgeOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_MinAndMaxScale = { "MinAndMaxScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadModuleParameters, MinAndMaxScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinAndMaxScale_MetaData), NewProp_MinAndMaxScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_StaticMeshZOffset = { "StaticMeshZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadModuleParameters, StaticMeshZOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshZOffset_MetaData), NewProp_StaticMeshZOffset_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRandomZRotation = { "bRandomZRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadModuleParameters), &UHT_STATICS::NewProp_bRandomZRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomZRotation_MetaData), NewProp_bRandomZRotation_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAlignToWorldZ = { "bAlignToWorldZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadModuleParameters), &UHT_STATICS::NewProp_bAlignToWorldZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlignToWorldZ_MetaData), NewProp_bAlignToWorldZ_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadModuleParameters, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSkipIntersections = { "bSkipIntersections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadModuleParameters), &UHT_STATICS::NewProp_bSkipIntersections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipIntersections_MetaData), NewProp_bSkipIntersections_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bTraceForRoad = { "bTraceForRoad", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadModuleParameters), &UHT_STATICS::NewProp_bTraceForRoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTraceForRoad_MetaData), NewProp_bTraceForRoad_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsBridgeModule = { "bIsBridgeModule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadModuleParameters), &UHT_STATICS::NewProp_bIsBridgeModule_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsBridgeModule_MetaData), NewProp_bIsBridgeModule_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_BridgeElevationThreshold = { "BridgeElevationThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadModuleParameters, BridgeElevationThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BridgeElevationThreshold_MetaData), NewProp_BridgeElevationThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MeshType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MeshType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MeshZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProceduralMeshCrossSection,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProceduralMeshCrossSectionSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProceduralMeshCrossSectionSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProceduralMeshCrossSectionPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProceduralMeshCrossSectionPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bProceduralMeshCrossSectionClosedLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProceduralMeshCrossSectionScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CrossSectionSideOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFlipCrossSectionOnSideAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFlipCrossSectionOnVerticalAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFlipProceduralMeshNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAddEndCaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFlipEndCaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bGenerateWorldBLDElementEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseBuiltInSweepMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextureVScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RotateUVs90Degrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProceduralMeshNormalSplitAngleDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ProceduralMeshMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SplineMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IntersectionSplineMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bMirrorSplineMeshLeftRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StaticMeshesToUse_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StaticMeshesToUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DistanceBetweenMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinAndMaxScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StaticMeshZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRandomZRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAlignToWorldZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSkipIntersections,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bTraceForRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsBridgeModule,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BridgeElevationThreshold,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRoadModuleParameters Property Definitions **************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"RoadModuleParameters",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRoadModuleParameters>(),
	alignof(FRoadModuleParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRoadModuleParameters;
UScriptStruct* Z_Construct_UScriptStruct_FRoadModuleParameters(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRoadModuleParameters.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRoadModuleParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadModuleParameters, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("RoadModuleParameters"));
		}
		return Z_Registration_Info_UScriptStruct_FRoadModuleParameters.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRoadModuleParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRoadModuleParameters.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRoadModuleParameters.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRoadModuleParameters ***********************************************

// ********** Begin Class URoadModuleObject Function GetEffectiveEndDistance ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadModuleObject_GetEffectiveEndDistance_Statics
struct UHT_STATICS
{
	struct RoadModuleObject_eventGetEffectiveEndDistance_Parms
	{
		double RoadLength;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Road Module" },
		{ "Comment", "// Get the effective end distance (handles -1 case)\n" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "Get the effective end distance (handles -1 case)" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetEffectiveEndDistance constinit property declarations ***************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RoadLength;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEffectiveEndDistance constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEffectiveEndDistance Property Definitions **************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_RoadLength = { "RoadLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadModuleObject_eventGetEffectiveEndDistance_Parms, RoadLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadModuleObject_eventGetEffectiveEndDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetEffectiveEndDistance Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadModuleObject, nullptr, "GetEffectiveEndDistance", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadModuleObject_eventGetEffectiveEndDistance_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadModuleObject_eventGetEffectiveEndDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadModuleObject_GetEffectiveEndDistance(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadModuleObject::execGetEffectiveEndDistance)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_RoadLength);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetEffectiveEndDistance(Z_Param_RoadLength);
	P_NATIVE_END;
}
// ********** End Class URoadModuleObject Function GetEffectiveEndDistance *************************

// ********** Begin Class URoadModuleObject Function GetEffectiveModulePosition ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadModuleObject_GetEffectiveModulePosition_Statics
struct UHT_STATICS
{
	struct RoadModuleObject_eventGetEffectiveModulePosition_Parms
	{
		ERoadModulePosition ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Road Module" },
		{ "Comment", "// Get the effective module position (prioritizes ModulePosition over Parameters.Position)\n" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "Get the effective module position (prioritizes ModulePosition over Parameters.Position)" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetEffectiveModulePosition constinit property declarations ************
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEffectiveModulePosition constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEffectiveModulePosition Property Definitions ***********************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(RoadModuleObject_eventGetEffectiveModulePosition_Parms, ReturnValue), Z_Construct_UEnum_RoadBLDRuntime_ERoadModulePosition, METADATA_PARAMS(0, nullptr) }; // 46a5dd039144740d887a61f0d80e56230e219841
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetEffectiveModulePosition Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadModuleObject, nullptr, "GetEffectiveModulePosition", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadModuleObject_eventGetEffectiveModulePosition_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadModuleObject_eventGetEffectiveModulePosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadModuleObject_GetEffectiveModulePosition(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadModuleObject::execGetEffectiveModulePosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ERoadModulePosition*)Z_Param__Result=P_THIS->GetEffectiveModulePosition();
	P_NATIVE_END;
}
// ********** End Class URoadModuleObject Function GetEffectiveModulePosition **********************

// ********** Begin Class URoadModuleObject Function HasProceduralCrossSectionDefinition ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadModuleObject_HasProceduralCrossSectionDefinition_Statics
struct UHT_STATICS
{
	struct RoadModuleObject_eventHasProceduralCrossSectionDefinition_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Road Module" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasProceduralCrossSectionDefinition constinit property declarations ***
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RoadModuleObject_eventHasProceduralCrossSectionDefinition_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasProceduralCrossSectionDefinition constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasProceduralCrossSectionDefinition Property Definitions **************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadModuleObject_eventHasProceduralCrossSectionDefinition_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HasProceduralCrossSectionDefinition Property Definitions ****************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadModuleObject, nullptr, "HasProceduralCrossSectionDefinition", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadModuleObject_eventHasProceduralCrossSectionDefinition_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadModuleObject_eventHasProceduralCrossSectionDefinition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadModuleObject_HasProceduralCrossSectionDefinition(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadModuleObject::execHasProceduralCrossSectionDefinition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasProceduralCrossSectionDefinition();
	P_NATIVE_END;
}
// ********** End Class URoadModuleObject Function HasProceduralCrossSectionDefinition *************

// ********** Begin Class URoadModuleObject Function Initialize ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadModuleObject_Initialize_Statics
struct UHT_STATICS
{
	struct RoadModuleObject_eventInitialize_Parms
	{
		FRoadModuleParameters InParameters;
		FName InModuleId;
		ERoadModulePosition Position;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Road Module" },
		{ "Comment", "// Initialize the road module with parameters\n" },
		{ "CPP_Default_InModuleId", "None" },
		{ "CPP_Default_Position", "Center" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "Initialize the road module with parameters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InModuleId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Initialize constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InParameters;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InModuleId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Position_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Initialize constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Initialize Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InParameters = { "InParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadModuleObject_eventInitialize_Parms, InParameters), Z_Construct_UScriptStruct_FRoadModuleParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameters_MetaData), NewProp_InParameters_MetaData) }; // 16f0013c4f57823bb532afa30ea2b7f5e80f0ea9
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_InModuleId = { "InModuleId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(RoadModuleObject_eventInitialize_Parms, InModuleId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InModuleId_MetaData), NewProp_InModuleId_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Position_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(RoadModuleObject_eventInitialize_Parms, Position), Z_Construct_UEnum_RoadBLDRuntime_ERoadModulePosition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) }; // 46a5dd039144740d887a61f0d80e56230e219841
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InModuleId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Position_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function Initialize Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadModuleObject, nullptr, "Initialize", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadModuleObject_eventInitialize_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadModuleObject_eventInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadModuleObject_Initialize(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadModuleObject::execInitialize)
{
	P_GET_STRUCT_REF(FRoadModuleParameters,Z_Param_Out_InParameters);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InModuleId);
	P_GET_ENUM(ERoadModulePosition,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize(Z_Param_Out_InParameters,Z_Param_Out_InModuleId,ERoadModulePosition(Z_Param_Position));
	P_NATIVE_END;
}
// ********** End Class URoadModuleObject Function Initialize **************************************

// ********** Begin Class URoadModuleObject Function ShouldApplyAtDistance *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadModuleObject_ShouldApplyAtDistance_Statics
struct UHT_STATICS
{
	struct RoadModuleObject_eventShouldApplyAtDistance_Parms
	{
		double Distance;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Road Module" },
		{ "Comment", "// Check if this module should be applied at the given distance\n" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "Check if this module should be applied at the given distance" },
	};
#endif // WITH_METADATA

// ********** Begin Function ShouldApplyAtDistance constinit property declarations *****************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RoadModuleObject_eventShouldApplyAtDistance_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShouldApplyAtDistance constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShouldApplyAtDistance Property Definitions ****************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadModuleObject_eventShouldApplyAtDistance_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadModuleObject_eventShouldApplyAtDistance_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ShouldApplyAtDistance Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadModuleObject, nullptr, "ShouldApplyAtDistance", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadModuleObject_eventShouldApplyAtDistance_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadModuleObject_eventShouldApplyAtDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadModuleObject_ShouldApplyAtDistance(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadModuleObject::execShouldApplyAtDistance)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Distance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldApplyAtDistance(Z_Param_Distance);
	P_NATIVE_END;
}
// ********** End Class URoadModuleObject Function ShouldApplyAtDistance ***************************

// ********** Begin Class URoadModuleObject Function ShouldReverseProfileCurve *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadModuleObject_ShouldReverseProfileCurve_Statics
struct UHT_STATICS
{
	struct RoadModuleObject_eventShouldReverseProfileCurve_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Road Module" },
		{ "Comment", "// Check if this module should mirror its procedural cross-section for right-side generation\n" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "Check if this module should mirror its procedural cross-section for right-side generation" },
	};
#endif // WITH_METADATA

// ********** Begin Function ShouldReverseProfileCurve constinit property declarations *************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RoadModuleObject_eventShouldReverseProfileCurve_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShouldReverseProfileCurve constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShouldReverseProfileCurve Property Definitions ************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadModuleObject_eventShouldReverseProfileCurve_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ShouldReverseProfileCurve Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadModuleObject, nullptr, "ShouldReverseProfileCurve", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadModuleObject_eventShouldReverseProfileCurve_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadModuleObject_eventShouldReverseProfileCurve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadModuleObject_ShouldReverseProfileCurve(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadModuleObject::execShouldReverseProfileCurve)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShouldReverseProfileCurve();
	P_NATIVE_END;
}
// ********** End Class URoadModuleObject Function ShouldReverseProfileCurve ***********************

// ********** Begin Class URoadModuleObject ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoadModuleObject_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ========================================\n// ROAD MODULE OBJECT SYSTEM\n// New integrated Road Module objects contained within roads\n// ========================================\n" },
		{ "IncludePath", "RoadModuleObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "ROAD MODULE OBJECT SYSTEM\nNew integrated Road Module objects contained within roads" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "Category", "Road Module" },
		{ "Comment", "// Parameters that define what geometry gets generated from this Road Module\n" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "Parameters that define what geometry gets generated from this Road Module" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleId_MetaData[] = {
		{ "Category", "Road Module" },
		{ "Comment", "// Unique identifier for this road module\n" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "Unique identifier for this road module" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[] = {
		{ "Category", "Road Module" },
		{ "Comment", "// Whether this module is currently active\n" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "Whether this module is currently active" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateBridges_MetaData[] = {
		{ "Category", "Road Module" },
		{ "Comment", "// If false and the module is a bridge module, geometry generation will be skipped entirely\n" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "If false and the module is a bridge module, geometry generation will be skipped entirely" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartDistance_MetaData[] = {
		{ "Category", "Road Module" },
		{ "Comment", "// Start distance along the road where this module should be applied\n" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "Start distance along the road where this module should be applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndDistance_MetaData[] = {
		{ "Category", "Road Module" },
		{ "Comment", "// End distance along the road where this module should be applied\n" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "End distance along the road where this module should be applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModulePosition_MetaData[] = {
		{ "Category", "Road Module" },
		{ "Comment", "// Module position determines where geometry is generated\n// (Left, Right, Center, SidewalkLeft, SidewalkRight).\n// For Right / SidewalkRight, the profile curve is automatically reversed to allow reuse.\n// SidewalkLeft / SidewalkRight follow the sidewalk outer boundary when present.\n" },
		{ "ModuleRelativePath", "Classes/RoadModuleObject.h" },
		{ "ToolTip", "Module position determines where geometry is generated\n(Left, Right, Center, SidewalkLeft, SidewalkRight).\nFor Right / SidewalkRight, the profile curve is automatically reversed to allow reuse.\nSidewalkLeft / SidewalkRight follow the sidewalk outer boundary when present." },
	};
#endif // WITH_METADATA

// ********** Begin Class URoadModuleObject constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ModuleId;
	static void NewProp_bIsActive_SetBit(void* Obj)
	{
		((URoadModuleObject*)Obj)->bIsActive = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
	static void NewProp_bCreateBridges_SetBit(void* Obj)
	{
		((URoadModuleObject*)Obj)->bCreateBridges = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateBridges;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StartDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EndDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ModulePosition_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ModulePosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URoadModuleObject constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetEffectiveEndDistance"), .Pointer = &URoadModuleObject::execGetEffectiveEndDistance },
		{ .NameUTF8 = UTF8TEXT("GetEffectiveModulePosition"), .Pointer = &URoadModuleObject::execGetEffectiveModulePosition },
		{ .NameUTF8 = UTF8TEXT("HasProceduralCrossSectionDefinition"), .Pointer = &URoadModuleObject::execHasProceduralCrossSectionDefinition },
		{ .NameUTF8 = UTF8TEXT("Initialize"), .Pointer = &URoadModuleObject::execInitialize },
		{ .NameUTF8 = UTF8TEXT("ShouldApplyAtDistance"), .Pointer = &URoadModuleObject::execShouldApplyAtDistance },
		{ .NameUTF8 = UTF8TEXT("ShouldReverseProfileCurve"), .Pointer = &URoadModuleObject::execShouldReverseProfileCurve },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URoadModuleObject_GetEffectiveEndDistance, "GetEffectiveEndDistance" }, // 52bb62a4486a6b17783f5f7432fc7ce9c0a5ebb5
		{ &Z_Construct_UFunction_URoadModuleObject_GetEffectiveModulePosition, "GetEffectiveModulePosition" }, // aa90622771cfda32184d8db96bfc0e5104ab867f
		{ &Z_Construct_UFunction_URoadModuleObject_HasProceduralCrossSectionDefinition, "HasProceduralCrossSectionDefinition" }, // b4a57d562d2d875b8a7daaa6f952450400369c28
		{ &Z_Construct_UFunction_URoadModuleObject_Initialize, "Initialize" }, // f3c5975e18b30cba6aa34dcd032f081b0d3e0b57
		{ &Z_Construct_UFunction_URoadModuleObject_ShouldApplyAtDistance, "ShouldApplyAtDistance" }, // 5824c223896d308372204d171669a94b4ffed982
		{ &Z_Construct_UFunction_URoadModuleObject_ShouldReverseProfileCurve, "ShouldReverseProfileCurve" }, // 64084b991f404c83833d943262157ee10e3b732d
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadModuleObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URoadModuleObject Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URoadModuleObject, Parameters), Z_Construct_UScriptStruct_FRoadModuleParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 16f0013c4f57823bb532afa30ea2b7f5e80f0ea9
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ModuleId = { "ModuleId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(URoadModuleObject, ModuleId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleId_MetaData), NewProp_ModuleId_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadModuleObject), &UHT_STATICS::NewProp_bIsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsActive_MetaData), NewProp_bIsActive_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCreateBridges = { "bCreateBridges", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadModuleObject), &UHT_STATICS::NewProp_bCreateBridges_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateBridges_MetaData), NewProp_bCreateBridges_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_StartDistance = { "StartDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadModuleObject, StartDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartDistance_MetaData), NewProp_StartDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_EndDistance = { "EndDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(URoadModuleObject, EndDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndDistance_MetaData), NewProp_EndDistance_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ModulePosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ModulePosition = { "ModulePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(URoadModuleObject, ModulePosition), Z_Construct_UEnum_RoadBLDRuntime_ERoadModulePosition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModulePosition_MetaData), NewProp_ModulePosition_MetaData) }; // 46a5dd039144740d887a61f0d80e56230e219841
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ModuleId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCreateBridges,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ModulePosition_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ModulePosition,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URoadModuleObject Property Definitions *************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoadModuleObject,
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
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void URoadModuleObject_StaticRegisterNativesURoadModuleObject()
{
	UClass* Class = URoadModuleObject::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URoadModuleObject;
UClass* Z_Construct_UClass_URoadModuleObject(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoadModuleObject;
		if (!Z_Registration_Info_UClass_URoadModuleObject.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadModuleObject"),
				Z_Registration_Info_UClass_URoadModuleObject.InnerSingleton,
				URoadModuleObject_StaticRegisterNativesURoadModuleObject,
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
		return Z_Registration_Info_UClass_URoadModuleObject.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoadModuleObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoadModuleObject.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoadModuleObject.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoadModuleObject);
URoadModuleObject::~URoadModuleObject() {}
// ********** End Class URoadModuleObject **********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadModuleObject_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RoadBLDRuntime_EMeshType, TEXT("EMeshType"), &ZRIE_EMeshType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1848477547U) },
		{ Z_Construct_UEnum_RoadBLDRuntime_ERoadModuleCrossSectionSource, TEXT("ERoadModuleCrossSectionSource"), &ZRIE_ERoadModuleCrossSectionSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3767741519U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FSpawnModulesParams, Z_Construct_UScriptStruct_FSpawnModulesParams_Statics::NewStructOps, TEXT("SpawnModulesParams"),&Z_Registration_Info_UScriptStruct_FSpawnModulesParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnModulesParams), 420229733U) },
		{ Z_Construct_UScriptStruct_FRoadModuleParameters, Z_Construct_UScriptStruct_FRoadModuleParameters_Statics::NewStructOps, TEXT("RoadModuleParameters"),&Z_Registration_Info_UScriptStruct_FRoadModuleParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadModuleParameters), 384827708U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoadModuleObject, TEXT("URoadModuleObject"), &Z_Registration_Info_UClass_URoadModuleObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoadModuleObject), 3277081297U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadModuleObject_h__Script_RoadBLDRuntime_fa49ab9fbf448099b6b528a56ab411b0814d08d8{
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
