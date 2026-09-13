// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Crossing.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeCrossing() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh(ETypeConstructPhase);
WORLDBLDRUNTIME_API UClass* Z_Construct_UClass_UWorldBLDInteractionComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ACrossing(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_EMarkingPlacement(ETypeConstructPhase);
ROADBLDRUNTIME_API UEnum* Z_Construct_UEnum_RoadBLDRuntime_EMarkingRotation(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ACrossing(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UCrossingStyle(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UCurveObject(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EMarkingRotation **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDRuntime_EMarkingRotation_Statics
template<> ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EMarkingRotation>()
{
	return Z_Construct_UEnum_RoadBLDRuntime_EMarkingRotation(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "CrossingAligned.DisplayName", "Align markings to the crossing" },
		{ "CrossingAligned.Name", "EMarkingRotation::CrossingAligned" },
		{ "ModuleRelativePath", "Public/Crossing.h" },
		{ "StreetAligned.DisplayName", "Align markings to the underlying road" },
		{ "StreetAligned.Name", "EMarkingRotation::StreetAligned" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMarkingRotation::StreetAligned", (int64)EMarkingRotation::StreetAligned },
		{ "EMarkingRotation::CrossingAligned", (int64)EMarkingRotation::CrossingAligned },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	"EMarkingRotation",
	"EMarkingRotation",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EMarkingRotation;
UEnum* Z_Construct_UEnum_RoadBLDRuntime_EMarkingRotation(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EMarkingRotation.OuterSingleton)
		{
			ZRIE_EMarkingRotation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDRuntime_EMarkingRotation, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("EMarkingRotation"));
		}
		return ZRIE_EMarkingRotation.OuterSingleton;
	}
	if (!ZRIE_EMarkingRotation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EMarkingRotation.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EMarkingRotation.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EMarkingRotation ************************************************************

// ********** Begin Enum EMarkingPlacement *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RoadBLDRuntime_EMarkingPlacement_Statics
template<> ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EMarkingPlacement>()
{
	return Z_Construct_UEnum_RoadBLDRuntime_EMarkingPlacement(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "EvenSpacing.DisplayName", "Space out the markings evenly" },
		{ "EvenSpacing.Name", "EMarkingPlacement::EvenSpacing" },
		{ "ModuleRelativePath", "Public/Crossing.h" },
		{ "StretchToFit.DisplayName", "Stretch one mesh to fit the crossing" },
		{ "StretchToFit.Name", "EMarkingPlacement::StretchToFit" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMarkingPlacement::EvenSpacing", (int64)EMarkingPlacement::EvenSpacing },
		{ "EMarkingPlacement::StretchToFit", (int64)EMarkingPlacement::StretchToFit },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	"EMarkingPlacement",
	"EMarkingPlacement",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EMarkingPlacement;
UEnum* Z_Construct_UEnum_RoadBLDRuntime_EMarkingPlacement(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EMarkingPlacement.OuterSingleton)
		{
			ZRIE_EMarkingPlacement.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RoadBLDRuntime_EMarkingPlacement, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("EMarkingPlacement"));
		}
		return ZRIE_EMarkingPlacement.OuterSingleton;
	}
	if (!ZRIE_EMarkingPlacement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EMarkingPlacement.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EMarkingPlacement.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EMarkingPlacement ***********************************************************

// ********** Begin Class ACrossing Function RebuildCrossing ***************************************
static FName NAME_ACrossing_RebuildCrossing = FName(TEXT("RebuildCrossing"));
void ACrossing::RebuildCrossing()
{
	UFunction* Func = FindFunctionChecked(NAME_ACrossing_RebuildCrossing);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		RebuildCrossing_Implementation();
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ACrossing_RebuildCrossing_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "Public/Crossing.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RebuildCrossing constinit property declarations ***********************
// ********** End Function RebuildCrossing constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ACrossing, nullptr, "RebuildCrossing", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ACrossing_RebuildCrossing(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ACrossing::execRebuildCrossing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RebuildCrossing_Implementation();
	P_NATIVE_END;
}
// ********** End Class ACrossing Function RebuildCrossing *****************************************

// ********** Begin Class ACrossing ****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ACrossing_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "Crossing.h" },
		{ "ModuleRelativePath", "Public/Crossing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointA_MetaData[] = {
		{ "Category", "Position" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/Crossing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointB_MetaData[] = {
		{ "Category", "Position" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/Crossing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkingRotation_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "Public/Crossing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkingPlacement_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "Public/Crossing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadRotation_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "Public/Crossing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkingSpacing_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "Public/Crossing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOffset_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "Public/Crossing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZRotationOffset_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "Public/Crossing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartEdgeID_MetaData[] = {
		{ "Category", "Attachment" },
		{ "ModuleRelativePath", "Public/Crossing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndEdgeID_MetaData[] = {
		{ "Category", "Attachment" },
		{ "ModuleRelativePath", "Public/Crossing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentActor_MetaData[] = {
		{ "Category", "Attachment" },
		{ "ModuleRelativePath", "Public/Crossing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveA_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/** The curve object (UEdgeCurve or corner UCurveObject) that PointA is attached to */" },
		{ "ModuleRelativePath", "Public/Crossing.h" },
		{ "ToolTip", "The curve object (UEdgeCurve or corner UCurveObject) that PointA is attached to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceAlongCurveA_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/** Distance along CurveA where PointA is located */" },
		{ "ModuleRelativePath", "Public/Crossing.h" },
		{ "ToolTip", "Distance along CurveA where PointA is located" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveB_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/** The curve object (UEdgeCurve or corner UCurveObject) that PointB is attached to */" },
		{ "ModuleRelativePath", "Public/Crossing.h" },
		{ "ToolTip", "The curve object (UEdgeCurve or corner UCurveObject) that PointB is attached to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceAlongCurveB_MetaData[] = {
		{ "Category", "Attachment" },
		{ "Comment", "/** Distance along CurveB where PointB is located */" },
		{ "ModuleRelativePath", "Public/Crossing.h" },
		{ "ToolTip", "Distance along CurveB where PointB is located" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkingMeshes_MetaData[] = {
		{ "Category", "Visual" },
		{ "ModuleRelativePath", "Public/Crossing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCrossingStyle_MetaData[] = {
		{ "Category", "Crossing Style" },
		{ "ModuleRelativePath", "Public/Crossing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossingStyleClass_MetaData[] = {
		{ "Category", "Crossing Style" },
		{ "EditCondition", "bUseCrossingStyle" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Crossing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointAFlattenSidewalkInteractionComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Crossing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointBFlattenSidewalkInteractionComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Crossing.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ACrossing constinit property declarations ********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointB;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MarkingRotation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MarkingRotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MarkingPlacement_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MarkingPlacement;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoadRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MarkingSpacing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZRotationOffset;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartEdgeID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EndEdgeID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveA;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DistanceAlongCurveA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveB;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_DistanceAlongCurveB;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkingMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MarkingMeshes;
	static void NewProp_bUseCrossingStyle_SetBit(void* Obj)
	{
		((ACrossing*)Obj)->bUseCrossingStyle = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCrossingStyle;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CrossingStyleClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointAFlattenSidewalkInteractionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointBFlattenSidewalkInteractionComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ACrossing constinit property declarations **********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RebuildCrossing"), .Pointer = &ACrossing::execRebuildCrossing },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACrossing_RebuildCrossing, "RebuildCrossing" }, // e765659f031bb16b63fad71fb95832acd3aecfc4
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrossing>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ACrossing Property Definitions *******************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PointA = { "PointA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ACrossing, PointA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointA_MetaData), NewProp_PointA_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PointB = { "PointB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ACrossing, PointB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointB_MetaData), NewProp_PointB_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_MarkingRotation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_MarkingRotation = { "MarkingRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(ACrossing, MarkingRotation), Z_Construct_UEnum_RoadBLDRuntime_EMarkingRotation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkingRotation_MetaData), NewProp_MarkingRotation_MetaData) }; // d3d1bf6dbfcdd4083d08b9a8e555a4541d3fd0aa
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_MarkingPlacement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_MarkingPlacement = { "MarkingPlacement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(ACrossing, MarkingPlacement), Z_Construct_UEnum_RoadBLDRuntime_EMarkingPlacement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkingPlacement_MetaData), NewProp_MarkingPlacement_MetaData) }; // b07c86d1f21bd3cfbce7d051fd1a21934d2c0deb
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RoadRotation = { "RoadRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ACrossing, RoadRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadRotation_MetaData), NewProp_RoadRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_MarkingSpacing = { "MarkingSpacing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ACrossing, MarkingSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkingSpacing_MetaData), NewProp_MarkingSpacing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ACrossing, ZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOffset_MetaData), NewProp_ZOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ZRotationOffset = { "ZRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ACrossing, ZRotationOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZRotationOffset_MetaData), NewProp_ZRotationOffset_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_StartEdgeID = { "StartEdgeID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(ACrossing, StartEdgeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartEdgeID_MetaData), NewProp_StartEdgeID_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_EndEdgeID = { "EndEdgeID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(ACrossing, EndEdgeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndEdgeID_MetaData), NewProp_EndEdgeID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ParentActor = { "ParentActor", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ACrossing, ParentActor), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentActor_MetaData), NewProp_ParentActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CurveA = { "CurveA", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ACrossing, CurveA), Z_Construct_UClass_UCurveObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveA_MetaData), NewProp_CurveA_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_DistanceAlongCurveA = { "DistanceAlongCurveA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(ACrossing, DistanceAlongCurveA), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceAlongCurveA_MetaData), NewProp_DistanceAlongCurveA_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CurveB = { "CurveB", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ACrossing, CurveB), Z_Construct_UClass_UCurveObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveB_MetaData), NewProp_CurveB_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_DistanceAlongCurveB = { "DistanceAlongCurveB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(ACrossing, DistanceAlongCurveB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceAlongCurveB_MetaData), NewProp_DistanceAlongCurveB_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MarkingMeshes_Inner = { "MarkingMeshes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_MarkingMeshes = { "MarkingMeshes", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ACrossing, MarkingMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkingMeshes_MetaData), NewProp_MarkingMeshes_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseCrossingStyle = { "bUseCrossingStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ACrossing), &UHT_STATICS::NewProp_bUseCrossingStyle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCrossingStyle_MetaData), NewProp_bUseCrossingStyle_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_CrossingStyleClass = { "CrossingStyleClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(ACrossing, CrossingStyleClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCrossingStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossingStyleClass_MetaData), NewProp_CrossingStyleClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PointAFlattenSidewalkInteractionComponent = { "PointAFlattenSidewalkInteractionComponent", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ACrossing, PointAFlattenSidewalkInteractionComponent), Z_Construct_UClass_UWorldBLDInteractionComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointAFlattenSidewalkInteractionComponent_MetaData), NewProp_PointAFlattenSidewalkInteractionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PointBFlattenSidewalkInteractionComponent = { "PointBFlattenSidewalkInteractionComponent", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ACrossing, PointBFlattenSidewalkInteractionComponent), Z_Construct_UClass_UWorldBLDInteractionComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointBFlattenSidewalkInteractionComponent_MetaData), NewProp_PointBFlattenSidewalkInteractionComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointA,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointB,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MarkingRotation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MarkingRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MarkingPlacement_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MarkingPlacement,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MarkingSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartEdgeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndEdgeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParentActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurveA,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DistanceAlongCurveA,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurveB,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DistanceAlongCurveB,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MarkingMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MarkingMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseCrossingStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CrossingStyleClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointAFlattenSidewalkInteractionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointBFlattenSidewalkInteractionComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ACrossing Property Definitions *********************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ACrossing,
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
static void ACrossing_StaticRegisterNativesACrossing()
{
	UClass* Class = ACrossing::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACrossing;
UClass* Z_Construct_UClass_ACrossing(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ACrossing;
		if (!Z_Registration_Info_UClass_ACrossing.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("Crossing"),
				Z_Registration_Info_UClass_ACrossing.InnerSingleton,
				ACrossing_StaticRegisterNativesACrossing,
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
		return Z_Registration_Info_UClass_ACrossing.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ACrossing.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACrossing.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ACrossing.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ACrossing);
ACrossing::~ACrossing() {}
// ********** End Class ACrossing ******************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_Crossing_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RoadBLDRuntime_EMarkingRotation, TEXT("EMarkingRotation"), &ZRIE_EMarkingRotation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3553738605U) },
		{ Z_Construct_UEnum_RoadBLDRuntime_EMarkingPlacement, TEXT("EMarkingPlacement"), &ZRIE_EMarkingPlacement, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2960950993U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACrossing, TEXT("ACrossing"), &Z_Registration_Info_UClass_ACrossing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACrossing), 2336044245U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_Crossing_h__Script_RoadBLDRuntime_fe0be356dc89ef809b6a0ad7a1a684e0fdf163bb{
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
