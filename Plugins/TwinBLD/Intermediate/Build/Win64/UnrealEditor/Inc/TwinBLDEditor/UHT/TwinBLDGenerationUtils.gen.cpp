// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwinBLDGenerationUtils.h"
#include "LandscapeManager.h"
#include "StreetMap/StreetMapUtils.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeTwinBLDGenerationUtils() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FBuildingGenerationModalOptions(ETypeConstructPhase);
TWINBLDEDITOR_API UEnum* Z_Construct_UEnum_TwinBLDEditor_EOSMWayType(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeParameters(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FParcelsGenerationModalOptions(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FRoadStripGenerationOptions(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UStreetMapRoadStripDialogSettings(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoadStripSettings(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDGenerationDialogSettings(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDGenerationUtils(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDLandscapeImportOptions(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDReplicityRoadDialogSettings(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UStreetMapImportCustomizerBase(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UStreetMapRoadStripDialogSettings(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDGenerationDialogSettings(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDGenerationUtils(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDLandscapeImportOptions(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLDReplicityRoadDialogSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UStreetMapRoadStripDialogSettings ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UStreetMapRoadStripDialogSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/** Editor-only UObject wrapper used to expose FStreetMapRoadStripSettings inside generation dialogs. */" },
		{ "IncludePath", "TwinBLDGenerationUtils.h" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
		{ "ToolTip", "Editor-only UObject wrapper used to expose FStreetMapRoadStripSettings inside generation dialogs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Road Strip Settings" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UStreetMapRoadStripDialogSettings constinit property declarations ********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UStreetMapRoadStripDialogSettings constinit property declarations **********
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreetMapRoadStripDialogSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UStreetMapRoadStripDialogSettings Property Definitions *******************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UStreetMapRoadStripDialogSettings, Settings), Z_Construct_UScriptStruct_FStreetMapRoadStripSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // b801dcef2552d12a234bd4425015d26813a95616
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UStreetMapRoadStripDialogSettings Property Definitions *********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UStreetMapRoadStripDialogSettings,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UStreetMapRoadStripDialogSettings;
UClass* Z_Construct_UClass_UStreetMapRoadStripDialogSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UStreetMapRoadStripDialogSettings;
		if (!Z_Registration_Info_UClass_UStreetMapRoadStripDialogSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("StreetMapRoadStripDialogSettings"),
				Z_Registration_Info_UClass_UStreetMapRoadStripDialogSettings.InnerSingleton,
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
		return Z_Registration_Info_UClass_UStreetMapRoadStripDialogSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UStreetMapRoadStripDialogSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStreetMapRoadStripDialogSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UStreetMapRoadStripDialogSettings.OuterSingleton;
}
#undef UHT_STATICS
UStreetMapRoadStripDialogSettings::UStreetMapRoadStripDialogSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UStreetMapRoadStripDialogSettings);
UStreetMapRoadStripDialogSettings::~UStreetMapRoadStripDialogSettings() {}
// ********** End Class UStreetMapRoadStripDialogSettings ******************************************

// ********** Begin Class UTwinBLDGenerationDialogSettings *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UTwinBLDGenerationDialogSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/** Shared UObject wrapper used to expose the customizer class picker via IDetailsView. */" },
		{ "IncludePath", "TwinBLDGenerationUtils.h" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
		{ "ToolTip", "Shared UObject wrapper used to expose the customizer class picker via IDetailsView." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomizerClass_MetaData[] = {
		{ "Category", "Generation" },
		{ "DisplayName", "Customizer Class" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTwinBLDGenerationDialogSettings constinit property declarations *********
	static const UECodeGen_Private::FClassPropertyParams NewProp_CustomizerClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UTwinBLDGenerationDialogSettings constinit property declarations ***********
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinBLDGenerationDialogSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UTwinBLDGenerationDialogSettings Property Definitions ********************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_CustomizerClass = { "CustomizerClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDGenerationDialogSettings, CustomizerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UStreetMapImportCustomizerBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomizerClass_MetaData), NewProp_CustomizerClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomizerClass,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UTwinBLDGenerationDialogSettings Property Definitions **********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UTwinBLDGenerationDialogSettings,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UTwinBLDGenerationDialogSettings;
UClass* Z_Construct_UClass_UTwinBLDGenerationDialogSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UTwinBLDGenerationDialogSettings;
		if (!Z_Registration_Info_UClass_UTwinBLDGenerationDialogSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("TwinBLDGenerationDialogSettings"),
				Z_Registration_Info_UClass_UTwinBLDGenerationDialogSettings.InnerSingleton,
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
		return Z_Registration_Info_UClass_UTwinBLDGenerationDialogSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UTwinBLDGenerationDialogSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTwinBLDGenerationDialogSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UTwinBLDGenerationDialogSettings.OuterSingleton;
}
#undef UHT_STATICS
UTwinBLDGenerationDialogSettings::UTwinBLDGenerationDialogSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTwinBLDGenerationDialogSettings);
UTwinBLDGenerationDialogSettings::~UTwinBLDGenerationDialogSettings() {}
// ********** End Class UTwinBLDGenerationDialogSettings *******************************************

// ********** Begin Class UTwinBLDReplicityRoadDialogSettings **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UTwinBLDReplicityRoadDialogSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "TwinBLDGenerationUtils.h" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceMaterial_MetaData[] = {
		{ "Category", "Road Surface" },
		{ "DisplayName", "Surface Material" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTwinBLDReplicityRoadDialogSettings constinit property declarations ******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SurfaceMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UTwinBLDReplicityRoadDialogSettings constinit property declarations ********
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinBLDReplicityRoadDialogSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UTwinBLDReplicityRoadDialogSettings Property Definitions *****************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SurfaceMaterial = { "SurfaceMaterial", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDReplicityRoadDialogSettings, SurfaceMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceMaterial_MetaData), NewProp_SurfaceMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SurfaceMaterial,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UTwinBLDReplicityRoadDialogSettings Property Definitions *******************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UTwinBLDReplicityRoadDialogSettings,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UTwinBLDReplicityRoadDialogSettings;
UClass* Z_Construct_UClass_UTwinBLDReplicityRoadDialogSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UTwinBLDReplicityRoadDialogSettings;
		if (!Z_Registration_Info_UClass_UTwinBLDReplicityRoadDialogSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("TwinBLDReplicityRoadDialogSettings"),
				Z_Registration_Info_UClass_UTwinBLDReplicityRoadDialogSettings.InnerSingleton,
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
		return Z_Registration_Info_UClass_UTwinBLDReplicityRoadDialogSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UTwinBLDReplicityRoadDialogSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTwinBLDReplicityRoadDialogSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UTwinBLDReplicityRoadDialogSettings.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTwinBLDReplicityRoadDialogSettings);
UTwinBLDReplicityRoadDialogSettings::~UTwinBLDReplicityRoadDialogSettings() {}
// ********** End Class UTwinBLDReplicityRoadDialogSettings ****************************************

// ********** Begin ScriptStruct FRoadStripGenerationOptions ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRoadStripGenerationOptions_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRoadStripGenerationOptions>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRoadStripGenerationOptions); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAccepted_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToLandscape_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClearExistingRoads_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttemptMergeConnectedRoads_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSplitSelfIntersectingRoads_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnabledWayTypes_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomizerClass_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRoadStripGenerationOptions constinit property declarations *******
	static void NewProp_bAccepted_SetBit(void* Obj)
	{
		((FRoadStripGenerationOptions*)Obj)->bAccepted = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccepted;
	static void NewProp_bSnapToLandscape_SetBit(void* Obj)
	{
		((FRoadStripGenerationOptions*)Obj)->bSnapToLandscape = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToLandscape;
	static void NewProp_bClearExistingRoads_SetBit(void* Obj)
	{
		((FRoadStripGenerationOptions*)Obj)->bClearExistingRoads = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearExistingRoads;
	static void NewProp_bAttemptMergeConnectedRoads_SetBit(void* Obj)
	{
		((FRoadStripGenerationOptions*)Obj)->bAttemptMergeConnectedRoads = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttemptMergeConnectedRoads;
	static void NewProp_bSplitSelfIntersectingRoads_SetBit(void* Obj)
	{
		((FRoadStripGenerationOptions*)Obj)->bSplitSelfIntersectingRoads = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplitSelfIntersectingRoads;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnabledWayTypes_ElementProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EnabledWayTypes_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_EnabledWayTypes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CustomizerClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRoadStripGenerationOptions constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadStripGenerationOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRoadStripGenerationOptions Property Definitions ******************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAccepted = { "bAccepted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadStripGenerationOptions), &UHT_STATICS::NewProp_bAccepted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAccepted_MetaData), NewProp_bAccepted_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSnapToLandscape = { "bSnapToLandscape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadStripGenerationOptions), &UHT_STATICS::NewProp_bSnapToLandscape_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapToLandscape_MetaData), NewProp_bSnapToLandscape_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bClearExistingRoads = { "bClearExistingRoads", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadStripGenerationOptions), &UHT_STATICS::NewProp_bClearExistingRoads_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClearExistingRoads_MetaData), NewProp_bClearExistingRoads_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAttemptMergeConnectedRoads = { "bAttemptMergeConnectedRoads", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadStripGenerationOptions), &UHT_STATICS::NewProp_bAttemptMergeConnectedRoads_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttemptMergeConnectedRoads_MetaData), NewProp_bAttemptMergeConnectedRoads_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSplitSelfIntersectingRoads = { "bSplitSelfIntersectingRoads", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FRoadStripGenerationOptions), &UHT_STATICS::NewProp_bSplitSelfIntersectingRoads_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSplitSelfIntersectingRoads_MetaData), NewProp_bSplitSelfIntersectingRoads_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_EnabledWayTypes_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_EnabledWayTypes_ElementProp = { "EnabledWayTypes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, 0, Z_Construct_UEnum_TwinBLDEditor_EOSMWayType, METADATA_PARAMS(0, nullptr) }; // 5b1e381aeff0552c511b4c1744d11a209d3e48e0
const UECodeGen_Private::FSetPropertyParams UHT_STATICS::NewProp_EnabledWayTypes = { "EnabledWayTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadStripGenerationOptions, EnabledWayTypes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnabledWayTypes_MetaData), NewProp_EnabledWayTypes_MetaData) }; // 5b1e381aeff0552c511b4c1744d11a209d3e48e0
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadStripGenerationOptions, AdvancedSettings), Z_Construct_UScriptStruct_FStreetMapRoadStripSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedSettings_MetaData), NewProp_AdvancedSettings_MetaData) }; // b801dcef2552d12a234bd4425015d26813a95616
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_CustomizerClass = { "CustomizerClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadStripGenerationOptions, CustomizerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UStreetMapImportCustomizerBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomizerClass_MetaData), NewProp_CustomizerClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAccepted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSnapToLandscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bClearExistingRoads,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAttemptMergeConnectedRoads,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSplitSelfIntersectingRoads,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnabledWayTypes_ElementProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnabledWayTypes_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_EnabledWayTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_AdvancedSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomizerClass,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRoadStripGenerationOptions Property Definitions ********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"RoadStripGenerationOptions",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRoadStripGenerationOptions>(),
	alignof(FRoadStripGenerationOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRoadStripGenerationOptions;
UScriptStruct* Z_Construct_UScriptStruct_FRoadStripGenerationOptions(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRoadStripGenerationOptions.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRoadStripGenerationOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadStripGenerationOptions, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("RoadStripGenerationOptions"));
		}
		return Z_Registration_Info_UScriptStruct_FRoadStripGenerationOptions.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRoadStripGenerationOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRoadStripGenerationOptions.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRoadStripGenerationOptions.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRoadStripGenerationOptions *****************************************

// ********** Begin ScriptStruct FBuildingGenerationModalOptions ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FBuildingGenerationModalOptions_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FBuildingGenerationModalOptions>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FBuildingGenerationModalOptions); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAccepted_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToLandscape_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClearExistingBuildings_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDetectFacades_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDedupeOverlappingBuildings_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImportRoofShapes_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "Comment", "/** When true, OSM roof:* tags override BuildingStyle roof types. Off by default. */" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
		{ "ToolTip", "When true, OSM roof:* tags override BuildingStyle roof types. Off by default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomizerClass_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FBuildingGenerationModalOptions constinit property declarations ***
	static void NewProp_bAccepted_SetBit(void* Obj)
	{
		((FBuildingGenerationModalOptions*)Obj)->bAccepted = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccepted;
	static void NewProp_bSnapToLandscape_SetBit(void* Obj)
	{
		((FBuildingGenerationModalOptions*)Obj)->bSnapToLandscape = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToLandscape;
	static void NewProp_bClearExistingBuildings_SetBit(void* Obj)
	{
		((FBuildingGenerationModalOptions*)Obj)->bClearExistingBuildings = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearExistingBuildings;
	static void NewProp_bDetectFacades_SetBit(void* Obj)
	{
		((FBuildingGenerationModalOptions*)Obj)->bDetectFacades = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectFacades;
	static void NewProp_bDedupeOverlappingBuildings_SetBit(void* Obj)
	{
		((FBuildingGenerationModalOptions*)Obj)->bDedupeOverlappingBuildings = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDedupeOverlappingBuildings;
	static void NewProp_bImportRoofShapes_SetBit(void* Obj)
	{
		((FBuildingGenerationModalOptions*)Obj)->bImportRoofShapes = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportRoofShapes;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CustomizerClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FBuildingGenerationModalOptions constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildingGenerationModalOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FBuildingGenerationModalOptions Property Definitions **************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAccepted = { "bAccepted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FBuildingGenerationModalOptions), &UHT_STATICS::NewProp_bAccepted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAccepted_MetaData), NewProp_bAccepted_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSnapToLandscape = { "bSnapToLandscape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FBuildingGenerationModalOptions), &UHT_STATICS::NewProp_bSnapToLandscape_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapToLandscape_MetaData), NewProp_bSnapToLandscape_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bClearExistingBuildings = { "bClearExistingBuildings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FBuildingGenerationModalOptions), &UHT_STATICS::NewProp_bClearExistingBuildings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClearExistingBuildings_MetaData), NewProp_bClearExistingBuildings_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDetectFacades = { "bDetectFacades", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FBuildingGenerationModalOptions), &UHT_STATICS::NewProp_bDetectFacades_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDetectFacades_MetaData), NewProp_bDetectFacades_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDedupeOverlappingBuildings = { "bDedupeOverlappingBuildings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FBuildingGenerationModalOptions), &UHT_STATICS::NewProp_bDedupeOverlappingBuildings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDedupeOverlappingBuildings_MetaData), NewProp_bDedupeOverlappingBuildings_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bImportRoofShapes = { "bImportRoofShapes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FBuildingGenerationModalOptions), &UHT_STATICS::NewProp_bImportRoofShapes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImportRoofShapes_MetaData), NewProp_bImportRoofShapes_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_CustomizerClass = { "CustomizerClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingGenerationModalOptions, CustomizerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UStreetMapImportCustomizerBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomizerClass_MetaData), NewProp_CustomizerClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAccepted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSnapToLandscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bClearExistingBuildings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDetectFacades,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDedupeOverlappingBuildings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bImportRoofShapes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomizerClass,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FBuildingGenerationModalOptions Property Definitions ****************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"BuildingGenerationModalOptions",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FBuildingGenerationModalOptions>(),
	alignof(FBuildingGenerationModalOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBuildingGenerationModalOptions;
UScriptStruct* Z_Construct_UScriptStruct_FBuildingGenerationModalOptions(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FBuildingGenerationModalOptions.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FBuildingGenerationModalOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildingGenerationModalOptions, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("BuildingGenerationModalOptions"));
		}
		return Z_Registration_Info_UScriptStruct_FBuildingGenerationModalOptions.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FBuildingGenerationModalOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBuildingGenerationModalOptions.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FBuildingGenerationModalOptions.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FBuildingGenerationModalOptions *************************************

// ********** Begin ScriptStruct FParcelsGenerationModalOptions ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FParcelsGenerationModalOptions_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FParcelsGenerationModalOptions>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FParcelsGenerationModalOptions); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAccepted_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapPointsToLandscape_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomizerClass_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FParcelsGenerationModalOptions constinit property declarations ****
	static void NewProp_bAccepted_SetBit(void* Obj)
	{
		((FParcelsGenerationModalOptions*)Obj)->bAccepted = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccepted;
	static void NewProp_bSnapPointsToLandscape_SetBit(void* Obj)
	{
		((FParcelsGenerationModalOptions*)Obj)->bSnapPointsToLandscape = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapPointsToLandscape;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CustomizerClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FParcelsGenerationModalOptions constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParcelsGenerationModalOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FParcelsGenerationModalOptions Property Definitions ***************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAccepted = { "bAccepted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FParcelsGenerationModalOptions), &UHT_STATICS::NewProp_bAccepted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAccepted_MetaData), NewProp_bAccepted_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSnapPointsToLandscape = { "bSnapPointsToLandscape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FParcelsGenerationModalOptions), &UHT_STATICS::NewProp_bSnapPointsToLandscape_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapPointsToLandscape_MetaData), NewProp_bSnapPointsToLandscape_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_CustomizerClass = { "CustomizerClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(FParcelsGenerationModalOptions, CustomizerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UStreetMapImportCustomizerBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomizerClass_MetaData), NewProp_CustomizerClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAccepted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSnapPointsToLandscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomizerClass,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FParcelsGenerationModalOptions Property Definitions *****************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"ParcelsGenerationModalOptions",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FParcelsGenerationModalOptions>(),
	alignof(FParcelsGenerationModalOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FParcelsGenerationModalOptions;
UScriptStruct* Z_Construct_UScriptStruct_FParcelsGenerationModalOptions(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FParcelsGenerationModalOptions.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FParcelsGenerationModalOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParcelsGenerationModalOptions, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("ParcelsGenerationModalOptions"));
		}
		return Z_Registration_Info_UScriptStruct_FParcelsGenerationModalOptions.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FParcelsGenerationModalOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FParcelsGenerationModalOptions.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FParcelsGenerationModalOptions.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FParcelsGenerationModalOptions **************************************

// ********** Begin Class UTwinBLDLandscapeImportOptions *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UTwinBLDLandscapeImportOptions_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TwinBLDGenerationUtils.h" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeGenerationParameters_MetaData[] = {
		{ "Category", "Landscape Import" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetupPCG_MetaData[] = {
		{ "Category", "Landscape Import" },
		{ "DisplayName", "Set up PCG" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimePCG_MetaData[] = {
		{ "AllowedClasses", "/Script/PCG.PCGGraphInterface" },
		{ "Category", "Landscape Import" },
		{ "DisplayName", "Runtime PCG(spawned as the player moves around)" },
		{ "EditCondition", "bSetupPCG" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticPCG_MetaData[] = {
		{ "AllowedClasses", "/Script/PCG.PCGGraphInterface" },
		{ "Category", "Landscape Import" },
		{ "DisplayName", "Static PCG(saved permanently in your world(, like cliffs and trees)" },
		{ "EditCondition", "bSetupPCG" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTwinBLDLandscapeImportOptions constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandscapeGenerationParameters;
	static void NewProp_bSetupPCG_SetBit(void* Obj)
	{
		((UTwinBLDLandscapeImportOptions*)Obj)->bSetupPCG = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupPCG;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimePCG;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticPCG;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UTwinBLDLandscapeImportOptions constinit property declarations *************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinBLDLandscapeImportOptions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UTwinBLDLandscapeImportOptions Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LandscapeGenerationParameters = { "LandscapeGenerationParameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDLandscapeImportOptions, LandscapeGenerationParameters), Z_Construct_UScriptStruct_FLandscapeParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeGenerationParameters_MetaData), NewProp_LandscapeGenerationParameters_MetaData) }; // bc2d0e744d6f25e8713eaa9dc3343db4af1e2c88
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSetupPCG = { "bSetupPCG", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UTwinBLDLandscapeImportOptions), &UHT_STATICS::NewProp_bSetupPCG_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetupPCG_MetaData), NewProp_bSetupPCG_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RuntimePCG = { "RuntimePCG", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDLandscapeImportOptions, RuntimePCG), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimePCG_MetaData), NewProp_RuntimePCG_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StaticPCG = { "StaticPCG", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLDLandscapeImportOptions, StaticPCG), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticPCG_MetaData), NewProp_StaticPCG_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapeGenerationParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSetupPCG,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RuntimePCG,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StaticPCG,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UTwinBLDLandscapeImportOptions Property Definitions ************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UTwinBLDLandscapeImportOptions,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UTwinBLDLandscapeImportOptions;
UClass* Z_Construct_UClass_UTwinBLDLandscapeImportOptions(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UTwinBLDLandscapeImportOptions;
		if (!Z_Registration_Info_UClass_UTwinBLDLandscapeImportOptions.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("TwinBLDLandscapeImportOptions"),
				Z_Registration_Info_UClass_UTwinBLDLandscapeImportOptions.InnerSingleton,
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
		return Z_Registration_Info_UClass_UTwinBLDLandscapeImportOptions.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UTwinBLDLandscapeImportOptions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTwinBLDLandscapeImportOptions.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UTwinBLDLandscapeImportOptions.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTwinBLDLandscapeImportOptions);
UTwinBLDLandscapeImportOptions::~UTwinBLDLandscapeImportOptions() {}
// ********** End Class UTwinBLDLandscapeImportOptions *********************************************

// ********** Begin Class UTwinBLDGenerationUtils Function EnableLandscapeSplineMirroringAndSnapRoads 
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDGenerationUtils_EnableLandscapeSplineMirroringAndSnapRoads_Statics
struct UHT_STATICS
{
	struct TwinBLDGenerationUtils_eventEnableLandscapeSplineMirroringAndSnapRoads_Parms
	{
		const UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnableLandscapeSplineMirroringAndSnapRoads constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnableLandscapeSplineMirroringAndSnapRoads constinit property declarations 
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnableLandscapeSplineMirroringAndSnapRoads Property Definitions *******
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDGenerationUtils_eventEnableLandscapeSplineMirroringAndSnapRoads_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function EnableLandscapeSplineMirroringAndSnapRoads Property Definitions *********
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDGenerationUtils, nullptr, "EnableLandscapeSplineMirroringAndSnapRoads", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDGenerationUtils_eventEnableLandscapeSplineMirroringAndSnapRoads_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDGenerationUtils_eventEnableLandscapeSplineMirroringAndSnapRoads_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDGenerationUtils_EnableLandscapeSplineMirroringAndSnapRoads(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDGenerationUtils::execEnableLandscapeSplineMirroringAndSnapRoads)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UTwinBLDGenerationUtils::EnableLandscapeSplineMirroringAndSnapRoads(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDGenerationUtils Function EnableLandscapeSplineMirroringAndSnapRoads 

// ********** Begin Class UTwinBLDGenerationUtils Function HasBuildingActors ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDGenerationUtils_HasBuildingActors_Statics
struct UHT_STATICS
{
	struct TwinBLDGenerationUtils_eventHasBuildingActors_Parms
	{
		const UObject* WorldContextObject;
		TSubclassOf<AActor> BuildingClass;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasBuildingActors constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BuildingClass;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwinBLDGenerationUtils_eventHasBuildingActors_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasBuildingActors constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasBuildingActors Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDGenerationUtils_eventHasBuildingActors_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_BuildingClass = { "BuildingClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDGenerationUtils_eventHasBuildingActors_Parms, BuildingClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TwinBLDGenerationUtils_eventHasBuildingActors_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BuildingClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HasBuildingActors Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDGenerationUtils, nullptr, "HasBuildingActors", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDGenerationUtils_eventHasBuildingActors_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDGenerationUtils_eventHasBuildingActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDGenerationUtils_HasBuildingActors(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDGenerationUtils::execHasBuildingActors)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UClass,Z_Param_BuildingClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTwinBLDGenerationUtils::HasBuildingActors(Z_Param_WorldContextObject,Z_Param_BuildingClass);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDGenerationUtils Function HasBuildingActors *************************

// ********** Begin Class UTwinBLDGenerationUtils Function HasLandscapeActorInLevel ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDGenerationUtils_HasLandscapeActorInLevel_Statics
struct UHT_STATICS
{
	struct TwinBLDGenerationUtils_eventHasLandscapeActorInLevel_Parms
	{
		const UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasLandscapeActorInLevel constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwinBLDGenerationUtils_eventHasLandscapeActorInLevel_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasLandscapeActorInLevel constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasLandscapeActorInLevel Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDGenerationUtils_eventHasLandscapeActorInLevel_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TwinBLDGenerationUtils_eventHasLandscapeActorInLevel_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HasLandscapeActorInLevel Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDGenerationUtils, nullptr, "HasLandscapeActorInLevel", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDGenerationUtils_eventHasLandscapeActorInLevel_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDGenerationUtils_eventHasLandscapeActorInLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDGenerationUtils_HasLandscapeActorInLevel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDGenerationUtils::execHasLandscapeActorInLevel)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTwinBLDGenerationUtils::HasLandscapeActorInLevel(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDGenerationUtils Function HasLandscapeActorInLevel ******************

// ********** Begin Class UTwinBLDGenerationUtils Function HasRoadNetworkActor *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDGenerationUtils_HasRoadNetworkActor_Statics
struct UHT_STATICS
{
	struct TwinBLDGenerationUtils_eventHasRoadNetworkActor_Parms
	{
		const UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HasRoadNetworkActor constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwinBLDGenerationUtils_eventHasRoadNetworkActor_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasRoadNetworkActor constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasRoadNetworkActor Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDGenerationUtils_eventHasRoadNetworkActor_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TwinBLDGenerationUtils_eventHasRoadNetworkActor_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HasRoadNetworkActor Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDGenerationUtils, nullptr, "HasRoadNetworkActor", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDGenerationUtils_eventHasRoadNetworkActor_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDGenerationUtils_eventHasRoadNetworkActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDGenerationUtils_HasRoadNetworkActor(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDGenerationUtils::execHasRoadNetworkActor)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UTwinBLDGenerationUtils::HasRoadNetworkActor(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDGenerationUtils Function HasRoadNetworkActor ***********************

// ********** Begin Class UTwinBLDGenerationUtils Function ImportLandscapeWithDialog ***************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDGenerationUtils_ImportLandscapeWithDialog_Statics
struct UHT_STATICS
{
	struct TwinBLDGenerationUtils_eventImportLandscapeWithDialog_Parms
	{
		FBox2D Coordinates;
		bool bAccepted;
		UTwinBLDLandscapeImportOptions* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ImportLandscapeWithDialog constinit property declarations *************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinates;
	static void NewProp_bAccepted_SetBit(void* Obj)
	{
		((TwinBLDGenerationUtils_eventImportLandscapeWithDialog_Parms*)Obj)->bAccepted = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccepted;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ImportLandscapeWithDialog constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ImportLandscapeWithDialog Property Definitions ************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDGenerationUtils_eventImportLandscapeWithDialog_Parms, Coordinates), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coordinates_MetaData), NewProp_Coordinates_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAccepted = { "bAccepted", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TwinBLDGenerationUtils_eventImportLandscapeWithDialog_Parms), &UHT_STATICS::NewProp_bAccepted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDGenerationUtils_eventImportLandscapeWithDialog_Parms, ReturnValue), Z_Construct_UClass_UTwinBLDLandscapeImportOptions, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Coordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAccepted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ImportLandscapeWithDialog Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDGenerationUtils, nullptr, "ImportLandscapeWithDialog", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDGenerationUtils_eventImportLandscapeWithDialog_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDGenerationUtils_eventImportLandscapeWithDialog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDGenerationUtils_ImportLandscapeWithDialog(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDGenerationUtils::execImportLandscapeWithDialog)
{
	P_GET_STRUCT_REF(FBox2D,Z_Param_Out_Coordinates);
	P_GET_UBOOL_REF(Z_Param_Out_bAccepted);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTwinBLDLandscapeImportOptions**)Z_Param__Result=UTwinBLDGenerationUtils::ImportLandscapeWithDialog(Z_Param_Out_Coordinates,Z_Param_Out_bAccepted);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDGenerationUtils Function ImportLandscapeWithDialog *****************

// ********** Begin Class UTwinBLDGenerationUtils Function SetupLandscapePCG ***********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDGenerationUtils_SetupLandscapePCG_Statics
struct UHT_STATICS
{
	struct TwinBLDGenerationUtils_eventSetupLandscapePCG_Parms
	{
		ALandscape* SpawnedLandscape;
		bool bSetupPCG;
		UObject* RuntimePCG;
		UObject* StaticPCG;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetupLandscapePCG constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedLandscape;
	static void NewProp_bSetupPCG_SetBit(void* Obj)
	{
		((TwinBLDGenerationUtils_eventSetupLandscapePCG_Parms*)Obj)->bSetupPCG = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetupPCG;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimePCG;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticPCG;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetupLandscapePCG constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetupLandscapePCG Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SpawnedLandscape = { "SpawnedLandscape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDGenerationUtils_eventSetupLandscapePCG_Parms, SpawnedLandscape), Z_Construct_UClass_ALandscape, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSetupPCG = { "bSetupPCG", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TwinBLDGenerationUtils_eventSetupLandscapePCG_Parms), &UHT_STATICS::NewProp_bSetupPCG_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RuntimePCG = { "RuntimePCG", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDGenerationUtils_eventSetupLandscapePCG_Parms, RuntimePCG), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StaticPCG = { "StaticPCG", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDGenerationUtils_eventSetupLandscapePCG_Parms, StaticPCG), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SpawnedLandscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSetupPCG,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RuntimePCG,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StaticPCG,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetupLandscapePCG Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDGenerationUtils, nullptr, "SetupLandscapePCG", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDGenerationUtils_eventSetupLandscapePCG_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDGenerationUtils_eventSetupLandscapePCG_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDGenerationUtils_SetupLandscapePCG(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDGenerationUtils::execSetupLandscapePCG)
{
	P_GET_OBJECT(ALandscape,Z_Param_SpawnedLandscape);
	P_GET_UBOOL(Z_Param_bSetupPCG);
	P_GET_OBJECT(UObject,Z_Param_RuntimePCG);
	P_GET_OBJECT(UObject,Z_Param_StaticPCG);
	P_FINISH;
	P_NATIVE_BEGIN;
	UTwinBLDGenerationUtils::SetupLandscapePCG(Z_Param_SpawnedLandscape,Z_Param_bSetupPCG,Z_Param_RuntimePCG,Z_Param_StaticPCG);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDGenerationUtils Function SetupLandscapePCG *************************

// ********** Begin Class UTwinBLDGenerationUtils Function ShowBuildingGenerationOptionsModal ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDGenerationUtils_ShowBuildingGenerationOptionsModal_Statics
struct UHT_STATICS
{
	struct TwinBLDGenerationUtils_eventShowBuildingGenerationOptionsModal_Parms
	{
		bool bHasLandscapeActor;
		bool bHasExistingBuildings;
		bool bHasRoadNetwork;
		FBuildingGenerationModalOptions ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ShowBuildingGenerationOptionsModal constinit property declarations ****
	static void NewProp_bHasLandscapeActor_SetBit(void* Obj)
	{
		((TwinBLDGenerationUtils_eventShowBuildingGenerationOptionsModal_Parms*)Obj)->bHasLandscapeActor = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasLandscapeActor;
	static void NewProp_bHasExistingBuildings_SetBit(void* Obj)
	{
		((TwinBLDGenerationUtils_eventShowBuildingGenerationOptionsModal_Parms*)Obj)->bHasExistingBuildings = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasExistingBuildings;
	static void NewProp_bHasRoadNetwork_SetBit(void* Obj)
	{
		((TwinBLDGenerationUtils_eventShowBuildingGenerationOptionsModal_Parms*)Obj)->bHasRoadNetwork = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRoadNetwork;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShowBuildingGenerationOptionsModal constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShowBuildingGenerationOptionsModal Property Definitions ***************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHasLandscapeActor = { "bHasLandscapeActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TwinBLDGenerationUtils_eventShowBuildingGenerationOptionsModal_Parms), &UHT_STATICS::NewProp_bHasLandscapeActor_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHasExistingBuildings = { "bHasExistingBuildings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TwinBLDGenerationUtils_eventShowBuildingGenerationOptionsModal_Parms), &UHT_STATICS::NewProp_bHasExistingBuildings_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHasRoadNetwork = { "bHasRoadNetwork", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TwinBLDGenerationUtils_eventShowBuildingGenerationOptionsModal_Parms), &UHT_STATICS::NewProp_bHasRoadNetwork_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDGenerationUtils_eventShowBuildingGenerationOptionsModal_Parms, ReturnValue), Z_Construct_UScriptStruct_FBuildingGenerationModalOptions, METADATA_PARAMS(0, nullptr) }; // 6161e30e74310a41ee4e7849f2683005b3488cde
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHasLandscapeActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHasExistingBuildings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHasRoadNetwork,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ShowBuildingGenerationOptionsModal Property Definitions *****************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDGenerationUtils, nullptr, "ShowBuildingGenerationOptionsModal", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDGenerationUtils_eventShowBuildingGenerationOptionsModal_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDGenerationUtils_eventShowBuildingGenerationOptionsModal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDGenerationUtils_ShowBuildingGenerationOptionsModal(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDGenerationUtils::execShowBuildingGenerationOptionsModal)
{
	P_GET_UBOOL(Z_Param_bHasLandscapeActor);
	P_GET_UBOOL(Z_Param_bHasExistingBuildings);
	P_GET_UBOOL(Z_Param_bHasRoadNetwork);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBuildingGenerationModalOptions*)Z_Param__Result=UTwinBLDGenerationUtils::ShowBuildingGenerationOptionsModal(Z_Param_bHasLandscapeActor,Z_Param_bHasExistingBuildings,Z_Param_bHasRoadNetwork);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDGenerationUtils Function ShowBuildingGenerationOptionsModal ********

// ********** Begin Class UTwinBLDGenerationUtils Function ShowGenerateRoadStripsOptionsModal ******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDGenerationUtils_ShowGenerateRoadStripsOptionsModal_Statics
struct UHT_STATICS
{
	struct TwinBLDGenerationUtils_eventShowGenerateRoadStripsOptionsModal_Parms
	{
		bool bHasLandscapeActor;
		bool bHasExistingRoads;
		FStreetMapRoadStripSettings InitialSettings;
		FRoadStripGenerationOptions ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ShowGenerateRoadStripsOptionsModal constinit property declarations ****
	static void NewProp_bHasLandscapeActor_SetBit(void* Obj)
	{
		((TwinBLDGenerationUtils_eventShowGenerateRoadStripsOptionsModal_Parms*)Obj)->bHasLandscapeActor = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasLandscapeActor;
	static void NewProp_bHasExistingRoads_SetBit(void* Obj)
	{
		((TwinBLDGenerationUtils_eventShowGenerateRoadStripsOptionsModal_Parms*)Obj)->bHasExistingRoads = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasExistingRoads;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShowGenerateRoadStripsOptionsModal constinit property declarations ******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShowGenerateRoadStripsOptionsModal Property Definitions ***************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHasLandscapeActor = { "bHasLandscapeActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TwinBLDGenerationUtils_eventShowGenerateRoadStripsOptionsModal_Parms), &UHT_STATICS::NewProp_bHasLandscapeActor_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHasExistingRoads = { "bHasExistingRoads", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TwinBLDGenerationUtils_eventShowGenerateRoadStripsOptionsModal_Parms), &UHT_STATICS::NewProp_bHasExistingRoads_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InitialSettings = { "InitialSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDGenerationUtils_eventShowGenerateRoadStripsOptionsModal_Parms, InitialSettings), Z_Construct_UScriptStruct_FStreetMapRoadStripSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialSettings_MetaData), NewProp_InitialSettings_MetaData) }; // b801dcef2552d12a234bd4425015d26813a95616
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDGenerationUtils_eventShowGenerateRoadStripsOptionsModal_Parms, ReturnValue), Z_Construct_UScriptStruct_FRoadStripGenerationOptions, METADATA_PARAMS(0, nullptr) }; // c741fbc2817b692ebafe82b487b69b1a16ef6807
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHasLandscapeActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHasExistingRoads,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InitialSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ShowGenerateRoadStripsOptionsModal Property Definitions *****************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDGenerationUtils, nullptr, "ShowGenerateRoadStripsOptionsModal", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDGenerationUtils_eventShowGenerateRoadStripsOptionsModal_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDGenerationUtils_eventShowGenerateRoadStripsOptionsModal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDGenerationUtils_ShowGenerateRoadStripsOptionsModal(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDGenerationUtils::execShowGenerateRoadStripsOptionsModal)
{
	P_GET_UBOOL(Z_Param_bHasLandscapeActor);
	P_GET_UBOOL(Z_Param_bHasExistingRoads);
	P_GET_STRUCT_REF(FStreetMapRoadStripSettings,Z_Param_Out_InitialSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRoadStripGenerationOptions*)Z_Param__Result=UTwinBLDGenerationUtils::ShowGenerateRoadStripsOptionsModal(Z_Param_bHasLandscapeActor,Z_Param_bHasExistingRoads,Z_Param_Out_InitialSettings);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDGenerationUtils Function ShowGenerateRoadStripsOptionsModal ********

// ********** Begin Class UTwinBLDGenerationUtils Function ShowParcelsGenerationOptionsModal *******
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLDGenerationUtils_ShowParcelsGenerationOptionsModal_Statics
struct UHT_STATICS
{
	struct TwinBLDGenerationUtils_eventShowParcelsGenerationOptionsModal_Parms
	{
		bool bHasLandscapeActor;
		FParcelsGenerationModalOptions ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "TwinBLD" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ShowParcelsGenerationOptionsModal constinit property declarations *****
	static void NewProp_bHasLandscapeActor_SetBit(void* Obj)
	{
		((TwinBLDGenerationUtils_eventShowParcelsGenerationOptionsModal_Parms*)Obj)->bHasLandscapeActor = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasLandscapeActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ShowParcelsGenerationOptionsModal constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ShowParcelsGenerationOptionsModal Property Definitions ****************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHasLandscapeActor = { "bHasLandscapeActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TwinBLDGenerationUtils_eventShowParcelsGenerationOptionsModal_Parms), &UHT_STATICS::NewProp_bHasLandscapeActor_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLDGenerationUtils_eventShowParcelsGenerationOptionsModal_Parms, ReturnValue), Z_Construct_UScriptStruct_FParcelsGenerationModalOptions, METADATA_PARAMS(0, nullptr) }; // 4c7764a7d545abb6ca7c8e9c009de51fb6fc692d
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHasLandscapeActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ShowParcelsGenerationOptionsModal Property Definitions ******************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLDGenerationUtils, nullptr, "ShowParcelsGenerationOptionsModal", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLDGenerationUtils_eventShowParcelsGenerationOptionsModal_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLDGenerationUtils_eventShowParcelsGenerationOptionsModal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLDGenerationUtils_ShowParcelsGenerationOptionsModal(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLDGenerationUtils::execShowParcelsGenerationOptionsModal)
{
	P_GET_UBOOL(Z_Param_bHasLandscapeActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FParcelsGenerationModalOptions*)Z_Param__Result=UTwinBLDGenerationUtils::ShowParcelsGenerationOptionsModal(Z_Param_bHasLandscapeActor);
	P_NATIVE_END;
}
// ********** End Class UTwinBLDGenerationUtils Function ShowParcelsGenerationOptionsModal *********

// ********** Begin Class UTwinBLDGenerationUtils **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UTwinBLDGenerationUtils_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * Shared TwinBLD editor utilities for generation option dialogs and related level helpers.\n * Replaces the former UTwinBLDViewportWidget utility host.\n */" },
		{ "IncludePath", "TwinBLDGenerationUtils.h" },
		{ "ModuleRelativePath", "Public/TwinBLDGenerationUtils.h" },
		{ "ToolTip", "Shared TwinBLD editor utilities for generation option dialogs and related level helpers.\nReplaces the former UTwinBLDViewportWidget utility host." },
	};
#endif // WITH_METADATA

// ********** Begin Class UTwinBLDGenerationUtils constinit property declarations ******************
// ********** End Class UTwinBLDGenerationUtils constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("EnableLandscapeSplineMirroringAndSnapRoads"), .Pointer = &UTwinBLDGenerationUtils::execEnableLandscapeSplineMirroringAndSnapRoads },
		{ .NameUTF8 = UTF8TEXT("HasBuildingActors"), .Pointer = &UTwinBLDGenerationUtils::execHasBuildingActors },
		{ .NameUTF8 = UTF8TEXT("HasLandscapeActorInLevel"), .Pointer = &UTwinBLDGenerationUtils::execHasLandscapeActorInLevel },
		{ .NameUTF8 = UTF8TEXT("HasRoadNetworkActor"), .Pointer = &UTwinBLDGenerationUtils::execHasRoadNetworkActor },
		{ .NameUTF8 = UTF8TEXT("ImportLandscapeWithDialog"), .Pointer = &UTwinBLDGenerationUtils::execImportLandscapeWithDialog },
		{ .NameUTF8 = UTF8TEXT("SetupLandscapePCG"), .Pointer = &UTwinBLDGenerationUtils::execSetupLandscapePCG },
		{ .NameUTF8 = UTF8TEXT("ShowBuildingGenerationOptionsModal"), .Pointer = &UTwinBLDGenerationUtils::execShowBuildingGenerationOptionsModal },
		{ .NameUTF8 = UTF8TEXT("ShowGenerateRoadStripsOptionsModal"), .Pointer = &UTwinBLDGenerationUtils::execShowGenerateRoadStripsOptionsModal },
		{ .NameUTF8 = UTF8TEXT("ShowParcelsGenerationOptionsModal"), .Pointer = &UTwinBLDGenerationUtils::execShowParcelsGenerationOptionsModal },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTwinBLDGenerationUtils_EnableLandscapeSplineMirroringAndSnapRoads, "EnableLandscapeSplineMirroringAndSnapRoads" }, // fd92e17d00be1b7b41db5e3c58636e493a7b8555
		{ &Z_Construct_UFunction_UTwinBLDGenerationUtils_HasBuildingActors, "HasBuildingActors" }, // 24f76cfaf0f48a8dcf8b37d5819949b78d0682af
		{ &Z_Construct_UFunction_UTwinBLDGenerationUtils_HasLandscapeActorInLevel, "HasLandscapeActorInLevel" }, // a5be7380d0cef4ee68a15900ce7ef2b6ff231970
		{ &Z_Construct_UFunction_UTwinBLDGenerationUtils_HasRoadNetworkActor, "HasRoadNetworkActor" }, // fc478b8b58e5153f52a8c2d9e7c87f7473667501
		{ &Z_Construct_UFunction_UTwinBLDGenerationUtils_ImportLandscapeWithDialog, "ImportLandscapeWithDialog" }, // 809d633b197fc3c4681ee08dbdd892959f6239e0
		{ &Z_Construct_UFunction_UTwinBLDGenerationUtils_SetupLandscapePCG, "SetupLandscapePCG" }, // 6f6c46eb648648972c26c4f9640fc6d1e609e197
		{ &Z_Construct_UFunction_UTwinBLDGenerationUtils_ShowBuildingGenerationOptionsModal, "ShowBuildingGenerationOptionsModal" }, // 6d7652fc1882e8bc589f657aabcbca5d265da9a5
		{ &Z_Construct_UFunction_UTwinBLDGenerationUtils_ShowGenerateRoadStripsOptionsModal, "ShowGenerateRoadStripsOptionsModal" }, // 1815740967efa44310494491f570128d95ac79b0
		{ &Z_Construct_UFunction_UTwinBLDGenerationUtils_ShowParcelsGenerationOptionsModal, "ShowParcelsGenerationOptionsModal" }, // 770069932afc4f2ae2dd91b1e86617c71622ca88
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinBLDGenerationUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UTwinBLDGenerationUtils,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UTwinBLDGenerationUtils_StaticRegisterNativesUTwinBLDGenerationUtils()
{
	UClass* Class = UTwinBLDGenerationUtils::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTwinBLDGenerationUtils;
UClass* Z_Construct_UClass_UTwinBLDGenerationUtils(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UTwinBLDGenerationUtils;
		if (!Z_Registration_Info_UClass_UTwinBLDGenerationUtils.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("TwinBLDGenerationUtils"),
				Z_Registration_Info_UClass_UTwinBLDGenerationUtils.InnerSingleton,
				UTwinBLDGenerationUtils_StaticRegisterNativesUTwinBLDGenerationUtils,
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
		return Z_Registration_Info_UClass_UTwinBLDGenerationUtils.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UTwinBLDGenerationUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTwinBLDGenerationUtils.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UTwinBLDGenerationUtils.OuterSingleton;
}
#undef UHT_STATICS
UTwinBLDGenerationUtils::UTwinBLDGenerationUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTwinBLDGenerationUtils);
UTwinBLDGenerationUtils::~UTwinBLDGenerationUtils() {}
// ********** End Class UTwinBLDGenerationUtils ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h__Script_TwinBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FRoadStripGenerationOptions, Z_Construct_UScriptStruct_FRoadStripGenerationOptions_Statics::NewStructOps, TEXT("RoadStripGenerationOptions"),&Z_Registration_Info_UScriptStruct_FRoadStripGenerationOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadStripGenerationOptions), 3342990274U) },
		{ Z_Construct_UScriptStruct_FBuildingGenerationModalOptions, Z_Construct_UScriptStruct_FBuildingGenerationModalOptions_Statics::NewStructOps, TEXT("BuildingGenerationModalOptions"),&Z_Registration_Info_UScriptStruct_FBuildingGenerationModalOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuildingGenerationModalOptions), 1633805070U) },
		{ Z_Construct_UScriptStruct_FParcelsGenerationModalOptions, Z_Construct_UScriptStruct_FParcelsGenerationModalOptions_Statics::NewStructOps, TEXT("ParcelsGenerationModalOptions"),&Z_Registration_Info_UScriptStruct_FParcelsGenerationModalOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParcelsGenerationModalOptions), 1282892967U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStreetMapRoadStripDialogSettings, TEXT("UStreetMapRoadStripDialogSettings"), &Z_Registration_Info_UClass_UStreetMapRoadStripDialogSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStreetMapRoadStripDialogSettings), 2580394082U) },
		{ Z_Construct_UClass_UTwinBLDGenerationDialogSettings, TEXT("UTwinBLDGenerationDialogSettings"), &Z_Registration_Info_UClass_UTwinBLDGenerationDialogSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTwinBLDGenerationDialogSettings), 1619733419U) },
		{ Z_Construct_UClass_UTwinBLDReplicityRoadDialogSettings, TEXT("UTwinBLDReplicityRoadDialogSettings"), &Z_Registration_Info_UClass_UTwinBLDReplicityRoadDialogSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTwinBLDReplicityRoadDialogSettings), 2054250828U) },
		{ Z_Construct_UClass_UTwinBLDLandscapeImportOptions, TEXT("UTwinBLDLandscapeImportOptions"), &Z_Registration_Info_UClass_UTwinBLDLandscapeImportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTwinBLDLandscapeImportOptions), 2793088955U) },
		{ Z_Construct_UClass_UTwinBLDGenerationUtils, TEXT("UTwinBLDGenerationUtils"), &Z_Registration_Info_UClass_UTwinBLDGenerationUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTwinBLDGenerationUtils), 350053555U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLDGenerationUtils_h__Script_TwinBLDEditor_0dd1277b9d93ecf6eb21ee09add8c31b2b57326b{
	TEXT("/Script/TwinBLDEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
