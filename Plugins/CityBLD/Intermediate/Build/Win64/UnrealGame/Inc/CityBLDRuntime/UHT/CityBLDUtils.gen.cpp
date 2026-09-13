// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CityBLDUtils.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeCityBLDUtils() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDRuntime(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UCityBLDUtils(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UBuildingStyle(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UCityBLDUtils(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UCityBLDUtils Function FindIntersectionPointFromVector *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCityBLDUtils_FindIntersectionPointFromVector_Statics
struct UHT_STATICS
{
	struct CityBLDUtils_eventFindIntersectionPointFromVector_Parms
	{
		FVector PointA;
		FVector DirectionA;
		FVector PointB;
		FVector DirectionB;
		FVector Intersection;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|Utilities|Math" },
		{ "Comment", "/**\n\x09 * Finds the intersection point of two lines defined by points and directions.\n\x09 * @param PointA Starting point of the first line\n\x09 * @param DirectionA Direction vector of the first line\n\x09 * @param PointB Starting point of the second line\n\x09 * @param DirectionB Direction vector of the second line\n\x09 * @param Intersection Output parameter for the intersection point\n\x09 * @return True if an intersection was found, false if lines are parallel\n\x09 */" },
		{ "DisplayName", "Get Intersection Point Of Two Vectors With Directions" },
		{ "ModuleRelativePath", "Public/CityBLDUtils.h" },
		{ "ToolTip", "Finds the intersection point of two lines defined by points and directions.\n@param PointA Starting point of the first line\n@param DirectionA Direction vector of the first line\n@param PointB Starting point of the second line\n@param DirectionB Direction vector of the second line\n@param Intersection Output parameter for the intersection point\n@return True if an intersection was found, false if lines are parallel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointA_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionA_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointB_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindIntersectionPointFromVector constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointB;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionB;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Intersection;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CityBLDUtils_eventFindIntersectionPointFromVector_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindIntersectionPointFromVector constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindIntersectionPointFromVector Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PointA = { "PointA", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(CityBLDUtils_eventFindIntersectionPointFromVector_Parms, PointA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointA_MetaData), NewProp_PointA_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DirectionA = { "DirectionA", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(CityBLDUtils_eventFindIntersectionPointFromVector_Parms, DirectionA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionA_MetaData), NewProp_DirectionA_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PointB = { "PointB", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(CityBLDUtils_eventFindIntersectionPointFromVector_Parms, PointB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointB_MetaData), NewProp_PointB_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DirectionB = { "DirectionB", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(CityBLDUtils_eventFindIntersectionPointFromVector_Parms, DirectionB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionB_MetaData), NewProp_DirectionB_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Intersection = { "Intersection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(CityBLDUtils_eventFindIntersectionPointFromVector_Parms, Intersection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(CityBLDUtils_eventFindIntersectionPointFromVector_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointA,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DirectionA,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointB,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DirectionB,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Intersection,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function FindIntersectionPointFromVector Property Definitions ********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCityBLDUtils, nullptr, "FindIntersectionPointFromVector", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CityBLDUtils_eventFindIntersectionPointFromVector_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CityBLDUtils_eventFindIntersectionPointFromVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCityBLDUtils_FindIntersectionPointFromVector(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCityBLDUtils::execFindIntersectionPointFromVector)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_PointA);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_DirectionA);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_PointB);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_DirectionB);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Intersection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UCityBLDUtils::FindIntersectionPointFromVector(Z_Param_Out_PointA,Z_Param_Out_DirectionA,Z_Param_Out_PointB,Z_Param_Out_DirectionB,Z_Param_Out_Intersection);
	P_NATIVE_END;
}
// ********** End Class UCityBLDUtils Function FindIntersectionPointFromVector *********************

