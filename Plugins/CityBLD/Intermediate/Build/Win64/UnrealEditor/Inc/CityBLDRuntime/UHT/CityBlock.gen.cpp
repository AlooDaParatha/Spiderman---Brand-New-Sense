// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CityBlock.h"
#include "CityBLDTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeCityBlock() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDRuntime(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_ACityBlock(ETypeConstructPhase);
CITYBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FOffsetSubdivisionParams(ETypeConstructPhase);
CITYBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FParcelActorEntry(ETypeConstructPhase);
CITYBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRecursiveSubdivisionParams(ETypeConstructPhase);
CITYBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletonSubdivisionParams(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UCityBLDSplineComponent(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_ACityBlock(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_ACityBlockGeo(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UCityParcel(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UDistrict(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_USidewalkPreset(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class ACityBlock Function AssignLandUsesToParcels ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ACityBlock_AssignLandUsesToParcels_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "CityBLD|Block|Subdivision" },
		{ "Comment", "/**\n\x09 * Assigns land uses to all parcels based on the District's weighted land use maps.\n\x09 * Uses weighted random selection from LandUses TMap for regular parcels,\n\x09 * and CourtyardLandUse TMap for courtyard parcels (if applicable).\n\x09 * \n\x09 * Requires a valid District asset to be assigned. Does nothing if District is null\n\x09 * or if there are no parcels.\n\x09 */" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "Assigns land uses to all parcels based on the District's weighted land use maps.\nUses weighted random selection from LandUses TMap for regular parcels,\nand CourtyardLandUse TMap for courtyard parcels (if applicable).\n\nRequires a valid District asset to be assigned. Does nothing if District is null\nor if there are no parcels." },
	};
#endif // WITH_METADATA

// ********** Begin Function AssignLandUsesToParcels constinit property declarations ***************
// ********** End Function AssignLandUsesToParcels constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ACityBlock, nullptr, "AssignLandUsesToParcels", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ACityBlock_AssignLandUsesToParcels(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ACityBlock::execAssignLandUsesToParcels)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AssignLandUsesToParcels();
	P_NATIVE_END;
}
// ********** End Class ACityBlock Function AssignLandUsesToParcels ********************************

// ********** Begin Class ACityBlock Function BuildMesh ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ACityBlock_BuildMesh_Statics
struct UHT_STATICS
{
	struct CityBlock_eventBuildMesh_Parms
	{
		UMaterialInterface* Material;
		ACityBlockGeo* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "CityBLD|Block|Mesh" },
		{ "Comment", "/**\n\x09 * Generates mesh geometry for this city block by spawning an ACityBlockGeo actor\n\x09 * and filling the InnerLoop spline with a Delaunay triangulated polygon.\n\x09 * \n\x09 * @param Material - Optional material to apply to the generated mesh\n\x09 * @return The spawned ACityBlockGeo actor, or nullptr if generation failed\n\x09 */" },
		{ "CPP_Default_Material", "None" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "Generates mesh geometry for this city block by spawning an ACityBlockGeo actor\nand filling the InnerLoop spline with a Delaunay triangulated polygon.\n\n@param Material - Optional material to apply to the generated mesh\n@return The spawned ACityBlockGeo actor, or nullptr if generation failed" },
	};
#endif // WITH_METADATA

// ********** Begin Function BuildMesh constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BuildMesh constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BuildMesh Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(CityBlock_eventBuildMesh_Parms, Material), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(CityBlock_eventBuildMesh_Parms, ReturnValue), Z_Construct_UClass_ACityBlockGeo, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function BuildMesh Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ACityBlock, nullptr, "BuildMesh", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CityBlock_eventBuildMesh_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CityBlock_eventBuildMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACityBlock_BuildMesh(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ACityBlock::execBuildMesh)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACityBlockGeo**)Z_Param__Result=P_THIS->BuildMesh(Z_Param_Material);
	P_NATIVE_END;
}
// ********** End Class ACityBlock Function BuildMesh **********************************************

// ********** Begin Class ACityBlock Function DestroyCityBlockGeo **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ACityBlock_DestroyCityBlockGeo_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|Block" },
		{ "Comment", "/**\n\x09 * Destroy the registered CityBlockGeo actor and clear the reference.\n\x09 * Safe to call even if actor is streamed out or already destroyed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "Destroy the registered CityBlockGeo actor and clear the reference.\nSafe to call even if actor is streamed out or already destroyed." },
	};
#endif // WITH_METADATA

// ********** Begin Function DestroyCityBlockGeo constinit property declarations *******************
// ********** End Function DestroyCityBlockGeo constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ACityBlock, nullptr, "DestroyCityBlockGeo", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ACityBlock_DestroyCityBlockGeo(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ACityBlock::execDestroyCityBlockGeo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyCityBlockGeo();
	P_NATIVE_END;
}
// ********** End Class ACityBlock Function DestroyCityBlockGeo ************************************

// ********** Begin Class ACityBlock Function EnforceLinearSplinePoints ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ACityBlock_EnforceLinearSplinePoints_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|Block" },
		{ "Comment", "/**\n\x09 * Ensures all spline points on both loops are set to Linear interpolation type.\n\x09 * Called automatically after any spline modification.\n\x09 */" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "Ensures all spline points on both loops are set to Linear interpolation type.\nCalled automatically after any spline modification." },
	};
#endif // WITH_METADATA

// ********** Begin Function EnforceLinearSplinePoints constinit property declarations *************
// ********** End Function EnforceLinearSplinePoints constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ACityBlock, nullptr, "EnforceLinearSplinePoints", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ACityBlock_EnforceLinearSplinePoints(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ACityBlock::execEnforceLinearSplinePoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnforceLinearSplinePoints();
	P_NATIVE_END;
}
// ********** End Class ACityBlock Function EnforceLinearSplinePoints ******************************

