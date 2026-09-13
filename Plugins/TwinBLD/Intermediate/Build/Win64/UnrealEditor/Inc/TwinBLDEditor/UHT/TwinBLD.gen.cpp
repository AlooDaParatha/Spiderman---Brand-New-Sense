// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TwinBLD.h"
#include "StreetMap/StreetMap.h"
#include "TwinBLDTypes.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeTwinBLD() {}

// ********** Begin Cross Module References ********************************************************
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityObject(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FBuildingsGenerationParameters(ETypeConstructPhase);
TWINBLDEDITOR_API UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnSpawnBuildingsComplete__DelegateSignature(ETypeConstructPhase);
TWINBLDEDITOR_API UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnSpawnRoadsComplete__DelegateSignature(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FRoadsGenerationParameters(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapBuilding(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStreetMapRoad(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLD(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_ATwinBLDLevelSettings(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDLevelTileGenerationRecord(ETypeConstructPhase);
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDParameters(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UStreetMap(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UStreetMapImportCustomizerBase(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_UTwinBLD(ETypeConstructPhase);
TWINBLDEDITOR_API UClass* Z_Construct_UClass_ATwinBLDLevelSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FOnSpawnBuildingsComplete *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_TwinBLDEditor_OnSpawnBuildingsComplete__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_TwinBLDEditor_eventOnSpawnBuildingsComplete_Parms
	{
		TArray<AActor*> Buildings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Buildings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSpawnBuildingsComplete constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Buildings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Buildings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnSpawnBuildingsComplete constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnSpawnBuildingsComplete Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Buildings_Inner = { "Buildings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Buildings = { "Buildings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TwinBLDEditor_eventOnSpawnBuildingsComplete_Parms, Buildings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Buildings_MetaData), NewProp_Buildings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Buildings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Buildings,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnSpawnBuildingsComplete Property Definitions **************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor, nullptr, "OnSpawnBuildingsComplete__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_TwinBLDEditor_eventOnSpawnBuildingsComplete_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_TwinBLDEditor_eventOnSpawnBuildingsComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnSpawnBuildingsComplete__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnSpawnBuildingsComplete ***********************************************

// ********** Begin Delegate FOnSpawnRoadsComplete *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_TwinBLDEditor_OnSpawnRoadsComplete__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_TwinBLDEditor_eventOnSpawnRoadsComplete_Parms
	{
		TArray<AActor*> Roads;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Roads_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnSpawnRoadsComplete constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Roads_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Roads;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnSpawnRoadsComplete constinit property declarations *******************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnSpawnRoadsComplete Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Roads_Inner = { "Roads", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Roads = { "Roads", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TwinBLDEditor_eventOnSpawnRoadsComplete_Parms, Roads), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Roads_MetaData), NewProp_Roads_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Roads_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Roads,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FOnSpawnRoadsComplete Property Definitions ******************************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor, nullptr, "OnSpawnRoadsComplete__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_TwinBLDEditor_eventOnSpawnRoadsComplete_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_TwinBLDEditor_eventOnSpawnRoadsComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TwinBLDEditor_OnSpawnRoadsComplete__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FOnSpawnRoadsComplete ***************************************************

// ********** Begin Class ATwinBLDLevelSettings ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ATwinBLDLevelSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TwinBLD.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TwinBLD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeoOrigin_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Public/TwinBLD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasGeoOrigin_MetaData[] = {
		{ "Category", "Landscape" },
		{ "Comment", "/**\n\x09 * True once GeoOrigin has been explicitly set for this level.\n\x09 * Distinguishes a real (0,0) origin from the legacy \"unset\" default.\n\x09 * Legacy actors with a nonzero GeoOrigin are treated as initialized on read.\n\x09 */" },
		{ "ModuleRelativePath", "Public/TwinBLD.h" },
		{ "ToolTip", "True once GeoOrigin has been explicitly set for this level.\nDistinguishes a real (0,0) origin from the legacy \"unset\" default.\nLegacy actors with a nonzero GeoOrigin are treated as initialized on read." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeoTransformRevision_MetaData[] = {
		{ "Category", "Landscape" },
		{ "Comment", "/** Incremented whenever GeoOrigin is applied so generated content can be marked geospatially stale. */" },
		{ "ModuleRelativePath", "Public/TwinBLD.h" },
		{ "ToolTip", "Incremented whenever GeoOrigin is applied so generated content can be marked geospatially stale." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetStreetMap_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Public/TwinBLD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileGenerationRecords_MetaData[] = {
		{ "Category", "TwinBLD|Import" },
		{ "Comment", "/** Per-source, per-tile record of content generated into this level via TwinBLD Import Map. */" },
		{ "ModuleRelativePath", "Public/TwinBLD.h" },
		{ "ToolTip", "Per-source, per-tile record of content generated into this level via TwinBLD Import Map." },
	};
#endif // WITH_METADATA

// ********** Begin Class ATwinBLDLevelSettings constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeoOrigin;
	static void NewProp_bHasGeoOrigin_SetBit(void* Obj)
	{
		((ATwinBLDLevelSettings*)Obj)->bHasGeoOrigin = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasGeoOrigin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GeoTransformRevision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetStreetMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileGenerationRecords_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TileGenerationRecords;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ATwinBLDLevelSettings constinit property declarations **********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATwinBLDLevelSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ATwinBLDLevelSettings Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GeoOrigin = { "GeoOrigin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinBLDLevelSettings, GeoOrigin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeoOrigin_MetaData), NewProp_GeoOrigin_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bHasGeoOrigin = { "bHasGeoOrigin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ATwinBLDLevelSettings), &UHT_STATICS::NewProp_bHasGeoOrigin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasGeoOrigin_MetaData), NewProp_bHasGeoOrigin_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_GeoTransformRevision = { "GeoTransformRevision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinBLDLevelSettings, GeoTransformRevision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeoTransformRevision_MetaData), NewProp_GeoTransformRevision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TargetStreetMap = { "TargetStreetMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinBLDLevelSettings, TargetStreetMap), Z_Construct_UClass_UStreetMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetStreetMap_MetaData), NewProp_TargetStreetMap_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TileGenerationRecords_Inner = { "TileGenerationRecords", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTwinBLDLevelTileGenerationRecord, METADATA_PARAMS(0, nullptr) }; // c29764d60affb629793896d8897d08d0f737d758
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_TileGenerationRecords = { "TileGenerationRecords", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ATwinBLDLevelSettings, TileGenerationRecords), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileGenerationRecords_MetaData), NewProp_TileGenerationRecords_MetaData) }; // c29764d60affb629793896d8897d08d0f737d758
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeoOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bHasGeoOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeoTransformRevision,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TargetStreetMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TileGenerationRecords_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TileGenerationRecords,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ATwinBLDLevelSettings Property Definitions *********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ATwinBLDLevelSettings,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_ATwinBLDLevelSettings;
UClass* Z_Construct_UClass_ATwinBLDLevelSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ATwinBLDLevelSettings;
		if (!Z_Registration_Info_UClass_ATwinBLDLevelSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("TwinBLDLevelSettings"),
				Z_Registration_Info_UClass_ATwinBLDLevelSettings.InnerSingleton,
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
		return Z_Registration_Info_UClass_ATwinBLDLevelSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ATwinBLDLevelSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATwinBLDLevelSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ATwinBLDLevelSettings.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ATwinBLDLevelSettings);
ATwinBLDLevelSettings::~ATwinBLDLevelSettings() {}
// ********** End Class ATwinBLDLevelSettings ******************************************************

// ********** Begin ScriptStruct FBuildingsGenerationParameters ************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FBuildingsGenerationParameters_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FBuildingsGenerationParameters>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FBuildingsGenerationParameters); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwinBLD.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FBuildingsGenerationParameters constinit property declarations ****
// ********** End ScriptStruct FBuildingsGenerationParameters constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildingsGenerationParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"BuildingsGenerationParameters",
	nullptr,
	0,
	DataSizeOf<FBuildingsGenerationParameters>(),
	alignof(FBuildingsGenerationParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBuildingsGenerationParameters;
UScriptStruct* Z_Construct_UScriptStruct_FBuildingsGenerationParameters(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FBuildingsGenerationParameters.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FBuildingsGenerationParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildingsGenerationParameters, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("BuildingsGenerationParameters"));
		}
		return Z_Registration_Info_UScriptStruct_FBuildingsGenerationParameters.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FBuildingsGenerationParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBuildingsGenerationParameters.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FBuildingsGenerationParameters.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FBuildingsGenerationParameters **************************************

// ********** Begin ScriptStruct FRoadsGenerationParameters ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRoadsGenerationParameters_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRoadsGenerationParameters>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRoadsGenerationParameters); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwinBLD.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRoadsGenerationParameters constinit property declarations ********
// ********** End ScriptStruct FRoadsGenerationParameters constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadsGenerationParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"RoadsGenerationParameters",
	nullptr,
	0,
	DataSizeOf<FRoadsGenerationParameters>(),
	alignof(FRoadsGenerationParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRoadsGenerationParameters;
UScriptStruct* Z_Construct_UScriptStruct_FRoadsGenerationParameters(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRoadsGenerationParameters.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRoadsGenerationParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadsGenerationParameters, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("RoadsGenerationParameters"));
		}
		return Z_Registration_Info_UScriptStruct_FRoadsGenerationParameters.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRoadsGenerationParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRoadsGenerationParameters.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRoadsGenerationParameters.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRoadsGenerationParameters ******************************************

// ********** Begin ScriptStruct FTwinBLDParameters ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FTwinBLDParameters_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FTwinBLDParameters>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FTwinBLDParameters); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwinBLD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLevelSettings_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/TwinBLD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSetOrigin_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/TwinBLD.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FTwinBLDParameters constinit property declarations ****************
	static void NewProp_bUseLevelSettings_SetBit(void* Obj)
	{
		((FTwinBLDParameters*)Obj)->bUseLevelSettings = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLevelSettings;
	static void NewProp_bAutoSetOrigin_SetBit(void* Obj)
	{
		((FTwinBLDParameters*)Obj)->bAutoSetOrigin = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSetOrigin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FTwinBLDParameters constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwinBLDParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FTwinBLDParameters Property Definitions ***************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseLevelSettings = { "bUseLevelSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDParameters), &UHT_STATICS::NewProp_bUseLevelSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLevelSettings_MetaData), NewProp_bUseLevelSettings_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAutoSetOrigin = { "bAutoSetOrigin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FTwinBLDParameters), &UHT_STATICS::NewProp_bAutoSetOrigin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoSetOrigin_MetaData), NewProp_bAutoSetOrigin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseLevelSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAutoSetOrigin,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FTwinBLDParameters Property Definitions *****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
	nullptr,
	&NewStructOps,
	"TwinBLDParameters",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FTwinBLDParameters>(),
	alignof(FTwinBLDParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTwinBLDParameters;
UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDParameters(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FTwinBLDParameters.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FTwinBLDParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwinBLDParameters, (UObject*)Z_Construct_UPackage__Script_TwinBLDEditor(ETypeConstructPhase::Outer), TEXT("TwinBLDParameters"));
		}
		return Z_Registration_Info_UScriptStruct_FTwinBLDParameters.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FTwinBLDParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTwinBLDParameters.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FTwinBLDParameters.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FTwinBLDParameters **************************************************

// ********** Begin Class UTwinBLD Function GetStreetMapTransform **********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLD_GetStreetMapTransform_Statics
struct UHT_STATICS
{
	struct TwinBLD_eventGetStreetMapTransform_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/TwinBLD.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetStreetMapTransform constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetStreetMapTransform constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetStreetMapTransform Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLD_eventGetStreetMapTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetStreetMapTransform Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLD, nullptr, "GetStreetMapTransform", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLD_eventGetStreetMapTransform_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLD_eventGetStreetMapTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLD_GetStreetMapTransform(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLD::execGetStreetMapTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetStreetMapTransform();
	P_NATIVE_END;
}
// ********** End Class UTwinBLD Function GetStreetMapTransform ************************************

// ********** Begin Class UTwinBLD Function HandleSpawnBuildingsComplete ***************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLD_HandleSpawnBuildingsComplete_Statics
struct UHT_STATICS
{
	struct TwinBLD_eventHandleSpawnBuildingsComplete_Parms
	{
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLD.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleSpawnBuildingsComplete constinit property declarations **********
	static void NewProp_bSuccess_SetBit(void* Obj)
	{
		((TwinBLD_eventHandleSpawnBuildingsComplete_Parms*)Obj)->bSuccess = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleSpawnBuildingsComplete constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleSpawnBuildingsComplete Property Definitions *********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TwinBLD_eventHandleSpawnBuildingsComplete_Parms), &UHT_STATICS::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HandleSpawnBuildingsComplete Property Definitions ***********************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLD, nullptr, "HandleSpawnBuildingsComplete", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLD_eventHandleSpawnBuildingsComplete_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLD_eventHandleSpawnBuildingsComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLD_HandleSpawnBuildingsComplete(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLD::execHandleSpawnBuildingsComplete)
{
	P_GET_UBOOL(Z_Param_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSpawnBuildingsComplete(Z_Param_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UTwinBLD Function HandleSpawnBuildingsComplete *****************************

// ********** Begin Class UTwinBLD Function HandleSpawnRoadsComplete *******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLD_HandleSpawnRoadsComplete_Statics
struct UHT_STATICS
{
	struct TwinBLD_eventHandleSpawnRoadsComplete_Parms
	{
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/TwinBLD.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleSpawnRoadsComplete constinit property declarations **************
	static void NewProp_bSuccess_SetBit(void* Obj)
	{
		((TwinBLD_eventHandleSpawnRoadsComplete_Parms*)Obj)->bSuccess = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleSpawnRoadsComplete constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleSpawnRoadsComplete Property Definitions *************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TwinBLD_eventHandleSpawnRoadsComplete_Parms), &UHT_STATICS::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HandleSpawnRoadsComplete Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLD, nullptr, "HandleSpawnRoadsComplete", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLD_eventHandleSpawnRoadsComplete_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLD_eventHandleSpawnRoadsComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLD_HandleSpawnRoadsComplete(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLD::execHandleSpawnRoadsComplete)
{
	P_GET_UBOOL(Z_Param_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSpawnRoadsComplete(Z_Param_bSuccess);
	P_NATIVE_END;
}
// ********** End Class UTwinBLD Function HandleSpawnRoadsComplete *********************************

// ********** Begin Class UTwinBLD Function OnPostInitProperties ***********************************
struct TwinBLD_eventOnPostInitProperties_Parms
{
	bool bCDO;
};
static FName NAME_UTwinBLD_OnPostInitProperties = FName(TEXT("OnPostInitProperties"));
void UTwinBLD::OnPostInitProperties(bool bCDO)
{
	TwinBLD_eventOnPostInitProperties_Parms Parms;
	Parms.bCDO=bCDO ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UTwinBLD_OnPostInitProperties);
	ProcessEvent(Func,&Parms);
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLD_OnPostInitProperties_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/TwinBLD.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnPostInitProperties constinit property declarations ******************
	static void NewProp_bCDO_SetBit(void* Obj)
	{
		((TwinBLD_eventOnPostInitProperties_Parms*)Obj)->bCDO = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCDO;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnPostInitProperties constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnPostInitProperties Property Definitions *****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCDO = { "bCDO", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TwinBLD_eventOnPostInitProperties_Parms), &UHT_STATICS::NewProp_bCDO_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCDO,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnPostInitProperties Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLD, nullptr, "OnPostInitProperties", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<TwinBLD_eventOnPostInitProperties_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(TwinBLD_eventOnPostInitProperties_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLD_OnPostInitProperties(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Class UTwinBLD Function OnPostInitProperties *************************************

// ********** Begin Class UTwinBLD Function SetOrigin **********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLD_SetOrigin_Statics
struct UHT_STATICS
{
	struct TwinBLD_eventSetOrigin_Parms
	{
		FVector2D Coordinates;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/TwinBLD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetOrigin constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetOrigin constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetOrigin Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLD_eventSetOrigin_Parms, Coordinates), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coordinates_MetaData), NewProp_Coordinates_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Coordinates,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetOrigin Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLD, nullptr, "SetOrigin", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLD_eventSetOrigin_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLD_eventSetOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLD_SetOrigin(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLD::execSetOrigin)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Coordinates);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOrigin(Z_Param_Out_Coordinates);
	P_NATIVE_END;
}
// ********** End Class UTwinBLD Function SetOrigin ************************************************

// ********** Begin Class UTwinBLD Function SetStreetMap *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLD_SetStreetMap_Statics
struct UHT_STATICS
{
	struct TwinBLD_eventSetStreetMap_Parms
	{
		UStreetMap* InStreetMap;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////\x09\n" },
		{ "ModuleRelativePath", "Public/TwinBLD.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetStreetMap constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InStreetMap;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwinBLD_eventSetStreetMap_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetStreetMap constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetStreetMap Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InStreetMap = { "InStreetMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLD_eventSetStreetMap_Parms, InStreetMap), Z_Construct_UClass_UStreetMap, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(TwinBLD_eventSetStreetMap_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InStreetMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetStreetMap Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLD, nullptr, "SetStreetMap", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLD_eventSetStreetMap_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLD_eventSetStreetMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLD_SetStreetMap(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLD::execSetStreetMap)
{
	P_GET_OBJECT(UStreetMap,Z_Param_InStreetMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetStreetMap(Z_Param_InStreetMap);
	P_NATIVE_END;
}
// ********** End Class UTwinBLD Function SetStreetMap *********************************************

// ********** Begin Class UTwinBLD Function SetStreetMapCustomizer *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLD_SetStreetMapCustomizer_Statics
struct UHT_STATICS
{
	struct TwinBLD_eventSetStreetMapCustomizer_Parms
	{
		UClass* CustomizerClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/TwinBLD.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetStreetMapCustomizer constinit property declarations ****************
	static const UECodeGen_Private::FClassPropertyParams NewProp_CustomizerClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetStreetMapCustomizer constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetStreetMapCustomizer Property Definitions ***************************
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_CustomizerClass = { "CustomizerClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLD_eventSetStreetMapCustomizer_Parms, CustomizerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CustomizerClass,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SetStreetMapCustomizer Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLD, nullptr, "SetStreetMapCustomizer", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLD_eventSetStreetMapCustomizer_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLD_eventSetStreetMapCustomizer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLD_SetStreetMapCustomizer(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLD::execSetStreetMapCustomizer)
{
	P_GET_OBJECT(UClass,Z_Param_CustomizerClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStreetMapCustomizer(Z_Param_CustomizerClass);
	P_NATIVE_END;
}
// ********** End Class UTwinBLD Function SetStreetMapCustomizer ***********************************

// ********** Begin Class UTwinBLD Function SpawnBuildings *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLD_SpawnBuildings_Statics
struct UHT_STATICS
{
	struct TwinBLD_eventSpawnBuildings_Parms
	{
		TArray<FStreetMapBuilding> Buildings;
		FBuildingsGenerationParameters Parameters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/TwinBLD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Buildings_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnBuildings constinit property declarations ************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Buildings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Buildings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpawnBuildings constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpawnBuildings Property Definitions ***********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Buildings_Inner = { "Buildings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStreetMapBuilding, METADATA_PARAMS(0, nullptr) }; // 9c80cd0a6043d885eef18e6aeb7753379022d92d
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Buildings = { "Buildings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLD_eventSpawnBuildings_Parms, Buildings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Buildings_MetaData), NewProp_Buildings_MetaData) }; // 9c80cd0a6043d885eef18e6aeb7753379022d92d
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLD_eventSpawnBuildings_Parms, Parameters), Z_Construct_UScriptStruct_FBuildingsGenerationParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // 31700dd7dcfc56806ed323c5b2e8ae74899fabe3
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Buildings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Buildings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SpawnBuildings Property Definitions *************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLD, nullptr, "SpawnBuildings", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLD_eventSpawnBuildings_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLD_eventSpawnBuildings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLD_SpawnBuildings(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLD::execSpawnBuildings)
{
	P_GET_TARRAY_REF(FStreetMapBuilding,Z_Param_Out_Buildings);
	P_GET_STRUCT_REF(FBuildingsGenerationParameters,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnBuildings(Z_Param_Out_Buildings,Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// ********** End Class UTwinBLD Function SpawnBuildings *******************************************

// ********** Begin Class UTwinBLD Function SpawnRoads *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UTwinBLD_SpawnRoads_Statics
struct UHT_STATICS
{
	struct TwinBLD_eventSpawnRoads_Parms
	{
		TArray<FStreetMapRoad> Roads;
		FRoadsGenerationParameters Parameters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/TwinBLD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Roads_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SpawnRoads constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Roads_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Roads;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SpawnRoads constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SpawnRoads Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Roads_Inner = { "Roads", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStreetMapRoad, METADATA_PARAMS(0, nullptr) }; // 6c8508bd7d96d0a405df0ec09f79a18dcc8f2b44
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Roads = { "Roads", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLD_eventSpawnRoads_Parms, Roads), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Roads_MetaData), NewProp_Roads_MetaData) }; // 6c8508bd7d96d0a405df0ec09f79a18dcc8f2b44
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(TwinBLD_eventSpawnRoads_Parms, Parameters), Z_Construct_UScriptStruct_FRoadsGenerationParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) }; // fb50c264dd8b6e4adc0bc4888d2be6091cff57f2
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Roads_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Roads,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SpawnRoads Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UTwinBLD, nullptr, "SpawnRoads", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::TwinBLD_eventSpawnRoads_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::TwinBLD_eventSpawnRoads_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTwinBLD_SpawnRoads(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UTwinBLD::execSpawnRoads)
{
	P_GET_TARRAY_REF(FStreetMapRoad,Z_Param_Out_Roads);
	P_GET_STRUCT_REF(FRoadsGenerationParameters,Z_Param_Out_Parameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnRoads(Z_Param_Out_Roads,Z_Param_Out_Parameters);
	P_NATIVE_END;
}
// ********** End Class UTwinBLD Function SpawnRoads ***********************************************

// ********** Begin Class UTwinBLD *****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UTwinBLD_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TwinBLD.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TwinBLD.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSpawnBuildingsComplete_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/TwinBLD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSpawnRoadsComplete_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/TwinBLD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwinBLDParameteres_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/TwinBLD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreetMapCustomizer_MetaData[] = {
		{ "Category", "Twin BLD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TwinBLD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreetMap_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/TwinBLD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeoOrigin_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Twin BLD" },
		{ "ModuleRelativePath", "Public/TwinBLD.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTwinBLD constinit property declarations *********************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpawnBuildingsComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpawnRoadsComplete;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TwinBLDParameteres;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StreetMapCustomizer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StreetMap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeoOrigin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UTwinBLD constinit property declarations ***********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetStreetMapTransform"), .Pointer = &UTwinBLD::execGetStreetMapTransform },
		{ .NameUTF8 = UTF8TEXT("HandleSpawnBuildingsComplete"), .Pointer = &UTwinBLD::execHandleSpawnBuildingsComplete },
		{ .NameUTF8 = UTF8TEXT("HandleSpawnRoadsComplete"), .Pointer = &UTwinBLD::execHandleSpawnRoadsComplete },
		{ .NameUTF8 = UTF8TEXT("SetOrigin"), .Pointer = &UTwinBLD::execSetOrigin },
		{ .NameUTF8 = UTF8TEXT("SetStreetMap"), .Pointer = &UTwinBLD::execSetStreetMap },
		{ .NameUTF8 = UTF8TEXT("SetStreetMapCustomizer"), .Pointer = &UTwinBLD::execSetStreetMapCustomizer },
		{ .NameUTF8 = UTF8TEXT("SpawnBuildings"), .Pointer = &UTwinBLD::execSpawnBuildings },
		{ .NameUTF8 = UTF8TEXT("SpawnRoads"), .Pointer = &UTwinBLD::execSpawnRoads },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTwinBLD_GetStreetMapTransform, "GetStreetMapTransform" }, // 44182c353e552305ad171d1027b8ef979b89495e
		{ &Z_Construct_UFunction_UTwinBLD_HandleSpawnBuildingsComplete, "HandleSpawnBuildingsComplete" }, // f66861cda7671eb96a1e52c02f3974befb582b38
		{ &Z_Construct_UFunction_UTwinBLD_HandleSpawnRoadsComplete, "HandleSpawnRoadsComplete" }, // 4e2b97c50221cebed6000f8ea55d1aad9a80d116
		{ &Z_Construct_UFunction_UTwinBLD_OnPostInitProperties, "OnPostInitProperties" }, // 06609b72a426b48bf1ea449cc1beefb820c80c55
		{ &Z_Construct_UFunction_UTwinBLD_SetOrigin, "SetOrigin" }, // fb45050a7d185fb7c65e66161157e52cebbed9d5
		{ &Z_Construct_UFunction_UTwinBLD_SetStreetMap, "SetStreetMap" }, // 9b7c30804ccdd81366c3ca81be0afd20a66dab85
		{ &Z_Construct_UFunction_UTwinBLD_SetStreetMapCustomizer, "SetStreetMapCustomizer" }, // 0717801c7f1dfe30e60d79454306f26e80dbf062
		{ &Z_Construct_UFunction_UTwinBLD_SpawnBuildings, "SpawnBuildings" }, // 97d57819cac066262a54a2d89234e308048d649e
		{ &Z_Construct_UFunction_UTwinBLD_SpawnRoads, "SpawnRoads" }, // 7d65dc5ce0182d5befa1abc912dfbcee34cfe32b
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinBLD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UTwinBLD Property Definitions ********************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnSpawnBuildingsComplete = { "OnSpawnBuildingsComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLD, OnSpawnBuildingsComplete), Z_Construct_UDelegateFunction_TwinBLDEditor_OnSpawnBuildingsComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSpawnBuildingsComplete_MetaData), NewProp_OnSpawnBuildingsComplete_MetaData) }; // 33bbbd02197df95f3e1bc83c9d824bcc9714aa27
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnSpawnRoadsComplete = { "OnSpawnRoadsComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLD, OnSpawnRoadsComplete), Z_Construct_UDelegateFunction_TwinBLDEditor_OnSpawnRoadsComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSpawnRoadsComplete_MetaData), NewProp_OnSpawnRoadsComplete_MetaData) }; // e9f29a0a04765017faeb12630c5252130db9e37a
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TwinBLDParameteres = { "TwinBLDParameteres", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLD, TwinBLDParameteres), Z_Construct_UScriptStruct_FTwinBLDParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwinBLDParameteres_MetaData), NewProp_TwinBLDParameteres_MetaData) }; // 9dbf9a04e8dcc759a535ff96e3a27ef2fd7af092
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StreetMapCustomizer = { "StreetMapCustomizer", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLD, StreetMapCustomizer), Z_Construct_UClass_UStreetMapImportCustomizerBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreetMapCustomizer_MetaData), NewProp_StreetMapCustomizer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_StreetMap = { "StreetMap", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLD, StreetMap), Z_Construct_UClass_UStreetMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreetMap_MetaData), NewProp_StreetMap_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_GeoOrigin = { "GeoOrigin", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UTwinBLD, GeoOrigin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeoOrigin_MetaData), NewProp_GeoOrigin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnSpawnBuildingsComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnSpawnRoadsComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TwinBLDParameteres,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StreetMapCustomizer,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StreetMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_GeoOrigin,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UTwinBLD Property Definitions **********************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UEditorUtilityObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_TwinBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UTwinBLD,
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
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UTwinBLD_StaticRegisterNativesUTwinBLD()
{
	UClass* Class = UTwinBLD::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTwinBLD;
UClass* Z_Construct_UClass_UTwinBLD(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UTwinBLD;
		if (!Z_Registration_Info_UClass_UTwinBLD.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("TwinBLD"),
				Z_Registration_Info_UClass_UTwinBLD.InnerSingleton,
				UTwinBLD_StaticRegisterNativesUTwinBLD,
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
		return Z_Registration_Info_UClass_UTwinBLD.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UTwinBLD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTwinBLD.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UTwinBLD.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTwinBLD);
UTwinBLD::~UTwinBLD() {}
// ********** End Class UTwinBLD *******************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLD_h__Script_TwinBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FBuildingsGenerationParameters, Z_Construct_UScriptStruct_FBuildingsGenerationParameters_Statics::NewStructOps, TEXT("BuildingsGenerationParameters"),&Z_Registration_Info_UScriptStruct_FBuildingsGenerationParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuildingsGenerationParameters), 829427159U) },
		{ Z_Construct_UScriptStruct_FRoadsGenerationParameters, Z_Construct_UScriptStruct_FRoadsGenerationParameters_Statics::NewStructOps, TEXT("RoadsGenerationParameters"),&Z_Registration_Info_UScriptStruct_FRoadsGenerationParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadsGenerationParameters), 4216373860U) },
		{ Z_Construct_UScriptStruct_FTwinBLDParameters, Z_Construct_UScriptStruct_FTwinBLDParameters_Statics::NewStructOps, TEXT("TwinBLDParameters"),&Z_Registration_Info_UScriptStruct_FTwinBLDParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTwinBLDParameters), 2646579716U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATwinBLDLevelSettings, TEXT("ATwinBLDLevelSettings"), &Z_Registration_Info_UClass_ATwinBLDLevelSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATwinBLDLevelSettings), 899234812U) },
		{ Z_Construct_UClass_UTwinBLD, TEXT("UTwinBLD"), &Z_Registration_Info_UClass_UTwinBLD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTwinBLD), 189547273U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_TwinBLD_h__Script_TwinBLDEditor_8462bc1e049a90a2c0296204e2f57d009932ea6c{
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
