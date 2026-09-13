// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContextMenu/BuildingShapeFaceOverridesProxy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeBuildingShapeFaceOverridesProxy() {}

// ********** Begin Cross Module References ********************************************************
CITYBLDRUNTIME_API UEnum* Z_Construct_UEnum_CityBLDRuntime_EBuildingFace(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingShapeFaceOverridesProxy(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingShapeFaceOverridesProxy(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UBuildingShapeFaceOverridesProxy *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UBuildingShapeFaceOverridesProxy_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "ContextMenu/BuildingShapeFaceOverridesProxy.h" },
		{ "ModuleRelativePath", "Private/ContextMenu/BuildingShapeFaceOverridesProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceOverrides_MetaData[] = {
		{ "Category", "Building Shape" },
		{ "ModuleRelativePath", "Private/ContextMenu/BuildingShapeFaceOverridesProxy.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBuildingShapeFaceOverridesProxy constinit property declarations *********
	static const UECodeGen_Private::FBytePropertyParams NewProp_FaceOverrides_ValueProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FaceOverrides_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FaceOverrides_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FaceOverrides;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBuildingShapeFaceOverridesProxy constinit property declarations ***********
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildingShapeFaceOverridesProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UBuildingShapeFaceOverridesProxy Property Definitions ********************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_FaceOverrides_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_FaceOverrides_ValueProp = { "FaceOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, 1, Z_Construct_UEnum_CityBLDRuntime_EBuildingFace, METADATA_PARAMS(0, nullptr) }; // 636b1096d69d3eed8f03c070c2c9de1d9ab1777e
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_FaceOverrides_Key_KeyProp = { "FaceOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_FaceOverrides = { "FaceOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingShapeFaceOverridesProxy, FaceOverrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceOverrides_MetaData), NewProp_FaceOverrides_MetaData) }; // 636b1096d69d3eed8f03c070c2c9de1d9ab1777e
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FaceOverrides_ValueProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FaceOverrides_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FaceOverrides_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FaceOverrides,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UBuildingShapeFaceOverridesProxy Property Definitions **********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UBuildingShapeFaceOverridesProxy,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UBuildingShapeFaceOverridesProxy;
UClass* Z_Construct_UClass_UBuildingShapeFaceOverridesProxy(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UBuildingShapeFaceOverridesProxy;
		if (!Z_Registration_Info_UClass_UBuildingShapeFaceOverridesProxy.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("BuildingShapeFaceOverridesProxy"),
				Z_Registration_Info_UClass_UBuildingShapeFaceOverridesProxy.InnerSingleton,
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
		return Z_Registration_Info_UClass_UBuildingShapeFaceOverridesProxy.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UBuildingShapeFaceOverridesProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildingShapeFaceOverridesProxy.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuildingShapeFaceOverridesProxy.OuterSingleton;
}
#undef UHT_STATICS
UBuildingShapeFaceOverridesProxy::UBuildingShapeFaceOverridesProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBuildingShapeFaceOverridesProxy);
UBuildingShapeFaceOverridesProxy::~UBuildingShapeFaceOverridesProxy() {}
// ********** End Class UBuildingShapeFaceOverridesProxy *******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_ContextMenu_BuildingShapeFaceOverridesProxy_h__Script_CityBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBuildingShapeFaceOverridesProxy, TEXT("UBuildingShapeFaceOverridesProxy"), &Z_Registration_Info_UClass_UBuildingShapeFaceOverridesProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildingShapeFaceOverridesProxy), 389138908U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_ContextMenu_BuildingShapeFaceOverridesProxy_h__Script_CityBLDEditor_b6df33a2c9ca96deb845f1fd45ad44ab0846f343{
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