// ********** Begin Class ACityBlock Function EnsureCounterClockwiseOrder **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ACityBlock_EnsureCounterClockwiseOrder_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|Block" },
		{ "Comment", "/**\n\x09 * Ensures the OuterLoop spline points are in counter-clockwise order when viewed from above.\n\x09 * This provides predictable geometry generation with consistent winding order.\n\x09 * Called automatically after spline modifications.\n\x09 */" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "Ensures the OuterLoop spline points are in counter-clockwise order when viewed from above.\nThis provides predictable geometry generation with consistent winding order.\nCalled automatically after spline modifications." },
	};
#endif // WITH_METADATA

// ********** Begin Function EnsureCounterClockwiseOrder constinit property declarations ***********
// ********** End Function EnsureCounterClockwiseOrder constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ACityBlock, nullptr, "EnsureCounterClockwiseOrder", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ACityBlock_EnsureCounterClockwiseOrder(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ACityBlock::execEnsureCounterClockwiseOrder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnsureCounterClockwiseOrder();
	P_NATIVE_END;
}
// ********** End Class ACityBlock Function EnsureCounterClockwiseOrder ****************************

// ********** Begin Class ACityBlock Function Generate *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ACityBlock_Generate_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "CityBLD|Block" },
		{ "Comment", "/**\n\x09 * Orchestrates the full city block generation pipeline.\n\x09 * \n\x09 * This method performs the following steps in order:\n\x09 * 1. Clears any existing CityBlockGeo actor\n\x09 * 2. Spawns a new ACityBlockGeo actor via BuildMesh()\n\x09 * 3. Generates parcels using the appropriate subdivision method based on District settings\n\x09 * 4. Assigns land uses to all parcels\n\x09 * 5. Calls GenerateParcel() on each parcel to spawn content\n\x09 * \n\x09 * Requires a valid District asset to be assigned. Does nothing if District is null.\n\x09 */" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "Orchestrates the full city block generation pipeline.\n\nThis method performs the following steps in order:\n1. Clears any existing CityBlockGeo actor\n2. Spawns a new ACityBlockGeo actor via BuildMesh()\n3. Generates parcels using the appropriate subdivision method based on District settings\n4. Assigns land uses to all parcels\n5. Calls GenerateParcel() on each parcel to spawn content\n\nRequires a valid District asset to be assigned. Does nothing if District is null." },
	};
#endif // WITH_METADATA

// ********** Begin Function Generate constinit property declarations ******************************
// ********** End Function Generate constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ACityBlock, nullptr, "Generate", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ACityBlock_Generate(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ACityBlock::execGenerate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Generate();
	P_NATIVE_END;
}
// ********** End Class ACityBlock Function Generate ***********************************************

