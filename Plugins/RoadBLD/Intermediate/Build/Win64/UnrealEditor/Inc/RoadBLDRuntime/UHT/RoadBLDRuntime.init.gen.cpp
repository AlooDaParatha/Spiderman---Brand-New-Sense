// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoadBLDRuntime_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
	ROADBLDRUNTIME_API UFunction* Z_Construct_UDelegateFunction_RoadBLDRuntime_OnSplinePointSelectionChanged__DelegateSignature(ETypeConstructPhase);
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RoadBLDRuntime;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase)
	{
		if (!Z_Registration_Info_UPackage__Script_RoadBLDRuntime.OuterSingleton)
		{
		static FTypeConstructFunc* SingletonFuncArray[] = {
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_RoadBLDRuntime_OnSplinePointSelectionChanged__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/RoadBLDRuntime",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x7F2D3625,
			0x6381A54F,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RoadBLDRuntime.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_RoadBLDRuntime.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RoadBLDRuntime(Z_Construct_UPackage__Script_RoadBLDRuntime, TEXT("/Script/RoadBLDRuntime"), Z_Registration_Info_UPackage__Script_RoadBLDRuntime, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7F2D3625, 0x6381A54F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
