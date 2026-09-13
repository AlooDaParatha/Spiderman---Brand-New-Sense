// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ParcelBrush.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeParcelBrush() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UCityParcel(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_AParcelBrush(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_AParcelBrush(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class AParcelBrush Function ClearMesh ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AParcelBrush_ClearMesh_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "ParcelBrush" },
		{ "Comment", "/**\n\x09 * Clears the mesh\n\x09 */" },
		{ "ModuleRelativePath", "Public/ParcelBrush.h" },
		{ "ToolTip", "Clears the mesh" },
	};
#endif // WITH_METADATA

// ********** Begin Function ClearMesh constinit property declarations *****************************
// ********** End Function ClearMesh constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AParcelBrush, nullptr, "ClearMesh", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_AParcelBrush_ClearMesh(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AParcelBrush::execClearMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearMesh();
	P_NATIVE_END;
}
// ********** End Class AParcelBrush Function ClearMesh ********************************************

// ********** Begin Class AParcelBrush Function UpdateBrush ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AParcelBrush_UpdateBrush_Statics
struct UHT_STATICS
{
	struct ParcelBrush_eventUpdateBrush_Parms
	{
		UCityParcel* SelectedParcel;
		UCityParcel* HoveredParcel;
		float ZOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "ParcelBrush" },
		{ "Comment", "/**\n\x09 * Updates the mesh to visualize both selected and hovered parcels\n\x09 * @param SelectedParcel - The currently selected parcel (can be null)\n\x09 * @param HoveredParcel - The currently hovered parcel (can be null)\n\x09 * @param ZOffset - Z offset to apply\n\x09 */" },
		{ "CPP_Default_ZOffset", "10.000000" },
		{ "ModuleRelativePath", "Public/ParcelBrush.h" },
		{ "ToolTip", "Updates the mesh to visualize both selected and hovered parcels\n@param SelectedParcel - The currently selected parcel (can be null)\n@param HoveredParcel - The currently hovered parcel (can be null)\n@param ZOffset - Z offset to apply" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateBrush constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedParcel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoveredParcel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateBrush constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateBrush Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SelectedParcel = { "SelectedParcel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ParcelBrush_eventUpdateBrush_Parms, SelectedParcel), Z_Construct_UClass_UCityParcel, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HoveredParcel = { "HoveredParcel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ParcelBrush_eventUpdateBrush_Parms, HoveredParcel), Z_Construct_UClass_UCityParcel, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ParcelBrush_eventUpdateBrush_Parms, ZOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedParcel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HoveredParcel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZOffset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UpdateBrush Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AParcelBrush, nullptr, "UpdateBrush", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ParcelBrush_eventUpdateBrush_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ParcelBrush_eventUpdateBrush_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AParcelBrush_UpdateBrush(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AParcelBrush::execUpdateBrush)
{
	P_GET_OBJECT(UCityParcel,Z_Param_SelectedParcel);
	P_GET_OBJECT(UCityParcel,Z_Param_HoveredParcel);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateBrush(Z_Param_SelectedParcel,Z_Param_HoveredParcel,Z_Param_ZOffset);
	P_NATIVE_END;
}
// ********** End Class AParcelBrush Function UpdateBrush ******************************************

// ********** Begin Class AParcelBrush Function UpdateMeshForParcel ********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_AParcelBrush_UpdateMeshForParcel_Statics
struct UHT_STATICS
{
	struct ParcelBrush_eventUpdateMeshForParcel_Parms
	{
		UCityParcel* Parcel;
		float ZOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "ParcelBrush" },
		{ "Comment", "/**\n\x09 * Updates the mesh to visualize the given parcel\n\x09 * @param Parcel - The parcel to visualize. If null, the mesh will be cleared.\n\x09 * @param ZOffset - Z offset to apply to raise the mesh above the ground\n\x09 */" },
		{ "CPP_Default_ZOffset", "10.000000" },
		{ "ModuleRelativePath", "Public/ParcelBrush.h" },
		{ "ToolTip", "Updates the mesh to visualize the given parcel\n@param Parcel - The parcel to visualize. If null, the mesh will be cleared.\n@param ZOffset - Z offset to apply to raise the mesh above the ground" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateMeshForParcel constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parcel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateMeshForParcel constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateMeshForParcel Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Parcel = { "Parcel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ParcelBrush_eventUpdateMeshForParcel_Parms, Parcel), Z_Construct_UClass_UCityParcel, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ParcelBrush_eventUpdateMeshForParcel_Parms, ZOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Parcel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ZOffset,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UpdateMeshForParcel Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_AParcelBrush, nullptr, "UpdateMeshForParcel", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ParcelBrush_eventUpdateMeshForParcel_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ParcelBrush_eventUpdateMeshForParcel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AParcelBrush_UpdateMeshForParcel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(AParcelBrush::execUpdateMeshForParcel)
{
	P_GET_OBJECT(UCityParcel,Z_Param_Parcel);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMeshForParcel(Z_Param_Parcel,Z_Param_ZOffset);
	P_NATIVE_END;
}
// ********** End Class AParcelBrush Function UpdateMeshForParcel **********************************

// ********** Begin Class AParcelBrush *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_AParcelBrush_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * AParcelBrush - A visual brush actor that displays a mesh representation of a hovered parcel\n * Used by the parcel controller to provide visual feedback for the currently hovered parcel\n */" },
		{ "IncludePath", "ParcelBrush.h" },
		{ "ModuleRelativePath", "Public/ParcelBrush.h" },
		{ "ToolTip", "AParcelBrush - A visual brush actor that displays a mesh representation of a hovered parcel\nUsed by the parcel controller to provide visual feedback for the currently hovered parcel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMeshComponent_MetaData[] = {
		{ "Category", "ParcelBrush" },
		{ "Comment", "/** The dynamic mesh component that renders the parcel brush */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ParcelBrush.h" },
		{ "ToolTip", "The dynamic mesh component that renders the parcel brush" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushMaterial_MetaData[] = {
		{ "Category", "ParcelBrush" },
		{ "Comment", "/** The material to use for the parcel brush visualization */" },
		{ "ModuleRelativePath", "Public/ParcelBrush.h" },
		{ "ToolTip", "The material to use for the parcel brush visualization" },
	};
#endif // WITH_METADATA

// ********** Begin Class AParcelBrush constinit property declarations *****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AParcelBrush constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ClearMesh"), .Pointer = &AParcelBrush::execClearMesh },
		{ .NameUTF8 = UTF8TEXT("UpdateBrush"), .Pointer = &AParcelBrush::execUpdateBrush },
		{ .NameUTF8 = UTF8TEXT("UpdateMeshForParcel"), .Pointer = &AParcelBrush::execUpdateMeshForParcel },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AParcelBrush_ClearMesh, "ClearMesh" }, // 5dccbcdd2d0c9605b60273424a43a83aab8c2d15
		{ &Z_Construct_UFunction_AParcelBrush_UpdateBrush, "UpdateBrush" }, // a15d1da94c43f57b8dd21405c5a96424e144376d
		{ &Z_Construct_UFunction_AParcelBrush_UpdateMeshForParcel, "UpdateMeshForParcel" }, // 89b04cc8bea7ccfe9c25cb203f87f419ae15566b
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParcelBrush>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class AParcelBrush Property Definitions ****************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DynamicMeshComponent = { "DynamicMeshComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AParcelBrush, DynamicMeshComponent), Z_Construct_UClass_UDynamicMeshComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMeshComponent_MetaData), NewProp_DynamicMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_BrushMaterial = { "BrushMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(AParcelBrush, BrushMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushMaterial_MetaData), NewProp_BrushMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DynamicMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BrushMaterial,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class AParcelBrush Property Definitions ******************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_AParcelBrush,
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
static void AParcelBrush_StaticRegisterNativesAParcelBrush()
{
	UClass* Class = AParcelBrush::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AParcelBrush;
UClass* Z_Construct_UClass_AParcelBrush(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = AParcelBrush;
		if (!Z_Registration_Info_UClass_AParcelBrush.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ParcelBrush"),
				Z_Registration_Info_UClass_AParcelBrush.InnerSingleton,
				AParcelBrush_StaticRegisterNativesAParcelBrush,
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
		return Z_Registration_Info_UClass_AParcelBrush.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_AParcelBrush.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AParcelBrush.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_AParcelBrush.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AParcelBrush);
AParcelBrush::~AParcelBrush() {}
// ********** End Class AParcelBrush ***************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ParcelBrush_h__Script_CityBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AParcelBrush, TEXT("AParcelBrush"), &Z_Registration_Info_UClass_AParcelBrush, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AParcelBrush), 3324205767U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ParcelBrush_h__Script_CityBLDEditor_2d6e79b061eef985a0ece87caaa138a5595d38b8{
	TEXT("/Script/CityBLDEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
