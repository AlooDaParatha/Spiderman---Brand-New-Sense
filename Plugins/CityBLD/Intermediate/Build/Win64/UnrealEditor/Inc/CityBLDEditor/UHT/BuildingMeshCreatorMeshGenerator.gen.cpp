// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingMeshCreatorMeshGenerator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeBuildingMeshCreatorMeshGenerator() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UFont(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase);
CITYBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FBuildingMeshCreatorCutParameters(ETypeConstructPhase);
CITYBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FBuildingMeshCreatorParameters(ETypeConstructPhase);
CITYBLDEDITOR_API UEnum* Z_Construct_UEnum_CityBLDEditor_EBuildingMeshCreatorCutType(ETypeConstructPhase);
CITYBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMeshInsertEntry(ETypeConstructPhase);
CITYBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSocketMeshEntry(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EBuildingMeshCreatorCutType ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_CityBLDEditor_EBuildingMeshCreatorCutType_Statics
template<> CITYBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EBuildingMeshCreatorCutType>()
{
	return Z_Construct_UEnum_CityBLDEditor_EBuildingMeshCreatorCutType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Door.Name", "EBuildingMeshCreatorCutType::Door" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
		{ "Window.Name", "EBuildingMeshCreatorCutType::Window" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBuildingMeshCreatorCutType::Window", (int64)EBuildingMeshCreatorCutType::Window },
		{ "EBuildingMeshCreatorCutType::Door", (int64)EBuildingMeshCreatorCutType::Door },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
	nullptr,
	"EBuildingMeshCreatorCutType",
	"EBuildingMeshCreatorCutType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EBuildingMeshCreatorCutType;
UEnum* Z_Construct_UEnum_CityBLDEditor_EBuildingMeshCreatorCutType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EBuildingMeshCreatorCutType.OuterSingleton)
		{
			ZRIE_EBuildingMeshCreatorCutType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CityBLDEditor_EBuildingMeshCreatorCutType, (UObject*)Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase::Outer), TEXT("EBuildingMeshCreatorCutType"));
		}
		return ZRIE_EBuildingMeshCreatorCutType.OuterSingleton;
	}
	if (!ZRIE_EBuildingMeshCreatorCutType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EBuildingMeshCreatorCutType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EBuildingMeshCreatorCutType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EBuildingMeshCreatorCutType *************************************************

// ********** Begin ScriptStruct FBuildingMeshCreatorCutParameters *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FBuildingMeshCreatorCutParameters_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FBuildingMeshCreatorCutParameters>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FBuildingMeshCreatorCutParameters); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CutType_MetaData[] = {
		{ "Category", "Cut" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "Cut" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "Cut" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[] = {
		{ "Category", "Cut" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BevelAmount_MetaData[] = {
		{ "Category", "Cut" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalOffset_MetaData[] = {
		{ "Category", "Cut" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalOffset_MetaData[] = {
		{ "Category", "Cut" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowMesh_MetaData[] = {
		{ "Category", "Cut" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowMeshTransform_MetaData[] = {
		{ "Category", "Cut" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowMeshPositionOffset_MetaData[] = {
		{ "Category", "Cut" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFillCut_MetaData[] = {
		{ "Category", "Cut" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FillMaterial_MetaData[] = {
		{ "Category", "Cut" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FBuildingMeshCreatorCutParameters constinit property declarations *
	static const UECodeGen_Private::FBytePropertyParams NewProp_CutType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CutType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BevelAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WindowMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WindowMeshTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WindowMeshPositionOffset;
	static void NewProp_bFillCut_SetBit(void* Obj)
	{
		((FBuildingMeshCreatorCutParameters*)Obj)->bFillCut = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillCut;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FillMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FBuildingMeshCreatorCutParameters constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildingMeshCreatorCutParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FBuildingMeshCreatorCutParameters Property Definitions ************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CutType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CutType = { "CutType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorCutParameters, CutType), Z_Construct_UEnum_CityBLDEditor_EBuildingMeshCreatorCutType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CutType_MetaData), NewProp_CutType_MetaData) }; // 260cf96af6100e6c44243197694fc7510eaf834a
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorCutParameters, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorCutParameters, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorCutParameters, Depth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Depth_MetaData), NewProp_Depth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BevelAmount = { "BevelAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorCutParameters, BevelAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BevelAmount_MetaData), NewProp_BevelAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_HorizontalOffset = { "HorizontalOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorCutParameters, HorizontalOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalOffset_MetaData), NewProp_HorizontalOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_VerticalOffset = { "VerticalOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorCutParameters, VerticalOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalOffset_MetaData), NewProp_VerticalOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WindowMesh = { "WindowMesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorCutParameters, WindowMesh), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowMesh_MetaData), NewProp_WindowMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WindowMeshTransform = { "WindowMeshTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorCutParameters, WindowMeshTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowMeshTransform_MetaData), NewProp_WindowMeshTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WindowMeshPositionOffset = { "WindowMeshPositionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorCutParameters, WindowMeshPositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowMeshPositionOffset_MetaData), NewProp_WindowMeshPositionOffset_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFillCut = { "bFillCut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FBuildingMeshCreatorCutParameters), &UHT_STATICS::NewProp_bFillCut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFillCut_MetaData), NewProp_bFillCut_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_FillMaterial = { "FillMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorCutParameters, FillMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FillMaterial_MetaData), NewProp_FillMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CutType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CutType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Depth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BevelAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HorizontalOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VerticalOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WindowMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WindowMeshTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WindowMeshPositionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFillCut,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FillMaterial,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FBuildingMeshCreatorCutParameters Property Definitions **************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
	nullptr,
	&NewStructOps,
	"BuildingMeshCreatorCutParameters",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FBuildingMeshCreatorCutParameters>(),
	alignof(FBuildingMeshCreatorCutParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBuildingMeshCreatorCutParameters;
UScriptStruct* Z_Construct_UScriptStruct_FBuildingMeshCreatorCutParameters(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FBuildingMeshCreatorCutParameters.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FBuildingMeshCreatorCutParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildingMeshCreatorCutParameters, (UObject*)Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase::Outer), TEXT("BuildingMeshCreatorCutParameters"));
		}
		return Z_Registration_Info_UScriptStruct_FBuildingMeshCreatorCutParameters.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FBuildingMeshCreatorCutParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBuildingMeshCreatorCutParameters.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FBuildingMeshCreatorCutParameters.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FBuildingMeshCreatorCutParameters ***********************************

// ********** Begin ScriptStruct FMeshInsertEntry **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FMeshInsertEntry_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FMeshInsertEntry>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMeshInsertEntry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "MeshInsert" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "MeshInsert" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverride_MetaData[] = {
		{ "Category", "MeshInsert" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bContributesToCreviceMap_MetaData[] = {
		{ "Category", "MeshInsert" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMeshInsertEntry constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialOverride;
	static void NewProp_bContributesToCreviceMap_SetBit(void* Obj)
	{
		((FMeshInsertEntry*)Obj)->bContributesToCreviceMap = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bContributesToCreviceMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMeshInsertEntry constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshInsertEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FMeshInsertEntry Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshInsertEntry, Mesh), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshInsertEntry, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MaterialOverride = { "MaterialOverride", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshInsertEntry, MaterialOverride), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialOverride_MetaData), NewProp_MaterialOverride_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bContributesToCreviceMap = { "bContributesToCreviceMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FMeshInsertEntry), &UHT_STATICS::NewProp_bContributesToCreviceMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bContributesToCreviceMap_MetaData), NewProp_bContributesToCreviceMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaterialOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bContributesToCreviceMap,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FMeshInsertEntry Property Definitions *******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
	nullptr,
	&NewStructOps,
	"MeshInsertEntry",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FMeshInsertEntry>(),
	alignof(FMeshInsertEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMeshInsertEntry;
UScriptStruct* Z_Construct_UScriptStruct_FMeshInsertEntry(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FMeshInsertEntry.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FMeshInsertEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshInsertEntry, (UObject*)Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase::Outer), TEXT("MeshInsertEntry"));
		}
		return Z_Registration_Info_UScriptStruct_FMeshInsertEntry.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FMeshInsertEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMeshInsertEntry.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMeshInsertEntry.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FMeshInsertEntry ****************************************************

// ********** Begin ScriptStruct FSocketMeshEntry **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FSocketMeshEntry_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FSocketMeshEntry>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSocketMeshEntry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "SocketMesh" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[] = {
		{ "Category", "SocketMesh" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnProbability_MetaData[] = {
		{ "Category", "SocketMesh" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverlapCheck_MetaData[] = {
		{ "Category", "SocketMesh" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSocketMeshEntry constinit property declarations ******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Meshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Meshes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnProbability;
	static void NewProp_bOverlapCheck_SetBit(void* Obj)
	{
		((FSocketMeshEntry*)Obj)->bOverlapCheck = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverlapCheck;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSocketMeshEntry constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSocketMeshEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FSocketMeshEntry Property Definitions *****************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FSocketMeshEntry, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FSocketMeshEntry, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Meshes_MetaData), NewProp_Meshes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SpawnProbability = { "SpawnProbability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FSocketMeshEntry, SpawnProbability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnProbability_MetaData), NewProp_SpawnProbability_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bOverlapCheck = { "bOverlapCheck", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FSocketMeshEntry), &UHT_STATICS::NewProp_bOverlapCheck_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverlapCheck_MetaData), NewProp_bOverlapCheck_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Meshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Meshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnProbability,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bOverlapCheck,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FSocketMeshEntry Property Definitions *******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
	nullptr,
	&NewStructOps,
	"SocketMeshEntry",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FSocketMeshEntry>(),
	alignof(FSocketMeshEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSocketMeshEntry;
UScriptStruct* Z_Construct_UScriptStruct_FSocketMeshEntry(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FSocketMeshEntry.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FSocketMeshEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSocketMeshEntry, (UObject*)Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase::Outer), TEXT("SocketMeshEntry"));
		}
		return Z_Registration_Info_UScriptStruct_FSocketMeshEntry.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FSocketMeshEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSocketMeshEntry.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSocketMeshEntry.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FSocketMeshEntry ****************************************************

// ********** Begin ScriptStruct FBuildingMeshCreatorParameters ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FBuildingMeshCreatorParameters_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FBuildingMeshCreatorParameters>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FBuildingMeshCreatorParameters); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleHeight_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleWidth_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cuts_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshInserts_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketTransforms_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketNames_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketMeshes_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateText_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FontMaterial_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FontSize_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBounds_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextComponentLocation_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Kerning_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVScaleU_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVScaleV_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVOffsetU_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVOffsetV_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateCreviceMap_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreviceMapResolution_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreviceFalloffRadius_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/BuildingMeshCreatorMeshGenerator.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FBuildingMeshCreatorParameters constinit property declarations ****
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ModuleHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ModuleWidth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cuts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Cuts;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshInserts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshInserts;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SocketTransforms;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SocketNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SocketMeshes;
	static void NewProp_bGenerateText_SetBit(void* Obj)
	{
		((FBuildingMeshCreatorParameters*)Obj)->bGenerateText = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Font;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FontMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FontSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextComponentLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Kerning;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UVScaleU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UVScaleV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UVOffsetU;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UVOffsetV;
	static void NewProp_bGenerateCreviceMap_SetBit(void* Obj)
	{
		((FBuildingMeshCreatorParameters*)Obj)->bGenerateCreviceMap = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateCreviceMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CreviceMapResolution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CreviceFalloffRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FBuildingMeshCreatorParameters constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildingMeshCreatorParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FBuildingMeshCreatorParameters Property Definitions ***************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ModuleHeight = { "ModuleHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorParameters, ModuleHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleHeight_MetaData), NewProp_ModuleHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ModuleWidth = { "ModuleWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorParameters, ModuleWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleWidth_MetaData), NewProp_ModuleWidth_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Cuts_Inner = { "Cuts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBuildingMeshCreatorCutParameters, METADATA_PARAMS(0, nullptr) }; // 73e4a10319e29c56b090e3bb5922e51d905ed70f
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Cuts = { "Cuts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorParameters, Cuts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cuts_MetaData), NewProp_Cuts_MetaData) }; // 73e4a10319e29c56b090e3bb5922e51d905ed70f
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_MeshInserts_Inner = { "MeshInserts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMeshInsertEntry, METADATA_PARAMS(0, nullptr) }; // 0de245fc7a0a691ea96b7e84d0f85f4aa232990f
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_MeshInserts = { "MeshInserts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorParameters, MeshInserts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshInserts_MetaData), NewProp_MeshInserts_MetaData) }; // 0de245fc7a0a691ea96b7e84d0f85f4aa232990f
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SocketTransforms_Inner = { "SocketTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SocketTransforms = { "SocketTransforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorParameters, SocketTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketTransforms_MetaData), NewProp_SocketTransforms_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_SocketNames_Inner = { "SocketNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SocketNames = { "SocketNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorParameters, SocketNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketNames_MetaData), NewProp_SocketNames_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SocketMeshes_Inner = { "SocketMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSocketMeshEntry, METADATA_PARAMS(0, nullptr) }; // 29c9e9888abde1547ac7ec4ed753a6543dd10806
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SocketMeshes = { "SocketMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorParameters, SocketMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketMeshes_MetaData), NewProp_SocketMeshes_MetaData) }; // 29c9e9888abde1547ac7ec4ed753a6543dd10806
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bGenerateText = { "bGenerateText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FBuildingMeshCreatorParameters), &UHT_STATICS::NewProp_bGenerateText_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateText_MetaData), NewProp_bGenerateText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorParameters, Font), Z_Construct_UClass_UFont, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Font_MetaData), NewProp_Font_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_FontMaterial = { "FontMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorParameters, FontMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FontMaterial_MetaData), NewProp_FontMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorParameters, FontSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FontSize_MetaData), NewProp_FontSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TextBounds = { "TextBounds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorParameters, TextBounds), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBounds_MetaData), NewProp_TextBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TextComponentLocation = { "TextComponentLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorParameters, TextComponentLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextComponentLocation_MetaData), NewProp_TextComponentLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Kerning = { "Kerning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorParameters, Kerning), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Kerning_MetaData), NewProp_Kerning_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorParameters, TextColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextColor_MetaData), NewProp_TextColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_UVScaleU = { "UVScaleU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorParameters, UVScaleU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVScaleU_MetaData), NewProp_UVScaleU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_UVScaleV = { "UVScaleV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorParameters, UVScaleV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVScaleV_MetaData), NewProp_UVScaleV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_UVOffsetU = { "UVOffsetU", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorParameters, UVOffsetU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVOffsetU_MetaData), NewProp_UVOffsetU_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_UVOffsetV = { "UVOffsetV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorParameters, UVOffsetV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVOffsetV_MetaData), NewProp_UVOffsetV_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bGenerateCreviceMap = { "bGenerateCreviceMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FBuildingMeshCreatorParameters), &UHT_STATICS::NewProp_bGenerateCreviceMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateCreviceMap_MetaData), NewProp_bGenerateCreviceMap_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CreviceMapResolution = { "CreviceMapResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorParameters, CreviceMapResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreviceMapResolution_MetaData), NewProp_CreviceMapResolution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CreviceFalloffRadius = { "CreviceFalloffRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingMeshCreatorParameters, CreviceFalloffRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreviceFalloffRadius_MetaData), NewProp_CreviceFalloffRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ModuleHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ModuleWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Cuts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Cuts,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MeshInserts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MeshInserts,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SocketTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SocketTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SocketNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SocketNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SocketMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SocketMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bGenerateText,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Font,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FontMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FontSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextComponentLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Kerning,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UVScaleU,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UVScaleV,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UVOffsetU,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UVOffsetV,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bGenerateCreviceMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CreviceMapResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CreviceFalloffRadius,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FBuildingMeshCreatorParameters Property Definitions *****************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
	nullptr,
	&NewStructOps,
	"BuildingMeshCreatorParameters",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FBuildingMeshCreatorParameters>(),
	alignof(FBuildingMeshCreatorParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBuildingMeshCreatorParameters;
UScriptStruct* Z_Construct_UScriptStruct_FBuildingMeshCreatorParameters(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FBuildingMeshCreatorParameters.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FBuildingMeshCreatorParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildingMeshCreatorParameters, (UObject*)Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase::Outer), TEXT("BuildingMeshCreatorParameters"));
		}
		return Z_Registration_Info_UScriptStruct_FBuildingMeshCreatorParameters.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FBuildingMeshCreatorParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBuildingMeshCreatorParameters.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FBuildingMeshCreatorParameters.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FBuildingMeshCreatorParameters **************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_BuildingMeshCreatorMeshGenerator_h__Script_CityBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_CityBLDEditor_EBuildingMeshCreatorCutType, TEXT("EBuildingMeshCreatorCutType"), &ZRIE_EBuildingMeshCreatorCutType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 638384490U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FBuildingMeshCreatorCutParameters, Z_Construct_UScriptStruct_FBuildingMeshCreatorCutParameters_Statics::NewStructOps, TEXT("BuildingMeshCreatorCutParameters"),&Z_Registration_Info_UScriptStruct_FBuildingMeshCreatorCutParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuildingMeshCreatorCutParameters), 1944363267U) },
		{ Z_Construct_UScriptStruct_FMeshInsertEntry, Z_Construct_UScriptStruct_FMeshInsertEntry_Statics::NewStructOps, TEXT("MeshInsertEntry"),&Z_Registration_Info_UScriptStruct_FMeshInsertEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshInsertEntry), 232932860U) },
		{ Z_Construct_UScriptStruct_FSocketMeshEntry, Z_Construct_UScriptStruct_FSocketMeshEntry_Statics::NewStructOps, TEXT("SocketMeshEntry"),&Z_Registration_Info_UScriptStruct_FSocketMeshEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSocketMeshEntry), 701098376U) },
		{ Z_Construct_UScriptStruct_FBuildingMeshCreatorParameters, Z_Construct_UScriptStruct_FBuildingMeshCreatorParameters_Statics::NewStructOps, TEXT("BuildingMeshCreatorParameters"),&Z_Registration_Info_UScriptStruct_FBuildingMeshCreatorParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuildingMeshCreatorParameters), 3240706503U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_BuildingMeshCreatorMeshGenerator_h__Script_CityBLDEditor_14adaa42367a4f0d9d74e17e9d33c47f2307378b{
	TEXT("/Script/CityBLDEditor"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
