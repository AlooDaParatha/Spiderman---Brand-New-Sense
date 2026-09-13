// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicRoad/ClothoidSplineComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeClothoidSplineComponent() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UClothoidSplineComponent(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UClothoidSplineMetadata(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ULandscapeMirrorSplineBase(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ULandscapeMirrorSplineMetadata(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UClothoidSplineComponent(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UClothoidSplineMetadata(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ADynamicRoad(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_IDynamicRoadRefLineInterface(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UClothoidSplineMetadata **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UClothoidSplineMetadata_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DynamicRoad/ClothoidSplineComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningClothoidRoad_MetaData[] = {
		{ "Category", "ClothoidSplineComponent" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEventsEnabled_MetaData[] = {
		{ "Category", "ClothoidSplineComponent" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLandscapeSplineMirroring_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedIK_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidSplineComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UClothoidSplineMetadata constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningClothoidRoad;
	static void NewProp_bEventsEnabled_SetBit(void* Obj)
	{
		((UClothoidSplineMetadata*)Obj)->bEventsEnabled = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEventsEnabled;
	static void NewProp_bEnableLandscapeSplineMirroring_SetBit(void* Obj)
	{
		((UClothoidSplineMetadata*)Obj)->bEnableLandscapeSplineMirroring = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLandscapeSplineMirroring;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CachedIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedIK;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UClothoidSplineMetadata constinit property declarations ********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothoidSplineMetadata>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UClothoidSplineMetadata Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OwningClothoidRoad = { "OwningClothoidRoad", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UClothoidSplineMetadata, OwningClothoidRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningClothoidRoad_MetaData), NewProp_OwningClothoidRoad_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEventsEnabled = { "bEventsEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UClothoidSplineMetadata), &UHT_STATICS::NewProp_bEventsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEventsEnabled_MetaData), NewProp_bEventsEnabled_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableLandscapeSplineMirroring = { "bEnableLandscapeSplineMirroring", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UClothoidSplineMetadata), &UHT_STATICS::NewProp_bEnableLandscapeSplineMirroring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableLandscapeSplineMirroring_MetaData), NewProp_bEnableLandscapeSplineMirroring_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_CachedIndex = { "CachedIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UClothoidSplineMetadata, CachedIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedIndex_MetaData), NewProp_CachedIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CachedIK = { "CachedIK", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UClothoidSplineMetadata, CachedIK), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedIK_MetaData), NewProp_CachedIK_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OwningClothoidRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEventsEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableLandscapeSplineMirroring,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CachedIK,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UClothoidSplineMetadata Property Definitions *******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_ULandscapeMirrorSplineMetadata,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UClothoidSplineMetadata,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UClothoidSplineMetadata;
UClass* Z_Construct_UClass_UClothoidSplineMetadata(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UClothoidSplineMetadata;
		if (!Z_Registration_Info_UClass_UClothoidSplineMetadata.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ClothoidSplineMetadata"),
				Z_Registration_Info_UClass_UClothoidSplineMetadata.InnerSingleton,
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
		return Z_Registration_Info_UClass_UClothoidSplineMetadata.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UClothoidSplineMetadata.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothoidSplineMetadata.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UClothoidSplineMetadata.OuterSingleton;
}
#undef UHT_STATICS
UClothoidSplineMetadata::UClothoidSplineMetadata(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UClothoidSplineMetadata);
UClothoidSplineMetadata::~UClothoidSplineMetadata() {}
// ********** End Class UClothoidSplineMetadata ****************************************************

// ********** Begin Class UClothoidSplineComponent Function SetOwningClothoidRoad ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UClothoidSplineComponent_SetOwningClothoidRoad_Statics
struct UHT_STATICS
{
	struct ClothoidSplineComponent_eventSetOwningClothoidRoad_Parms
	{
		ADynamicRoad* InOwningRoad;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "ClothoidSpline" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidSplineComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetOwningClothoidRoad constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwningRoad;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetOwningClothoidRoad constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetOwningClothoidRoad Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InOwningRoad = { "InOwningRoad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ClothoidSplineComponent_eventSetOwningClothoidRoad_Parms, InOwningRoad), Z_Construct_UClass_ADynamicRoad, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InOwningRoad,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetOwningClothoidRoad Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UClothoidSplineComponent, nullptr, "SetOwningClothoidRoad", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ClothoidSplineComponent_eventSetOwningClothoidRoad_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ClothoidSplineComponent_eventSetOwningClothoidRoad_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UClothoidSplineComponent_SetOwningClothoidRoad(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UClothoidSplineComponent::execSetOwningClothoidRoad)
{
	P_GET_OBJECT(ADynamicRoad,Z_Param_InOwningRoad);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOwningClothoidRoad(Z_Param_InOwningRoad);
	P_NATIVE_END;
}
// ********** End Class UClothoidSplineComponent Function SetOwningClothoidRoad ********************

// ********** Begin Class UClothoidSplineComponent Function UpdateClothoidCurve ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UClothoidSplineComponent_UpdateClothoidCurve_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "ClothoidSpline" },
		{ "Comment", "// Clothoid-specific methods\n" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidSplineComponent.h" },
		{ "ToolTip", "Clothoid-specific methods" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateClothoidCurve constinit property declarations *******************
// ********** End Function UpdateClothoidCurve constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UClothoidSplineComponent, nullptr, "UpdateClothoidCurve", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UClothoidSplineComponent_UpdateClothoidCurve(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UClothoidSplineComponent::execUpdateClothoidCurve)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateClothoidCurve();
	P_NATIVE_END;
}
// ********** End Class UClothoidSplineComponent Function UpdateClothoidCurve **********************

// ********** Begin Class UClothoidSplineComponent *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UClothoidSplineComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * UClothoidSplineComponent - A read-only spline component that automatically generates\n * its spline points from a clothoid curve. This component cannot be manually edited\n * in the editor - users should modify the clothoid road parameters instead.\n * \n * The spline is automatically updated when UpdateClothoidCurve() is called,\n * creating an adaptive polyline representation of the clothoid curve.\n */" },
		{ "HideCategories", "Activation Physics Collision HLOD LOD TextureStreaming Navigation RayTracing Lighting Rendering Mobile Trigger VirtualTexture" },
		{ "IncludePath", "DynamicRoad/ClothoidSplineComponent.h" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidSplineComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UClothoidSplineComponent - A read-only spline component that automatically generates\nits spline points from a clothoid curve. This component cannot be manually edited\nin the editor - users should modify the clothoid road parameters instead.\n\nThe spline is automatically updated when UpdateClothoidCurve() is called,\ncreating an adaptive polyline representation of the clothoid curve." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomMetadata_MetaData[] = {
		{ "Category", "ClothoidSpline" },
		{ "EditCondition", "false" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidSplineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLandscapeSplineMirroring_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/ClothoidSplineComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UClothoidSplineComponent constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomMetadata;
	static void NewProp_bEnableLandscapeSplineMirroring_SetBit(void* Obj)
	{
		((UClothoidSplineComponent*)Obj)->bEnableLandscapeSplineMirroring = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLandscapeSplineMirroring;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UClothoidSplineComponent constinit property declarations *******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetOwningClothoidRoad"), .Pointer = &UClothoidSplineComponent::execSetOwningClothoidRoad },
		{ .NameUTF8 = UTF8TEXT("UpdateClothoidCurve"), .Pointer = &UClothoidSplineComponent::execUpdateClothoidCurve },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UClothoidSplineComponent_SetOwningClothoidRoad, "SetOwningClothoidRoad" }, // 96a58d8a93f096de25174591925428d5bf2f21b5
		{ &Z_Construct_UFunction_UClothoidSplineComponent_UpdateClothoidCurve, "UpdateClothoidCurve" }, // de20ebc2c97bd740a50a470bd0fdb6bc6ec9a6c7
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothoidSplineComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UClothoidSplineComponent Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CustomMetadata = { "CustomMetadata", nullptr, (EPropertyFlags)0x011600000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UClothoidSplineComponent, CustomMetadata), Z_Construct_UClass_UClothoidSplineMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomMetadata_MetaData), NewProp_CustomMetadata_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableLandscapeSplineMirroring = { "bEnableLandscapeSplineMirroring", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UClothoidSplineComponent), &UHT_STATICS::NewProp_bEnableLandscapeSplineMirroring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableLandscapeSplineMirroring_MetaData), NewProp_bEnableLandscapeSplineMirroring_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomMetadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableLandscapeSplineMirroring,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UClothoidSplineComponent Property Definitions ******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_ULandscapeMirrorSplineBase,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams UHT_STATICS::InterfaceParams[] = {
	{ Z_Construct_UClass_UDynamicRoadRefLineInterface, (int32)VTABLE_OFFSET(UClothoidSplineComponent, IDynamicRoadRefLineInterface), false },  // b77810b8938d27b231848e185bd51a2919e029de
};
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UClothoidSplineComponent,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UClothoidSplineComponent_StaticRegisterNativesUClothoidSplineComponent()
{
	UClass* Class = UClothoidSplineComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UClothoidSplineComponent;
UClass* Z_Construct_UClass_UClothoidSplineComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UClothoidSplineComponent;
		if (!Z_Registration_Info_UClass_UClothoidSplineComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ClothoidSplineComponent"),
				Z_Registration_Info_UClass_UClothoidSplineComponent.InnerSingleton,
				UClothoidSplineComponent_StaticRegisterNativesUClothoidSplineComponent,
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
		return Z_Registration_Info_UClass_UClothoidSplineComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UClothoidSplineComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothoidSplineComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UClothoidSplineComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UClothoidSplineComponent);
UClothoidSplineComponent::~UClothoidSplineComponent() {}
// ********** End Class UClothoidSplineComponent ***************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidSplineComponent_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UClothoidSplineMetadata, TEXT("UClothoidSplineMetadata"), &Z_Registration_Info_UClass_UClothoidSplineMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothoidSplineMetadata), 2708479896U) },
		{ Z_Construct_UClass_UClothoidSplineComponent, TEXT("UClothoidSplineComponent"), &Z_Registration_Info_UClass_UClothoidSplineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothoidSplineComponent), 372490076U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidSplineComponent_h__Script_RoadBLDRuntime_09e8f5fcf85f89164b72a5dadde41227061a645b{
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
