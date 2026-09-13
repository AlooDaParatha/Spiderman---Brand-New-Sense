// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DynamicLandscape/LandscapeMirrorSpline.h"

#ifdef ROADBLDRUNTIME_LandscapeMirrorSpline_generated_h
#error "LandscapeMirrorSpline.generated.h already included, missing '#pragma once' in LandscapeMirrorSpline.h"
#endif
#define ROADBLDRUNTIME_LandscapeMirrorSpline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLandscapeControlPointData ****************************************
struct Z_Construct_UScriptStruct_FLandscapeControlPointData_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeControlPointData(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicLandscape_LandscapeMirrorSpline_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapeControlPointData_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FLandscapeControlPointData(ETypeConstructPhase::Inner); }


struct FLandscapeControlPointData;
// ********** End ScriptStruct FLandscapeControlPointData ******************************************

// ********** Begin Class ULandscapeMirrorSplineMetadata *******************************************
struct Z_Construct_UClass_ULandscapeMirrorSplineMetadata_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ULandscapeMirrorSplineMetadata(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicLandscape_LandscapeMirrorSpline_h_68_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ULandscapeMirrorSplineMetadata_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_ULandscapeMirrorSplineMetadata(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ULandscapeMirrorSplineMetadata, USplineMetadata, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_ULandscapeMirrorSplineMetadata) \
	DECLARE_SERIALIZER(ULandscapeMirrorSplineMetadata)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicLandscape_LandscapeMirrorSpline_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandscapeMirrorSplineMetadata(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeMirrorSplineMetadata(ULandscapeMirrorSplineMetadata&&) = delete; \
	ULandscapeMirrorSplineMetadata(const ULandscapeMirrorSplineMetadata&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapeMirrorSplineMetadata); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeMirrorSplineMetadata); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeMirrorSplineMetadata) \
	NO_API virtual ~ULandscapeMirrorSplineMetadata();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicLandscape_LandscapeMirrorSpline_h_65_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicLandscape_LandscapeMirrorSpline_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicLandscape_LandscapeMirrorSpline_h_68_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicLandscape_LandscapeMirrorSpline_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeMirrorSplineMetadata;

// ********** End Class ULandscapeMirrorSplineMetadata *********************************************

// ********** Begin Class ULandscapeMirrorSplineBase ***********************************************
struct Z_Construct_UClass_ULandscapeMirrorSplineBase_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ULandscapeMirrorSplineBase(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicLandscape_LandscapeMirrorSpline_h_125_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ULandscapeMirrorSplineBase_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_ULandscapeMirrorSplineBase(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ULandscapeMirrorSplineBase, USplineComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_ULandscapeMirrorSplineBase) \
	DECLARE_SERIALIZER(ULandscapeMirrorSplineBase)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicLandscape_LandscapeMirrorSpline_h_125_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandscapeMirrorSplineBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeMirrorSplineBase(ULandscapeMirrorSplineBase&&) = delete; \
	ULandscapeMirrorSplineBase(const ULandscapeMirrorSplineBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapeMirrorSplineBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeMirrorSplineBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeMirrorSplineBase) \
	NO_API virtual ~ULandscapeMirrorSplineBase();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicLandscape_LandscapeMirrorSpline_h_122_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicLandscape_LandscapeMirrorSpline_h_125_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicLandscape_LandscapeMirrorSpline_h_125_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicLandscape_LandscapeMirrorSpline_h_125_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeMirrorSplineBase;

// ********** End Class ULandscapeMirrorSplineBase *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_DynamicLandscape_LandscapeMirrorSpline_h

// ********** Begin Enum ELandscapeSplineVisibility ************************************************
#define FOREACH_ENUM_ELANDSCAPESPLINEVISIBILITY(op) \
	op(ELandscapeSplineVisibility::None) \
	op(ELandscapeSplineVisibility::Mesh) \
	op(ELandscapeSplineVisibility::Wireframe) 

enum class ELandscapeSplineVisibility;
template<> struct TIsUEnumClass<ELandscapeSplineVisibility> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeSplineVisibility>();
// ********** End Enum ELandscapeSplineVisibility **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
