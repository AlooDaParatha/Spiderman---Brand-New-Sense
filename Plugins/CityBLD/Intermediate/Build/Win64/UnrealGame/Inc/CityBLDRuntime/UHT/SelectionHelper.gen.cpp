// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SelectionHelper.h"
#include "Engine/HitResult.h"
#include "IWorldBLDKitElementInterface.h"
#include "PrimitiveDrawWrapper.h"
#include "WorldBLDKitElementUtils.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeSelectionHelper() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult(ETypeConstructPhase);
WORLDBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FElementFilterSpec(ETypeConstructPhase);
WORLDBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPrimitiveDrawWrapper(ETypeConstructPhase);
WORLDBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWorldBLDKitElementEdge(ETypeConstructPhase);
WORLDBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWorldBLDKitElementPoint(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USplineComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDRuntime(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_ASelectionHelperBase(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_ASelectionHelperBase(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class ASelectionHelperBase Function GenerateEdgeSplines ************************
static FName NAME_ASelectionHelperBase_GenerateEdgeSplines = FName(TEXT("GenerateEdgeSplines"));
void ASelectionHelperBase::GenerateEdgeSplines()
{
	UFunction* Func = FindFunctionChecked(NAME_ASelectionHelperBase_GenerateEdgeSplines);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		GenerateEdgeSplines_Implementation();
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ASelectionHelperBase_GenerateEdgeSplines_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/SelectionHelper.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateEdgeSplines constinit property declarations *******************
// ********** End Function GenerateEdgeSplines constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ASelectionHelperBase, nullptr, "GenerateEdgeSplines", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ASelectionHelperBase_GenerateEdgeSplines(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ASelectionHelperBase::execGenerateEdgeSplines)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateEdgeSplines_Implementation();
	P_NATIVE_END;
}
// ********** End Class ASelectionHelperBase Function GenerateEdgeSplines **************************

// ********** Begin Class ASelectionHelperBase Function RenderElements *****************************
struct SelectionHelperBase_eventRenderElements_Parms
{
	FPrimitiveDrawWrapper Renderer;
};
static FName NAME_ASelectionHelperBase_RenderElements = FName(TEXT("RenderElements"));
void ASelectionHelperBase::RenderElements(FPrimitiveDrawWrapper const& Renderer)
{
	UFunction* Func = FindFunctionChecked(NAME_ASelectionHelperBase_RenderElements);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		SelectionHelperBase_eventRenderElements_Parms Parms;
		Parms.Renderer=Renderer;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		RenderElements_Implementation(Renderer);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ASelectionHelperBase_RenderElements_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/SelectionHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Renderer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RenderElements constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Renderer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RenderElements constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RenderElements Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Renderer = { "Renderer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(SelectionHelperBase_eventRenderElements_Parms, Renderer), Z_Construct_UScriptStruct_FPrimitiveDrawWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Renderer_MetaData), NewProp_Renderer_MetaData) }; // 998fb980e2b93b5044372aa3bf728e08ae208919
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Renderer,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RenderElements Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ASelectionHelperBase, nullptr, "RenderElements", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<SelectionHelperBase_eventRenderElements_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(SelectionHelperBase_eventRenderElements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASelectionHelperBase_RenderElements(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ASelectionHelperBase::execRenderElements)
{
	P_GET_STRUCT_REF(FPrimitiveDrawWrapper,Z_Param_Out_Renderer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RenderElements_Implementation(Z_Param_Out_Renderer);
	P_NATIVE_END;
}
// ********** End Class ASelectionHelperBase Function RenderElements *******************************

// ********** Begin Class ASelectionHelperBase Function ResetPointsAndEdges ************************
static FName NAME_ASelectionHelperBase_ResetPointsAndEdges = FName(TEXT("ResetPointsAndEdges"));
void ASelectionHelperBase::ResetPointsAndEdges()
{
	UFunction* Func = FindFunctionChecked(NAME_ASelectionHelperBase_ResetPointsAndEdges);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		ResetPointsAndEdges_Implementation();
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ASelectionHelperBase_ResetPointsAndEdges_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/SelectionHelper.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResetPointsAndEdges constinit property declarations *******************
// ********** End Function ResetPointsAndEdges constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ASelectionHelperBase, nullptr, "ResetPointsAndEdges", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ASelectionHelperBase_ResetPointsAndEdges(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ASelectionHelperBase::execResetPointsAndEdges)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetPointsAndEdges_Implementation();
	P_NATIVE_END;
}
// ********** End Class ASelectionHelperBase Function ResetPointsAndEdges **************************

// ********** Begin Class ASelectionHelperBase Function UpdatePointsAndEdges ***********************
static FName NAME_ASelectionHelperBase_UpdatePointsAndEdges = FName(TEXT("UpdatePointsAndEdges"));
void ASelectionHelperBase::UpdatePointsAndEdges()
{
	UFunction* Func = FindFunctionChecked(NAME_ASelectionHelperBase_UpdatePointsAndEdges);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		UpdatePointsAndEdges_Implementation();
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ASelectionHelperBase_UpdatePointsAndEdges_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/SelectionHelper.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdatePointsAndEdges constinit property declarations ******************
// ********** End Function UpdatePointsAndEdges constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ASelectionHelperBase, nullptr, "UpdatePointsAndEdges", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ASelectionHelperBase_UpdatePointsAndEdges(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ASelectionHelperBase::execUpdatePointsAndEdges)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePointsAndEdges_Implementation();
	P_NATIVE_END;
}
// ********** End Class ASelectionHelperBase Function UpdatePointsAndEdges *************************

// ********** Begin Class ASelectionHelperBase Function UpdateSnapPointsFromHits *******************
struct SelectionHelperBase_eventUpdateSnapPointsFromHits_Parms
{
	TArray<FHitResult> Hits;
	FVector RealMouseLocation;
	FVector CameraWorldLocation;
	FVector CameraWorldDirection;
};
static FName NAME_ASelectionHelperBase_UpdateSnapPointsFromHits = FName(TEXT("UpdateSnapPointsFromHits"));
void ASelectionHelperBase::UpdateSnapPointsFromHits(TArray<FHitResult> const& Hits, FVector const& RealMouseLocation, FVector const& CameraWorldLocation, FVector const& CameraWorldDirection)
{
	UFunction* Func = FindFunctionChecked(NAME_ASelectionHelperBase_UpdateSnapPointsFromHits);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		SelectionHelperBase_eventUpdateSnapPointsFromHits_Parms Parms;
		Parms.Hits=Hits;
		Parms.RealMouseLocation=RealMouseLocation;
		Parms.CameraWorldLocation=CameraWorldLocation;
		Parms.CameraWorldDirection=CameraWorldDirection;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		UpdateSnapPointsFromHits_Implementation(Hits, RealMouseLocation, CameraWorldLocation, CameraWorldDirection);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ASelectionHelperBase_UpdateSnapPointsFromHits_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/SelectionHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hits_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RealMouseLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraWorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraWorldDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateSnapPointsFromHits constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Hits;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RealMouseLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraWorldLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraWorldDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateSnapPointsFromHits constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateSnapPointsFromHits Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Hits_Inner = { "Hits", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // e0ec7b349cc3b29366a6161006ad7fa74de2944e
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(SelectionHelperBase_eventUpdateSnapPointsFromHits_Parms, Hits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hits_MetaData), NewProp_Hits_MetaData) }; // e0ec7b349cc3b29366a6161006ad7fa74de2944e
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RealMouseLocation = { "RealMouseLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(SelectionHelperBase_eventUpdateSnapPointsFromHits_Parms, RealMouseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RealMouseLocation_MetaData), NewProp_RealMouseLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CameraWorldLocation = { "CameraWorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(SelectionHelperBase_eventUpdateSnapPointsFromHits_Parms, CameraWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraWorldLocation_MetaData), NewProp_CameraWorldLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CameraWorldDirection = { "CameraWorldDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(SelectionHelperBase_eventUpdateSnapPointsFromHits_Parms, CameraWorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraWorldDirection_MetaData), NewProp_CameraWorldDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Hits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Hits,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RealMouseLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CameraWorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CameraWorldDirection,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UpdateSnapPointsFromHits Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ASelectionHelperBase, nullptr, "UpdateSnapPointsFromHits", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<SelectionHelperBase_eventUpdateSnapPointsFromHits_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(SelectionHelperBase_eventUpdateSnapPointsFromHits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASelectionHelperBase_UpdateSnapPointsFromHits(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ASelectionHelperBase::execUpdateSnapPointsFromHits)
{
	P_GET_TARRAY_REF(FHitResult,Z_Param_Out_Hits);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_RealMouseLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_CameraWorldLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_CameraWorldDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateSnapPointsFromHits_Implementation(Z_Param_Out_Hits,Z_Param_Out_RealMouseLocation,Z_Param_Out_CameraWorldLocation,Z_Param_Out_CameraWorldDirection);
	P_NATIVE_END;
}
// ********** End Class ASelectionHelperBase Function UpdateSnapPointsFromHits *********************

// ********** Begin Class ASelectionHelperBase *****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ASelectionHelperBase_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SelectionHelper.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SelectionHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetElement_MetaData[] = {
		{ "Category", "WorldBLD|Selection" },
		{ "ModuleRelativePath", "Public/SelectionHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeFilter_MetaData[] = {
		{ "Category", "WorldBLD|Selection" },
		{ "ModuleRelativePath", "Public/SelectionHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointFilter_MetaData[] = {
		{ "Category", "WorldBLD|Selection" },
		{ "ModuleRelativePath", "Public/SelectionHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Edges_MetaData[] = {
		{ "Category", "WorldBLD|Runtime" },
		{ "ModuleRelativePath", "Public/SelectionHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "Category", "WorldBLD|Runtime" },
		{ "ModuleRelativePath", "Public/SelectionHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicSplines_MetaData[] = {
		{ "Category", "WorldBLD|Runtime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SelectionHelper.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicSnapSplines_MetaData[] = {
		{ "Category", "WorldBLD|Runtime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SelectionHelper.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ASelectionHelperBase constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetElement;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Edges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Edges;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicSplines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DynamicSplines;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicSnapSplines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DynamicSnapSplines;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ASelectionHelperBase constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GenerateEdgeSplines"), .Pointer = &ASelectionHelperBase::execGenerateEdgeSplines },
		{ .NameUTF8 = UTF8TEXT("RenderElements"), .Pointer = &ASelectionHelperBase::execRenderElements },
		{ .NameUTF8 = UTF8TEXT("ResetPointsAndEdges"), .Pointer = &ASelectionHelperBase::execResetPointsAndEdges },
		{ .NameUTF8 = UTF8TEXT("UpdatePointsAndEdges"), .Pointer = &ASelectionHelperBase::execUpdatePointsAndEdges },
		{ .NameUTF8 = UTF8TEXT("UpdateSnapPointsFromHits"), .Pointer = &ASelectionHelperBase::execUpdateSnapPointsFromHits },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASelectionHelperBase_GenerateEdgeSplines, "GenerateEdgeSplines" }, // 0cbb4cd58dd085a05d582ba03e25cf866a748994
		{ &Z_Construct_UFunction_ASelectionHelperBase_RenderElements, "RenderElements" }, // 0b540337aef871b5752f958e9155a6ed6b38d606
		{ &Z_Construct_UFunction_ASelectionHelperBase_ResetPointsAndEdges, "ResetPointsAndEdges" }, // f8ce73e6e1aa7e818a16337a9553d4e43cb41ca2
		{ &Z_Construct_UFunction_ASelectionHelperBase_UpdatePointsAndEdges, "UpdatePointsAndEdges" }, // 4508098d3b9267557f1f83b0308c6ca4afd56569
		{ &Z_Construct_UFunction_ASelectionHelperBase_UpdateSnapPointsFromHits, "UpdateSnapPointsFromHits" }, // 9c7d81f5aee163c8a864e7fc81092c40fc83f43a
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASelectionHelperBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ASelectionHelperBase Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetElement = { "TargetElement", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ASelectionHelperBase, TargetElement), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetElement_MetaData), NewProp_TargetElement_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EdgeFilter = { "EdgeFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ASelectionHelperBase, EdgeFilter), Z_Construct_UScriptStruct_FElementFilterSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeFilter_MetaData), NewProp_EdgeFilter_MetaData) }; // fa5a921a43a8a435316084a65537973107bc0a82
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PointFilter = { "PointFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ASelectionHelperBase, PointFilter), Z_Construct_UScriptStruct_FElementFilterSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointFilter_MetaData), NewProp_PointFilter_MetaData) }; // fa5a921a43a8a435316084a65537973107bc0a82
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Edges_Inner = { "Edges", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWorldBLDKitElementEdge, METADATA_PARAMS(0, nullptr) }; // b1f8883034d7f9c21a93812f1c21f4f4628ab313
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Edges = { "Edges", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ASelectionHelperBase, Edges), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Edges_MetaData), NewProp_Edges_MetaData) }; // b1f8883034d7f9c21a93812f1c21f4f4628ab313
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWorldBLDKitElementPoint, METADATA_PARAMS(0, nullptr) }; // 40431f66282c4e92e8b370cc8f3ec0ae5c2da09d
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ASelectionHelperBase, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) }; // 40431f66282c4e92e8b370cc8f3ec0ae5c2da09d
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DynamicSplines_Inner = { "DynamicSplines", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_USplineComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_DynamicSplines = { "DynamicSplines", nullptr, (EPropertyFlags)0x011400800000000d, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ASelectionHelperBase, DynamicSplines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicSplines_MetaData), NewProp_DynamicSplines_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DynamicSnapSplines_Inner = { "DynamicSnapSplines", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_USplineComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_DynamicSnapSplines = { "DynamicSnapSplines", nullptr, (EPropertyFlags)0x011400800000000d, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ASelectionHelperBase, DynamicSnapSplines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicSnapSplines_MetaData), NewProp_DynamicSnapSplines_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetElement,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Edges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Edges,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DynamicSplines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DynamicSplines,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DynamicSnapSplines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DynamicSnapSplines,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ASelectionHelperBase Property Definitions **********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ASelectionHelperBase,
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
static void ASelectionHelperBase_StaticRegisterNativesASelectionHelperBase()
{
	UClass* Class = ASelectionHelperBase::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASelectionHelperBase;
UClass* Z_Construct_UClass_ASelectionHelperBase(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ASelectionHelperBase;
		if (!Z_Registration_Info_UClass_ASelectionHelperBase.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("SelectionHelperBase"),
				Z_Registration_Info_UClass_ASelectionHelperBase.InnerSingleton,
				ASelectionHelperBase_StaticRegisterNativesASelectionHelperBase,
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
		return Z_Registration_Info_UClass_ASelectionHelperBase.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ASelectionHelperBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASelectionHelperBase.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ASelectionHelperBase.OuterSingleton;
}
#undef UHT_STATICS
ASelectionHelperBase::ASelectionHelperBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ASelectionHelperBase);
ASelectionHelperBase::~ASelectionHelperBase() {}
// ********** End Class ASelectionHelperBase *******************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_SelectionHelper_h__Script_CityBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASelectionHelperBase, TEXT("ASelectionHelperBase"), &Z_Registration_Info_UClass_ASelectionHelperBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASelectionHelperBase), 3848290813U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_SelectionHelper_h__Script_CityBLDRuntime_cdc4032374626ffeceb7bad5d0fce1aa52752961{
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
