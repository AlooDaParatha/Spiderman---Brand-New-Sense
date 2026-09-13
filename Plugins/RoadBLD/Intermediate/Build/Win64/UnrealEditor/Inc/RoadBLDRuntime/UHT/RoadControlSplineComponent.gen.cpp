// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoadControlSplineComponent.h"
#include "RoadBLDTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRoadControlSplineComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USplineComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USplineMetadata(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USplineComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UFunction* Z_Construct_UDelegateFunction_RoadBLDRuntime_OnSplinePointSelectionChanged__DelegateSignature(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadControlSplineComponent(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadControlSplineMetadata(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadControlSplinePointData(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadEndpointLink(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadControlSplineComponent(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadControlSplineMetadata(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ISplineVizCustomizerInterface(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FOnSplinePointSelectionChanged ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_RoadBLDRuntime_OnSplinePointSelectionChanged__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_RoadBLDRuntime_eventOnSplinePointSelectionChanged_Parms
	{
		USplineComponent* Spline;
		TSet<int32> Selection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Classes/RoadControlSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Selection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSplinePointSelectionChanged constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Selection_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Selection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnSplinePointSelectionChanged constinit property declarations **********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnSplinePointSelectionChanged Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RoadBLDRuntime_eventOnSplinePointSelectionChanged_Parms, Spline), Z_Construct_UClass_USplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Selection_ElementProp = { "Selection", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RoadBLDRuntime_eventOnSplinePointSelectionChanged_Parms, Selection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Selection_MetaData), NewProp_Selection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Selection_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Selection,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnSplinePointSelectionChanged Property Definitions *********************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime, nullptr, "OnSplinePointSelectionChanged__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_RoadBLDRuntime_eventOnSplinePointSelectionChanged_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_RoadBLDRuntime_eventOnSplinePointSelectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_RoadBLDRuntime_OnSplinePointSelectionChanged__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnSplinePointSelectionChanged ******************************************

