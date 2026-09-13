// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingStyleProvider.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeBuildingStyleProvider() {}

// ********** Begin Cross Module References ********************************************************
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UTexture2D(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingStyleProvider(ETypeConstructPhase);
TWINBLDEDITOR_API UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnGetBuildingStyleComplete__DelegateSignature(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingStyleProvider(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FOnGetBuildingStyleComplete *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_TwinBLDEditor_OnGetBuildingStyleComplete__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_TwinBLDEditor_eventOnGetBuildingStyleComplete_Parms
	{
		FString Response;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuildingStyleProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnGetBuildingStyleComplete constinit property declarations ***********
	static const UECodeGen_Private::FStrPropertyParams NewProp_Response;
	static void NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_TwinBLDEditor_eventOnGetBuildingStyleComplete_Parms*)Obj)->bSuccess = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnGetBuildingStyleComplete constinit property declarations *************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnGetBuildingStyleComplete Property Definitions **********************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TwinBLDEditor_eventOnGetBuildingStyleComplete_Parms, Response), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_TwinBLDEditor_eventOnGetBuildingStyleComplete_Parms), &UHT_STATICS::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Response,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnGetBuildingStyleComplete Property Definitions ************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor, nullptr, "OnGetBuildingStyleComplete__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_TwinBLDEditor_eventOnGetBuildingStyleComplete_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_TwinBLDEditor_eventOnGetBuildingStyleComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnGetBuildingStyleComplete__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnGetBuildingStyleComplete *********************************************

