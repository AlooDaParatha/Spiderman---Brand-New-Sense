// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DrivewayComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDrivewayComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent(ETypeConstructPhase);
WORLDBLDRUNTIME_API UClass* Z_Construct_UClass_UWorldBLDInteractionComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDrivewayComponent(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDrivewayComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UDrivewayComponent Function BuildDriveway ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDrivewayComponent_BuildDriveway_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Driveway" },
		{ "Comment", "/** Rebuilds the driveway mesh and curb-cut volume. Safe to call repeatedly. */" },
		{ "ModuleRelativePath", "Public/DrivewayComponent.h" },
		{ "ToolTip", "Rebuilds the driveway mesh and curb-cut volume. Safe to call repeatedly." },
	};
#endif // WITH_METADATA

// ********** Begin Function BuildDriveway constinit property declarations *************************
// ********** End Function BuildDriveway constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDrivewayComponent, nullptr, "BuildDriveway", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UDrivewayComponent_BuildDriveway(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDrivewayComponent::execBuildDriveway)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BuildDriveway();
	P_NATIVE_END;
}
// ********** End Class UDrivewayComponent Function BuildDriveway **********************************

// ********** Begin Class UDrivewayComponent Function ClearDriveway ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDrivewayComponent_ClearDriveway_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Driveway" },
		{ "Comment", "/** Clears the generated mesh and curb-cut volume (leaves the component in a disconnected state). */" },
		{ "ModuleRelativePath", "Public/DrivewayComponent.h" },
		{ "ToolTip", "Clears the generated mesh and curb-cut volume (leaves the component in a disconnected state)." },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearDriveway constinit property declarations *************************
// ********** End Function ClearDriveway constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDrivewayComponent, nullptr, "ClearDriveway", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UDrivewayComponent_ClearDriveway(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDrivewayComponent::execClearDriveway)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearDriveway();
	P_NATIVE_END;
}
// ********** End Class UDrivewayComponent Function ClearDriveway **********************************

