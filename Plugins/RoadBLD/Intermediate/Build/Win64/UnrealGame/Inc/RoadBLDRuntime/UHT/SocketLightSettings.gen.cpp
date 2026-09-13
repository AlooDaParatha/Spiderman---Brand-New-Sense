// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CityKitStyles/SocketLightSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeSocketLightSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSocketLightData(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSocketLightSettingsData(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FSocketLightSettingsData ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FSocketLightSettingsData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FSocketLightSettingsData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSocketLightSettingsData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Compatibility shim retained for legacy ModularKitRoad style assets/binaries.\n" },
		{ "ModuleRelativePath", "Public/CityKitStyles/SocketLightSettings.h" },
		{ "ToolTip", "Compatibility shim retained for legacy ModularKitRoad style assets/binaries." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeLocation_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/CityKitStyles/SocketLightSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeRotation_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/CityKitStyles/SocketLightSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeScale_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/CityKitStyles/SocketLightSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSocketLightSettingsData constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSocketLightSettingsData constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSocketLightSettingsData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FSocketLightSettingsData Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RelativeLocation = { "RelativeLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FSocketLightSettingsData, RelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeLocation_MetaData), NewProp_RelativeLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RelativeRotation = { "RelativeRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FSocketLightSettingsData, RelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeRotation_MetaData), NewProp_RelativeRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RelativeScale = { "RelativeScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FSocketLightSettingsData, RelativeScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeScale_MetaData), NewProp_RelativeScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RelativeLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RelativeRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RelativeScale,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FSocketLightSettingsData Property Definitions ***********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"SocketLightSettingsData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FSocketLightSettingsData>(),
	alignof(FSocketLightSettingsData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSocketLightSettingsData;
UScriptStruct* Z_Construct_UScriptStruct_FSocketLightSettingsData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FSocketLightSettingsData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FSocketLightSettingsData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSocketLightSettingsData, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("SocketLightSettingsData"));
		}
		return Z_Registration_Info_UScriptStruct_FSocketLightSettingsData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FSocketLightSettingsData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSocketLightSettingsData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSocketLightSettingsData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FSocketLightSettingsData ********************************************

// ********** Begin ScriptStruct FSocketLightData **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FSocketLightData_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FSocketLightData>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSocketLightData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Compatibility shim retained for legacy ModularKitRoad style assets/binaries.\n" },
		{ "ModuleRelativePath", "Public/CityKitStyles/SocketLightSettings.h" },
		{ "ToolTip", "Compatibility shim retained for legacy ModularKitRoad style assets/binaries." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/CityKitStyles/SocketLightSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/CityKitStyles/SocketLightSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/CityKitStyles/SocketLightSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSocketLightData constinit property declarations ******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Meshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Meshes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSocketLightData constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSocketLightData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FSocketLightData Property Definitions *****************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FSocketLightData, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FSocketLightData, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Meshes_MetaData), NewProp_Meshes_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FSocketLightData, Settings), Z_Construct_UScriptStruct_FSocketLightSettingsData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 23929eef1de62753faf42b9c45f58aeafb384140
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Meshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Meshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FSocketLightData Property Definitions *******************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"SocketLightData",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FSocketLightData>(),
	alignof(FSocketLightData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSocketLightData;
UScriptStruct* Z_Construct_UScriptStruct_FSocketLightData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FSocketLightData.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FSocketLightData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSocketLightData, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("SocketLightData"));
		}
		return Z_Registration_Info_UScriptStruct_FSocketLightData.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FSocketLightData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSocketLightData.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSocketLightData.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FSocketLightData ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_CityKitStyles_SocketLightSettings_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FSocketLightSettingsData, Z_Construct_UScriptStruct_FSocketLightSettingsData_Statics::NewStructOps, TEXT("SocketLightSettingsData"),&Z_Registration_Info_UScriptStruct_FSocketLightSettingsData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSocketLightSettingsData), 596811503U) },
		{ Z_Construct_UScriptStruct_FSocketLightData, Z_Construct_UScriptStruct_FSocketLightData_Statics::NewStructOps, TEXT("SocketLightData"),&Z_Registration_Info_UScriptStruct_FSocketLightData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSocketLightData), 1344370985U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_CityKitStyles_SocketLightSettings_h__Script_RoadBLDRuntime_b0cb1c20ee21763446592fc55557331c9c4bde17{
	TEXT("/Script/RoadBLDRuntime"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