// ********** Begin Class ACityBlock Function GenerateParcelsOffset ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ACityBlock_GenerateParcelsOffset_Statics
struct UHT_STATICS
{
	struct CityBlock_eventGenerateParcelsOffset_Parms
	{
		FOffsetSubdivisionParams Params;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "CityBLD|Block|Subdivision" },
		{ "Comment", "/**\n\x09 * Generates parcels using the offset subdivision method.\n\x09 * Creates an inset loop from InnerLoop and subdivides the space between them into rectangular parcels.\n\x09 * \n\x09 * @param Params - Parameters controlling offset amount, parcel width, and irregularity\n\x09 */" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "Generates parcels using the offset subdivision method.\nCreates an inset loop from InnerLoop and subdivides the space between them into rectangular parcels.\n\n@param Params - Parameters controlling offset amount, parcel width, and irregularity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateParcelsOffset constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateParcelsOffset constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateParcelsOffset Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(CityBlock_eventGenerateParcelsOffset_Parms, Params), Z_Construct_UScriptStruct_FOffsetSubdivisionParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // f19ec290faa492633cacbe2d7d808aa30a1dbe81
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Params,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GenerateParcelsOffset Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ACityBlock, nullptr, "GenerateParcelsOffset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CityBlock_eventGenerateParcelsOffset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CityBlock_eventGenerateParcelsOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACityBlock_GenerateParcelsOffset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ACityBlock::execGenerateParcelsOffset)
{
	P_GET_STRUCT_REF(FOffsetSubdivisionParams,Z_Param_Out_Params);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateParcelsOffset(Z_Param_Out_Params);
	P_NATIVE_END;
}
// ********** End Class ACityBlock Function GenerateParcelsOffset **********************************

// ********** Begin Class ACityBlock Function GenerateParcelsRecursive *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ACityBlock_GenerateParcelsRecursive_Statics
struct UHT_STATICS
{
	struct CityBlock_eventGenerateParcelsRecursive_Parms
	{
		FRecursiveSubdivisionParams Params;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "CityBLD|Block|Subdivision" },
		{ "Comment", "/**\n\x09 * Generates parcels using recursive subdivision method.\n\x09 */" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "Generates parcels using recursive subdivision method." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateParcelsRecursive constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateParcelsRecursive constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateParcelsRecursive Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(CityBlock_eventGenerateParcelsRecursive_Parms, Params), Z_Construct_UScriptStruct_FRecursiveSubdivisionParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 4e0cbad2446c86ea74d3a4e9718db819b199f5df
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Params,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GenerateParcelsRecursive Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ACityBlock, nullptr, "GenerateParcelsRecursive", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CityBlock_eventGenerateParcelsRecursive_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CityBlock_eventGenerateParcelsRecursive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACityBlock_GenerateParcelsRecursive(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ACityBlock::execGenerateParcelsRecursive)
{
	P_GET_STRUCT_REF(FRecursiveSubdivisionParams,Z_Param_Out_Params);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateParcelsRecursive(Z_Param_Out_Params);
	P_NATIVE_END;
}
// ********** End Class ACityBlock Function GenerateParcelsRecursive *******************************

// ********** Begin Class ACityBlock Function GenerateParcelsSkeleton ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ACityBlock_GenerateParcelsSkeleton_Statics
struct UHT_STATICS
{
	struct CityBlock_eventGenerateParcelsSkeleton_Parms
	{
		FSkeletonSubdivisionParams Params;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "CityBLD|Block|Subdivision" },
		{ "Comment", "/**\n\x09 * Generates parcels using skeleton-based subdivision method.\n\x09 */" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "Generates parcels using skeleton-based subdivision method." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateParcelsSkeleton constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateParcelsSkeleton constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateParcelsSkeleton Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(CityBlock_eventGenerateParcelsSkeleton_Parms, Params), Z_Construct_UScriptStruct_FSkeletonSubdivisionParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 55f9cb32cb819b139ec68758754bcf28626e891c
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Params,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GenerateParcelsSkeleton Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ACityBlock, nullptr, "GenerateParcelsSkeleton", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CityBlock_eventGenerateParcelsSkeleton_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CityBlock_eventGenerateParcelsSkeleton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACityBlock_GenerateParcelsSkeleton(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ACityBlock::execGenerateParcelsSkeleton)
{
	P_GET_STRUCT_REF(FSkeletonSubdivisionParams,Z_Param_Out_Params);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateParcelsSkeleton(Z_Param_Out_Params);
	P_NATIVE_END;
}
// ********** End Class ACityBlock Function GenerateParcelsSkeleton ********************************

// ********** Begin Class ACityBlock Function GetCityBlockGeo **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ACityBlock_GetCityBlockGeo_Statics
struct UHT_STATICS
{
	struct CityBlock_eventGetCityBlockGeo_Parms
	{
		ACityBlockGeo* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|Block" },
		{ "Comment", "/**\n\x09 * Get the currently registered CityBlockGeo actor if loaded.\n\x09 * @return The CityBlockGeo actor, or nullptr if not registered or streamed out\n\x09 */" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "Get the currently registered CityBlockGeo actor if loaded.\n@return The CityBlockGeo actor, or nullptr if not registered or streamed out" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCityBlockGeo constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCityBlockGeo constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCityBlockGeo Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(CityBlock_eventGetCityBlockGeo_Parms, ReturnValue), Z_Construct_UClass_ACityBlockGeo, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCityBlockGeo Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ACityBlock, nullptr, "GetCityBlockGeo", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CityBlock_eventGetCityBlockGeo_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CityBlock_eventGetCityBlockGeo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACityBlock_GetCityBlockGeo(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ACityBlock::execGetCityBlockGeo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACityBlockGeo**)Z_Param__Result=P_THIS->GetCityBlockGeo();
	P_NATIVE_END;
}
// ********** End Class ACityBlock Function GetCityBlockGeo ****************************************

// ********** Begin Class ACityBlock Function HasCityBlockGeo **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ACityBlock_HasCityBlockGeo_Statics
struct UHT_STATICS
{
	struct CityBlock_eventHasCityBlockGeo_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|Block" },
		{ "Comment", "/**\n\x09 * Check if a CityBlockGeo actor is currently registered.\n\x09 * @return True if a valid reference exists (actor may be streamed out)\n\x09 */" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "Check if a CityBlockGeo actor is currently registered.\n@return True if a valid reference exists (actor may be streamed out)" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasCityBlockGeo constinit property declarations ***********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CityBlock_eventHasCityBlockGeo_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasCityBlockGeo constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasCityBlockGeo Property Definitions **********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(CityBlock_eventHasCityBlockGeo_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HasCityBlockGeo Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ACityBlock, nullptr, "HasCityBlockGeo", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CityBlock_eventHasCityBlockGeo_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CityBlock_eventHasCityBlockGeo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACityBlock_HasCityBlockGeo(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ACityBlock::execHasCityBlockGeo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasCityBlockGeo();
	P_NATIVE_END;
}
// ********** End Class ACityBlock Function HasCityBlockGeo ****************************************

// ********** Begin Class ACityBlock Function RegisterCityBlockGeo *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ACityBlock_RegisterCityBlockGeo_Statics
struct UHT_STATICS
{
	struct CityBlock_eventRegisterCityBlockGeo_Parms
	{
		ACityBlockGeo* BlockGeoActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|Block" },
		{ "Comment", "/**\n\x09 * Register the spawned CityBlockGeo actor for this block.\n\x09 * Stores a World Partition-safe reference for later cleanup.\n\x09 * @param BlockGeoActor - The CityBlockGeo actor to register\n\x09 */" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "Register the spawned CityBlockGeo actor for this block.\nStores a World Partition-safe reference for later cleanup.\n@param BlockGeoActor - The CityBlockGeo actor to register" },
	};
#endif // WITH_METADATA

// ********** Begin Function RegisterCityBlockGeo constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockGeoActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RegisterCityBlockGeo constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RegisterCityBlockGeo Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_BlockGeoActor = { "BlockGeoActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(CityBlock_eventRegisterCityBlockGeo_Parms, BlockGeoActor), Z_Construct_UClass_ACityBlockGeo, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlockGeoActor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RegisterCityBlockGeo Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ACityBlock, nullptr, "RegisterCityBlockGeo", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CityBlock_eventRegisterCityBlockGeo_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CityBlock_eventRegisterCityBlockGeo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACityBlock_RegisterCityBlockGeo(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ACityBlock::execRegisterCityBlockGeo)
{
	P_GET_OBJECT(ACityBlockGeo,Z_Param_BlockGeoActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterCityBlockGeo(Z_Param_BlockGeoActor);
	P_NATIVE_END;
}
// ********** End Class ACityBlock Function RegisterCityBlockGeo ***********************************

// ********** Begin Class ACityBlock Function UnregisterCityBlockGeo *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ACityBlock_UnregisterCityBlockGeo_Statics
struct UHT_STATICS
{
	struct CityBlock_eventUnregisterCityBlockGeo_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|Block" },
		{ "Comment", "/**\n\x09 * Unregister and clear the CityBlockGeo reference without destroying the actor.\n\x09 * @return True if a reference was cleared\n\x09 */" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "Unregister and clear the CityBlockGeo reference without destroying the actor.\n@return True if a reference was cleared" },
	};
#endif // WITH_METADATA

// ********** Begin Function UnregisterCityBlockGeo constinit property declarations ****************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CityBlock_eventUnregisterCityBlockGeo_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UnregisterCityBlockGeo constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UnregisterCityBlockGeo Property Definitions ***************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(CityBlock_eventUnregisterCityBlockGeo_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UnregisterCityBlockGeo Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ACityBlock, nullptr, "UnregisterCityBlockGeo", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CityBlock_eventUnregisterCityBlockGeo_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CityBlock_eventUnregisterCityBlockGeo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACityBlock_UnregisterCityBlockGeo(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ACityBlock::execUnregisterCityBlockGeo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UnregisterCityBlockGeo();
	P_NATIVE_END;
}
// ********** End Class ACityBlock Function UnregisterCityBlockGeo *********************************

// ********** Begin Class ACityBlock Function UpdateInnerLoopFromOuter *****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ACityBlock_UpdateInnerLoopFromOuter_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "CityBLD|Block" },
		{ "Comment", "/**\n\x09 * Updates the InnerLoop spline from the OuterLoop.\n\x09 * Applies SidewalkWidth inset only when an effective sidewalk preset is configured.\n\x09 * Called automatically when OuterLoop or SidewalkWidth changes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "Updates the InnerLoop spline from the OuterLoop.\nApplies SidewalkWidth inset only when an effective sidewalk preset is configured.\nCalled automatically when OuterLoop or SidewalkWidth changes." },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateInnerLoopFromOuter constinit property declarations **************
// ********** End Function UpdateInnerLoopFromOuter constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ACityBlock, nullptr, "UpdateInnerLoopFromOuter", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ACityBlock_UpdateInnerLoopFromOuter(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ACityBlock::execUpdateInnerLoopFromOuter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateInnerLoopFromOuter();
	P_NATIVE_END;
}
// ********** End Class ACityBlock Function UpdateInnerLoopFromOuter *******************************

// ********** Begin Class ACityBlock Function UpdateParcelGenerationSpline *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ACityBlock_UpdateParcelGenerationSpline_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|Block" },
		{ "Comment", "/**\n\x09 * Updates the ParcelGenerationSpline by duplicating InnerLoop points and removing points\n\x09 * to maintain minimum segment length. Called automatically when InnerLoop changes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "Updates the ParcelGenerationSpline by duplicating InnerLoop points and removing points\nto maintain minimum segment length. Called automatically when InnerLoop changes." },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateParcelGenerationSpline constinit property declarations **********
// ********** End Function UpdateParcelGenerationSpline constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ACityBlock, nullptr, "UpdateParcelGenerationSpline", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ACityBlock_UpdateParcelGenerationSpline(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ACityBlock::execUpdateParcelGenerationSpline)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateParcelGenerationSpline();
	P_NATIVE_END;
}
// ********** End Class ACityBlock Function UpdateParcelGenerationSpline ***************************

// ********** Begin Class ACityBlock ***************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ACityBlock_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ACityBlock - An actor for defining city block areas for procedural building generation.\n * \n * Contains two closed-loop spline components:\n * - OuterLoop: Aligns with road edges, defines the block perimeter\n * - InnerLoop: Inset from OuterLoop by SidewalkWidth when an effective sidewalk preset is configured\n * \n * The area between OuterLoop and InnerLoop represents the sidewalk.\n * All spline points are forced to Linear interpolation type.\n */" },
		{ "IncludePath", "CityBlock.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "ACityBlock - An actor for defining city block areas for procedural building generation.\n\nContains two closed-loop spline components:\n- OuterLoop: Aligns with road edges, defines the block perimeter\n- InnerLoop: Inset from OuterLoop by SidewalkWidth when an effective sidewalk preset is configured\n\nThe area between OuterLoop and InnerLoop represents the sidewalk.\nAll spline points are forced to Linear interpolation type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "CityBLD|Block" },
		{ "Comment", "// ==================== Components ====================\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "==================== Components ====================" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterLoop_MetaData[] = {
		{ "Category", "CityBLD|Block" },
		{ "Comment", "/** The outer spline component defining the block perimeter aligned with road edges (closed loop, Linear points only) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "The outer spline component defining the block perimeter aligned with road edges (closed loop, Linear points only)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerLoop_MetaData[] = {
		{ "Category", "CityBLD|Block" },
		{ "Comment", "/** The inner spline component for building generation, auto-inset from OuterLoop (closed loop, Linear points only) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "The inner spline component for building generation, auto-inset from OuterLoop (closed loop, Linear points only)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParcelGenerationSpline_MetaData[] = {
		{ "Category", "CityBLD|Block" },
		{ "Comment", "/** Simplified spline for parcel generation, derived from InnerLoop with minimum segment length enforcement */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "Simplified spline for parcel generation, derived from InnerLoop with minimum segment length enforcement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockMesh_MetaData[] = {
		{ "Category", "CityBLD|Block" },
		{ "Comment", "/** Static mesh component for storing procedural geometry */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "Static mesh component for storing procedural geometry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistrictClass_MetaData[] = {
		{ "Category", "CityBLD|Block" },
		{ "Comment", "/** The District definition determining how this City Block gets subdivided into parcels (preferred). */" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "The District definition determining how this City Block gets subdivided into parcels (preferred)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SidewalkWidth_MetaData[] = {
		{ "Category", "CityBLD|Block" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Distance to inset the InnerLoop from the OuterLoop when a sidewalk preset is active */" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "Distance to inset the InnerLoop from the OuterLoop when a sidewalk preset is active" },
		{ "UIMax", "5000.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSegmentLength_MetaData[] = {
		{ "Category", "CityBLD|Block" },
		{ "ClampMin", "10.0" },
		{ "Comment", "/** Minimum segment length for ParcelGenerationSpline simplification */" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "Minimum segment length for ParcelGenerationSpline simplification" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "10.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxParcelSplineDeviation_MetaData[] = {
		{ "Category", "CityBLD|Block" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/**\n\x09 * Maximum allowed 2D deviation (in cm) when simplifying ParcelGenerationSpline.\n\x09 * Prevents \"cutting corners\" on curved / many-sided blocks (large gaps between InnerLoop and ParcelGenerationSpline).\n\x09 */" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "Maximum allowed 2D deviation (in cm) when simplifying ParcelGenerationSpline.\nPrevents \"cutting corners\" on curved / many-sided blocks (large gaps between InnerLoop and ParcelGenerationSpline)." },
		{ "UIMax", "2000.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SidewalkPresetClass_MetaData[] = {
		{ "Category", "CityBLD|Block" },
		{ "Comment", "/** Preset defining sidewalk appearance and material properties */" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "Preset defining sidewalk appearance and material properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parcels_Inner_MetaData[] = {
		{ "Category", "CityBLD|Block" },
		{ "Comment", "/** Array of parcels that subdivide this city block */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "Array of parcels that subdivide this city block" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parcels_MetaData[] = {
		{ "Category", "CityBLD|Block" },
		{ "Comment", "/** Array of parcels that subdivide this city block */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "Array of parcels that subdivide this city block" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CityBlockGeoReference_MetaData[] = {
		{ "Category", "CityBLD|Block" },
		{ "Comment", "/** World Partition-safe reference to the spawned CityBlockGeo actor for this block */" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "World Partition-safe reference to the spawned CityBlockGeo actor for this block" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CityBlockGeoZOffset_MetaData[] = {
		{ "Category", "CityBLD|Block|Mesh" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Slight Z offset applied to generated CityBlockGeo geometry to avoid ground overlap */" },
		{ "ModuleRelativePath", "Public/CityBlock.h" },
		{ "ToolTip", "Slight Z offset applied to generated CityBlockGeo geometry to avoid ground overlap" },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA

// ********** Begin Class ACityBlock constinit property declarations *******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OuterLoop;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InnerLoop;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParcelGenerationSpline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockMesh;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DistrictClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SidewalkWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSegmentLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxParcelSplineDeviation;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SidewalkPresetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parcels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Parcels;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CityBlockGeoReference;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CityBlockGeoZOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ACityBlock constinit property declarations *********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AssignLandUsesToParcels"), .Pointer = &ACityBlock::execAssignLandUsesToParcels },
		{ .NameUTF8 = UTF8TEXT("BuildMesh"), .Pointer = &ACityBlock::execBuildMesh },
		{ .NameUTF8 = UTF8TEXT("DestroyCityBlockGeo"), .Pointer = &ACityBlock::execDestroyCityBlockGeo },
		{ .NameUTF8 = UTF8TEXT("EnforceLinearSplinePoints"), .Pointer = &ACityBlock::execEnforceLinearSplinePoints },
		{ .NameUTF8 = UTF8TEXT("EnsureCounterClockwiseOrder"), .Pointer = &ACityBlock::execEnsureCounterClockwiseOrder },
		{ .NameUTF8 = UTF8TEXT("Generate"), .Pointer = &ACityBlock::execGenerate },
		{ .NameUTF8 = UTF8TEXT("GenerateParcelsOffset"), .Pointer = &ACityBlock::execGenerateParcelsOffset },
		{ .NameUTF8 = UTF8TEXT("GenerateParcelsRecursive"), .Pointer = &ACityBlock::execGenerateParcelsRecursive },
		{ .NameUTF8 = UTF8TEXT("GenerateParcelsSkeleton"), .Pointer = &ACityBlock::execGenerateParcelsSkeleton },
		{ .NameUTF8 = UTF8TEXT("GetCityBlockGeo"), .Pointer = &ACityBlock::execGetCityBlockGeo },
		{ .NameUTF8 = UTF8TEXT("HasCityBlockGeo"), .Pointer = &ACityBlock::execHasCityBlockGeo },
		{ .NameUTF8 = UTF8TEXT("RegisterCityBlockGeo"), .Pointer = &ACityBlock::execRegisterCityBlockGeo },
		{ .NameUTF8 = UTF8TEXT("UnregisterCityBlockGeo"), .Pointer = &ACityBlock::execUnregisterCityBlockGeo },
		{ .NameUTF8 = UTF8TEXT("UpdateInnerLoopFromOuter"), .Pointer = &ACityBlock::execUpdateInnerLoopFromOuter },
		{ .NameUTF8 = UTF8TEXT("UpdateParcelGenerationSpline"), .Pointer = &ACityBlock::execUpdateParcelGenerationSpline },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACityBlock_AssignLandUsesToParcels, "AssignLandUsesToParcels" }, // d2a8baa89fc85ec6ff878df9b85e2b21e6cb3151
		{ &Z_Construct_UFunction_ACityBlock_BuildMesh, "BuildMesh" }, // b01b97d72ab09386ad64e685789be689028412ed
		{ &Z_Construct_UFunction_ACityBlock_DestroyCityBlockGeo, "DestroyCityBlockGeo" }, // e3eb73fb29235bda214733f99d91a3dafbbb02ba
		{ &Z_Construct_UFunction_ACityBlock_EnforceLinearSplinePoints, "EnforceLinearSplinePoints" }, // fb0fb94d2fcf934fb671f80fec9f8600b568d08b
		{ &Z_Construct_UFunction_ACityBlock_EnsureCounterClockwiseOrder, "EnsureCounterClockwiseOrder" }, // 9c60a45b496a626cdaa0338dd7c2805ffd3698b2
		{ &Z_Construct_UFunction_ACityBlock_Generate, "Generate" }, // b2bacedf9d55d8792574457bb2429864e35f5922
		{ &Z_Construct_UFunction_ACityBlock_GenerateParcelsOffset, "GenerateParcelsOffset" }, // bee9fad291311d561691babb9265cbda604070c5
		{ &Z_Construct_UFunction_ACityBlock_GenerateParcelsRecursive, "GenerateParcelsRecursive" }, // cfe27bb2b3917835fe6fe28771280ea8785645e1
		{ &Z_Construct_UFunction_ACityBlock_GenerateParcelsSkeleton, "GenerateParcelsSkeleton" }, // f255719f22a3b2bd94b6f2b8ea7438edf7bb46e8
		{ &Z_Construct_UFunction_ACityBlock_GetCityBlockGeo, "GetCityBlockGeo" }, // 7da6d89770c330766995ee901e43d3192e7ee405
		{ &Z_Construct_UFunction_ACityBlock_HasCityBlockGeo, "HasCityBlockGeo" }, // bd668cd62fb58da9acf55c06b564e92fd62ffb27
		{ &Z_Construct_UFunction_ACityBlock_RegisterCityBlockGeo, "RegisterCityBlockGeo" }, // 8821a76cf61fa11e4427a0c9bb39efc15c74a842
		{ &Z_Construct_UFunction_ACityBlock_UnregisterCityBlockGeo, "UnregisterCityBlockGeo" }, // 74defb79bdb4d82d9aba87df36e958a2afd4a9af
		{ &Z_Construct_UFunction_ACityBlock_UpdateInnerLoopFromOuter, "UpdateInnerLoopFromOuter" }, // bbb460b39760756178813f05783b25bc27a00561
		{ &Z_Construct_UFunction_ACityBlock_UpdateParcelGenerationSpline, "UpdateParcelGenerationSpline" }, // 3cfd0e8f99834001cf0b432cd0cecf6143e20086
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACityBlock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ACityBlock Property Definitions ******************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ACityBlock, SceneRoot), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OuterLoop = { "OuterLoop", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ACityBlock, OuterLoop), Z_Construct_UClass_UCityBLDSplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterLoop_MetaData), NewProp_OuterLoop_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InnerLoop = { "InnerLoop", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ACityBlock, InnerLoop), Z_Construct_UClass_UCityBLDSplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerLoop_MetaData), NewProp_InnerLoop_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ParcelGenerationSpline = { "ParcelGenerationSpline", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ACityBlock, ParcelGenerationSpline), Z_Construct_UClass_UCityBLDSplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParcelGenerationSpline_MetaData), NewProp_ParcelGenerationSpline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_BlockMesh = { "BlockMesh", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ACityBlock, BlockMesh), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockMesh_MetaData), NewProp_BlockMesh_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_DistrictClass = { "DistrictClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(ACityBlock, DistrictClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDistrict, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistrictClass_MetaData), NewProp_DistrictClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SidewalkWidth = { "SidewalkWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ACityBlock, SidewalkWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SidewalkWidth_MetaData), NewProp_SidewalkWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MinSegmentLength = { "MinSegmentLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ACityBlock, MinSegmentLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSegmentLength_MetaData), NewProp_MinSegmentLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MaxParcelSplineDeviation = { "MaxParcelSplineDeviation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ACityBlock, MaxParcelSplineDeviation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxParcelSplineDeviation_MetaData), NewProp_MaxParcelSplineDeviation_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_SidewalkPresetClass = { "SidewalkPresetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(ACityBlock, SidewalkPresetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USidewalkPreset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SidewalkPresetClass_MetaData), NewProp_SidewalkPresetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Parcels_Inner = { "Parcels", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCityParcel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parcels_Inner_MetaData), NewProp_Parcels_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Parcels = { "Parcels", nullptr, (EPropertyFlags)0x011400800000001c, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ACityBlock, Parcels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parcels_MetaData), NewProp_Parcels_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CityBlockGeoReference = { "CityBlockGeoReference", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ACityBlock, CityBlockGeoReference), Z_Construct_UScriptStruct_FParcelActorEntry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CityBlockGeoReference_MetaData), NewProp_CityBlockGeoReference_MetaData) }; // 5219fb801c5813b2935ded5f99ec60151295536e
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CityBlockGeoZOffset = { "CityBlockGeoZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ACityBlock, CityBlockGeoZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CityBlockGeoZOffset_MetaData), NewProp_CityBlockGeoZOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OuterLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InnerLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParcelGenerationSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlockMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DistrictClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SidewalkWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinSegmentLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxParcelSplineDeviation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SidewalkPresetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Parcels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Parcels,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CityBlockGeoReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CityBlockGeoZOffset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ACityBlock Property Definitions ********************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ACityBlock,
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
static void ACityBlock_StaticRegisterNativesACityBlock()
{
	UClass* Class = ACityBlock::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACityBlock;
UClass* Z_Construct_UClass_ACityBlock(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ACityBlock;
		if (!Z_Registration_Info_UClass_ACityBlock.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CityBlock"),
				Z_Registration_Info_UClass_ACityBlock.InnerSingleton,
				ACityBlock_StaticRegisterNativesACityBlock,
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
		return Z_Registration_Info_UClass_ACityBlock.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ACityBlock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACityBlock.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ACityBlock.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ACityBlock);
ACityBlock::~ACityBlock() {}
// ********** End Class ACityBlock *****************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBlock_h__Script_CityBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACityBlock, TEXT("ACityBlock"), &Z_Registration_Info_UClass_ACityBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACityBlock), 2041508370U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBlock_h__Script_CityBLDRuntime_4cf44a632fb9b2b6e5392ff71cf4b94cab273031{
	TEXT("/Script/CityBLDRuntime"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
