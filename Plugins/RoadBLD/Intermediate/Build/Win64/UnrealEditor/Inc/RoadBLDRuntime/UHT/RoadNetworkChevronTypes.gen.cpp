// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicRoad/Store/RoadNetworkChevronTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRoadNetworkChevronTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChevronBoundaryAttachment(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_EChevronAuthoringMode(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EChevronAuthoringMode *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDRuntime_EChevronAuthoringMode_Statics
template<> ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EChevronAuthoringMode>()
{
	return Z_Construct_UEnum_RoadBLDRuntime_EChevronAuthoringMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/** Corner chevrons reconstruct wedge geometry; Freehand chevrons store edge attachments. */" },
		{ "Corner.Name", "EChevronAuthoringMode::Corner" },
		{ "Freehand.Name", "EChevronAuthoringMode::Freehand" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Store/RoadNetworkChevronTypes.h" },
		{ "ToolTip", "Corner chevrons reconstruct wedge geometry; Freehand chevrons store edge attachments." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChevronAuthoringMode::Corner", (int64)EChevronAuthoringMode::Corner },
		{ "EChevronAuthoringMode::Freehand", (int64)EChevronAuthoringMode::Freehand },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	"EChevronAuthoringMode",
	"EChevronAuthoringMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EChevronAuthoringMode;
UEnum* Z_Construct_UEnum_RoadBLDRuntime_EChevronAuthoringMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EChevronAuthoringMode.OuterSingleton)
		{
			ZRIE_EChevronAuthoringMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDRuntime_EChevronAuthoringMode, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("EChevronAuthoringMode"));
		}
		return ZRIE_EChevronAuthoringMode.OuterSingleton;
	}
	if (!ZRIE_EChevronAuthoringMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EChevronAuthoringMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EChevronAuthoringMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EChevronAuthoringMode *******************************************************

// ********** Begin ScriptStruct FChevronBoundaryAttachment ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FChevronBoundaryAttachment_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FChevronBoundaryAttachment>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FChevronBoundaryAttachment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * One freehand chevron boundary vertex attached to a stable EdgeCurve.\n * LocationAlongEdge is the last resolved world position used as the seed for\n * nearest-point reprojection when roads are rebuilt.\n */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Store/RoadNetworkChevronTypes.h" },
		{ "ToolTip", "One freehand chevron boundary vertex attached to a stable EdgeCurve.\nLocationAlongEdge is the last resolved world position used as the seed for\nnearest-point reprojection when roads are rebuilt." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceRoadID_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/Store/RoadNetworkChevronTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeCurveID_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/Store/RoadNetworkChevronTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationAlongEdge_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/Store/RoadNetworkChevronTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FChevronBoundaryAttachment constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceRoadID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeCurveID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationAlongEdge;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FChevronBoundaryAttachment constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChevronBoundaryAttachment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FChevronBoundaryAttachment Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SourceRoadID = { "SourceRoadID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FChevronBoundaryAttachment, SourceRoadID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceRoadID_MetaData), NewProp_SourceRoadID_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EdgeCurveID = { "EdgeCurveID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FChevronBoundaryAttachment, EdgeCurveID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeCurveID_MetaData), NewProp_EdgeCurveID_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LocationAlongEdge = { "LocationAlongEdge", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FChevronBoundaryAttachment, LocationAlongEdge), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationAlongEdge_MetaData), NewProp_LocationAlongEdge_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceRoadID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeCurveID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LocationAlongEdge,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FChevronBoundaryAttachment Property Definitions *********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"ChevronBoundaryAttachment",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FChevronBoundaryAttachment>(),
	alignof(FChevronBoundaryAttachment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FChevronBoundaryAttachment;
UScriptStruct* Z_Construct_UScriptStruct_FChevronBoundaryAttachment(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FChevronBoundaryAttachment.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FChevronBoundaryAttachment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChevronBoundaryAttachment, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("ChevronBoundaryAttachment"));
		}
		return Z_Registration_Info_UScriptStruct_FChevronBoundaryAttachment.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FChevronBoundaryAttachment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FChevronBoundaryAttachment.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FChevronBoundaryAttachment.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FChevronBoundaryAttachment ******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_Store_RoadNetworkChevronTypes_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RoadBLDRuntime_EChevronAuthoringMode, TEXT("EChevronAuthoringMode"), &ZRIE_EChevronAuthoringMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1658124590U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FChevronBoundaryAttachment, Z_Construct_UScriptStruct_FChevronBoundaryAttachment_Statics::NewStructOps, TEXT("ChevronBoundaryAttachment"),&Z_Registration_Info_UScriptStruct_FChevronBoundaryAttachment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChevronBoundaryAttachment), 1077209270U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_Store_RoadNetworkChevronTypes_h__Script_RoadBLDRuntime_bd885aa6af773949ffaf54a6430053a0444c7841{
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
