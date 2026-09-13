// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/MapImportWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeMapImportWidget() {}

// ********** Begin Cross Module References ********************************************************
UMG_API UClass* Z_Construct_UClass_UWidget(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UMapImportWidget(ETypeConstructPhase);
TWINBLDEDITOR_API UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnMapImportRequested__DelegateSignature(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UMapImportWidget(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FOnMapImportRequested *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_TwinBLDEditor_OnMapImportRequested__DelegateSignature_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/MapImportWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnMapImportRequested constinit property declarations *****************
// ********** End Delegate FOnMapImportRequested constinit property declarations *******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor, nullptr, "OnMapImportRequested__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnMapImportRequested__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnMapImportRequested ***************************************************

// ********** Begin Class UMapImportWidget *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UMapImportWidget_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * UMG wrapper for SMapImportWidget so it can be used in Editor Utility Widgets / UMG.\n */" },
		{ "IncludePath", "Widgets/MapImportWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/MapImportWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UMG wrapper for SMapImportWidget so it can be used in Editor Utility Widgets / UMG." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumLatitude_MetaData[] = {
		{ "Category", "Map Import" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "-90.0" },
		{ "ModuleRelativePath", "Public/Widgets/MapImportWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumLatitude_MetaData[] = {
		{ "Category", "Map Import" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "-90.0" },
		{ "ModuleRelativePath", "Public/Widgets/MapImportWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumLongitude_MetaData[] = {
		{ "Category", "Map Import" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "-180.0" },
		{ "ModuleRelativePath", "Public/Widgets/MapImportWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumLongitude_MetaData[] = {
		{ "Category", "Map Import" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "-180.0" },
		{ "ModuleRelativePath", "Public/Widgets/MapImportWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnImportRequested_MetaData[] = {
		{ "Category", "Map Import" },
		{ "ModuleRelativePath", "Public/Widgets/MapImportWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMapImportWidget constinit property declarations *************************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaximumLatitude;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinimumLatitude;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaximumLongitude;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinimumLongitude;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnImportRequested;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMapImportWidget constinit property declarations ***************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapImportWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UMapImportWidget Property Definitions ************************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_MaximumLatitude = { "MaximumLatitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UMapImportWidget, MaximumLatitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumLatitude_MetaData), NewProp_MaximumLatitude_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_MinimumLatitude = { "MinimumLatitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UMapImportWidget, MinimumLatitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumLatitude_MetaData), NewProp_MinimumLatitude_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_MaximumLongitude = { "MaximumLongitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UMapImportWidget, MaximumLongitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumLongitude_MetaData), NewProp_MaximumLongitude_MetaData) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_MinimumLongitude = { "MinimumLongitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(UMapImportWidget, MinimumLongitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumLongitude_MetaData), NewProp_MinimumLongitude_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnImportRequested = { "OnImportRequested", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UMapImportWidget, OnImportRequested), Z_Construct_UDelegateFunction_TwinBLDEditor_OnMapImportRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnImportRequested_MetaData), NewProp_OnImportRequested_MetaData) }; // 40099971b78d1e4b82e0366ba6cdda18e35358f6
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumLatitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinimumLatitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaximumLongitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MinimumLongitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnImportRequested,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UMapImportWidget Property Definitions **************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWidget,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UMapImportWidget,
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
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UMapImportWidget;
UClass* Z_Construct_UClass_UMapImportWidget(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UMapImportWidget;
		if (!Z_Registration_Info_UClass_UMapImportWidget.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("MapImportWidget"),
				Z_Registration_Info_UClass_UMapImportWidget.InnerSingleton,
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
		return Z_Registration_Info_UClass_UMapImportWidget.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UMapImportWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapImportWidget.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UMapImportWidget.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMapImportWidget);
UMapImportWidget::~UMapImportWidget() {}
// ********** End Class UMapImportWidget ***********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_Widgets_MapImportWidget_h__Script_TwinBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMapImportWidget, TEXT("UMapImportWidget"), &Z_Registration_Info_UClass_UMapImportWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapImportWidget), 4266918253U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_Widgets_MapImportWidget_h__Script_TwinBLDEditor_ad74faf455102afec4ee8acd80f1db898f6c0bae{
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
