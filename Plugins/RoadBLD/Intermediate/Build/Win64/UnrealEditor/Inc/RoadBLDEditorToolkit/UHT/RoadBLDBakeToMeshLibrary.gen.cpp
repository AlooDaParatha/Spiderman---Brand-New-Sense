// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BakeToMesh/RoadBLDBakeToMeshLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRoadBLDBakeToMeshLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ARoadGeo(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadBLDBakeToMeshLibrary(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadBLDBakeToMeshLibrary(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class URoadBLDBakeToMeshLibrary Function BakeRoadGeoToMesh *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadBLDBakeToMeshLibrary_BakeRoadGeoToMesh_Statics
struct UHT_STATICS
{
	struct RoadBLDBakeToMeshLibrary_eventBakeRoadGeoToMesh_Parms
	{
		TArray<ARoadGeo*> RoadGeos;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "RoadBLD|Bake" },
		{ "DisplayName", "Bake RoadGeo To Mesh" },
		{ "ModuleRelativePath", "Public/BakeToMesh/RoadBLDBakeToMeshLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadGeos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function BakeRoadGeoToMesh constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoadGeos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoadGeos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BakeRoadGeoToMesh constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BakeRoadGeoToMesh Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RoadGeos_Inner = { "RoadGeos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, 0, Z_Construct_UClass_ARoadGeo, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RoadGeos = { "RoadGeos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(RoadBLDBakeToMeshLibrary_eventBakeRoadGeoToMesh_Parms, RoadGeos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadGeos_MetaData), NewProp_RoadGeos_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadGeos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RoadGeos,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function BakeRoadGeoToMesh Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadBLDBakeToMeshLibrary, nullptr, "BakeRoadGeoToMesh", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RoadBLDBakeToMeshLibrary_eventBakeRoadGeoToMesh_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RoadBLDBakeToMeshLibrary_eventBakeRoadGeoToMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URoadBLDBakeToMeshLibrary_BakeRoadGeoToMesh(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadBLDBakeToMeshLibrary::execBakeRoadGeoToMesh)
{
	P_GET_TARRAY_REF(ARoadGeo*,Z_Param_Out_RoadGeos);
	P_FINISH;
	P_NATIVE_BEGIN;
	URoadBLDBakeToMeshLibrary::BakeRoadGeoToMesh(Z_Param_Out_RoadGeos);
	P_NATIVE_END;
}
// ********** End Class URoadBLDBakeToMeshLibrary Function BakeRoadGeoToMesh ***********************

// ********** Begin Class URoadBLDBakeToMeshLibrary Function BakeSelectedRoadGeoToMesh *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_URoadBLDBakeToMeshLibrary_BakeSelectedRoadGeoToMesh_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "RoadBLD|Bake" },
		{ "DisplayName", "Bake Selected RoadGeo To Mesh" },
		{ "ModuleRelativePath", "Public/BakeToMesh/RoadBLDBakeToMeshLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function BakeSelectedRoadGeoToMesh constinit property declarations *************
// ********** End Function BakeSelectedRoadGeoToMesh constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_URoadBLDBakeToMeshLibrary, nullptr, "BakeSelectedRoadGeoToMesh", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_URoadBLDBakeToMeshLibrary_BakeSelectedRoadGeoToMesh(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(URoadBLDBakeToMeshLibrary::execBakeSelectedRoadGeoToMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	URoadBLDBakeToMeshLibrary::BakeSelectedRoadGeoToMesh();
	P_NATIVE_END;
}
// ********** End Class URoadBLDBakeToMeshLibrary Function BakeSelectedRoadGeoToMesh ***************

// ********** Begin Class URoadBLDBakeToMeshLibrary ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoadBLDBakeToMeshLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "BakeToMesh/RoadBLDBakeToMeshLibrary.h" },
		{ "ModuleRelativePath", "Public/BakeToMesh/RoadBLDBakeToMeshLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URoadBLDBakeToMeshLibrary constinit property declarations ****************
// ********** End Class URoadBLDBakeToMeshLibrary constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BakeRoadGeoToMesh"), .Pointer = &URoadBLDBakeToMeshLibrary::execBakeRoadGeoToMesh },
		{ .NameUTF8 = UTF8TEXT("BakeSelectedRoadGeoToMesh"), .Pointer = &URoadBLDBakeToMeshLibrary::execBakeSelectedRoadGeoToMesh },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URoadBLDBakeToMeshLibrary_BakeRoadGeoToMesh, "BakeRoadGeoToMesh" }, // 7f64ae288e554fd6834ca95ec915260cb0b69a5a
		{ &Z_Construct_UFunction_URoadBLDBakeToMeshLibrary_BakeSelectedRoadGeoToMesh, "BakeSelectedRoadGeoToMesh" }, // 4f27259bb66028a3778837e3e35fc439f542cb8c
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadBLDBakeToMeshLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UBlueprintFunctionLibrary,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoadBLDBakeToMeshLibrary,
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
static void URoadBLDBakeToMeshLibrary_StaticRegisterNativesURoadBLDBakeToMeshLibrary()
{
	UClass* Class = URoadBLDBakeToMeshLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_URoadBLDBakeToMeshLibrary;
UClass* Z_Construct_UClass_URoadBLDBakeToMeshLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoadBLDBakeToMeshLibrary;
		if (!Z_Registration_Info_UClass_URoadBLDBakeToMeshLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadBLDBakeToMeshLibrary"),
				Z_Registration_Info_UClass_URoadBLDBakeToMeshLibrary.InnerSingleton,
				URoadBLDBakeToMeshLibrary_StaticRegisterNativesURoadBLDBakeToMeshLibrary,
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
		return Z_Registration_Info_UClass_URoadBLDBakeToMeshLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoadBLDBakeToMeshLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoadBLDBakeToMeshLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoadBLDBakeToMeshLibrary.OuterSingleton;
}
#undef UHT_STATICS
URoadBLDBakeToMeshLibrary::URoadBLDBakeToMeshLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoadBLDBakeToMeshLibrary);
URoadBLDBakeToMeshLibrary::~URoadBLDBakeToMeshLibrary() {}
// ********** End Class URoadBLDBakeToMeshLibrary **************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_BakeToMesh_RoadBLDBakeToMeshLibrary_h__Script_RoadBLDEditorToolkit_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoadBLDBakeToMeshLibrary, TEXT("URoadBLDBakeToMeshLibrary"), &Z_Registration_Info_UClass_URoadBLDBakeToMeshLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoadBLDBakeToMeshLibrary), 312753263U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_BakeToMesh_RoadBLDBakeToMeshLibrary_h__Script_RoadBLDEditorToolkit_62b85bde79d9ecff10a21c2f140b12b76e89fa3c{
	TEXT("/Script/RoadBLDEditorToolkit"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
