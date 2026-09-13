// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicRoad/DynamicRoadMarking.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDynamicRoadMarking() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadMarking(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadMarkingControlPoint(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadMarkingLine(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadMarkingShape(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoad(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadMarking(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadMarkingLine(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadMarkingShape(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UDynamicRoadMarking Function GetRoad *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDynamicRoadMarking_GetRoad_Statics
struct UHT_STATICS
{
	struct DynamicRoadMarking_eventGetRoad_Parms
	{
		ADynamicRoad* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Backend" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadMarking.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRoad constinit property declarations *******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRoad constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRoad Property Definitions ******************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadMarking_eventGetRoad_Parms, ReturnValue), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetRoad Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDynamicRoadMarking, nullptr, "GetRoad", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::DynamicRoadMarking_eventGetRoad_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::DynamicRoadMarking_eventGetRoad_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicRoadMarking_GetRoad(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UDynamicRoadMarking::execGetRoad)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ADynamicRoad**)Z_Param__Result=P_THIS->GetRoad();
	P_NATIVE_END;
}
// ********** End Class UDynamicRoadMarking Function GetRoad ***************************************

// ********** Begin Class UDynamicRoadMarking ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDynamicRoadMarking_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DynamicRoad/DynamicRoadMarking.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadMarking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkingWidth_MetaData[] = {
		{ "Category", "Geometry" },
		{ "Comment", "// Defines the physical width of the road marking geometry.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadMarking.h" },
		{ "ToolTip", "Defines the physical width of the road marking geometry." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkingMaterial_MetaData[] = {
		{ "Category", "Geometry" },
		{ "Comment", "//The material used by this Road Marking.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadMarking.h" },
		{ "ToolTip", "The material used by this Road Marking." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureVScale_MetaData[] = {
		{ "Category", "Geometry" },
		{ "Comment", "// The vertical texture scale applied to the marking material.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadMarking.h" },
		{ "ToolTip", "The vertical texture scale applied to the marking material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneIndex_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "//The index of the Lane border this Marking is attached to, if attached to a single lane\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadMarking.h" },
		{ "ToolTip", "The index of the Lane border this Marking is attached to, if attached to a single lane" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeOffset_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "//The side offset from the target edge\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadMarking.h" },
		{ "ToolTip", "The side offset from the target edge" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstTriangleIndex_MetaData[] = {
		{ "Category", "Backend" },
		{ "Comment", "//Tracking the triangles created for this marking so we can select it separately from the rest of the geometry\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadMarking.h" },
		{ "ToolTip", "Tracking the triangles created for this marking so we can select it separately from the rest of the geometry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastTriangleIndex_MetaData[] = {
		{ "Category", "Backend" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadMarking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "//The offset from the start of the Section this marking is attached to.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadMarking.h" },
		{ "ToolTip", "The offset from the start of the Section this marking is attached to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndOffset_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "//The offset from the end of the Section this marking is attached to.\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadMarking.h" },
		{ "ToolTip", "The offset from the end of the Section this marking is attached to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceDatasetId_MetaData[] = {
		{ "Category", "Import" },
		{ "Comment", "/**\n\x09 * Optional dataset tag for imported freehand markings (e.g. Replicity paint-line SHP base name).\n\x09 * Used to replace/clear a prior import without touching hand-drawn markings.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadMarking.h" },
		{ "ToolTip", "Optional dataset tag for imported freehand markings (e.g. Replicity paint-line SHP base name).\nUsed to replace/clear a prior import without touching hand-drawn markings." },
	};
#endif // WITH_METADATA

// ********** Begin Class UDynamicRoadMarking constinit property declarations **********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MarkingWidth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkingMaterial;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_TextureVScale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LaneIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FirstTriangleIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastTriangleIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndOffset;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceDatasetId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDynamicRoadMarking constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetRoad"), .Pointer = &UDynamicRoadMarking::execGetRoad },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDynamicRoadMarking_GetRoad, "GetRoad" }, // 3abde37b0e8de4010b57d65bbdce208916fb38fa
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicRoadMarking>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UDynamicRoadMarking Property Definitions *********************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MarkingWidth = { "MarkingWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadMarking, MarkingWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkingWidth_MetaData), NewProp_MarkingWidth_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MarkingMaterial = { "MarkingMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadMarking, MarkingMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkingMaterial_MetaData), NewProp_MarkingMaterial_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_TextureVScale = { "TextureVScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadMarking, TextureVScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureVScale_MetaData), NewProp_TextureVScale_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LaneIndex = { "LaneIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadMarking, LaneIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneIndex_MetaData), NewProp_LaneIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_EdgeOffset = { "EdgeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadMarking, EdgeOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeOffset_MetaData), NewProp_EdgeOffset_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_FirstTriangleIndex = { "FirstTriangleIndex", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadMarking, FirstTriangleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstTriangleIndex_MetaData), NewProp_FirstTriangleIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_LastTriangleIndex = { "LastTriangleIndex", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadMarking, LastTriangleIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastTriangleIndex_MetaData), NewProp_LastTriangleIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadMarking, StartOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartOffset_MetaData), NewProp_StartOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_EndOffset = { "EndOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadMarking, EndOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndOffset_MetaData), NewProp_EndOffset_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SourceDatasetId = { "SourceDatasetId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UDynamicRoadMarking, SourceDatasetId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceDatasetId_MetaData), NewProp_SourceDatasetId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MarkingWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MarkingMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextureVScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LaneIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EdgeOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FirstTriangleIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LastTriangleIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceDatasetId,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UDynamicRoadMarking Property Definitions ***********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDynamicRoadMarking,
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
static void UDynamicRoadMarking_StaticRegisterNativesUDynamicRoadMarking()
{
	UClass* Class = UDynamicRoadMarking::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDynamicRoadMarking;
UClass* Z_Construct_UClass_UDynamicRoadMarking(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDynamicRoadMarking;
		if (!Z_Registration_Info_UClass_UDynamicRoadMarking.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DynamicRoadMarking"),
				Z_Registration_Info_UClass_UDynamicRoadMarking.InnerSingleton,
				UDynamicRoadMarking_StaticRegisterNativesUDynamicRoadMarking,
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
		return Z_Registration_Info_UClass_UDynamicRoadMarking.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDynamicRoadMarking.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicRoadMarking.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDynamicRoadMarking.OuterSingleton;
}
#undef UHT_STATICS
UDynamicRoadMarking::UDynamicRoadMarking(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDynamicRoadMarking);
UDynamicRoadMarking::~UDynamicRoadMarking() {}
// ********** End Class UDynamicRoadMarking ********************************************************

// ********** Begin ScriptStruct FRoadMarkingControlPoint ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRoadMarkingControlPoint_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRoadMarkingControlPoint>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRoadMarkingControlPoint); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * FRoadMarkingControlPoint - Individual control point for spline-based curves\n *\n * This structure represents a single control point used for creating smooth,\n * curved road markings. Each point contains:\n * - An XY position on the road surface\n * - A stored world Z used as the surface-trace seed (and fallback if the trace misses)\n * - Tangent handles for controlling curve shape (relative to Pos)\n *\n * The curve system allows for creating complex curved markings such as:\n * - Curved lane dividers\n * - Decorative road art\n * - Complex junction markings\n */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadMarking.h" },
		{ "ToolTip", "FRoadMarkingControlPoint - Individual control point for spline-based curves\n\nThis structure represents a single control point used for creating smooth,\ncurved road markings. Each point contains:\n- An XY position on the road surface\n- A stored world Z used as the surface-trace seed (and fallback if the trace misses)\n- Tangent handles for controlling curve shape (relative to Pos)\n\nThe curve system allows for creating complex curved markings such as:\n- Curved lane dividers\n- Decorative road art\n- Complex junction markings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pos_MetaData[] = {
		{ "Category", "Point" },
		{ "Comment", "/** 2D position on the road surface */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadMarking.h" },
		{ "ToolTip", "2D position on the road surface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArriveTangent_MetaData[] = {
		{ "Category", "Point" },
		{ "Comment", "/** Incoming tangent relative to Pos (direction from which curve arrives) */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadMarking.h" },
		{ "ToolTip", "Incoming tangent relative to Pos (direction from which curve arrives)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaveTangent_MetaData[] = {
		{ "Category", "Point" },
		{ "Comment", "/** Outgoing tangent relative to Pos (direction in which curve leaves) */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadMarking.h" },
		{ "ToolTip", "Outgoing tangent relative to Pos (direction in which curve leaves)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PosZ_MetaData[] = {
		{ "Category", "Point" },
		{ "Comment", "/**\n\x09 * World-space Z for this control point.\n\x09 * Used as the vertical-trace seed so elevated roads are not reconstructed at Z=0.\n\x09 * Keep this after the FVector2D members; ApplyDelta indexes Pos/Arrive/Leave as consecutive FVector2Ds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadMarking.h" },
		{ "ToolTip", "World-space Z for this control point.\nUsed as the vertical-trace seed so elevated roads are not reconstructed at Z=0.\nKeep this after the FVector2D members; ApplyDelta indexes Pos/Arrive/Leave as consecutive FVector2Ds." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRoadMarkingControlPoint constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArriveTangent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeaveTangent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PosZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRoadMarkingControlPoint constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadMarkingControlPoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRoadMarkingControlPoint Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadMarkingControlPoint, Pos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pos_MetaData), NewProp_Pos_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ArriveTangent = { "ArriveTangent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadMarkingControlPoint, ArriveTangent), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArriveTangent_MetaData), NewProp_ArriveTangent_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LeaveTangent = { "LeaveTangent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadMarkingControlPoint, LeaveTangent), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaveTangent_MetaData), NewProp_LeaveTangent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PosZ = { "PosZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadMarkingControlPoint, PosZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PosZ_MetaData), NewProp_PosZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Pos,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ArriveTangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LeaveTangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PosZ,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRoadMarkingControlPoint Property Definitions ***********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"RoadMarkingControlPoint",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRoadMarkingControlPoint>(),
	alignof(FRoadMarkingControlPoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRoadMarkingControlPoint;
UScriptStruct* Z_Construct_UScriptStruct_FRoadMarkingControlPoint(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRoadMarkingControlPoint.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRoadMarkingControlPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadMarkingControlPoint, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("RoadMarkingControlPoint"));
		}
		return Z_Registration_Info_UScriptStruct_FRoadMarkingControlPoint.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRoadMarkingControlPoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRoadMarkingControlPoint.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRoadMarkingControlPoint.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRoadMarkingControlPoint ********************************************

// ********** Begin Class URoadMarkingLine *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoadMarkingLine_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * URoadMarkingLine - Curved road marking line using Unreal splines\n * \n * This class represents complex curved road markings that are defined by\n * a series of control points connected by smooth spline curves. Examples include:\n * - Curved lane dividers\n * - Decorative road patterns\n * - Junction area markings\n * - Custom shaped symbols\n * \n * The curve system supports both open curves (like lane lines) and closed loop\n * curves (like an area painted with a chevron marking). When closed, the curve can\n * be filled with a solid color or pattern.\n */" },
		{ "IncludePath", "DynamicRoad/DynamicRoadMarking.h" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadMarking.h" },
		{ "ToolTip", "URoadMarkingLine - Curved road marking line using Unreal splines\n\nThis class represents complex curved road markings that are defined by\na series of control points connected by smooth spline curves. Examples include:\n- Curved lane dividers\n- Decorative road patterns\n- Junction area markings\n- Custom shaped symbols\n\nThe curve system supports both open curves (like lane lines) and closed loop\ncurves (like an area painted with a chevron marking). When closed, the curve can\nbe filled with a solid color or pattern." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlPoints_MetaData[] = {
		{ "Category", "Road Marking" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadMarking.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URoadMarkingLine constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ControlPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URoadMarkingLine constinit property declarations ***************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadMarkingLine>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URoadMarkingLine Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ControlPoints_Inner = { "ControlPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRoadMarkingControlPoint, METADATA_PARAMS(0, nullptr) }; // f196ea94de70eee7ae353a765d20c5948ca933ae
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ControlPoints = { "ControlPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URoadMarkingLine, ControlPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlPoints_MetaData), NewProp_ControlPoints_MetaData) }; // f196ea94de70eee7ae353a765d20c5948ca933ae
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControlPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ControlPoints,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URoadMarkingLine Property Definitions **************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDynamicRoadMarking,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoadMarkingLine,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_URoadMarkingLine;
UClass* Z_Construct_UClass_URoadMarkingLine(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoadMarkingLine;
		if (!Z_Registration_Info_UClass_URoadMarkingLine.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadMarkingLine"),
				Z_Registration_Info_UClass_URoadMarkingLine.InnerSingleton,
				nullptr,
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
		return Z_Registration_Info_UClass_URoadMarkingLine.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoadMarkingLine.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoadMarkingLine.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoadMarkingLine.OuterSingleton;
}
#undef UHT_STATICS
URoadMarkingLine::URoadMarkingLine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoadMarkingLine);
URoadMarkingLine::~URoadMarkingLine() {}
// ********** End Class URoadMarkingLine ***********************************************************

// ********** Begin Class URoadMarkingShape ********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoadMarkingShape_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * URoadMarkingShape - Road marking area using cubic B\xc3\xa9zier curves\n * \n * This class represents complex curved road markings that are defined by\n * a series of control points connected by smooth B\xc3\xa9zier curves. Examples include:\n * - Decorative road patterns\n * - Junction area markings\n * - Custom shaped symbols\n * \n * This curve system closed loop\n * curves (like an area painted with a chevron marking). When closed, the curve can\n * be filled with a solid color or pattern.\n */" },
		{ "IncludePath", "DynamicRoad/DynamicRoadMarking.h" },
		{ "ModuleRelativePath", "Public/DynamicRoad/DynamicRoadMarking.h" },
		{ "ToolTip", "URoadMarkingShape - Road marking area using cubic B\xc3\xa9zier curves\n\nThis class represents complex curved road markings that are defined by\na series of control points connected by smooth B\xc3\xa9zier curves. Examples include:\n- Decorative road patterns\n- Junction area markings\n- Custom shaped symbols\n\nThis curve system closed loop\ncurves (like an area painted with a chevron marking). When closed, the curve can\nbe filled with a solid color or pattern." },
	};
#endif // WITH_METADATA

// ********** Begin Class URoadMarkingShape constinit property declarations ************************
// ********** End Class URoadMarkingShape constinit property declarations **************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadMarkingShape>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDynamicRoadMarking,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoadMarkingShape,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_URoadMarkingShape;
UClass* Z_Construct_UClass_URoadMarkingShape(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoadMarkingShape;
		if (!Z_Registration_Info_UClass_URoadMarkingShape.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadMarkingShape"),
				Z_Registration_Info_UClass_URoadMarkingShape.InnerSingleton,
				nullptr,
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
		return Z_Registration_Info_UClass_URoadMarkingShape.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoadMarkingShape.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoadMarkingShape.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoadMarkingShape.OuterSingleton;
}
#undef UHT_STATICS
URoadMarkingShape::URoadMarkingShape(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoadMarkingShape);
URoadMarkingShape::~URoadMarkingShape() {}
// ********** End Class URoadMarkingShape **********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadMarking_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FRoadMarkingControlPoint, Z_Construct_UScriptStruct_FRoadMarkingControlPoint_Statics::NewStructOps, TEXT("RoadMarkingControlPoint"),&Z_Registration_Info_UScriptStruct_FRoadMarkingControlPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadMarkingControlPoint), 4053199508U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDynamicRoadMarking, TEXT("UDynamicRoadMarking"), &Z_Registration_Info_UClass_UDynamicRoadMarking, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicRoadMarking), 2794562393U) },
		{ Z_Construct_UClass_URoadMarkingLine, TEXT("URoadMarkingLine"), &Z_Registration_Info_UClass_URoadMarkingLine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoadMarkingLine), 1515683129U) },
		{ Z_Construct_UClass_URoadMarkingShape, TEXT("URoadMarkingShape"), &Z_Registration_Info_UClass_URoadMarkingShape, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoadMarkingShape), 1370541366U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_DynamicRoadMarking_h__Script_RoadBLDRuntime_951e23fcc7547a07c7202c2f1687cd203dd0fe02{
	TEXT("/Script/RoadBLDRuntime"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
