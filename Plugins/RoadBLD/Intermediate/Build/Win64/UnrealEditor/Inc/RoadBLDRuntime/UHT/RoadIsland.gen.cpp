// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicRoad/RoadIsland.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRoadIsland() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USplineComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent(ETypeConstructPhase);
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ARoadIsland(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ARoadIsland(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadModuleObject(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class ARoadIsland Function EnforceLinearSplinePoints ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARoadIsland_EnforceLinearSplinePoints_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RoadBLD|Island" },
		{ "Comment", "/**\n\x09 * Ensures all spline points are set to Linear interpolation type.\n\x09 * Called automatically after any spline modification.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/RoadIsland.h" },
		{ "ToolTip", "Ensures all spline points are set to Linear interpolation type.\nCalled automatically after any spline modification." },
	};
#endif // WITH_METADATA

// ********** Begin Function EnforceLinearSplinePoints constinit property declarations *************
// ********** End Function EnforceLinearSplinePoints constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARoadIsland, nullptr, "EnforceLinearSplinePoints", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ARoadIsland_EnforceLinearSplinePoints(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARoadIsland::execEnforceLinearSplinePoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnforceLinearSplinePoints();
	P_NATIVE_END;
}
// ********** End Class ARoadIsland Function EnforceLinearSplinePoints *****************************

// ********** Begin Class ARoadIsland Function OnSplineModified ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARoadIsland_OnSplineModified_Statics
struct UHT_STATICS
{
	struct RoadIsland_eventOnSplineModified_Parms
	{
		USplineComponent* InSplineComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/** Called when the spline is modified in the editor */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/RoadIsland.h" },
		{ "ToolTip", "Called when the spline is modified in the editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSplineComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnSplineModified constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InSplineComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnSplineModified constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnSplineModified Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InSplineComponent = { "InSplineComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadIsland_eventOnSplineModified_Parms, InSplineComponent), Z_Construct_UClass_USplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSplineComponent_MetaData), NewProp_InSplineComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InSplineComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnSplineModified Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARoadIsland, nullptr, "OnSplineModified", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadIsland_eventOnSplineModified_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadIsland_eventOnSplineModified_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARoadIsland_OnSplineModified(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARoadIsland::execOnSplineModified)
{
	P_GET_OBJECT(USplineComponent,Z_Param_InSplineComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSplineModified(Z_Param_InSplineComponent);
	P_NATIVE_END;
}
// ********** End Class ARoadIsland Function OnSplineModified **************************************

// ********** Begin Class ARoadIsland Function RebuildIslandMesh ***********************************
static FName NAME_ARoadIsland_RebuildIslandMesh = FName(TEXT("RebuildIslandMesh"));
void ARoadIsland::RebuildIslandMesh()
{
	UFunction* Func = FindFunctionChecked(NAME_ARoadIsland_RebuildIslandMesh);
	ProcessEvent(Func,NULL);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARoadIsland_RebuildIslandMesh_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "RoadBLD|Island" },
		{ "Comment", "/**\n\x09 * Rebuilds the island mesh from the current spline points.\n\x09 * Called automatically when spline or properties change.\n\x09 * Can be overridden in Blueprint to customize mesh generation behavior.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/RoadIsland.h" },
		{ "ToolTip", "Rebuilds the island mesh from the current spline points.\nCalled automatically when spline or properties change.\nCan be overridden in Blueprint to customize mesh generation behavior." },
	};
#endif // WITH_METADATA

// ********** Begin Function RebuildIslandMesh constinit property declarations *********************
// ********** End Function RebuildIslandMesh constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARoadIsland, nullptr, "RebuildIslandMesh", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ARoadIsland_RebuildIslandMesh(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARoadIsland::execRebuildIslandMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RebuildIslandMesh_Implementation();
	P_NATIVE_END;
}
// ********** End Class ARoadIsland Function RebuildIslandMesh *************************************

// ********** Begin Class ARoadIsland **************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ARoadIsland_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ARoadIsland - An actor for generating road islands (medians, traffic islands, etc.)\n * \n * Contains a closed loop spline component that defines the island perimeter.\n * All spline points are forced to Linear interpolation (cannot be overridden by user).\n * The island mesh is automatically regenerated when the spline or properties are modified.\n */" },
		{ "IncludePath", "DynamicRoad/RoadIsland.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/RoadIsland.h" },
		{ "ToolTip", "ARoadIsland - An actor for generating road islands (medians, traffic islands, etc.)\n\nContains a closed loop spline component that defines the island perimeter.\nAll spline points are forced to Linear interpolation (cannot be overridden by user).\nThe island mesh is automatically regenerated when the spline or properties are modified." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[] = {
		{ "Category", "RoadBLD|Island" },
		{ "Comment", "/** The spline component defining the island perimeter (closed loop, Linear points only) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/RoadIsland.h" },
		{ "ToolTip", "The spline component defining the island perimeter (closed loop, Linear points only)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMeshComponent_MetaData[] = {
		{ "Category", "RoadBLD|Island" },
		{ "Comment", "/** The dynamic mesh component displaying the generated island geometry */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/RoadIsland.h" },
		{ "ToolTip", "The dynamic mesh component displaying the generated island geometry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleMeshComponent_MetaData[] = {
		{ "Category", "RoadBLD|Island" },
		{ "Comment", "/** The static mesh component used for procedural mesh road-module output. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/RoadIsland.h" },
		{ "ToolTip", "The static mesh component used for procedural mesh road-module output." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IslandMaterial_MetaData[] = {
		{ "Category", "RoadBLD|Island" },
		{ "Comment", "/** Material to apply to the island surface */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/RoadIsland.h" },
		{ "ToolTip", "Material to apply to the island surface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceHeightOffset_MetaData[] = {
		{ "Category", "RoadBLD|Island" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Height offset of the island surface from the spline points */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/RoadIsland.h" },
		{ "ToolTip", "Height offset of the island surface from the spline points" },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateSurfaceGeometry_MetaData[] = {
		{ "Category", "RoadBLD|Island" },
		{ "Comment", "/** Whether to generate island surface geometry on the dynamic mesh component */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/RoadIsland.h" },
		{ "ToolTip", "Whether to generate island surface geometry on the dynamic mesh component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReverseWindingOrder_MetaData[] = {
		{ "Category", "RoadBLD|Island" },
		{ "Comment", "/** Whether to reverse the winding order of the generated mesh (flips normals) */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/RoadIsland.h" },
		{ "ToolTip", "Whether to reverse the winding order of the generated mesh (flips normals)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DuplicatePointEpsilon_MetaData[] = {
		{ "Category", "RoadBLD|Island|Advanced" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Epsilon value for removing duplicate/nearly-duplicate vertices during mesh generation */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/RoadIsland.h" },
		{ "ToolTip", "Epsilon value for removing duplicate/nearly-duplicate vertices during mesh generation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoEnforceCCW_MetaData[] = {
		{ "Category", "RoadBLD|Island|Advanced" },
		{ "Comment", "/** Whether to automatically enforce counter-clockwise winding order for correct normals (recommended) */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/RoadIsland.h" },
		{ "ToolTip", "Whether to automatically enforce counter-clockwise winding order for correct normals (recommended)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadModuleClasses_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "RoadBLD|Island|Road Modules" },
		{ "Comment", "/**\n\x09 * Optional road-module classes to use as asset/class references.\n\x09 * Each class contributes its CDO defaults (same pattern as UDynamicRoadDrawPreset::RoadModules).\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/RoadIsland.h" },
		{ "ToolTip", "Optional road-module classes to use as asset/class references.\nEach class contributes its CDO defaults (same pattern as UDynamicRoadDrawPreset::RoadModules)." },
	};
#endif // WITH_METADATA

// ********** Begin Class ARoadIsland constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ModuleMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IslandMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceHeightOffset;
	static void NewProp_bGenerateSurfaceGeometry_SetBit(void* Obj)
	{
		((ARoadIsland*)Obj)->bGenerateSurfaceGeometry = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateSurfaceGeometry;
	static void NewProp_bReverseWindingOrder_SetBit(void* Obj)
	{
		((ARoadIsland*)Obj)->bReverseWindingOrder = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseWindingOrder;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DuplicatePointEpsilon;
	static void NewProp_bAutoEnforceCCW_SetBit(void* Obj)
	{
		((ARoadIsland*)Obj)->bAutoEnforceCCW = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoEnforceCCW;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RoadModuleClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoadModuleClasses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ARoadIsland constinit property declarations ********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("EnforceLinearSplinePoints"), .Pointer = &ARoadIsland::execEnforceLinearSplinePoints },
		{ .NameUTF8 = UTF8TEXT("OnSplineModified"), .Pointer = &ARoadIsland::execOnSplineModified },
		{ .NameUTF8 = UTF8TEXT("RebuildIslandMesh"), .Pointer = &ARoadIsland::execRebuildIslandMesh },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARoadIsland_EnforceLinearSplinePoints, "EnforceLinearSplinePoints" }, // 3faaa4ff4154b3ce763b8bcde459145183098295
		{ &Z_Construct_UFunction_ARoadIsland_OnSplineModified, "OnSplineModified" }, // 705a72e16b9408f11d4e29bc5d3c9422e42cbf7b
		{ &Z_Construct_UFunction_ARoadIsland_RebuildIslandMesh, "RebuildIslandMesh" }, // 03fdf9d5504ff565537dedf47df8403ab2f0ce8c
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoadIsland>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ARoadIsland Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadIsland, SplineComponent), Z_Construct_UClass_USplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineComponent_MetaData), NewProp_SplineComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DynamicMeshComponent = { "DynamicMeshComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadIsland, DynamicMeshComponent), Z_Construct_UClass_UDynamicMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMeshComponent_MetaData), NewProp_DynamicMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ModuleMeshComponent = { "ModuleMeshComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadIsland, ModuleMeshComponent), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleMeshComponent_MetaData), NewProp_ModuleMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_IslandMaterial = { "IslandMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadIsland, IslandMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IslandMaterial_MetaData), NewProp_IslandMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SurfaceHeightOffset = { "SurfaceHeightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadIsland, SurfaceHeightOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceHeightOffset_MetaData), NewProp_SurfaceHeightOffset_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bGenerateSurfaceGeometry = { "bGenerateSurfaceGeometry", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ARoadIsland), &UHT_STATICS::NewProp_bGenerateSurfaceGeometry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateSurfaceGeometry_MetaData), NewProp_bGenerateSurfaceGeometry_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bReverseWindingOrder = { "bReverseWindingOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ARoadIsland), &UHT_STATICS::NewProp_bReverseWindingOrder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReverseWindingOrder_MetaData), NewProp_bReverseWindingOrder_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DuplicatePointEpsilon = { "DuplicatePointEpsilon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadIsland, DuplicatePointEpsilon), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DuplicatePointEpsilon_MetaData), NewProp_DuplicatePointEpsilon_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoEnforceCCW = { "bAutoEnforceCCW", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ARoadIsland), &UHT_STATICS::NewProp_bAutoEnforceCCW_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoEnforceCCW_MetaData), NewProp_bAutoEnforceCCW_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_RoadModuleClasses_Inner = { "RoadModuleClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_URoadModuleObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RoadModuleClasses = { "RoadModuleClasses", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadIsland, RoadModuleClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadModuleClasses_MetaData), NewProp_RoadModuleClasses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SplineComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DynamicMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ModuleMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IslandMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SurfaceHeightOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bGenerateSurfaceGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bReverseWindingOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DuplicatePointEpsilon,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoEnforceCCW,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadModuleClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadModuleClasses,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ARoadIsland Property Definitions *******************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ARoadIsland,
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
static void ARoadIsland_StaticRegisterNativesARoadIsland()
{
	UClass* Class = ARoadIsland::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARoadIsland;
UClass* Z_Construct_UClass_ARoadIsland(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ARoadIsland;
		if (!Z_Registration_Info_UClass_ARoadIsland.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadIsland"),
				Z_Registration_Info_UClass_ARoadIsland.InnerSingleton,
				ARoadIsland_StaticRegisterNativesARoadIsland,
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
		return Z_Registration_Info_UClass_ARoadIsland.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ARoadIsland.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoadIsland.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ARoadIsland.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARoadIsland);
ARoadIsland::~ARoadIsland() {}
// ********** End Class ARoadIsland ****************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_RoadIsland_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARoadIsland, TEXT("ARoadIsland"), &Z_Registration_Info_UClass_ARoadIsland, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoadIsland), 2697448576U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_RoadIsland_h__Script_RoadBLDRuntime_0fba895041a4150113541510a81a2a528a291f84{
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
