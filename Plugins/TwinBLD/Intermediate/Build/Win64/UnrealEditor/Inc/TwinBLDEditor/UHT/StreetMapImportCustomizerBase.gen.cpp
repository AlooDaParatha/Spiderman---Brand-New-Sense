// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StreetMap/StreetMapImportCustomizerBase.h"
#include "ShapefileReader.h"
#include "StreetMap/StreetMap.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeStreetMapImportCustomizerBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase);
TWINBLDEDITOR_API UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnStreetMapBuildingsProcessComplete__DelegateSignature(ETypeConstructPhase);
TWINBLDEDITOR_API UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnStreetMapBuildingsProcess__DelegateSignature(ETypeConstructPhase);
TWINBLDEDITOR_API UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnStreetMapParcelsProcessComplete__DelegateSignature(ETypeConstructPhase);
TWINBLDEDITOR_API UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnStreetMapParcelsProcess__DelegateSignature(ETypeConstructPhase);
TWINBLDEDITOR_API UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnStreetMapRoadsProcessComplete__DelegateSignature(ETypeConstructPhase);
TWINBLDEDITOR_API UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnStreetMapRoadsProcess__DelegateSignature(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapBuilding(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UStreetMapImportCustomizerBase(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoad(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDShapeFeature(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UStreetMap(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UStreetMapImportCustomizerBase(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FOnStreetMapBuildingsProcessComplete **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_TwinBLDEditor_OnStreetMapBuildingsProcessComplete__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_TwinBLDEditor_eventOnStreetMapBuildingsProcessComplete_Parms
	{
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizerBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnStreetMapBuildingsProcessComplete constinit property declarations **
	static void NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_TwinBLDEditor_eventOnStreetMapBuildingsProcessComplete_Parms*)Obj)->bSuccess = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnStreetMapBuildingsProcessComplete constinit property declarations ****
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnStreetMapBuildingsProcessComplete Property Definitions *************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_TwinBLDEditor_eventOnStreetMapBuildingsProcessComplete_Parms), &UHT_STATICS::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnStreetMapBuildingsProcessComplete Property Definitions ***************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor, nullptr, "OnStreetMapBuildingsProcessComplete__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_TwinBLDEditor_eventOnStreetMapBuildingsProcessComplete_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_TwinBLDEditor_eventOnStreetMapBuildingsProcessComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnStreetMapBuildingsProcessComplete__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnStreetMapBuildingsProcessComplete ************************************

// ********** Begin Delegate FOnStreetMapRoadsProcessComplete **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_TwinBLDEditor_OnStreetMapRoadsProcessComplete__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_TwinBLDEditor_eventOnStreetMapRoadsProcessComplete_Parms
	{
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizerBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnStreetMapRoadsProcessComplete constinit property declarations ******
	static void NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_TwinBLDEditor_eventOnStreetMapRoadsProcessComplete_Parms*)Obj)->bSuccess = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnStreetMapRoadsProcessComplete constinit property declarations ********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnStreetMapRoadsProcessComplete Property Definitions *****************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_TwinBLDEditor_eventOnStreetMapRoadsProcessComplete_Parms), &UHT_STATICS::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnStreetMapRoadsProcessComplete Property Definitions *******************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor, nullptr, "OnStreetMapRoadsProcessComplete__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_TwinBLDEditor_eventOnStreetMapRoadsProcessComplete_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_TwinBLDEditor_eventOnStreetMapRoadsProcessComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnStreetMapRoadsProcessComplete__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnStreetMapRoadsProcessComplete ****************************************

// ********** Begin Delegate FOnStreetMapBuildingsProcess ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_TwinBLDEditor_OnStreetMapBuildingsProcess__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_TwinBLDEditor_eventOnStreetMapBuildingsProcess_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizerBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnStreetMapBuildingsProcess constinit property declarations **********
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnStreetMapBuildingsProcess constinit property declarations ************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnStreetMapBuildingsProcess Property Definitions *********************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TwinBLDEditor_eventOnStreetMapBuildingsProcess_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnStreetMapBuildingsProcess Property Definitions ***********************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor, nullptr, "OnStreetMapBuildingsProcess__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_TwinBLDEditor_eventOnStreetMapBuildingsProcess_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_TwinBLDEditor_eventOnStreetMapBuildingsProcess_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnStreetMapBuildingsProcess__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnStreetMapBuildingsProcess ********************************************

// ********** Begin Delegate FOnStreetMapRoadsProcess **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_TwinBLDEditor_OnStreetMapRoadsProcess__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_TwinBLDEditor_eventOnStreetMapRoadsProcess_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizerBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnStreetMapRoadsProcess constinit property declarations **************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnStreetMapRoadsProcess constinit property declarations ****************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnStreetMapRoadsProcess Property Definitions *************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TwinBLDEditor_eventOnStreetMapRoadsProcess_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnStreetMapRoadsProcess Property Definitions ***************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor, nullptr, "OnStreetMapRoadsProcess__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_TwinBLDEditor_eventOnStreetMapRoadsProcess_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_TwinBLDEditor_eventOnStreetMapRoadsProcess_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnStreetMapRoadsProcess__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnStreetMapRoadsProcess ************************************************

// ********** Begin Delegate FOnStreetMapParcelsProcessComplete ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_TwinBLDEditor_OnStreetMapParcelsProcessComplete__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_TwinBLDEditor_eventOnStreetMapParcelsProcessComplete_Parms
	{
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizerBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnStreetMapParcelsProcessComplete constinit property declarations ****
	static void NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_TwinBLDEditor_eventOnStreetMapParcelsProcessComplete_Parms*)Obj)->bSuccess = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnStreetMapParcelsProcessComplete constinit property declarations ******
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnStreetMapParcelsProcessComplete Property Definitions ***************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_TwinBLDEditor_eventOnStreetMapParcelsProcessComplete_Parms), &UHT_STATICS::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnStreetMapParcelsProcessComplete Property Definitions *****************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor, nullptr, "OnStreetMapParcelsProcessComplete__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_TwinBLDEditor_eventOnStreetMapParcelsProcessComplete_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_TwinBLDEditor_eventOnStreetMapParcelsProcessComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnStreetMapParcelsProcessComplete__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnStreetMapParcelsProcessComplete **************************************

// ********** Begin Delegate FOnStreetMapParcelsProcess ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_TwinBLDEditor_OnStreetMapParcelsProcess__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_TwinBLDEditor_eventOnStreetMapParcelsProcess_Parms
	{
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizerBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnStreetMapParcelsProcess constinit property declarations ************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnStreetMapParcelsProcess constinit property declarations **************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnStreetMapParcelsProcess Property Definitions ***********************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TwinBLDEditor_eventOnStreetMapParcelsProcess_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnStreetMapParcelsProcess Property Definitions *************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor, nullptr, "OnStreetMapParcelsProcess__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_TwinBLDEditor_eventOnStreetMapParcelsProcess_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_TwinBLDEditor_eventOnStreetMapParcelsProcess_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnStreetMapParcelsProcess__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnStreetMapParcelsProcess **********************************************

// ********** Begin Class UStreetMapImportCustomizerBase Function GetStreetMap *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStreetMapImportCustomizerBase_GetStreetMap_Statics
struct UHT_STATICS
{
	struct StreetMapImportCustomizerBase_eventGetStreetMap_Parms
	{
		const UStreetMap* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetStreetMap constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStreetMap constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStreetMap Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapImportCustomizerBase_eventGetStreetMap_Parms, ReturnValue), Z_Construct_UClass_UStreetMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetStreetMap Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStreetMapImportCustomizerBase, nullptr, "GetStreetMap", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::StreetMapImportCustomizerBase_eventGetStreetMap_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::StreetMapImportCustomizerBase_eventGetStreetMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreetMapImportCustomizerBase_GetStreetMap(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStreetMapImportCustomizerBase::execGetStreetMap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UStreetMap**)Z_Param__Result=P_THIS->GetStreetMap();
	P_NATIVE_END;
}
// ********** End Class UStreetMapImportCustomizerBase Function GetStreetMap ***********************

// ********** Begin Class UStreetMapImportCustomizerBase Function ProcessBuildings *****************
struct StreetMapImportCustomizerBase_eventProcessBuildings_Parms
{
	TArray<FStreetMapBuilding> Buildings;
};
static FName NAME_UStreetMapImportCustomizerBase_ProcessBuildings = FName(TEXT("ProcessBuildings"));
void UStreetMapImportCustomizerBase::ProcessBuildings(TArray<FStreetMapBuilding> const& Buildings)
{
	UFunction* Func = FindFunctionChecked(NAME_UStreetMapImportCustomizerBase_ProcessBuildings);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		StreetMapImportCustomizerBase_eventProcessBuildings_Parms Parms;
		Parms.Buildings=Buildings;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		ProcessBuildings_Implementation(Buildings);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStreetMapImportCustomizerBase_ProcessBuildings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Buildings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ProcessBuildings constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Buildings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Buildings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ProcessBuildings constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ProcessBuildings Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Buildings_Inner = { "Buildings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStreetMapBuilding, METADATA_PARAMS(0, nullptr) }; // 9c80cd0a6043d885eef18e6aeb7753379022d92d
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Buildings = { "Buildings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapImportCustomizerBase_eventProcessBuildings_Parms, Buildings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Buildings_MetaData), NewProp_Buildings_MetaData) }; // 9c80cd0a6043d885eef18e6aeb7753379022d92d
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Buildings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Buildings,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ProcessBuildings Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStreetMapImportCustomizerBase, nullptr, "ProcessBuildings", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<StreetMapImportCustomizerBase_eventProcessBuildings_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(StreetMapImportCustomizerBase_eventProcessBuildings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreetMapImportCustomizerBase_ProcessBuildings(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStreetMapImportCustomizerBase::execProcessBuildings)
{
	P_GET_TARRAY_REF(FStreetMapBuilding,Z_Param_Out_Buildings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessBuildings_Implementation(Z_Param_Out_Buildings);
	P_NATIVE_END;
}
// ********** End Class UStreetMapImportCustomizerBase Function ProcessBuildings *******************

// ********** Begin Class UStreetMapImportCustomizerBase Function ProcessParcels *******************
struct StreetMapImportCustomizerBase_eventProcessParcels_Parms
{
	TArray<FTwinBLDShapeFeature> Features;
};
static FName NAME_UStreetMapImportCustomizerBase_ProcessParcels = FName(TEXT("ProcessParcels"));
void UStreetMapImportCustomizerBase::ProcessParcels(TArray<FTwinBLDShapeFeature> const& Features)
{
	UFunction* Func = FindFunctionChecked(NAME_UStreetMapImportCustomizerBase_ProcessParcels);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		StreetMapImportCustomizerBase_eventProcessParcels_Parms Parms;
		Parms.Features=Features;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		ProcessParcels_Implementation(Features);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStreetMapImportCustomizerBase_ProcessParcels_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "Comment", "/**\n\x09 * Spawns parcel actors for each shapefile feature passed in.\n\x09 * Coordinates inside Features are already projected into world centimeters by the import session.\n\x09 * Override this in a subclass (or use the default UStreetMapImportCustomizer impl that spawns ACityBlock actors).\n\x09 */" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizerBase.h" },
		{ "ToolTip", "Spawns parcel actors for each shapefile feature passed in.\nCoordinates inside Features are already projected into world centimeters by the import session.\nOverride this in a subclass (or use the default UStreetMapImportCustomizer impl that spawns ACityBlock actors)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Features_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ProcessParcels constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Features_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Features;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ProcessParcels constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ProcessParcels Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Features_Inner = { "Features", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTwinBLDShapeFeature, METADATA_PARAMS(0, nullptr) }; // 56811273e47c969b7aa1d579244c9e2da99a3fc7
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Features = { "Features", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapImportCustomizerBase_eventProcessParcels_Parms, Features), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Features_MetaData), NewProp_Features_MetaData) }; // 56811273e47c969b7aa1d579244c9e2da99a3fc7
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Features_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Features,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ProcessParcels Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStreetMapImportCustomizerBase, nullptr, "ProcessParcels", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<StreetMapImportCustomizerBase_eventProcessParcels_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(StreetMapImportCustomizerBase_eventProcessParcels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreetMapImportCustomizerBase_ProcessParcels(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStreetMapImportCustomizerBase::execProcessParcels)
{
	P_GET_TARRAY_REF(FTwinBLDShapeFeature,Z_Param_Out_Features);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessParcels_Implementation(Z_Param_Out_Features);
	P_NATIVE_END;
}
// ********** End Class UStreetMapImportCustomizerBase Function ProcessParcels *********************

// ********** Begin Class UStreetMapImportCustomizerBase Function ProcessRoads *********************
struct StreetMapImportCustomizerBase_eventProcessRoads_Parms
{
	TArray<FStreetMapRoad> Roads;
};
static FName NAME_UStreetMapImportCustomizerBase_ProcessRoads = FName(TEXT("ProcessRoads"));
void UStreetMapImportCustomizerBase::ProcessRoads(TArray<FStreetMapRoad> const& Roads)
{
	UFunction* Func = FindFunctionChecked(NAME_UStreetMapImportCustomizerBase_ProcessRoads);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		StreetMapImportCustomizerBase_eventProcessRoads_Parms Parms;
		Parms.Roads=Roads;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		ProcessRoads_Implementation(Roads);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStreetMapImportCustomizerBase_ProcessRoads_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Roads_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ProcessRoads constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Roads_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Roads;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ProcessRoads constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ProcessRoads Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Roads_Inner = { "Roads", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStreetMapRoad, METADATA_PARAMS(0, nullptr) }; // 6c8508bd7d96d0a405df0ec09f79a18dcc8f2b44
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Roads = { "Roads", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapImportCustomizerBase_eventProcessRoads_Parms, Roads), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Roads_MetaData), NewProp_Roads_MetaData) }; // 6c8508bd7d96d0a405df0ec09f79a18dcc8f2b44
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Roads_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Roads,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ProcessRoads Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStreetMapImportCustomizerBase, nullptr, "ProcessRoads", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<StreetMapImportCustomizerBase_eventProcessRoads_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(StreetMapImportCustomizerBase_eventProcessRoads_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreetMapImportCustomizerBase_ProcessRoads(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStreetMapImportCustomizerBase::execProcessRoads)
{
	P_GET_TARRAY_REF(FStreetMapRoad,Z_Param_Out_Roads);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessRoads_Implementation(Z_Param_Out_Roads);
	P_NATIVE_END;
}
// ********** End Class UStreetMapImportCustomizerBase Function ProcessRoads ***********************

// ********** Begin Class UStreetMapImportCustomizerBase Function ResetState ***********************
static FName NAME_UStreetMapImportCustomizerBase_ResetState = FName(TEXT("ResetState"));
void UStreetMapImportCustomizerBase::ResetState()
{
	UFunction* Func = FindFunctionChecked(NAME_UStreetMapImportCustomizerBase_ResetState);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		ResetState_Implementation();
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStreetMapImportCustomizerBase_ResetState_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizerBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResetState constinit property declarations ****************************
// ********** End Function ResetState constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStreetMapImportCustomizerBase, nullptr, "ResetState", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UStreetMapImportCustomizerBase_ResetState(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStreetMapImportCustomizerBase::execResetState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetState_Implementation();
	P_NATIVE_END;
}
// ********** End Class UStreetMapImportCustomizerBase Function ResetState *************************

// ********** Begin Class UStreetMapImportCustomizerBase Function SelfDestruct *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStreetMapImportCustomizerBase_SelfDestruct_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Customization" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizerBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SelfDestruct constinit property declarations **************************
// ********** End Function SelfDestruct constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStreetMapImportCustomizerBase, nullptr, "SelfDestruct", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UStreetMapImportCustomizerBase_SelfDestruct(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStreetMapImportCustomizerBase::execSelfDestruct)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelfDestruct();
	P_NATIVE_END;
}
// ********** End Class UStreetMapImportCustomizerBase Function SelfDestruct ***********************

// ********** Begin Class UStreetMapImportCustomizerBase Function SetStreetMap *********************
struct StreetMapImportCustomizerBase_eventSetStreetMap_Parms
{
	const UStreetMap* InStreetMap;
	FTransform InStreetMapTransform;
};
static FName NAME_UStreetMapImportCustomizerBase_SetStreetMap = FName(TEXT("SetStreetMap"));
void UStreetMapImportCustomizerBase::SetStreetMap(const UStreetMap* InStreetMap, FTransform const& InStreetMapTransform)
{
	UFunction* Func = FindFunctionChecked(NAME_UStreetMapImportCustomizerBase_SetStreetMap);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		StreetMapImportCustomizerBase_eventSetStreetMap_Parms Parms;
		Parms.InStreetMap=InStreetMap;
		Parms.InStreetMapTransform=InStreetMapTransform;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		SetStreetMap_Implementation(InStreetMap, InStreetMapTransform);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UStreetMapImportCustomizerBase_SetStreetMap_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStreetMap_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStreetMapTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetStreetMap constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InStreetMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InStreetMapTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetStreetMap constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetStreetMap Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InStreetMap = { "InStreetMap", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapImportCustomizerBase_eventSetStreetMap_Parms, InStreetMap), Z_Construct_UClass_UStreetMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStreetMap_MetaData), NewProp_InStreetMap_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InStreetMapTransform = { "InStreetMapTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(StreetMapImportCustomizerBase_eventSetStreetMap_Parms, InStreetMapTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStreetMapTransform_MetaData), NewProp_InStreetMapTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InStreetMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InStreetMapTransform,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetStreetMap Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UStreetMapImportCustomizerBase, nullptr, "SetStreetMap", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<StreetMapImportCustomizerBase_eventSetStreetMap_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(StreetMapImportCustomizerBase_eventSetStreetMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStreetMapImportCustomizerBase_SetStreetMap(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UStreetMapImportCustomizerBase::execSetStreetMap)
{
	P_GET_OBJECT(UStreetMap,Z_Param_InStreetMap);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_InStreetMapTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStreetMap_Implementation(Z_Param_InStreetMap,Z_Param_Out_InStreetMapTransform);
	P_NATIVE_END;
}
// ********** End Class UStreetMapImportCustomizerBase Function SetStreetMap ***********************

// ********** Begin Class UStreetMapImportCustomizerBase *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UStreetMapImportCustomizerBase_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StreetMap/StreetMapImportCustomizerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStreetMapRoadsProcess_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStreetMapBuildingsProcess_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStreetMapRoadsProcessComplete_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStreetMapBuildingsProcessComplete_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStreetMapParcelsProcess_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStreetMapParcelsProcessComplete_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedActors_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreetMap_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizerBase.h" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreetMapTransform_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/StreetMap/StreetMapImportCustomizerBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UStreetMapImportCustomizerBase constinit property declarations ***********
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStreetMapRoadsProcess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStreetMapBuildingsProcess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStreetMapRoadsProcessComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStreetMapBuildingsProcessComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStreetMapParcelsProcess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStreetMapParcelsProcessComplete;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StreetMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StreetMapTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UStreetMapImportCustomizerBase constinit property declarations *************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetStreetMap"), .Pointer = &UStreetMapImportCustomizerBase::execGetStreetMap },
		{ .NameUTF8 = UTF8TEXT("ProcessBuildings"), .Pointer = &UStreetMapImportCustomizerBase::execProcessBuildings },
		{ .NameUTF8 = UTF8TEXT("ProcessParcels"), .Pointer = &UStreetMapImportCustomizerBase::execProcessParcels },
		{ .NameUTF8 = UTF8TEXT("ProcessRoads"), .Pointer = &UStreetMapImportCustomizerBase::execProcessRoads },
		{ .NameUTF8 = UTF8TEXT("ResetState"), .Pointer = &UStreetMapImportCustomizerBase::execResetState },
		{ .NameUTF8 = UTF8TEXT("SelfDestruct"), .Pointer = &UStreetMapImportCustomizerBase::execSelfDestruct },
		{ .NameUTF8 = UTF8TEXT("SetStreetMap"), .Pointer = &UStreetMapImportCustomizerBase::execSetStreetMap },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStreetMapImportCustomizerBase_GetStreetMap, "GetStreetMap" }, // f8190105a5fd7cfb0bd1df2272edb4f89f40b0f6
		{ &Z_Construct_UFunction_UStreetMapImportCustomizerBase_ProcessBuildings, "ProcessBuildings" }, // 97db3b03a603662236d2044a3587f99ee022123c
		{ &Z_Construct_UFunction_UStreetMapImportCustomizerBase_ProcessParcels, "ProcessParcels" }, // 2f0ea9a401a7b165353899c11b37b6f484e9749d
		{ &Z_Construct_UFunction_UStreetMapImportCustomizerBase_ProcessRoads, "ProcessRoads" }, // 3cef951eddb361d9df9a99c6fcefca9f7ec2072e
		{ &Z_Construct_UFunction_UStreetMapImportCustomizerBase_ResetState, "ResetState" }, // adff56304d071934e867e34de25e459cb4a891cd
		{ &Z_Construct_UFunction_UStreetMapImportCustomizerBase_SelfDestruct, "SelfDestruct" }, // 58795aa4d8a7da2cbad52a23d64b172c5d3f55ac
		{ &Z_Construct_UFunction_UStreetMapImportCustomizerBase_SetStreetMap, "SetStreetMap" }, // 45acbf6bc1bfd28789a286f8d280f0392706f429
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreetMapImportCustomizerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UStreetMapImportCustomizerBase Property Definitions **********************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnStreetMapRoadsProcess = { "OnStreetMapRoadsProcess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMapImportCustomizerBase, OnStreetMapRoadsProcess), Z_Construct_UDelegateFunction_TwinBLDEditor_OnStreetMapRoadsProcess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStreetMapRoadsProcess_MetaData), NewProp_OnStreetMapRoadsProcess_MetaData) }; // 96fa06cdd56cd8a71cb1b6bed7e2990103cc0acf
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnStreetMapBuildingsProcess = { "OnStreetMapBuildingsProcess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMapImportCustomizerBase, OnStreetMapBuildingsProcess), Z_Construct_UDelegateFunction_TwinBLDEditor_OnStreetMapBuildingsProcess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStreetMapBuildingsProcess_MetaData), NewProp_OnStreetMapBuildingsProcess_MetaData) }; // bf23db338b97b233cd3c8283ce3586db5ca573dd
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnStreetMapRoadsProcessComplete = { "OnStreetMapRoadsProcessComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMapImportCustomizerBase, OnStreetMapRoadsProcessComplete), Z_Construct_UDelegateFunction_TwinBLDEditor_OnStreetMapRoadsProcessComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStreetMapRoadsProcessComplete_MetaData), NewProp_OnStreetMapRoadsProcessComplete_MetaData) }; // 9de5dc3c34f266e4435b05a1e0519b41e649e283
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnStreetMapBuildingsProcessComplete = { "OnStreetMapBuildingsProcessComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMapImportCustomizerBase, OnStreetMapBuildingsProcessComplete), Z_Construct_UDelegateFunction_TwinBLDEditor_OnStreetMapBuildingsProcessComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStreetMapBuildingsProcessComplete_MetaData), NewProp_OnStreetMapBuildingsProcessComplete_MetaData) }; // 7a1002315757dc54b2f29e7149b87d55cb753643
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnStreetMapParcelsProcess = { "OnStreetMapParcelsProcess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMapImportCustomizerBase, OnStreetMapParcelsProcess), Z_Construct_UDelegateFunction_TwinBLDEditor_OnStreetMapParcelsProcess__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStreetMapParcelsProcess_MetaData), NewProp_OnStreetMapParcelsProcess_MetaData) }; // c09f02e65d7d103ec54435b4314334eff7344d7b
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnStreetMapParcelsProcessComplete = { "OnStreetMapParcelsProcessComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMapImportCustomizerBase, OnStreetMapParcelsProcessComplete), Z_Construct_UDelegateFunction_TwinBLDEditor_OnStreetMapParcelsProcessComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStreetMapParcelsProcessComplete_MetaData), NewProp_OnStreetMapParcelsProcessComplete_MetaData) }; // c759978e6c06cef132691b57221955dc9f7cb275
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_GeneratedActors_Inner = { "GeneratedActors", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_GeneratedActors = { "GeneratedActors", nullptr, (EPropertyFlags)0x0010000000022005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMapImportCustomizerBase, GeneratedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedActors_MetaData), NewProp_GeneratedActors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StreetMap = { "StreetMap", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMapImportCustomizerBase, StreetMap), Z_Construct_UClass_UStreetMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreetMap_MetaData), NewProp_StreetMap_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_StreetMapTransform = { "StreetMapTransform", nullptr, (EPropertyFlags)0x0020080000002005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMapImportCustomizerBase, StreetMapTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreetMapTransform_MetaData), NewProp_StreetMapTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnStreetMapRoadsProcess,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnStreetMapBuildingsProcess,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnStreetMapRoadsProcessComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnStreetMapBuildingsProcessComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnStreetMapParcelsProcess,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnStreetMapParcelsProcessComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeneratedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeneratedActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StreetMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StreetMapTransform,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UStreetMapImportCustomizerBase Property Definitions ************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UStreetMapImportCustomizerBase,
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
	0x009010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UStreetMapImportCustomizerBase_StaticRegisterNativesUStreetMapImportCustomizerBase()
{
	UClass* Class = UStreetMapImportCustomizerBase::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStreetMapImportCustomizerBase;
UClass* Z_Construct_UClass_UStreetMapImportCustomizerBase(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UStreetMapImportCustomizerBase;
		if (!Z_Registration_Info_UClass_UStreetMapImportCustomizerBase.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("StreetMapImportCustomizerBase"),
				Z_Registration_Info_UClass_UStreetMapImportCustomizerBase.InnerSingleton,
				UStreetMapImportCustomizerBase_StaticRegisterNativesUStreetMapImportCustomizerBase,
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
		return Z_Registration_Info_UClass_UStreetMapImportCustomizerBase.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UStreetMapImportCustomizerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStreetMapImportCustomizerBase.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UStreetMapImportCustomizerBase.OuterSingleton;
}
#undef UHT_STATICS
UStreetMapImportCustomizerBase::UStreetMapImportCustomizerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UStreetMapImportCustomizerBase);
UStreetMapImportCustomizerBase::~UStreetMapImportCustomizerBase() {}
// ********** End Class UStreetMapImportCustomizerBase *********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapImportCustomizerBase_h__Script_TwinBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStreetMapImportCustomizerBase, TEXT("UStreetMapImportCustomizerBase"), &Z_Registration_Info_UClass_UStreetMapImportCustomizerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStreetMapImportCustomizerBase), 3774991719U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_StreetMap_StreetMapImportCustomizerBase_h__Script_TwinBLDEditor_991e1b453a65016e1576d3542a5c197a56cbf977{
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