// ********** Begin Class UDrivewayComponent *******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDrivewayComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "RoadBLD" },
		{ "Comment", "/**\n * UDrivewayComponent\n *\n * Generates a landscape-conformed asphalt driveway surface that connects a prefab (e.g. a house\n * garage) to the nearest RoadBLD road. The component's own location is the driveway start point\n * (place it at the garage door); its forward vector defines the direction toward the road.\n *\n * The driveway is a straight strip in XY whose end row of vertices is sampled directly from the\n * target road's outer edge polyline so the surfaces meet without a gap. A curb-cut interaction\n * volume is automatically placed at the road end so RoadBLD flattens the sidewalk there.\n *\n * Driveways are NOT roads: they never participate in the road rebuild pipeline, form no\n * intersections, and never modify the roads they connect to.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "DrivewayComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DrivewayComponent.h" },
		{ "ToolTip", "UDrivewayComponent\n\nGenerates a landscape-conformed asphalt driveway surface that connects a prefab (e.g. a house\ngarage) to the nearest RoadBLD road. The component's own location is the driveway start point\n(place it at the garage door); its forward vector defines the direction toward the road.\n\nThe driveway is a straight strip in XY whose end row of vertices is sampled directly from the\ntarget road's outer edge polyline so the surfaces meet without a gap. A curb-cut interaction\nvolume is automatically placed at the road end so RoadBLD flattens the sidewalk there.\n\nDriveways are NOT roads: they never participate in the road rebuild pipeline, form no\nintersections, and never modify the roads they connect to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrivewayWidth_MetaData[] = {
		{ "Category", "Driveway" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Width of the driveway strip in cm. */" },
		{ "ModuleRelativePath", "Public/DrivewayComponent.h" },
		{ "ToolTip", "Width of the driveway strip in cm." },
		{ "UIMin", "50.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrivewayMaterial_MetaData[] = {
		{ "Category", "Driveway" },
		{ "Comment", "/** Surface material applied to the generated driveway mesh (asphalt). */" },
		{ "ModuleRelativePath", "Public/DrivewayComponent.h" },
		{ "ToolTip", "Surface material applied to the generated driveway mesh (asphalt)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConformToLandscape_MetaData[] = {
		{ "Category", "Driveway|Landscape" },
		{ "Comment", "/** When true, driveway vertices are traced down onto the landscape so the surface follows terrain. */" },
		{ "ModuleRelativePath", "Public/DrivewayComponent.h" },
		{ "ToolTip", "When true, driveway vertices are traced down onto the landscape so the surface follows terrain." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeHeightOffset_MetaData[] = {
		{ "Category", "Driveway|Landscape" },
		{ "Comment", "/** Extra Z clearance (cm) added above the sampled terrain height when conforming to landscape. */" },
		{ "EditCondition", "bConformToLandscape" },
		{ "ModuleRelativePath", "Public/DrivewayComponent.h" },
		{ "ToolTip", "Extra Z clearance (cm) added above the sampled terrain height when conforming to landscape." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSearchDistance_MetaData[] = {
		{ "Category", "Driveway" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Maximum distance (cm) to search forward for a road to connect to. */" },
		{ "ModuleRelativePath", "Public/DrivewayComponent.h" },
		{ "ToolTip", "Maximum distance (cm) to search forward for a road to connect to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossSectionCount_MetaData[] = {
		{ "Category", "Driveway" },
		{ "ClampMax", "200" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of intermediate cross-section rows between the start and the road end (more = smoother terrain following). */" },
		{ "ModuleRelativePath", "Public/DrivewayComponent.h" },
		{ "ToolTip", "Number of intermediate cross-section rows between the start and the road end (more = smoother terrain following)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LateralVertexCount_MetaData[] = {
		{ "Category", "Driveway" },
		{ "ClampMax", "64" },
		{ "ClampMin", "2" },
		{ "Comment", "/** Number of lateral vertices sampled across the width (and along the road edge end row). */" },
		{ "ModuleRelativePath", "Public/DrivewayComponent.h" },
		{ "ToolTip", "Number of lateral vertices sampled across the width (and along the road edge end row)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureScale_MetaData[] = {
		{ "Category", "Driveway" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** World-space UV scale (cm per UV unit) for the driveway surface texture. */" },
		{ "ModuleRelativePath", "Public/DrivewayComponent.h" },
		{ "ToolTip", "World-space UV scale (cm per UV unit) for the driveway surface texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeTaperOutward_MetaData[] = {
		{ "Category", "Driveway" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Horizontal outward offset (cm) for edge taper strips that blend the driveway into surrounding terrain. */" },
		{ "ModuleRelativePath", "Public/DrivewayComponent.h" },
		{ "ToolTip", "Horizontal outward offset (cm) for edge taper strips that blend the driveway into surrounding terrain." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeTaperDownward_MetaData[] = {
		{ "Category", "Driveway" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Vertical downward offset (cm) for edge taper strips. Match EdgeTaperOutward for ~45 degree slope. */" },
		{ "ModuleRelativePath", "Public/DrivewayComponent.h" },
		{ "ToolTip", "Vertical downward offset (cm) for edge taper strips. Match EdgeTaperOutward for ~45 degree slope." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurbCutBoxExtent_MetaData[] = {
		{ "Category", "Driveway|Curb Cut" },
		{ "Comment", "/** Half-extents (cm) of the auto-generated curb-cut interaction volume placed at the road end. */" },
		{ "ModuleRelativePath", "Public/DrivewayComponent.h" },
		{ "ToolTip", "Half-extents (cm) of the auto-generated curb-cut interaction volume placed at the road end." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrivewayMeshComponent_MetaData[] = {
		{ "Category", "Driveway" },
		{ "Comment", "/** Holds the generated driveway static mesh. Created lazily. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DrivewayComponent.h" },
		{ "ToolTip", "Holds the generated driveway static mesh. Created lazily." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurbCutInteraction_MetaData[] = {
		{ "Category", "Driveway" },
		{ "Comment", "/** Curb-cut interaction volume placed at the road end (FlattenSidewalks). Created lazily. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DrivewayComponent.h" },
		{ "ToolTip", "Curb-cut interaction volume placed at the road end (FlattenSidewalks). Created lazily." },
	};
#endif // WITH_METADATA

// ********** Begin Class UDrivewayComponent constinit property declarations ***********************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DrivewayWidth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrivewayMaterial;
	static void NewProp_bConformToLandscape_SetBit(void* Obj)
	{
		((UDrivewayComponent*)Obj)->bConformToLandscape = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConformToLandscape;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LandscapeHeightOffset;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxSearchDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CrossSectionCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LateralVertexCount;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TextureScale;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EdgeTaperOutward;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EdgeTaperDownward;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurbCutBoxExtent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DrivewayMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurbCutInteraction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDrivewayComponent constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BuildDriveway"), .Pointer = &UDrivewayComponent::execBuildDriveway },
		{ .NameUTF8 = UTF8TEXT("ClearDriveway"), .Pointer = &UDrivewayComponent::execClearDriveway },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDrivewayComponent_BuildDriveway, "BuildDriveway" }, // 067570786341565a1b251e06ae09a5cdda9189a3
		{ &Z_Construct_UFunction_UDrivewayComponent_ClearDriveway, "ClearDriveway" }, // 0d3be96f91949c188651f978dee700a222518563
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrivewayComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UDrivewayComponent Property Definitions **********************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_DrivewayWidth = { "DrivewayWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UDrivewayComponent, DrivewayWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrivewayWidth_MetaData), NewProp_DrivewayWidth_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DrivewayMaterial = { "DrivewayMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UDrivewayComponent, DrivewayMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrivewayMaterial_MetaData), NewProp_DrivewayMaterial_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bConformToLandscape = { "bConformToLandscape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDrivewayComponent), &UHT_STATICS::NewProp_bConformToLandscape_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConformToLandscape_MetaData), NewProp_bConformToLandscape_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_LandscapeHeightOffset = { "LandscapeHeightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UDrivewayComponent, LandscapeHeightOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeHeightOffset_MetaData), NewProp_LandscapeHeightOffset_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_MaxSearchDistance = { "MaxSearchDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UDrivewayComponent, MaxSearchDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSearchDistance_MetaData), NewProp_MaxSearchDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CrossSectionCount = { "CrossSectionCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UDrivewayComponent, CrossSectionCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossSectionCount_MetaData), NewProp_CrossSectionCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LateralVertexCount = { "LateralVertexCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UDrivewayComponent, LateralVertexCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LateralVertexCount_MetaData), NewProp_LateralVertexCount_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_TextureScale = { "TextureScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UDrivewayComponent, TextureScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureScale_MetaData), NewProp_TextureScale_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_EdgeTaperOutward = { "EdgeTaperOutward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UDrivewayComponent, EdgeTaperOutward), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeTaperOutward_MetaData), NewProp_EdgeTaperOutward_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_EdgeTaperDownward = { "EdgeTaperDownward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UDrivewayComponent, EdgeTaperDownward), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeTaperDownward_MetaData), NewProp_EdgeTaperDownward_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_CurbCutBoxExtent = { "CurbCutBoxExtent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDrivewayComponent, CurbCutBoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurbCutBoxExtent_MetaData), NewProp_CurbCutBoxExtent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DrivewayMeshComponent = { "DrivewayMeshComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UDrivewayComponent, DrivewayMeshComponent), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrivewayMeshComponent_MetaData), NewProp_DrivewayMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CurbCutInteraction = { "CurbCutInteraction", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UDrivewayComponent, CurbCutInteraction), Z_Construct_UClass_UWorldBLDInteractionComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurbCutInteraction_MetaData), NewProp_CurbCutInteraction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DrivewayWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DrivewayMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bConformToLandscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapeHeightOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaxSearchDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CrossSectionCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LateralVertexCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextureScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeTaperOutward,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeTaperDownward,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurbCutBoxExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DrivewayMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurbCutInteraction,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UDrivewayComponent Property Definitions ************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_USceneComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDrivewayComponent,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UDrivewayComponent_StaticRegisterNativesUDrivewayComponent()
{
	UClass* Class = UDrivewayComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDrivewayComponent;
UClass* Z_Construct_UClass_UDrivewayComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDrivewayComponent;
		if (!Z_Registration_Info_UClass_UDrivewayComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DrivewayComponent"),
				Z_Registration_Info_UClass_UDrivewayComponent.InnerSingleton,
				UDrivewayComponent_StaticRegisterNativesUDrivewayComponent,
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
		return Z_Registration_Info_UClass_UDrivewayComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDrivewayComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDrivewayComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDrivewayComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDrivewayComponent);
UDrivewayComponent::~UDrivewayComponent() {}
// ********** End Class UDrivewayComponent *********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DrivewayComponent_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDrivewayComponent, TEXT("UDrivewayComponent"), &Z_Registration_Info_UClass_UDrivewayComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDrivewayComponent), 4245658517U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DrivewayComponent_h__Script_RoadBLDRuntime_87fe8b74549350a17d37b33c003473c7f46b9b52{
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
