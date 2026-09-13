// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingStyleCreatorState.h"
#include "CityBLDTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeBuildingStyleCreatorState() {}

// ********** Begin Cross Module References ********************************************************
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UBuildingStyle(ETypeConstructPhase);
CITYBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FModularFloorsStruct(ETypeConstructPhase);
CITYBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTrimStruct(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UBuildingMesh(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UBuildingStyle(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase);
CITYBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FBuildingStyleCreatorFloorEntry(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingStyleCreatorFloorProxy(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingStyleCreatorFoundationProxy(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingStyleCreatorMeshesProxy(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingStyleCreatorPreviewStyle(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingStyleCreatorState(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingStyleCreatorTrimProxy(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingStyleCreatorFloorProxy(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingStyleCreatorFoundationProxy(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingStyleCreatorMeshesProxy(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingStyleCreatorPreviewStyle(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingStyleCreatorState(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingStyleCreatorTrimProxy(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FBuildingStyleCreatorFloorEntry ***********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FBuildingStyleCreatorFloorEntry_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FBuildingStyleCreatorFloorEntry>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FBuildingStyleCreatorFloorEntry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/BuildingStyleCreatorState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FacadeFloor_MetaData[] = {
		{ "ModuleRelativePath", "Private/BuildingStyleCreatorState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SideFloor_MetaData[] = {
		{ "ModuleRelativePath", "Private/BuildingStyleCreatorState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RearFloor_MetaData[] = {
		{ "ModuleRelativePath", "Private/BuildingStyleCreatorState.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FBuildingStyleCreatorFloorEntry constinit property declarations ***
	static const UECodeGen_Private::FStructPropertyParams NewProp_FacadeFloor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SideFloor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RearFloor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FBuildingStyleCreatorFloorEntry constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuildingStyleCreatorFloorEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FBuildingStyleCreatorFloorEntry Property Definitions **************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_FacadeFloor = { "FacadeFloor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingStyleCreatorFloorEntry, FacadeFloor), Z_Construct_UScriptStruct_FModularFloorsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FacadeFloor_MetaData), NewProp_FacadeFloor_MetaData) }; // a5f5f9f7f66ff785bf17e51740a2f43aa1ec4c42
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SideFloor = { "SideFloor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingStyleCreatorFloorEntry, SideFloor), Z_Construct_UScriptStruct_FModularFloorsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SideFloor_MetaData), NewProp_SideFloor_MetaData) }; // a5f5f9f7f66ff785bf17e51740a2f43aa1ec4c42
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RearFloor = { "RearFloor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FBuildingStyleCreatorFloorEntry, RearFloor), Z_Construct_UScriptStruct_FModularFloorsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RearFloor_MetaData), NewProp_RearFloor_MetaData) }; // a5f5f9f7f66ff785bf17e51740a2f43aa1ec4c42
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FacadeFloor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SideFloor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RearFloor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FBuildingStyleCreatorFloorEntry Property Definitions ****************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
	nullptr,
	&NewStructOps,
	"BuildingStyleCreatorFloorEntry",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FBuildingStyleCreatorFloorEntry>(),
	alignof(FBuildingStyleCreatorFloorEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBuildingStyleCreatorFloorEntry;
UScriptStruct* Z_Construct_UScriptStruct_FBuildingStyleCreatorFloorEntry(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FBuildingStyleCreatorFloorEntry.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FBuildingStyleCreatorFloorEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuildingStyleCreatorFloorEntry, (UObject*)Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase::Outer), TEXT("BuildingStyleCreatorFloorEntry"));
		}
		return Z_Registration_Info_UScriptStruct_FBuildingStyleCreatorFloorEntry.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FBuildingStyleCreatorFloorEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBuildingStyleCreatorFloorEntry.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FBuildingStyleCreatorFloorEntry.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FBuildingStyleCreatorFloorEntry *************************************

// ********** Begin Class UBuildingStyleCreatorFloorProxy ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UBuildingStyleCreatorFloorProxy_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "BuildingStyleCreatorState.h" },
		{ "ModuleRelativePath", "Private/BuildingStyleCreatorState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FacadeFloor_MetaData[] = {
		{ "Category", "Facade" },
		{ "ModuleRelativePath", "Private/BuildingStyleCreatorState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SideFloor_MetaData[] = {
		{ "Category", "Side" },
		{ "ModuleRelativePath", "Private/BuildingStyleCreatorState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RearFloor_MetaData[] = {
		{ "Category", "Rear" },
		{ "ModuleRelativePath", "Private/BuildingStyleCreatorState.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBuildingStyleCreatorFloorProxy constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_FacadeFloor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SideFloor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RearFloor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBuildingStyleCreatorFloorProxy constinit property declarations ************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildingStyleCreatorFloorProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UBuildingStyleCreatorFloorProxy Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_FacadeFloor = { "FacadeFloor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingStyleCreatorFloorProxy, FacadeFloor), Z_Construct_UScriptStruct_FModularFloorsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FacadeFloor_MetaData), NewProp_FacadeFloor_MetaData) }; // a5f5f9f7f66ff785bf17e51740a2f43aa1ec4c42
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SideFloor = { "SideFloor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingStyleCreatorFloorProxy, SideFloor), Z_Construct_UScriptStruct_FModularFloorsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SideFloor_MetaData), NewProp_SideFloor_MetaData) }; // a5f5f9f7f66ff785bf17e51740a2f43aa1ec4c42
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RearFloor = { "RearFloor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingStyleCreatorFloorProxy, RearFloor), Z_Construct_UScriptStruct_FModularFloorsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RearFloor_MetaData), NewProp_RearFloor_MetaData) }; // a5f5f9f7f66ff785bf17e51740a2f43aa1ec4c42
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FacadeFloor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SideFloor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RearFloor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UBuildingStyleCreatorFloorProxy Property Definitions ***********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UBuildingStyleCreatorFloorProxy,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UBuildingStyleCreatorFloorProxy;
UClass* Z_Construct_UClass_UBuildingStyleCreatorFloorProxy(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UBuildingStyleCreatorFloorProxy;
		if (!Z_Registration_Info_UClass_UBuildingStyleCreatorFloorProxy.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("BuildingStyleCreatorFloorProxy"),
				Z_Registration_Info_UClass_UBuildingStyleCreatorFloorProxy.InnerSingleton,
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
		return Z_Registration_Info_UClass_UBuildingStyleCreatorFloorProxy.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UBuildingStyleCreatorFloorProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildingStyleCreatorFloorProxy.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuildingStyleCreatorFloorProxy.OuterSingleton;
}
#undef UHT_STATICS
UBuildingStyleCreatorFloorProxy::UBuildingStyleCreatorFloorProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBuildingStyleCreatorFloorProxy);
UBuildingStyleCreatorFloorProxy::~UBuildingStyleCreatorFloorProxy() {}
// ********** End Class UBuildingStyleCreatorFloorProxy ********************************************

// ********** Begin Class UBuildingStyleCreatorMeshesProxy *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UBuildingStyleCreatorMeshesProxy_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "BuildingStyleCreatorState.h" },
		{ "ModuleRelativePath", "Private/BuildingStyleCreatorState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FacadeMeshesToUse_MetaData[] = {
		{ "Category", "Facade" },
		{ "ModuleRelativePath", "Private/BuildingStyleCreatorState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SideMeshesToUse_MetaData[] = {
		{ "Category", "Side" },
		{ "ModuleRelativePath", "Private/BuildingStyleCreatorState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSideMeshSetForRearFaces_MetaData[] = {
		{ "Category", "Rear" },
		{ "ModuleRelativePath", "Private/BuildingStyleCreatorState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RearMeshesToUse_MetaData[] = {
		{ "Category", "Rear" },
		{ "ModuleRelativePath", "Private/BuildingStyleCreatorState.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBuildingStyleCreatorMeshesProxy constinit property declarations *********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FacadeMeshesToUse_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FacadeMeshesToUse;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SideMeshesToUse_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SideMeshesToUse;
	static void NewProp_bUseSideMeshSetForRearFaces_SetBit(void* Obj)
	{
		((UBuildingStyleCreatorMeshesProxy*)Obj)->bUseSideMeshSetForRearFaces = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSideMeshSetForRearFaces;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RearMeshesToUse_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RearMeshesToUse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBuildingStyleCreatorMeshesProxy constinit property declarations ***********
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildingStyleCreatorMeshesProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UBuildingStyleCreatorMeshesProxy Property Definitions ********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_FacadeMeshesToUse_Inner = { "FacadeMeshesToUse", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBuildingMesh, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_FacadeMeshesToUse = { "FacadeMeshesToUse", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingStyleCreatorMeshesProxy, FacadeMeshesToUse), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FacadeMeshesToUse_MetaData), NewProp_FacadeMeshesToUse_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SideMeshesToUse_Inner = { "SideMeshesToUse", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBuildingMesh, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_SideMeshesToUse = { "SideMeshesToUse", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingStyleCreatorMeshesProxy, SideMeshesToUse), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SideMeshesToUse_MetaData), NewProp_SideMeshesToUse_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bUseSideMeshSetForRearFaces = { "bUseSideMeshSetForRearFaces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UBuildingStyleCreatorMeshesProxy), &UHT_STATICS::NewProp_bUseSideMeshSetForRearFaces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSideMeshSetForRearFaces_MetaData), NewProp_bUseSideMeshSetForRearFaces_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RearMeshesToUse_Inner = { "RearMeshesToUse", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBuildingMesh, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RearMeshesToUse = { "RearMeshesToUse", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingStyleCreatorMeshesProxy, RearMeshesToUse), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RearMeshesToUse_MetaData), NewProp_RearMeshesToUse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FacadeMeshesToUse_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FacadeMeshesToUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SideMeshesToUse_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SideMeshesToUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bUseSideMeshSetForRearFaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RearMeshesToUse_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RearMeshesToUse,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UBuildingStyleCreatorMeshesProxy Property Definitions **********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UBuildingStyleCreatorMeshesProxy,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UBuildingStyleCreatorMeshesProxy;
UClass* Z_Construct_UClass_UBuildingStyleCreatorMeshesProxy(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UBuildingStyleCreatorMeshesProxy;
		if (!Z_Registration_Info_UClass_UBuildingStyleCreatorMeshesProxy.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("BuildingStyleCreatorMeshesProxy"),
				Z_Registration_Info_UClass_UBuildingStyleCreatorMeshesProxy.InnerSingleton,
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
		return Z_Registration_Info_UClass_UBuildingStyleCreatorMeshesProxy.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UBuildingStyleCreatorMeshesProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildingStyleCreatorMeshesProxy.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuildingStyleCreatorMeshesProxy.OuterSingleton;
}
#undef UHT_STATICS
UBuildingStyleCreatorMeshesProxy::UBuildingStyleCreatorMeshesProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBuildingStyleCreatorMeshesProxy);
UBuildingStyleCreatorMeshesProxy::~UBuildingStyleCreatorMeshesProxy() {}
// ********** End Class UBuildingStyleCreatorMeshesProxy *******************************************

// ********** Begin Class UBuildingStyleCreatorTrimProxy *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UBuildingStyleCreatorTrimProxy_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "BuildingStyleCreatorState.h" },
		{ "ModuleRelativePath", "Private/BuildingStyleCreatorState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddTrim_MetaData[] = {
		{ "Category", "Trim" },
		{ "ModuleRelativePath", "Private/BuildingStyleCreatorState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FacadeTrim_MetaData[] = {
		{ "Category", "Facade" },
		{ "ModuleRelativePath", "Private/BuildingStyleCreatorState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SideTrim_MetaData[] = {
		{ "Category", "Side" },
		{ "ModuleRelativePath", "Private/BuildingStyleCreatorState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RearTrim_MetaData[] = {
		{ "Category", "Rear" },
		{ "ModuleRelativePath", "Private/BuildingStyleCreatorState.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBuildingStyleCreatorTrimProxy constinit property declarations ***********
	static void NewProp_bAddTrim_SetBit(void* Obj)
	{
		((UBuildingStyleCreatorTrimProxy*)Obj)->bAddTrim = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddTrim;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FacadeTrim;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SideTrim;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RearTrim;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBuildingStyleCreatorTrimProxy constinit property declarations *************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildingStyleCreatorTrimProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UBuildingStyleCreatorTrimProxy Property Definitions **********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bAddTrim = { "bAddTrim", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UBuildingStyleCreatorTrimProxy), &UHT_STATICS::NewProp_bAddTrim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddTrim_MetaData), NewProp_bAddTrim_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_FacadeTrim = { "FacadeTrim", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingStyleCreatorTrimProxy, FacadeTrim), Z_Construct_UScriptStruct_FTrimStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FacadeTrim_MetaData), NewProp_FacadeTrim_MetaData) }; // 2f534c28943297d173125a0719a3ba5512d85342
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SideTrim = { "SideTrim", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingStyleCreatorTrimProxy, SideTrim), Z_Construct_UScriptStruct_FTrimStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SideTrim_MetaData), NewProp_SideTrim_MetaData) }; // 2f534c28943297d173125a0719a3ba5512d85342
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RearTrim = { "RearTrim", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingStyleCreatorTrimProxy, RearTrim), Z_Construct_UScriptStruct_FTrimStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RearTrim_MetaData), NewProp_RearTrim_MetaData) }; // 2f534c28943297d173125a0719a3ba5512d85342
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bAddTrim,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FacadeTrim,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SideTrim,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RearTrim,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UBuildingStyleCreatorTrimProxy Property Definitions ************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UBuildingStyleCreatorTrimProxy,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UBuildingStyleCreatorTrimProxy;
UClass* Z_Construct_UClass_UBuildingStyleCreatorTrimProxy(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UBuildingStyleCreatorTrimProxy;
		if (!Z_Registration_Info_UClass_UBuildingStyleCreatorTrimProxy.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("BuildingStyleCreatorTrimProxy"),
				Z_Registration_Info_UClass_UBuildingStyleCreatorTrimProxy.InnerSingleton,
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
		return Z_Registration_Info_UClass_UBuildingStyleCreatorTrimProxy.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UBuildingStyleCreatorTrimProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildingStyleCreatorTrimProxy.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuildingStyleCreatorTrimProxy.OuterSingleton;
}
#undef UHT_STATICS
UBuildingStyleCreatorTrimProxy::UBuildingStyleCreatorTrimProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBuildingStyleCreatorTrimProxy);
UBuildingStyleCreatorTrimProxy::~UBuildingStyleCreatorTrimProxy() {}
// ********** End Class UBuildingStyleCreatorTrimProxy *********************************************

// ********** Begin Class UBuildingStyleCreatorFoundationProxy *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UBuildingStyleCreatorFoundationProxy_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "BuildingStyleCreatorState.h" },
		{ "ModuleRelativePath", "Private/BuildingStyleCreatorState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FacadeFoundation_MetaData[] = {
		{ "Category", "Facade" },
		{ "ModuleRelativePath", "Private/BuildingStyleCreatorState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SideFoundation_MetaData[] = {
		{ "Category", "Side" },
		{ "ModuleRelativePath", "Private/BuildingStyleCreatorState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RearFoundation_MetaData[] = {
		{ "Category", "Rear" },
		{ "ModuleRelativePath", "Private/BuildingStyleCreatorState.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBuildingStyleCreatorFoundationProxy constinit property declarations *****
	static const UECodeGen_Private::FStructPropertyParams NewProp_FacadeFoundation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SideFoundation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RearFoundation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBuildingStyleCreatorFoundationProxy constinit property declarations *******
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildingStyleCreatorFoundationProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UBuildingStyleCreatorFoundationProxy Property Definitions ****************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_FacadeFoundation = { "FacadeFoundation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingStyleCreatorFoundationProxy, FacadeFoundation), Z_Construct_UScriptStruct_FModularFloorsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FacadeFoundation_MetaData), NewProp_FacadeFoundation_MetaData) }; // a5f5f9f7f66ff785bf17e51740a2f43aa1ec4c42
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SideFoundation = { "SideFoundation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingStyleCreatorFoundationProxy, SideFoundation), Z_Construct_UScriptStruct_FModularFloorsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SideFoundation_MetaData), NewProp_SideFoundation_MetaData) }; // a5f5f9f7f66ff785bf17e51740a2f43aa1ec4c42
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_RearFoundation = { "RearFoundation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingStyleCreatorFoundationProxy, RearFoundation), Z_Construct_UScriptStruct_FModularFloorsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RearFoundation_MetaData), NewProp_RearFoundation_MetaData) }; // a5f5f9f7f66ff785bf17e51740a2f43aa1ec4c42
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FacadeFoundation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SideFoundation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RearFoundation,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UBuildingStyleCreatorFoundationProxy Property Definitions ******************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UBuildingStyleCreatorFoundationProxy,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UBuildingStyleCreatorFoundationProxy;
UClass* Z_Construct_UClass_UBuildingStyleCreatorFoundationProxy(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UBuildingStyleCreatorFoundationProxy;
		if (!Z_Registration_Info_UClass_UBuildingStyleCreatorFoundationProxy.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("BuildingStyleCreatorFoundationProxy"),
				Z_Registration_Info_UClass_UBuildingStyleCreatorFoundationProxy.InnerSingleton,
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
		return Z_Registration_Info_UClass_UBuildingStyleCreatorFoundationProxy.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UBuildingStyleCreatorFoundationProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildingStyleCreatorFoundationProxy.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuildingStyleCreatorFoundationProxy.OuterSingleton;
}
#undef UHT_STATICS
UBuildingStyleCreatorFoundationProxy::UBuildingStyleCreatorFoundationProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBuildingStyleCreatorFoundationProxy);
UBuildingStyleCreatorFoundationProxy::~UBuildingStyleCreatorFoundationProxy() {}
// ********** End Class UBuildingStyleCreatorFoundationProxy ***************************************

// ********** Begin Class UBuildingStyleCreatorState ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UBuildingStyleCreatorState_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "BuildingStyleCreatorState.h" },
		{ "ModuleRelativePath", "Private/BuildingStyleCreatorState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkingStyle_MetaData[] = {
		{ "ModuleRelativePath", "Private/BuildingStyleCreatorState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedStyleClass_MetaData[] = {
		{ "ModuleRelativePath", "Private/BuildingStyleCreatorState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorEntries_MetaData[] = {
		{ "ModuleRelativePath", "Private/BuildingStyleCreatorState.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBuildingStyleCreatorState constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorkingStyle;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LoadedStyleClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloorEntries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FloorEntries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBuildingStyleCreatorState constinit property declarations *****************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildingStyleCreatorState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UBuildingStyleCreatorState Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorkingStyle = { "WorkingStyle", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingStyleCreatorState, WorkingStyle), Z_Construct_UClass_UBuildingStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkingStyle_MetaData), NewProp_WorkingStyle_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_LoadedStyleClass = { "LoadedStyleClass", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingStyleCreatorState, LoadedStyleClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBuildingStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedStyleClass_MetaData), NewProp_LoadedStyleClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_FloorEntries_Inner = { "FloorEntries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBuildingStyleCreatorFloorEntry, METADATA_PARAMS(0, nullptr) }; // c33cb13f109e88c5b72579b48e85fda1ca522473
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_FloorEntries = { "FloorEntries", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingStyleCreatorState, FloorEntries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorEntries_MetaData), NewProp_FloorEntries_MetaData) }; // c33cb13f109e88c5b72579b48e85fda1ca522473
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorkingStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LoadedStyleClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FloorEntries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FloorEntries,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UBuildingStyleCreatorState Property Definitions ****************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UBuildingStyleCreatorState,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UBuildingStyleCreatorState;
UClass* Z_Construct_UClass_UBuildingStyleCreatorState(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UBuildingStyleCreatorState;
		if (!Z_Registration_Info_UClass_UBuildingStyleCreatorState.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("BuildingStyleCreatorState"),
				Z_Registration_Info_UClass_UBuildingStyleCreatorState.InnerSingleton,
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
		return Z_Registration_Info_UClass_UBuildingStyleCreatorState.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UBuildingStyleCreatorState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildingStyleCreatorState.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuildingStyleCreatorState.OuterSingleton;
}
#undef UHT_STATICS
UBuildingStyleCreatorState::UBuildingStyleCreatorState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBuildingStyleCreatorState);
UBuildingStyleCreatorState::~UBuildingStyleCreatorState() {}
// ********** End Class UBuildingStyleCreatorState *************************************************

// ********** Begin Class UBuildingStyleCreatorPreviewStyle ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UBuildingStyleCreatorPreviewStyle_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "BuildingStyleCreatorState.h" },
		{ "ModuleRelativePath", "Private/BuildingStyleCreatorState.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBuildingStyleCreatorPreviewStyle constinit property declarations ********
// ********** End Class UBuildingStyleCreatorPreviewStyle constinit property declarations **********
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildingStyleCreatorPreviewStyle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBuildingStyle,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UBuildingStyleCreatorPreviewStyle,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UBuildingStyleCreatorPreviewStyle;
UClass* Z_Construct_UClass_UBuildingStyleCreatorPreviewStyle(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UBuildingStyleCreatorPreviewStyle;
		if (!Z_Registration_Info_UClass_UBuildingStyleCreatorPreviewStyle.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("BuildingStyleCreatorPreviewStyle"),
				Z_Registration_Info_UClass_UBuildingStyleCreatorPreviewStyle.InnerSingleton,
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
		return Z_Registration_Info_UClass_UBuildingStyleCreatorPreviewStyle.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UBuildingStyleCreatorPreviewStyle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildingStyleCreatorPreviewStyle.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuildingStyleCreatorPreviewStyle.OuterSingleton;
}
#undef UHT_STATICS
UBuildingStyleCreatorPreviewStyle::UBuildingStyleCreatorPreviewStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBuildingStyleCreatorPreviewStyle);
UBuildingStyleCreatorPreviewStyle::~UBuildingStyleCreatorPreviewStyle() {}
// ********** End Class UBuildingStyleCreatorPreviewStyle ******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_BuildingStyleCreatorState_h__Script_CityBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FBuildingStyleCreatorFloorEntry, Z_Construct_UScriptStruct_FBuildingStyleCreatorFloorEntry_Statics::NewStructOps, TEXT("BuildingStyleCreatorFloorEntry"),&Z_Registration_Info_UScriptStruct_FBuildingStyleCreatorFloorEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBuildingStyleCreatorFloorEntry), 3275534655U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBuildingStyleCreatorFloorProxy, TEXT("UBuildingStyleCreatorFloorProxy"), &Z_Registration_Info_UClass_UBuildingStyleCreatorFloorProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildingStyleCreatorFloorProxy), 357933648U) },
		{ Z_Construct_UClass_UBuildingStyleCreatorMeshesProxy, TEXT("UBuildingStyleCreatorMeshesProxy"), &Z_Registration_Info_UClass_UBuildingStyleCreatorMeshesProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildingStyleCreatorMeshesProxy), 1727130031U) },
		{ Z_Construct_UClass_UBuildingStyleCreatorTrimProxy, TEXT("UBuildingStyleCreatorTrimProxy"), &Z_Registration_Info_UClass_UBuildingStyleCreatorTrimProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildingStyleCreatorTrimProxy), 1655810779U) },
		{ Z_Construct_UClass_UBuildingStyleCreatorFoundationProxy, TEXT("UBuildingStyleCreatorFoundationProxy"), &Z_Registration_Info_UClass_UBuildingStyleCreatorFoundationProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildingStyleCreatorFoundationProxy), 1971397749U) },
		{ Z_Construct_UClass_UBuildingStyleCreatorState, TEXT("UBuildingStyleCreatorState"), &Z_Registration_Info_UClass_UBuildingStyleCreatorState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildingStyleCreatorState), 1621258222U) },
		{ Z_Construct_UClass_UBuildingStyleCreatorPreviewStyle, TEXT("UBuildingStyleCreatorPreviewStyle"), &Z_Registration_Info_UClass_UBuildingStyleCreatorPreviewStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildingStyleCreatorPreviewStyle), 1026518624U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_BuildingStyleCreatorState_h__Script_CityBLDEditor_c73db30a0ea6fce82afabc289a796e5f9f0238dc{
	TEXT("/Script/CityBLDEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
