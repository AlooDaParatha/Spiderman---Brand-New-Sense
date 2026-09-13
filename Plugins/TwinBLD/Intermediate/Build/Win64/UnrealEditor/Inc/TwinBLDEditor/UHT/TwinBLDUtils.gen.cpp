// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwinBLDUtils.h"
#include "ProjWrapper.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeTwinBLDUtils() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntRect(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FProjParameters(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDUtils(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDUtils(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UTwinBLDUtils Function BoundsToMeters ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDUtils_BoundsToMeters_Statics
struct UHT_STATICS
{
	struct TwinBLDUtils_eventBoundsToMeters_Parms
	{
		FBox2D Bounds;
		FIntRect ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/TwinBLDUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function BoundsToMeters constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BoundsToMeters constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BoundsToMeters Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDUtils_eventBoundsToMeters_Parms, Bounds), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bounds_MetaData), NewProp_Bounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDUtils_eventBoundsToMeters_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntRect, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Bounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function BoundsToMeters Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDUtils, nullptr, "BoundsToMeters", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDUtils_eventBoundsToMeters_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDUtils_eventBoundsToMeters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDUtils_BoundsToMeters(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDUtils::execBoundsToMeters)
{
	P_GET_STRUCT_REF(FBox2D,Z_Param_Out_Bounds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntRect*)Z_Param__Result=UTwinBLDUtils::BoundsToMeters(Z_Param_Out_Bounds);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDUtils Function BoundsToMeters **************************************

// ********** Begin Class UTwinBLDUtils Function Box2ToRect ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDUtils_Box2ToRect_Statics
struct UHT_STATICS
{
	struct TwinBLDUtils_eventBox2ToRect_Parms
	{
		FBox2D Box;
		FIntRect ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/TwinBLDUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Box2ToRect constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Box2ToRect constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Box2ToRect Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDUtils_eventBox2ToRect_Parms, Box), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDUtils_eventBox2ToRect_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntRect, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function Box2ToRect Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDUtils, nullptr, "Box2ToRect", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDUtils_eventBox2ToRect_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDUtils_eventBox2ToRect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDUtils_Box2ToRect(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDUtils::execBox2ToRect)
{
	P_GET_STRUCT_REF(FBox2D,Z_Param_Out_Box);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntRect*)Z_Param__Result=UTwinBLDUtils::Box2ToRect(Z_Param_Out_Box);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDUtils Function Box2ToRect ******************************************

// ********** Begin Class UTwinBLDUtils Function Convert2dTo3d *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDUtils_Convert2dTo3d_Statics
struct UHT_STATICS
{
	struct TwinBLDUtils_eventConvert2dTo3d_Parms
	{
		TArray<FVector2D> Source;
		double Z;
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "CPP_Default_Z", "0.000000" },
		{ "ModuleRelativePath", "Public/TwinBLDUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Convert2dTo3d constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Source_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Source;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Z;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Convert2dTo3d constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Convert2dTo3d Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Source_Inner = { "Source", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDUtils_eventConvert2dTo3d_Parms, Source), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Source_MetaData), NewProp_Source_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDUtils_eventConvert2dTo3d_Parms, Z), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDUtils_eventConvert2dTo3d_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Source_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function Convert2dTo3d Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDUtils, nullptr, "Convert2dTo3d", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDUtils_eventConvert2dTo3d_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDUtils_eventConvert2dTo3d_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDUtils_Convert2dTo3d(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDUtils::execConvert2dTo3d)
{
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_Source);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Z);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=UTwinBLDUtils::Convert2dTo3d(Z_Param_Out_Source,Z_Param_Z);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDUtils Function Convert2dTo3d ***************************************

// ********** Begin Class UTwinBLDUtils Function DestroyActorsOfClass ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDUtils_DestroyActorsOfClass_Statics
struct UHT_STATICS
{
	struct TwinBLDUtils_eventDestroyActorsOfClass_Parms
	{
		TArray<TSubclassOf<AActor>> Classes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/TwinBLDUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Classes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function DestroyActorsOfClass constinit property declarations ******************
	static const UECodeGen_Private::FClassPropertyParams NewProp_Classes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Classes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function DestroyActorsOfClass constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function DestroyActorsOfClass Property Definitions *****************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_Classes_Inner = { "Classes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Classes = { "Classes", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDUtils_eventDestroyActorsOfClass_Parms, Classes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Classes_MetaData), NewProp_Classes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Classes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Classes,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function DestroyActorsOfClass Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDUtils, nullptr, "DestroyActorsOfClass", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDUtils_eventDestroyActorsOfClass_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDUtils_eventDestroyActorsOfClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDUtils_DestroyActorsOfClass(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDUtils::execDestroyActorsOfClass)
{
	P_GET_TARRAY_REF(TSubclassOf<AActor>,Z_Param_Out_Classes);
	P_FINISH;
	P_NATIVE_BEGIN;
	UTwinBLDUtils::DestroyActorsOfClass(Z_Param_Out_Classes);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDUtils Function DestroyActorsOfClass ********************************

// ********** Begin Class UTwinBLDUtils Function GetBoxCenter **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDUtils_GetBoxCenter_Statics
struct UHT_STATICS
{
	struct TwinBLDUtils_eventGetBoxCenter_Parms
	{
		FBox2D Box;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/TwinBLDUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBoxCenter constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBoxCenter constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBoxCenter Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDUtils_eventGetBoxCenter_Parms, Box), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDUtils_eventGetBoxCenter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetBoxCenter Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDUtils, nullptr, "GetBoxCenter", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDUtils_eventGetBoxCenter_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDUtils_eventGetBoxCenter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDUtils_GetBoxCenter(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDUtils::execGetBoxCenter)
{
	P_GET_STRUCT_REF(FBox2D,Z_Param_Out_Box);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UTwinBLDUtils::GetBoxCenter(Z_Param_Out_Box);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDUtils Function GetBoxCenter ****************************************

// ********** Begin Class UTwinBLDUtils Function GetProjectProjParameters **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDUtils_GetProjectProjParameters_Statics
struct UHT_STATICS
{
	struct TwinBLDUtils_eventGetProjectProjParameters_Parms
	{
		FProjParameters Parameters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/TwinBLDUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetProjectProjParameters constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetProjectProjParameters constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetProjectProjParameters Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDUtils_eventGetProjectProjParameters_Parms, Parameters), Z_Construct_UScriptStruct_FProjParameters, METADATA_PARAMS(0, nullptr) }; // cec61958fb1581b77d276c42d9bd42ef72dcbb72
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetProjectProjParameters Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDUtils, nullptr, "GetProjectProjParameters", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDUtils_eventGetProjectProjParameters_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDUtils_eventGetProjectProjParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDUtils_GetProjectProjParameters(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDUtils::execGetProjectProjParameters)
{
	P_GET_STRUCT_REF(FProjParameters,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	UTwinBLDUtils::GetProjectProjParameters(Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDUtils Function GetProjectProjParameters ****************************

// ********** Begin Class UTwinBLDUtils Function RectToBox *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDUtils_RectToBox_Statics
struct UHT_STATICS
{
	struct TwinBLDUtils_eventRectToBox_Parms
	{
		FIntRect Rect;
		FVector2D Z;
		FBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/TwinBLDUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rect_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RectToBox constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Z;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RectToBox constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RectToBox Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Rect = { "Rect", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDUtils_eventRectToBox_Parms, Rect), Z_Construct_UScriptStruct_FIntRect, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rect_MetaData), NewProp_Rect_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDUtils_eventRectToBox_Parms, Z), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Z_MetaData), NewProp_Z_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDUtils_eventRectToBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Rect,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RectToBox Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDUtils, nullptr, "RectToBox", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDUtils_eventRectToBox_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDUtils_eventRectToBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDUtils_RectToBox(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDUtils::execRectToBox)
{
	P_GET_STRUCT_REF(FIntRect,Z_Param_Out_Rect);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Z);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBox*)Z_Param__Result=UTwinBLDUtils::RectToBox(Z_Param_Out_Rect,Z_Param_Out_Z);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDUtils Function RectToBox *******************************************

// ********** Begin Class UTwinBLDUtils Function RectToBox2 ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDUtils_RectToBox2_Statics
struct UHT_STATICS
{
	struct TwinBLDUtils_eventRectToBox2_Parms
	{
		FIntRect Rect;
		FBox2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/TwinBLDUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rect_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RectToBox2 constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RectToBox2 constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RectToBox2 Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Rect = { "Rect", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDUtils_eventRectToBox2_Parms, Rect), Z_Construct_UScriptStruct_FIntRect, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rect_MetaData), NewProp_Rect_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDUtils_eventRectToBox2_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Rect,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RectToBox2 Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDUtils, nullptr, "RectToBox2", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDUtils_eventRectToBox2_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDUtils_eventRectToBox2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDUtils_RectToBox2(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDUtils::execRectToBox2)
{
	P_GET_STRUCT_REF(FIntRect,Z_Param_Out_Rect);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBox2D*)Z_Param__Result=UTwinBLDUtils::RectToBox2(Z_Param_Out_Rect);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDUtils Function RectToBox2 ******************************************

// ********** Begin Class UTwinBLDUtils Function TransformCoordinatesBounds ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDUtils_TransformCoordinatesBounds_Statics
struct UHT_STATICS
{
	struct TwinBLDUtils_eventTransformCoordinatesBounds_Parms
	{
		FBox2D Coordinates;
		FProjParameters Parameters;
		bool bInverse;
		FBox2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/TwinBLDUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function TransformCoordinatesBounds constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static void NewProp_bInverse_SetBit(void* Obj)
	{
		((TwinBLDUtils_eventTransformCoordinatesBounds_Parms*)Obj)->bInverse = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInverse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TransformCoordinatesBounds constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TransformCoordinatesBounds Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDUtils_eventTransformCoordinatesBounds_Parms, Coordinates), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coordinates_MetaData), NewProp_Coordinates_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDUtils_eventTransformCoordinatesBounds_Parms, Parameters), Z_Construct_UScriptStruct_FProjParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // cec61958fb1581b77d276c42d9bd42ef72dcbb72
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInverse = { "bInverse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TwinBLDUtils_eventTransformCoordinatesBounds_Parms), &UHT_STATICS::NewProp_bInverse_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDUtils_eventTransformCoordinatesBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Coordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInverse,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function TransformCoordinatesBounds Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDUtils, nullptr, "TransformCoordinatesBounds", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDUtils_eventTransformCoordinatesBounds_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDUtils_eventTransformCoordinatesBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDUtils_TransformCoordinatesBounds(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDUtils::execTransformCoordinatesBounds)
{
	P_GET_STRUCT_REF(FBox2D,Z_Param_Out_Coordinates);
	P_GET_STRUCT_REF(FProjParameters,Z_Param_Out_Parameters);
	P_GET_UBOOL(Z_Param_bInverse);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBox2D*)Z_Param__Result=UTwinBLDUtils::TransformCoordinatesBounds(Z_Param_Out_Coordinates,Z_Param_Out_Parameters,Z_Param_bInverse);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDUtils Function TransformCoordinatesBounds **************************

// ********** Begin Class UTwinBLDUtils Function TransformCoordinatesPoint *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDUtils_TransformCoordinatesPoint_Statics
struct UHT_STATICS
{
	struct TwinBLDUtils_eventTransformCoordinatesPoint_Parms
	{
		FVector2D Coordinates;
		FProjParameters Parameters;
		bool bInverse;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/TwinBLDUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function TransformCoordinatesPoint constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static void NewProp_bInverse_SetBit(void* Obj)
	{
		((TwinBLDUtils_eventTransformCoordinatesPoint_Parms*)Obj)->bInverse = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInverse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TransformCoordinatesPoint constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TransformCoordinatesPoint Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDUtils_eventTransformCoordinatesPoint_Parms, Coordinates), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coordinates_MetaData), NewProp_Coordinates_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDUtils_eventTransformCoordinatesPoint_Parms, Parameters), Z_Construct_UScriptStruct_FProjParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // cec61958fb1581b77d276c42d9bd42ef72dcbb72
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bInverse = { "bInverse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TwinBLDUtils_eventTransformCoordinatesPoint_Parms), &UHT_STATICS::NewProp_bInverse_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDUtils_eventTransformCoordinatesPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Coordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Parameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bInverse,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function TransformCoordinatesPoint Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDUtils, nullptr, "TransformCoordinatesPoint", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDUtils_eventTransformCoordinatesPoint_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDUtils_eventTransformCoordinatesPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDUtils_TransformCoordinatesPoint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDUtils::execTransformCoordinatesPoint)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Coordinates);
	P_GET_STRUCT_REF(FProjParameters,Z_Param_Out_Parameters);
	P_GET_UBOOL(Z_Param_bInverse);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UTwinBLDUtils::TransformCoordinatesPoint(Z_Param_Out_Coordinates,Z_Param_Out_Parameters,Z_Param_bInverse);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDUtils Function TransformCoordinatesPoint ***************************

// ********** Begin Class UTwinBLDUtils ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UTwinBLDUtils_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "TwinBLDUtils.h" },
		{ "ModuleRelativePath", "Public/TwinBLDUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTwinBLDUtils constinit property declarations ****************************
// ********** End Class UTwinBLDUtils constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BoundsToMeters"), .Pointer = &UTwinBLDUtils::execBoundsToMeters },
		{ .NameUTF8 = UTF8TEXT("Box2ToRect"), .Pointer = &UTwinBLDUtils::execBox2ToRect },
		{ .NameUTF8 = UTF8TEXT("Convert2dTo3d"), .Pointer = &UTwinBLDUtils::execConvert2dTo3d },
		{ .NameUTF8 = UTF8TEXT("DestroyActorsOfClass"), .Pointer = &UTwinBLDUtils::execDestroyActorsOfClass },
		{ .NameUTF8 = UTF8TEXT("GetBoxCenter"), .Pointer = &UTwinBLDUtils::execGetBoxCenter },
		{ .NameUTF8 = UTF8TEXT("GetProjectProjParameters"), .Pointer = &UTwinBLDUtils::execGetProjectProjParameters },
		{ .NameUTF8 = UTF8TEXT("RectToBox"), .Pointer = &UTwinBLDUtils::execRectToBox },
		{ .NameUTF8 = UTF8TEXT("RectToBox2"), .Pointer = &UTwinBLDUtils::execRectToBox2 },
		{ .NameUTF8 = UTF8TEXT("TransformCoordinatesBounds"), .Pointer = &UTwinBLDUtils::execTransformCoordinatesBounds },
		{ .NameUTF8 = UTF8TEXT("TransformCoordinatesPoint"), .Pointer = &UTwinBLDUtils::execTransformCoordinatesPoint },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTwinBLDUtils_BoundsToMeters, "BoundsToMeters" }, // d822193e3ef23c3601316c2bb9fcf7be32788568
		{ &Z_Construct_UFunction_UTwinBLDUtils_Box2ToRect, "Box2ToRect" }, // fd747ce6e94a4cee1a753fb8527791549304334e
		{ &Z_Construct_UFunction_UTwinBLDUtils_Convert2dTo3d, "Convert2dTo3d" }, // fdd3cb876996b4288bcb1ff08020433de86f801e
		{ &Z_Construct_UFunction_UTwinBLDUtils_DestroyActorsOfClass, "DestroyActorsOfClass" }, // 39bf1033068ffc91f00c1e9d5bba0e7ffb021d4f
		{ &Z_Construct_UFunction_UTwinBLDUtils_GetBoxCenter, "GetBoxCenter" }, // 8aacf86718f55db0d3227b56f0942daa87d5ced2
		{ &Z_Construct_UFunction_UTwinBLDUtils_GetProjectProjParameters, "GetProjectProjParameters" }, // 11a40d231e68702b1236630183a5eb396931be03
		{ &Z_Construct_UFunction_UTwinBLDUtils_RectToBox, "RectToBox" }, // c640165fb3f568932e0e23b8f3cedb228e652248
		{ &Z_Construct_UFunction_UTwinBLDUtils_RectToBox2, "RectToBox2" }, // 055e2a0a86c7726fc7821c01ca898996c472cf17
		{ &Z_Construct_UFunction_UTwinBLDUtils_TransformCoordinatesBounds, "TransformCoordinatesBounds" }, // 22cc111cf062522c360d28dae4f08cd7c0212c51
		{ &Z_Construct_UFunction_UTwinBLDUtils_TransformCoordinatesPoint, "TransformCoordinatesPoint" }, // 7be4238382a0ce7af78b2aa86f9afcc68ee5262e
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinBLDUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UTwinBLDUtils,
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
static void UTwinBLDUtils_StaticRegisterNativesUTwinBLDUtils()
{
	UClass* Class = UTwinBLDUtils::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTwinBLDUtils;
UClass* Z_Construct_UClass_UTwinBLDUtils(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UTwinBLDUtils;
		if (!Z_Registration_Info_UClass_UTwinBLDUtils.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("TwinBLDUtils"),
				Z_Registration_Info_UClass_UTwinBLDUtils.InnerSingleton,
				UTwinBLDUtils_StaticRegisterNativesUTwinBLDUtils,
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
		return Z_Registration_Info_UClass_UTwinBLDUtils.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UTwinBLDUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTwinBLDUtils.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UTwinBLDUtils.OuterSingleton;
}
#undef UHT_STATICS
UTwinBLDUtils::UTwinBLDUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTwinBLDUtils);
UTwinBLDUtils::~UTwinBLDUtils() {}
// ********** End Class UTwinBLDUtils **************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDUtils_h__Script_TwinBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTwinBLDUtils, TEXT("UTwinBLDUtils"), &Z_Registration_Info_UClass_UTwinBLDUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTwinBLDUtils), 3747156494U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDUtils_h__Script_TwinBLDEditor_313b025e502c4c35f58e2ffaa33b6b3b3cbb69cc{
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
