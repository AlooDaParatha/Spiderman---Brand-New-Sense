// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoadPointEditController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRoadPointEditController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
WORLDBLDEDITOR_API UClass* Z_Construct_UClass_UWorldBLDEditController(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoad(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UEdgeCurve(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadPointEditController(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FRoadPointGizmoMetadata(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadPointEditController(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FRoadPointGizmoMetadata *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRoadPointGizmoMetadata_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRoadPointGizmoMetadata>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRoadPointGizmoMetadata); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RoadPointEditController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[] = {
		{ "Category", "Point" },
		{ "Comment", "// Display name or identifier for this point\n" },
		{ "ModuleRelativePath", "Public/RoadPointEditController.h" },
		{ "ToolTip", "Display name or identifier for this point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Point" },
		{ "Comment", "// Optional visual color for the point\n" },
		{ "ModuleRelativePath", "Public/RoadPointEditController.h" },
		{ "ToolTip", "Optional visual color for the point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "Point" },
		{ "ModuleRelativePath", "Public/RoadPointEditController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Point" },
		{ "ModuleRelativePath", "Public/RoadPointEditController.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRoadPointGizmoMetadata constinit property declarations ***********
	static const UECodeGen_Private::FNamePropertyParams NewProp_Label;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRoadPointGizmoMetadata constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadPointGizmoMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRoadPointGizmoMetadata Property Definitions **********************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadPointGizmoMetadata, Label), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Label_MetaData), NewProp_Label_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadPointGizmoMetadata, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadPointGizmoMetadata, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadPointGizmoMetadata, Offset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Label,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRoadPointGizmoMetadata Property Definitions ************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	&NewStructOps,
	"RoadPointGizmoMetadata",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRoadPointGizmoMetadata>(),
	alignof(FRoadPointGizmoMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRoadPointGizmoMetadata;
UScriptStruct* Z_Construct_UScriptStruct_FRoadPointGizmoMetadata(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRoadPointGizmoMetadata.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRoadPointGizmoMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadPointGizmoMetadata, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("RoadPointGizmoMetadata"));
		}
		return Z_Registration_Info_UScriptStruct_FRoadPointGizmoMetadata.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRoadPointGizmoMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRoadPointGizmoMetadata.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRoadPointGizmoMetadata.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRoadPointGizmoMetadata *********************************************

// ********** Begin Class URoadPointEditController Function CreateFromEdgeCurve ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadPointEditController_CreateFromEdgeCurve_Statics
struct UHT_STATICS
{
	struct RoadPointEditController_eventCreateFromEdgeCurve_Parms
	{
		UEdgeCurve* EdgeCurve;
		URoadPointEditController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "PointGizmo" },
		{ "Comment", "// Static factory method to create a controller from an EdgeCurve reference\n" },
		{ "ModuleRelativePath", "Public/RoadPointEditController.h" },
		{ "ToolTip", "Static factory method to create a controller from an EdgeCurve reference" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateFromEdgeCurve constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EdgeCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CreateFromEdgeCurve constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CreateFromEdgeCurve Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_EdgeCurve = { "EdgeCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadPointEditController_eventCreateFromEdgeCurve_Parms, EdgeCurve), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RoadPointEditController_eventCreateFromEdgeCurve_Parms, ReturnValue), Z_Construct_UClass_URoadPointEditController, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CreateFromEdgeCurve Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadPointEditController, nullptr, "CreateFromEdgeCurve", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadPointEditController_eventCreateFromEdgeCurve_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadPointEditController_eventCreateFromEdgeCurve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadPointEditController_CreateFromEdgeCurve(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadPointEditController::execCreateFromEdgeCurve)
{
	P_GET_OBJECT(UEdgeCurve,Z_Param_EdgeCurve);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URoadPointEditController**)Z_Param__Result=URoadPointEditController::CreateFromEdgeCurve(Z_Param_EdgeCurve);
	P_NATIVE_END;
}
// ********** End Class URoadPointEditController Function CreateFromEdgeCurve **********************

// ********** Begin Class URoadPointEditController *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoadPointEditController_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Edit controller that manages draggable points controlling the offsets of an EdgeCurve. Points are rendered via PDI and constrained to XY.\n */" },
		{ "IncludePath", "RoadPointEditController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RoadPointEditController.h" },
		{ "ToolTip", "Edit controller that manages draggable points controlling the offsets of an EdgeCurve. Points are rendered via PDI and constrained to XY." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialPointLocations_MetaData[] = {
		{ "Category", "PointGizmo" },
		{ "Comment", "// Initial locations for the five points (Z is preserved during drag)\n" },
		{ "ModuleRelativePath", "Public/RoadPointEditController.h" },
		{ "ToolTip", "Initial locations for the five points (Z is preserved during drag)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointMetadata_MetaData[] = {
		{ "Category", "PointGizmo" },
		{ "Comment", "// Metadata per point\n" },
		{ "ModuleRelativePath", "Public/RoadPointEditController.h" },
		{ "ToolTip", "Metadata per point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetEdgeCurve_MetaData[] = {
		{ "Category", "PointGizmo" },
		{ "Comment", "// Target edge curve to edit\n" },
		{ "ModuleRelativePath", "Public/RoadPointEditController.h" },
		{ "ToolTip", "Target edge curve to edit" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRoad_MetaData[] = {
		{ "Category", "PointGizmo" },
		{ "Comment", "// Target road owning the edge curve\n" },
		{ "ModuleRelativePath", "Public/RoadPointEditController.h" },
		{ "ToolTip", "Target road owning the edge curve" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointActors_MetaData[] = {
		{ "Comment", "// Actors representing each draggable point\n" },
		{ "ModuleRelativePath", "Public/RoadPointEditController.h" },
		{ "ToolTip", "Actors representing each draggable point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockedZPerPoint_MetaData[] = {
		{ "Comment", "// Cached Z per point to enforce XY-only constraint\n" },
		{ "ModuleRelativePath", "Public/RoadPointEditController.h" },
		{ "ToolTip", "Cached Z per point to enforce XY-only constraint" },
	};
#endif // WITH_METADATA

// ********** Begin Class URoadPointEditController constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialPointLocations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InitialPointLocations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointMetadata_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PointMetadata;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetEdgeCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetRoad;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PointActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PointActors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LockedZPerPoint_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LockedZPerPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URoadPointEditController constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CreateFromEdgeCurve"), .Pointer = &URoadPointEditController::execCreateFromEdgeCurve },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URoadPointEditController_CreateFromEdgeCurve, "CreateFromEdgeCurve" }, // 4acb70255bffbc26b25ef601e94d78c05f27b3ae
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadPointEditController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URoadPointEditController Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InitialPointLocations_Inner = { "InitialPointLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_InitialPointLocations = { "InitialPointLocations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URoadPointEditController, InitialPointLocations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialPointLocations_MetaData), NewProp_InitialPointLocations_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PointMetadata_Inner = { "PointMetadata", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRoadPointGizmoMetadata, METADATA_PARAMS(0, nullptr) }; // c6702896c2d49ed78ca87b8d2f282781df5a1421
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PointMetadata = { "PointMetadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URoadPointEditController, PointMetadata), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointMetadata_MetaData), NewProp_PointMetadata_MetaData) }; // c6702896c2d49ed78ca87b8d2f282781df5a1421
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetEdgeCurve = { "TargetEdgeCurve", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadPointEditController, TargetEdgeCurve), Z_Construct_UClass_UEdgeCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetEdgeCurve_MetaData), NewProp_TargetEdgeCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetRoad = { "TargetRoad", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadPointEditController, TargetRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRoad_MetaData), NewProp_TargetRoad_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams UHT_STATICS::NewProp_PointActors_Inner = { "PointActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PointActors = { "PointActors", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URoadPointEditController, PointActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointActors_MetaData), NewProp_PointActors_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LockedZPerPoint_Inner = { "LockedZPerPoint", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_LockedZPerPoint = { "LockedZPerPoint", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URoadPointEditController, LockedZPerPoint), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockedZPerPoint_MetaData), NewProp_LockedZPerPoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InitialPointLocations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InitialPointLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointMetadata_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointMetadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetEdgeCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LockedZPerPoint_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LockedZPerPoint,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URoadPointEditController Property Definitions ******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldBLDEditController,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoadPointEditController,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void URoadPointEditController_StaticRegisterNativesURoadPointEditController()
{
	UClass* Class = URoadPointEditController::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URoadPointEditController;
UClass* Z_Construct_UClass_URoadPointEditController(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoadPointEditController;
		if (!Z_Registration_Info_UClass_URoadPointEditController.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadPointEditController"),
				Z_Registration_Info_UClass_URoadPointEditController.InnerSingleton,
				URoadPointEditController_StaticRegisterNativesURoadPointEditController,
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
		return Z_Registration_Info_UClass_URoadPointEditController.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoadPointEditController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoadPointEditController.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoadPointEditController.OuterSingleton;
}
#undef UHT_STATICS
URoadPointEditController::URoadPointEditController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoadPointEditController);
URoadPointEditController::~URoadPointEditController() {}
// ********** End Class URoadPointEditController ***************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadPointEditController_h__Script_RoadBLDEditorToolkit_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FRoadPointGizmoMetadata, Z_Construct_UScriptStruct_FRoadPointGizmoMetadata_Statics::NewStructOps, TEXT("RoadPointGizmoMetadata"),&Z_Registration_Info_UScriptStruct_FRoadPointGizmoMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadPointGizmoMetadata), 3329239190U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoadPointEditController, TEXT("URoadPointEditController"), &Z_Registration_Info_UClass_URoadPointEditController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoadPointEditController), 2504592435U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_RoadPointEditController_h__Script_RoadBLDEditorToolkit_7a7d6a4335f7085f5328379556da14560ac8324d{
	TEXT("/Script/RoadBLDEditorToolkit"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
