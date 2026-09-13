// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingMeshAssetActionUtility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeBuildingMeshAssetActionUtility() {}

// ********** Begin Cross Module References ********************************************************
BLUTILITY_API UClass* Z_Construct_UClass_UAssetActionUtility(ETypeConstructPhase);
CITYBLDRUNTIME_API UEnum* Z_Construct_UEnum_CityBLDRuntime_EBuildingMeshType(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingMeshAssetActionUtility(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingMeshAssetActionUtility(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UBuildingMeshAssetActionUtility Function BakeDetailMask ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UBuildingMeshAssetActionUtility_BakeDetailMask_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "CityBLD|Building Mesh" },
		{ "Comment", "/** Bake a detail mask (curvature + AO) for selected UBuildingMesh assets.\n\x09    R is left blank (no mesh-insert data), G = edge curvature, B = AO. */" },
		{ "ModuleRelativePath", "Public/BuildingMeshAssetActionUtility.h" },
		{ "ToolTip", "Bake a detail mask (curvature + AO) for selected UBuildingMesh assets.\n          R is left blank (no mesh-insert data), G = edge curvature, B = AO." },
	};
#endif // WITH_METADATA

// ********** Begin Function BakeDetailMask constinit property declarations ************************
// ********** End Function BakeDetailMask constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UBuildingMeshAssetActionUtility, nullptr, "BakeDetailMask", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UBuildingMeshAssetActionUtility_BakeDetailMask(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UBuildingMeshAssetActionUtility::execBakeDetailMask)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BakeDetailMask();
	P_NATIVE_END;
}
// ********** End Class UBuildingMeshAssetActionUtility Function BakeDetailMask ********************

// ********** Begin Class UBuildingMeshAssetActionUtility Function CreateBuildingMeshAssets ********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UBuildingMeshAssetActionUtility_CreateBuildingMeshAssets_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "CityBLD|Building Mesh" },
		{ "ModuleRelativePath", "Public/BuildingMeshAssetActionUtility.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CreateBuildingMeshAssets constinit property declarations **************
// ********** End Function CreateBuildingMeshAssets constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UBuildingMeshAssetActionUtility, nullptr, "CreateBuildingMeshAssets", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UBuildingMeshAssetActionUtility_CreateBuildingMeshAssets(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UBuildingMeshAssetActionUtility::execCreateBuildingMeshAssets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateBuildingMeshAssets();
	P_NATIVE_END;
}
// ********** End Class UBuildingMeshAssetActionUtility Function CreateBuildingMeshAssets **********

// ********** Begin Class UBuildingMeshAssetActionUtility ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UBuildingMeshAssetActionUtility_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "BuildingMeshAssetActionUtility.h" },
		{ "ModuleRelativePath", "Public/BuildingMeshAssetActionUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshType_MetaData[] = {
		{ "Category", "CityBLD|Building Mesh" },
		{ "ModuleRelativePath", "Public/BuildingMeshAssetActionUtility.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBuildingMeshAssetActionUtility constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_MeshType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBuildingMeshAssetActionUtility constinit property declarations ************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BakeDetailMask"), .Pointer = &UBuildingMeshAssetActionUtility::execBakeDetailMask },
		{ .NameUTF8 = UTF8TEXT("CreateBuildingMeshAssets"), .Pointer = &UBuildingMeshAssetActionUtility::execCreateBuildingMeshAssets },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBuildingMeshAssetActionUtility_BakeDetailMask, "BakeDetailMask" }, // 9523020c1c6bcad295da5d0111a50932d8b510e0
		{ &Z_Construct_UFunction_UBuildingMeshAssetActionUtility_CreateBuildingMeshAssets, "CreateBuildingMeshAssets" }, // b8508ab467271a9af90424e1fb65ac4293c291b9
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildingMeshAssetActionUtility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UBuildingMeshAssetActionUtility Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingMeshAssetActionUtility, MeshType), Z_Construct_UEnum_CityBLDRuntime_EBuildingMeshType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshType_MetaData), NewProp_MeshType_MetaData) }; // 14f50fa16e4184d6e66542074d9d83815b41aa2f
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MeshType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MeshType,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UBuildingMeshAssetActionUtility Property Definitions ***********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UAssetActionUtility,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UBuildingMeshAssetActionUtility,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UBuildingMeshAssetActionUtility_StaticRegisterNativesUBuildingMeshAssetActionUtility()
{
	UClass* Class = UBuildingMeshAssetActionUtility::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBuildingMeshAssetActionUtility;
UClass* Z_Construct_UClass_UBuildingMeshAssetActionUtility(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UBuildingMeshAssetActionUtility;
		if (!Z_Registration_Info_UClass_UBuildingMeshAssetActionUtility.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("BuildingMeshAssetActionUtility"),
				Z_Registration_Info_UClass_UBuildingMeshAssetActionUtility.InnerSingleton,
				UBuildingMeshAssetActionUtility_StaticRegisterNativesUBuildingMeshAssetActionUtility,
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
		return Z_Registration_Info_UClass_UBuildingMeshAssetActionUtility.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UBuildingMeshAssetActionUtility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildingMeshAssetActionUtility.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuildingMeshAssetActionUtility.OuterSingleton;
}
#undef UHT_STATICS
UBuildingMeshAssetActionUtility::UBuildingMeshAssetActionUtility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBuildingMeshAssetActionUtility);
UBuildingMeshAssetActionUtility::~UBuildingMeshAssetActionUtility() {}
// ********** End Class UBuildingMeshAssetActionUtility ********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BuildingMeshAssetActionUtility_h__Script_CityBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBuildingMeshAssetActionUtility, TEXT("UBuildingMeshAssetActionUtility"), &Z_Registration_Info_UClass_UBuildingMeshAssetActionUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildingMeshAssetActionUtility), 1803847551U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BuildingMeshAssetActionUtility_h__Script_CityBLDEditor_032258b1299f6278f86d04465ff4ff2e21e54090{
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
