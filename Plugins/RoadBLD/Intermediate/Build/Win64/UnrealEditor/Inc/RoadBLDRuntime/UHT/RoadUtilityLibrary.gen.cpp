// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoadUtilityLibrary.h"
#include "GeometryScript/PolyPathFunctions.h"
#include "IWorldBLDKitElementInterface.h"
#include "WorldBLDKitElementUtils.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRoadUtilityLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESplinePointType(ETypeConstructPhase);
GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions(ETypeConstructPhase);
WORLDBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FElementFilterSpec(ETypeConstructPhase);
WORLDBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWorldBLDKitElementEdge(ETypeConstructPhase);
WORLDBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWorldBLDKitElementPoint(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USplineComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_ERoadGeoTriangulationMethod(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadUtilityLibrary(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UCurveObject(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoad(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadLane(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UEdgeCurve(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ARoadGeo(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadUtilityLibrary(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ERoadGeoTriangulationMethod ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDRuntime_ERoadGeoTriangulationMethod_Statics
template<> ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ERoadGeoTriangulationMethod>()
{
	return Z_Construct_UEnum_RoadBLDRuntime_ERoadGeoTriangulationMethod(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Enum for specifying the triangulation method to use for polygon meshing\n */" },
		{ "Delaunay.Comment", "/** Delaunay triangulation using Unreal's FDelaunay2 algorithm (produces high-quality triangles) */" },
		{ "Delaunay.DisplayName", "Delaunay" },
		{ "Delaunay.Name", "ERoadGeoTriangulationMethod::Delaunay" },
		{ "Delaunay.ToolTip", "Delaunay triangulation using Unreal's FDelaunay2 algorithm (produces high-quality triangles)" },
		{ "ModuleRelativePath", "Public/RoadUtilityLibrary.h" },
		{ "Robust.Comment", "/** Robust triangulation with cleanup for duplicate points, tiny edges, and spikes (recommended for complex shapes) */" },
		{ "Robust.DisplayName", "Robust" },
		{ "Robust.Name", "ERoadGeoTriangulationMethod::Robust" },
		{ "Robust.ToolTip", "Robust triangulation with cleanup for duplicate points, tiny edges, and spikes (recommended for complex shapes)" },
		{ "Simple.Comment", "/** Simple triangulation using ear clipping (fastest but less robust) */" },
		{ "Simple.DisplayName", "Simple" },
		{ "Simple.Name", "ERoadGeoTriangulationMethod::Simple" },
		{ "Simple.ToolTip", "Simple triangulation using ear clipping (fastest but less robust)" },
		{ "ToolTip", "Enum for specifying the triangulation method to use for polygon meshing" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERoadGeoTriangulationMethod::Simple", (int64)ERoadGeoTriangulationMethod::Simple },
		{ "ERoadGeoTriangulationMethod::Robust", (int64)ERoadGeoTriangulationMethod::Robust },
		{ "ERoadGeoTriangulationMethod::Delaunay", (int64)ERoadGeoTriangulationMethod::Delaunay },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	"ERoadGeoTriangulationMethod",
	"ERoadGeoTriangulationMethod",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERoadGeoTriangulationMethod;
UEnum* Z_Construct_UEnum_RoadBLDRuntime_ERoadGeoTriangulationMethod(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERoadGeoTriangulationMethod.OuterSingleton)
		{
			ZRIE_ERoadGeoTriangulationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDRuntime_ERoadGeoTriangulationMethod, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("ERoadGeoTriangulationMethod"));
		}
		return ZRIE_ERoadGeoTriangulationMethod.OuterSingleton;
	}
	if (!ZRIE_ERoadGeoTriangulationMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERoadGeoTriangulationMethod.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERoadGeoTriangulationMethod.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERoadGeoTriangulationMethod *************************************************

// ********** Begin Class URoadUtilityLibrary Function AppendSpline ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadUtilityLibrary_AppendSpline_Statics
struct UHT_STATICS
{
	struct RoadUtilityLibrary_eventAppendSpline_Parms
	{
		USplineComponent* Spline1;
		const USplineComponent* Spline2;
		bool bEnd;
		bool bUpdateSpline;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD | RoadEditor" },
		{ "CPP_Default_bEnd", "true" },
		{ "CPP_Default_bUpdateSpline", "true" },
		{ "ModuleRelativePath", "Public/RoadUtilityLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline1_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline2_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AppendSpline constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline2;
	static void NewProp_bEnd_SetBit(void* Obj)
	{
		((RoadUtilityLibrary_eventAppendSpline_Parms*)Obj)->bEnd = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnd;
	static void NewProp_bUpdateSpline_SetBit(void* Obj)
	{
		((RoadUtilityLibrary_eventAppendSpline_Parms*)Obj)->bUpdateSpline = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateSpline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AppendSpline constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AppendSpline Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Spline1 = { "Spline1", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventAppendSpline_Parms, Spline1), Z_Construct_UClass_USplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline1_MetaData), NewProp_Spline1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Spline2 = { "Spline2", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventAppendSpline_Parms, Spline2), Z_Construct_UClass_USplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline2_MetaData), NewProp_Spline2_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnd = { "bEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadUtilityLibrary_eventAppendSpline_Parms), &UHT_STATICS::NewProp_bEnd_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUpdateSpline = { "bUpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadUtilityLibrary_eventAppendSpline_Parms), &UHT_STATICS::NewProp_bUpdateSpline_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Spline1,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Spline2,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUpdateSpline,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AppendSpline Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadUtilityLibrary, nullptr, "AppendSpline", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadUtilityLibrary_eventAppendSpline_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadUtilityLibrary_eventAppendSpline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadUtilityLibrary_AppendSpline(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadUtilityLibrary::execAppendSpline)
{
	P_GET_OBJECT(USplineComponent,Z_Param_Spline1);
	P_GET_OBJECT(USplineComponent,Z_Param_Spline2);
	P_GET_UBOOL(Z_Param_bEnd);
	P_GET_UBOOL(Z_Param_bUpdateSpline);
	P_FINISH;
	P_NATIVE_BEGIN;
	URoadUtilityLibrary::AppendSpline(Z_Param_Spline1,Z_Param_Spline2,Z_Param_bEnd,Z_Param_bUpdateSpline);
	P_NATIVE_END;
}
// ********** End Class URoadUtilityLibrary Function AppendSpline **********************************

// ********** Begin Class URoadUtilityLibrary Function CreateDebugRoadGeoFromPerimeter *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadUtilityLibrary_CreateDebugRoadGeoFromPerimeter_Statics
struct UHT_STATICS
{
	struct RoadUtilityLibrary_eventCreateDebugRoadGeoFromPerimeter_Parms
	{
		UObject* WorldContextObject;
		TArray<FVector> PerimeterPoints;
		UMaterialInterface* Material;
		ERoadGeoTriangulationMethod TriangulationMethod;
		ARoadGeo* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD | RoadEditor" },
		{ "Comment", "/**\n\x09 * Test function to create a RoadGeo actor from a perimeter loop of points.\n\x09 * This is useful for debugging and testing the RoadGeo generation functionality independently.\n\x09 * @param WorldContextObject - World context for spawning the actor\n\x09 * @param PerimeterPoints - Array of points that form the perimeter loop (will be closed automatically)\n\x09 * @param Material - Optional material to apply to the generated mesh (can be null)\n\x09 * @param TriangulationMethod - Method to use for triangulating the polygon (Simple, Robust, or Delaunay)\n\x09 * @return The spawned RoadGeo actor, or nullptr if creation failed\n\x09 */" },
		{ "CPP_Default_Material", "None" },
		{ "CPP_Default_TriangulationMethod", "Robust" },
		{ "ModuleRelativePath", "Public/RoadUtilityLibrary.h" },
		{ "ToolTip", "Test function to create a RoadGeo actor from a perimeter loop of points.\nThis is useful for debugging and testing the RoadGeo generation functionality independently.\n@param WorldContextObject - World context for spawning the actor\n@param PerimeterPoints - Array of points that form the perimeter loop (will be closed automatically)\n@param Material - Optional material to apply to the generated mesh (can be null)\n@param TriangulationMethod - Method to use for triangulating the polygon (Simple, Robust, or Delaunay)\n@return The spawned RoadGeo actor, or nullptr if creation failed" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerimeterPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateDebugRoadGeoFromPerimeter constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerimeterPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PerimeterPoints;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TriangulationMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TriangulationMethod;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateDebugRoadGeoFromPerimeter constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateDebugRoadGeoFromPerimeter Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventCreateDebugRoadGeoFromPerimeter_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PerimeterPoints_Inner = { "PerimeterPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PerimeterPoints = { "PerimeterPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventCreateDebugRoadGeoFromPerimeter_Parms, PerimeterPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerimeterPoints_MetaData), NewProp_PerimeterPoints_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventCreateDebugRoadGeoFromPerimeter_Parms, Material), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_TriangulationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_TriangulationMethod = { "TriangulationMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventCreateDebugRoadGeoFromPerimeter_Parms, TriangulationMethod), Z_Construct_UEnum_RoadBLDRuntime_ERoadGeoTriangulationMethod, METADATA_PARAMS(0, nullptr) }; // d5d232cfc2002cce5441f9938cee9f7f74d88c79
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventCreateDebugRoadGeoFromPerimeter_Parms, ReturnValue), Z_Construct_UClass_ARoadGeo, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PerimeterPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PerimeterPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TriangulationMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TriangulationMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateDebugRoadGeoFromPerimeter Property Definitions ********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadUtilityLibrary, nullptr, "CreateDebugRoadGeoFromPerimeter", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadUtilityLibrary_eventCreateDebugRoadGeoFromPerimeter_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadUtilityLibrary_eventCreateDebugRoadGeoFromPerimeter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadUtilityLibrary_CreateDebugRoadGeoFromPerimeter(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadUtilityLibrary::execCreateDebugRoadGeoFromPerimeter)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_PerimeterPoints);
	P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
	P_GET_ENUM(ERoadGeoTriangulationMethod,Z_Param_TriangulationMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ARoadGeo**)Z_Param__Result=URoadUtilityLibrary::CreateDebugRoadGeoFromPerimeter(Z_Param_WorldContextObject,Z_Param_Out_PerimeterPoints,Z_Param_Material,ERoadGeoTriangulationMethod(Z_Param_TriangulationMethod));
	P_NATIVE_END;
}
// ********** End Class URoadUtilityLibrary Function CreateDebugRoadGeoFromPerimeter ***************

// ********** Begin Class URoadUtilityLibrary Function CutSpline ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadUtilityLibrary_CutSpline_Statics
struct UHT_STATICS
{
	struct RoadUtilityLibrary_eventCutSpline_Parms
	{
		USplineComponent* Spline;
		float InputKey;
		bool bDirection;
		TEnumAsByte<ESplinePointType::Type> NewPointType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD | RoadEditor" },
		{ "CPP_Default_bDirection", "true" },
		{ "CPP_Default_NewPointType", "Linear" },
		{ "ModuleRelativePath", "Public/RoadUtilityLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function CutSpline constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InputKey;
	static void NewProp_bDirection_SetBit(void* Obj)
	{
		((RoadUtilityLibrary_eventCutSpline_Parms*)Obj)->bDirection = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDirection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewPointType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CutSpline constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CutSpline Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventCutSpline_Parms, Spline), Z_Construct_UClass_USplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventCutSpline_Parms, InputKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDirection = { "bDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadUtilityLibrary_eventCutSpline_Parms), &UHT_STATICS::NewProp_bDirection_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_NewPointType = { "NewPointType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventCutSpline_Parms, NewPointType), Z_Construct_UEnum_Engine_ESplinePointType, METADATA_PARAMS(0, nullptr) }; // a36fe1683c8c90d7da2ea8b7d1336029399b5336
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InputKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewPointType,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CutSpline Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadUtilityLibrary, nullptr, "CutSpline", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadUtilityLibrary_eventCutSpline_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadUtilityLibrary_eventCutSpline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadUtilityLibrary_CutSpline(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadUtilityLibrary::execCutSpline)
{
	P_GET_OBJECT(USplineComponent,Z_Param_Spline);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InputKey);
	P_GET_UBOOL(Z_Param_bDirection);
	P_GET_PROPERTY(FByteProperty,Z_Param_NewPointType);
	P_FINISH;
	P_NATIVE_BEGIN;
	URoadUtilityLibrary::CutSpline(Z_Param_Spline,Z_Param_InputKey,Z_Param_bDirection,ESplinePointType::Type(Z_Param_NewPointType));
	P_NATIVE_END;
}
// ********** End Class URoadUtilityLibrary Function CutSpline *************************************

// ********** Begin Class URoadUtilityLibrary Function FindBridgeSegments **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadUtilityLibrary_FindBridgeSegments_Statics
struct UHT_STATICS
{
	struct RoadUtilityLibrary_eventFindBridgeSegments_Parms
	{
		UEdgeCurve* TargetEdge;
		double HeightThreshold;
		double SampleInterval;
		double MaxTraceDistance;
		TArray<FVector2D> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD | RoadEditor" },
		{ "Comment", "/**\n\x09 * Finds segments along an edge curve that are above a certain height threshold from the ground.\n\x09 * These segments indicate where bridges should be generated.\n\x09 * Uses line traces at regular intervals downward from the edge curve along the visibility channel,\n\x09 * ignoring any ARoadGeo actors.\n\x09 * @param TargetEdge - The edge curve to analyze for bridge segments\n\x09 * @param HeightThreshold - The minimum height from ground to consider as a bridge segment\n\x09 * @param SampleInterval - The interval at which to sample along the edge (default 100 units)\n\x09 * @param MaxTraceDistance - Maximum downward trace distance (default 10000 units)\n\x09 * @return Array of FVector2D where X = start distance along edge, Y = end distance along edge for each bridge segment.\n\x09 *         Detected ranges are expanded by ADynamicRoad::BridgeRangeGrowth at each end (clamped to the curve) and merged, then\n\x09 *         segments shorter than 1500 units are discarded.\n\x09 */" },
		{ "CPP_Default_MaxTraceDistance", "100000.000000" },
		{ "CPP_Default_SampleInterval", "100.000000" },
		{ "ModuleRelativePath", "Public/RoadUtilityLibrary.h" },
		{ "ToolTip", "Finds segments along an edge curve that are above a certain height threshold from the ground.\nThese segments indicate where bridges should be generated.\nUses line traces at regular intervals downward from the edge curve along the visibility channel,\nignoring any ARoadGeo actors.\n@param TargetEdge - The edge curve to analyze for bridge segments\n@param HeightThreshold - The minimum height from ground to consider as a bridge segment\n@param SampleInterval - The interval at which to sample along the edge (default 100 units)\n@param MaxTraceDistance - Maximum downward trace distance (default 10000 units)\n@return Array of FVector2D where X = start distance along edge, Y = end distance along edge for each bridge segment.\n        Detected ranges are expanded by ADynamicRoad::BridgeRangeGrowth at each end (clamped to the curve) and merged, then\n        segments shorter than 1500 units are discarded." },
	};
#endif // WITH_METADATA

// ********** Begin Function FindBridgeSegments constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetEdge;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_HeightThreshold;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SampleInterval;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxTraceDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindBridgeSegments constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindBridgeSegments Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetEdge = { "TargetEdge", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFindBridgeSegments_Parms, TargetEdge), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_HeightThreshold = { "HeightThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFindBridgeSegments_Parms, HeightThreshold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_SampleInterval = { "SampleInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFindBridgeSegments_Parms, SampleInterval), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_MaxTraceDistance = { "MaxTraceDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFindBridgeSegments_Parms, MaxTraceDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFindBridgeSegments_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetEdge,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HeightThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SampleInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxTraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function FindBridgeSegments Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadUtilityLibrary, nullptr, "FindBridgeSegments", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadUtilityLibrary_eventFindBridgeSegments_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadUtilityLibrary_eventFindBridgeSegments_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadUtilityLibrary_FindBridgeSegments(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadUtilityLibrary::execFindBridgeSegments)
{
	P_GET_OBJECT(UEdgeCurve,Z_Param_TargetEdge);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_HeightThreshold);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_SampleInterval);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_MaxTraceDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector2D>*)Z_Param__Result=URoadUtilityLibrary::FindBridgeSegments(Z_Param_TargetEdge,Z_Param_HeightThreshold,Z_Param_SampleInterval,Z_Param_MaxTraceDistance);
	P_NATIVE_END;
}
// ********** End Class URoadUtilityLibrary Function FindBridgeSegments ****************************

// ********** Begin Class URoadUtilityLibrary Function FindBridgeSegmentsOnCurve *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadUtilityLibrary_FindBridgeSegmentsOnCurve_Statics
struct UHT_STATICS
{
	struct RoadUtilityLibrary_eventFindBridgeSegmentsOnCurve_Parms
	{
		UCurveObject* TargetCurve;
		double HeightThreshold;
		double SampleInterval;
		double MaxTraceDistance;
		TArray<FVector2D> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD | RoadEditor" },
		{ "Comment", "/**\n\x09 * Finds elevated segments along any curve object using the same bridge-detection logic as FindBridgeSegments(UEdgeCurve*).\n\x09 * @param TargetCurve - The curve to analyze for elevated segments (for example, GeometricCenterline)\n\x09 * @param HeightThreshold - The minimum height from ground to consider as a bridge segment\n\x09 * @param SampleInterval - The interval at which to sample along the curve (default 100 units)\n\x09 * @param MaxTraceDistance - Maximum downward trace distance (default 100000 units)\n\x09 * @return Array of FVector2D where X = start distance along curve, Y = end distance along curve.\n\x09 *         Detected ranges are expanded by ADynamicRoad::BridgeRangeGrowth at each end (clamped to the curve) and merged, then\n\x09 *         segments shorter than 1500 units are discarded.\n\x09 */" },
		{ "CPP_Default_MaxTraceDistance", "100000.000000" },
		{ "CPP_Default_SampleInterval", "100.000000" },
		{ "ModuleRelativePath", "Public/RoadUtilityLibrary.h" },
		{ "ToolTip", "Finds elevated segments along any curve object using the same bridge-detection logic as FindBridgeSegments(UEdgeCurve*).\n@param TargetCurve - The curve to analyze for elevated segments (for example, GeometricCenterline)\n@param HeightThreshold - The minimum height from ground to consider as a bridge segment\n@param SampleInterval - The interval at which to sample along the curve (default 100 units)\n@param MaxTraceDistance - Maximum downward trace distance (default 100000 units)\n@return Array of FVector2D where X = start distance along curve, Y = end distance along curve.\n        Detected ranges are expanded by ADynamicRoad::BridgeRangeGrowth at each end (clamped to the curve) and merged, then\n        segments shorter than 1500 units are discarded." },
	};
#endif // WITH_METADATA

// ********** Begin Function FindBridgeSegmentsOnCurve constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetCurve;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_HeightThreshold;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SampleInterval;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxTraceDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindBridgeSegmentsOnCurve constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindBridgeSegmentsOnCurve Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetCurve = { "TargetCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFindBridgeSegmentsOnCurve_Parms, TargetCurve), Z_Construct_UClass_UCurveObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_HeightThreshold = { "HeightThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFindBridgeSegmentsOnCurve_Parms, HeightThreshold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_SampleInterval = { "SampleInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFindBridgeSegmentsOnCurve_Parms, SampleInterval), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_MaxTraceDistance = { "MaxTraceDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFindBridgeSegmentsOnCurve_Parms, MaxTraceDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFindBridgeSegmentsOnCurve_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HeightThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SampleInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxTraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function FindBridgeSegmentsOnCurve Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadUtilityLibrary, nullptr, "FindBridgeSegmentsOnCurve", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadUtilityLibrary_eventFindBridgeSegmentsOnCurve_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadUtilityLibrary_eventFindBridgeSegmentsOnCurve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadUtilityLibrary_FindBridgeSegmentsOnCurve(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadUtilityLibrary::execFindBridgeSegmentsOnCurve)
{
	P_GET_OBJECT(UCurveObject,Z_Param_TargetCurve);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_HeightThreshold);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_SampleInterval);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_MaxTraceDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector2D>*)Z_Param__Result=URoadUtilityLibrary::FindBridgeSegmentsOnCurve(Z_Param_TargetCurve,Z_Param_HeightThreshold,Z_Param_SampleInterval,Z_Param_MaxTraceDistance);
	P_NATIVE_END;
}
// ********** End Class URoadUtilityLibrary Function FindBridgeSegmentsOnCurve *********************

// ********** Begin Class URoadUtilityLibrary Function FindCityKitElementEdges *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadUtilityLibrary_FindCityKitElementEdges_Statics
struct UHT_STATICS
{
	struct RoadUtilityLibrary_eventFindCityKitElementEdges_Parms
	{
		TArray<AActor*> Actors;
		FElementFilterSpec Filter;
		TArray<FWorldBLDKitElementEdge> OutEdges;
		TArray<FVector> OutPoints;
		TArray<float> OutDistancesSq;
		FVector Location;
		bool bFilterByDistance;
		double MinDistance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD | RoadEditor" },
		{ "CPP_Default_bFilterByDistance", "false" },
		{ "CPP_Default_MinDistance", "0.000000" },
		{ "ModuleRelativePath", "Public/RoadUtilityLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindCityKitElementEdges constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutEdges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutEdges;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutDistancesSq_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDistancesSq;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static void NewProp_bFilterByDistance_SetBit(void* Obj)
	{
		((RoadUtilityLibrary_eventFindCityKitElementEdges_Parms*)Obj)->bFilterByDistance = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterByDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindCityKitElementEdges constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindCityKitElementEdges Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFindCityKitElementEdges_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actors_MetaData), NewProp_Actors_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFindCityKitElementEdges_Parms, Filter), Z_Construct_UScriptStruct_FElementFilterSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter_MetaData), NewProp_Filter_MetaData) }; // fa5a921a43a8a435316084a65537973107bc0a82
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutEdges_Inner = { "OutEdges", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWorldBLDKitElementEdge, METADATA_PARAMS(0, nullptr) }; // b1f8883034d7f9c21a93812f1c21f4f4628ab313
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutEdges = { "OutEdges", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFindCityKitElementEdges_Parms, OutEdges), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // b1f8883034d7f9c21a93812f1c21f4f4628ab313
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFindCityKitElementEdges_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_OutDistancesSq_Inner = { "OutDistancesSq", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutDistancesSq = { "OutDistancesSq", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFindCityKitElementEdges_Parms, OutDistancesSq), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFindCityKitElementEdges_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFilterByDistance = { "bFilterByDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadUtilityLibrary_eventFindCityKitElementEdges_Parms), &UHT_STATICS::NewProp_bFilterByDistance_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFindCityKitElementEdges_Parms, MinDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actors,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutEdges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutDistancesSq_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutDistancesSq,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFilterByDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinDistance,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function FindCityKitElementEdges Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadUtilityLibrary, nullptr, "FindCityKitElementEdges", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadUtilityLibrary_eventFindCityKitElementEdges_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadUtilityLibrary_eventFindCityKitElementEdges_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadUtilityLibrary_FindCityKitElementEdges(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadUtilityLibrary::execFindCityKitElementEdges)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
	P_GET_STRUCT_REF(FElementFilterSpec,Z_Param_Out_Filter);
	P_GET_TARRAY_REF(FWorldBLDKitElementEdge,Z_Param_Out_OutEdges);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPoints);
	P_GET_TARRAY_REF(float,Z_Param_Out_OutDistancesSq);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_UBOOL(Z_Param_bFilterByDistance);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_MinDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	URoadUtilityLibrary::FindCityKitElementEdges(Z_Param_Out_Actors,Z_Param_Out_Filter,Z_Param_Out_OutEdges,Z_Param_Out_OutPoints,Z_Param_Out_OutDistancesSq,Z_Param_Out_Location,Z_Param_bFilterByDistance,Z_Param_MinDistance);
	P_NATIVE_END;
}
// ********** End Class URoadUtilityLibrary Function FindCityKitElementEdges ***********************

// ********** Begin Class URoadUtilityLibrary Function FindPolylineIntersections *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadUtilityLibrary_FindPolylineIntersections_Statics
struct UHT_STATICS
{
	struct RoadUtilityLibrary_eventFindPolylineIntersections_Parms
	{
		TArray<FVector> PointsA;
		TArray<FVector> PointsB;
		float RadiusA;
		float RadiusB;
		TArray<FVector> Intersections;
		TArray<float> Distances;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD | RoadEditor" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/RoadUtilityLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointsA_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointsB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindPolylineIntersections constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointsA_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PointsA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointsB_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PointsB;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RadiusA;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RadiusB;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Intersections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Intersections;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Distances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindPolylineIntersections constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindPolylineIntersections Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PointsA_Inner = { "PointsA", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PointsA = { "PointsA", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFindPolylineIntersections_Parms, PointsA), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointsA_MetaData), NewProp_PointsA_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PointsB_Inner = { "PointsB", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PointsB = { "PointsB", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFindPolylineIntersections_Parms, PointsB), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointsB_MetaData), NewProp_PointsB_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RadiusA = { "RadiusA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFindPolylineIntersections_Parms, RadiusA), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_RadiusB = { "RadiusB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFindPolylineIntersections_Parms, RadiusB), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Intersections_Inner = { "Intersections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Intersections = { "Intersections", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFindPolylineIntersections_Parms, Intersections), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_Distances_Inner = { "Distances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Distances = { "Distances", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFindPolylineIntersections_Parms, Distances), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointsA_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointsA,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointsB_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointsB,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RadiusA,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RadiusB,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Intersections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Intersections,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Distances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Distances,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function FindPolylineIntersections Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadUtilityLibrary, nullptr, "FindPolylineIntersections", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadUtilityLibrary_eventFindPolylineIntersections_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadUtilityLibrary_eventFindPolylineIntersections_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadUtilityLibrary_FindPolylineIntersections(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadUtilityLibrary::execFindPolylineIntersections)
{
	P_GET_TARRAY_REF(FVector,Z_Param_Out_PointsA);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_PointsB);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RadiusA);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RadiusB);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Intersections);
	P_GET_TARRAY_REF(float,Z_Param_Out_Distances);
	P_FINISH;
	P_NATIVE_BEGIN;
	URoadUtilityLibrary::FindPolylineIntersections(Z_Param_Out_PointsA,Z_Param_Out_PointsB,Z_Param_RadiusA,Z_Param_RadiusB,Z_Param_Out_Intersections,Z_Param_Out_Distances);
	P_NATIVE_END;
}
// ********** End Class URoadUtilityLibrary Function FindPolylineIntersections *********************

// ********** Begin Class URoadUtilityLibrary Function FindWorldBLDKitElementPoints ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadUtilityLibrary_FindWorldBLDKitElementPoints_Statics
struct UHT_STATICS
{
	struct RoadUtilityLibrary_eventFindWorldBLDKitElementPoints_Parms
	{
		TArray<AActor*> Actors;
		FElementFilterSpec Filter;
		TArray<FWorldBLDKitElementPoint> OutPoints;
		TArray<float> OutDistancesSq;
		FVector Location;
		bool bFilterByDistance;
		double MinDistance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD | RoadEditor" },
		{ "CPP_Default_bFilterByDistance", "false" },
		{ "CPP_Default_MinDistance", "0.000000" },
		{ "ModuleRelativePath", "Public/RoadUtilityLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindWorldBLDKitElementPoints constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutDistancesSq_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDistancesSq;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static void NewProp_bFilterByDistance_SetBit(void* Obj)
	{
		((RoadUtilityLibrary_eventFindWorldBLDKitElementPoints_Parms*)Obj)->bFilterByDistance = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterByDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindWorldBLDKitElementPoints constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindWorldBLDKitElementPoints Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFindWorldBLDKitElementPoints_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actors_MetaData), NewProp_Actors_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFindWorldBLDKitElementPoints_Parms, Filter), Z_Construct_UScriptStruct_FElementFilterSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter_MetaData), NewProp_Filter_MetaData) }; // fa5a921a43a8a435316084a65537973107bc0a82
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWorldBLDKitElementPoint, METADATA_PARAMS(0, nullptr) }; // 40431f66282c4e92e8b370cc8f3ec0ae5c2da09d
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFindWorldBLDKitElementPoints_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 40431f66282c4e92e8b370cc8f3ec0ae5c2da09d
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_OutDistancesSq_Inner = { "OutDistancesSq", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutDistancesSq = { "OutDistancesSq", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFindWorldBLDKitElementPoints_Parms, OutDistancesSq), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFindWorldBLDKitElementPoints_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bFilterByDistance = { "bFilterByDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadUtilityLibrary_eventFindWorldBLDKitElementPoints_Parms), &UHT_STATICS::NewProp_bFilterByDistance_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFindWorldBLDKitElementPoints_Parms, MinDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actors,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Filter,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutDistancesSq_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutDistancesSq,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bFilterByDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinDistance,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function FindWorldBLDKitElementPoints Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadUtilityLibrary, nullptr, "FindWorldBLDKitElementPoints", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadUtilityLibrary_eventFindWorldBLDKitElementPoints_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadUtilityLibrary_eventFindWorldBLDKitElementPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadUtilityLibrary_FindWorldBLDKitElementPoints(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadUtilityLibrary::execFindWorldBLDKitElementPoints)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
	P_GET_STRUCT_REF(FElementFilterSpec,Z_Param_Out_Filter);
	P_GET_TARRAY_REF(FWorldBLDKitElementPoint,Z_Param_Out_OutPoints);
	P_GET_TARRAY_REF(float,Z_Param_Out_OutDistancesSq);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_UBOOL(Z_Param_bFilterByDistance);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_MinDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	URoadUtilityLibrary::FindWorldBLDKitElementPoints(Z_Param_Out_Actors,Z_Param_Out_Filter,Z_Param_Out_OutPoints,Z_Param_Out_OutDistancesSq,Z_Param_Out_Location,Z_Param_bFilterByDistance,Z_Param_MinDistance);
	P_NATIVE_END;
}
// ********** End Class URoadUtilityLibrary Function FindWorldBLDKitElementPoints ******************

// ********** Begin Class URoadUtilityLibrary Function FitCubic ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadUtilityLibrary_FitCubic_Statics
struct UHT_STATICS
{
	struct RoadUtilityLibrary_eventFitCubic_Parms
	{
		TArray<FVector2D> Points;
		FVector2D TangSrc;
		FVector2D TangDst;
		TArray<FVector> OutPoints;
		double Error;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD | RoadEditor" },
		{ "CPP_Default_Error", "4.000000" },
		{ "ModuleRelativePath", "Public/RoadUtilityLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function FitCubic constinit property declarations ******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TangSrc;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TangDst;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FitCubic constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FitCubic Property Definitions *****************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFitCubic_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TangSrc = { "TangSrc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFitCubic_Parms, TangSrc), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TangDst = { "TangDst", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFitCubic_Parms, TangDst), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFitCubic_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventFitCubic_Parms, Error), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TangSrc,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TangDst,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function FitCubic Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadUtilityLibrary, nullptr, "FitCubic", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadUtilityLibrary_eventFitCubic_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadUtilityLibrary_eventFitCubic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadUtilityLibrary_FitCubic(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadUtilityLibrary::execFitCubic)
{
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_Points);
	P_GET_STRUCT(FVector2D,Z_Param_TangSrc);
	P_GET_STRUCT(FVector2D,Z_Param_TangDst);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPoints);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Error);
	P_FINISH;
	P_NATIVE_BEGIN;
	URoadUtilityLibrary::FitCubic(Z_Param_Out_Points,Z_Param_TangSrc,Z_Param_TangDst,Z_Param_Out_OutPoints,Z_Param_Error);
	P_NATIVE_END;
}
// ********** End Class URoadUtilityLibrary Function FitCubic **************************************

// ********** Begin Class URoadUtilityLibrary Function GetAverageLocation **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadUtilityLibrary_GetAverageLocation_Statics
struct UHT_STATICS
{
	struct RoadUtilityLibrary_eventGetAverageLocation_Parms
	{
		TArray<FVector> Points;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD | RoadEditor" },
		{ "ModuleRelativePath", "Public/RoadUtilityLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAverageLocation constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAverageLocation constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAverageLocation Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventGetAverageLocation_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventGetAverageLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetAverageLocation Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadUtilityLibrary, nullptr, "GetAverageLocation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadUtilityLibrary_eventGetAverageLocation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadUtilityLibrary_eventGetAverageLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadUtilityLibrary_GetAverageLocation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadUtilityLibrary::execGetAverageLocation)
{
	P_GET_TARRAY_REF(FVector,Z_Param_Out_Points);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=URoadUtilityLibrary::GetAverageLocation(Z_Param_Out_Points);
	P_NATIVE_END;
}
// ********** End Class URoadUtilityLibrary Function GetAverageLocation ****************************

// ********** Begin Class URoadUtilityLibrary Function GetControlPoints ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadUtilityLibrary_GetControlPoints_Statics
struct UHT_STATICS
{
	struct RoadUtilityLibrary_eventGetControlPoints_Parms
	{
		const USplineComponent* Spline;
		TArray<FVector> OutPoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD | RoadEditor" },
		{ "ModuleRelativePath", "Public/RoadUtilityLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetControlPoints constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetControlPoints constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetControlPoints Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventGetControlPoints_Parms, Spline), Z_Construct_UClass_USplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventGetControlPoints_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPoints,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetControlPoints Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadUtilityLibrary, nullptr, "GetControlPoints", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadUtilityLibrary_eventGetControlPoints_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadUtilityLibrary_eventGetControlPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadUtilityLibrary_GetControlPoints(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadUtilityLibrary::execGetControlPoints)
{
	P_GET_OBJECT(USplineComponent,Z_Param_Spline);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	URoadUtilityLibrary::GetControlPoints(Z_Param_Spline,Z_Param_Out_OutPoints);
	P_NATIVE_END;
}
// ********** End Class URoadUtilityLibrary Function GetControlPoints ******************************

// ********** Begin Class URoadUtilityLibrary Function GetCurvePoints ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadUtilityLibrary_GetCurvePoints_Statics
struct UHT_STATICS
{
	struct RoadUtilityLibrary_eventGetCurvePoints_Parms
	{
		TArray<FVector> ControlPoints;
		TArray<FVector> OutPoints;
		bool bIsClosedLoop;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD | RoadEditor" },
		{ "ModuleRelativePath", "Public/RoadUtilityLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurvePoints constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ControlPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
	static void NewProp_bIsClosedLoop_SetBit(void* Obj)
	{
		((RoadUtilityLibrary_eventGetCurvePoints_Parms*)Obj)->bIsClosedLoop = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsClosedLoop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurvePoints constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurvePoints Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ControlPoints_Inner = { "ControlPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ControlPoints = { "ControlPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventGetCurvePoints_Parms, ControlPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlPoints_MetaData), NewProp_ControlPoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventGetCurvePoints_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsClosedLoop = { "bIsClosedLoop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadUtilityLibrary_eventGetCurvePoints_Parms), &UHT_STATICS::NewProp_bIsClosedLoop_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControlPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControlPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsClosedLoop,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetCurvePoints Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadUtilityLibrary, nullptr, "GetCurvePoints", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadUtilityLibrary_eventGetCurvePoints_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadUtilityLibrary_eventGetCurvePoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadUtilityLibrary_GetCurvePoints(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadUtilityLibrary::execGetCurvePoints)
{
	P_GET_TARRAY_REF(FVector,Z_Param_Out_ControlPoints);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPoints);
	P_GET_UBOOL(Z_Param_bIsClosedLoop);
	P_FINISH;
	P_NATIVE_BEGIN;
	URoadUtilityLibrary::GetCurvePoints(Z_Param_Out_ControlPoints,Z_Param_Out_OutPoints,Z_Param_bIsClosedLoop);
	P_NATIVE_END;
}
// ********** End Class URoadUtilityLibrary Function GetCurvePoints ********************************

// ********** Begin Class URoadUtilityLibrary Function GetLaneAtLocation ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadUtilityLibrary_GetLaneAtLocation_Statics
struct UHT_STATICS
{
	struct RoadUtilityLibrary_eventGetLaneAtLocation_Parms
	{
		ADynamicRoad* TargetRoad;
		FVector WorldLocation;
		UDynamicRoadLane* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD | RoadEditor" },
		{ "Comment", "/**\n\x09 * Finds the nearest lane at a given world location on a road\n\x09 * @param TargetRoad - The road to search for lanes on\n\x09 * @param WorldLocation - The world location to find the nearest lane at\n\x09 * @return The nearest lane at the given location, or nullptr if no lane found\n\x09 */" },
		{ "ModuleRelativePath", "Public/RoadUtilityLibrary.h" },
		{ "ToolTip", "Finds the nearest lane at a given world location on a road\n@param TargetRoad - The road to search for lanes on\n@param WorldLocation - The world location to find the nearest lane at\n@return The nearest lane at the given location, or nullptr if no lane found" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLaneAtLocation constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetRoad;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLaneAtLocation constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLaneAtLocation Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetRoad = { "TargetRoad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventGetLaneAtLocation_Parms, TargetRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventGetLaneAtLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldLocation_MetaData), NewProp_WorldLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventGetLaneAtLocation_Parms, ReturnValue), Z_Construct_UClass_UDynamicRoadLane, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetLaneAtLocation Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadUtilityLibrary, nullptr, "GetLaneAtLocation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadUtilityLibrary_eventGetLaneAtLocation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadUtilityLibrary_eventGetLaneAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadUtilityLibrary_GetLaneAtLocation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadUtilityLibrary::execGetLaneAtLocation)
{
	P_GET_OBJECT(ADynamicRoad,Z_Param_TargetRoad);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDynamicRoadLane**)Z_Param__Result=URoadUtilityLibrary::GetLaneAtLocation(Z_Param_TargetRoad,Z_Param_Out_WorldLocation);
	P_NATIVE_END;
}
// ********** End Class URoadUtilityLibrary Function GetLaneAtLocation *****************************

// ********** Begin Class URoadUtilityLibrary Function GetOuterLanes *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadUtilityLibrary_GetOuterLanes_Statics
struct UHT_STATICS
{
	struct RoadUtilityLibrary_eventGetOuterLanes_Parms
	{
		UDynamicRoadLane* TargetLane;
		TArray<UDynamicRoadLane*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD | RoadEditor" },
		{ "Comment", "/**\n\x09 * Gets all lanes on the outside of the target lane (including the target lane itself).\n\x09 * For example, if changing a lane width, all outer lanes from the target to the road edge would be affected.\n\x09 * @param TargetLane - The starting lane\n\x09 * @return Array of outer lanes, starting with the target lane and moving outward to the road edge\n\x09 */" },
		{ "ModuleRelativePath", "Public/RoadUtilityLibrary.h" },
		{ "ToolTip", "Gets all lanes on the outside of the target lane (including the target lane itself).\nFor example, if changing a lane width, all outer lanes from the target to the road edge would be affected.\n@param TargetLane - The starting lane\n@return Array of outer lanes, starting with the target lane and moving outward to the road edge" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetOuterLanes constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetLane;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetOuterLanes constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetOuterLanes Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetLane = { "TargetLane", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventGetOuterLanes_Parms, TargetLane), Z_Construct_UClass_UDynamicRoadLane, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDynamicRoadLane, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventGetOuterLanes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetLane,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetOuterLanes Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadUtilityLibrary, nullptr, "GetOuterLanes", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadUtilityLibrary_eventGetOuterLanes_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadUtilityLibrary_eventGetOuterLanes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadUtilityLibrary_GetOuterLanes(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadUtilityLibrary::execGetOuterLanes)
{
	P_GET_OBJECT(UDynamicRoadLane,Z_Param_TargetLane);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UDynamicRoadLane*>*)Z_Param__Result=URoadUtilityLibrary::GetOuterLanes(Z_Param_TargetLane);
	P_NATIVE_END;
}
// ********** End Class URoadUtilityLibrary Function GetOuterLanes *********************************

// ********** Begin Class URoadUtilityLibrary Function InsertSplinePoint ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadUtilityLibrary_InsertSplinePoint_Statics
struct UHT_STATICS
{
	struct RoadUtilityLibrary_eventInsertSplinePoint_Parms
	{
		USplineComponent* Spline;
		int32 Index;
		FVector WorldLocation;
		TEnumAsByte<ESplinePointType::Type> SplinePointType;
		bool UpdateSpline;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD | RoadEditor" },
		{ "ModuleRelativePath", "Public/RoadUtilityLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function InsertSplinePoint constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SplinePointType;
	static void NewProp_UpdateSpline_SetBit(void* Obj)
	{
		((RoadUtilityLibrary_eventInsertSplinePoint_Parms*)Obj)->UpdateSpline = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UpdateSpline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InsertSplinePoint constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InsertSplinePoint Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventInsertSplinePoint_Parms, Spline), Z_Construct_UClass_USplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventInsertSplinePoint_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventInsertSplinePoint_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SplinePointType = { "SplinePointType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventInsertSplinePoint_Parms, SplinePointType), Z_Construct_UEnum_Engine_ESplinePointType, METADATA_PARAMS(0, nullptr) }; // a36fe1683c8c90d7da2ea8b7d1336029399b5336
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_UpdateSpline = { "UpdateSpline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadUtilityLibrary_eventInsertSplinePoint_Parms), &UHT_STATICS::NewProp_UpdateSpline_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SplinePointType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UpdateSpline,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function InsertSplinePoint Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadUtilityLibrary, nullptr, "InsertSplinePoint", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadUtilityLibrary_eventInsertSplinePoint_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadUtilityLibrary_eventInsertSplinePoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadUtilityLibrary_InsertSplinePoint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadUtilityLibrary::execInsertSplinePoint)
{
	P_GET_OBJECT(USplineComponent,Z_Param_Spline);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT(FVector,Z_Param_WorldLocation);
	P_GET_PROPERTY(FByteProperty,Z_Param_SplinePointType);
	P_GET_UBOOL(Z_Param_UpdateSpline);
	P_FINISH;
	P_NATIVE_BEGIN;
	URoadUtilityLibrary::InsertSplinePoint(Z_Param_Spline,Z_Param_Index,Z_Param_WorldLocation,ESplinePointType::Type(Z_Param_SplinePointType),Z_Param_UpdateSpline);
	P_NATIVE_END;
}
// ********** End Class URoadUtilityLibrary Function InsertSplinePoint *****************************

// ********** Begin Class URoadUtilityLibrary Function InvertSpline ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadUtilityLibrary_InvertSpline_Statics
struct UHT_STATICS
{
	struct RoadUtilityLibrary_eventInvertSpline_Parms
	{
		USplineComponent* Spline;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD | RoadEditor" },
		{ "ModuleRelativePath", "Public/RoadUtilityLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function InvertSpline constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InvertSpline constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InvertSpline Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventInvertSpline_Parms, Spline), Z_Construct_UClass_USplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Spline,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function InvertSpline Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadUtilityLibrary, nullptr, "InvertSpline", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadUtilityLibrary_eventInvertSpline_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadUtilityLibrary_eventInvertSpline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadUtilityLibrary_InvertSpline(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadUtilityLibrary::execInvertSpline)
{
	P_GET_OBJECT(USplineComponent,Z_Param_Spline);
	P_FINISH;
	P_NATIVE_BEGIN;
	URoadUtilityLibrary::InvertSpline(Z_Param_Spline);
	P_NATIVE_END;
}
// ********** End Class URoadUtilityLibrary Function InvertSpline **********************************

// ********** Begin Class URoadUtilityLibrary Function IsPointBetweenEdgeCurves_WindingNumberXY ****
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadUtilityLibrary_IsPointBetweenEdgeCurves_WindingNumberXY_Statics
struct UHT_STATICS
{
	struct RoadUtilityLibrary_eventIsPointBetweenEdgeCurves_WindingNumberXY_Parms
	{
		FVector TestPoint;
		UEdgeCurve* EdgeA;
		UEdgeCurve* EdgeB;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Geometry" },
		{ "Comment", "/**\n\x09 * Blueprint-friendly wrapper for the shared winding-number test used across RoadBLD.\n\x09 * Treats EdgeA + EdgeB as a closed polygon in XY (EdgeA forward, EdgeB reversed) and tests TestPoint in XY.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RoadUtilityLibrary.h" },
		{ "ToolTip", "Blueprint-friendly wrapper for the shared winding-number test used across RoadBLD.\nTreats EdgeA + EdgeB as a closed polygon in XY (EdgeA forward, EdgeB reversed) and tests TestPoint in XY." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsPointBetweenEdgeCurves_WindingNumberXY constinit property declarations 
	static const UECodeGen_Private::FStructPropertyParams NewProp_TestPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EdgeA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EdgeB;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RoadUtilityLibrary_eventIsPointBetweenEdgeCurves_WindingNumberXY_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsPointBetweenEdgeCurves_WindingNumberXY constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsPointBetweenEdgeCurves_WindingNumberXY Property Definitions *********
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TestPoint = { "TestPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventIsPointBetweenEdgeCurves_WindingNumberXY_Parms, TestPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestPoint_MetaData), NewProp_TestPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_EdgeA = { "EdgeA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventIsPointBetweenEdgeCurves_WindingNumberXY_Parms, EdgeA), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_EdgeB = { "EdgeB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventIsPointBetweenEdgeCurves_WindingNumberXY_Parms, EdgeB), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadUtilityLibrary_eventIsPointBetweenEdgeCurves_WindingNumberXY_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TestPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeA,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeB,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsPointBetweenEdgeCurves_WindingNumberXY Property Definitions ***********
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadUtilityLibrary, nullptr, "IsPointBetweenEdgeCurves_WindingNumberXY", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadUtilityLibrary_eventIsPointBetweenEdgeCurves_WindingNumberXY_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadUtilityLibrary_eventIsPointBetweenEdgeCurves_WindingNumberXY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadUtilityLibrary_IsPointBetweenEdgeCurves_WindingNumberXY(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadUtilityLibrary::execIsPointBetweenEdgeCurves_WindingNumberXY)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_TestPoint);
	P_GET_OBJECT(UEdgeCurve,Z_Param_EdgeA);
	P_GET_OBJECT(UEdgeCurve,Z_Param_EdgeB);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URoadUtilityLibrary::IsPointBetweenEdgeCurves_WindingNumberXY(Z_Param_Out_TestPoint,Z_Param_EdgeA,Z_Param_EdgeB);
	P_NATIVE_END;
}
// ********** End Class URoadUtilityLibrary Function IsPointBetweenEdgeCurves_WindingNumberXY ******

// ********** Begin Class URoadUtilityLibrary Function PointsOnClothoid ****************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadUtilityLibrary_PointsOnClothoid_Statics
struct UHT_STATICS
{
	struct RoadUtilityLibrary_eventPointsOnClothoid_Parms
	{
		FTransform Src;
		FTransform Dst;
		TArray<FVector2D> OutPoints;
		float PointRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD | RoadEditor" },
		{ "CPP_Default_PointRate", "0.010000" },
		{ "ModuleRelativePath", "Public/RoadUtilityLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Src_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dst_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PointsOnClothoid constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Src;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dst;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PointRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PointsOnClothoid constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PointsOnClothoid Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Src = { "Src", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventPointsOnClothoid_Parms, Src), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Src_MetaData), NewProp_Src_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Dst = { "Dst", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventPointsOnClothoid_Parms, Dst), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dst_MetaData), NewProp_Dst_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventPointsOnClothoid_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PointRate = { "PointRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventPointsOnClothoid_Parms, PointRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Src,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Dst,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointRate,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PointsOnClothoid Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadUtilityLibrary, nullptr, "PointsOnClothoid", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadUtilityLibrary_eventPointsOnClothoid_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadUtilityLibrary_eventPointsOnClothoid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadUtilityLibrary_PointsOnClothoid(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadUtilityLibrary::execPointsOnClothoid)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Src);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Dst);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_OutPoints);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PointRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	URoadUtilityLibrary::PointsOnClothoid(Z_Param_Out_Src,Z_Param_Out_Dst,Z_Param_Out_OutPoints,Z_Param_PointRate);
	P_NATIVE_END;
}
// ********** End Class URoadUtilityLibrary Function PointsOnClothoid ******************************

// ********** Begin Class URoadUtilityLibrary Function PointsOnClothoidAdaptive ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadUtilityLibrary_PointsOnClothoidAdaptive_Statics
struct UHT_STATICS
{
	struct RoadUtilityLibrary_eventPointsOnClothoidAdaptive_Parms
	{
		FTransform Src;
		FTransform Dst;
		TArray<FVector2D> OutPoints;
		double MaxSquareDist;
		double MinSquareSegLen;
		double MaxSquareSegLen;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD | RoadEditor" },
		{ "CPP_Default_MaxSquareDist", "0.050000" },
		{ "CPP_Default_MaxSquareSegLen", "100000.000000" },
		{ "CPP_Default_MinSquareSegLen", "1.000000" },
		{ "ModuleRelativePath", "Public/RoadUtilityLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Src_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dst_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function PointsOnClothoidAdaptive constinit property declarations **************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Src;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dst;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxSquareDist;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinSquareSegLen;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxSquareSegLen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PointsOnClothoidAdaptive constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PointsOnClothoidAdaptive Property Definitions *************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Src = { "Src", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventPointsOnClothoidAdaptive_Parms, Src), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Src_MetaData), NewProp_Src_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Dst = { "Dst", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventPointsOnClothoidAdaptive_Parms, Dst), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dst_MetaData), NewProp_Dst_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventPointsOnClothoidAdaptive_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_MaxSquareDist = { "MaxSquareDist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventPointsOnClothoidAdaptive_Parms, MaxSquareDist), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_MinSquareSegLen = { "MinSquareSegLen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventPointsOnClothoidAdaptive_Parms, MinSquareSegLen), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_MaxSquareSegLen = { "MaxSquareSegLen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventPointsOnClothoidAdaptive_Parms, MaxSquareSegLen), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Src,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Dst,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxSquareDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinSquareSegLen,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxSquareSegLen,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function PointsOnClothoidAdaptive Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadUtilityLibrary, nullptr, "PointsOnClothoidAdaptive", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadUtilityLibrary_eventPointsOnClothoidAdaptive_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadUtilityLibrary_eventPointsOnClothoidAdaptive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadUtilityLibrary_PointsOnClothoidAdaptive(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadUtilityLibrary::execPointsOnClothoidAdaptive)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Src);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Dst);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_OutPoints);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_MaxSquareDist);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_MinSquareSegLen);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_MaxSquareSegLen);
	P_FINISH;
	P_NATIVE_BEGIN;
	URoadUtilityLibrary::PointsOnClothoidAdaptive(Z_Param_Out_Src,Z_Param_Out_Dst,Z_Param_Out_OutPoints,Z_Param_MaxSquareDist,Z_Param_MinSquareSegLen,Z_Param_MaxSquareSegLen);
	P_NATIVE_END;
}
// ********** End Class URoadUtilityLibrary Function PointsOnClothoidAdaptive **********************

// ********** Begin Class URoadUtilityLibrary Function SampleSplineToTransforms ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadUtilityLibrary_SampleSplineToTransforms_Statics
struct UHT_STATICS
{
	struct RoadUtilityLibrary_eventSampleSplineToTransforms_Parms
	{
		const USplineComponent* Spline;
		float TimeBegin;
		float TimeEnd;
		TArray<FTransform> Frames;
		TArray<double> FrameTimes;
		FGeometryScriptSplineSamplingOptions SamplingOptions;
		FTransform RelativeTransform;
		bool bIncludeScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "WorldBLD | RoadEditor" },
		{ "ModuleRelativePath", "Public/RoadUtilityLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SampleSplineToTransforms constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeBegin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeEnd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_FrameTimes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FrameTimes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SamplingOptions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
	static void NewProp_bIncludeScale_SetBit(void* Obj)
	{
		((RoadUtilityLibrary_eventSampleSplineToTransforms_Parms*)Obj)->bIncludeScale = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SampleSplineToTransforms constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SampleSplineToTransforms Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventSampleSplineToTransforms_Parms, Spline), Z_Construct_UClass_USplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TimeBegin = { "TimeBegin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventSampleSplineToTransforms_Parms, TimeBegin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TimeEnd = { "TimeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventSampleSplineToTransforms_Parms, TimeEnd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventSampleSplineToTransforms_Parms, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_FrameTimes_Inner = { "FrameTimes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_FrameTimes = { "FrameTimes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventSampleSplineToTransforms_Parms, FrameTimes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SamplingOptions = { "SamplingOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventSampleSplineToTransforms_Parms, SamplingOptions), Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions, METADATA_PARAMS(0, nullptr) }; // 1265cb5ae4a85abd9b8723ec7d489db71b7ce173
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(RoadUtilityLibrary_eventSampleSplineToTransforms_Parms, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIncludeScale = { "bIncludeScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RoadUtilityLibrary_eventSampleSplineToTransforms_Parms), &UHT_STATICS::NewProp_bIncludeScale_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TimeBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TimeEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Frames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Frames,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FrameTimes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FrameTimes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SamplingOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RelativeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIncludeScale,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SampleSplineToTransforms Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadUtilityLibrary, nullptr, "SampleSplineToTransforms", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadUtilityLibrary_eventSampleSplineToTransforms_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadUtilityLibrary_eventSampleSplineToTransforms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadUtilityLibrary_SampleSplineToTransforms(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadUtilityLibrary::execSampleSplineToTransforms)
{
	P_GET_OBJECT(USplineComponent,Z_Param_Spline);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeBegin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeEnd);
	P_GET_TARRAY_REF(FTransform,Z_Param_Out_Frames);
	P_GET_TARRAY_REF(double,Z_Param_Out_FrameTimes);
	P_GET_STRUCT(FGeometryScriptSplineSamplingOptions,Z_Param_SamplingOptions);
	P_GET_STRUCT(FTransform,Z_Param_RelativeTransform);
	P_GET_UBOOL(Z_Param_bIncludeScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	URoadUtilityLibrary::SampleSplineToTransforms(Z_Param_Spline,Z_Param_TimeBegin,Z_Param_TimeEnd,Z_Param_Out_Frames,Z_Param_Out_FrameTimes,Z_Param_SamplingOptions,Z_Param_RelativeTransform,Z_Param_bIncludeScale);
	P_NATIVE_END;
}
// ********** End Class URoadUtilityLibrary Function SampleSplineToTransforms **********************

// ********** Begin Class URoadUtilityLibrary ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoadUtilityLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "RoadUtilityLibrary.h" },
		{ "ModuleRelativePath", "Public/RoadUtilityLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URoadUtilityLibrary constinit property declarations **********************
// ********** End Class URoadUtilityLibrary constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AppendSpline"), .Pointer = &URoadUtilityLibrary::execAppendSpline },
		{ .NameUTF8 = UTF8TEXT("CreateDebugRoadGeoFromPerimeter"), .Pointer = &URoadUtilityLibrary::execCreateDebugRoadGeoFromPerimeter },
		{ .NameUTF8 = UTF8TEXT("CutSpline"), .Pointer = &URoadUtilityLibrary::execCutSpline },
		{ .NameUTF8 = UTF8TEXT("FindBridgeSegments"), .Pointer = &URoadUtilityLibrary::execFindBridgeSegments },
		{ .NameUTF8 = UTF8TEXT("FindBridgeSegmentsOnCurve"), .Pointer = &URoadUtilityLibrary::execFindBridgeSegmentsOnCurve },
		{ .NameUTF8 = UTF8TEXT("FindCityKitElementEdges"), .Pointer = &URoadUtilityLibrary::execFindCityKitElementEdges },
		{ .NameUTF8 = UTF8TEXT("FindPolylineIntersections"), .Pointer = &URoadUtilityLibrary::execFindPolylineIntersections },
		{ .NameUTF8 = UTF8TEXT("FindWorldBLDKitElementPoints"), .Pointer = &URoadUtilityLibrary::execFindWorldBLDKitElementPoints },
		{ .NameUTF8 = UTF8TEXT("FitCubic"), .Pointer = &URoadUtilityLibrary::execFitCubic },
		{ .NameUTF8 = UTF8TEXT("GetAverageLocation"), .Pointer = &URoadUtilityLibrary::execGetAverageLocation },
		{ .NameUTF8 = UTF8TEXT("GetControlPoints"), .Pointer = &URoadUtilityLibrary::execGetControlPoints },
		{ .NameUTF8 = UTF8TEXT("GetCurvePoints"), .Pointer = &URoadUtilityLibrary::execGetCurvePoints },
		{ .NameUTF8 = UTF8TEXT("GetLaneAtLocation"), .Pointer = &URoadUtilityLibrary::execGetLaneAtLocation },
		{ .NameUTF8 = UTF8TEXT("GetOuterLanes"), .Pointer = &URoadUtilityLibrary::execGetOuterLanes },
		{ .NameUTF8 = UTF8TEXT("InsertSplinePoint"), .Pointer = &URoadUtilityLibrary::execInsertSplinePoint },
		{ .NameUTF8 = UTF8TEXT("InvertSpline"), .Pointer = &URoadUtilityLibrary::execInvertSpline },
		{ .NameUTF8 = UTF8TEXT("IsPointBetweenEdgeCurves_WindingNumberXY"), .Pointer = &URoadUtilityLibrary::execIsPointBetweenEdgeCurves_WindingNumberXY },
		{ .NameUTF8 = UTF8TEXT("PointsOnClothoid"), .Pointer = &URoadUtilityLibrary::execPointsOnClothoid },
		{ .NameUTF8 = UTF8TEXT("PointsOnClothoidAdaptive"), .Pointer = &URoadUtilityLibrary::execPointsOnClothoidAdaptive },
		{ .NameUTF8 = UTF8TEXT("SampleSplineToTransforms"), .Pointer = &URoadUtilityLibrary::execSampleSplineToTransforms },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URoadUtilityLibrary_AppendSpline, "AppendSpline" }, // 5ddcb625e01f37f07e3d1af0be9341397c7ce066
		{ &Z_Construct_UFunction_URoadUtilityLibrary_CreateDebugRoadGeoFromPerimeter, "CreateDebugRoadGeoFromPerimeter" }, // 9f4b606f66c6589efddd95caa256d0702b767217
		{ &Z_Construct_UFunction_URoadUtilityLibrary_CutSpline, "CutSpline" }, // d456d62772c195e561f722bd97f444c6c574992f
		{ &Z_Construct_UFunction_URoadUtilityLibrary_FindBridgeSegments, "FindBridgeSegments" }, // 95dad928471773c203a91627496b3f2d24c9b734
		{ &Z_Construct_UFunction_URoadUtilityLibrary_FindBridgeSegmentsOnCurve, "FindBridgeSegmentsOnCurve" }, // 299d56e1d074091f506f8835e800abbcf127548b
		{ &Z_Construct_UFunction_URoadUtilityLibrary_FindCityKitElementEdges, "FindCityKitElementEdges" }, // f1a89445d4f9bfc44332b709907a8d78a7a2b079
		{ &Z_Construct_UFunction_URoadUtilityLibrary_FindPolylineIntersections, "FindPolylineIntersections" }, // 863d8af5ff5d5962858fd120cfdb65bbc38261be
		{ &Z_Construct_UFunction_URoadUtilityLibrary_FindWorldBLDKitElementPoints, "FindWorldBLDKitElementPoints" }, // c0c288d9c81631555b8625d0e0f71f038a752ac7
		{ &Z_Construct_UFunction_URoadUtilityLibrary_FitCubic, "FitCubic" }, // de2a620311a4c8b9b7c1e6a91a5c3a5d8d7c10a9
		{ &Z_Construct_UFunction_URoadUtilityLibrary_GetAverageLocation, "GetAverageLocation" }, // cddeec528b52634e8785a108417d242ab79cdeed
		{ &Z_Construct_UFunction_URoadUtilityLibrary_GetControlPoints, "GetControlPoints" }, // 4745a6a966e32624073a5fe611075db33ffac5dd
		{ &Z_Construct_UFunction_URoadUtilityLibrary_GetCurvePoints, "GetCurvePoints" }, // 6ebf120f60643eacd1c9e6daee2eaaf1fc96ef96
		{ &Z_Construct_UFunction_URoadUtilityLibrary_GetLaneAtLocation, "GetLaneAtLocation" }, // 64ec15a3ef75f75254a666751182e2aafbd32b28
		{ &Z_Construct_UFunction_URoadUtilityLibrary_GetOuterLanes, "GetOuterLanes" }, // 7f4f7247292908115397c62145389ed1145f03f1
		{ &Z_Construct_UFunction_URoadUtilityLibrary_InsertSplinePoint, "InsertSplinePoint" }, // 5b5d2b46108d9739decc8aa570c5626b56a315ea
		{ &Z_Construct_UFunction_URoadUtilityLibrary_InvertSpline, "InvertSpline" }, // a4c7abeb2503b3141f6a217ae3855af1a58150af
		{ &Z_Construct_UFunction_URoadUtilityLibrary_IsPointBetweenEdgeCurves_WindingNumberXY, "IsPointBetweenEdgeCurves_WindingNumberXY" }, // 5b9bb5447d2df69c79e1801f30e9d21c5fd2448c
		{ &Z_Construct_UFunction_URoadUtilityLibrary_PointsOnClothoid, "PointsOnClothoid" }, // f9c622ec0f3e902b09693f2c6fa9485e528757c3
		{ &Z_Construct_UFunction_URoadUtilityLibrary_PointsOnClothoidAdaptive, "PointsOnClothoidAdaptive" }, // 0f86ef361be85640221c7b2d52be0f762708e2a8
		{ &Z_Construct_UFunction_URoadUtilityLibrary_SampleSplineToTransforms, "SampleSplineToTransforms" }, // 4fcf7c545bd6d8bcccdd23e633bd80299099c4cf
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadUtilityLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoadUtilityLibrary,
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
static void URoadUtilityLibrary_StaticRegisterNativesURoadUtilityLibrary()
{
	UClass* Class = URoadUtilityLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URoadUtilityLibrary;
UClass* Z_Construct_UClass_URoadUtilityLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoadUtilityLibrary;
		if (!Z_Registration_Info_UClass_URoadUtilityLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadUtilityLibrary"),
				Z_Registration_Info_UClass_URoadUtilityLibrary.InnerSingleton,
				URoadUtilityLibrary_StaticRegisterNativesURoadUtilityLibrary,
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
		return Z_Registration_Info_UClass_URoadUtilityLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoadUtilityLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoadUtilityLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoadUtilityLibrary.OuterSingleton;
}
#undef UHT_STATICS
URoadUtilityLibrary::URoadUtilityLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoadUtilityLibrary);
URoadUtilityLibrary::~URoadUtilityLibrary() {}
// ********** End Class URoadUtilityLibrary ********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadUtilityLibrary_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RoadBLDRuntime_ERoadGeoTriangulationMethod, TEXT("ERoadGeoTriangulationMethod"), &ZRIE_ERoadGeoTriangulationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3587322575U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoadUtilityLibrary, TEXT("URoadUtilityLibrary"), &Z_Registration_Info_UClass_URoadUtilityLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoadUtilityLibrary), 2103822596U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadUtilityLibrary_h__Script_RoadBLDRuntime_05415c5a8de36c26712f6a43f7d107642a4a5124{
	TEXT("/Script/RoadBLDRuntime"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
