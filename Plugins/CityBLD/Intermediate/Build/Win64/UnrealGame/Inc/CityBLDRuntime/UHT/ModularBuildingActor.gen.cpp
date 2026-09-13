// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularBuildingActor.h"
#include "CityBLDTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeModularBuildingActor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent(ETypeConstructPhase);
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDRuntime(ETypeConstructPhase);
CITYBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAuthoredBuildingShell(ETypeConstructPhase);
CITYBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAuthoredFloorPlate(ETypeConstructPhase);
CITYBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBuildingGenerationParameters(ETypeConstructPhase);
CITYBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBuildingRoofOverride(ETypeConstructPhase);
CITYBLDRUNTIME_API UEnum* Z_Construct_UEnum_CityBLDRuntime_EBuildingFace(ETypeConstructPhase);
CITYBLDRUNTIME_API UEnum* Z_Construct_UEnum_CityBLDRuntime_EBuildingGenerationCollision(ETypeConstructPhase);
CITYBLDRUNTIME_API UEnum* Z_Construct_UEnum_CityBLDRuntime_EBuildingMeshGenerationType(ETypeConstructPhase);
CITYBLDRUNTIME_API UEnum* Z_Construct_UEnum_CityBLDRuntime_EBuildingRoofType(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_AModularBuildingActor(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UBuildingStyle(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UGroundFloorType(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_AModularBuildingActor(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EBuildingGenerationCollision **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_CityBLDRuntime_EBuildingGenerationCollision_Statics
template<> CITYBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EBuildingGenerationCollision>()
{
	return Z_Construct_UEnum_CityBLDRuntime_EBuildingGenerationCollision(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "EBC_Full.Name", "EBuildingGenerationCollision::EBC_Full" },
		{ "EBC_None.Name", "EBuildingGenerationCollision::EBC_None" },
		{ "EBC_Primitive.Name", "EBuildingGenerationCollision::EBC_Primitive" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBuildingGenerationCollision::EBC_None", (int64)EBuildingGenerationCollision::EBC_None },
		{ "EBuildingGenerationCollision::EBC_Primitive", (int64)EBuildingGenerationCollision::EBC_Primitive },
		{ "EBuildingGenerationCollision::EBC_Full", (int64)EBuildingGenerationCollision::EBC_Full },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDRuntime,
	nullptr,
	"EBuildingGenerationCollision",
	"EBuildingGenerationCollision",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EBuildingGenerationCollision;
UEnum* Z_Construct_UEnum_CityBLDRuntime_EBuildingGenerationCollision(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EBuildingGenerationCollision.OuterSingleton)
		{
			ZRIE_EBuildingGenerationCollision.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CityBLDRuntime_EBuildingGenerationCollision, (UObject*)Z_Construct_UPackage__Script_CityBLDRuntime(ETypeConstructPhase::Outer), TEXT("EBuildingGenerationCollision"));
		}
		return ZRIE_EBuildingGenerationCollision.OuterSingleton;
	}
	if (!ZRIE_EBuildingGenerationCollision.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EBuildingGenerationCollision.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EBuildingGenerationCollision.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EBuildingGenerationCollision ************************************************

// ********** Begin Enum EBuildingMeshGenerationType ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_CityBLDRuntime_EBuildingMeshGenerationType_Statics
template<> CITYBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EBuildingMeshGenerationType>()
{
	return Z_Construct_UEnum_CityBLDRuntime_EBuildingMeshGenerationType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "EBM_DynamicMeshComponent.Name", "EBuildingMeshGenerationType::EBM_DynamicMeshComponent" },
		{ "EBM_InstancedStaticMeshComponent.Name", "EBuildingMeshGenerationType::EBM_InstancedStaticMeshComponent" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBuildingMeshGenerationType::EBM_InstancedStaticMeshComponent", (int64)EBuildingMeshGenerationType::EBM_InstancedStaticMeshComponent },
		{ "EBuildingMeshGenerationType::EBM_DynamicMeshComponent", (int64)EBuildingMeshGenerationType::EBM_DynamicMeshComponent },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDRuntime,
	nullptr,
	"EBuildingMeshGenerationType",
	"EBuildingMeshGenerationType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EBuildingMeshGenerationType;
UEnum* Z_Construct_UEnum_CityBLDRuntime_EBuildingMeshGenerationType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EBuildingMeshGenerationType.OuterSingleton)
		{
			ZRIE_EBuildingMeshGenerationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CityBLDRuntime_EBuildingMeshGenerationType, (UObject*)Z_Construct_UPackage__Script_CityBLDRuntime(ETypeConstructPhase::Outer), TEXT("EBuildingMeshGenerationType"));
		}
		return ZRIE_EBuildingMeshGenerationType.OuterSingleton;
	}
	if (!ZRIE_EBuildingMeshGenerationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EBuildingMeshGenerationType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EBuildingMeshGenerationType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EBuildingMeshGenerationType *************************************************

// ********** Begin Enum EBuildingRoofType *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_CityBLDRuntime_EBuildingRoofType_Statics
template<> CITYBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EBuildingRoofType>()
{
	return Z_Construct_UEnum_CityBLDRuntime_EBuildingRoofType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ERT_Flat.Name", "EBuildingRoofType::ERT_Flat" },
		{ "ERT_Gable.Name", "EBuildingRoofType::ERT_Gable" },
		{ "ERT_Hip.Name", "EBuildingRoofType::ERT_Hip" },
		{ "ERT_Legacy.Name", "EBuildingRoofType::ERT_Legacy" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBuildingRoofType::ERT_Legacy", (int64)EBuildingRoofType::ERT_Legacy },
		{ "EBuildingRoofType::ERT_Flat", (int64)EBuildingRoofType::ERT_Flat },
		{ "EBuildingRoofType::ERT_Hip", (int64)EBuildingRoofType::ERT_Hip },
		{ "EBuildingRoofType::ERT_Gable", (int64)EBuildingRoofType::ERT_Gable },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDRuntime,
	nullptr,
	"EBuildingRoofType",
	"EBuildingRoofType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EBuildingRoofType;
UEnum* Z_Construct_UEnum_CityBLDRuntime_EBuildingRoofType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EBuildingRoofType.OuterSingleton)
		{
			ZRIE_EBuildingRoofType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CityBLDRuntime_EBuildingRoofType, (UObject*)Z_Construct_UPackage__Script_CityBLDRuntime(ETypeConstructPhase::Outer), TEXT("EBuildingRoofType"));
		}
		return ZRIE_EBuildingRoofType.OuterSingleton;
	}
	if (!ZRIE_EBuildingRoofType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EBuildingRoofType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EBuildingRoofType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EBuildingRoofType ***********************************************************

// ********** Begin ScriptStruct FBuildingGenerationParameters *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FBuildingGenerationParameters_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FBuildingGenerationParameters>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FBuildingGenerationParameters); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "Comment", "// Height above the ground\n" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
		{ "ToolTip", "Height above the ground" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumFloors_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "Comment", "// Number of floors above the ground\n" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
		{ "ToolTip", "Number of floors above the ground" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateFoundations_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateRooftops_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshGenerationType_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FBuildingGenerationParameters constinit property declarations *****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumFloors;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Collision_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Collision;
	static void NewProp_bGenerateFoundations_SetBit(void* Obj)
	{
		((FBuildingGenerationParameters*)Obj)->bGenerateFoundations = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateFoundations;
	static void NewProp_bGenerateRooftops_SetBit(void* Obj)
	{
		((FBuildingGenerationParameters*)Obj)->bGenerateRooftops = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateRooftops;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MeshGenerationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshGenerationType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FBuildingGenerationParameters constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildingGenerationParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FBuildingGenerationParameters Property Definitions ****************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingGenerationParameters, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingGenerationParameters, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Positions_MetaData), NewProp_Positions_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingGenerationParameters, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NumFloors = { "NumFloors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingGenerationParameters, NumFloors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumFloors_MetaData), NewProp_NumFloors_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Collision_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingGenerationParameters, Collision), Z_Construct_UEnum_CityBLDRuntime_EBuildingGenerationCollision, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collision_MetaData), NewProp_Collision_MetaData) }; // 4f9fda653f3f6314055f3a689f1fc1f78a6c7589
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bGenerateFoundations = { "bGenerateFoundations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FBuildingGenerationParameters), &UHT_STATICS::NewProp_bGenerateFoundations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateFoundations_MetaData), NewProp_bGenerateFoundations_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bGenerateRooftops = { "bGenerateRooftops", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FBuildingGenerationParameters), &UHT_STATICS::NewProp_bGenerateRooftops_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateRooftops_MetaData), NewProp_bGenerateRooftops_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_MeshGenerationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_MeshGenerationType = { "MeshGenerationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingGenerationParameters, MeshGenerationType), Z_Construct_UEnum_CityBLDRuntime_EBuildingMeshGenerationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshGenerationType_MetaData), NewProp_MeshGenerationType_MetaData) }; // 87d773dde7f1794ac1d8811c72bad9603c782e7f
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Positions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Positions,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NumFloors,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Collision_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Collision,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bGenerateFoundations,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bGenerateRooftops,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MeshGenerationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MeshGenerationType,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FBuildingGenerationParameters Property Definitions ******************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDRuntime,
	nullptr,
	&NewStructOps,
	"BuildingGenerationParameters",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FBuildingGenerationParameters>(),
	alignof(FBuildingGenerationParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBuildingGenerationParameters;
UScriptStruct* Z_Construct_UScriptStruct_FBuildingGenerationParameters(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FBuildingGenerationParameters.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FBuildingGenerationParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildingGenerationParameters, (UObject*)Z_Construct_UPackage__Script_CityBLDRuntime(ETypeConstructPhase::Outer), TEXT("BuildingGenerationParameters"));
		}
		return Z_Registration_Info_UScriptStruct_FBuildingGenerationParameters.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FBuildingGenerationParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBuildingGenerationParameters.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FBuildingGenerationParameters.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FBuildingGenerationParameters ***************************************

// ********** Begin ScriptStruct FAuthoredBuildingShell ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAuthoredBuildingShell_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAuthoredBuildingShell>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAuthoredBuildingShell); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerimeterVertices_MetaData[] = {
		{ "Category", "CityBLD|FloorPlates" },
		{ "Comment", "/**\n\x09 * Authoring-time polygon for a building shell (actor-local XY).\n\x09 * Street-facing segments are computed at runtime from existing street-facing hints.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
		{ "ToolTip", "Authoring-time polygon for a building shell (actor-local XY).\nStreet-facing segments are computed at runtime from existing street-facing hints." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceTypeOverrides_MetaData[] = {
		{ "Category", "CityBLD|FloorPlates" },
		{ "Comment", "/** Optional per-segment face overrides (SegmentIndex -> FaceType). */" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
		{ "ToolTip", "Optional per-segment face overrides (SegmentIndex -> FaceType)." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAuthoredBuildingShell constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerimeterVertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PerimeterVertices;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FaceTypeOverrides_ValueProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FaceTypeOverrides_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FaceTypeOverrides_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FaceTypeOverrides;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAuthoredBuildingShell constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuthoredBuildingShell>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FAuthoredBuildingShell Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PerimeterVertices_Inner = { "PerimeterVertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PerimeterVertices = { "PerimeterVertices", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FAuthoredBuildingShell, PerimeterVertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerimeterVertices_MetaData), NewProp_PerimeterVertices_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_FaceTypeOverrides_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_FaceTypeOverrides_ValueProp = { "FaceTypeOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, 1, Z_Construct_UEnum_CityBLDRuntime_EBuildingFace, METADATA_PARAMS(0, nullptr) }; // 636b1096d69d3eed8f03c070c2c9de1d9ab1777e
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_FaceTypeOverrides_Key_KeyProp = { "FaceTypeOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_FaceTypeOverrides = { "FaceTypeOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(FAuthoredBuildingShell, FaceTypeOverrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceTypeOverrides_MetaData), NewProp_FaceTypeOverrides_MetaData) }; // 636b1096d69d3eed8f03c070c2c9de1d9ab1777e
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PerimeterVertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PerimeterVertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FaceTypeOverrides_ValueProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FaceTypeOverrides_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FaceTypeOverrides_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FaceTypeOverrides,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAuthoredBuildingShell Property Definitions *************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDRuntime,
	nullptr,
	&NewStructOps,
	"AuthoredBuildingShell",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAuthoredBuildingShell>(),
	alignof(FAuthoredBuildingShell),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAuthoredBuildingShell;
UScriptStruct* Z_Construct_UScriptStruct_FAuthoredBuildingShell(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAuthoredBuildingShell.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAuthoredBuildingShell.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuthoredBuildingShell, (UObject*)Z_Construct_UPackage__Script_CityBLDRuntime(ETypeConstructPhase::Outer), TEXT("AuthoredBuildingShell"));
		}
		return Z_Registration_Info_UScriptStruct_FAuthoredBuildingShell.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAuthoredBuildingShell.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAuthoredBuildingShell.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAuthoredBuildingShell.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAuthoredBuildingShell **********************************************

// ********** Begin ScriptStruct FAuthoredFloorPlate ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FAuthoredFloorPlate_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FAuthoredFloorPlate>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FAuthoredFloorPlate); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartHeight_MetaData[] = {
		{ "Category", "CityBLD|FloorPlates" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shells_MetaData[] = {
		{ "Category", "CityBLD|FloorPlates" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoofOverride_MetaData[] = {
		{ "Category", "CityBLD|FloorPlates" },
		{ "Comment", "/** Roof settings for the tier this plate caps. Takes precedence over the actor and style settings. */" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
		{ "ToolTip", "Roof settings for the tier this plate caps. Takes precedence over the actor and style settings." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FAuthoredFloorPlate constinit property declarations ***************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shells_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Shells;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoofOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FAuthoredFloorPlate constinit property declarations *****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuthoredFloorPlate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FAuthoredFloorPlate Property Definitions **************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StartHeight = { "StartHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FAuthoredFloorPlate, StartHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartHeight_MetaData), NewProp_StartHeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Shells_Inner = { "Shells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAuthoredBuildingShell, METADATA_PARAMS(0, nullptr) }; // 469b3acf1e727811744a27035091a1892ddaddd0
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Shells = { "Shells", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FAuthoredFloorPlate, Shells), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shells_MetaData), NewProp_Shells_MetaData) }; // 469b3acf1e727811744a27035091a1892ddaddd0
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RoofOverride = { "RoofOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FAuthoredFloorPlate, RoofOverride), Z_Construct_UScriptStruct_FBuildingRoofOverride, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoofOverride_MetaData), NewProp_RoofOverride_MetaData) }; // 0326dabc900ab3b76211ddc0926af13b91d63d64
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Shells_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Shells,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoofOverride,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FAuthoredFloorPlate Property Definitions ****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDRuntime,
	nullptr,
	&NewStructOps,
	"AuthoredFloorPlate",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FAuthoredFloorPlate>(),
	alignof(FAuthoredFloorPlate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAuthoredFloorPlate;
UScriptStruct* Z_Construct_UScriptStruct_FAuthoredFloorPlate(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FAuthoredFloorPlate.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FAuthoredFloorPlate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuthoredFloorPlate, (UObject*)Z_Construct_UPackage__Script_CityBLDRuntime(ETypeConstructPhase::Outer), TEXT("AuthoredFloorPlate"));
		}
		return Z_Registration_Info_UScriptStruct_FAuthoredFloorPlate.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FAuthoredFloorPlate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAuthoredFloorPlate.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FAuthoredFloorPlate.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FAuthoredFloorPlate *************************************************

// ********** Begin Class AModularBuildingActor Function AddAuthoredFloorPlate *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AModularBuildingActor_AddAuthoredFloorPlate_Statics
struct UHT_STATICS
{
	struct ModularBuildingActor_eventAddAuthoredFloorPlate_Parms
	{
		float StartHeight;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|FloorPlates" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddAuthoredFloorPlate constinit property declarations *****************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddAuthoredFloorPlate constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddAuthoredFloorPlate Property Definitions ****************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StartHeight = { "StartHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ModularBuildingActor_eventAddAuthoredFloorPlate_Parms, StartHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ModularBuildingActor_eventAddAuthoredFloorPlate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddAuthoredFloorPlate Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AModularBuildingActor, nullptr, "AddAuthoredFloorPlate", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularBuildingActor_eventAddAuthoredFloorPlate_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularBuildingActor_eventAddAuthoredFloorPlate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModularBuildingActor_AddAuthoredFloorPlate(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AModularBuildingActor::execAddAuthoredFloorPlate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartHeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AddAuthoredFloorPlate(Z_Param_StartHeight);
	P_NATIVE_END;
}
// ********** End Class AModularBuildingActor Function AddAuthoredFloorPlate ***********************

// ********** Begin Class AModularBuildingActor Function AddAuthoredShellToPlate *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AModularBuildingActor_AddAuthoredShellToPlate_Statics
struct UHT_STATICS
{
	struct ModularBuildingActor_eventAddAuthoredShellToPlate_Parms
	{
		int32 PlateIndex;
		TArray<FVector2D> PerimeterVertices;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|FloorPlates" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerimeterVertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddAuthoredShellToPlate constinit property declarations ***************
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlateIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerimeterVertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PerimeterVertices;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModularBuildingActor_eventAddAuthoredShellToPlate_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddAuthoredShellToPlate constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddAuthoredShellToPlate Property Definitions **************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PlateIndex = { "PlateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ModularBuildingActor_eventAddAuthoredShellToPlate_Parms, PlateIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PerimeterVertices_Inner = { "PerimeterVertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PerimeterVertices = { "PerimeterVertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ModularBuildingActor_eventAddAuthoredShellToPlate_Parms, PerimeterVertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerimeterVertices_MetaData), NewProp_PerimeterVertices_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularBuildingActor_eventAddAuthoredShellToPlate_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlateIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PerimeterVertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PerimeterVertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddAuthoredShellToPlate Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AModularBuildingActor, nullptr, "AddAuthoredShellToPlate", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularBuildingActor_eventAddAuthoredShellToPlate_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularBuildingActor_eventAddAuthoredShellToPlate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModularBuildingActor_AddAuthoredShellToPlate(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AModularBuildingActor::execAddAuthoredShellToPlate)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlateIndex);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_PerimeterVertices);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddAuthoredShellToPlate(Z_Param_PlateIndex,Z_Param_Out_PerimeterVertices);
	P_NATIVE_END;
}
// ********** End Class AModularBuildingActor Function AddAuthoredShellToPlate *********************

// ********** Begin Class AModularBuildingActor Function AddAuthoredShellToPlate_GetIndex **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AModularBuildingActor_AddAuthoredShellToPlate_GetIndex_Statics
struct UHT_STATICS
{
	struct ModularBuildingActor_eventAddAuthoredShellToPlate_GetIndex_Parms
	{
		int32 PlateIndex;
		TArray<FVector2D> PerimeterVertices;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|FloorPlates" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerimeterVertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddAuthoredShellToPlate_GetIndex constinit property declarations ******
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlateIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerimeterVertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PerimeterVertices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddAuthoredShellToPlate_GetIndex constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddAuthoredShellToPlate_GetIndex Property Definitions *****************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PlateIndex = { "PlateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ModularBuildingActor_eventAddAuthoredShellToPlate_GetIndex_Parms, PlateIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PerimeterVertices_Inner = { "PerimeterVertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PerimeterVertices = { "PerimeterVertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ModularBuildingActor_eventAddAuthoredShellToPlate_GetIndex_Parms, PerimeterVertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerimeterVertices_MetaData), NewProp_PerimeterVertices_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ModularBuildingActor_eventAddAuthoredShellToPlate_GetIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlateIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PerimeterVertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PerimeterVertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AddAuthoredShellToPlate_GetIndex Property Definitions *******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AModularBuildingActor, nullptr, "AddAuthoredShellToPlate_GetIndex", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularBuildingActor_eventAddAuthoredShellToPlate_GetIndex_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularBuildingActor_eventAddAuthoredShellToPlate_GetIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModularBuildingActor_AddAuthoredShellToPlate_GetIndex(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AModularBuildingActor::execAddAuthoredShellToPlate_GetIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlateIndex);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_PerimeterVertices);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AddAuthoredShellToPlate_GetIndex(Z_Param_PlateIndex,Z_Param_Out_PerimeterVertices);
	P_NATIVE_END;
}
// ********** End Class AModularBuildingActor Function AddAuthoredShellToPlate_GetIndex ************

// ********** Begin Class AModularBuildingActor Function ClearAuthoredFloorPlates ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AModularBuildingActor_ClearAuthoredFloorPlates_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|FloorPlates" },
		{ "Comment", "/**\n\x09 * Authored floor plate API:\n\x09 * - Populate AuthoredFloorPlates (via these helpers or directly in the details panel)\n\x09 * - Set bUseAuthoredFloorPlates=true\n\x09 * - Call GenerateModularBuilding to rebuild using the authored polygons\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
		{ "ToolTip", "Authored floor plate API:\n- Populate AuthoredFloorPlates (via these helpers or directly in the details panel)\n- Set bUseAuthoredFloorPlates=true\n- Call GenerateModularBuilding to rebuild using the authored polygons" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearAuthoredFloorPlates constinit property declarations **************
// ********** End Function ClearAuthoredFloorPlates constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AModularBuildingActor, nullptr, "ClearAuthoredFloorPlates", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AModularBuildingActor_ClearAuthoredFloorPlates(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AModularBuildingActor::execClearAuthoredFloorPlates)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAuthoredFloorPlates();
	P_NATIVE_END;
}
// ********** End Class AModularBuildingActor Function ClearAuthoredFloorPlates ********************

// ********** Begin Class AModularBuildingActor Function GenerateModularBuilding *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AModularBuildingActor_GenerateModularBuilding_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateModularBuilding constinit property declarations ***************
// ********** End Function GenerateModularBuilding constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AModularBuildingActor, nullptr, "GenerateModularBuilding", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AModularBuildingActor_GenerateModularBuilding(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AModularBuildingActor::execGenerateModularBuilding)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateModularBuilding();
	P_NATIVE_END;
}
// ********** End Class AModularBuildingActor Function GenerateModularBuilding *********************

// ********** Begin Class AModularBuildingActor Function GetAuthoredShellFaceTypeOverrides *********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AModularBuildingActor_GetAuthoredShellFaceTypeOverrides_Statics
struct UHT_STATICS
{
	struct ModularBuildingActor_eventGetAuthoredShellFaceTypeOverrides_Parms
	{
		int32 PlateIndex;
		int32 ShellIndex;
		TMap<int32,EBuildingFace> OutFaceTypeOverrides;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|FloorPlates" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAuthoredShellFaceTypeOverrides constinit property declarations *****
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlateIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShellIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutFaceTypeOverrides_ValueProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutFaceTypeOverrides_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutFaceTypeOverrides_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutFaceTypeOverrides;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModularBuildingActor_eventGetAuthoredShellFaceTypeOverrides_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAuthoredShellFaceTypeOverrides constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAuthoredShellFaceTypeOverrides Property Definitions ****************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PlateIndex = { "PlateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ModularBuildingActor_eventGetAuthoredShellFaceTypeOverrides_Parms, PlateIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ShellIndex = { "ShellIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ModularBuildingActor_eventGetAuthoredShellFaceTypeOverrides_Parms, ShellIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_OutFaceTypeOverrides_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_OutFaceTypeOverrides_ValueProp = { "OutFaceTypeOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, 1, Z_Construct_UEnum_CityBLDRuntime_EBuildingFace, METADATA_PARAMS(0, nullptr) }; // 636b1096d69d3eed8f03c070c2c9de1d9ab1777e
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OutFaceTypeOverrides_Key_KeyProp = { "OutFaceTypeOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_OutFaceTypeOverrides = { "OutFaceTypeOverrides", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(ModularBuildingActor_eventGetAuthoredShellFaceTypeOverrides_Parms, OutFaceTypeOverrides), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 636b1096d69d3eed8f03c070c2c9de1d9ab1777e
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularBuildingActor_eventGetAuthoredShellFaceTypeOverrides_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlateIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShellIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutFaceTypeOverrides_ValueProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutFaceTypeOverrides_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutFaceTypeOverrides_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutFaceTypeOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAuthoredShellFaceTypeOverrides Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AModularBuildingActor, nullptr, "GetAuthoredShellFaceTypeOverrides", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularBuildingActor_eventGetAuthoredShellFaceTypeOverrides_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularBuildingActor_eventGetAuthoredShellFaceTypeOverrides_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModularBuildingActor_GetAuthoredShellFaceTypeOverrides(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AModularBuildingActor::execGetAuthoredShellFaceTypeOverrides)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlateIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_ShellIndex);
	P_GET_TMAP_REF(int32,EBuildingFace,Z_Param_Out_OutFaceTypeOverrides);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAuthoredShellFaceTypeOverrides(Z_Param_PlateIndex,Z_Param_ShellIndex,Z_Param_Out_OutFaceTypeOverrides);
	P_NATIVE_END;
}
// ********** End Class AModularBuildingActor Function GetAuthoredShellFaceTypeOverrides ***********

// ********** Begin Class AModularBuildingActor Function GetEffectiveFaceTypesForAuthoredShell *****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AModularBuildingActor_GetEffectiveFaceTypesForAuthoredShell_Statics
struct UHT_STATICS
{
	struct ModularBuildingActor_eventGetEffectiveFaceTypesForAuthoredShell_Parms
	{
		int32 PlateIndex;
		int32 ShellIndex;
		TMap<int32,EBuildingFace> OutFaceTypesBySegment;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|FloorPlates" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetEffectiveFaceTypesForAuthoredShell constinit property declarations *
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlateIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShellIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutFaceTypesBySegment_ValueProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutFaceTypesBySegment_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutFaceTypesBySegment_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutFaceTypesBySegment;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModularBuildingActor_eventGetEffectiveFaceTypesForAuthoredShell_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEffectiveFaceTypesForAuthoredShell constinit property declarations ***
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEffectiveFaceTypesForAuthoredShell Property Definitions ************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PlateIndex = { "PlateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ModularBuildingActor_eventGetEffectiveFaceTypesForAuthoredShell_Parms, PlateIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ShellIndex = { "ShellIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ModularBuildingActor_eventGetEffectiveFaceTypesForAuthoredShell_Parms, ShellIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_OutFaceTypesBySegment_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_OutFaceTypesBySegment_ValueProp = { "OutFaceTypesBySegment", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, 1, Z_Construct_UEnum_CityBLDRuntime_EBuildingFace, METADATA_PARAMS(0, nullptr) }; // 636b1096d69d3eed8f03c070c2c9de1d9ab1777e
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_OutFaceTypesBySegment_Key_KeyProp = { "OutFaceTypesBySegment_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_OutFaceTypesBySegment = { "OutFaceTypesBySegment", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(ModularBuildingActor_eventGetEffectiveFaceTypesForAuthoredShell_Parms, OutFaceTypesBySegment), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 636b1096d69d3eed8f03c070c2c9de1d9ab1777e
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularBuildingActor_eventGetEffectiveFaceTypesForAuthoredShell_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlateIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShellIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutFaceTypesBySegment_ValueProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutFaceTypesBySegment_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutFaceTypesBySegment_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutFaceTypesBySegment,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetEffectiveFaceTypesForAuthoredShell Property Definitions **************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AModularBuildingActor, nullptr, "GetEffectiveFaceTypesForAuthoredShell", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularBuildingActor_eventGetEffectiveFaceTypesForAuthoredShell_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularBuildingActor_eventGetEffectiveFaceTypesForAuthoredShell_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModularBuildingActor_GetEffectiveFaceTypesForAuthoredShell(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AModularBuildingActor::execGetEffectiveFaceTypesForAuthoredShell)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlateIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_ShellIndex);
	P_GET_TMAP_REF(int32,EBuildingFace,Z_Param_Out_OutFaceTypesBySegment);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetEffectiveFaceTypesForAuthoredShell(Z_Param_PlateIndex,Z_Param_ShellIndex,Z_Param_Out_OutFaceTypesBySegment);
	P_NATIVE_END;
}
// ********** End Class AModularBuildingActor Function GetEffectiveFaceTypesForAuthoredShell *******

// ********** Begin Class AModularBuildingActor Function RemoveAuthoredFloorPlate ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AModularBuildingActor_RemoveAuthoredFloorPlate_Statics
struct UHT_STATICS
{
	struct ModularBuildingActor_eventRemoveAuthoredFloorPlate_Parms
	{
		int32 PlateIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|FloorPlates" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveAuthoredFloorPlate constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlateIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModularBuildingActor_eventRemoveAuthoredFloorPlate_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveAuthoredFloorPlate constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveAuthoredFloorPlate Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PlateIndex = { "PlateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ModularBuildingActor_eventRemoveAuthoredFloorPlate_Parms, PlateIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularBuildingActor_eventRemoveAuthoredFloorPlate_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlateIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RemoveAuthoredFloorPlate Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AModularBuildingActor, nullptr, "RemoveAuthoredFloorPlate", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularBuildingActor_eventRemoveAuthoredFloorPlate_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularBuildingActor_eventRemoveAuthoredFloorPlate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModularBuildingActor_RemoveAuthoredFloorPlate(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AModularBuildingActor::execRemoveAuthoredFloorPlate)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlateIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveAuthoredFloorPlate(Z_Param_PlateIndex);
	P_NATIVE_END;
}
// ********** End Class AModularBuildingActor Function RemoveAuthoredFloorPlate ********************

// ********** Begin Class AModularBuildingActor Function RemoveAuthoredShellFromPlate **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AModularBuildingActor_RemoveAuthoredShellFromPlate_Statics
struct UHT_STATICS
{
	struct ModularBuildingActor_eventRemoveAuthoredShellFromPlate_Parms
	{
		int32 PlateIndex;
		int32 ShellIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|FloorPlates" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveAuthoredShellFromPlate constinit property declarations **********
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlateIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShellIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModularBuildingActor_eventRemoveAuthoredShellFromPlate_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveAuthoredShellFromPlate constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveAuthoredShellFromPlate Property Definitions *********************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PlateIndex = { "PlateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ModularBuildingActor_eventRemoveAuthoredShellFromPlate_Parms, PlateIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ShellIndex = { "ShellIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ModularBuildingActor_eventRemoveAuthoredShellFromPlate_Parms, ShellIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularBuildingActor_eventRemoveAuthoredShellFromPlate_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlateIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShellIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RemoveAuthoredShellFromPlate Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AModularBuildingActor, nullptr, "RemoveAuthoredShellFromPlate", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularBuildingActor_eventRemoveAuthoredShellFromPlate_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularBuildingActor_eventRemoveAuthoredShellFromPlate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModularBuildingActor_RemoveAuthoredShellFromPlate(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AModularBuildingActor::execRemoveAuthoredShellFromPlate)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlateIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_ShellIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveAuthoredShellFromPlate(Z_Param_PlateIndex,Z_Param_ShellIndex);
	P_NATIVE_END;
}
// ********** End Class AModularBuildingActor Function RemoveAuthoredShellFromPlate ****************

// ********** Begin Class AModularBuildingActor Function SetAuthoredFloorPlateRoofOverride *********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AModularBuildingActor_SetAuthoredFloorPlateRoofOverride_Statics
struct UHT_STATICS
{
	struct ModularBuildingActor_eventSetAuthoredFloorPlateRoofOverride_Parms
	{
		int32 PlateIndex;
		FBuildingRoofOverride InRoofOverride;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|FloorPlates" },
		{ "Comment", "/** Sets the roof settings used when capping the tier this plate defines. */" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
		{ "ToolTip", "Sets the roof settings used when capping the tier this plate defines." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InRoofOverride_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetAuthoredFloorPlateRoofOverride constinit property declarations *****
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlateIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InRoofOverride;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModularBuildingActor_eventSetAuthoredFloorPlateRoofOverride_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAuthoredFloorPlateRoofOverride constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAuthoredFloorPlateRoofOverride Property Definitions ****************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PlateIndex = { "PlateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ModularBuildingActor_eventSetAuthoredFloorPlateRoofOverride_Parms, PlateIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InRoofOverride = { "InRoofOverride", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ModularBuildingActor_eventSetAuthoredFloorPlateRoofOverride_Parms, InRoofOverride), Z_Construct_UScriptStruct_FBuildingRoofOverride, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRoofOverride_MetaData), NewProp_InRoofOverride_MetaData) }; // 0326dabc900ab3b76211ddc0926af13b91d63d64
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularBuildingActor_eventSetAuthoredFloorPlateRoofOverride_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlateIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InRoofOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetAuthoredFloorPlateRoofOverride Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AModularBuildingActor, nullptr, "SetAuthoredFloorPlateRoofOverride", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularBuildingActor_eventSetAuthoredFloorPlateRoofOverride_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularBuildingActor_eventSetAuthoredFloorPlateRoofOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModularBuildingActor_SetAuthoredFloorPlateRoofOverride(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AModularBuildingActor::execSetAuthoredFloorPlateRoofOverride)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlateIndex);
	P_GET_STRUCT_REF(FBuildingRoofOverride,Z_Param_Out_InRoofOverride);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetAuthoredFloorPlateRoofOverride(Z_Param_PlateIndex,Z_Param_Out_InRoofOverride);
	P_NATIVE_END;
}
// ********** End Class AModularBuildingActor Function SetAuthoredFloorPlateRoofOverride ***********

// ********** Begin Class AModularBuildingActor Function SetAuthoredShellFaceTypeOverrides *********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AModularBuildingActor_SetAuthoredShellFaceTypeOverrides_Statics
struct UHT_STATICS
{
	struct ModularBuildingActor_eventSetAuthoredShellFaceTypeOverrides_Parms
	{
		int32 PlateIndex;
		int32 ShellIndex;
		TMap<int32,EBuildingFace> FaceTypeOverrides;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|FloorPlates" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceTypeOverrides_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetAuthoredShellFaceTypeOverrides constinit property declarations *****
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlateIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShellIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FaceTypeOverrides_ValueProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FaceTypeOverrides_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FaceTypeOverrides_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FaceTypeOverrides;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModularBuildingActor_eventSetAuthoredShellFaceTypeOverrides_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAuthoredShellFaceTypeOverrides constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAuthoredShellFaceTypeOverrides Property Definitions ****************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PlateIndex = { "PlateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ModularBuildingActor_eventSetAuthoredShellFaceTypeOverrides_Parms, PlateIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ShellIndex = { "ShellIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ModularBuildingActor_eventSetAuthoredShellFaceTypeOverrides_Parms, ShellIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_FaceTypeOverrides_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_FaceTypeOverrides_ValueProp = { "FaceTypeOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, 1, Z_Construct_UEnum_CityBLDRuntime_EBuildingFace, METADATA_PARAMS(0, nullptr) }; // 636b1096d69d3eed8f03c070c2c9de1d9ab1777e
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_FaceTypeOverrides_Key_KeyProp = { "FaceTypeOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_FaceTypeOverrides = { "FaceTypeOverrides", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(ModularBuildingActor_eventSetAuthoredShellFaceTypeOverrides_Parms, FaceTypeOverrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceTypeOverrides_MetaData), NewProp_FaceTypeOverrides_MetaData) }; // 636b1096d69d3eed8f03c070c2c9de1d9ab1777e
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularBuildingActor_eventSetAuthoredShellFaceTypeOverrides_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlateIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShellIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FaceTypeOverrides_ValueProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FaceTypeOverrides_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FaceTypeOverrides_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FaceTypeOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetAuthoredShellFaceTypeOverrides Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AModularBuildingActor, nullptr, "SetAuthoredShellFaceTypeOverrides", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularBuildingActor_eventSetAuthoredShellFaceTypeOverrides_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularBuildingActor_eventSetAuthoredShellFaceTypeOverrides_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModularBuildingActor_SetAuthoredShellFaceTypeOverrides(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AModularBuildingActor::execSetAuthoredShellFaceTypeOverrides)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlateIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_ShellIndex);
	P_GET_TMAP_REF(int32,EBuildingFace,Z_Param_Out_FaceTypeOverrides);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetAuthoredShellFaceTypeOverrides(Z_Param_PlateIndex,Z_Param_ShellIndex,Z_Param_Out_FaceTypeOverrides);
	P_NATIVE_END;
}
// ********** End Class AModularBuildingActor Function SetAuthoredShellFaceTypeOverrides ***********

// ********** Begin Class AModularBuildingActor Function SetAuthoredShellPerimeterVertices *********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AModularBuildingActor_SetAuthoredShellPerimeterVertices_Statics
struct UHT_STATICS
{
	struct ModularBuildingActor_eventSetAuthoredShellPerimeterVertices_Parms
	{
		int32 PlateIndex;
		int32 ShellIndex;
		TArray<FVector2D> PerimeterVertices;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|FloorPlates" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerimeterVertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetAuthoredShellPerimeterVertices constinit property declarations *****
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlateIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShellIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerimeterVertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PerimeterVertices;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModularBuildingActor_eventSetAuthoredShellPerimeterVertices_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAuthoredShellPerimeterVertices constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAuthoredShellPerimeterVertices Property Definitions ****************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PlateIndex = { "PlateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ModularBuildingActor_eventSetAuthoredShellPerimeterVertices_Parms, PlateIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ShellIndex = { "ShellIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ModularBuildingActor_eventSetAuthoredShellPerimeterVertices_Parms, ShellIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PerimeterVertices_Inner = { "PerimeterVertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PerimeterVertices = { "PerimeterVertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ModularBuildingActor_eventSetAuthoredShellPerimeterVertices_Parms, PerimeterVertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerimeterVertices_MetaData), NewProp_PerimeterVertices_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularBuildingActor_eventSetAuthoredShellPerimeterVertices_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlateIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShellIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PerimeterVertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PerimeterVertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetAuthoredShellPerimeterVertices Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AModularBuildingActor, nullptr, "SetAuthoredShellPerimeterVertices", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularBuildingActor_eventSetAuthoredShellPerimeterVertices_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularBuildingActor_eventSetAuthoredShellPerimeterVertices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModularBuildingActor_SetAuthoredShellPerimeterVertices(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AModularBuildingActor::execSetAuthoredShellPerimeterVertices)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlateIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_ShellIndex);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_PerimeterVertices);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetAuthoredShellPerimeterVertices(Z_Param_PlateIndex,Z_Param_ShellIndex,Z_Param_Out_PerimeterVertices);
	P_NATIVE_END;
}
// ********** End Class AModularBuildingActor Function SetAuthoredShellPerimeterVertices ***********

// ********** Begin Class AModularBuildingActor Function SetStreetFacingFromEdgeHint ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AModularBuildingActor_SetStreetFacingFromEdgeHint_Statics
struct UHT_STATICS
{
	struct ModularBuildingActor_eventSetStreetFacingFromEdgeHint_Parms
	{
		FVector EdgeMidpointLocal;
		FVector EdgeTangentLocal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|Shape" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeMidpointLocal_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeTangentLocal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetStreetFacingFromEdgeHint constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeMidpointLocal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeTangentLocal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetStreetFacingFromEdgeHint constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetStreetFacingFromEdgeHint Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EdgeMidpointLocal = { "EdgeMidpointLocal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ModularBuildingActor_eventSetStreetFacingFromEdgeHint_Parms, EdgeMidpointLocal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeMidpointLocal_MetaData), NewProp_EdgeMidpointLocal_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EdgeTangentLocal = { "EdgeTangentLocal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ModularBuildingActor_eventSetStreetFacingFromEdgeHint_Parms, EdgeTangentLocal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeTangentLocal_MetaData), NewProp_EdgeTangentLocal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeMidpointLocal,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeTangentLocal,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetStreetFacingFromEdgeHint Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AModularBuildingActor, nullptr, "SetStreetFacingFromEdgeHint", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularBuildingActor_eventSetStreetFacingFromEdgeHint_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularBuildingActor_eventSetStreetFacingFromEdgeHint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModularBuildingActor_SetStreetFacingFromEdgeHint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AModularBuildingActor::execSetStreetFacingFromEdgeHint)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_EdgeMidpointLocal);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_EdgeTangentLocal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStreetFacingFromEdgeHint(Z_Param_Out_EdgeMidpointLocal,Z_Param_Out_EdgeTangentLocal);
	P_NATIVE_END;
}
// ********** End Class AModularBuildingActor Function SetStreetFacingFromEdgeHint *****************

// ********** Begin Class AModularBuildingActor Function SetStreetFacingFromEdgeHints **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AModularBuildingActor_SetStreetFacingFromEdgeHints_Statics
struct UHT_STATICS
{
	struct ModularBuildingActor_eventSetStreetFacingFromEdgeHints_Parms
	{
		TArray<FVector> EdgeMidpointsLocal;
		TArray<FVector> EdgeTangentsLocal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|Shape" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeMidpointsLocal_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeTangentsLocal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetStreetFacingFromEdgeHints constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeMidpointsLocal_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EdgeMidpointsLocal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeTangentsLocal_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EdgeTangentsLocal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetStreetFacingFromEdgeHints constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetStreetFacingFromEdgeHints Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EdgeMidpointsLocal_Inner = { "EdgeMidpointsLocal", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_EdgeMidpointsLocal = { "EdgeMidpointsLocal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ModularBuildingActor_eventSetStreetFacingFromEdgeHints_Parms, EdgeMidpointsLocal), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeMidpointsLocal_MetaData), NewProp_EdgeMidpointsLocal_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EdgeTangentsLocal_Inner = { "EdgeTangentsLocal", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_EdgeTangentsLocal = { "EdgeTangentsLocal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ModularBuildingActor_eventSetStreetFacingFromEdgeHints_Parms, EdgeTangentsLocal), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeTangentsLocal_MetaData), NewProp_EdgeTangentsLocal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeMidpointsLocal_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeMidpointsLocal,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeTangentsLocal_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeTangentsLocal,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetStreetFacingFromEdgeHints Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AModularBuildingActor, nullptr, "SetStreetFacingFromEdgeHints", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularBuildingActor_eventSetStreetFacingFromEdgeHints_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularBuildingActor_eventSetStreetFacingFromEdgeHints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModularBuildingActor_SetStreetFacingFromEdgeHints(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AModularBuildingActor::execSetStreetFacingFromEdgeHints)
{
	P_GET_TARRAY_REF(FVector,Z_Param_Out_EdgeMidpointsLocal);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_EdgeTangentsLocal);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStreetFacingFromEdgeHints(Z_Param_Out_EdgeMidpointsLocal,Z_Param_Out_EdgeTangentsLocal);
	P_NATIVE_END;
}
// ********** End Class AModularBuildingActor Function SetStreetFacingFromEdgeHints ****************

// ********** Begin Class AModularBuildingActor Function SetUseAuthoredFloorPlates *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AModularBuildingActor_SetUseAuthoredFloorPlates_Statics
struct UHT_STATICS
{
	struct ModularBuildingActor_eventSetUseAuthoredFloorPlates_Parms
	{
		bool bInUseAuthoredFloorPlates;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|FloorPlates" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetUseAuthoredFloorPlates constinit property declarations *************
	static void NewProp_bInUseAuthoredFloorPlates_SetBit(void* Obj)
	{
		((ModularBuildingActor_eventSetUseAuthoredFloorPlates_Parms*)Obj)->bInUseAuthoredFloorPlates = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInUseAuthoredFloorPlates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetUseAuthoredFloorPlates constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetUseAuthoredFloorPlates Property Definitions ************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInUseAuthoredFloorPlates = { "bInUseAuthoredFloorPlates", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularBuildingActor_eventSetUseAuthoredFloorPlates_Parms), &UHT_STATICS::NewProp_bInUseAuthoredFloorPlates_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInUseAuthoredFloorPlates,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetUseAuthoredFloorPlates Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AModularBuildingActor, nullptr, "SetUseAuthoredFloorPlates", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularBuildingActor_eventSetUseAuthoredFloorPlates_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularBuildingActor_eventSetUseAuthoredFloorPlates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModularBuildingActor_SetUseAuthoredFloorPlates(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AModularBuildingActor::execSetUseAuthoredFloorPlates)
{
	P_GET_UBOOL(Z_Param_bInUseAuthoredFloorPlates);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUseAuthoredFloorPlates(Z_Param_bInUseAuthoredFloorPlates);
	P_NATIVE_END;
}
// ********** End Class AModularBuildingActor Function SetUseAuthoredFloorPlates *******************

// ********** Begin Class AModularBuildingActor ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AModularBuildingActor_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "ModularBuildingActor.h" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapePoints_MetaData[] = {
		{ "Category", "Shape" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingHeight_MetaData[] = {
		{ "Category", "CityBLD|Main" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopFloorIndex_MetaData[] = {
		{ "Category", "CityBLD|Utilities" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingFloor_MetaData[] = {
		{ "Category", "CityBLD|Utilities" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreetFacingFaces_MetaData[] = {
		{ "Category", "CityBLD|Shape" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorHeights_MetaData[] = {
		{ "Category", "CityBLD|Utilities" },
		{ "Comment", "// The heights at which we want to generate floor geometry.\n" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
		{ "ToolTip", "The heights at which we want to generate floor geometry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[] = {
		{ "Category", "CityBLD|Main" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundFloorOverrideClass_MetaData[] = {
		{ "Category", "CityBLD|Main" },
		{ "Comment", "/**\n\x09 * Overrides the ground floor meshes for this specific building instance.\n\x09 * Takes precedence over the deprecated GroundFloorOverrideClass on the BuildingStyle asset.\n\x09 */" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
		{ "ToolTip", "Overrides the ground floor meshes for this specific building instance.\nTakes precedence over the deprecated GroundFloorOverrideClass on the BuildingStyle asset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignText_MetaData[] = {
		{ "Category", "CityBLD|Main" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
		{ "ToolTip", "Per-building signage text used by meshes with bGenerateText enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationParameters_MetaData[] = {
		{ "Category", "CityBLD|Generation" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllFloorsFacade_MetaData[] = {
		{ "Category", "CityBLD|Generation" },
		{ "Comment", "/**\n\x09 * When true, all floor plate faces on every shell (including upper shells) are treated as\n\x09 * street-facing (Facade). Disables the upper-shell inset detection that would otherwise\n\x09 * classify non-inset edges as Side. Intended for import contexts where no road network is\n\x09 * present and every face should use the Facade mesh set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
		{ "ToolTip", "When true, all floor plate faces on every shell (including upper shells) are treated as\nstreet-facing (Facade). Disables the upper-shell inset detection that would otherwise\nclassify non-inset edges as Side. Intended for import contexts where no road network is\npresent and every face should use the Facade mesh set." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTwinBLDUpperFloorsPreferFacade_MetaData[] = {
		{ "Category", "CityBLD|Generation" },
		{ "Comment", "/**\n\x09 * TwinBLD import-specific behavior: on upper floor plates only, promote computed Side faces\n\x09 * to Facade while preserving ground-floor classification.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
		{ "ToolTip", "TwinBLD import-specific behavior: on upper floor plates only, promote computed Side faces\nto Facade while preserving ground-floor classification." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreciseHeight_MetaData[] = {
		{ "Category", "CityBLD|Generation" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
		{ "ToolTip", "When enabled, vertically stretch meshes so stacked height matches the specified Height value exactly." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAuthoredFloorPlates_MetaData[] = {
		{ "Category", "CityBLD|FloorPlates" },
		{ "Comment", "/**\n\x09 * If true, AuthoredFloorPlates will be converted into the runtime-only FloorPlates during generation.\n\x09 * This enables editor tooling to provide custom polygons per plate/shell.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
		{ "ToolTip", "If true, AuthoredFloorPlates will be converted into the runtime-only FloorPlates during generation.\nThis enables editor tooling to provide custom polygons per plate/shell." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuthoredFloorPlates_MetaData[] = {
		{ "Category", "CityBLD|FloorPlates" },
		{ "Comment", "/**\n\x09 * Authoring-time plate definitions.\n\x09 * A future editor tool can populate this array, then call GenerateModularBuilding.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
		{ "ToolTip", "Authoring-time plate definitions.\nA future editor tool can populate this array, then call GenerateModularBuilding." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoofOverride_MetaData[] = {
		{ "Category", "CityBLD|Roof" },
		{ "Comment", "/**\n\x09 * Roof settings for this building instance, overriding the ones on its URoofStyle asset.\n\x09 * A floor plate's own override wins over this. Used by importers that carry real roof data.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
		{ "ToolTip", "Roof settings for this building instance, overriding the ones on its URoofStyle asset.\nA floor plate's own override wins over this. Used by importers that carry real roof data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumBasementFloors_MetaData[] = {
		{ "Category", "CityBLD|Generation" },
		{ "Comment", "// ---- Generation properties (moved from UBuildingGenerationHelper) ----\n" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
		{ "ToolTip", "---- Generation properties (moved from UBuildingGenerationHelper) ----" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootprintPointsAngleThreshold_MetaData[] = {
		{ "Category", "CityBLD|Generation" },
		{ "Comment", "/** Collinear-vertex threshold for building footprints (1-|dot|). Strips dense parcel curve samples from modular shells without changing parcel geometry. */" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
		{ "ToolTip", "Collinear-vertex threshold for building footprints (1-|dot|). Strips dense parcel curve samples from modular shells without changing parcel geometry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FootprintPointsDistanceThreshold_MetaData[] = {
		{ "Category", "CityBLD|Generation" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[] = {
		{ "Category", "CityBLD|Generation" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRootComponent_MetaData[] = {
		{ "Category", "CityBLD|Components" },
		{ "Comment", "/** Root component for the actor. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
		{ "ToolTip", "Root component for the actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RooftopMeshComponent_MetaData[] = {
		{ "Category", "CityBLD|Roof" },
		{ "Comment", "/** Generated rooftop geometry (actor-owned static mesh). */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
		{ "ToolTip", "Generated rooftop geometry (actor-owned static mesh)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedDynamicMeshComponent_MetaData[] = {
		{ "Category", "CityBLD|Components" },
		{ "Comment", "/**\n\x09 * Optional dynamic-mesh component created only when generation requests it.\n\x09 * This avoids keeping an empty DynamicMeshComponent around for the common instanced/static-mesh paths.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
		{ "ToolTip", "Optional dynamic-mesh component created only when generation requests it.\nThis avoids keeping an empty DynamicMeshComponent around for the common instanced/static-mesh paths." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenParams_MetaData[] = {
		{ "Comment", "// Internal generation state\n" },
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
		{ "ToolTip", "Internal generation state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedTrimHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasStreetEdgeHint_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceUseSideMeshSetForRearFaces_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreetEdgeMidpointHintLocal_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreetEdgeTangentHintLocal_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreetEdgeMidpointHintsLocal_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreetEdgeTangentHintsLocal_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildingFaceTypes_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularBuildingActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AModularBuildingActor constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShapePoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ShapePoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BuildingHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TopFloorIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartingFloor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StreetFacingFaces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StreetFacingFaces;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorHeights_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FloorHeights;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Style;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GroundFloorOverrideClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SignText;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GenerationParameters;
	static void NewProp_bAllFloorsFacade_SetBit(void* Obj)
	{
		((AModularBuildingActor*)Obj)->bAllFloorsFacade = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllFloorsFacade;
	static void NewProp_bTwinBLDUpperFloorsPreferFacade_SetBit(void* Obj)
	{
		((AModularBuildingActor*)Obj)->bTwinBLDUpperFloorsPreferFacade = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTwinBLDUpperFloorsPreferFacade;
	static void NewProp_bPreciseHeight_SetBit(void* Obj)
	{
		((AModularBuildingActor*)Obj)->bPreciseHeight = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreciseHeight;
	static void NewProp_bUseAuthoredFloorPlates_SetBit(void* Obj)
	{
		((AModularBuildingActor*)Obj)->bUseAuthoredFloorPlates = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAuthoredFloorPlates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AuthoredFloorPlates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AuthoredFloorPlates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoofOverride;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumBasementFloors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FootprintPointsAngleThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FootprintPointsDistanceThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Seed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRootComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RooftopMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratedDynamicMeshComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GenParams;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GeneratedTrimHeight;
	static void NewProp_bHasStreetEdgeHint_SetBit(void* Obj)
	{
		((AModularBuildingActor*)Obj)->bHasStreetEdgeHint = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasStreetEdgeHint;
	static void NewProp_bForceUseSideMeshSetForRearFaces_SetBit(void* Obj)
	{
		((AModularBuildingActor*)Obj)->bForceUseSideMeshSetForRearFaces = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceUseSideMeshSetForRearFaces;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StreetEdgeMidpointHintLocal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StreetEdgeTangentHintLocal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StreetEdgeMidpointHintsLocal_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StreetEdgeMidpointHintsLocal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StreetEdgeTangentHintsLocal_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StreetEdgeTangentHintsLocal;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BuildingFaceTypes_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BuildingFaceTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BuildingFaceTypes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AModularBuildingActor constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddAuthoredFloorPlate"), .Pointer = &AModularBuildingActor::execAddAuthoredFloorPlate },
		{ .NameUTF8 = UTF8TEXT("AddAuthoredShellToPlate"), .Pointer = &AModularBuildingActor::execAddAuthoredShellToPlate },
		{ .NameUTF8 = UTF8TEXT("AddAuthoredShellToPlate_GetIndex"), .Pointer = &AModularBuildingActor::execAddAuthoredShellToPlate_GetIndex },
		{ .NameUTF8 = UTF8TEXT("ClearAuthoredFloorPlates"), .Pointer = &AModularBuildingActor::execClearAuthoredFloorPlates },
		{ .NameUTF8 = UTF8TEXT("GenerateModularBuilding"), .Pointer = &AModularBuildingActor::execGenerateModularBuilding },
		{ .NameUTF8 = UTF8TEXT("GetAuthoredShellFaceTypeOverrides"), .Pointer = &AModularBuildingActor::execGetAuthoredShellFaceTypeOverrides },
		{ .NameUTF8 = UTF8TEXT("GetEffectiveFaceTypesForAuthoredShell"), .Pointer = &AModularBuildingActor::execGetEffectiveFaceTypesForAuthoredShell },
		{ .NameUTF8 = UTF8TEXT("RemoveAuthoredFloorPlate"), .Pointer = &AModularBuildingActor::execRemoveAuthoredFloorPlate },
		{ .NameUTF8 = UTF8TEXT("RemoveAuthoredShellFromPlate"), .Pointer = &AModularBuildingActor::execRemoveAuthoredShellFromPlate },
		{ .NameUTF8 = UTF8TEXT("SetAuthoredFloorPlateRoofOverride"), .Pointer = &AModularBuildingActor::execSetAuthoredFloorPlateRoofOverride },
		{ .NameUTF8 = UTF8TEXT("SetAuthoredShellFaceTypeOverrides"), .Pointer = &AModularBuildingActor::execSetAuthoredShellFaceTypeOverrides },
		{ .NameUTF8 = UTF8TEXT("SetAuthoredShellPerimeterVertices"), .Pointer = &AModularBuildingActor::execSetAuthoredShellPerimeterVertices },
		{ .NameUTF8 = UTF8TEXT("SetStreetFacingFromEdgeHint"), .Pointer = &AModularBuildingActor::execSetStreetFacingFromEdgeHint },
		{ .NameUTF8 = UTF8TEXT("SetStreetFacingFromEdgeHints"), .Pointer = &AModularBuildingActor::execSetStreetFacingFromEdgeHints },
		{ .NameUTF8 = UTF8TEXT("SetUseAuthoredFloorPlates"), .Pointer = &AModularBuildingActor::execSetUseAuthoredFloorPlates },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AModularBuildingActor_AddAuthoredFloorPlate, "AddAuthoredFloorPlate" }, // 8be5ec559be1aeb2abc9d34111af03d6bf791ee5
		{ &Z_Construct_UFunction_AModularBuildingActor_AddAuthoredShellToPlate, "AddAuthoredShellToPlate" }, // 7fbeff12da555de49d12378fa7dc58d9d820751b
		{ &Z_Construct_UFunction_AModularBuildingActor_AddAuthoredShellToPlate_GetIndex, "AddAuthoredShellToPlate_GetIndex" }, // 96ea813904649a96a1c4fd7187b779570851a0d2
		{ &Z_Construct_UFunction_AModularBuildingActor_ClearAuthoredFloorPlates, "ClearAuthoredFloorPlates" }, // b01aa33aee6d7abfd6aecec7c2f006b2f1551359
		{ &Z_Construct_UFunction_AModularBuildingActor_GenerateModularBuilding, "GenerateModularBuilding" }, // a6f7e56bfc5d3aa96fc19e534e425c0b74f6e8af
		{ &Z_Construct_UFunction_AModularBuildingActor_GetAuthoredShellFaceTypeOverrides, "GetAuthoredShellFaceTypeOverrides" }, // f2c74f513c2ab41aa6cf87fcc17fd11c8f87bcf3
		{ &Z_Construct_UFunction_AModularBuildingActor_GetEffectiveFaceTypesForAuthoredShell, "GetEffectiveFaceTypesForAuthoredShell" }, // 646490a8e2ee147400e6ca1e1b464a61df351509
		{ &Z_Construct_UFunction_AModularBuildingActor_RemoveAuthoredFloorPlate, "RemoveAuthoredFloorPlate" }, // e1a4e5af02dc56165a15a39f199706c13958148f
		{ &Z_Construct_UFunction_AModularBuildingActor_RemoveAuthoredShellFromPlate, "RemoveAuthoredShellFromPlate" }, // 40e597698d04c024c867ed2aeab80ffb478003ac
		{ &Z_Construct_UFunction_AModularBuildingActor_SetAuthoredFloorPlateRoofOverride, "SetAuthoredFloorPlateRoofOverride" }, // 04031a0c0120c52ff96b3a15860bf6e57c95f1ce
		{ &Z_Construct_UFunction_AModularBuildingActor_SetAuthoredShellFaceTypeOverrides, "SetAuthoredShellFaceTypeOverrides" }, // c52e394a71e1acb82000437e1e9a08e1842868dc
		{ &Z_Construct_UFunction_AModularBuildingActor_SetAuthoredShellPerimeterVertices, "SetAuthoredShellPerimeterVertices" }, // e34450ed496850f0df916e285d21f6ef6af1b255
		{ &Z_Construct_UFunction_AModularBuildingActor_SetStreetFacingFromEdgeHint, "SetStreetFacingFromEdgeHint" }, // 2e37af464969aa81920d977797775595542bc6fc
		{ &Z_Construct_UFunction_AModularBuildingActor_SetStreetFacingFromEdgeHints, "SetStreetFacingFromEdgeHints" }, // 9d38089cfe1afa8625ca2c584c7cbcf785fdc779
		{ &Z_Construct_UFunction_AModularBuildingActor_SetUseAuthoredFloorPlates, "SetUseAuthoredFloorPlates" }, // 31891ac023cc7ac99d39b1c6707bb8888f314ece
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularBuildingActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class AModularBuildingActor Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ShapePoints_Inner = { "ShapePoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ShapePoints = { "ShapePoints", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AModularBuildingActor, ShapePoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapePoints_MetaData), NewProp_ShapePoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BuildingHeight = { "BuildingHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AModularBuildingActor, BuildingHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingHeight_MetaData), NewProp_BuildingHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_TopFloorIndex = { "TopFloorIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AModularBuildingActor, TopFloorIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopFloorIndex_MetaData), NewProp_TopFloorIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_StartingFloor = { "StartingFloor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AModularBuildingActor, StartingFloor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingFloor_MetaData), NewProp_StartingFloor_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_StreetFacingFaces_Inner = { "StreetFacingFaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_StreetFacingFaces = { "StreetFacingFaces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AModularBuildingActor, StreetFacingFaces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreetFacingFaces_MetaData), NewProp_StreetFacingFaces_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FloorHeights_Inner = { "FloorHeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_FloorHeights = { "FloorHeights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AModularBuildingActor, FloorHeights), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorHeights_MetaData), NewProp_FloorHeights_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0015000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(AModularBuildingActor, Style), Z_Construct_UClass_UClass, Z_Construct_UClass_UBuildingStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Style_MetaData), NewProp_Style_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_GroundFloorOverrideClass = { "GroundFloorOverrideClass", nullptr, (EPropertyFlags)0x0015000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(AModularBuildingActor, GroundFloorOverrideClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGroundFloorType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundFloorOverrideClass_MetaData), NewProp_GroundFloorOverrideClass_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SignText = { "SignText", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(AModularBuildingActor, SignText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignText_MetaData), NewProp_SignText_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GenerationParameters = { "GenerationParameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AModularBuildingActor, GenerationParameters), Z_Construct_UScriptStruct_FBuildingGenerationParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationParameters_MetaData), NewProp_GenerationParameters_MetaData) }; // 37a2a26551eeb7a88de055f3e6c8eeb594376654
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAllFloorsFacade = { "bAllFloorsFacade", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AModularBuildingActor), &UHT_STATICS::NewProp_bAllFloorsFacade_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllFloorsFacade_MetaData), NewProp_bAllFloorsFacade_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bTwinBLDUpperFloorsPreferFacade = { "bTwinBLDUpperFloorsPreferFacade", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AModularBuildingActor), &UHT_STATICS::NewProp_bTwinBLDUpperFloorsPreferFacade_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTwinBLDUpperFloorsPreferFacade_MetaData), NewProp_bTwinBLDUpperFloorsPreferFacade_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPreciseHeight = { "bPreciseHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AModularBuildingActor), &UHT_STATICS::NewProp_bPreciseHeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreciseHeight_MetaData), NewProp_bPreciseHeight_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseAuthoredFloorPlates = { "bUseAuthoredFloorPlates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AModularBuildingActor), &UHT_STATICS::NewProp_bUseAuthoredFloorPlates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAuthoredFloorPlates_MetaData), NewProp_bUseAuthoredFloorPlates_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AuthoredFloorPlates_Inner = { "AuthoredFloorPlates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAuthoredFloorPlate, METADATA_PARAMS(0, nullptr) }; // 3fba11ca8c4f9bbc125c92ab6dcf87b3c6bf5172
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_AuthoredFloorPlates = { "AuthoredFloorPlates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AModularBuildingActor, AuthoredFloorPlates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuthoredFloorPlates_MetaData), NewProp_AuthoredFloorPlates_MetaData) }; // 3fba11ca8c4f9bbc125c92ab6dcf87b3c6bf5172
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RoofOverride = { "RoofOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AModularBuildingActor, RoofOverride), Z_Construct_UScriptStruct_FBuildingRoofOverride, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoofOverride_MetaData), NewProp_RoofOverride_MetaData) }; // 0326dabc900ab3b76211ddc0926af13b91d63d64
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NumBasementFloors = { "NumBasementFloors", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(AModularBuildingActor, NumBasementFloors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumBasementFloors_MetaData), NewProp_NumBasementFloors_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FootprintPointsAngleThreshold = { "FootprintPointsAngleThreshold", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AModularBuildingActor, FootprintPointsAngleThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootprintPointsAngleThreshold_MetaData), NewProp_FootprintPointsAngleThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_FootprintPointsDistanceThreshold = { "FootprintPointsDistanceThreshold", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AModularBuildingActor, FootprintPointsDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FootprintPointsDistanceThreshold_MetaData), NewProp_FootprintPointsDistanceThreshold_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AModularBuildingActor, Seed), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Seed_MetaData), NewProp_Seed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SceneRootComponent = { "SceneRootComponent", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AModularBuildingActor, SceneRootComponent), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRootComponent_MetaData), NewProp_SceneRootComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RooftopMeshComponent = { "RooftopMeshComponent", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AModularBuildingActor, RooftopMeshComponent), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RooftopMeshComponent_MetaData), NewProp_RooftopMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GeneratedDynamicMeshComponent = { "GeneratedDynamicMeshComponent", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AModularBuildingActor, GeneratedDynamicMeshComponent), Z_Construct_UClass_UDynamicMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedDynamicMeshComponent_MetaData), NewProp_GeneratedDynamicMeshComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GenParams = { "GenParams", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AModularBuildingActor, GenParams), Z_Construct_UScriptStruct_FBuildingGenerationParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenParams_MetaData), NewProp_GenParams_MetaData) }; // 37a2a26551eeb7a88de055f3e6c8eeb594376654
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GeneratedTrimHeight = { "GeneratedTrimHeight", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(AModularBuildingActor, GeneratedTrimHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedTrimHeight_MetaData), NewProp_GeneratedTrimHeight_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHasStreetEdgeHint = { "bHasStreetEdgeHint", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AModularBuildingActor), &UHT_STATICS::NewProp_bHasStreetEdgeHint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasStreetEdgeHint_MetaData), NewProp_bHasStreetEdgeHint_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bForceUseSideMeshSetForRearFaces = { "bForceUseSideMeshSetForRearFaces", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(AModularBuildingActor), &UHT_STATICS::NewProp_bForceUseSideMeshSetForRearFaces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceUseSideMeshSetForRearFaces_MetaData), NewProp_bForceUseSideMeshSetForRearFaces_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_StreetEdgeMidpointHintLocal = { "StreetEdgeMidpointHintLocal", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AModularBuildingActor, StreetEdgeMidpointHintLocal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreetEdgeMidpointHintLocal_MetaData), NewProp_StreetEdgeMidpointHintLocal_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_StreetEdgeTangentHintLocal = { "StreetEdgeTangentHintLocal", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(AModularBuildingActor, StreetEdgeTangentHintLocal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreetEdgeTangentHintLocal_MetaData), NewProp_StreetEdgeTangentHintLocal_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_StreetEdgeMidpointHintsLocal_Inner = { "StreetEdgeMidpointHintsLocal", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_StreetEdgeMidpointHintsLocal = { "StreetEdgeMidpointHintsLocal", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AModularBuildingActor, StreetEdgeMidpointHintsLocal), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreetEdgeMidpointHintsLocal_MetaData), NewProp_StreetEdgeMidpointHintsLocal_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_StreetEdgeTangentHintsLocal_Inner = { "StreetEdgeTangentHintsLocal", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_StreetEdgeTangentHintsLocal = { "StreetEdgeTangentHintsLocal", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AModularBuildingActor, StreetEdgeTangentHintsLocal), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreetEdgeTangentHintsLocal_MetaData), NewProp_StreetEdgeTangentHintsLocal_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_BuildingFaceTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_BuildingFaceTypes_Inner = { "BuildingFaceTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, 0, Z_Construct_UEnum_CityBLDRuntime_EBuildingFace, METADATA_PARAMS(0, nullptr) }; // 636b1096d69d3eed8f03c070c2c9de1d9ab1777e
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_BuildingFaceTypes = { "BuildingFaceTypes", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(AModularBuildingActor, BuildingFaceTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildingFaceTypes_MetaData), NewProp_BuildingFaceTypes_MetaData) }; // 636b1096d69d3eed8f03c070c2c9de1d9ab1777e
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShapePoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShapePoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TopFloorIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartingFloor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StreetFacingFaces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StreetFacingFaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FloorHeights_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FloorHeights,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Style,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GroundFloorOverrideClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SignText,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GenerationParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAllFloorsFacade,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bTwinBLDUpperFloorsPreferFacade,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPreciseHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseAuthoredFloorPlates,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AuthoredFloorPlates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AuthoredFloorPlates,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoofOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NumBasementFloors,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FootprintPointsAngleThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FootprintPointsDistanceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Seed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneRootComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RooftopMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeneratedDynamicMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GenParams,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeneratedTrimHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHasStreetEdgeHint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bForceUseSideMeshSetForRearFaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StreetEdgeMidpointHintLocal,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StreetEdgeTangentHintLocal,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StreetEdgeMidpointHintsLocal_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StreetEdgeMidpointHintsLocal,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StreetEdgeTangentHintsLocal_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StreetEdgeTangentHintsLocal,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingFaceTypes_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingFaceTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingFaceTypes,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class AModularBuildingActor Property Definitions *********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AModularBuildingActor,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void AModularBuildingActor_StaticRegisterNativesAModularBuildingActor()
{
	UClass* Class = AModularBuildingActor::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AModularBuildingActor;
UClass* Z_Construct_UClass_AModularBuildingActor(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AModularBuildingActor;
		if (!Z_Registration_Info_UClass_AModularBuildingActor.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ModularBuildingActor"),
				Z_Registration_Info_UClass_AModularBuildingActor.InnerSingleton,
				AModularBuildingActor_StaticRegisterNativesAModularBuildingActor,
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
		return Z_Registration_Info_UClass_AModularBuildingActor.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AModularBuildingActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModularBuildingActor.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AModularBuildingActor.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AModularBuildingActor);
AModularBuildingActor::~AModularBuildingActor() {}
// ********** End Class AModularBuildingActor ******************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_ModularBuildingActor_h__Script_CityBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_CityBLDRuntime_EBuildingGenerationCollision, TEXT("EBuildingGenerationCollision"), &ZRIE_EBuildingGenerationCollision, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1335876197U) },
		{ Z_Construct_UEnum_CityBLDRuntime_EBuildingMeshGenerationType, TEXT("EBuildingMeshGenerationType"), &ZRIE_EBuildingMeshGenerationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2279044061U) },
		{ Z_Construct_UEnum_CityBLDRuntime_EBuildingRoofType, TEXT("EBuildingRoofType"), &ZRIE_EBuildingRoofType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1240635277U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FBuildingGenerationParameters, Z_Construct_UScriptStruct_FBuildingGenerationParameters_Statics::NewStructOps, TEXT("BuildingGenerationParameters"),&Z_Registration_Info_UScriptStruct_FBuildingGenerationParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuildingGenerationParameters), 933405285U) },
		{ Z_Construct_UScriptStruct_FAuthoredBuildingShell, Z_Construct_UScriptStruct_FAuthoredBuildingShell_Statics::NewStructOps, TEXT("AuthoredBuildingShell"),&Z_Registration_Info_UScriptStruct_FAuthoredBuildingShell, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAuthoredBuildingShell), 1184578255U) },
		{ Z_Construct_UScriptStruct_FAuthoredFloorPlate, Z_Construct_UScriptStruct_FAuthoredFloorPlate_Statics::NewStructOps, TEXT("AuthoredFloorPlate"),&Z_Registration_Info_UScriptStruct_FAuthoredFloorPlate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAuthoredFloorPlate), 1069158858U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AModularBuildingActor, TEXT("AModularBuildingActor"), &Z_Registration_Info_UClass_AModularBuildingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModularBuildingActor), 406126414U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_ModularBuildingActor_h__Script_CityBLDRuntime_9a2e3dd67ce2959a089b750d4349c9a6cb08b84b{
	TEXT("/Script/CityBLDRuntime"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
