// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LaneSelectionBrush.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeLaneSelectionBrush() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent(ETypeConstructPhase);
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ALaneSelectionBrush(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadLane(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ALaneSelectionBrush(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ARoadGeo(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class ALaneSelectionBrush Function CopyMeshFromRoadGeo *************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ALaneSelectionBrush_CopyMeshFromRoadGeo_Statics
struct UHT_STATICS
{
	struct LaneSelectionBrush_eventCopyMeshFromRoadGeo_Parms
	{
		const ARoadGeo* SourceRoadGeo;
		float ZOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "LaneSelectionBrush" },
		{ "Comment", "/**\n\x09 * Copies mesh geometry from a RoadGeo surface (static or DynamicMesh display) into the brush.\n\x09 */" },
		{ "CPP_Default_ZOffset", "10.000000" },
		{ "ModuleRelativePath", "Public/LaneSelectionBrush.h" },
		{ "ToolTip", "Copies mesh geometry from a RoadGeo surface (static or DynamicMesh display) into the brush." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceRoadGeo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function CopyMeshFromRoadGeo constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceRoadGeo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CopyMeshFromRoadGeo constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CopyMeshFromRoadGeo Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SourceRoadGeo = { "SourceRoadGeo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LaneSelectionBrush_eventCopyMeshFromRoadGeo_Parms, SourceRoadGeo), Z_Construct_UClass_ARoadGeo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceRoadGeo_MetaData), NewProp_SourceRoadGeo_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(LaneSelectionBrush_eventCopyMeshFromRoadGeo_Parms, ZOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceRoadGeo,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZOffset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CopyMeshFromRoadGeo Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ALaneSelectionBrush, nullptr, "CopyMeshFromRoadGeo", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LaneSelectionBrush_eventCopyMeshFromRoadGeo_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LaneSelectionBrush_eventCopyMeshFromRoadGeo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALaneSelectionBrush_CopyMeshFromRoadGeo(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ALaneSelectionBrush::execCopyMeshFromRoadGeo)
{
	P_GET_OBJECT(ARoadGeo,Z_Param_SourceRoadGeo);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CopyMeshFromRoadGeo(Z_Param_SourceRoadGeo,Z_Param_ZOffset);
	P_NATIVE_END;
}
// ********** End Class ALaneSelectionBrush Function CopyMeshFromRoadGeo ***************************

// ********** Begin Class ALaneSelectionBrush Function CopyMeshFromStaticMeshComponent *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ALaneSelectionBrush_CopyMeshFromStaticMeshComponent_Statics
struct UHT_STATICS
{
	struct LaneSelectionBrush_eventCopyMeshFromStaticMeshComponent_Parms
	{
		UStaticMeshComponent* SourceComponent;
		float ZOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "LaneSelectionBrush" },
		{ "Comment", "/**\n\x09 * Copies mesh geometry from a RoadGeo static mesh root component into the brush, with a Z offset.\n\x09 */" },
		{ "CPP_Default_ZOffset", "10.000000" },
		{ "ModuleRelativePath", "Public/LaneSelectionBrush.h" },
		{ "ToolTip", "Copies mesh geometry from a RoadGeo static mesh root component into the brush, with a Z offset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function CopyMeshFromStaticMeshComponent constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function CopyMeshFromStaticMeshComponent constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function CopyMeshFromStaticMeshComponent Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LaneSelectionBrush_eventCopyMeshFromStaticMeshComponent_Parms, SourceComponent), Z_Construct_UClass_UStaticMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceComponent_MetaData), NewProp_SourceComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(LaneSelectionBrush_eventCopyMeshFromStaticMeshComponent_Parms, ZOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZOffset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function CopyMeshFromStaticMeshComponent Property Definitions ********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ALaneSelectionBrush, nullptr, "CopyMeshFromStaticMeshComponent", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LaneSelectionBrush_eventCopyMeshFromStaticMeshComponent_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LaneSelectionBrush_eventCopyMeshFromStaticMeshComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALaneSelectionBrush_CopyMeshFromStaticMeshComponent(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ALaneSelectionBrush::execCopyMeshFromStaticMeshComponent)
{
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_SourceComponent);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CopyMeshFromStaticMeshComponent(Z_Param_SourceComponent,Z_Param_ZOffset);
	P_NATIVE_END;
}
// ********** End Class ALaneSelectionBrush Function CopyMeshFromStaticMeshComponent ***************

// ********** Begin Class ALaneSelectionBrush Function UpdateMeshForLane ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ALaneSelectionBrush_UpdateMeshForLane_Statics
struct UHT_STATICS
{
	struct LaneSelectionBrush_eventUpdateMeshForLane_Parms
	{
		UDynamicRoadLane* Lane;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "LaneSelectionBrush" },
		{ "Comment", "/**\n\x09 * Updates the mesh to visualize the given lane\n\x09 * @param Lane - The lane to visualize. If null, the mesh will be cleared.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LaneSelectionBrush.h" },
		{ "ToolTip", "Updates the mesh to visualize the given lane\n@param Lane - The lane to visualize. If null, the mesh will be cleared." },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateMeshForLane constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Lane;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateMeshForLane constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateMeshForLane Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Lane = { "Lane", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(LaneSelectionBrush_eventUpdateMeshForLane_Parms, Lane), Z_Construct_UClass_UDynamicRoadLane, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Lane,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UpdateMeshForLane Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ALaneSelectionBrush, nullptr, "UpdateMeshForLane", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::LaneSelectionBrush_eventUpdateMeshForLane_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::LaneSelectionBrush_eventUpdateMeshForLane_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALaneSelectionBrush_UpdateMeshForLane(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ALaneSelectionBrush::execUpdateMeshForLane)
{
	P_GET_OBJECT(UDynamicRoadLane,Z_Param_Lane);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMeshForLane(Z_Param_Lane);
	P_NATIVE_END;
}
// ********** End Class ALaneSelectionBrush Function UpdateMeshForLane *****************************

// ********** Begin Class ALaneSelectionBrush ******************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ALaneSelectionBrush_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * ALaneSelectionBrush - A visual brush actor that displays a mesh representation of a selected lane\n * Used by the lane selection controller to provide visual feedback for the currently hovered lane\n */" },
		{ "IncludePath", "LaneSelectionBrush.h" },
		{ "ModuleRelativePath", "Public/LaneSelectionBrush.h" },
		{ "ToolTip", "ALaneSelectionBrush - A visual brush actor that displays a mesh representation of a selected lane\nUsed by the lane selection controller to provide visual feedback for the currently hovered lane" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMeshComponent_MetaData[] = {
		{ "Category", "LaneSelectionBrush" },
		{ "Comment", "// The dynamic mesh component that renders the lane selection brush\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LaneSelectionBrush.h" },
		{ "ToolTip", "The dynamic mesh component that renders the lane selection brush" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushMaterial_MetaData[] = {
		{ "Category", "LaneSelectionBrush" },
		{ "Comment", "// The material to use for the lane selection brush visualization\n" },
		{ "ModuleRelativePath", "Public/LaneSelectionBrush.h" },
		{ "ToolTip", "The material to use for the lane selection brush visualization" },
	};
#endif // WITH_METADATA

// ********** Begin Class ALaneSelectionBrush constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ALaneSelectionBrush constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CopyMeshFromRoadGeo"), .Pointer = &ALaneSelectionBrush::execCopyMeshFromRoadGeo },
		{ .NameUTF8 = UTF8TEXT("CopyMeshFromStaticMeshComponent"), .Pointer = &ALaneSelectionBrush::execCopyMeshFromStaticMeshComponent },
		{ .NameUTF8 = UTF8TEXT("UpdateMeshForLane"), .Pointer = &ALaneSelectionBrush::execUpdateMeshForLane },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALaneSelectionBrush_CopyMeshFromRoadGeo, "CopyMeshFromRoadGeo" }, // d8aa24bcb554c216856cac1bc98fdea0b413fb7a
		{ &Z_Construct_UFunction_ALaneSelectionBrush_CopyMeshFromStaticMeshComponent, "CopyMeshFromStaticMeshComponent" }, // dd2464e0ed3b2f39f5e03dff831943acb1be9e24
		{ &Z_Construct_UFunction_ALaneSelectionBrush_UpdateMeshForLane, "UpdateMeshForLane" }, // f17ca1a2b68bac6ccc8013c62f02e88b6de83f34
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaneSelectionBrush>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ALaneSelectionBrush Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DynamicMeshComponent = { "DynamicMeshComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ALaneSelectionBrush, DynamicMeshComponent), Z_Construct_UClass_UDynamicMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMeshComponent_MetaData), NewProp_DynamicMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_BrushMaterial = { "BrushMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ALaneSelectionBrush, BrushMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushMaterial_MetaData), NewProp_BrushMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DynamicMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BrushMaterial,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ALaneSelectionBrush Property Definitions ***********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ALaneSelectionBrush,
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
static void ALaneSelectionBrush_StaticRegisterNativesALaneSelectionBrush()
{
	UClass* Class = ALaneSelectionBrush::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ALaneSelectionBrush;
UClass* Z_Construct_UClass_ALaneSelectionBrush(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ALaneSelectionBrush;
		if (!Z_Registration_Info_UClass_ALaneSelectionBrush.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("LaneSelectionBrush"),
				Z_Registration_Info_UClass_ALaneSelectionBrush.InnerSingleton,
				ALaneSelectionBrush_StaticRegisterNativesALaneSelectionBrush,
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
		return Z_Registration_Info_UClass_ALaneSelectionBrush.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ALaneSelectionBrush.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALaneSelectionBrush.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ALaneSelectionBrush.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ALaneSelectionBrush);
ALaneSelectionBrush::~ALaneSelectionBrush() {}
// ********** End Class ALaneSelectionBrush ********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_LaneSelectionBrush_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALaneSelectionBrush, TEXT("ALaneSelectionBrush"), &Z_Registration_Info_UClass_ALaneSelectionBrush, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALaneSelectionBrush), 2386312415U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_LaneSelectionBrush_h__Script_RoadBLDRuntime_68c138c07d43a121c1544b5e1aca9e1d34737ac2{
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
