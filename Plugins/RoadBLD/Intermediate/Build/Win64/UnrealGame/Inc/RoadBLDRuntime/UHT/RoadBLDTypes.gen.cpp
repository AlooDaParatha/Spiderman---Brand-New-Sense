// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoadBLDTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRoadBLDTypes() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_ERoadModulePosition(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadEndpointLink(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadSnap(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnModuleDesc(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoad(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ERoadModulePosition *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDRuntime_ERoadModulePosition_Statics
template<> ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ERoadModulePosition>()
{
	return Z_Construct_UEnum_RoadBLDRuntime_ERoadModulePosition(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Center.Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "Center.Name", "ERoadModulePosition::Center" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "Left.Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "Left.Name", "ERoadModulePosition::Left" },
		{ "ModuleRelativePath", "Public/RoadBLDTypes.h" },
		{ "Right.Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "Right.Name", "ERoadModulePosition::Right" },
		{ "SidewalkLeft.Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "SidewalkLeft.Name", "ERoadModulePosition::SidewalkLeft" },
		{ "SidewalkRight.Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "SidewalkRight.Name", "ERoadModulePosition::SidewalkRight" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERoadModulePosition::Left", (int64)ERoadModulePosition::Left },
		{ "ERoadModulePosition::Right", (int64)ERoadModulePosition::Right },
		{ "ERoadModulePosition::Center", (int64)ERoadModulePosition::Center },
		{ "ERoadModulePosition::SidewalkLeft", (int64)ERoadModulePosition::SidewalkLeft },
		{ "ERoadModulePosition::SidewalkRight", (int64)ERoadModulePosition::SidewalkRight },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	"ERoadModulePosition",
	"ERoadModulePosition",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERoadModulePosition;
UEnum* Z_Construct_UEnum_RoadBLDRuntime_ERoadModulePosition(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERoadModulePosition.OuterSingleton)
		{
			ZRIE_ERoadModulePosition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDRuntime_ERoadModulePosition, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("ERoadModulePosition"));
		}
		return ZRIE_ERoadModulePosition.OuterSingleton;
	}
	if (!ZRIE_ERoadModulePosition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERoadModulePosition.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERoadModulePosition.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERoadModulePosition *********************************************************

// ********** Begin ScriptStruct FSpawnModuleDesc **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FSpawnModuleDesc_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FSpawnModuleDesc>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSpawnModuleDesc); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RoadBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecificEdgeIds_MetaData[] = {
		{ "Category", "Roads" },
		{ "ModuleRelativePath", "Public/RoadBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemovedEdgeIds_MetaData[] = {
		{ "Category", "Roads" },
		{ "ModuleRelativePath", "Public/RoadBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Roads" },
		{ "ModuleRelativePath", "Public/RoadBLDTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSpawnModuleDesc constinit property declarations ******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpecificEdgeIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpecificEdgeIds;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RemovedEdgeIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RemovedEdgeIds;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Position_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSpawnModuleDesc constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnModuleDesc>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FSpawnModuleDesc Property Definitions *****************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_SpecificEdgeIds_Inner = { "SpecificEdgeIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SpecificEdgeIds = { "SpecificEdgeIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnModuleDesc, SpecificEdgeIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecificEdgeIds_MetaData), NewProp_SpecificEdgeIds_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_RemovedEdgeIds_Inner = { "RemovedEdgeIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RemovedEdgeIds = { "RemovedEdgeIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnModuleDesc, RemovedEdgeIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemovedEdgeIds_MetaData), NewProp_RemovedEdgeIds_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Position_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnModuleDesc, Position), Z_Construct_UEnum_RoadBLDRuntime_ERoadModulePosition, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) }; // 46a5dd039144740d887a61f0d80e56230e219841
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpecificEdgeIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpecificEdgeIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RemovedEdgeIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RemovedEdgeIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Position_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FSpawnModuleDesc Property Definitions *******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"SpawnModuleDesc",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FSpawnModuleDesc>(),
	alignof(FSpawnModuleDesc),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSpawnModuleDesc;
UScriptStruct* Z_Construct_UScriptStruct_FSpawnModuleDesc(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FSpawnModuleDesc.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FSpawnModuleDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnModuleDesc, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("SpawnModuleDesc"));
		}
		return Z_Registration_Info_UScriptStruct_FSpawnModuleDesc.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FSpawnModuleDesc.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSpawnModuleDesc.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSpawnModuleDesc.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FSpawnModuleDesc ****************************************************

// ********** Begin ScriptStruct FRoadSnap *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRoadSnap_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRoadSnap>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRoadSnap); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RoadBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnappedRoad_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoadBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Endpoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/RoadBLDTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRoadSnap constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SnappedRoad;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Endpoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRoadSnap constinit property declarations ***************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadSnap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRoadSnap Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SnappedRoad = { "SnappedRoad", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadSnap, SnappedRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnappedRoad_MetaData), NewProp_SnappedRoad_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Endpoint = { "Endpoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadSnap, Endpoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Endpoint_MetaData), NewProp_Endpoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SnappedRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Endpoint,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRoadSnap Property Definitions **************************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"RoadSnap",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRoadSnap>(),
	alignof(FRoadSnap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRoadSnap;
UScriptStruct* Z_Construct_UScriptStruct_FRoadSnap(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRoadSnap.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRoadSnap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadSnap, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("RoadSnap"));
		}
		return Z_Registration_Info_UScriptStruct_FRoadSnap.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRoadSnap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRoadSnap.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRoadSnap.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRoadSnap ***********************************************************

// ********** Begin ScriptStruct FRoadEndpointLink *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRoadEndpointLink_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRoadEndpointLink>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRoadEndpointLink); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RoadBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkedRoad_MetaData[] = {
		{ "Category", "Roads" },
		{ "ModuleRelativePath", "Public/RoadBLDTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLinkedToFirstPoint_MetaData[] = {
		{ "Category", "Roads" },
		{ "Comment", "// Which end of the linked road: true = first point (index 0), false = last point.\n" },
		{ "ModuleRelativePath", "Public/RoadBLDTypes.h" },
		{ "ToolTip", "Which end of the linked road: true = first point (index 0), false = last point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightAxisOffset_MetaData[] = {
		{ "Category", "Roads" },
		{ "Comment", "// Signed lateral offset from the linked road's ControlSpline endpoint,\n// measured along its right axis (positive = right, negative = left).\n" },
		{ "ModuleRelativePath", "Public/RoadBLDTypes.h" },
		{ "ToolTip", "Signed lateral offset from the linked road's ControlSpline endpoint,\nmeasured along its right axis (positive = right, negative = left)." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRoadEndpointLink constinit property declarations *****************
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LinkedRoad;
	static void NewProp_bLinkedToFirstPoint_SetBit(void* Obj)
	{
		((FRoadEndpointLink*)Obj)->bLinkedToFirstPoint = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinkedToFirstPoint;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_RightAxisOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRoadEndpointLink constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadEndpointLink>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRoadEndpointLink Property Definitions ****************************
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_LinkedRoad = { "LinkedRoad", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadEndpointLink, LinkedRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkedRoad_MetaData), NewProp_LinkedRoad_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bLinkedToFirstPoint = { "bLinkedToFirstPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadEndpointLink), &UHT_STATICS::NewProp_bLinkedToFirstPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLinkedToFirstPoint_MetaData), NewProp_bLinkedToFirstPoint_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_RightAxisOffset = { "RightAxisOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadEndpointLink, RightAxisOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightAxisOffset_MetaData), NewProp_RightAxisOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LinkedRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bLinkedToFirstPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RightAxisOffset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRoadEndpointLink Property Definitions ******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"RoadEndpointLink",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRoadEndpointLink>(),
	alignof(FRoadEndpointLink),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRoadEndpointLink;
UScriptStruct* Z_Construct_UScriptStruct_FRoadEndpointLink(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRoadEndpointLink.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRoadEndpointLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadEndpointLink, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("RoadEndpointLink"));
		}
		return Z_Registration_Info_UScriptStruct_FRoadEndpointLink.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRoadEndpointLink.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRoadEndpointLink.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRoadEndpointLink.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRoadEndpointLink ***************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadBLDTypes_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RoadBLDRuntime_ERoadModulePosition, TEXT("ERoadModulePosition"), &ZRIE_ERoadModulePosition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1185275139U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FSpawnModuleDesc, Z_Construct_UScriptStruct_FSpawnModuleDesc_Statics::NewStructOps, TEXT("SpawnModuleDesc"),&Z_Registration_Info_UScriptStruct_FSpawnModuleDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnModuleDesc), 3429606223U) },
		{ Z_Construct_UScriptStruct_FRoadSnap, Z_Construct_UScriptStruct_FRoadSnap_Statics::NewStructOps, TEXT("RoadSnap"),&Z_Registration_Info_UScriptStruct_FRoadSnap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadSnap), 935917487U) },
		{ Z_Construct_UScriptStruct_FRoadEndpointLink, Z_Construct_UScriptStruct_FRoadEndpointLink_Statics::NewStructOps, TEXT("RoadEndpointLink"),&Z_Registration_Info_UScriptStruct_FRoadEndpointLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadEndpointLink), 1707623027U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadBLDTypes_h__Script_RoadBLDRuntime_0bb37674553503eccf4d6f8ef5fe6da4efcd9721{
	TEXT("/Script/RoadBLDRuntime"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
