// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CityParcelPCGHostActor.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeCityParcelPCGHostActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
PCG_API UClass* Z_Construct_UClass_UPCGComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDRuntime(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_ACityParcelPCGHostActor(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UCityBLDSplineComponent(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_ACityBlock(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_UCityParcel(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_ACityParcelPCGHostActor(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_ULandUse(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class ACityParcelPCGHostActor Function CleanupPCG ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ACityParcelPCGHostActor_CleanupPCG_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|PCG" },
		{ "Comment", "/**\n\x09 * Cleanup PCG-generated content. Called before destruction or re-generation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/CityParcelPCGHostActor.h" },
		{ "ToolTip", "Cleanup PCG-generated content. Called before destruction or re-generation." },
	};
#endif // WITH_METADATA

// ********** Begin Function CleanupPCG constinit property declarations ****************************
// ********** End Function CleanupPCG constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ACityParcelPCGHostActor, nullptr, "CleanupPCG", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ACityParcelPCGHostActor_CleanupPCG(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ACityParcelPCGHostActor::execCleanupPCG)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CleanupPCG();
	P_NATIVE_END;
}
// ********** End Class ACityParcelPCGHostActor Function CleanupPCG ********************************

// ********** Begin Class ACityParcelPCGHostActor Function InitializeFromParcel ********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ACityParcelPCGHostActor_InitializeFromParcel_Statics
struct UHT_STATICS
{
	struct CityParcelPCGHostActor_eventInitializeFromParcel_Parms
	{
		const UCityParcel* Parcel;
		const ACityBlock* OwningBlock;
		TSubclassOf<ULandUse> LandUseClass;
		int32 ParcelIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "CityBLD|PCG" },
		{ "Comment", "/**\n\x09 * Initialize this host actor from parcel data and trigger PCG generation.\n\x09 * \n\x09 * @param Parcel - The parcel providing shape points\n\x09 * @param OwningBlock - The city block that owns the parcel\n\x09 * @param LandUse - The land use asset containing the graph to run (if any)\n\x09 * @param ParcelIndex - Index of this parcel within the block (used for seed generation)\n\x09 */" },
		{ "CPP_Default_ParcelIndex", "0" },
		{ "ModuleRelativePath", "Public/CityParcelPCGHostActor.h" },
		{ "ToolTip", "Initialize this host actor from parcel data and trigger PCG generation.\n\n@param Parcel - The parcel providing shape points\n@param OwningBlock - The city block that owns the parcel\n@param LandUse - The land use asset containing the graph to run (if any)\n@param ParcelIndex - Index of this parcel within the block (used for seed generation)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parcel_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningBlock_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function InitializeFromParcel constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parcel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningBlock;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LandUseClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParcelIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InitializeFromParcel constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InitializeFromParcel Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Parcel = { "Parcel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(CityParcelPCGHostActor_eventInitializeFromParcel_Parms, Parcel), Z_Construct_UClass_UCityParcel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parcel_MetaData), NewProp_Parcel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_OwningBlock = { "OwningBlock", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(CityParcelPCGHostActor_eventInitializeFromParcel_Parms, OwningBlock), Z_Construct_UClass_ACityBlock, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningBlock_MetaData), NewProp_OwningBlock_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_LandUseClass = { "LandUseClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(CityParcelPCGHostActor_eventInitializeFromParcel_Parms, LandUseClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULandUse, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ParcelIndex = { "ParcelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(CityParcelPCGHostActor_eventInitializeFromParcel_Parms, ParcelIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Parcel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OwningBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandUseClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParcelIndex,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function InitializeFromParcel Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ACityParcelPCGHostActor, nullptr, "InitializeFromParcel", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::CityParcelPCGHostActor_eventInitializeFromParcel_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::CityParcelPCGHostActor_eventInitializeFromParcel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACityParcelPCGHostActor_InitializeFromParcel(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ACityParcelPCGHostActor::execInitializeFromParcel)
{
	P_GET_OBJECT(UCityParcel,Z_Param_Parcel);
	P_GET_OBJECT(ACityBlock,Z_Param_OwningBlock);
	P_GET_OBJECT(UClass,Z_Param_LandUseClass);
	P_GET_PROPERTY(FIntProperty,Z_Param_ParcelIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeFromParcel(Z_Param_Parcel,Z_Param_OwningBlock,Z_Param_LandUseClass,Z_Param_ParcelIndex);
	P_NATIVE_END;
}
// ********** End Class ACityParcelPCGHostActor Function InitializeFromParcel **********************

// ********** Begin Class ACityParcelPCGHostActor **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ACityParcelPCGHostActor_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ACityParcelPCGHostActor - Lightweight actor that hosts PCG generation for a single parcel.\n * \n * Contains a closed-loop spline representing the parcel boundary (for PCG graph input)\n * and a UPCGComponent that runs the assigned graph. Spawned/managed by UCityParcel\n * (Deprecated) Previously spawned/managed by UCityParcel for per-parcel PCG. Block-level PCG is now preferred.\n */" },
		{ "IncludePath", "CityParcelPCGHostActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CityParcelPCGHostActor.h" },
		{ "ToolTip", "ACityParcelPCGHostActor - Lightweight actor that hosts PCG generation for a single parcel.\n\nContains a closed-loop spline representing the parcel boundary (for PCG graph input)\nand a UPCGComponent that runs the assigned graph. Spawned/managed by UCityParcel\n(Deprecated) Previously spawned/managed by UCityParcel for per-parcel PCG. Block-level PCG is now preferred." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParcelBoundarySpline_MetaData[] = {
		{ "Category", "CityBLD|PCG" },
		{ "Comment", "/** Closed-loop spline representing the parcel boundary polygon. PCG graphs should use this as input. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CityParcelPCGHostActor.h" },
		{ "ToolTip", "Closed-loop spline representing the parcel boundary polygon. PCG graphs should use this as input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PCGComponent_MetaData[] = {
		{ "Category", "CityBLD|PCG" },
		{ "Comment", "/** PCG component that runs the assigned graph */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CityParcelPCGHostActor.h" },
		{ "ToolTip", "PCG component that runs the assigned graph" },
	};
#endif // WITH_METADATA

// ********** Begin Class ACityParcelPCGHostActor constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParcelBoundarySpline;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PCGComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ACityParcelPCGHostActor constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CleanupPCG"), .Pointer = &ACityParcelPCGHostActor::execCleanupPCG },
		{ .NameUTF8 = UTF8TEXT("InitializeFromParcel"), .Pointer = &ACityParcelPCGHostActor::execInitializeFromParcel },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACityParcelPCGHostActor_CleanupPCG, "CleanupPCG" }, // d44c87df8a2021711b0369061b048b9ff2e7828b
		{ &Z_Construct_UFunction_ACityParcelPCGHostActor_InitializeFromParcel, "InitializeFromParcel" }, // a055feba14a28955f11ad0a90b547f345c961127
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACityParcelPCGHostActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ACityParcelPCGHostActor Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ParcelBoundarySpline = { "ParcelBoundarySpline", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ACityParcelPCGHostActor, ParcelBoundarySpline), Z_Construct_UClass_UCityBLDSplineComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParcelBoundarySpline_MetaData), NewProp_ParcelBoundarySpline_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PCGComponent = { "PCGComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ACityParcelPCGHostActor, PCGComponent), Z_Construct_UClass_UPCGComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PCGComponent_MetaData), NewProp_PCGComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ParcelBoundarySpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PCGComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ACityParcelPCGHostActor Property Definitions *******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ACityParcelPCGHostActor,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void ACityParcelPCGHostActor_StaticRegisterNativesACityParcelPCGHostActor()
{
	UClass* Class = ACityParcelPCGHostActor::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACityParcelPCGHostActor;
UClass* Z_Construct_UClass_ACityParcelPCGHostActor(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ACityParcelPCGHostActor;
		if (!Z_Registration_Info_UClass_ACityParcelPCGHostActor.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CityParcelPCGHostActor"),
				Z_Registration_Info_UClass_ACityParcelPCGHostActor.InnerSingleton,
				ACityParcelPCGHostActor_StaticRegisterNativesACityParcelPCGHostActor,
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
		return Z_Registration_Info_UClass_ACityParcelPCGHostActor.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ACityParcelPCGHostActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACityParcelPCGHostActor.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ACityParcelPCGHostActor.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ACityParcelPCGHostActor);
ACityParcelPCGHostActor::~ACityParcelPCGHostActor() {}
// ********** End Class ACityParcelPCGHostActor ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityParcelPCGHostActor_h__Script_CityBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACityParcelPCGHostActor, TEXT("ACityParcelPCGHostActor"), &Z_Registration_Info_UClass_ACityParcelPCGHostActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACityParcelPCGHostActor), 2301661599U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityParcelPCGHostActor_h__Script_CityBLDRuntime_3bcaad0e52c831df338c59bec90132b781c4bc5d{
	TEXT("/Script/CityBLDRuntime"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
