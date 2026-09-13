// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicRoad/Store/CityRoadNetworkStoreData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeCityRoadNetworkStoreData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UCityRoadNetworkStoreData(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UCityRoadNetworkStoreData(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UCityRoadNetworkStoreData ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UCityRoadNetworkStoreData_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "DynamicRoad/Store/CityRoadNetworkStoreData.h" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Store/CityRoadNetworkStoreData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetworkID_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/Store/CityRoadNetworkStoreData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRevision_MetaData[] = {
		{ "ModuleRelativePath", "Public/DynamicRoad/Store/CityRoadNetworkStoreData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SchemaVersion_MetaData[] = {
		{ "Comment", "/** Store image schema. See RoadNetworkStoreSchema::CurrentVersion. */" },
		{ "ModuleRelativePath", "Public/DynamicRoad/Store/CityRoadNetworkStoreData.h" },
		{ "ToolTip", "Store image schema. See RoadNetworkStoreSchema::CurrentVersion." },
	};
#endif // WITH_METADATA

// ********** Begin Class UCityRoadNetworkStoreData constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NetworkID;
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_CurrentRevision;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_SchemaVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCityRoadNetworkStoreData constinit property declarations ******************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCityRoadNetworkStoreData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UCityRoadNetworkStoreData Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NetworkID = { "NetworkID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UCityRoadNetworkStoreData, NetworkID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetworkID_MetaData), NewProp_NetworkID_MetaData) };
const UECodeGen_Private::FUInt64PropertyParams UHT_STATICS::NewProp_CurrentRevision = { "CurrentRevision", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, nullptr, nullptr, 1, STRUCT_OFFSET(UCityRoadNetworkStoreData, CurrentRevision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRevision_MetaData), NewProp_CurrentRevision_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams UHT_STATICS::NewProp_SchemaVersion = { "SchemaVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, nullptr, nullptr, 1, STRUCT_OFFSET(UCityRoadNetworkStoreData, SchemaVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SchemaVersion_MetaData), NewProp_SchemaVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NetworkID,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CurrentRevision,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SchemaVersion,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UCityRoadNetworkStoreData Property Definitions *****************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAssetUserData,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UCityRoadNetworkStoreData,
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
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UCityRoadNetworkStoreData;
UClass* Z_Construct_UClass_UCityRoadNetworkStoreData(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UCityRoadNetworkStoreData;
		if (!Z_Registration_Info_UClass_UCityRoadNetworkStoreData.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CityRoadNetworkStoreData"),
				Z_Registration_Info_UClass_UCityRoadNetworkStoreData.InnerSingleton,
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
		return Z_Registration_Info_UClass_UCityRoadNetworkStoreData.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UCityRoadNetworkStoreData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCityRoadNetworkStoreData.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UCityRoadNetworkStoreData.OuterSingleton;
}
#undef UHT_STATICS
UCityRoadNetworkStoreData::UCityRoadNetworkStoreData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCityRoadNetworkStoreData);
UCityRoadNetworkStoreData::~UCityRoadNetworkStoreData() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCityRoadNetworkStoreData)
// ********** End Class UCityRoadNetworkStoreData **************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_Store_CityRoadNetworkStoreData_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCityRoadNetworkStoreData, TEXT("UCityRoadNetworkStoreData"), &Z_Registration_Info_UClass_UCityRoadNetworkStoreData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCityRoadNetworkStoreData), 2229761290U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_Store_CityRoadNetworkStoreData_h__Script_RoadBLDRuntime_800d7398c0040db29b022fdec9b2b81ae6c29339{
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
