// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingShapeSplineComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeBuildingShapeSplineComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USplineComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_CityBLDEditor(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingShapeSplineComponent(ETypeConstructPhase);
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UBuildingShapeSplineComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UBuildingShapeSplineComponent ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UBuildingShapeSplineComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/** Transient spline used by UBuildingShapeController. Locked to a closed linear polygon on a world-XY plane. */" },
		{ "HideCategories", "Activation Physics Collision HLOD LOD TextureStreaming Navigation RayTracing Lighting Rendering Mobile Trigger VirtualTexture" },
		{ "IncludePath", "BuildingShapeSplineComponent.h" },
		{ "ModuleRelativePath", "Public/BuildingShapeSplineComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Transient spline used by UBuildingShapeController. Locked to a closed linear polygon on a world-XY plane." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockedWorldZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuildingShapeSplineComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UBuildingShapeSplineComponent constinit property declarations ************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LockedWorldZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UBuildingShapeSplineComponent constinit property declarations **************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildingShapeSplineComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UBuildingShapeSplineComponent Property Definitions ***********************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_LockedWorldZ = { "LockedWorldZ", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UBuildingShapeSplineComponent, LockedWorldZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockedWorldZ_MetaData), NewProp_LockedWorldZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LockedWorldZ,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UBuildingShapeSplineComponent Property Definitions *************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_USplineComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_CityBLDEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UBuildingShapeSplineComponent,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UBuildingShapeSplineComponent;
UClass* Z_Construct_UClass_UBuildingShapeSplineComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UBuildingShapeSplineComponent;
		if (!Z_Registration_Info_UClass_UBuildingShapeSplineComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("BuildingShapeSplineComponent"),
				Z_Registration_Info_UClass_UBuildingShapeSplineComponent.InnerSingleton,
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
		return Z_Registration_Info_UClass_UBuildingShapeSplineComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UBuildingShapeSplineComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildingShapeSplineComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuildingShapeSplineComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBuildingShapeSplineComponent);
UBuildingShapeSplineComponent::~UBuildingShapeSplineComponent() {}
// ********** End Class UBuildingShapeSplineComponent **********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BuildingShapeSplineComponent_h__Script_CityBLDEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBuildingShapeSplineComponent, TEXT("UBuildingShapeSplineComponent"), &Z_Registration_Info_UClass_UBuildingShapeSplineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildingShapeSplineComponent), 1564445986U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_BuildingShapeSplineComponent_h__Script_CityBLDEditor_365a69b116355f7dafb2919c226943e0f0ab0464{
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
