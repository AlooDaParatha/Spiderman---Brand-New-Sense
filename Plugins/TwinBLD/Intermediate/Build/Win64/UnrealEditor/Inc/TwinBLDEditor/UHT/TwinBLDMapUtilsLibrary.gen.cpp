// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintLibraries/TwinBLDMapUtilsLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeTwinBLDMapUtilsLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDMapUtilsLibrary(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDMapUtilsLibrary(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UTwinBLDMapUtilsLibrary Function DetectBuildingFacadesSmart **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDMapUtilsLibrary_DetectBuildingFacadesSmart_Statics
struct UHT_STATICS
{
	struct TwinBLDMapUtilsLibrary_eventDetectBuildingFacadesSmart_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD|Map Utils" },
		{ "ModuleRelativePath", "Public/BlueprintLibraries/TwinBLDMapUtilsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function DetectBuildingFacadesSmart constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DetectBuildingFacadesSmart constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DetectBuildingFacadesSmart Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDMapUtilsLibrary_eventDetectBuildingFacadesSmart_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DetectBuildingFacadesSmart Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDMapUtilsLibrary, nullptr, "DetectBuildingFacadesSmart", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDMapUtilsLibrary_eventDetectBuildingFacadesSmart_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDMapUtilsLibrary_eventDetectBuildingFacadesSmart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDMapUtilsLibrary_DetectBuildingFacadesSmart(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDMapUtilsLibrary::execDetectBuildingFacadesSmart)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UTwinBLDMapUtilsLibrary::DetectBuildingFacadesSmart(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDMapUtilsLibrary Function DetectBuildingFacadesSmart ****************

// ********** Begin Class UTwinBLDMapUtilsLibrary Function OpenLocalOSMImporter ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDMapUtilsLibrary_OpenLocalOSMImporter_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD|Map Utils" },
		{ "Comment", "/** Opens the TwinBLD Local OSM Importer window (equivalent to Tools \xe2\x86\x92 TwinBLD \xe2\x86\x92 Import Map Data). */" },
		{ "ModuleRelativePath", "Public/BlueprintLibraries/TwinBLDMapUtilsLibrary.h" },
		{ "ToolTip", "Opens the TwinBLD Local OSM Importer window (equivalent to Tools \xe2\x86\x92 TwinBLD \xe2\x86\x92 Import Map Data)." },
	};
#endif // WITH_METADATA

// ********** Begin Function OpenLocalOSMImporter constinit property declarations ******************
// ********** End Function OpenLocalOSMImporter constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDMapUtilsLibrary, nullptr, "OpenLocalOSMImporter", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UTwinBLDMapUtilsLibrary_OpenLocalOSMImporter(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDMapUtilsLibrary::execOpenLocalOSMImporter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UTwinBLDMapUtilsLibrary::OpenLocalOSMImporter();
	P_NATIVE_END;
}
// ********** End Class UTwinBLDMapUtilsLibrary Function OpenLocalOSMImporter **********************

