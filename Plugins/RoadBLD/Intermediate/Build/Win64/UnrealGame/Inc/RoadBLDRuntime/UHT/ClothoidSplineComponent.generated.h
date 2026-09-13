// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicRoad/ClothoidSplineComponent.h"

#ifdef ROADBLDRUNTIME_ClothoidSplineComponent_generated_h
#error "ClothoidSplineComponent.generated.h already included, missing '#pragma once' in ClothoidSplineComponent.h"
#endif
#define ROADBLDRUNTIME_ClothoidSplineComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADynamicRoad;

// ********** Begin Class UClothoidSplineMetadata **************************************************
struct Z_Construct_UClass_UClothoidSplineMetadata_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UClothoidSplineMetadata(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidSplineComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UClothoidSplineMetadata_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_UClothoidSplineMetadata(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UClothoidSplineMetadata, ULandscapeMirrorSplineMetadata, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_UClothoidSplineMetadata) \
	DECLARE_SERIALIZER(UClothoidSplineMetadata)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidSplineComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClothoidSplineMetadata(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClothoidSplineMetadata(UClothoidSplineMetadata&&) = delete; \
	UClothoidSplineMetadata(const UClothoidSplineMetadata&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClothoidSplineMetadata); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothoidSplineMetadata); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothoidSplineMetadata) \
	NO_API virtual ~UClothoidSplineMetadata();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidSplineComponent_h_13_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidSplineComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidSplineComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidSplineComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClothoidSplineMetadata;

// ********** End Class UClothoidSplineMetadata ****************************************************

// ********** Begin Class UClothoidSplineComponent *************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidSplineComponent_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetOwningClothoidRoad); \
	DECLARE_FUNCTION(execUpdateClothoidCurve);


struct Z_Construct_UClass_UClothoidSplineComponent_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UClothoidSplineComponent(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidSplineComponent_h_55_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UClothoidSplineComponent_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_UClothoidSplineComponent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UClothoidSplineComponent, ULandscapeMirrorSplineBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_UClothoidSplineComponent) \
	DECLARE_SERIALIZER(UClothoidSplineComponent) \
	[[deprecated("Do not call _getUObject(), use Cast.")]] virtual UObject* _getUObject() const override { return const_cast<UClothoidSplineComponent*>(this); }


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidSplineComponent_h_55_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClothoidSplineComponent(UClothoidSplineComponent&&) = delete; \
	UClothoidSplineComponent(const UClothoidSplineComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClothoidSplineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClothoidSplineComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClothoidSplineComponent) \
	NO_API virtual ~UClothoidSplineComponent();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidSplineComponent_h_52_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidSplineComponent_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidSplineComponent_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidSplineComponent_h_55_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidSplineComponent_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClothoidSplineComponent;

// ********** End Class UClothoidSplineComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicRoad_ClothoidSplineComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
