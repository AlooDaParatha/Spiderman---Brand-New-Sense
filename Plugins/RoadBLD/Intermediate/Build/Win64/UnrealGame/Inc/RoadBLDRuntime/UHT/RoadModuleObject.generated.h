// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoadModuleObject.h"

#ifdef ROADBLDRUNTIME_RoadModuleObject_generated_h
#error "RoadModuleObject.generated.h already included, missing '#pragma once' in RoadModuleObject.h"
#endif
#define ROADBLDRUNTIME_RoadModuleObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ERoadModulePosition : uint8;
struct FRoadModuleParameters;

// ********** Begin ScriptStruct FSpawnModulesParams ***********************************************
struct Z_Construct_UScriptStruct_FSpawnModulesParams_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnModulesParams(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadModuleObject_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSpawnModulesParams_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FSpawnModulesParams(ETypeConstructPhase::Inner); }


struct FSpawnModulesParams;
// ********** End ScriptStruct FSpawnModulesParams *************************************************

// ********** Begin ScriptStruct FRoadModuleParameters *********************************************
struct Z_Construct_UScriptStruct_FRoadModuleParameters_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadModuleParameters(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadModuleObject_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRoadModuleParameters_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FRoadModuleParameters(ETypeConstructPhase::Inner); }


struct FRoadModuleParameters;
// ********** End ScriptStruct FRoadModuleParameters ***********************************************

// ********** Begin Class URoadModuleObject ********************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadModuleObject_h_224_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasProceduralCrossSectionDefinition); \
	DECLARE_FUNCTION(execShouldReverseProfileCurve); \
	DECLARE_FUNCTION(execGetEffectiveModulePosition); \
	DECLARE_FUNCTION(execGetEffectiveEndDistance); \
	DECLARE_FUNCTION(execShouldApplyAtDistance); \
	DECLARE_FUNCTION(execInitialize);


struct Z_Construct_UClass_URoadModuleObject_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadModuleObject(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadModuleObject_h_224_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URoadModuleObject_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_URoadModuleObject(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URoadModuleObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_URoadModuleObject) \
	DECLARE_SERIALIZER(URoadModuleObject)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadModuleObject_h_224_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoadModuleObject(URoadModuleObject&&) = delete; \
	URoadModuleObject(const URoadModuleObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoadModuleObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoadModuleObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URoadModuleObject) \
	NO_API virtual ~URoadModuleObject();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadModuleObject_h_221_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadModuleObject_h_224_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadModuleObject_h_224_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadModuleObject_h_224_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadModuleObject_h_224_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoadModuleObject;

// ********** End Class URoadModuleObject **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadModuleObject_h

// ********** Begin Enum EMeshType *****************************************************************
#define FOREACH_ENUM_EMESHTYPE(op) \
	op(EMeshType::ProceduralMesh) \
	op(EMeshType::SplineMeshes) \
	op(EMeshType::StaticMeshes) 

enum class EMeshType : uint8;
template<> struct TIsUEnumClass<EMeshType> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EMeshType>();
// ********** End Enum EMeshType *******************************************************************

// ********** Begin Enum ERoadModuleCrossSectionSource *********************************************
#define FOREACH_ENUM_EROADMODULECROSSSECTIONSOURCE(op) \
	op(ERoadModuleCrossSectionSource::CurveFloat) \
	op(ERoadModuleCrossSectionSource::VectorArray) 

enum class ERoadModuleCrossSectionSource : uint8;
template<> struct TIsUEnumClass<ERoadModuleCrossSectionSource> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ERoadModuleCrossSectionSource>();
// ********** End Enum ERoadModuleCrossSectionSource ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