// ********** Begin Class UTwinBLDMapUtilsLibrary Function SnapBuildingsToLandscape ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDMapUtilsLibrary_SnapBuildingsToLandscape_Statics
struct UHT_STATICS
{
	struct TwinBLDMapUtilsLibrary_eventSnapBuildingsToLandscape_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD|Map Utils" },
		{ "ModuleRelativePath", "Public/BlueprintLibraries/TwinBLDMapUtilsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function SnapBuildingsToLandscape constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SnapBuildingsToLandscape constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SnapBuildingsToLandscape Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDMapUtilsLibrary_eventSnapBuildingsToLandscape_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SnapBuildingsToLandscape Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDMapUtilsLibrary, nullptr, "SnapBuildingsToLandscape", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDMapUtilsLibrary_eventSnapBuildingsToLandscape_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDMapUtilsLibrary_eventSnapBuildingsToLandscape_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDMapUtilsLibrary_SnapBuildingsToLandscape(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDMapUtilsLibrary::execSnapBuildingsToLandscape)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UTwinBLDMapUtilsLibrary::SnapBuildingsToLandscape(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDMapUtilsLibrary Function SnapBuildingsToLandscape ******************

// ********** Begin Class UTwinBLDMapUtilsLibrary Function SnapRoadsToLandscape ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDMapUtilsLibrary_SnapRoadsToLandscape_Statics
struct UHT_STATICS
{
	struct TwinBLDMapUtilsLibrary_eventSnapRoadsToLandscape_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD|Map Utils" },
		{ "ModuleRelativePath", "Public/BlueprintLibraries/TwinBLDMapUtilsLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA

// ********** Begin Function SnapRoadsToLandscape constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SnapRoadsToLandscape constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SnapRoadsToLandscape Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDMapUtilsLibrary_eventSnapRoadsToLandscape_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SnapRoadsToLandscape Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDMapUtilsLibrary, nullptr, "SnapRoadsToLandscape", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDMapUtilsLibrary_eventSnapRoadsToLandscape_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDMapUtilsLibrary_eventSnapRoadsToLandscape_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDMapUtilsLibrary_SnapRoadsToLandscape(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDMapUtilsLibrary::execSnapRoadsToLandscape)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UTwinBLDMapUtilsLibrary::SnapRoadsToLandscape(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDMapUtilsLibrary Function SnapRoadsToLandscape **********************

// ********** Begin Class UTwinBLDMapUtilsLibrary Function ValidateBLDRAndOpenAIKey ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDMapUtilsLibrary_ValidateBLDRAndOpenAIKey_Statics
struct UHT_STATICS
{
	struct TwinBLDMapUtilsLibrary_eventValidateBLDRAndOpenAIKey_Parms
	{
		bool bShowDialogOnFailure;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "AdvancedDisplay", "bShowDialogOnFailure" },
		{ "Category", "TwinBLD|Map Utils" },
		{ "Comment", "/**\n\x09 * Validates that required dependencies for certain TwinBLD workflows are available.\n\x09 * Checks whether the \"BLDR\" plugin is mounted (no direct dependency on BLDR code).\n\x09 *\n\x09 * @param bShowDialogOnFailure If true, shows a modal dialog describing missing requirements.\n\x09 * @return True if all checks pass; false otherwise.\n\x09 */" },
		{ "CPP_Default_bShowDialogOnFailure", "true" },
		{ "ModuleRelativePath", "Public/BlueprintLibraries/TwinBLDMapUtilsLibrary.h" },
		{ "ToolTip", "Validates that required dependencies for certain TwinBLD workflows are available.\nChecks whether the \"BLDR\" plugin is mounted (no direct dependency on BLDR code).\n\n@param bShowDialogOnFailure If true, shows a modal dialog describing missing requirements.\n@return True if all checks pass; false otherwise." },
	};
#endif // WITH_METADATA

// ********** Begin Function ValidateBLDRAndOpenAIKey constinit property declarations **************
	static void NewProp_bShowDialogOnFailure_SetBit(void* Obj)
	{
		((TwinBLDMapUtilsLibrary_eventValidateBLDRAndOpenAIKey_Parms*)Obj)->bShowDialogOnFailure = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDialogOnFailure;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwinBLDMapUtilsLibrary_eventValidateBLDRAndOpenAIKey_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ValidateBLDRAndOpenAIKey constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ValidateBLDRAndOpenAIKey Property Definitions *************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShowDialogOnFailure = { "bShowDialogOnFailure", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TwinBLDMapUtilsLibrary_eventValidateBLDRAndOpenAIKey_Parms), &UHT_STATICS::NewProp_bShowDialogOnFailure_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TwinBLDMapUtilsLibrary_eventValidateBLDRAndOpenAIKey_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShowDialogOnFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ValidateBLDRAndOpenAIKey Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDMapUtilsLibrary, nullptr, "ValidateBLDRAndOpenAIKey", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDMapUtilsLibrary_eventValidateBLDRAndOpenAIKey_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDMapUtilsLibrary_eventValidateBLDRAndOpenAIKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDMapUtilsLibrary_ValidateBLDRAndOpenAIKey(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDMapUtilsLibrary::execValidateBLDRAndOpenAIKey)
{
	P_GET_UBOOL(Z_Param_bShowDialogOnFailure);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTwinBLDMapUtilsLibrary::ValidateBLDRAndOpenAIKey(Z_Param_bShowDialogOnFailure);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDMapUtilsLibrary Function ValidateBLDRAndOpenAIKey ******************

// ********** Begin Class UTwinBLDMapUtilsLibrary **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UTwinBLDMapUtilsLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * Map utility functions for TwinBLD.\n * Editor-only (TwinBLDEditor module); implementations are currently stubs.\n */" },
		{ "IncludePath", "BlueprintLibraries/TwinBLDMapUtilsLibrary.h" },
		{ "ModuleRelativePath", "Public/BlueprintLibraries/TwinBLDMapUtilsLibrary.h" },
		{ "ToolTip", "Map utility functions for TwinBLD.\nEditor-only (TwinBLDEditor module); implementations are currently stubs." },
	};
#endif // WITH_METADATA

// ********** Begin Class UTwinBLDMapUtilsLibrary constinit property declarations ******************
// ********** End Class UTwinBLDMapUtilsLibrary constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DetectBuildingFacadesSmart"), .Pointer = &UTwinBLDMapUtilsLibrary::execDetectBuildingFacadesSmart },
		{ .NameUTF8 = UTF8TEXT("OpenLocalOSMImporter"), .Pointer = &UTwinBLDMapUtilsLibrary::execOpenLocalOSMImporter },
		{ .NameUTF8 = UTF8TEXT("SnapBuildingsToLandscape"), .Pointer = &UTwinBLDMapUtilsLibrary::execSnapBuildingsToLandscape },
		{ .NameUTF8 = UTF8TEXT("SnapRoadsToLandscape"), .Pointer = &UTwinBLDMapUtilsLibrary::execSnapRoadsToLandscape },
		{ .NameUTF8 = UTF8TEXT("ValidateBLDRAndOpenAIKey"), .Pointer = &UTwinBLDMapUtilsLibrary::execValidateBLDRAndOpenAIKey },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTwinBLDMapUtilsLibrary_DetectBuildingFacadesSmart, "DetectBuildingFacadesSmart" }, // 5426d3d93794e85d7d6b7b795b330d00ba3adba5
		{ &Z_Construct_UFunction_UTwinBLDMapUtilsLibrary_OpenLocalOSMImporter, "OpenLocalOSMImporter" }, // 07e56fb42904383714841fe4edc03f60272e4e57
		{ &Z_Construct_UFunction_UTwinBLDMapUtilsLibrary_SnapBuildingsToLandscape, "SnapBuildingsToLandscape" }, // d9d32824d968ed91dd0d8721a328ac351e6319c9
		{ &Z_Construct_UFunction_UTwinBLDMapUtilsLibrary_SnapRoadsToLandscape, "SnapRoadsToLandscape" }, // e985fc2a8849ee3db14f92f841755ed23b415633
		{ &Z_Construct_UFunction_UTwinBLDMapUtilsLibrary_ValidateBLDRAndOpenAIKey, "ValidateBLDRAndOpenAIKey" }, // 20ef91a3310ef1648a3da7b373d19fd9a374e6d6
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinBLDMapUtilsLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UTwinBLDMapUtilsLibrary,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UTwinBLDMapUtilsLibrary_StaticRegisterNativesUTwinBLDMapUtilsLibrary()
{
	UClass* Class = UTwinBLDMapUtilsLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTwinBLDMapUtilsLibrary;
UClass* Z_Construct_UClass_UTwinBLDMapUtilsLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UTwinBLDMapUtilsLibrary;
		if (!Z_Registration_Info_UClass_UTwinBLDMapUtilsLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("TwinBLDMapUtilsLibrary"),
				Z_Registration_Info_UClass_UTwinBLDMapUtilsLibrary.InnerSingleton,
				UTwinBLDMapUtilsLibrary_StaticRegisterNativesUTwinBLDMapUtilsLibrary,
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
		return Z_Registration_Info_UClass_UTwinBLDMapUtilsLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UTwinBLDMapUtilsLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTwinBLDMapUtilsLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UTwinBLDMapUtilsLibrary.OuterSingleton;
}
#undef UHT_STATICS
UTwinBLDMapUtilsLibrary::UTwinBLDMapUtilsLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTwinBLDMapUtilsLibrary);
UTwinBLDMapUtilsLibrary::~UTwinBLDMapUtilsLibrary() {}
// ********** End Class UTwinBLDMapUtilsLibrary ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_BlueprintLibraries_TwinBLDMapUtilsLibrary_h__Script_TwinBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTwinBLDMapUtilsLibrary, TEXT("UTwinBLDMapUtilsLibrary"), &Z_Registration_Info_UClass_UTwinBLDMapUtilsLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTwinBLDMapUtilsLibrary), 3109969005U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_BlueprintLibraries_TwinBLDMapUtilsLibrary_h__Script_TwinBLDEditor_c86bc7a60ea001cb6c7f96780ada8fe9e6fe2490{
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
