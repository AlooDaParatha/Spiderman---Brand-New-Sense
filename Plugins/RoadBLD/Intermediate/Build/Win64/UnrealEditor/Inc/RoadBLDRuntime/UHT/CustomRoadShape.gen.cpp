// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicRoad/CustomRoadShape.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeCustomRoadShape() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ACustomRoadShape(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCustomRoadShapeDebugAttribute(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCustomRoadShapeDebugVertex(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCustomRoadShapeSegment(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCustomRoadShapeSegmentModuleList(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_ECustomShapeSegmentType(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ACustomRoadShape(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadModuleObject(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ECustomShapeSegmentType ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDRuntime_ECustomShapeSegmentType_Statics
template<> ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ECustomShapeSegmentType>()
{
	return Z_Construct_UEnum_RoadBLDRuntime_ECustomShapeSegmentType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Cut.DisplayName", "Cut" },
		{ "Cut.Name", "ECustomShapeSegmentType::Cut" },
		{ "Edge.DisplayName", "Edge" },
		{ "Edge.Name", "ECustomShapeSegmentType::Edge" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECustomShapeSegmentType::Edge", (int64)ECustomShapeSegmentType::Edge },
		{ "ECustomShapeSegmentType::Cut", (int64)ECustomShapeSegmentType::Cut },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	"ECustomShapeSegmentType",
	"ECustomShapeSegmentType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ECustomShapeSegmentType;
UEnum* Z_Construct_UEnum_RoadBLDRuntime_ECustomShapeSegmentType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ECustomShapeSegmentType.OuterSingleton)
		{
			ZRIE_ECustomShapeSegmentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDRuntime_ECustomShapeSegmentType, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("ECustomShapeSegmentType"));
		}
		return ZRIE_ECustomShapeSegmentType.OuterSingleton;
	}
	if (!ZRIE_ECustomShapeSegmentType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ECustomShapeSegmentType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ECustomShapeSegmentType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ECustomShapeSegmentType *****************************************************

// ********** Begin ScriptStruct FCustomRoadShapeSegment *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FCustomRoadShapeSegment_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FCustomRoadShapeSegment>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCustomRoadShapeSegment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Per-edge authoring data for an ACustomRoadShape polygon. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
		{ "ToolTip", "Per-edge authoring data for an ACustomRoadShape polygon." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentType_MetaData[] = {
		{ "Category", "RoadBLD|Custom Shape" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SidewalkWidth_MetaData[] = {
		{ "Category", "RoadBLD|Custom Shape" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SidewalkZOffset_MetaData[] = {
		{ "Category", "RoadBLD|Custom Shape" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SidewalkMaterial_MetaData[] = {
		{ "Category", "RoadBLD|Custom Shape" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFlatSidewalk_MetaData[] = {
		{ "Category", "RoadBLD|Custom Shape" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadModuleClasses_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "RoadBLD|Custom Shape" },
		{ "Comment", "/** Per-edge road module classes assigned by the Road Module tool. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
		{ "ToolTip", "Per-edge road module classes assigned by the Road Module tool." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCustomRoadShapeSegment constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_SegmentType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SegmentType;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SidewalkWidth;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SidewalkZOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SidewalkMaterial;
	static void NewProp_bUseFlatSidewalk_SetBit(void* Obj)
	{
		((FCustomRoadShapeSegment*)Obj)->bUseFlatSidewalk = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFlatSidewalk;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RoadModuleClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoadModuleClasses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCustomRoadShapeSegment constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomRoadShapeSegment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FCustomRoadShapeSegment Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SegmentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_SegmentType = { "SegmentType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomRoadShapeSegment, SegmentType), Z_Construct_UEnum_RoadBLDRuntime_ECustomShapeSegmentType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentType_MetaData), NewProp_SegmentType_MetaData) }; // f4337baf5dcb78546620d958c85445abd7f467a8
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_SidewalkWidth = { "SidewalkWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomRoadShapeSegment, SidewalkWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SidewalkWidth_MetaData), NewProp_SidewalkWidth_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_SidewalkZOffset = { "SidewalkZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomRoadShapeSegment, SidewalkZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SidewalkZOffset_MetaData), NewProp_SidewalkZOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SidewalkMaterial = { "SidewalkMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomRoadShapeSegment, SidewalkMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SidewalkMaterial_MetaData), NewProp_SidewalkMaterial_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseFlatSidewalk = { "bUseFlatSidewalk", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FCustomRoadShapeSegment), &UHT_STATICS::NewProp_bUseFlatSidewalk_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFlatSidewalk_MetaData), NewProp_bUseFlatSidewalk_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_RoadModuleClasses_Inner = { "RoadModuleClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_URoadModuleObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RoadModuleClasses = { "RoadModuleClasses", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomRoadShapeSegment, RoadModuleClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadModuleClasses_MetaData), NewProp_RoadModuleClasses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SegmentType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SegmentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SidewalkWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SidewalkZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SidewalkMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseFlatSidewalk,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadModuleClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadModuleClasses,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FCustomRoadShapeSegment Property Definitions ************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"CustomRoadShapeSegment",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FCustomRoadShapeSegment>(),
	alignof(FCustomRoadShapeSegment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCustomRoadShapeSegment;
UScriptStruct* Z_Construct_UScriptStruct_FCustomRoadShapeSegment(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FCustomRoadShapeSegment.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FCustomRoadShapeSegment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomRoadShapeSegment, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("CustomRoadShapeSegment"));
		}
		return Z_Registration_Info_UScriptStruct_FCustomRoadShapeSegment.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FCustomRoadShapeSegment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCustomRoadShapeSegment.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCustomRoadShapeSegment.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FCustomRoadShapeSegment *********************************************

// ********** Begin ScriptStruct FCustomRoadShapeSegmentModuleList *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FCustomRoadShapeSegmentModuleList_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FCustomRoadShapeSegmentModuleList>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCustomRoadShapeSegmentModuleList); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/** Persisted per-edge module class list, parallel to polygon segments. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
		{ "ToolTip", "Persisted per-edge module class list, parallel to polygon segments." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleClasses_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCustomRoadShapeSegmentModuleList constinit property declarations *
	static const UECodeGen_Private::FClassPropertyParams NewProp_ModuleClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModuleClasses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCustomRoadShapeSegmentModuleList constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomRoadShapeSegmentModuleList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FCustomRoadShapeSegmentModuleList Property Definitions ************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ModuleClasses_Inner = { "ModuleClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_URoadModuleObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ModuleClasses = { "ModuleClasses", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomRoadShapeSegmentModuleList, ModuleClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleClasses_MetaData), NewProp_ModuleClasses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ModuleClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ModuleClasses,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FCustomRoadShapeSegmentModuleList Property Definitions **************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"CustomRoadShapeSegmentModuleList",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FCustomRoadShapeSegmentModuleList>(),
	alignof(FCustomRoadShapeSegmentModuleList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCustomRoadShapeSegmentModuleList;
UScriptStruct* Z_Construct_UScriptStruct_FCustomRoadShapeSegmentModuleList(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FCustomRoadShapeSegmentModuleList.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FCustomRoadShapeSegmentModuleList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomRoadShapeSegmentModuleList, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("CustomRoadShapeSegmentModuleList"));
		}
		return Z_Registration_Info_UScriptStruct_FCustomRoadShapeSegmentModuleList.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FCustomRoadShapeSegmentModuleList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCustomRoadShapeSegmentModuleList.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCustomRoadShapeSegmentModuleList.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FCustomRoadShapeSegmentModuleList ***********************************

// ********** Begin ScriptStruct FCustomRoadShapeDebugAttribute ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FCustomRoadShapeDebugAttribute_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FCustomRoadShapeDebugAttribute>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCustomRoadShapeDebugAttribute); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "RoadBLD|Custom Shape|Debug" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "RoadBLD|Custom Shape|Debug" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCustomRoadShapeDebugAttribute constinit property declarations ****
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCustomRoadShapeDebugAttribute constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomRoadShapeDebugAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FCustomRoadShapeDebugAttribute Property Definitions ***************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomRoadShapeDebugAttribute, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomRoadShapeDebugAttribute, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FCustomRoadShapeDebugAttribute Property Definitions *****************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"CustomRoadShapeDebugAttribute",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FCustomRoadShapeDebugAttribute>(),
	alignof(FCustomRoadShapeDebugAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCustomRoadShapeDebugAttribute;
UScriptStruct* Z_Construct_UScriptStruct_FCustomRoadShapeDebugAttribute(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FCustomRoadShapeDebugAttribute.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FCustomRoadShapeDebugAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomRoadShapeDebugAttribute, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("CustomRoadShapeDebugAttribute"));
		}
		return Z_Registration_Info_UScriptStruct_FCustomRoadShapeDebugAttribute.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FCustomRoadShapeDebugAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCustomRoadShapeDebugAttribute.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCustomRoadShapeDebugAttribute.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FCustomRoadShapeDebugAttribute **************************************

// ********** Begin ScriptStruct FCustomRoadShapeDebugVertex ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FCustomRoadShapeDebugVertex_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FCustomRoadShapeDebugVertex>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCustomRoadShapeDebugVertex); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "RoadBLD|Custom Shape|Debug" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartIndex_MetaData[] = {
		{ "Category", "RoadBLD|Custom Shape|Debug" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RingIndex_MetaData[] = {
		{ "Category", "RoadBLD|Custom Shape|Debug" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[] = {
		{ "Category", "RoadBLD|Custom Shape|Debug" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[] = {
		{ "Category", "RoadBLD|Custom Shape|Debug" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElevationMetres_MetaData[] = {
		{ "Category", "RoadBLD|Custom Shape|Debug" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZSource_MetaData[] = {
		{ "Category", "RoadBLD|Custom Shape|Debug" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[] = {
		{ "Category", "RoadBLD|Custom Shape|Debug" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCustomRoadShapeDebugVertex constinit property declarations *******
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PartIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RingIndex;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Longitude;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Latitude;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ElevationMetres;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ZSource;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCustomRoadShapeDebugVertex constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomRoadShapeDebugVertex>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FCustomRoadShapeDebugVertex Property Definitions ******************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomRoadShapeDebugVertex, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PartIndex = { "PartIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomRoadShapeDebugVertex, PartIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartIndex_MetaData), NewProp_PartIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_RingIndex = { "RingIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomRoadShapeDebugVertex, RingIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RingIndex_MetaData), NewProp_RingIndex_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomRoadShapeDebugVertex, Longitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Longitude_MetaData), NewProp_Longitude_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomRoadShapeDebugVertex, Latitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Latitude_MetaData), NewProp_Latitude_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ElevationMetres = { "ElevationMetres", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomRoadShapeDebugVertex, ElevationMetres), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElevationMetres_MetaData), NewProp_ElevationMetres_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ZSource = { "ZSource", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomRoadShapeDebugVertex, ZSource), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZSource_MetaData), NewProp_ZSource_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomRoadShapeDebugVertex, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldLocation_MetaData), NewProp_WorldLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PartIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RingIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Longitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Latitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ElevationMetres,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldLocation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FCustomRoadShapeDebugVertex Property Definitions ********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"CustomRoadShapeDebugVertex",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FCustomRoadShapeDebugVertex>(),
	alignof(FCustomRoadShapeDebugVertex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCustomRoadShapeDebugVertex;
UScriptStruct* Z_Construct_UScriptStruct_FCustomRoadShapeDebugVertex(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FCustomRoadShapeDebugVertex.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FCustomRoadShapeDebugVertex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomRoadShapeDebugVertex, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("CustomRoadShapeDebugVertex"));
		}
		return Z_Registration_Info_UScriptStruct_FCustomRoadShapeDebugVertex.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FCustomRoadShapeDebugVertex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCustomRoadShapeDebugVertex.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCustomRoadShapeDebugVertex.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FCustomRoadShapeDebugVertex *****************************************

// ********** Begin Class ACustomRoadShape *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ACustomRoadShape_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Data-only actor for an arbitrary 3D road-surface polygon.\n * Point data lives in the network store; baked geometry is spawned on a streamable ARoadGeo.\n */" },
		{ "IncludePath", "DynamicRoad/CustomRoadShape.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
		{ "ToolTip", "Data-only actor for an arbitrary 3D road-surface polygon.\nPoint data lives in the network store; baked geometry is spawned on a streamable ARoadGeo." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeID_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceMaterial_MetaData[] = {
		{ "Category", "RoadBLD|Custom Shape" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadModuleObjects_Inner_MetaData[] = {
		{ "Category", "RoadBLD|Custom Shape" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadModuleObjects_MetaData[] = {
		{ "Category", "RoadBLD|Custom Shape" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadModuleClasses_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "RoadBLD|Custom Shape" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicityCityId_MetaData[] = {
		{ "Category", "RoadBLD|Custom Shape|Debug" },
		{ "Comment", "/** Replicity Maps city id (e.g. us-ny-nyc) when this shape was imported from maps.replicity.ai. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
		{ "ToolTip", "Replicity Maps city id (e.g. us-ny-nyc) when this shape was imported from maps.replicity.ai." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicityLayer_MetaData[] = {
		{ "Category", "RoadBLD|Custom Shape|Debug" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicityFeatureId_MetaData[] = {
		{ "Category", "RoadBLD|Custom Shape|Debug" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicityProperties_MetaData[] = {
		{ "Category", "RoadBLD|Custom Shape|Debug" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicityVertices_MetaData[] = {
		{ "Category", "RoadBLD|Custom Shape|Debug" },
		{ "Comment", "/** Original Replicity vertices (pre-simplification), including elevation provenance. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
		{ "ToolTip", "Original Replicity vertices (pre-simplification), including elevation provenance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransientPolygonPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransientSegments_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentModuleAssignments_MetaData[] = {
		{ "Comment", "/** Persisted per-edge module classes (store records do not carry module assignments). */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/CustomRoadShape.h" },
		{ "ToolTip", "Persisted per-edge module classes (store records do not carry module assignments)." },
	};
#endif // WITH_METADATA

// ********** Begin Class ACustomRoadShape constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShapeID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SurfaceMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoadModuleObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoadModuleObjects;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RoadModuleClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoadModuleClasses;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReplicityCityId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReplicityLayer;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReplicityFeatureId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicityProperties_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReplicityProperties;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicityVertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReplicityVertices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransientPolygonPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TransientPolygonPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransientSegments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TransientSegments;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SegmentModuleAssignments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SegmentModuleAssignments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ACustomRoadShape constinit property declarations ***************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomRoadShape>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ACustomRoadShape Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ShapeID = { "ShapeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomRoadShape, ShapeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeID_MetaData), NewProp_ShapeID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SurfaceMaterial = { "SurfaceMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomRoadShape, SurfaceMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceMaterial_MetaData), NewProp_SurfaceMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoadModuleObjects_Inner = { "RoadModuleObjects", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_URoadModuleObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadModuleObjects_Inner_MetaData), NewProp_RoadModuleObjects_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RoadModuleObjects = { "RoadModuleObjects", nullptr, (EPropertyFlags)0x011400800000000d, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomRoadShape, RoadModuleObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadModuleObjects_MetaData), NewProp_RoadModuleObjects_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_RoadModuleClasses_Inner = { "RoadModuleClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_URoadModuleObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RoadModuleClasses = { "RoadModuleClasses", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomRoadShape, RoadModuleClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadModuleClasses_MetaData), NewProp_RoadModuleClasses_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReplicityCityId = { "ReplicityCityId", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomRoadShape, ReplicityCityId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicityCityId_MetaData), NewProp_ReplicityCityId_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_ReplicityLayer = { "ReplicityLayer", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomRoadShape, ReplicityLayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicityLayer_MetaData), NewProp_ReplicityLayer_MetaData) };
const UECodeGen_Private::FInt64PropertyParams UHT_STATICS::NewProp_ReplicityFeatureId = { "ReplicityFeatureId", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int64, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomRoadShape, ReplicityFeatureId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicityFeatureId_MetaData), NewProp_ReplicityFeatureId_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReplicityProperties_Inner = { "ReplicityProperties", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomRoadShapeDebugAttribute, METADATA_PARAMS(0, nullptr) }; // d208c51cba3a1e16c246064ba1c522724bcb8d9d
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReplicityProperties = { "ReplicityProperties", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomRoadShape, ReplicityProperties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicityProperties_MetaData), NewProp_ReplicityProperties_MetaData) }; // d208c51cba3a1e16c246064ba1c522724bcb8d9d
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReplicityVertices_Inner = { "ReplicityVertices", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomRoadShapeDebugVertex, METADATA_PARAMS(0, nullptr) }; // bb7d272dfc86fc57f72ef195e1d8c821a8b1df61
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReplicityVertices = { "ReplicityVertices", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomRoadShape, ReplicityVertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicityVertices_MetaData), NewProp_ReplicityVertices_MetaData) }; // bb7d272dfc86fc57f72ef195e1d8c821a8b1df61
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TransientPolygonPoints_Inner = { "TransientPolygonPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_TransientPolygonPoints = { "TransientPolygonPoints", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomRoadShape, TransientPolygonPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransientPolygonPoints_MetaData), NewProp_TransientPolygonPoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TransientSegments_Inner = { "TransientSegments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomRoadShapeSegment, METADATA_PARAMS(0, nullptr) }; // e37dd0fedbbb3175114cc350814bedcd614d3db1
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_TransientSegments = { "TransientSegments", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomRoadShape, TransientSegments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransientSegments_MetaData), NewProp_TransientSegments_MetaData) }; // e37dd0fedbbb3175114cc350814bedcd614d3db1
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SegmentModuleAssignments_Inner = { "SegmentModuleAssignments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCustomRoadShapeSegmentModuleList, METADATA_PARAMS(0, nullptr) }; // d26cdc0b2918261dc2e7e2c7a57984bf4e8ae75f
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SegmentModuleAssignments = { "SegmentModuleAssignments", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ACustomRoadShape, SegmentModuleAssignments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentModuleAssignments_MetaData), NewProp_SegmentModuleAssignments_MetaData) }; // d26cdc0b2918261dc2e7e2c7a57984bf4e8ae75f
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShapeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SurfaceMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadModuleObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadModuleObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadModuleClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadModuleClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReplicityCityId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReplicityLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReplicityFeatureId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReplicityProperties_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReplicityProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReplicityVertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReplicityVertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TransientPolygonPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TransientPolygonPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TransientSegments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TransientSegments,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SegmentModuleAssignments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SegmentModuleAssignments,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ACustomRoadShape Property Definitions **************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ACustomRoadShape,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_ACustomRoadShape;
UClass* Z_Construct_UClass_ACustomRoadShape(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ACustomRoadShape;
		if (!Z_Registration_Info_UClass_ACustomRoadShape.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CustomRoadShape"),
				Z_Registration_Info_UClass_ACustomRoadShape.InnerSingleton,
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
		return Z_Registration_Info_UClass_ACustomRoadShape.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ACustomRoadShape.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACustomRoadShape.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ACustomRoadShape.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ACustomRoadShape);
ACustomRoadShape::~ACustomRoadShape() {}
// ********** End Class ACustomRoadShape ***********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_CustomRoadShape_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RoadBLDRuntime_ECustomShapeSegmentType, TEXT("ECustomShapeSegmentType"), &ZRIE_ECustomShapeSegmentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4097014703U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FCustomRoadShapeSegment, Z_Construct_UScriptStruct_FCustomRoadShapeSegment_Statics::NewStructOps, TEXT("CustomRoadShapeSegment"),&Z_Registration_Info_UScriptStruct_FCustomRoadShapeSegment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomRoadShapeSegment), 3816673534U) },
		{ Z_Construct_UScriptStruct_FCustomRoadShapeSegmentModuleList, Z_Construct_UScriptStruct_FCustomRoadShapeSegmentModuleList_Statics::NewStructOps, TEXT("CustomRoadShapeSegmentModuleList"),&Z_Registration_Info_UScriptStruct_FCustomRoadShapeSegmentModuleList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomRoadShapeSegmentModuleList), 3530349579U) },
		{ Z_Construct_UScriptStruct_FCustomRoadShapeDebugAttribute, Z_Construct_UScriptStruct_FCustomRoadShapeDebugAttribute_Statics::NewStructOps, TEXT("CustomRoadShapeDebugAttribute"),&Z_Registration_Info_UScriptStruct_FCustomRoadShapeDebugAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomRoadShapeDebugAttribute), 3523790108U) },
		{ Z_Construct_UScriptStruct_FCustomRoadShapeDebugVertex, Z_Construct_UScriptStruct_FCustomRoadShapeDebugVertex_Statics::NewStructOps, TEXT("CustomRoadShapeDebugVertex"),&Z_Registration_Info_UScriptStruct_FCustomRoadShapeDebugVertex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomRoadShapeDebugVertex), 3145541421U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACustomRoadShape, TEXT("ACustomRoadShape"), &Z_Registration_Info_UClass_ACustomRoadShape, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACustomRoadShape), 3363898024U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_CustomRoadShape_h__Script_RoadBLDRuntime_d2ec3d2201f855f43e0829d2342676b317d509f5{
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