// ********** Begin Class UBuildingStyleProvider Function GetBuildingLocationString ****************
struct BuildingStyleProvider_eventGetBuildingLocationString_Parms
{
	const AActor* Building;
	FString Location;
};
static FName NAME_UBuildingStyleProvider_GetBuildingLocationString = FName(TEXT("GetBuildingLocationString"));
void UBuildingStyleProvider::GetBuildingLocationString(const AActor* Building, FString& Location)
{
	BuildingStyleProvider_eventGetBuildingLocationString_Parms Parms;
	Parms.Building=Building;
	Parms.Location=Location;
	UFunction* Func = FindFunctionChecked(NAME_UBuildingStyleProvider_GetBuildingLocationString);
	ProcessEvent(Func,&Parms);
	Location=Parms.Location;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UBuildingStyleProvider_GetBuildingLocationString_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/BuildingStyleProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Building_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBuildingLocationString constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Building;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBuildingLocationString constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBuildingLocationString Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Building = { "Building", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(BuildingStyleProvider_eventGetBuildingLocationString_Parms, Building), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Building_MetaData), NewProp_Building_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(BuildingStyleProvider_eventGetBuildingLocationString_Parms, Location), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Building,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetBuildingLocationString Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UBuildingStyleProvider, nullptr, "GetBuildingLocationString", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<BuildingStyleProvider_eventGetBuildingLocationString_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(BuildingStyleProvider_eventGetBuildingLocationString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBuildingStyleProvider_GetBuildingLocationString(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class UBuildingStyleProvider Function GetBuildingLocationString ******************

// ********** Begin Class UBuildingStyleProvider Function GetBuildingStyle *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UBuildingStyleProvider_GetBuildingStyle_Statics
struct UHT_STATICS
{
	struct BuildingStyleProvider_eventGetBuildingStyle_Parms
	{
		const AActor* Building;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/BuildingStyleProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Building_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBuildingStyle constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Building;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBuildingStyle constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBuildingStyle Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Building = { "Building", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(BuildingStyleProvider_eventGetBuildingStyle_Parms, Building), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Building_MetaData), NewProp_Building_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Building,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetBuildingStyle Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UBuildingStyleProvider, nullptr, "GetBuildingStyle", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::BuildingStyleProvider_eventGetBuildingStyle_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::BuildingStyleProvider_eventGetBuildingStyle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBuildingStyleProvider_GetBuildingStyle(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UBuildingStyleProvider::execGetBuildingStyle)
{
	P_GET_OBJECT(AActor,Z_Param_Building);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetBuildingStyle(Z_Param_Building);
	P_NATIVE_END;
}
// ********** End Class UBuildingStyleProvider Function GetBuildingStyle ***************************

// ********** Begin Class UBuildingStyleProvider Function GetBuildingStyleComplete *****************
struct BuildingStyleProvider_eventGetBuildingStyleComplete_Parms
{
	FString Response;
	bool bSuccess;
};
static FName NAME_UBuildingStyleProvider_GetBuildingStyleComplete = FName(TEXT("GetBuildingStyleComplete"));
void UBuildingStyleProvider::GetBuildingStyleComplete(const FString& Response, bool bSuccess)
{
	UFunction* Func = FindFunctionChecked(NAME_UBuildingStyleProvider_GetBuildingStyleComplete);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		BuildingStyleProvider_eventGetBuildingStyleComplete_Parms Parms;
		Parms.Response=Response;
		Parms.bSuccess=bSuccess ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		GetBuildingStyleComplete_Implementation(Response, bSuccess);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UBuildingStyleProvider_GetBuildingStyleComplete_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/BuildingStyleProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBuildingStyleComplete constinit property declarations **************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Response;
	static void NewProp_bSuccess_SetBit(void* Obj)
	{
		((BuildingStyleProvider_eventGetBuildingStyleComplete_Parms*)Obj)->bSuccess = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBuildingStyleComplete constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBuildingStyleComplete Property Definitions *************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(BuildingStyleProvider_eventGetBuildingStyleComplete_Parms, Response), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(BuildingStyleProvider_eventGetBuildingStyleComplete_Parms), &UHT_STATICS::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Response,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetBuildingStyleComplete Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UBuildingStyleProvider, nullptr, "GetBuildingStyleComplete", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<BuildingStyleProvider_eventGetBuildingStyleComplete_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(BuildingStyleProvider_eventGetBuildingStyleComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBuildingStyleProvider_GetBuildingStyleComplete(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UBuildingStyleProvider::execGetBuildingStyleComplete)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Response);
	P_GET_UBOOL(Z_Param_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetBuildingStyleComplete_Implementation(Z_Param_Response,Z_Param_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UBuildingStyleProvider Function GetBuildingStyleComplete *******************

// ********** Begin Class UBuildingStyleProvider Function GetBuildingStyleComplete_Internal ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UBuildingStyleProvider_GetBuildingStyleComplete_Internal_Statics
struct UHT_STATICS
{
	struct BuildingStyleProvider_eventGetBuildingStyleComplete_Internal_Parms
	{
		FString Response;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuildingStyleProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBuildingStyleComplete_Internal constinit property declarations *****
	static const UECodeGen_Private::FStrPropertyParams NewProp_Response;
	static void NewProp_bSuccess_SetBit(void* Obj)
	{
		((BuildingStyleProvider_eventGetBuildingStyleComplete_Internal_Parms*)Obj)->bSuccess = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBuildingStyleComplete_Internal constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBuildingStyleComplete_Internal Property Definitions ****************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(BuildingStyleProvider_eventGetBuildingStyleComplete_Internal_Parms, Response), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(BuildingStyleProvider_eventGetBuildingStyleComplete_Internal_Parms), &UHT_STATICS::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Response,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetBuildingStyleComplete_Internal Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UBuildingStyleProvider, nullptr, "GetBuildingStyleComplete_Internal", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::BuildingStyleProvider_eventGetBuildingStyleComplete_Internal_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::BuildingStyleProvider_eventGetBuildingStyleComplete_Internal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBuildingStyleProvider_GetBuildingStyleComplete_Internal(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UBuildingStyleProvider::execGetBuildingStyleComplete_Internal)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Response);
	P_GET_UBOOL(Z_Param_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetBuildingStyleComplete_Internal(Z_Param_Response,Z_Param_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UBuildingStyleProvider Function GetBuildingStyleComplete_Internal **********

// ********** Begin Class UBuildingStyleProvider Function GetBuildingStyleImageAnalysisPrompt ******
struct BuildingStyleProvider_eventGetBuildingStyleImageAnalysisPrompt_Parms
{
	FString Prompt;
};
static FName NAME_UBuildingStyleProvider_GetBuildingStyleImageAnalysisPrompt = FName(TEXT("GetBuildingStyleImageAnalysisPrompt"));
void UBuildingStyleProvider::GetBuildingStyleImageAnalysisPrompt(FString& Prompt)
{
	BuildingStyleProvider_eventGetBuildingStyleImageAnalysisPrompt_Parms Parms;
	Parms.Prompt=Prompt;
	UFunction* Func = FindFunctionChecked(NAME_UBuildingStyleProvider_GetBuildingStyleImageAnalysisPrompt);
	ProcessEvent(Func,&Parms);
	Prompt=Parms.Prompt;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UBuildingStyleProvider_GetBuildingStyleImageAnalysisPrompt_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/BuildingStyleProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBuildingStyleImageAnalysisPrompt constinit property declarations ***
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prompt;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBuildingStyleImageAnalysisPrompt constinit property declarations *****
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBuildingStyleImageAnalysisPrompt Property Definitions **************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Prompt = { "Prompt", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(BuildingStyleProvider_eventGetBuildingStyleImageAnalysisPrompt_Parms, Prompt), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Prompt,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetBuildingStyleImageAnalysisPrompt Property Definitions ****************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UBuildingStyleProvider, nullptr, "GetBuildingStyleImageAnalysisPrompt", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<BuildingStyleProvider_eventGetBuildingStyleImageAnalysisPrompt_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(BuildingStyleProvider_eventGetBuildingStyleImageAnalysisPrompt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBuildingStyleProvider_GetBuildingStyleImageAnalysisPrompt(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class UBuildingStyleProvider Function GetBuildingStyleImageAnalysisPrompt ********

// ********** Begin Class UBuildingStyleProvider ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UBuildingStyleProvider_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "BuildingStyleProvider.h" },
		{ "ModuleRelativePath", "Public/BuildingStyleProvider.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGetBuildingStyleComplete_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/BuildingStyleProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PanoPitch_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuildingStyleProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PanoFOV_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuildingStyleProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugImage_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/BuildingStyleProvider.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bToolBusy_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/BuildingStyleProvider.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBuildingStyleProvider constinit property declarations *******************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGetBuildingStyleComplete;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PanoPitch;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PanoFOV;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugImage;
	static void NewProp_bToolBusy_SetBit(void* Obj)
	{
		((UBuildingStyleProvider*)Obj)->bToolBusy = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bToolBusy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBuildingStyleProvider constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetBuildingStyle"), .Pointer = &UBuildingStyleProvider::execGetBuildingStyle },
		{ .NameUTF8 = UTF8TEXT("GetBuildingStyleComplete"), .Pointer = &UBuildingStyleProvider::execGetBuildingStyleComplete },
		{ .NameUTF8 = UTF8TEXT("GetBuildingStyleComplete_Internal"), .Pointer = &UBuildingStyleProvider::execGetBuildingStyleComplete_Internal },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBuildingStyleProvider_GetBuildingLocationString, "GetBuildingLocationString" }, // 2a3aad14f1f980be69f42bd8e062e2082f81a4e2
		{ &Z_Construct_UFunction_UBuildingStyleProvider_GetBuildingStyle, "GetBuildingStyle" }, // b3aa84d3ac5007cf7f4c50f2396821e002680e63
		{ &Z_Construct_UFunction_UBuildingStyleProvider_GetBuildingStyleComplete, "GetBuildingStyleComplete" }, // 7bdde1f930af42842e48778ffca9978c74f19091
		{ &Z_Construct_UFunction_UBuildingStyleProvider_GetBuildingStyleComplete_Internal, "GetBuildingStyleComplete_Internal" }, // de5c5508053fbffc677f7baa53ff6dc44f414661
		{ &Z_Construct_UFunction_UBuildingStyleProvider_GetBuildingStyleImageAnalysisPrompt, "GetBuildingStyleImageAnalysisPrompt" }, // 934a46387896e7c33cc9502bb76efffa7ad11a0b
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildingStyleProvider>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UBuildingStyleProvider Property Definitions ******************************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnGetBuildingStyleComplete = { "OnGetBuildingStyleComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingStyleProvider, OnGetBuildingStyleComplete), Z_Construct_UDelegateFunction_TwinBLDEditor_OnGetBuildingStyleComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGetBuildingStyleComplete_MetaData), NewProp_OnGetBuildingStyleComplete_MetaData) }; // 78dca5f1cfbacb638e552a008c8a0a3f8427eca8
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PanoPitch = { "PanoPitch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingStyleProvider, PanoPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PanoPitch_MetaData), NewProp_PanoPitch_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PanoFOV = { "PanoFOV", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingStyleProvider, PanoFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PanoFOV_MetaData), NewProp_PanoFOV_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DebugImage = { "DebugImage", nullptr, (EPropertyFlags)0x0010040000020015, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingStyleProvider, DebugImage), Z_Construct_UClass_UTexture2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugImage_MetaData), NewProp_DebugImage_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bToolBusy = { "bToolBusy", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UBuildingStyleProvider), &UHT_STATICS::NewProp_bToolBusy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bToolBusy_MetaData), NewProp_bToolBusy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnGetBuildingStyleComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PanoPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PanoFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DebugImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bToolBusy,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UBuildingStyleProvider Property Definitions ********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UEditorUtilityObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UBuildingStyleProvider,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UBuildingStyleProvider_StaticRegisterNativesUBuildingStyleProvider()
{
	UClass* Class = UBuildingStyleProvider::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBuildingStyleProvider;
UClass* Z_Construct_UClass_UBuildingStyleProvider(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UBuildingStyleProvider;
		if (!Z_Registration_Info_UClass_UBuildingStyleProvider.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("BuildingStyleProvider"),
				Z_Registration_Info_UClass_UBuildingStyleProvider.InnerSingleton,
				UBuildingStyleProvider_StaticRegisterNativesUBuildingStyleProvider,
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
		return Z_Registration_Info_UClass_UBuildingStyleProvider.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UBuildingStyleProvider.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildingStyleProvider.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuildingStyleProvider.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBuildingStyleProvider);
UBuildingStyleProvider::~UBuildingStyleProvider() {}
// ********** End Class UBuildingStyleProvider *****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_BuildingStyleProvider_h__Script_TwinBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBuildingStyleProvider, TEXT("UBuildingStyleProvider"), &Z_Registration_Info_UClass_UBuildingStyleProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildingStyleProvider), 965806288U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_BuildingStyleProvider_h__Script_TwinBLDEditor_c8d52c08f7a2389ad65a87ec541ac1a8450eaddd{
	TEXT("/Script/TwinBLDEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
