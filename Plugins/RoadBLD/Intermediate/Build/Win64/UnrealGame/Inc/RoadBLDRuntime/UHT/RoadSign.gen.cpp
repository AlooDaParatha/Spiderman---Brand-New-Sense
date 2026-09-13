// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoadSign.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRoadSign() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHorizTextAligment(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVerticalTextAligment(ETypeConstructPhase);
WORLDBLDRUNTIME_API UClass* Z_Construct_UClass_AWorldBLDPrefab(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UFont(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ARoadSign(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadSignTextEntry(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ARoadSign(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FRoadSignTextEntry ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRoadSignTextEntry_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRoadSignTextEntry>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRoadSignTextEntry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A single text entry for a road sign with its position\n" },
		{ "ModuleRelativePath", "Classes/RoadSign.h" },
		{ "ToolTip", "A single text entry for a road sign with its position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "RoadSign" },
		{ "Comment", "// The text to display on the sign\n" },
		{ "ModuleRelativePath", "Classes/RoadSign.h" },
		{ "ToolTip", "The text to display on the sign" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "RoadSign" },
		{ "Comment", "// Position offset in local space (X = horizontal, Y = vertical/height on the sign)\n// Note: Y component translates to Z (up) in 3D space, as the sign faces forward\n" },
		{ "ModuleRelativePath", "Classes/RoadSign.h" },
		{ "ToolTip", "Position offset in local space (X = horizontal, Y = vertical/height on the sign)\nNote: Y component translates to Z (up) in 3D space, as the sign faces forward" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
		{ "Category", "RoadSign|Appearance" },
		{ "Comment", "// Font to use for this text entry\n" },
		{ "ModuleRelativePath", "Classes/RoadSign.h" },
		{ "ToolTip", "Font to use for this text entry" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextMaterial_MetaData[] = {
		{ "Category", "RoadSign|Appearance" },
		{ "Comment", "// Material to use for rendering the text (e.g., DefaultTextMaterialOpaque)\n// If not set, will use the font's default material or engine default\n" },
		{ "ModuleRelativePath", "Classes/RoadSign.h" },
		{ "ToolTip", "Material to use for rendering the text (e.g., DefaultTextMaterialOpaque)\nIf not set, will use the font's default material or engine default" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldSize_MetaData[] = {
		{ "Category", "RoadSign|Appearance" },
		{ "Comment", "// Size of the text in world units\n" },
		{ "ModuleRelativePath", "Classes/RoadSign.h" },
		{ "ToolTip", "Size of the text in world units" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[] = {
		{ "Category", "RoadSign|Appearance" },
		{ "Comment", "// Color of the text\n" },
		{ "ModuleRelativePath", "Classes/RoadSign.h" },
		{ "ToolTip", "Color of the text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "RoadSign|Appearance" },
		{ "Comment", "// Horizontal alignment of the text\n" },
		{ "ModuleRelativePath", "Classes/RoadSign.h" },
		{ "ToolTip", "Horizontal alignment of the text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "RoadSign|Appearance" },
		{ "Comment", "// Vertical alignment of the text\n" },
		{ "ModuleRelativePath", "Classes/RoadSign.h" },
		{ "ToolTip", "Vertical alignment of the text" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRoadSignTextEntry constinit property declarations ****************
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Font;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRoadSignTextEntry constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadSignTextEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FRoadSignTextEntry Property Definitions ***************************
const UECodeGen_Private::FTextPropertyParams UHT_STATICS::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadSignTextEntry, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadSignTextEntry, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadSignTextEntry, Font), Z_Construct_UClass_UFont, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Font_MetaData), NewProp_Font_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TextMaterial = { "TextMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadSignTextEntry, TextMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextMaterial_MetaData), NewProp_TextMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_WorldSize = { "WorldSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadSignTextEntry, WorldSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldSize_MetaData), NewProp_WorldSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadSignTextEntry, TextColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextColor_MetaData), NewProp_TextColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadSignTextEntry, HorizontalAlignment), Z_Construct_UEnum_Engine_EHorizTextAligment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalAlignment_MetaData), NewProp_HorizontalAlignment_MetaData) }; // fa6787cccc34defa42f86f4c2f1039b10e566606
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(FRoadSignTextEntry, VerticalAlignment), Z_Construct_UEnum_Engine_EVerticalTextAligment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalAlignment_MetaData), NewProp_VerticalAlignment_MetaData) }; // 97b8d4adb060f61286e49c3796a3c853fa8ba4af
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Font,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HorizontalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_VerticalAlignment,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FRoadSignTextEntry Property Definitions *****************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"RoadSignTextEntry",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FRoadSignTextEntry>(),
	alignof(FRoadSignTextEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRoadSignTextEntry;
UScriptStruct* Z_Construct_UScriptStruct_FRoadSignTextEntry(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRoadSignTextEntry.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRoadSignTextEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadSignTextEntry, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("RoadSignTextEntry"));
		}
		return Z_Registration_Info_UScriptStruct_FRoadSignTextEntry.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRoadSignTextEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRoadSignTextEntry.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRoadSignTextEntry.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRoadSignTextEntry **************************************************

// ********** Begin Class ARoadSign Function UpdateSign ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARoadSign_UpdateSign_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "RoadSign" },
		{ "Comment", "// Rebuilds the sign, regenerating all text render components\n" },
		{ "ModuleRelativePath", "Classes/RoadSign.h" },
		{ "ToolTip", "Rebuilds the sign, regenerating all text render components" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateSign constinit property declarations ****************************
// ********** End Function UpdateSign constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARoadSign, nullptr, "UpdateSign", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_ARoadSign_UpdateSign(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARoadSign::execUpdateSign)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateSign();
	P_NATIVE_END;
}
// ********** End Class ARoadSign Function UpdateSign **********************************************

// ********** Begin Class ARoadSign ****************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ARoadSign_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A road sign prefab that can display multiple text elements\n" },
		{ "IncludePath", "RoadSign.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/RoadSign.h" },
		{ "ToolTip", "A road sign prefab that can display multiple text elements" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextEntries_MetaData[] = {
		{ "Category", "RoadSign" },
		{ "Comment", "// Array of text entries to display on the sign\n" },
		{ "ModuleRelativePath", "Classes/RoadSign.h" },
		{ "ToolTip", "Array of text entries to display on the sign" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextComponents_MetaData[] = {
		{ "Comment", "// Dynamically created text render components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/RoadSign.h" },
		{ "ToolTip", "Dynamically created text render components" },
	};
#endif // WITH_METADATA

// ********** Begin Class ARoadSign constinit property declarations ********************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextEntries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TextEntries;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TextComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ARoadSign constinit property declarations **********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("UpdateSign"), .Pointer = &ARoadSign::execUpdateSign },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARoadSign_UpdateSign, "UpdateSign" }, // 9c369595d9c355085bdae010df2afcf4ab10a9d3
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoadSign>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ARoadSign Property Definitions *******************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_TextEntries_Inner = { "TextEntries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRoadSignTextEntry, METADATA_PARAMS(0, nullptr) }; // fea33fbaaf32b82ca1fee690ea2deed0b441c0d9
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_TextEntries = { "TextEntries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadSign, TextEntries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextEntries_MetaData), NewProp_TextEntries_MetaData) }; // fea33fbaaf32b82ca1fee690ea2deed0b441c0d9
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TextComponents_Inner = { "TextComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTextRenderComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_TextComponents = { "TextComponents", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ARoadSign, TextComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextComponents_MetaData), NewProp_TextComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextEntries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TextComponents,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ARoadSign Property Definitions *********************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AWorldBLDPrefab,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ARoadSign,
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
static void ARoadSign_StaticRegisterNativesARoadSign()
{
	UClass* Class = ARoadSign::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARoadSign;
UClass* Z_Construct_UClass_ARoadSign(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ARoadSign;
		if (!Z_Registration_Info_UClass_ARoadSign.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadSign"),
				Z_Registration_Info_UClass_ARoadSign.InnerSingleton,
				ARoadSign_StaticRegisterNativesARoadSign,
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
		return Z_Registration_Info_UClass_ARoadSign.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ARoadSign.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoadSign.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ARoadSign.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARoadSign);
ARoadSign::~ARoadSign() {}
// ********** End Class ARoadSign ******************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadSign_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FRoadSignTextEntry, Z_Construct_UScriptStruct_FRoadSignTextEntry_Statics::NewStructOps, TEXT("RoadSignTextEntry"),&Z_Registration_Info_UScriptStruct_FRoadSignTextEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadSignTextEntry), 4272111546U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARoadSign, TEXT("ARoadSign"), &Z_Registration_Info_UClass_ARoadSign, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoadSign), 3151331799U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadSign_h__Script_RoadBLDRuntime_232fc2f2099b83125261c90c912427b01de83e40{
	TEXT("/Script/RoadBLDRuntime"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