// ********** Begin Class URoadControlSplineComponent **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoadControlSplineComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "CityBLD" },
		{ "Comment", "// A custom spline component for creating Roads in CityBLD.\n" },
		{ "HideCategories", "Activation Physics Collision HLOD LOD TextureStreaming Navigation RayTracing Lighting Rendering Mobile Trigger VirtualTexture" },
		{ "IncludePath", "RoadControlSplineComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/RoadControlSplineComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A custom spline component for creating Roads in CityBLD." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTurnRadius_MetaData[] = {
		{ "Category", "Roads" },
		{ "ModuleRelativePath", "Classes/RoadControlSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnRadiusLimit_MetaData[] = {
		{ "Category", "Roads" },
		{ "ModuleRelativePath", "Classes/RoadControlSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisOffset_MetaData[] = {
		{ "Category", "Roads|Visuals" },
		{ "ModuleRelativePath", "Classes/RoadControlSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentLineThicknessOverride_MetaData[] = {
		{ "Category", "Roads|Visuals" },
		{ "ModuleRelativePath", "Classes/RoadControlSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawLines_MetaData[] = {
		{ "Category", "Roads|Visuals" },
		{ "ModuleRelativePath", "Classes/RoadControlSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabHandleSize_MetaData[] = {
		{ "Category", "Roads|Visuals" },
		{ "ModuleRelativePath", "Classes/RoadControlSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomMetadata_MetaData[] = {
		{ "Category", "Roads" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/RoadControlSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPointSelectionChanged_MetaData[] = {
		{ "ModuleRelativePath", "Classes/RoadControlSplineComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URoadControlSplineComponent constinit property declarations **************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultTurnRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TurnRadiusLimit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VisOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SegmentLineThicknessOverride;
	static void NewProp_bDrawLines_SetBit(void* Obj)
	{
		((URoadControlSplineComponent*)Obj)->bDrawLines = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawLines;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrabHandleSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomMetadata;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPointSelectionChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URoadControlSplineComponent constinit property declarations ****************
	static FTypeConstructFunc* DependentSingletons[];
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadControlSplineComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URoadControlSplineComponent Property Definitions *************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DefaultTurnRadius = { "DefaultTurnRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URoadControlSplineComponent, DefaultTurnRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTurnRadius_MetaData), NewProp_DefaultTurnRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TurnRadiusLimit = { "TurnRadiusLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URoadControlSplineComponent, TurnRadiusLimit), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnRadiusLimit_MetaData), NewProp_TurnRadiusLimit_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_VisOffset = { "VisOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URoadControlSplineComponent, VisOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisOffset_MetaData), NewProp_VisOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_SegmentLineThicknessOverride = { "SegmentLineThicknessOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URoadControlSplineComponent, SegmentLineThicknessOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentLineThicknessOverride_MetaData), NewProp_SegmentLineThicknessOverride_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDrawLines = { "bDrawLines", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadControlSplineComponent), &UHT_STATICS::NewProp_bDrawLines_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawLines_MetaData), NewProp_bDrawLines_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_GrabHandleSize = { "GrabHandleSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(URoadControlSplineComponent, GrabHandleSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabHandleSize_MetaData), NewProp_GrabHandleSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CustomMetadata = { "CustomMetadata", nullptr, (EPropertyFlags)0x011600000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadControlSplineComponent, CustomMetadata), Z_Construct_UClass_URoadControlSplineMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomMetadata_MetaData), NewProp_CustomMetadata_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnPointSelectionChanged = { "OnPointSelectionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(URoadControlSplineComponent, OnPointSelectionChanged), Z_Construct_UDelegateFunction_RoadBLDRuntime_OnSplinePointSelectionChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPointSelectionChanged_MetaData), NewProp_OnPointSelectionChanged_MetaData) }; // 8748599382cb2a00c3711a9e4a055c68ecbc468f
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefaultTurnRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TurnRadiusLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VisOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SegmentLineThicknessOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDrawLines,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GrabHandleSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomMetadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnPointSelectionChanged,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URoadControlSplineComponent Property Definitions ***************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_USplineComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams UHT_STATICS::InterfaceParams[] = {
	{ Z_Construct_UClass_USplineVizCustomizerInterface, (int32)VTABLE_OFFSET(URoadControlSplineComponent, ISplineVizCustomizerInterface), false },  // 001c43fd8d5970c38e0f3bde376020bca2ca2dc8
};
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoadControlSplineComponent,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_URoadControlSplineComponent;
UClass* Z_Construct_UClass_URoadControlSplineComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoadControlSplineComponent;
		if (!Z_Registration_Info_UClass_URoadControlSplineComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadControlSplineComponent"),
				Z_Registration_Info_UClass_URoadControlSplineComponent.InnerSingleton,
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
		return Z_Registration_Info_UClass_URoadControlSplineComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoadControlSplineComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoadControlSplineComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoadControlSplineComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoadControlSplineComponent);
URoadControlSplineComponent::~URoadControlSplineComponent() {}
// ********** End Class URoadControlSplineComponent ************************************************

// ********** Begin ScriptStruct FRoadControlSplinePointData ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRoadControlSplinePointData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRoadControlSplinePointData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRoadControlSplinePointData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Classes/RoadControlSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTurn_MetaData[] = {
		{ "Category", "Roads" },
		{ "ModuleRelativePath", "Classes/RoadControlSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnRadius_MetaData[] = {
		{ "Category", "Roads" },
		{ "EditCondition", "bIsTurn" },
		{ "ModuleRelativePath", "Classes/RoadControlSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BankingAngle_MetaData[] = {
		{ "Category", "Roads" },
		{ "Comment", "// The banking angle at this control point. This is the counter-clockwise angle (in Degrees) around the direction of road travel.\n" },
		{ "ModuleRelativePath", "Classes/RoadControlSplineComponent.h" },
		{ "ToolTip", "The banking angle at this control point. This is the counter-clockwise angle (in Degrees) around the direction of road travel." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeMirrorSplineHeightOffset_MetaData[] = {
		{ "Category", "Roads|Landscape" },
		{ "Comment", "// Per-control-point offset (cm) applied to mirrored landscape spline heights.\n// Positive values push the mirrored spline farther below the road surface.\n" },
		{ "ModuleRelativePath", "Classes/RoadControlSplineComponent.h" },
		{ "ToolTip", "Per-control-point offset (cm) applied to mirrored landscape spline heights.\nPositive values push the mirrored spline farther below the road surface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSnapJoint_MetaData[] = {
		{ "Category", "Roads" },
		{ "Comment", "// (Advanced) This point is weakly attached to another actor and can be semi-freely moved.\n" },
		{ "ModuleRelativePath", "Classes/RoadControlSplineComponent.h" },
		{ "ToolTip", "(Advanced) This point is weakly attached to another actor and can be semi-freely moved." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSnapPoint_MetaData[] = {
		{ "Category", "Roads" },
		{ "Comment", "// (Advanced) This point is strongly attached to another actor.\n" },
		{ "ModuleRelativePath", "Classes/RoadControlSplineComponent.h" },
		{ "ToolTip", "(Advanced) This point is strongly attached to another actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapId_MetaData[] = {
		{ "Category", "Roads" },
		{ "Comment", "// (Advanced) The identify of this snap point\n" },
		{ "ModuleRelativePath", "Classes/RoadControlSplineComponent.h" },
		{ "ToolTip", "(Advanced) The identify of this snap point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndpointLinks_MetaData[] = {
		{ "Category", "Roads|Links" },
		{ "Comment", "// Persistent links to other road endpoints at this control point.\n// Multiple links are supported (e.g. a road splitting into several smaller roads).\n" },
		{ "ModuleRelativePath", "Classes/RoadControlSplineComponent.h" },
		{ "ToolTip", "Persistent links to other road endpoints at this control point.\nMultiple links are supported (e.g. a road splitting into several smaller roads)." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRoadControlSplinePointData constinit property declarations *******
	static void NewProp_bIsTurn_SetBit(void* Obj)
	{
		((FRoadControlSplinePointData*)Obj)->bIsTurn = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTurn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BankingAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LandscapeMirrorSplineHeightOffset;
	static void NewProp_bIsSnapJoint_SetBit(void* Obj)
	{
		((FRoadControlSplinePointData*)Obj)->bIsSnapJoint = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSnapJoint;
	static void NewProp_bIsSnapPoint_SetBit(void* Obj)
	{
		((FRoadControlSplinePointData*)Obj)->bIsSnapPoint = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSnapPoint;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SnapId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndpointLinks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EndpointLinks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRoadControlSplinePointData constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadControlSplinePointData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRoadControlSplinePointData Property Definitions ******************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsTurn = { "bIsTurn", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadControlSplinePointData), &UHT_STATICS::NewProp_bIsTurn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTurn_MetaData), NewProp_bIsTurn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_TurnRadius = { "TurnRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadControlSplinePointData, TurnRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnRadius_MetaData), NewProp_TurnRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BankingAngle = { "BankingAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadControlSplinePointData, BankingAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BankingAngle_MetaData), NewProp_BankingAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LandscapeMirrorSplineHeightOffset = { "LandscapeMirrorSplineHeightOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadControlSplinePointData, LandscapeMirrorSplineHeightOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeMirrorSplineHeightOffset_MetaData), NewProp_LandscapeMirrorSplineHeightOffset_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsSnapJoint = { "bIsSnapJoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadControlSplinePointData), &UHT_STATICS::NewProp_bIsSnapJoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSnapJoint_MetaData), NewProp_bIsSnapJoint_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsSnapPoint = { "bIsSnapPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadControlSplinePointData), &UHT_STATICS::NewProp_bIsSnapPoint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSnapPoint_MetaData), NewProp_bIsSnapPoint_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_SnapId = { "SnapId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadControlSplinePointData, SnapId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapId_MetaData), NewProp_SnapId_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_EndpointLinks_Inner = { "EndpointLinks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRoadEndpointLink, METADATA_PARAMS(0, nullptr) }; // 65c842731a2b1cd09aa7d0563f45168639ea855f
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_EndpointLinks = { "EndpointLinks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadControlSplinePointData, EndpointLinks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndpointLinks_MetaData), NewProp_EndpointLinks_MetaData) }; // 65c842731a2b1cd09aa7d0563f45168639ea855f
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsTurn,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TurnRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BankingAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapeMirrorSplineHeightOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsSnapJoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsSnapPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SnapId,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndpointLinks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EndpointLinks,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRoadControlSplinePointData Property Definitions ********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"RoadControlSplinePointData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRoadControlSplinePointData>(),
	alignof(FRoadControlSplinePointData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRoadControlSplinePointData;
UScriptStruct* Z_Construct_UScriptStruct_FRoadControlSplinePointData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRoadControlSplinePointData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRoadControlSplinePointData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadControlSplinePointData, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("RoadControlSplinePointData"));
		}
		return Z_Registration_Info_UScriptStruct_FRoadControlSplinePointData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRoadControlSplinePointData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRoadControlSplinePointData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRoadControlSplinePointData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRoadControlSplinePointData *****************************************

// ********** Begin Class URoadControlSplineMetadata ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoadControlSplineMetadata_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RoadControlSplineComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/RoadControlSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerPointControlData_MetaData[] = {
		{ "Category", "Roads" },
		{ "ModuleRelativePath", "Classes/RoadControlSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningSpline_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/RoadControlSplineComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URoadControlSplineMetadata constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerPointControlData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PerPointControlData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningSpline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URoadControlSplineMetadata constinit property declarations *****************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadControlSplineMetadata>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URoadControlSplineMetadata Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PerPointControlData_Inner = { "PerPointControlData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRoadControlSplinePointData, METADATA_PARAMS(0, nullptr) }; // 292300ec8017afda9834ef0317453c7b4506a891
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PerPointControlData = { "PerPointControlData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(URoadControlSplineMetadata, PerPointControlData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerPointControlData_MetaData), NewProp_PerPointControlData_MetaData) }; // 292300ec8017afda9834ef0317453c7b4506a891
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OwningSpline = { "OwningSpline", nullptr, (EPropertyFlags)0x0114000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(URoadControlSplineMetadata, OwningSpline), Z_Construct_UClass_URoadControlSplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningSpline_MetaData), NewProp_OwningSpline_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PerPointControlData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PerPointControlData,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OwningSpline,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URoadControlSplineMetadata Property Definitions ****************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_USplineMetadata,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoadControlSplineMetadata,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_URoadControlSplineMetadata;
UClass* Z_Construct_UClass_URoadControlSplineMetadata(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoadControlSplineMetadata;
		if (!Z_Registration_Info_UClass_URoadControlSplineMetadata.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadControlSplineMetadata"),
				Z_Registration_Info_UClass_URoadControlSplineMetadata.InnerSingleton,
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
		return Z_Registration_Info_UClass_URoadControlSplineMetadata.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoadControlSplineMetadata.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoadControlSplineMetadata.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoadControlSplineMetadata.OuterSingleton;
}
#undef UHT_STATICS
URoadControlSplineMetadata::URoadControlSplineMetadata(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoadControlSplineMetadata);
URoadControlSplineMetadata::~URoadControlSplineMetadata() {}
// ********** End Class URoadControlSplineMetadata *************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadControlSplineComponent_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FRoadControlSplinePointData, Z_Construct_UScriptStruct_FRoadControlSplinePointData_Statics::NewStructOps, TEXT("RoadControlSplinePointData"),&Z_Registration_Info_UScriptStruct_FRoadControlSplinePointData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadControlSplinePointData), 690159852U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoadControlSplineComponent, TEXT("URoadControlSplineComponent"), &Z_Registration_Info_UClass_URoadControlSplineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoadControlSplineComponent), 1230762422U) },
		{ Z_Construct_UClass_URoadControlSplineMetadata, TEXT("URoadControlSplineMetadata"), &Z_Registration_Info_UClass_URoadControlSplineMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoadControlSplineMetadata), 1500477690U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadControlSplineComponent_h__Script_RoadBLDRuntime_3466442efcfdc1ed7ac4b201e7ffff8ae54c2507{
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
