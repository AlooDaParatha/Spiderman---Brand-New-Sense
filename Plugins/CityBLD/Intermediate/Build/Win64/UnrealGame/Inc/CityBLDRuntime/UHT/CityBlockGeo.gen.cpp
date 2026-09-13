// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CityBlockGeo.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeCityBlockGeo() {}

// ********** Begin Cross Module References ********************************************************
WORLDBLDRUNTIME_API UClass* Z_Construct_UClass_AWorldBLDGeo(ETypeConstructPhase);
PCG_API UClass* Z_Construct_UClass_UPCGComponent(ETypeConstructPhase);
WORLDBLDRUNTIME_API UClass* Z_Construct_UClass_IWorldBLDContextMenuProvider(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDRuntime(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_ACityBlockGeo(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_ACityBlock(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_ACityBlockGeo(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class ACityBlockGeo ************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ACityBlockGeo_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * ACityBlockGeo - Geometry actor for city block mesh visualization.\n * Contains the generated mesh for a city block's inner loop polygon.\n * Extends AWorldBLDGeo to provide consistent behavior with other WorldBLD geometry actors.\n */" },
		{ "IncludePath", "CityBlockGeo.h" },
		{ "ModuleRelativePath", "Public/CityBlockGeo.h" },
		{ "ToolTip", "ACityBlockGeo - Geometry actor for city block mesh visualization.\nContains the generated mesh for a city block's inner loop polygon.\nExtends AWorldBLDGeo to provide consistent behavior with other WorldBLD geometry actors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceBlock_MetaData[] = {
		{ "Category", "CityBLD" },
		{ "Comment", "/** The source city block that this geometry was generated from */" },
		{ "ModuleRelativePath", "Public/CityBlockGeo.h" },
		{ "ToolTip", "The source city block that this geometry was generated from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockPCGComponent_MetaData[] = {
		{ "Category", "CityBLD|PCG" },
		{ "Comment", "/** PCG component that runs the block's PCG graph (typically District PCG; may fall back to SidewalkPreset PCG). */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CityBlockGeo.h" },
		{ "ToolTip", "PCG component that runs the block's PCG graph (typically District PCG; may fall back to SidewalkPreset PCG)." },
	};
#endif // WITH_METADATA

// ********** Begin Class ACityBlockGeo constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceBlock;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockPCGComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ACityBlockGeo constinit property declarations ******************************
	static FTypeConstructFunc* DependentSingletons[];
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACityBlockGeo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ACityBlockGeo Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SourceBlock = { "SourceBlock", nullptr, (EPropertyFlags)0x0114000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ACityBlockGeo, SourceBlock), Z_Construct_UClass_ACityBlock, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceBlock_MetaData), NewProp_SourceBlock_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_BlockPCGComponent = { "BlockPCGComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(ACityBlockGeo, BlockPCGComponent), Z_Construct_UClass_UPCGComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockPCGComponent_MetaData), NewProp_BlockPCGComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SourceBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlockPCGComponent,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ACityBlockGeo Property Definitions *****************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AWorldBLDGeo,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams UHT_STATICS::InterfaceParams[] = {
	{ Z_Construct_UClass_UWorldBLDContextMenuProvider, (int32)VTABLE_OFFSET(ACityBlockGeo, IWorldBLDContextMenuProvider), false },  // 635c874709b0b370d5678802c2bf09964c07979f
};
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ACityBlockGeo,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_ACityBlockGeo;
UClass* Z_Construct_UClass_ACityBlockGeo(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ACityBlockGeo;
		if (!Z_Registration_Info_UClass_ACityBlockGeo.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("CityBlockGeo"),
				Z_Registration_Info_UClass_ACityBlockGeo.InnerSingleton,
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
		return Z_Registration_Info_UClass_ACityBlockGeo.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ACityBlockGeo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACityBlockGeo.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ACityBlockGeo.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ACityBlockGeo);
ACityBlockGeo::~ACityBlockGeo() {}
// ********** End Class ACityBlockGeo **************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBlockGeo_h__Script_CityBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACityBlockGeo, TEXT("ACityBlockGeo"), &Z_Registration_Info_UClass_ACityBlockGeo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACityBlockGeo), 1493440071U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_CityBlockGeo_h__Script_CityBLDRuntime_a8b41476abd0719db7adab8fc201fb8eff9611f9{
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
