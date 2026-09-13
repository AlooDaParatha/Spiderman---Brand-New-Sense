// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoadMeshGenerator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRoadMeshGenerator() {}

// ********** Begin Cross Module References ********************************************************
WORLDBLDRUNTIME_API UClass* Z_Construct_UClass_UWorldBLDDynamicMeshGenerator(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USplineComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadDynamicMeshGenerator(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadDynamicMeshGenerator(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ARoadGeo(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class URoadDynamicMeshGenerator Function GenerateChevronGoreMarkingsToComponent 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadDynamicMeshGenerator_GenerateChevronGoreMarkingsToComponent_Statics
struct UHT_STATICS
{
	struct RoadDynamicMeshGenerator_eventGenerateChevronGoreMarkingsToComponent_Parms
	{
		UStaticMeshComponent* TargetMeshComponent;
		double ChevronAngle;
		double ChevronRotation;
		double LineSpace;
		double LineWidth;
		USplineComponent* TargetSpline;
		UMaterialInterface* Material;
		double ZOffset;
		double CenterOffset;
		UStaticMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Island" },
		{ "Comment", "/**\n\x09 * Static helper that creates a chevron gore marking mesh and assigns it to a StaticMeshComponent.\n\x09 * Creates a transient mesh generator, generates the chevron geometry, and sets the result on the target component.\n\x09 * \n\x09 * @param TargetMeshComponent The StaticMeshComponent to receive the generated chevron mesh\n\x09 * @param ChevronAngle Angle of each chevron arm from the lateral axis, in degrees (15=wide/flat, 75=sharp).\n\x09 * @param ChevronRotation The Z-axis rotation in degrees (0-360) defining the chevron direction\n\x09 * @param LineSpace The spacing between chevron lines\n\x09 * @param LineWidth The width/thickness of each chevron line\n\x09 * @param TargetSpline The spline component defining the boundary area for the chevron markings\n\x09 * @param Material Optional material to apply to the chevron geometry\n\x09 * @param ZOffset Vertical offset to apply to all chevron vertices (default: 0.0)\n\x09 * @param CenterOffset Lateral shift (cm) of the V-apex column along the pattern right axis after rotation\n\x09 * @return The generated UStaticMesh, or nullptr if generation failed\n\x09 */" },
		{ "CPP_Default_CenterOffset", "0.000000" },
		{ "CPP_Default_Material", "None" },
		{ "CPP_Default_ZOffset", "0.000000" },
		{ "ModuleRelativePath", "Public/RoadMeshGenerator.h" },
		{ "ToolTip", "Static helper that creates a chevron gore marking mesh and assigns it to a StaticMeshComponent.\nCreates a transient mesh generator, generates the chevron geometry, and sets the result on the target component.\n\n@param TargetMeshComponent The StaticMeshComponent to receive the generated chevron mesh\n@param ChevronAngle Angle of each chevron arm from the lateral axis, in degrees (15=wide/flat, 75=sharp).\n@param ChevronRotation The Z-axis rotation in degrees (0-360) defining the chevron direction\n@param LineSpace The spacing between chevron lines\n@param LineWidth The width/thickness of each chevron line\n@param TargetSpline The spline component defining the boundary area for the chevron markings\n@param Material Optional material to apply to the chevron geometry\n@param ZOffset Vertical offset to apply to all chevron vertices (default: 0.0)\n@param CenterOffset Lateral shift (cm) of the V-apex column along the pattern right axis after rotation\n@return The generated UStaticMesh, or nullptr if generation failed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSpline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GenerateChevronGoreMarkingsToComponent constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMeshComponent;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ChevronAngle;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ChevronRotation;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LineSpace;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LineWidth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSpline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ZOffset;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CenterOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GenerateChevronGoreMarkingsToComponent constinit property declarations **
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GenerateChevronGoreMarkingsToComponent Property Definitions ***********
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetMeshComponent = { "TargetMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadDynamicMeshGenerator_eventGenerateChevronGoreMarkingsToComponent_Parms, TargetMeshComponent), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMeshComponent_MetaData), NewProp_TargetMeshComponent_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ChevronAngle = { "ChevronAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadDynamicMeshGenerator_eventGenerateChevronGoreMarkingsToComponent_Parms, ChevronAngle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ChevronRotation = { "ChevronRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadDynamicMeshGenerator_eventGenerateChevronGoreMarkingsToComponent_Parms, ChevronRotation), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_LineSpace = { "LineSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadDynamicMeshGenerator_eventGenerateChevronGoreMarkingsToComponent_Parms, LineSpace), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_LineWidth = { "LineWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadDynamicMeshGenerator_eventGenerateChevronGoreMarkingsToComponent_Parms, LineWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetSpline = { "TargetSpline", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadDynamicMeshGenerator_eventGenerateChevronGoreMarkingsToComponent_Parms, TargetSpline), Z_Construct_UClass_USplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSpline_MetaData), NewProp_TargetSpline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadDynamicMeshGenerator_eventGenerateChevronGoreMarkingsToComponent_Parms, Material), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadDynamicMeshGenerator_eventGenerateChevronGoreMarkingsToComponent_Parms, ZOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_CenterOffset = { "CenterOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadDynamicMeshGenerator_eventGenerateChevronGoreMarkingsToComponent_Parms, CenterOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadDynamicMeshGenerator_eventGenerateChevronGoreMarkingsToComponent_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChevronAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ChevronRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LineSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LineWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CenterOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GenerateChevronGoreMarkingsToComponent Property Definitions *************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadDynamicMeshGenerator, nullptr, "GenerateChevronGoreMarkingsToComponent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadDynamicMeshGenerator_eventGenerateChevronGoreMarkingsToComponent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadDynamicMeshGenerator_eventGenerateChevronGoreMarkingsToComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadDynamicMeshGenerator_GenerateChevronGoreMarkingsToComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadDynamicMeshGenerator::execGenerateChevronGoreMarkingsToComponent)
{
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_TargetMeshComponent);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_ChevronAngle);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_ChevronRotation);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_LineSpace);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_LineWidth);
	P_GET_OBJECT(USplineComponent,Z_Param_TargetSpline);
	P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_ZOffset);
	P_GET_PROPERTY(FDoubleProperty,Z_Param_CenterOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStaticMesh**)Z_Param__Result=URoadDynamicMeshGenerator::GenerateChevronGoreMarkingsToComponent(Z_Param_TargetMeshComponent,Z_Param_ChevronAngle,Z_Param_ChevronRotation,Z_Param_LineSpace,Z_Param_LineWidth,Z_Param_TargetSpline,Z_Param_Material,Z_Param_ZOffset,Z_Param_CenterOffset);
	P_NATIVE_END;
}
// ********** End Class URoadDynamicMeshGenerator Function GenerateChevronGoreMarkingsToComponent **

// ********** Begin Class URoadDynamicMeshGenerator Function GetChevronRotationFromSpline **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadDynamicMeshGenerator_GetChevronRotationFromSpline_Statics
struct UHT_STATICS
{
	struct RoadDynamicMeshGenerator_eventGetChevronRotationFromSpline_Parms
	{
		USplineComponent* TargetSpline;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Island" },
		{ "Comment", "/**\n\x09 * Calculates the optimal chevron rotation for a triangular gore zone spline.\n\x09 * Uses the furthest-from-centroid algorithm to find the apex of the triangle,\n\x09 * returning a rotation that points the chevrons toward the apex (merge point).\n\x09 * \n\x09 * @param TargetSpline The spline component defining the gore zone boundary\n\x09 * @return The rotation in degrees where 0 = +Y direction, 90 = +X direction.\n\x09 *         Returns 0.0 if the spline is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RoadMeshGenerator.h" },
		{ "ToolTip", "Calculates the optimal chevron rotation for a triangular gore zone spline.\nUses the furthest-from-centroid algorithm to find the apex of the triangle,\nreturning a rotation that points the chevrons toward the apex (merge point).\n\n@param TargetSpline The spline component defining the gore zone boundary\n@return The rotation in degrees where 0 = +Y direction, 90 = +X direction.\n        Returns 0.0 if the spline is invalid." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSpline_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetChevronRotationFromSpline constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSpline;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetChevronRotationFromSpline constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetChevronRotationFromSpline Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetSpline = { "TargetSpline", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadDynamicMeshGenerator_eventGetChevronRotationFromSpline_Parms, TargetSpline), Z_Construct_UClass_USplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSpline_MetaData), NewProp_TargetSpline_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(RoadDynamicMeshGenerator_eventGetChevronRotationFromSpline_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetChevronRotationFromSpline Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadDynamicMeshGenerator, nullptr, "GetChevronRotationFromSpline", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadDynamicMeshGenerator_eventGetChevronRotationFromSpline_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadDynamicMeshGenerator_eventGetChevronRotationFromSpline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadDynamicMeshGenerator_GetChevronRotationFromSpline(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadDynamicMeshGenerator::execGetChevronRotationFromSpline)
{
	P_GET_OBJECT(USplineComponent,Z_Param_TargetSpline);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=URoadDynamicMeshGenerator::GetChevronRotationFromSpline(Z_Param_TargetSpline);
	P_NATIVE_END;
}
// ********** End Class URoadDynamicMeshGenerator Function GetChevronRotationFromSpline ************

// ********** Begin Class URoadDynamicMeshGenerator ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoadDynamicMeshGenerator_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "RoadMeshGenerator.h" },
		{ "ModuleRelativePath", "Public/RoadMeshGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRoadGeoActor_MetaData[] = {
		{ "Comment", "/** The target RoadGeo actor that will receive the generated mesh */" },
		{ "ModuleRelativePath", "Public/RoadMeshGenerator.h" },
		{ "ToolTip", "The target RoadGeo actor that will receive the generated mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Comment", "/** Optional generic target actor used by island module generation. */" },
		{ "ModuleRelativePath", "Public/RoadMeshGenerator.h" },
		{ "ToolTip", "Optional generic target actor used by island module generation." },
	};
#endif // WITH_METADATA

// ********** Begin Class URoadDynamicMeshGenerator constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetRoadGeoActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URoadDynamicMeshGenerator constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GenerateChevronGoreMarkingsToComponent"), .Pointer = &URoadDynamicMeshGenerator::execGenerateChevronGoreMarkingsToComponent },
		{ .NameUTF8 = UTF8TEXT("GetChevronRotationFromSpline"), .Pointer = &URoadDynamicMeshGenerator::execGetChevronRotationFromSpline },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URoadDynamicMeshGenerator_GenerateChevronGoreMarkingsToComponent, "GenerateChevronGoreMarkingsToComponent" }, // 88e21a84de698d5b8e68e6f3e4ced35247033021
		{ &Z_Construct_UFunction_URoadDynamicMeshGenerator_GetChevronRotationFromSpline, "GetChevronRotationFromSpline" }, // d5a6284a77a3ff14308cc6bd7540f326f6b1a44a
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadDynamicMeshGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URoadDynamicMeshGenerator Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetRoadGeoActor = { "TargetRoadGeoActor", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadDynamicMeshGenerator, TargetRoadGeoActor), Z_Construct_UClass_ARoadGeo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRoadGeoActor_MetaData), NewProp_TargetRoadGeoActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadDynamicMeshGenerator, TargetActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetRoadGeoActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URoadDynamicMeshGenerator Property Definitions *****************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldBLDDynamicMeshGenerator,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoadDynamicMeshGenerator,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void URoadDynamicMeshGenerator_StaticRegisterNativesURoadDynamicMeshGenerator()
{
	UClass* Class = URoadDynamicMeshGenerator::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URoadDynamicMeshGenerator;
UClass* Z_Construct_UClass_URoadDynamicMeshGenerator(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoadDynamicMeshGenerator;
		if (!Z_Registration_Info_UClass_URoadDynamicMeshGenerator.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadDynamicMeshGenerator"),
				Z_Registration_Info_UClass_URoadDynamicMeshGenerator.InnerSingleton,
				URoadDynamicMeshGenerator_StaticRegisterNativesURoadDynamicMeshGenerator,
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
		return Z_Registration_Info_UClass_URoadDynamicMeshGenerator.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoadDynamicMeshGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoadDynamicMeshGenerator.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoadDynamicMeshGenerator.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoadDynamicMeshGenerator);
URoadDynamicMeshGenerator::~URoadDynamicMeshGenerator() {}
// ********** End Class URoadDynamicMeshGenerator **************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadMeshGenerator_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoadDynamicMeshGenerator, TEXT("URoadDynamicMeshGenerator"), &Z_Registration_Info_UClass_URoadDynamicMeshGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoadDynamicMeshGenerator), 2190930805U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadMeshGenerator_h__Script_RoadBLDRuntime_eb32ae73a29ca1394277542d21013aee50d61d48{
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
