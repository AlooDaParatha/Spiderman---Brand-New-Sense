// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialHashGrid.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeSpatialHashGrid() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialHashGrid(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FSpatialHashGrid **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FSpatialHashGrid_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FSpatialHashGrid>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSpatialHashGrid); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpatialHashGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridCellSize_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/SpatialHashGrid.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSpatialHashGrid constinit property declarations ******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GridCellSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSpatialHashGrid constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpatialHashGrid>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FSpatialHashGrid Property Definitions *****************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GridCellSize = { "GridCellSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FSpatialHashGrid, GridCellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridCellSize_MetaData), NewProp_GridCellSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GridCellSize,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FSpatialHashGrid Property Definitions *******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"SpatialHashGrid",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FSpatialHashGrid>(),
	alignof(FSpatialHashGrid),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSpatialHashGrid;
UScriptStruct* Z_Construct_UScriptStruct_FSpatialHashGrid(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FSpatialHashGrid.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FSpatialHashGrid.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpatialHashGrid, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("SpatialHashGrid"));
		}
		return Z_Registration_Info_UScriptStruct_FSpatialHashGrid.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FSpatialHashGrid.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSpatialHashGrid.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSpatialHashGrid.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FSpatialHashGrid ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_SpatialHashGrid_h__Script_TwinBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FSpatialHashGrid, Z_Construct_UScriptStruct_FSpatialHashGrid_Statics::NewStructOps, TEXT("SpatialHashGrid"),&Z_Registration_Info_UScriptStruct_FSpatialHashGrid, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpatialHashGrid), 1892253185U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_SpatialHashGrid_h__Script_TwinBLDEditor_b8717b23e1177e1c6d9a1e3c6938154cabaf7d98{
	TEXT("/Script/TwinBLDEditor"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