// ********** Begin Class UCityBLDUtils Function GetBestNumFloorsForHeight *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCityBLDUtils_GetBestNumFloorsForHeight_Statics
struct UHT_STATICS
{
	struct CityBLDUtils_eventGetBestNumFloorsForHeight_Parms
	{
		TSubclassOf<UBuildingStyle> Style;
		float TargetHeight;
		int32 MinFloors;
		int32 MaxFloors;
		bool bRepeatLast;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|Utilities|Building" },
		{ "CPP_Default_bRepeatLast", "true" },
		{ "CPP_Default_MaxFloors", "200" },
		{ "CPP_Default_MinFloors", "1" },
		{ "ModuleRelativePath", "Public/CityBLDUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBestNumFloorsForHeight constinit property declarations *************
	static const UECodeGen_Private::FClassPropertyParams NewProp_Style;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinFloors;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxFloors;
	static void NewProp_bRepeatLast_SetBit(void* Obj)
	{
		((CityBLDUtils_eventGetBestNumFloorsForHeight_Parms*)Obj)->bRepeatLast = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRepeatLast;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBestNumFloorsForHeight constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBestNumFloorsForHeight Property Definitions ************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(CityBLDUtils_eventGetBestNumFloorsForHeight_Parms, Style), Z_Construct_UClass_UClass, Z_Construct_UClass_UBuildingStyle, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TargetHeight = { "TargetHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(CityBLDUtils_eventGetBestNumFloorsForHeight_Parms, TargetHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MinFloors = { "MinFloors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(CityBLDUtils_eventGetBestNumFloorsForHeight_Parms, MinFloors), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_MaxFloors = { "MaxFloors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(CityBLDUtils_eventGetBestNumFloorsForHeight_Parms, MaxFloors), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRepeatLast = { "bRepeatLast", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(CityBLDUtils_eventGetBestNumFloorsForHeight_Parms), &UHT_STATICS::NewProp_bRepeatLast_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(CityBLDUtils_eventGetBestNumFloorsForHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Style,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinFloors,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxFloors,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRepeatLast,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetBestNumFloorsForHeight Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCityBLDUtils, nullptr, "GetBestNumFloorsForHeight", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CityBLDUtils_eventGetBestNumFloorsForHeight_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CityBLDUtils_eventGetBestNumFloorsForHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCityBLDUtils_GetBestNumFloorsForHeight(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCityBLDUtils::execGetBestNumFloorsForHeight)
{
	P_GET_OBJECT(UClass,Z_Param_Style);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TargetHeight);
	P_GET_PROPERTY(FIntProperty,Z_Param_MinFloors);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxFloors);
	P_GET_UBOOL(Z_Param_bRepeatLast);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UCityBLDUtils::GetBestNumFloorsForHeight(Z_Param_Style,Z_Param_TargetHeight,Z_Param_MinFloors,Z_Param_MaxFloors,Z_Param_bRepeatLast);
	P_NATIVE_END;
}
// ********** End Class UCityBLDUtils Function GetBestNumFloorsForHeight ***************************

// ********** Begin Class UCityBLDUtils Function IsPointInPolygon2D ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCityBLDUtils_IsPointInPolygon2D_Statics
struct UHT_STATICS
{
	struct CityBLDUtils_eventIsPointInPolygon2D_Parms
	{
		FVector Point;
		TArray<FVector> Polygon;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|Utilities|Math" },
		{ "Comment", "/**\n\x09 * Tests if a 2D point is inside a polygon (using X,Y coordinates).\n\x09 * Uses a standard ray-casting (crossing number) algorithm.\n\x09 * @param Point - The point to test\n\x09 * @param Polygon - The polygon vertices (must be non-empty and non-self-intersecting for best results)\n\x09 * @return True if the point is inside the polygon\n\x09 */" },
		{ "ModuleRelativePath", "Public/CityBLDUtils.h" },
		{ "ToolTip", "Tests if a 2D point is inside a polygon (using X,Y coordinates).\nUses a standard ray-casting (crossing number) algorithm.\n@param Point - The point to test\n@param Polygon - The polygon vertices (must be non-empty and non-self-intersecting for best results)\n@return True if the point is inside the polygon" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Polygon_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPointInPolygon2D constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Polygon_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Polygon;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CityBLDUtils_eventIsPointInPolygon2D_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPointInPolygon2D constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPointInPolygon2D Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(CityBLDUtils_eventIsPointInPolygon2D_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Point_MetaData), NewProp_Point_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Polygon_Inner = { "Polygon", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Polygon = { "Polygon", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(CityBLDUtils_eventIsPointInPolygon2D_Parms, Polygon), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Polygon_MetaData), NewProp_Polygon_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(CityBLDUtils_eventIsPointInPolygon2D_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Point,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Polygon_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Polygon,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsPointInPolygon2D Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCityBLDUtils, nullptr, "IsPointInPolygon2D", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CityBLDUtils_eventIsPointInPolygon2D_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CityBLDUtils_eventIsPointInPolygon2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCityBLDUtils_IsPointInPolygon2D(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCityBLDUtils::execIsPointInPolygon2D)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Point);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Polygon);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UCityBLDUtils::IsPointInPolygon2D(Z_Param_Out_Point,Z_Param_Out_Polygon);
	P_NATIVE_END;
}
// ********** End Class UCityBLDUtils Function IsPointInPolygon2D **********************************

// ********** Begin Class UCityBLDUtils Function IsPointOnPolygonBoundary2D ************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCityBLDUtils_IsPointOnPolygonBoundary2D_Statics
struct UHT_STATICS
{
	struct CityBLDUtils_eventIsPointOnPolygonBoundary2D_Parms
	{
		FVector Point;
		TArray<FVector> Polygon;
		double Tolerance;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|Utilities|Math" },
		{ "Comment", "/**\n\x09 * Tests if a 2D point lies on the boundary (edges) of a polygon (using X,Y coordinates).\n\x09 * Useful for handling vertices that lie exactly on parcel boundaries (e.g., InnerLoop spline vertices).\n\x09 * @param Point - The point to test\n\x09 * @param Polygon - The polygon vertices\n\x09 * @param Tolerance - Distance tolerance in world units (cm)\n\x09 * @return True if the point is within Tolerance of any polygon edge\n\x09 */" },
		{ "CPP_Default_Tolerance", "1.000000" },
		{ "ModuleRelativePath", "Public/CityBLDUtils.h" },
		{ "ToolTip", "Tests if a 2D point lies on the boundary (edges) of a polygon (using X,Y coordinates).\nUseful for handling vertices that lie exactly on parcel boundaries (e.g., InnerLoop spline vertices).\n@param Point - The point to test\n@param Polygon - The polygon vertices\n@param Tolerance - Distance tolerance in world units (cm)\n@return True if the point is within Tolerance of any polygon edge" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Polygon_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPointOnPolygonBoundary2D constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Polygon_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Polygon;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CityBLDUtils_eventIsPointOnPolygonBoundary2D_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPointOnPolygonBoundary2D constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPointOnPolygonBoundary2D Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(CityBLDUtils_eventIsPointOnPolygonBoundary2D_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Point_MetaData), NewProp_Point_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Polygon_Inner = { "Polygon", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Polygon = { "Polygon", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(CityBLDUtils_eventIsPointOnPolygonBoundary2D_Parms, Polygon), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Polygon_MetaData), NewProp_Polygon_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(CityBLDUtils_eventIsPointOnPolygonBoundary2D_Parms, Tolerance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(CityBLDUtils_eventIsPointOnPolygonBoundary2D_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Point,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Polygon_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Polygon,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsPointOnPolygonBoundary2D Property Definitions *************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCityBLDUtils, nullptr, "IsPointOnPolygonBoundary2D", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CityBLDUtils_eventIsPointOnPolygonBoundary2D_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CityBLDUtils_eventIsPointOnPolygonBoundary2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCityBLDUtils_IsPointOnPolygonBoundary2D(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCityBLDUtils::execIsPointOnPolygonBoundary2D)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Point);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Polygon);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Tolerance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UCityBLDUtils::IsPointOnPolygonBoundary2D(Z_Param_Out_Point,Z_Param_Out_Polygon,Z_Param_Tolerance);
	P_NATIVE_END;
}
// ********** End Class UCityBLDUtils Function IsPointOnPolygonBoundary2D **************************

// ********** Begin Class UCityBLDUtils Function RemoveCollinearPoints2d ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCityBLDUtils_RemoveCollinearPoints2d_Statics
struct UHT_STATICS
{
	struct CityBLDUtils_eventRemoveCollinearPoints2d_Parms
	{
		TArray<FVector2D> Points;
		double Threshold;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|Utilities|Math" },
		{ "Comment", "/**\n\x09 * Removes collinear points from a 2D point array.\n\x09 * @param Points Array of points to process (modified in place)\n\x09 * @param Threshold Angle threshold in degrees (default 1.0)\n\x09 * @return Number of points removed\n\x09 */" },
		{ "CPP_Default_Threshold", "1.000000" },
		{ "ModuleRelativePath", "Public/CityBLDUtils.h" },
		{ "ToolTip", "Removes collinear points from a 2D point array.\n@param Points Array of points to process (modified in place)\n@param Threshold Angle threshold in degrees (default 1.0)\n@return Number of points removed" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveCollinearPoints2d constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Threshold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveCollinearPoints2d constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveCollinearPoints2d Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(CityBLDUtils_eventRemoveCollinearPoints2d_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(CityBLDUtils_eventRemoveCollinearPoints2d_Parms, Threshold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(CityBLDUtils_eventRemoveCollinearPoints2d_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Threshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RemoveCollinearPoints2d Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCityBLDUtils, nullptr, "RemoveCollinearPoints2d", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CityBLDUtils_eventRemoveCollinearPoints2d_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CityBLDUtils_eventRemoveCollinearPoints2d_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCityBLDUtils_RemoveCollinearPoints2d(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCityBLDUtils::execRemoveCollinearPoints2d)
{
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_Points);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Threshold);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UCityBLDUtils::RemoveCollinearPoints2d(Z_Param_Out_Points,Z_Param_Threshold);
	P_NATIVE_END;
}
// ********** End Class UCityBLDUtils Function RemoveCollinearPoints2d *****************************

// ********** Begin Class UCityBLDUtils Function RemoveCollinearPoints3d ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCityBLDUtils_RemoveCollinearPoints3d_Statics
struct UHT_STATICS
{
	struct CityBLDUtils_eventRemoveCollinearPoints3d_Parms
	{
		TArray<FVector> Points;
		double Threshold;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|Utilities|Math" },
		{ "Comment", "/**\n\x09 * Removes collinear points from a 3D point array.\n\x09 * @param Points Array of points to process (modified in place)\n\x09 * @param Threshold Angle threshold in degrees (default 1.0)\n\x09 * @return Number of points removed\n\x09 */" },
		{ "CPP_Default_Threshold", "1.000000" },
		{ "ModuleRelativePath", "Public/CityBLDUtils.h" },
		{ "ToolTip", "Removes collinear points from a 3D point array.\n@param Points Array of points to process (modified in place)\n@param Threshold Angle threshold in degrees (default 1.0)\n@return Number of points removed" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveCollinearPoints3d constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Threshold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveCollinearPoints3d constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveCollinearPoints3d Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(CityBLDUtils_eventRemoveCollinearPoints3d_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(CityBLDUtils_eventRemoveCollinearPoints3d_Parms, Threshold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(CityBLDUtils_eventRemoveCollinearPoints3d_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Threshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RemoveCollinearPoints3d Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCityBLDUtils, nullptr, "RemoveCollinearPoints3d", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CityBLDUtils_eventRemoveCollinearPoints3d_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CityBLDUtils_eventRemoveCollinearPoints3d_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCityBLDUtils_RemoveCollinearPoints3d(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCityBLDUtils::execRemoveCollinearPoints3d)
{
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Points);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Threshold);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UCityBLDUtils::RemoveCollinearPoints3d(Z_Param_Out_Points,Z_Param_Threshold);
	P_NATIVE_END;
}
// ********** End Class UCityBLDUtils Function RemoveCollinearPoints3d *****************************

// ********** Begin Class UCityBLDUtils Function RemoveDuplicatePoints2d ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCityBLDUtils_RemoveDuplicatePoints2d_Statics
struct UHT_STATICS
{
	struct CityBLDUtils_eventRemoveDuplicatePoints2d_Parms
	{
		TArray<FVector2D> Points;
		double Threshold;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|Utilities|Math" },
		{ "Comment", "/**\n\x09 * Removes duplicate points from a 2D point array.\n\x09 * @param Points Array of points to process (modified in place)\n\x09 * @param Threshold Distance threshold (default 1.0)\n\x09 * @return Number of points removed\n\x09 */" },
		{ "CPP_Default_Threshold", "1.000000" },
		{ "ModuleRelativePath", "Public/CityBLDUtils.h" },
		{ "ToolTip", "Removes duplicate points from a 2D point array.\n@param Points Array of points to process (modified in place)\n@param Threshold Distance threshold (default 1.0)\n@return Number of points removed" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveDuplicatePoints2d constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Threshold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveDuplicatePoints2d constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveDuplicatePoints2d Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(CityBLDUtils_eventRemoveDuplicatePoints2d_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(CityBLDUtils_eventRemoveDuplicatePoints2d_Parms, Threshold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(CityBLDUtils_eventRemoveDuplicatePoints2d_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Threshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RemoveDuplicatePoints2d Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCityBLDUtils, nullptr, "RemoveDuplicatePoints2d", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CityBLDUtils_eventRemoveDuplicatePoints2d_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CityBLDUtils_eventRemoveDuplicatePoints2d_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCityBLDUtils_RemoveDuplicatePoints2d(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCityBLDUtils::execRemoveDuplicatePoints2d)
{
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_Points);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Threshold);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UCityBLDUtils::RemoveDuplicatePoints2d(Z_Param_Out_Points,Z_Param_Threshold);
	P_NATIVE_END;
}
// ********** End Class UCityBLDUtils Function RemoveDuplicatePoints2d *****************************

// ********** Begin Class UCityBLDUtils Function RemoveDuplicatePoints3d ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UCityBLDUtils_RemoveDuplicatePoints3d_Statics
struct UHT_STATICS
{
	struct CityBLDUtils_eventRemoveDuplicatePoints3d_Parms
	{
		TArray<FVector> Points;
		double Threshold;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|Utilities|Math" },
		{ "Comment", "/**\n\x09 * Removes duplicate points from a 3D point array.\n\x09 * @param Points Array of points to process (modified in place)\n\x09 * @param Threshold Distance threshold (default 1.0)\n\x09 * @return Number of points removed\n\x09 */" },
		{ "CPP_Default_Threshold", "1.000000" },
		{ "ModuleRelativePath", "Public/CityBLDUtils.h" },
		{ "ToolTip", "Removes duplicate points from a 3D point array.\n@param Points Array of points to process (modified in place)\n@param Threshold Distance threshold (default 1.0)\n@return Number of points removed" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveDuplicatePoints3d constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Threshold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveDuplicatePoints3d constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveDuplicatePoints3d Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(CityBLDUtils_eventRemoveDuplicatePoints3d_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(CityBLDUtils_eventRemoveDuplicatePoints3d_Parms, Threshold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(CityBLDUtils_eventRemoveDuplicatePoints3d_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Threshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RemoveDuplicatePoints3d Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UCityBLDUtils, nullptr, "RemoveDuplicatePoints3d", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CityBLDUtils_eventRemoveDuplicatePoints3d_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CityBLDUtils_eventRemoveDuplicatePoints3d_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCityBLDUtils_RemoveDuplicatePoints3d(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UCityBLDUtils::execRemoveDuplicatePoints3d)
{
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Points);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Threshold);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UCityBLDUtils::RemoveDuplicatePoints3d(Z_Param_Out_Points,Z_Param_Threshold);
	P_NATIVE_END;
}
// ********** End Class UCityBLDUtils Function RemoveDuplicatePoints3d *****************************

// ********** Begin Class UCityBLDUtils ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UCityBLDUtils_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * Utility functions for CityBLD operations.\n */" },
		{ "IncludePath", "CityBLDUtils.h" },
		{ "ModuleRelativePath", "Public/CityBLDUtils.h" },
		{ "ToolTip", "Utility functions for CityBLD operations." },
	};
#endif // WITH_METADATA

// ********** Begin Class UCityBLDUtils constinit property declarations ****************************
// ********** End Class UCityBLDUtils constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("FindIntersectionPointFromVector"), .Pointer = &UCityBLDUtils::execFindIntersectionPointFromVector },
		{ .NameUTF8 = UTF8TEXT("GetBestNumFloorsForHeight"), .Pointer = &UCityBLDUtils::execGetBestNumFloorsForHeight },
		{ .NameUTF8 = UTF8TEXT("IsPointInPolygon2D"), .Pointer = &UCityBLDUtils::execIsPointInPolygon2D },
		{ .NameUTF8 = UTF8TEXT("IsPointOnPolygonBoundary2D"), .Pointer = &UCityBLDUtils::execIsPointOnPolygonBoundary2D },
		{ .NameUTF8 = UTF8TEXT("RemoveCollinearPoints2d"), .Pointer = &UCityBLDUtils::execRemoveCollinearPoints2d },
		{ .NameUTF8 = UTF8TEXT("RemoveCollinearPoints3d"), .Pointer = &UCityBLDUtils::execRemoveCollinearPoints3d },
		{ .NameUTF8 = UTF8TEXT("RemoveDuplicatePoints2d"), .Pointer = &UCityBLDUtils::execRemoveDuplicatePoints2d },
		{ .NameUTF8 = UTF8TEXT("RemoveDuplicatePoints3d"), .Pointer = &UCityBLDUtils::execRemoveDuplicatePoints3d },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCityBLDUtils_FindIntersectionPointFromVector, "FindIntersectionPointFromVector" }, // f74d2e88d190912446846fec7ede268ed841a590
		{ &Z_Construct_UFunction_UCityBLDUtils_GetBestNumFloorsForHeight, "GetBestNumFloorsForHeight" }, // 91a067e76357ab607859e0a1241d0000f9437123
		{ &Z_Construct_UFunction_UCityBLDUtils_IsPointInPolygon2D, "IsPointInPolygon2D" }, // b075f2e0014e34da6a030ba1531248cc9dc12544
		{ &Z_Construct_UFunction_UCityBLDUtils_IsPointOnPolygonBoundary2D, "IsPointOnPolygonBoundary2D" }, // 614d61ea66b52837767fc5083656843f2fbce5de
		{ &Z_Construct_UFunction_UCityBLDUtils_RemoveCollinearPoints2d, "RemoveCollinearPoints2d" }, // 0cd406cd9568589d19472e9fe7a2a5b40ae26733
		{ &Z_Construct_UFunction_UCityBLDUtils_RemoveCollinearPoints3d, "RemoveCollinearPoints3d" }, // 01f3cf43308b6789c30c663c62450af447ad0f2f
		{ &Z_Construct_UFunction_UCityBLDUtils_RemoveDuplicatePoints2d, "RemoveDuplicatePoints2d" }, // 36f3050455f10023b1291342106ff1c4c0f6f368
		{ &Z_Construct_UFunction_UCityBLDUtils_RemoveDuplicatePoints3d, "RemoveDuplicatePoints3d" }, // f794322798eaa4cc33636857a7ec6af6f2223144
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCityBLDUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UCityBLDUtils,
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
static void UCityBLDUtils_StaticRegisterNativesUCityBLDUtils()
{
	UClass* Class = UCityBLDUtils::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCityBLDUtils;
UClass* Z_Construct_UClass_UCityBLDUtils(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UCityBLDUtils;
		if (!Z_Registration_Info_UClass_UCityBLDUtils.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CityBLDUtils"),
				Z_Registration_Info_UClass_UCityBLDUtils.InnerSingleton,
				UCityBLDUtils_StaticRegisterNativesUCityBLDUtils,
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
		return Z_Registration_Info_UClass_UCityBLDUtils.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UCityBLDUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCityBLDUtils.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UCityBLDUtils.OuterSingleton;
}
#undef UHT_STATICS
UCityBLDUtils::UCityBLDUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCityBLDUtils);
UCityBLDUtils::~UCityBLDUtils() {}
// ********** End Class UCityBLDUtils **************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBLDUtils_h__Script_CityBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCityBLDUtils, TEXT("UCityBLDUtils"), &Z_Registration_Info_UClass_UCityBLDUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCityBLDUtils), 1433502436U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBLDUtils_h__Script_CityBLDRuntime_4cb8be674b598d36fb041cca5401d83b7c5ba855{
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
