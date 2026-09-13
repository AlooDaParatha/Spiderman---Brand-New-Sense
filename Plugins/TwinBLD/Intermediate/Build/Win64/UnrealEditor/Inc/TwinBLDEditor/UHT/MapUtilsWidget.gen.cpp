// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/MapUtilsWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMapUtilsWidget() {}

// ********** Begin Cross Module References ********************************************************
UMG_API UClass* Z_Construct_UClass_UWidget(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UTexture2D(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UMapUtilsWidget(ETypeConstructPhase);
TWINBLDEDITOR_API UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnSnapBuildingsToLandscapeRequested__DelegateSignature(ETypeConstructPhase);
TWINBLDEDITOR_API UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnSnapRoadsToLandscapeRequested__DelegateSignature(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UMapUtilsWidget(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_USatelliteImageProvider(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FOnSnapBuildingsToLandscapeRequested **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_TwinBLDEditor_OnSnapBuildingsToLandscapeRequested__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/MapUtilsWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSnapBuildingsToLandscapeRequested constinit property declarations **
// ********** End Delegate FOnSnapBuildingsToLandscapeRequested constinit property declarations ****
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor, nullptr, "OnSnapBuildingsToLandscapeRequested__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnSnapBuildingsToLandscapeRequested__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnSnapBuildingsToLandscapeRequested ************************************

// ********** Begin Delegate FOnSnapRoadsToLandscapeRequested **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_TwinBLDEditor_OnSnapRoadsToLandscapeRequested__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/MapUtilsWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSnapRoadsToLandscapeRequested constinit property declarations ******
// ********** End Delegate FOnSnapRoadsToLandscapeRequested constinit property declarations ********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor, nullptr, "OnSnapRoadsToLandscapeRequested__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnSnapRoadsToLandscapeRequested__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnSnapRoadsToLandscapeRequested ****************************************

// ********** Begin Class UMapUtilsWidget Function HandleSatelliteImportComplete *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UMapUtilsWidget_HandleSatelliteImportComplete_Statics
struct UHT_STATICS
{
	struct MapUtilsWidget_eventHandleSatelliteImportComplete_Parms
	{
		UTexture2D* ImportedTexture;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/MapUtilsWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleSatelliteImportComplete constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImportedTexture;
	static void NewProp_bSuccess_SetBit(void* Obj)
	{
		((MapUtilsWidget_eventHandleSatelliteImportComplete_Parms*)Obj)->bSuccess = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleSatelliteImportComplete constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleSatelliteImportComplete Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ImportedTexture = { "ImportedTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(MapUtilsWidget_eventHandleSatelliteImportComplete_Parms, ImportedTexture), Z_Construct_UClass_UTexture2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(MapUtilsWidget_eventHandleSatelliteImportComplete_Parms), &UHT_STATICS::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ImportedTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HandleSatelliteImportComplete Property Definitions **********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UMapUtilsWidget, nullptr, "HandleSatelliteImportComplete", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::MapUtilsWidget_eventHandleSatelliteImportComplete_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::MapUtilsWidget_eventHandleSatelliteImportComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapUtilsWidget_HandleSatelliteImportComplete(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UMapUtilsWidget::execHandleSatelliteImportComplete)
{
	P_GET_OBJECT(UTexture2D,Z_Param_ImportedTexture);
	P_GET_UBOOL(Z_Param_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSatelliteImportComplete(Z_Param_ImportedTexture,Z_Param_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UMapUtilsWidget Function HandleSatelliteImportComplete *********************

// ********** Begin Class UMapUtilsWidget **********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMapUtilsWidget_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * UMG wrapper for SMapUtilsWidget so it can be used in Editor Utility Widgets / UMG.\n */" },
		{ "IncludePath", "Widgets/MapUtilsWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/MapUtilsWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UMG wrapper for SMapUtilsWidget so it can be used in Editor Utility Widgets / UMG." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSnapBuildingsToLandscapeRequested_MetaData[] = {
		{ "Category", "TwinBLD|Map Utils" },
		{ "ModuleRelativePath", "Public/Widgets/MapUtilsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSnapRoadsToLandscapeRequested_MetaData[] = {
		{ "Category", "TwinBLD|Map Utils" },
		{ "ModuleRelativePath", "Public/Widgets/MapUtilsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SatelliteImageProvider_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/MapUtilsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateDecalAfterImport_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/MapUtilsWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMapUtilsWidget constinit property declarations **************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSnapBuildingsToLandscapeRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSnapRoadsToLandscapeRequested;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SatelliteImageProvider;
	static void NewProp_bCreateDecalAfterImport_SetBit(void* Obj)
	{
		((UMapUtilsWidget*)Obj)->bCreateDecalAfterImport = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateDecalAfterImport;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMapUtilsWidget constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleSatelliteImportComplete"), .Pointer = &UMapUtilsWidget::execHandleSatelliteImportComplete },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapUtilsWidget_HandleSatelliteImportComplete, "HandleSatelliteImportComplete" }, // c62dd3cd89c6847348501c020a2b61845b151bcb
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapUtilsWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UMapUtilsWidget Property Definitions *************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnSnapBuildingsToLandscapeRequested = { "OnSnapBuildingsToLandscapeRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UMapUtilsWidget, OnSnapBuildingsToLandscapeRequested), Z_Construct_UDelegateFunction_TwinBLDEditor_OnSnapBuildingsToLandscapeRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSnapBuildingsToLandscapeRequested_MetaData), NewProp_OnSnapBuildingsToLandscapeRequested_MetaData) }; // 6cb00e43ffe8366ffc66b0a0d7853effb308a9d1
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnSnapRoadsToLandscapeRequested = { "OnSnapRoadsToLandscapeRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UMapUtilsWidget, OnSnapRoadsToLandscapeRequested), Z_Construct_UDelegateFunction_TwinBLDEditor_OnSnapRoadsToLandscapeRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSnapRoadsToLandscapeRequested_MetaData), NewProp_OnSnapRoadsToLandscapeRequested_MetaData) }; // b6a04b945de5609ddcdfa6fe4740f51e2f4f3f15
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SatelliteImageProvider = { "SatelliteImageProvider", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UMapUtilsWidget, SatelliteImageProvider), Z_Construct_UClass_USatelliteImageProvider, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SatelliteImageProvider_MetaData), NewProp_SatelliteImageProvider_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCreateDecalAfterImport = { "bCreateDecalAfterImport", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UMapUtilsWidget), &UHT_STATICS::NewProp_bCreateDecalAfterImport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateDecalAfterImport_MetaData), NewProp_bCreateDecalAfterImport_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnSnapBuildingsToLandscapeRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnSnapRoadsToLandscapeRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SatelliteImageProvider,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCreateDecalAfterImport,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UMapUtilsWidget Property Definitions ***************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWidget,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMapUtilsWidget,
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
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UMapUtilsWidget_StaticRegisterNativesUMapUtilsWidget()
{
	UClass* Class = UMapUtilsWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMapUtilsWidget;
UClass* Z_Construct_UClass_UMapUtilsWidget(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMapUtilsWidget;
		if (!Z_Registration_Info_UClass_UMapUtilsWidget.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MapUtilsWidget"),
				Z_Registration_Info_UClass_UMapUtilsWidget.InnerSingleton,
				UMapUtilsWidget_StaticRegisterNativesUMapUtilsWidget,
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
		return Z_Registration_Info_UClass_UMapUtilsWidget.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMapUtilsWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapUtilsWidget.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMapUtilsWidget.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMapUtilsWidget);
UMapUtilsWidget::~UMapUtilsWidget() {}
// ********** End Class UMapUtilsWidget ************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_Widgets_MapUtilsWidget_h__Script_TwinBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMapUtilsWidget, TEXT("UMapUtilsWidget"), &Z_Registration_Info_UClass_UMapUtilsWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapUtilsWidget), 4237398232U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_Widgets_MapUtilsWidget_h__Script_TwinBLDEditor_ea2ca2dfd5ca676fb1987e0759cef2a48d9d813b{
	TEXT("/Script/TwinBLDEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
