// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlockController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeBlockController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor(ETypeConstructPhase);
WORLDBLDEDITOR_API UClass* Z_Construct_UClass_UWorldBLDEditController(ETypeConstructPhase);
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_ACityBlock(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBlockController(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBlockController(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UBlockController *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UBlockController_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BlockController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BlockController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedBlockOutlineColor_MetaData[] = {
		{ "Category", "Block" },
		{ "ModuleRelativePath", "Public/BlockController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredBlockOutlineColor_MetaData[] = {
		{ "Category", "Block" },
		{ "ModuleRelativePath", "Public/BlockController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutlineThickness_MetaData[] = {
		{ "Category", "Block" },
		{ "ModuleRelativePath", "Public/BlockController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutlineZOffset_MetaData[] = {
		{ "Category", "Block" },
		{ "ModuleRelativePath", "Public/BlockController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveredBlock_MetaData[] = {
		{ "Category", "Block|State" },
		{ "ModuleRelativePath", "Public/BlockController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedBlock_MetaData[] = {
		{ "Category", "Block|State" },
		{ "ModuleRelativePath", "Public/BlockController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBlockController constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedBlockOutlineColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredBlockOutlineColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutlineThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutlineZOffset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoveredBlock;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedBlock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBlockController constinit property declarations ***************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlockController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UBlockController Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_SelectedBlockOutlineColor = { "SelectedBlockOutlineColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockController, SelectedBlockOutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedBlockOutlineColor_MetaData), NewProp_SelectedBlockOutlineColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_HoveredBlockOutlineColor = { "HoveredBlockOutlineColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockController, HoveredBlockOutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredBlockOutlineColor_MetaData), NewProp_HoveredBlockOutlineColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_OutlineThickness = { "OutlineThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockController, OutlineThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutlineThickness_MetaData), NewProp_OutlineThickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_OutlineZOffset = { "OutlineZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockController, OutlineZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutlineZOffset_MetaData), NewProp_OutlineZOffset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_HoveredBlock = { "HoveredBlock", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockController, HoveredBlock), Z_Construct_UClass_ACityBlock, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveredBlock_MetaData), NewProp_HoveredBlock_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SelectedBlock = { "SelectedBlock", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockController, SelectedBlock), Z_Construct_UClass_ACityBlock, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedBlock_MetaData), NewProp_SelectedBlock_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedBlockOutlineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HoveredBlockOutlineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutlineThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutlineZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HoveredBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedBlock,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UBlockController Property Definitions **************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UWorldBLDEditController,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UBlockController,
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
FClassRegistrationInfo Z_Registration_Info_UClass_UBlockController;
UClass* Z_Construct_UClass_UBlockController(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UBlockController;
		if (!Z_Registration_Info_UClass_UBlockController.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("BlockController"),
				Z_Registration_Info_UClass_UBlockController.InnerSingleton,
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
		return Z_Registration_Info_UClass_UBlockController.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UBlockController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlockController.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlockController.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBlockController);
UBlockController::~UBlockController() {}
// ********** End Class UBlockController ***********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BlockController_h__Script_CityBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlockController, TEXT("UBlockController"), &Z_Registration_Info_UClass_UBlockController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlockController), 3416282898U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BlockController_h__Script_CityBLDEditor_7c94778cbb1864d4fea6a650cc0c08311c407609{
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
