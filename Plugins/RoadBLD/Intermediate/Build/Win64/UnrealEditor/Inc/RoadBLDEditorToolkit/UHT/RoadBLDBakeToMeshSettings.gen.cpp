// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BakeToMesh/RoadBLDBakeToMeshSettings.h"
#include "MeshMerge/MeshMergingSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRoadBLDBakeToMeshSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshMergingSettings(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FRoadBLDBakeToMeshBatchResult(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UScriptStruct* Z_Construct_UScriptStruct_FRoadBLDBakeToMeshOptions(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadBLDBakeToMeshSettings(ETypeConstructPhase);
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadBLDBakeToMeshSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class URoadBLDBakeToMeshSettings ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_URoadBLDBakeToMeshSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * Editor settings object shown in the Bake To Mesh dialog.\n */" },
		{ "IncludePath", "BakeToMesh/RoadBLDBakeToMeshSettings.h" },
		{ "ModuleRelativePath", "Public/BakeToMesh/RoadBLDBakeToMeshSettings.h" },
		{ "ToolTip", "Editor settings object shown in the Bake To Mesh dialog." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergeSettings_MetaData[] = {
		{ "Category", "Merge" },
		{ "ModuleRelativePath", "Public/BakeToMesh/RoadBLDBakeToMeshSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowAdvancedMergeSettings_MetaData[] = {
		{ "Category", "Merge" },
		{ "ModuleRelativePath", "Public/BakeToMesh/RoadBLDBakeToMeshSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMergeAllIntoOneMesh_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/BakeToMesh/RoadBLDBakeToMeshSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMergeProps_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/BakeToMesh/RoadBLDBakeToMeshSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnMergedActor_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/BakeToMesh/RoadBLDBakeToMeshSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplaceSourceActors_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/BakeToMesh/RoadBLDBakeToMeshSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavePackagePath_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/BakeToMesh/RoadBLDBakeToMeshSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URoadBLDBakeToMeshSettings constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_MergeSettings;
	static void NewProp_bShowAdvancedMergeSettings_SetBit(void* Obj)
	{
		((URoadBLDBakeToMeshSettings*)Obj)->bShowAdvancedMergeSettings = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowAdvancedMergeSettings;
	static void NewProp_bMergeAllIntoOneMesh_SetBit(void* Obj)
	{
		((URoadBLDBakeToMeshSettings*)Obj)->bMergeAllIntoOneMesh = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeAllIntoOneMesh;
	static void NewProp_bMergeProps_SetBit(void* Obj)
	{
		((URoadBLDBakeToMeshSettings*)Obj)->bMergeProps = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeProps;
	static void NewProp_bSpawnMergedActor_SetBit(void* Obj)
	{
		((URoadBLDBakeToMeshSettings*)Obj)->bSpawnMergedActor = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnMergedActor;
	static void NewProp_bReplaceSourceActors_SetBit(void* Obj)
	{
		((URoadBLDBakeToMeshSettings*)Obj)->bReplaceSourceActors = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceSourceActors;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SavePackagePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URoadBLDBakeToMeshSettings constinit property declarations *****************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoadBLDBakeToMeshSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class URoadBLDBakeToMeshSettings Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_MergeSettings = { "MergeSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDBakeToMeshSettings, MergeSettings), Z_Construct_UScriptStruct_FMeshMergingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergeSettings_MetaData), NewProp_MergeSettings_MetaData) }; // c82710ae0baa110f4dff44038b06f04a71f173dc
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShowAdvancedMergeSettings = { "bShowAdvancedMergeSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDBakeToMeshSettings), &UHT_STATICS::NewProp_bShowAdvancedMergeSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowAdvancedMergeSettings_MetaData), NewProp_bShowAdvancedMergeSettings_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bMergeAllIntoOneMesh = { "bMergeAllIntoOneMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDBakeToMeshSettings), &UHT_STATICS::NewProp_bMergeAllIntoOneMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMergeAllIntoOneMesh_MetaData), NewProp_bMergeAllIntoOneMesh_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bMergeProps = { "bMergeProps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDBakeToMeshSettings), &UHT_STATICS::NewProp_bMergeProps_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMergeProps_MetaData), NewProp_bMergeProps_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bSpawnMergedActor = { "bSpawnMergedActor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDBakeToMeshSettings), &UHT_STATICS::NewProp_bSpawnMergedActor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSpawnMergedActor_MetaData), NewProp_bSpawnMergedActor_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bReplaceSourceActors = { "bReplaceSourceActors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(URoadBLDBakeToMeshSettings), &UHT_STATICS::NewProp_bReplaceSourceActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplaceSourceActors_MetaData), NewProp_bReplaceSourceActors_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_SavePackagePath = { "SavePackagePath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(URoadBLDBakeToMeshSettings, SavePackagePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavePackagePath_MetaData), NewProp_SavePackagePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MergeSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShowAdvancedMergeSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bMergeAllIntoOneMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bMergeProps,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bSpawnMergedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bReplaceSourceActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SavePackagePath,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class URoadBLDBakeToMeshSettings Property Definitions ****************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_URoadBLDBakeToMeshSettings,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_URoadBLDBakeToMeshSettings;
UClass* Z_Construct_UClass_URoadBLDBakeToMeshSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = URoadBLDBakeToMeshSettings;
		if (!Z_Registration_Info_UClass_URoadBLDBakeToMeshSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RoadBLDBakeToMeshSettings"),
				Z_Registration_Info_UClass_URoadBLDBakeToMeshSettings.InnerSingleton,
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
		return Z_Registration_Info_UClass_URoadBLDBakeToMeshSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_URoadBLDBakeToMeshSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoadBLDBakeToMeshSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_URoadBLDBakeToMeshSettings.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URoadBLDBakeToMeshSettings);
URoadBLDBakeToMeshSettings::~URoadBLDBakeToMeshSettings() {}
// ********** End Class URoadBLDBakeToMeshSettings *************************************************

// ********** Begin ScriptStruct FRoadBLDBakeToMeshOptions *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRoadBLDBakeToMeshOptions_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRoadBLDBakeToMeshOptions>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRoadBLDBakeToMeshOptions); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * Options returned from the modal dialog for execution.\n */" },
		{ "ModuleRelativePath", "Public/BakeToMesh/RoadBLDBakeToMeshSettings.h" },
		{ "ToolTip", "Options returned from the modal dialog for execution." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRoadBLDBakeToMeshOptions constinit property declarations *********
// ********** End ScriptStruct FRoadBLDBakeToMeshOptions constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadBLDBakeToMeshOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	&NewStructOps,
	"RoadBLDBakeToMeshOptions",
	nullptr,
	0,
	DataSizeOf<FRoadBLDBakeToMeshOptions>(),
	alignof(FRoadBLDBakeToMeshOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRoadBLDBakeToMeshOptions;
UScriptStruct* Z_Construct_UScriptStruct_FRoadBLDBakeToMeshOptions(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRoadBLDBakeToMeshOptions.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRoadBLDBakeToMeshOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadBLDBakeToMeshOptions, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("RoadBLDBakeToMeshOptions"));
		}
		return Z_Registration_Info_UScriptStruct_FRoadBLDBakeToMeshOptions.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRoadBLDBakeToMeshOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRoadBLDBakeToMeshOptions.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRoadBLDBakeToMeshOptions.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRoadBLDBakeToMeshOptions *******************************************

// ********** Begin ScriptStruct FRoadBLDBakeToMeshBatchResult *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FRoadBLDBakeToMeshBatchResult_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FRoadBLDBakeToMeshBatchResult>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRoadBLDBakeToMeshBatchResult); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * Result of a single merge batch.\n */" },
		{ "ModuleRelativePath", "Public/BakeToMesh/RoadBLDBakeToMeshSettings.h" },
		{ "ToolTip", "Result of a single merge batch." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRoadBLDBakeToMeshBatchResult constinit property declarations *****
// ********** End ScriptStruct FRoadBLDBakeToMeshBatchResult constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoadBLDBakeToMeshBatchResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit,
	nullptr,
	&NewStructOps,
	"RoadBLDBakeToMeshBatchResult",
	nullptr,
	0,
	DataSizeOf<FRoadBLDBakeToMeshBatchResult>(),
	alignof(FRoadBLDBakeToMeshBatchResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRoadBLDBakeToMeshBatchResult;
UScriptStruct* Z_Construct_UScriptStruct_FRoadBLDBakeToMeshBatchResult(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FRoadBLDBakeToMeshBatchResult.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FRoadBLDBakeToMeshBatchResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoadBLDBakeToMeshBatchResult, (UObject*)Z_Construct_UPackage__Script_RoadBLDEditorToolkit(ETypeConstructPhase::Outer), TEXT("RoadBLDBakeToMeshBatchResult"));
		}
		return Z_Registration_Info_UScriptStruct_FRoadBLDBakeToMeshBatchResult.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FRoadBLDBakeToMeshBatchResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRoadBLDBakeToMeshBatchResult.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRoadBLDBakeToMeshBatchResult.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FRoadBLDBakeToMeshBatchResult ***************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_BakeToMesh_RoadBLDBakeToMeshSettings_h__Script_RoadBLDEditorToolkit_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FRoadBLDBakeToMeshOptions, Z_Construct_UScriptStruct_FRoadBLDBakeToMeshOptions_Statics::NewStructOps, TEXT("RoadBLDBakeToMeshOptions"),&Z_Registration_Info_UScriptStruct_FRoadBLDBakeToMeshOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadBLDBakeToMeshOptions), 908051832U) },
		{ Z_Construct_UScriptStruct_FRoadBLDBakeToMeshBatchResult, Z_Construct_UScriptStruct_FRoadBLDBakeToMeshBatchResult_Statics::NewStructOps, TEXT("RoadBLDBakeToMeshBatchResult"),&Z_Registration_Info_UScriptStruct_FRoadBLDBakeToMeshBatchResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoadBLDBakeToMeshBatchResult), 231274188U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URoadBLDBakeToMeshSettings, TEXT("URoadBLDBakeToMeshSettings"), &Z_Registration_Info_UClass_URoadBLDBakeToMeshSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoadBLDBakeToMeshSettings), 1178665752U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_BakeToMesh_RoadBLDBakeToMeshSettings_h__Script_RoadBLDEditorToolkit_561cc1688df49847ecf74628b30e6e57c027f7e8{
	TEXT("/Script/RoadBLDEditorToolkit"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
