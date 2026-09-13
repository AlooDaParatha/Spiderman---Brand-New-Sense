// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CityKitStyles/RoadSupportData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRoadSupportData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadSupportData(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FRoadSupportData **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRoadSupportData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRoadSupportData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRoadSupportData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Compatibility shim retained for legacy ModularKitRoad style assets/binaries.\n" },
		{ "ModuleRelativePath", "Public/CityKitStyles/RoadSupportData.h" },
		{ "ToolTip", "Compatibility shim retained for legacy ModularKitRoad style assets/binaries." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SupportMeshes_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/CityKitStyles/RoadSupportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceBetweenSupportMeshes_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/CityKitStyles/RoadSupportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvoidRoadOverlap_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/CityKitStyles/RoadSupportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshZOffset_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/CityKitStyles/RoadSupportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/CityKitStyles/RoadSupportData.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRoadSupportData constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SupportMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportMeshes;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DistanceBetweenSupportMeshes;
	static void NewProp_AvoidRoadOverlap_SetBit(void* Obj)
	{
		((FRoadSupportData*)Obj)->AvoidRoadOverlap = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AvoidRoadOverlap;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MeshZOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRoadSupportData constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadSupportData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRoadSupportData Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SupportMeshes_Inner = { "SupportMeshes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SupportMeshes = { "SupportMeshes", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadSupportData, SupportMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SupportMeshes_MetaData), NewProp_SupportMeshes_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_DistanceBetweenSupportMeshes = { "DistanceBetweenSupportMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadSupportData, DistanceBetweenSupportMeshes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceBetweenSupportMeshes_MetaData), NewProp_DistanceBetweenSupportMeshes_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_AvoidRoadOverlap = { "AvoidRoadOverlap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadSupportData), &UHT_STATICS::NewProp_AvoidRoadOverlap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvoidRoadOverlap_MetaData), NewProp_AvoidRoadOverlap_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_MeshZOffset = { "MeshZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadSupportData, MeshZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshZOffset_MetaData), NewProp_MeshZOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadSupportData, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SupportMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SupportMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DistanceBetweenSupportMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AvoidRoadOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MeshZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RotationOffset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRoadSupportData Property Definitions *******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"RoadSupportData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRoadSupportData>(),
	alignof(FRoadSupportData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRoadSupportData;
UScriptStruct* Z_Construct_UScriptStruct_FRoadSupportData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRoadSupportData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRoadSupportData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadSupportData, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("RoadSupportData"));
		}
		return Z_Registration_Info_UScriptStruct_FRoadSupportData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRoadSupportData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRoadSupportData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRoadSupportData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRoadSupportData ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_CityKitStyles_RoadSupportData_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FRoadSupportData, Z_Construct_UScriptStruct_FRoadSupportData_Statics::NewStructOps, TEXT("RoadSupportData"),&Z_Registration_Info_UScriptStruct_FRoadSupportData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadSupportData), 3098039583U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_CityKitStyles_RoadSupportData_h__Script_RoadBLDRuntime_c247b55a0a2f5f1e3acd95f7bbd1d72301bd0f00{
	TEXT("/Script/RoadBLDRuntime"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
