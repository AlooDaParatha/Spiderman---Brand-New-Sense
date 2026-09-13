// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicRoad/ISplineEventsInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeISplineEventsInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USplineComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USplineMetadata(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_USplineEventsInterface(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ISplineEventsInterface(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_USplineEventsInterface(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ISplineEventsInterface(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Interface USplineEventsInterface Function OnAddPoint ***************************
struct SplineEventsInterface_eventOnAddPoint_Parms
{
	float InputKey;
};
void ISplineEventsInterface::OnAddPoint(float InputKey)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnAddPoint instead.");
}
static FName NAME_USplineEventsInterface_OnAddPoint = FName(TEXT("OnAddPoint"));
void ISplineEventsInterface::Execute_OnAddPoint(UObject* O, float InputKey)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USplineEventsInterface::StaticClass()));
	SplineEventsInterface_eventOnAddPoint_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USplineEventsInterface_OnAddPoint);
	if (Func)
	{
		Parms.InputKey=std::move(InputKey);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISplineEventsInterface*)(O->GetNativeInterfaceAddress(USplineEventsInterface::StaticClass())))
	{
		I->OnAddPoint_Implementation(InputKey);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USplineEventsInterface_OnAddPoint_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadNode" },
		{ "ModuleRelativePath", "Classes/DynamicRoad/ISplineEventsInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnAddPoint constinit property declarations ****************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InputKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnAddPoint constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnAddPoint Property Definitions ***************************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(SplineEventsInterface_eventOnAddPoint_Parms, InputKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InputKey,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnAddPoint Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USplineEventsInterface, nullptr, "OnAddPoint", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<SplineEventsInterface_eventOnAddPoint_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(SplineEventsInterface_eventOnAddPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USplineEventsInterface_OnAddPoint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ISplineEventsInterface::execOnAddPoint)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InputKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAddPoint_Implementation(Z_Param_InputKey);
	P_NATIVE_END;
}
// ********** End Interface USplineEventsInterface Function OnAddPoint *****************************

// ********** Begin Interface USplineEventsInterface Function OnCopyPoint **************************
struct SplineEventsInterface_eventOnCopyPoint_Parms
{
	const USplineMetadata* FromSplineMetadata;
	int32 FromIndex;
	int32 ToIndex;
};
void ISplineEventsInterface::OnCopyPoint(const USplineMetadata* FromSplineMetadata, int32 FromIndex, int32 ToIndex)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnCopyPoint instead.");
}
static FName NAME_USplineEventsInterface_OnCopyPoint = FName(TEXT("OnCopyPoint"));
void ISplineEventsInterface::Execute_OnCopyPoint(UObject* O, const USplineMetadata* FromSplineMetadata, int32 FromIndex, int32 ToIndex)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USplineEventsInterface::StaticClass()));
	SplineEventsInterface_eventOnCopyPoint_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USplineEventsInterface_OnCopyPoint);
	if (Func)
	{
		Parms.FromSplineMetadata=std::move(FromSplineMetadata);
		Parms.FromIndex=std::move(FromIndex);
		Parms.ToIndex=std::move(ToIndex);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISplineEventsInterface*)(O->GetNativeInterfaceAddress(USplineEventsInterface::StaticClass())))
	{
		I->OnCopyPoint_Implementation(FromSplineMetadata,FromIndex,ToIndex);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USplineEventsInterface_OnCopyPoint_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadNode" },
		{ "ModuleRelativePath", "Classes/DynamicRoad/ISplineEventsInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromSplineMetadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnCopyPoint constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromSplineMetadata;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FromIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ToIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnCopyPoint constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnCopyPoint Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_FromSplineMetadata = { "FromSplineMetadata", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(SplineEventsInterface_eventOnCopyPoint_Parms, FromSplineMetadata), Z_Construct_UClass_USplineMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromSplineMetadata_MetaData), NewProp_FromSplineMetadata_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_FromIndex = { "FromIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(SplineEventsInterface_eventOnCopyPoint_Parms, FromIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ToIndex = { "ToIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(SplineEventsInterface_eventOnCopyPoint_Parms, ToIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FromSplineMetadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FromIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ToIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnCopyPoint Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USplineEventsInterface, nullptr, "OnCopyPoint", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<SplineEventsInterface_eventOnCopyPoint_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(SplineEventsInterface_eventOnCopyPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USplineEventsInterface_OnCopyPoint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ISplineEventsInterface::execOnCopyPoint)
{
	P_GET_OBJECT(USplineMetadata,Z_Param_FromSplineMetadata);
	P_GET_PROPERTY(FIntProperty,Z_Param_FromIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_ToIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCopyPoint_Implementation(Z_Param_FromSplineMetadata,Z_Param_FromIndex,Z_Param_ToIndex);
	P_NATIVE_END;
}
// ********** End Interface USplineEventsInterface Function OnCopyPoint ****************************

// ********** Begin Interface USplineEventsInterface Function OnDuplicatePoint *********************
struct SplineEventsInterface_eventOnDuplicatePoint_Parms
{
	int32 Index;
};
void ISplineEventsInterface::OnDuplicatePoint(int32 Index)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnDuplicatePoint instead.");
}
static FName NAME_USplineEventsInterface_OnDuplicatePoint = FName(TEXT("OnDuplicatePoint"));
void ISplineEventsInterface::Execute_OnDuplicatePoint(UObject* O, int32 Index)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USplineEventsInterface::StaticClass()));
	SplineEventsInterface_eventOnDuplicatePoint_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USplineEventsInterface_OnDuplicatePoint);
	if (Func)
	{
		Parms.Index=std::move(Index);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISplineEventsInterface*)(O->GetNativeInterfaceAddress(USplineEventsInterface::StaticClass())))
	{
		I->OnDuplicatePoint_Implementation(Index);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USplineEventsInterface_OnDuplicatePoint_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadNode" },
		{ "ModuleRelativePath", "Classes/DynamicRoad/ISplineEventsInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnDuplicatePoint constinit property declarations **********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnDuplicatePoint constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnDuplicatePoint Property Definitions *********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(SplineEventsInterface_eventOnDuplicatePoint_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnDuplicatePoint Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USplineEventsInterface, nullptr, "OnDuplicatePoint", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<SplineEventsInterface_eventOnDuplicatePoint_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(SplineEventsInterface_eventOnDuplicatePoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USplineEventsInterface_OnDuplicatePoint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ISplineEventsInterface::execOnDuplicatePoint)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDuplicatePoint_Implementation(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Interface USplineEventsInterface Function OnDuplicatePoint ***********************

// ********** Begin Interface USplineEventsInterface Function OnFixup ******************************
struct SplineEventsInterface_eventOnFixup_Parms
{
	int32 NumPoints;
	USplineComponent* SplineComp;
};
void ISplineEventsInterface::OnFixup(int32 NumPoints, USplineComponent* SplineComp)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnFixup instead.");
}
static FName NAME_USplineEventsInterface_OnFixup = FName(TEXT("OnFixup"));
void ISplineEventsInterface::Execute_OnFixup(UObject* O, int32 NumPoints, USplineComponent* SplineComp)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USplineEventsInterface::StaticClass()));
	SplineEventsInterface_eventOnFixup_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USplineEventsInterface_OnFixup);
	if (Func)
	{
		Parms.NumPoints=std::move(NumPoints);
		Parms.SplineComp=std::move(SplineComp);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISplineEventsInterface*)(O->GetNativeInterfaceAddress(USplineEventsInterface::StaticClass())))
	{
		I->OnFixup_Implementation(NumPoints,SplineComp);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USplineEventsInterface_OnFixup_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadNode" },
		{ "ModuleRelativePath", "Classes/DynamicRoad/ISplineEventsInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnFixup constinit property declarations *******************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPoints;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnFixup constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnFixup Property Definitions ******************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NumPoints = { "NumPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(SplineEventsInterface_eventOnFixup_Parms, NumPoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SplineComp = { "SplineComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(SplineEventsInterface_eventOnFixup_Parms, SplineComp), Z_Construct_UClass_USplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineComp_MetaData), NewProp_SplineComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NumPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SplineComp,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnFixup Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USplineEventsInterface, nullptr, "OnFixup", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<SplineEventsInterface_eventOnFixup_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(SplineEventsInterface_eventOnFixup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USplineEventsInterface_OnFixup(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ISplineEventsInterface::execOnFixup)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumPoints);
	P_GET_OBJECT(USplineComponent,Z_Param_SplineComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFixup_Implementation(Z_Param_NumPoints,Z_Param_SplineComp);
	P_NATIVE_END;
}
// ********** End Interface USplineEventsInterface Function OnFixup ********************************

// ********** Begin Interface USplineEventsInterface Function OnInsertPoint ************************
struct SplineEventsInterface_eventOnInsertPoint_Parms
{
	int32 Index;
	float t;
	bool bClosedLoop;
};
void ISplineEventsInterface::OnInsertPoint(int32 Index, float t, bool bClosedLoop)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnInsertPoint instead.");
}
static FName NAME_USplineEventsInterface_OnInsertPoint = FName(TEXT("OnInsertPoint"));
void ISplineEventsInterface::Execute_OnInsertPoint(UObject* O, int32 Index, float t, bool bClosedLoop)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USplineEventsInterface::StaticClass()));
	SplineEventsInterface_eventOnInsertPoint_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USplineEventsInterface_OnInsertPoint);
	if (Func)
	{
		Parms.Index=std::move(Index);
		Parms.t=std::move(t);
		Parms.bClosedLoop=std::move(bClosedLoop);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISplineEventsInterface*)(O->GetNativeInterfaceAddress(USplineEventsInterface::StaticClass())))
	{
		I->OnInsertPoint_Implementation(Index,t,bClosedLoop);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USplineEventsInterface_OnInsertPoint_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadNode" },
		{ "ModuleRelativePath", "Classes/DynamicRoad/ISplineEventsInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnInsertPoint constinit property declarations *************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_t;
	static void NewProp_bClosedLoop_SetBit(void* Obj)
	{
		((SplineEventsInterface_eventOnInsertPoint_Parms*)Obj)->bClosedLoop = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClosedLoop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnInsertPoint constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnInsertPoint Property Definitions ************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(SplineEventsInterface_eventOnInsertPoint_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_t = { "t", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(SplineEventsInterface_eventOnInsertPoint_Parms, t), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bClosedLoop = { "bClosedLoop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(SplineEventsInterface_eventOnInsertPoint_Parms), &UHT_STATICS::NewProp_bClosedLoop_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_t,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bClosedLoop,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnInsertPoint Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USplineEventsInterface, nullptr, "OnInsertPoint", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<SplineEventsInterface_eventOnInsertPoint_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(SplineEventsInterface_eventOnInsertPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USplineEventsInterface_OnInsertPoint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ISplineEventsInterface::execOnInsertPoint)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FFloatProperty,Z_Param_t);
	P_GET_UBOOL(Z_Param_bClosedLoop);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInsertPoint_Implementation(Z_Param_Index,Z_Param_t,Z_Param_bClosedLoop);
	P_NATIVE_END;
}
// ********** End Interface USplineEventsInterface Function OnInsertPoint **************************

// ********** Begin Interface USplineEventsInterface Function OnRemovePoint ************************
struct SplineEventsInterface_eventOnRemovePoint_Parms
{
	int32 Index;
};
void ISplineEventsInterface::OnRemovePoint(int32 Index)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnRemovePoint instead.");
}
static FName NAME_USplineEventsInterface_OnRemovePoint = FName(TEXT("OnRemovePoint"));
void ISplineEventsInterface::Execute_OnRemovePoint(UObject* O, int32 Index)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USplineEventsInterface::StaticClass()));
	SplineEventsInterface_eventOnRemovePoint_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USplineEventsInterface_OnRemovePoint);
	if (Func)
	{
		Parms.Index=std::move(Index);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISplineEventsInterface*)(O->GetNativeInterfaceAddress(USplineEventsInterface::StaticClass())))
	{
		I->OnRemovePoint_Implementation(Index);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USplineEventsInterface_OnRemovePoint_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadNode" },
		{ "ModuleRelativePath", "Classes/DynamicRoad/ISplineEventsInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRemovePoint constinit property declarations *************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnRemovePoint constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnRemovePoint Property Definitions ************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(SplineEventsInterface_eventOnRemovePoint_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnRemovePoint Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USplineEventsInterface, nullptr, "OnRemovePoint", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<SplineEventsInterface_eventOnRemovePoint_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(SplineEventsInterface_eventOnRemovePoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USplineEventsInterface_OnRemovePoint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ISplineEventsInterface::execOnRemovePoint)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRemovePoint_Implementation(Z_Param_Index);
	P_NATIVE_END;
}
// ********** End Interface USplineEventsInterface Function OnRemovePoint **************************

// ********** Begin Interface USplineEventsInterface Function OnReset ******************************
struct SplineEventsInterface_eventOnReset_Parms
{
	int32 NumPoints;
};
void ISplineEventsInterface::OnReset(int32 NumPoints)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnReset instead.");
}
static FName NAME_USplineEventsInterface_OnReset = FName(TEXT("OnReset"));
void ISplineEventsInterface::Execute_OnReset(UObject* O, int32 NumPoints)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USplineEventsInterface::StaticClass()));
	SplineEventsInterface_eventOnReset_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USplineEventsInterface_OnReset);
	if (Func)
	{
		Parms.NumPoints=std::move(NumPoints);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISplineEventsInterface*)(O->GetNativeInterfaceAddress(USplineEventsInterface::StaticClass())))
	{
		I->OnReset_Implementation(NumPoints);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USplineEventsInterface_OnReset_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadNode" },
		{ "ModuleRelativePath", "Classes/DynamicRoad/ISplineEventsInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnReset constinit property declarations *******************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnReset constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnReset Property Definitions ******************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_NumPoints = { "NumPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(SplineEventsInterface_eventOnReset_Parms, NumPoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NumPoints,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnReset Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USplineEventsInterface, nullptr, "OnReset", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<SplineEventsInterface_eventOnReset_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(SplineEventsInterface_eventOnReset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USplineEventsInterface_OnReset(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ISplineEventsInterface::execOnReset)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumPoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnReset_Implementation(Z_Param_NumPoints);
	P_NATIVE_END;
}
// ********** End Interface USplineEventsInterface Function OnReset ********************************

// ********** Begin Interface USplineEventsInterface Function OnUpdatePoint ************************
struct SplineEventsInterface_eventOnUpdatePoint_Parms
{
	int32 Index;
	float t;
	bool bClosedLoop;
};
void ISplineEventsInterface::OnUpdatePoint(int32 Index, float t, bool bClosedLoop)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnUpdatePoint instead.");
}
static FName NAME_USplineEventsInterface_OnUpdatePoint = FName(TEXT("OnUpdatePoint"));
void ISplineEventsInterface::Execute_OnUpdatePoint(UObject* O, int32 Index, float t, bool bClosedLoop)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USplineEventsInterface::StaticClass()));
	SplineEventsInterface_eventOnUpdatePoint_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USplineEventsInterface_OnUpdatePoint);
	if (Func)
	{
		Parms.Index=std::move(Index);
		Parms.t=std::move(t);
		Parms.bClosedLoop=std::move(bClosedLoop);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISplineEventsInterface*)(O->GetNativeInterfaceAddress(USplineEventsInterface::StaticClass())))
	{
		I->OnUpdatePoint_Implementation(Index,t,bClosedLoop);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USplineEventsInterface_OnUpdatePoint_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadNode" },
		{ "ModuleRelativePath", "Classes/DynamicRoad/ISplineEventsInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnUpdatePoint constinit property declarations *************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_t;
	static void NewProp_bClosedLoop_SetBit(void* Obj)
	{
		((SplineEventsInterface_eventOnUpdatePoint_Parms*)Obj)->bClosedLoop = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClosedLoop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnUpdatePoint constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnUpdatePoint Property Definitions ************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(SplineEventsInterface_eventOnUpdatePoint_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_t = { "t", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(SplineEventsInterface_eventOnUpdatePoint_Parms, t), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bClosedLoop = { "bClosedLoop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(SplineEventsInterface_eventOnUpdatePoint_Parms), &UHT_STATICS::NewProp_bClosedLoop_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_t,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bClosedLoop,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnUpdatePoint Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USplineEventsInterface, nullptr, "OnUpdatePoint", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<SplineEventsInterface_eventOnUpdatePoint_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(SplineEventsInterface_eventOnUpdatePoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USplineEventsInterface_OnUpdatePoint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ISplineEventsInterface::execOnUpdatePoint)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FFloatProperty,Z_Param_t);
	P_GET_UBOOL(Z_Param_bClosedLoop);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnUpdatePoint_Implementation(Z_Param_Index,Z_Param_t,Z_Param_bClosedLoop);
	P_NATIVE_END;
}
// ********** End Interface USplineEventsInterface Function OnUpdatePoint **************************

// ********** Begin Interface USplineEventsInterface ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_USplineEventsInterface_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/DynamicRoad/ISplineEventsInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface USplineEventsInterface constinit property declarations ***************
// ********** End Interface USplineEventsInterface constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnAddPoint"), .Pointer = &ISplineEventsInterface::execOnAddPoint },
		{ .NameUTF8 = UTF8TEXT("OnCopyPoint"), .Pointer = &ISplineEventsInterface::execOnCopyPoint },
		{ .NameUTF8 = UTF8TEXT("OnDuplicatePoint"), .Pointer = &ISplineEventsInterface::execOnDuplicatePoint },
		{ .NameUTF8 = UTF8TEXT("OnFixup"), .Pointer = &ISplineEventsInterface::execOnFixup },
		{ .NameUTF8 = UTF8TEXT("OnInsertPoint"), .Pointer = &ISplineEventsInterface::execOnInsertPoint },
		{ .NameUTF8 = UTF8TEXT("OnRemovePoint"), .Pointer = &ISplineEventsInterface::execOnRemovePoint },
		{ .NameUTF8 = UTF8TEXT("OnReset"), .Pointer = &ISplineEventsInterface::execOnReset },
		{ .NameUTF8 = UTF8TEXT("OnUpdatePoint"), .Pointer = &ISplineEventsInterface::execOnUpdatePoint },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USplineEventsInterface_OnAddPoint, "OnAddPoint" }, // ee89dbfd1201b3a3eeb1e9af705ee913ff8354cd
		{ &Z_Construct_UFunction_USplineEventsInterface_OnCopyPoint, "OnCopyPoint" }, // 1a017da642cb03867a6590fa92abbed609546143
		{ &Z_Construct_UFunction_USplineEventsInterface_OnDuplicatePoint, "OnDuplicatePoint" }, // dc5df494d3718bcc5ef80b3a6dfa21e38d9dee4b
		{ &Z_Construct_UFunction_USplineEventsInterface_OnFixup, "OnFixup" }, // e8bdf3e1566390f0c57fe79059a437992b5a3b66
		{ &Z_Construct_UFunction_USplineEventsInterface_OnInsertPoint, "OnInsertPoint" }, // 944c10f5a16e5bfd11c0131c43b8a5bea5551a11
		{ &Z_Construct_UFunction_USplineEventsInterface_OnRemovePoint, "OnRemovePoint" }, // f37eb681bd296cd96bf0987d03f959cf7fa83375
		{ &Z_Construct_UFunction_USplineEventsInterface_OnReset, "OnReset" }, // 5976b73fe976e2bf41451b920ceea5bf246ad13c
		{ &Z_Construct_UFunction_USplineEventsInterface_OnUpdatePoint, "OnUpdatePoint" }, // 6070f50794835bef247bfc86f8874118135b6a67
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISplineEventsInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UInterface,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_USplineEventsInterface,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void USplineEventsInterface_StaticRegisterNativesUSplineEventsInterface()
{
	UClass* Class = USplineEventsInterface::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USplineEventsInterface;
UClass* Z_Construct_UClass_USplineEventsInterface(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = USplineEventsInterface;
		if (!Z_Registration_Info_UClass_USplineEventsInterface.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("SplineEventsInterface"),
				Z_Registration_Info_UClass_USplineEventsInterface.InnerSingleton,
				USplineEventsInterface_StaticRegisterNativesUSplineEventsInterface,
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
		return Z_Registration_Info_UClass_USplineEventsInterface.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_USplineEventsInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USplineEventsInterface.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_USplineEventsInterface.OuterSingleton;
}
#undef UHT_STATICS
USplineEventsInterface::USplineEventsInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USplineEventsInterface);
// ********** End Interface USplineEventsInterface *************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_ISplineEventsInterface_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USplineEventsInterface, TEXT("USplineEventsInterface"), &Z_Registration_Info_UClass_USplineEventsInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USplineEventsInterface), 3255837673U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_ISplineEventsInterface_h__Script_RoadBLDRuntime_c90a5dc45aacb204415b9d9771bb118577a40327{
	TEXT("/Script/RoadBLDRuntime"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
