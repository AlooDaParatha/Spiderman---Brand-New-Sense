// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConvertBuildings/CityBLDConvertBuildingsSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeCityBLDConvertBuildingsSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase);
CITYBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCityBLDConvertBuildingsOptions(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UCityBLDConvertBuildingsSettings(ETypeConstructPhase);
CITYBLDEDITOR_API UEnum* Z_Construct_UEnum_CityBLDEditor_ECityBLDBuildingConvertMode(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UCityBLDConvertBuildingsSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ECityBLDBuildingConvertMode ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_CityBLDEditor_ECityBLDBuildingConvertMode_Statics
template<> CITYBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECityBLDBuildingConvertMode>()
{
	return Z_Construct_UEnum_CityBLDEditor_ECityBLDBuildingConvertMode(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "MeshPerBuilding.DisplayName", "Mesh for each building" },
		{ "MeshPerBuilding.Name", "ECityBLDBuildingConvertMode::MeshPerBuilding" },
		{ "ModuleRelativePath", "Private/ConvertBuildings/CityBLDConvertBuildingsSettings.h" },
		{ "PrefabPerBuilding.DisplayName", "CityBLDPrefab for each building" },
		{ "PrefabPerBuilding.Name", "ECityBLDBuildingConvertMode::PrefabPerBuilding" },
		{ "SingleMeshForAll.DisplayName", "Single mesh for all selected buildings" },
		{ "SingleMeshForAll.Name", "ECityBLDBuildingConvertMode::SingleMeshForAll" },
		{ "SinglePrefabForAll.DisplayName", "Single CityBLDPrefab for all selected buildings" },
		{ "SinglePrefabForAll.Name", "ECityBLDBuildingConvertMode::SinglePrefabForAll" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECityBLDBuildingConvertMode::SingleMeshForAll", (int64)ECityBLDBuildingConvertMode::SingleMeshForAll },
		{ "ECityBLDBuildingConvertMode::MeshPerBuilding", (int64)ECityBLDBuildingConvertMode::MeshPerBuilding },
		{ "ECityBLDBuildingConvertMode::SinglePrefabForAll", (int64)ECityBLDBuildingConvertMode::SinglePrefabForAll },
		{ "ECityBLDBuildingConvertMode::PrefabPerBuilding", (int64)ECityBLDBuildingConvertMode::PrefabPerBuilding },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
	nullptr,
	"ECityBLDBuildingConvertMode",
	"ECityBLDBuildingConvertMode",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ECityBLDBuildingConvertMode;
UEnum* Z_Construct_UEnum_CityBLDEditor_ECityBLDBuildingConvertMode(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ECityBLDBuildingConvertMode.OuterSingleton)
		{
			ZRIE_ECityBLDBuildingConvertMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CityBLDEditor_ECityBLDBuildingConvertMode, (UObject*)Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase::Outer), TEXT("ECityBLDBuildingConvertMode"));
		}
		return ZRIE_ECityBLDBuildingConvertMode.OuterSingleton;
	}
	if (!ZRIE_ECityBLDBuildingConvertMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ECityBLDBuildingConvertMode.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ECityBLDBuildingConvertMode.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ECityBLDBuildingConvertMode *************************************************

// ********** Begin ScriptStruct FCityBLDConvertBuildingsOptions ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FCityBLDConvertBuildingsOptions_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FCityBLDConvertBuildingsOptions>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCityBLDConvertBuildingsOptions); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConvertBuildings/CityBLDConvertBuildingsSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConvertMode_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConvertBuildings/CityBLDConvertBuildingsSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplaceSourceBuildings_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConvertBuildings/CityBLDConvertBuildingsSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavePackagePath_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConvertBuildings/CityBLDConvertBuildingsSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCityBLDConvertBuildingsOptions constinit property declarations ***
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConvertMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ConvertMode;
	static void NewProp_bReplaceSourceBuildings_SetBit(void* Obj)
	{
		((FCityBLDConvertBuildingsOptions*)Obj)->bReplaceSourceBuildings = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceSourceBuildings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SavePackagePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCityBLDConvertBuildingsOptions constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCityBLDConvertBuildingsOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FCityBLDConvertBuildingsOptions Property Definitions **************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ConvertMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ConvertMode = { "ConvertMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FCityBLDConvertBuildingsOptions, ConvertMode), Z_Construct_UEnum_CityBLDEditor_ECityBLDBuildingConvertMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConvertMode_MetaData), NewProp_ConvertMode_MetaData) }; // 23d49452ac111bd035b5fdb668080f5976f8b938
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bReplaceSourceBuildings = { "bReplaceSourceBuildings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FCityBLDConvertBuildingsOptions), &UHT_STATICS::NewProp_bReplaceSourceBuildings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplaceSourceBuildings_MetaData), NewProp_bReplaceSourceBuildings_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SavePackagePath = { "SavePackagePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FCityBLDConvertBuildingsOptions, SavePackagePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavePackagePath_MetaData), NewProp_SavePackagePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ConvertMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ConvertMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bReplaceSourceBuildings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SavePackagePath,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FCityBLDConvertBuildingsOptions Property Definitions ****************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
	nullptr,
	&NewStructOps,
	"CityBLDConvertBuildingsOptions",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FCityBLDConvertBuildingsOptions>(),
	alignof(FCityBLDConvertBuildingsOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCityBLDConvertBuildingsOptions;
UScriptStruct* Z_Construct_UScriptStruct_FCityBLDConvertBuildingsOptions(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FCityBLDConvertBuildingsOptions.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FCityBLDConvertBuildingsOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCityBLDConvertBuildingsOptions, (UObject*)Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase::Outer), TEXT("CityBLDConvertBuildingsOptions"));
		}
		return Z_Registration_Info_UScriptStruct_FCityBLDConvertBuildingsOptions.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FCityBLDConvertBuildingsOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCityBLDConvertBuildingsOptions.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCityBLDConvertBuildingsOptions.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FCityBLDConvertBuildingsOptions *************************************

// ********** Begin Class UCityBLDConvertBuildingsSettings *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UCityBLDConvertBuildingsSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "ConvertBuildings/CityBLDConvertBuildingsSettings.h" },
		{ "ModuleRelativePath", "Private/ConvertBuildings/CityBLDConvertBuildingsSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConvertMode_MetaData[] = {
		{ "Category", "Convert" },
		{ "ModuleRelativePath", "Private/ConvertBuildings/CityBLDConvertBuildingsSettings.h" },
		{ "ToolTip", "Choose whether to bake a merged static mesh or a CityBLD Prefab Blueprint, and whether to combine the selection or convert each building." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplaceSourceBuildings_MetaData[] = {
		{ "Category", "Convert" },
		{ "ModuleRelativePath", "Private/ConvertBuildings/CityBLDConvertBuildingsSettings.h" },
		{ "ToolTip", "When enabled, the original Modular Building actors are destroyed after a successful conversion." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavePackagePath_MetaData[] = {
		{ "Category", "Convert" },
		{ "ModuleRelativePath", "Private/ConvertBuildings/CityBLDConvertBuildingsSettings.h" },
		{ "ToolTip", "Destination package for the primary converted asset. Additional meshes and prefabs are saved in the same folder." },
	};
#endif // WITH_METADATA

// ********** Begin Class UCityBLDConvertBuildingsSettings constinit property declarations *********
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConvertMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ConvertMode;
	static void NewProp_bReplaceSourceBuildings_SetBit(void* Obj)
	{
		((UCityBLDConvertBuildingsSettings*)Obj)->bReplaceSourceBuildings = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceSourceBuildings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SavePackagePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCityBLDConvertBuildingsSettings constinit property declarations ***********
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCityBLDConvertBuildingsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UCityBLDConvertBuildingsSettings Property Definitions ********************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_ConvertMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_ConvertMode = { "ConvertMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UCityBLDConvertBuildingsSettings, ConvertMode), Z_Construct_UEnum_CityBLDEditor_ECityBLDBuildingConvertMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConvertMode_MetaData), NewProp_ConvertMode_MetaData) }; // 23d49452ac111bd035b5fdb668080f5976f8b938
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bReplaceSourceBuildings = { "bReplaceSourceBuildings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UCityBLDConvertBuildingsSettings), &UHT_STATICS::NewProp_bReplaceSourceBuildings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplaceSourceBuildings_MetaData), NewProp_bReplaceSourceBuildings_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SavePackagePath = { "SavePackagePath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UCityBLDConvertBuildingsSettings, SavePackagePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavePackagePath_MetaData), NewProp_SavePackagePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ConvertMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ConvertMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bReplaceSourceBuildings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SavePackagePath,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UCityBLDConvertBuildingsSettings Property Definitions **********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UCityBLDConvertBuildingsSettings,
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
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UCityBLDConvertBuildingsSettings;
UClass* Z_Construct_UClass_UCityBLDConvertBuildingsSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UCityBLDConvertBuildingsSettings;
		if (!Z_Registration_Info_UClass_UCityBLDConvertBuildingsSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CityBLDConvertBuildingsSettings"),
				Z_Registration_Info_UClass_UCityBLDConvertBuildingsSettings.InnerSingleton,
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
		return Z_Registration_Info_UClass_UCityBLDConvertBuildingsSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UCityBLDConvertBuildingsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCityBLDConvertBuildingsSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UCityBLDConvertBuildingsSettings.OuterSingleton;
}
#undef UHT_STATICS
UCityBLDConvertBuildingsSettings::UCityBLDConvertBuildingsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCityBLDConvertBuildingsSettings);
UCityBLDConvertBuildingsSettings::~UCityBLDConvertBuildingsSettings() {}
// ********** End Class UCityBLDConvertBuildingsSettings *******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_ConvertBuildings_CityBLDConvertBuildingsSettings_h__Script_CityBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_CityBLDEditor_ECityBLDBuildingConvertMode, TEXT("ECityBLDBuildingConvertMode"), &ZRIE_ECityBLDBuildingConvertMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 601134162U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FCityBLDConvertBuildingsOptions, Z_Construct_UScriptStruct_FCityBLDConvertBuildingsOptions_Statics::NewStructOps, TEXT("CityBLDConvertBuildingsOptions"),&Z_Registration_Info_UScriptStruct_FCityBLDConvertBuildingsOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCityBLDConvertBuildingsOptions), 1678605380U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCityBLDConvertBuildingsSettings, TEXT("UCityBLDConvertBuildingsSettings"), &Z_Registration_Info_UClass_UCityBLDConvertBuildingsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCityBLDConvertBuildingsSettings), 698037008U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_ConvertBuildings_CityBLDConvertBuildingsSettings_h__Script_CityBLDEditor_b7994d554dbdc7d61f98f54da3a163192adfed4f{
	TEXT("/Script/CityBLDEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
