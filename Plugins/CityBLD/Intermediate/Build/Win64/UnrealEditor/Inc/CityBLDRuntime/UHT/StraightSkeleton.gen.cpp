// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StraightSkeleton.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeStraightSkeleton() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDRuntime(ETypeConstructPhase);
CITYBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSNode(ETypeConstructPhase);
CITYBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSSKelResult(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_ASSkelDebug(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_ASSkelDebug(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FSSKelResult ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FSSKelResult_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FSSKelResult>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSSKelResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StraightSkeleton.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSSKelResult constinit property declarations **********************
// ********** End ScriptStruct FSSKelResult constinit property declarations ************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSKelResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDRuntime,
	nullptr,
	&NewStructOps,
	"SSKelResult",
	nullptr,
	0,
	DataSizeOf<FSSKelResult>(),
	alignof(FSSKelResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSSKelResult;
UScriptStruct* Z_Construct_UScriptStruct_FSSKelResult(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FSSKelResult.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FSSKelResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSKelResult, (UObject*)Z_Construct_UPackage__Script_CityBLDRuntime(ETypeConstructPhase::Outer), TEXT("SSKelResult"));
		}
		return Z_Registration_Info_UScriptStruct_FSSKelResult.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FSSKelResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSSKelResult.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSSKelResult.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FSSKelResult ********************************************************

// ********** Begin ScriptStruct FSNode ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FSNode_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FSNode>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSNode); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StraightSkeleton.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSNode constinit property declarations ****************************
// ********** End ScriptStruct FSNode constinit property declarations ******************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDRuntime,
	nullptr,
	&NewStructOps,
	"SNode",
	nullptr,
	0,
	DataSizeOf<FSNode>(),
	alignof(FSNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSNode;
UScriptStruct* Z_Construct_UScriptStruct_FSNode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FSNode.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FSNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSNode, (UObject*)Z_Construct_UPackage__Script_CityBLDRuntime(ETypeConstructPhase::Outer), TEXT("SNode"));
		}
		return Z_Registration_Info_UScriptStruct_FSNode.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FSNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSNode.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSNode.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FSNode **************************************************************

// ********** Begin Class ASSkelDebug Function DrawNodeNeighbours **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ASSkelDebug_DrawNodeNeighbours_Statics
struct UHT_STATICS
{
	struct SSkelDebug_eventDrawNodeNeighbours_Parms
	{
		int32 Idx;
		float Size;
		float Thickness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "CPP_Default_Size", "16.000000" },
		{ "CPP_Default_Thickness", "16.000000" },
		{ "ModuleRelativePath", "Public/StraightSkeleton.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DrawNodeNeighbours constinit property declarations ********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Idx;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DrawNodeNeighbours constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DrawNodeNeighbours Property Definitions *******************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Idx = { "Idx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(SSkelDebug_eventDrawNodeNeighbours_Parms, Idx), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(SSkelDebug_eventDrawNodeNeighbours_Parms, Size), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(SSkelDebug_eventDrawNodeNeighbours_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Idx,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Thickness,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DrawNodeNeighbours Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ASSkelDebug, nullptr, "DrawNodeNeighbours", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::SSkelDebug_eventDrawNodeNeighbours_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::SSkelDebug_eventDrawNodeNeighbours_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASSkelDebug_DrawNodeNeighbours(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ASSkelDebug::execDrawNodeNeighbours)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Idx);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Size);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawNodeNeighbours(Z_Param_Idx,Z_Param_Size,Z_Param_Thickness);
	P_NATIVE_END;
}
// ********** End Class ASSkelDebug Function DrawNodeNeighbours ************************************

// ********** Begin Class ASSkelDebug Function DrawNodeVertex **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ASSkelDebug_DrawNodeVertex_Statics
struct UHT_STATICS
{
	struct SSkelDebug_eventDrawNodeVertex_Parms
	{
		int32 Idx;
		float Size;
		float Thickness;
		float Length;
		bool bDrawBisector;
		bool bDrawEdges;
		bool bDrawNextPrev;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "CPP_Default_bDrawBisector", "true" },
		{ "CPP_Default_bDrawEdges", "false" },
		{ "CPP_Default_bDrawNextPrev", "false" },
		{ "CPP_Default_Length", "1.000000" },
		{ "CPP_Default_Size", "16.000000" },
		{ "CPP_Default_Thickness", "16.000000" },
		{ "ModuleRelativePath", "Public/StraightSkeleton.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function DrawNodeVertex constinit property declarations ************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Idx;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
	static void NewProp_bDrawBisector_SetBit(void* Obj)
	{
		((SSkelDebug_eventDrawNodeVertex_Parms*)Obj)->bDrawBisector = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawBisector;
	static void NewProp_bDrawEdges_SetBit(void* Obj)
	{
		((SSkelDebug_eventDrawNodeVertex_Parms*)Obj)->bDrawEdges = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawEdges;
	static void NewProp_bDrawNextPrev_SetBit(void* Obj)
	{
		((SSkelDebug_eventDrawNodeVertex_Parms*)Obj)->bDrawNextPrev = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawNextPrev;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DrawNodeVertex constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DrawNodeVertex Property Definitions ***********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Idx = { "Idx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(SSkelDebug_eventDrawNodeVertex_Parms, Idx), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(SSkelDebug_eventDrawNodeVertex_Parms, Size), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(SSkelDebug_eventDrawNodeVertex_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(SSkelDebug_eventDrawNodeVertex_Parms, Length), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDrawBisector = { "bDrawBisector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(SSkelDebug_eventDrawNodeVertex_Parms), &UHT_STATICS::NewProp_bDrawBisector_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDrawEdges = { "bDrawEdges", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(SSkelDebug_eventDrawNodeVertex_Parms), &UHT_STATICS::NewProp_bDrawEdges_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDrawNextPrev = { "bDrawNextPrev", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(SSkelDebug_eventDrawNodeVertex_Parms), &UHT_STATICS::NewProp_bDrawNextPrev_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Idx,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Length,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDrawBisector,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDrawEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDrawNextPrev,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DrawNodeVertex Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ASSkelDebug, nullptr, "DrawNodeVertex", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::SSkelDebug_eventDrawNodeVertex_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::SSkelDebug_eventDrawNodeVertex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASSkelDebug_DrawNodeVertex(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ASSkelDebug::execDrawNodeVertex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Idx);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Size);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Length);
	P_GET_UBOOL(Z_Param_bDrawBisector);
	P_GET_UBOOL(Z_Param_bDrawEdges);
	P_GET_UBOOL(Z_Param_bDrawNextPrev);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawNodeVertex(Z_Param_Idx,Z_Param_Size,Z_Param_Thickness,Z_Param_Length,Z_Param_bDrawBisector,Z_Param_bDrawEdges,Z_Param_bDrawNextPrev);
	P_NATIVE_END;
}
// ********** End Class ASSkelDebug Function DrawNodeVertex ****************************************

// ********** Begin Class ASSkelDebug Function InitSkel ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ASSkelDebug_InitSkel_Statics
struct UHT_STATICS
{
	struct SSkelDebug_eventInitSkel_Parms
	{
		TArray<FVector2D> Points;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/StraightSkeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitSkel constinit property declarations ******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitSkel constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitSkel Property Definitions *****************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(SSkelDebug_eventInitSkel_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function InitSkel Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ASSkelDebug, nullptr, "InitSkel", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::SSkelDebug_eventInitSkel_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::SSkelDebug_eventInitSkel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASSkelDebug_InitSkel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ASSkelDebug::execInitSkel)
{
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_Points);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitSkel(Z_Param_Out_Points);
	P_NATIVE_END;
}
// ********** End Class ASSkelDebug Function InitSkel **********************************************

// ********** Begin Class ASSkelDebug Function OnPostEditMove **************************************
struct SSkelDebug_eventOnPostEditMove_Parms
{
	bool bFinished;
};
static FName NAME_ASSkelDebug_OnPostEditMove = FName(TEXT("OnPostEditMove"));
void ASSkelDebug::OnPostEditMove(bool bFinished)
{
	SSkelDebug_eventOnPostEditMove_Parms Parms;
	Parms.bFinished=bFinished ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_ASSkelDebug_OnPostEditMove);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ASSkelDebug_OnPostEditMove_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/StraightSkeleton.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnPostEditMove constinit property declarations ************************
	static void NewProp_bFinished_SetBit(void* Obj)
	{
		((SSkelDebug_eventOnPostEditMove_Parms*)Obj)->bFinished = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFinished;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnPostEditMove constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnPostEditMove Property Definitions ***********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFinished = { "bFinished", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(SSkelDebug_eventOnPostEditMove_Parms), &UHT_STATICS::NewProp_bFinished_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFinished,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnPostEditMove Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ASSkelDebug, nullptr, "OnPostEditMove", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<SSkelDebug_eventOnPostEditMove_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(SSkelDebug_eventOnPostEditMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASSkelDebug_OnPostEditMove(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class ASSkelDebug Function OnPostEditMove ****************************************

// ********** Begin Class ASSkelDebug Function RebuildAndPrint *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ASSkelDebug_RebuildAndPrint_Statics
struct UHT_STATICS
{
	struct SSkelDebug_eventRebuildAndPrint_Parms
	{
		TArray<FVector2D> Points;
		FColor Color;
		float Thickness;
		bool b2D;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "WorldBLD" },
		{ "CPP_Default_b2D", "false" },
		{ "CPP_Default_Color", "(R=255,G=255,B=255,A=255)" },
		{ "CPP_Default_Thickness", "16.000000" },
		{ "ModuleRelativePath", "Public/StraightSkeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RebuildAndPrint constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static void NewProp_b2D_SetBit(void* Obj)
	{
		((SSkelDebug_eventRebuildAndPrint_Parms*)Obj)->b2D = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_b2D;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RebuildAndPrint constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RebuildAndPrint Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(SSkelDebug_eventRebuildAndPrint_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(SSkelDebug_eventRebuildAndPrint_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(SSkelDebug_eventRebuildAndPrint_Parms, Thickness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_b2D = { "b2D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(SSkelDebug_eventRebuildAndPrint_Parms), &UHT_STATICS::NewProp_b2D_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_b2D,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RebuildAndPrint Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ASSkelDebug, nullptr, "RebuildAndPrint", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::SSkelDebug_eventRebuildAndPrint_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::SSkelDebug_eventRebuildAndPrint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASSkelDebug_RebuildAndPrint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ASSkelDebug::execRebuildAndPrint)
{
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_Points);
	P_GET_STRUCT(FColor,Z_Param_Color);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
	P_GET_UBOOL(Z_Param_b2D);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RebuildAndPrint(Z_Param_Out_Points,Z_Param_Color,Z_Param_Thickness,Z_Param_b2D);
	P_NATIVE_END;
}
// ********** End Class ASSkelDebug Function RebuildAndPrint ***************************************

// ********** Begin Class ASSkelDebug Function Reset ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ASSkelDebug_Reset_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/StraightSkeleton.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function Reset constinit property declarations *********************************
// ********** End Function Reset constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ASSkelDebug, nullptr, "Reset", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ASSkelDebug_Reset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ASSkelDebug::execReset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reset();
	P_NATIVE_END;
}
// ********** End Class ASSkelDebug Function Reset *************************************************

// ********** Begin Class ASSkelDebug Function StepBuild *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ASSkelDebug_StepBuild_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/StraightSkeleton.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StepBuild constinit property declarations *****************************
// ********** End Function StepBuild constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ASSkelDebug, nullptr, "StepBuild", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ASSkelDebug_StepBuild(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ASSkelDebug::execStepBuild)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StepBuild();
	P_NATIVE_END;
}
// ********** End Class ASSkelDebug Function StepBuild *********************************************

// ********** Begin Class ASSkelDebug **************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ASSkelDebug_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StraightSkeleton.h" },
		{ "ModuleRelativePath", "Public/StraightSkeleton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Step_MetaData[] = {
		{ "Category", "WorldBLD" },
		{ "ModuleRelativePath", "Public/StraightSkeleton.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ASSkelDebug constinit property declarations ******************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Step;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ASSkelDebug constinit property declarations ********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DrawNodeNeighbours"), .Pointer = &ASSkelDebug::execDrawNodeNeighbours },
		{ .NameUTF8 = UTF8TEXT("DrawNodeVertex"), .Pointer = &ASSkelDebug::execDrawNodeVertex },
		{ .NameUTF8 = UTF8TEXT("InitSkel"), .Pointer = &ASSkelDebug::execInitSkel },
		{ .NameUTF8 = UTF8TEXT("RebuildAndPrint"), .Pointer = &ASSkelDebug::execRebuildAndPrint },
		{ .NameUTF8 = UTF8TEXT("Reset"), .Pointer = &ASSkelDebug::execReset },
		{ .NameUTF8 = UTF8TEXT("StepBuild"), .Pointer = &ASSkelDebug::execStepBuild },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASSkelDebug_DrawNodeNeighbours, "DrawNodeNeighbours" }, // 2b9d690b2d5a36ae90f499df9d0c314ee03d43b6
		{ &Z_Construct_UFunction_ASSkelDebug_DrawNodeVertex, "DrawNodeVertex" }, // 2df35f2fd8d4f27fc680ee30ff42ed60ad9f8d2d
		{ &Z_Construct_UFunction_ASSkelDebug_InitSkel, "InitSkel" }, // 540f5d9e3d5b8558c3467ea872161ed553df2ffe
		{ &Z_Construct_UFunction_ASSkelDebug_OnPostEditMove, "OnPostEditMove" }, // 383fbc4e154b4d7027a0c4993f9e8d5975cad959
		{ &Z_Construct_UFunction_ASSkelDebug_RebuildAndPrint, "RebuildAndPrint" }, // 3c8e5b0d69e4934424860e90ebee40ff8acf71b4
		{ &Z_Construct_UFunction_ASSkelDebug_Reset, "Reset" }, // 3ba336953a61a2888db3affeb34094983a07bffb
		{ &Z_Construct_UFunction_ASSkelDebug_StepBuild, "StepBuild" }, // df938186745089651b5dbefb955205783337365c
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASSkelDebug>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ASSkelDebug Property Definitions *****************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ASSkelDebug, Step), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Step_MetaData), NewProp_Step_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Step,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ASSkelDebug Property Definitions *******************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ASSkelDebug,
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
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void ASSkelDebug_StaticRegisterNativesASSkelDebug()
{
	UClass* Class = ASSkelDebug::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASSkelDebug;
UClass* Z_Construct_UClass_ASSkelDebug(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ASSkelDebug;
		if (!Z_Registration_Info_UClass_ASSkelDebug.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("SSkelDebug"),
				Z_Registration_Info_UClass_ASSkelDebug.InnerSingleton,
				ASSkelDebug_StaticRegisterNativesASSkelDebug,
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
		return Z_Registration_Info_UClass_ASSkelDebug.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ASSkelDebug.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASSkelDebug.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ASSkelDebug.OuterSingleton;
}
#undef UHT_STATICS
ASSkelDebug::ASSkelDebug(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ASSkelDebug);
ASSkelDebug::~ASSkelDebug() {}
// ********** End Class ASSkelDebug ****************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_StraightSkeleton_h__Script_CityBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FSSKelResult, Z_Construct_UScriptStruct_FSSKelResult_Statics::NewStructOps, TEXT("SSKelResult"),&Z_Registration_Info_UScriptStruct_FSSKelResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSSKelResult), 502178635U) },
		{ Z_Construct_UScriptStruct_FSNode, Z_Construct_UScriptStruct_FSNode_Statics::NewStructOps, TEXT("SNode"),&Z_Registration_Info_UScriptStruct_FSNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSNode), 2348821842U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASSkelDebug, TEXT("ASSkelDebug"), &Z_Registration_Info_UClass_ASSkelDebug, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASSkelDebug), 2896698384U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_StraightSkeleton_h__Script_CityBLDRuntime_d782b2c67d8e75457085a392af5de25faade9c8a{
	TEXT("/Script/CityBLDRuntime"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
