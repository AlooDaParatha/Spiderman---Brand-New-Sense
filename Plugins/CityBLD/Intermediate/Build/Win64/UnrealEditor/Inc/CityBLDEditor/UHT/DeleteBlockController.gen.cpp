// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeleteBlockController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDeleteBlockController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor(ETypeConstructPhase);
WORLDBLDEDITOR_API UClass* Z_Construct_UClass_UWorldBLDEditController(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_ACityBlock(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UDeleteBlockController(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UDeleteBlockController(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UDeleteBlockController ***************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDeleteBlockController_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DeleteBlockController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DeleteBlockController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredBlockOutlineColor_MetaData[] = {
		{ "Category", "DeleteBlock" },
		{ "ModuleRelativePath", "Public/DeleteBlockController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutlineThickness_MetaData[] = {
		{ "Category", "DeleteBlock" },
		{ "ModuleRelativePath", "Public/DeleteBlockController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutlineZOffset_MetaData[] = {
		{ "Category", "DeleteBlock" },
		{ "ModuleRelativePath", "Public/DeleteBlockController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredBlock_MetaData[] = {
		{ "Category", "DeleteBlock|State" },
		{ "ModuleRelativePath", "Public/DeleteBlockController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDeleteBlockController constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredBlockOutlineColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutlineThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutlineZOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoveredBlock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDeleteBlockController constinit property declarations *********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeleteBlockController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UDeleteBlockController Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_HoveredBlockOutlineColor = { "HoveredBlockOutlineColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UDeleteBlockController, HoveredBlockOutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredBlockOutlineColor_MetaData), NewProp_HoveredBlockOutlineColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_OutlineThickness = { "OutlineThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UDeleteBlockController, OutlineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutlineThickness_MetaData), NewProp_OutlineThickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_OutlineZOffset = { "OutlineZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UDeleteBlockController, OutlineZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutlineZOffset_MetaData), NewProp_OutlineZOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HoveredBlock = { "HoveredBlock", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UDeleteBlockController, HoveredBlock), Z_Construct_UClass_ACityBlock, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredBlock_MetaData), NewProp_HoveredBlock_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HoveredBlockOutlineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutlineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutlineZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HoveredBlock,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UDeleteBlockController Property Definitions ********************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldBLDEditController,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDeleteBlockController,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UDeleteBlockController;
UClass* Z_Construct_UClass_UDeleteBlockController(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDeleteBlockController;
		if (!Z_Registration_Info_UClass_UDeleteBlockController.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DeleteBlockController"),
				Z_Registration_Info_UClass_UDeleteBlockController.InnerSingleton,
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
		return Z_Registration_Info_UClass_UDeleteBlockController.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDeleteBlockController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeleteBlockController.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDeleteBlockController.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDeleteBlockController);
UDeleteBlockController::~UDeleteBlockController() {}
// ********** End Class UDeleteBlockController *****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_DeleteBlockController_h__Script_CityBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDeleteBlockController, TEXT("UDeleteBlockController"), &Z_Registration_Info_UClass_UDeleteBlockController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeleteBlockController), 3958538786U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_DeleteBlockController_h__Script_CityBLDEditor_c474676257dcd9e7a049e03caaa75ff780720fb6{
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
