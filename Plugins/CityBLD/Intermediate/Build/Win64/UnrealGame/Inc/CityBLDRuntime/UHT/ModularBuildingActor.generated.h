// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModularBuildingActor.h"

#ifdef CITYBLDRUNTIME_ModularBuildingActor_generated_h
#error "ModularBuildingActor.generated.h already included, missing '#pragma once' in ModularBuildingActor.h"
#endif
#define CITYBLDRUNTIME_ModularBuildingActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBuildingFace : uint8;
struct FBuildingRoofOverride;

// ********** Begin ScriptStruct FBuildingGenerationParameters *************************************
struct Z_Construct_UScriptStruct_FBuildingGenerationParameters_Statics;
CITYBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBuildingGenerationParameters(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_ModularBuildingActor_h_51_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBuildingGenerationParameters_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FBuildingGenerationParameters(ETypeConstructPhase::Inner); }


struct FBuildingGenerationParameters;
// ********** End ScriptStruct FBuildingGenerationParameters ***************************************

// ********** Begin ScriptStruct FAuthoredBuildingShell ********************************************
struct Z_Construct_UScriptStruct_FAuthoredBuildingShell_Statics;
CITYBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAuthoredBuildingShell(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_ModularBuildingActor_h_84_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAuthoredBuildingShell_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FAuthoredBuildingShell(ETypeConstructPhase::Inner); }


struct FAuthoredBuildingShell;
// ********** End ScriptStruct FAuthoredBuildingShell **********************************************

// ********** Begin ScriptStruct FAuthoredFloorPlate ***********************************************
struct Z_Construct_UScriptStruct_FAuthoredFloorPlate_Statics;
CITYBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAuthoredFloorPlate(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_ModularBuildingActor_h_101_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAuthoredFloorPlate_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FAuthoredFloorPlate(ETypeConstructPhase::Inner); }


struct FAuthoredFloorPlate;
// ********** End ScriptStruct FAuthoredFloorPlate *************************************************

// ********** Begin Class AModularBuildingActor ****************************************************
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_ModularBuildingActor_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetUseAuthoredFloorPlates); \
	DECLARE_FUNCTION(execGetEffectiveFaceTypesForAuthoredShell); \
	DECLARE_FUNCTION(execSetAuthoredShellFaceTypeOverrides); \
	DECLARE_FUNCTION(execGetAuthoredShellFaceTypeOverrides); \
	DECLARE_FUNCTION(execSetAuthoredShellPerimeterVertices); \
	DECLARE_FUNCTION(execSetAuthoredFloorPlateRoofOverride); \
	DECLARE_FUNCTION(execRemoveAuthoredShellFromPlate); \
	DECLARE_FUNCTION(execAddAuthoredShellToPlate_GetIndex); \
	DECLARE_FUNCTION(execAddAuthoredShellToPlate); \
	DECLARE_FUNCTION(execRemoveAuthoredFloorPlate); \
	DECLARE_FUNCTION(execAddAuthoredFloorPlate); \
	DECLARE_FUNCTION(execClearAuthoredFloorPlates); \
	DECLARE_FUNCTION(execSetStreetFacingFromEdgeHints); \
	DECLARE_FUNCTION(execSetStreetFacingFromEdgeHint); \
	DECLARE_FUNCTION(execGenerateModularBuilding);


struct Z_Construct_UClass_AModularBuildingActor_Statics;
CITYBLDRUNTIME_API UClass* Z_Construct_UClass_AModularBuildingActor(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_ModularBuildingActor_h_117_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_AModularBuildingActor_Statics; \
	friend CITYBLDRUNTIME_API UClass* ::Z_Construct_UClass_AModularBuildingActor(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(AModularBuildingActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CityBLDRuntime"), Z_Construct_UClass_AModularBuildingActor) \
	DECLARE_SERIALIZER(AModularBuildingActor)


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_ModularBuildingActor_h_117_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AModularBuildingActor(AModularBuildingActor&&) = delete; \
	AModularBuildingActor(const AModularBuildingActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModularBuildingActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModularBuildingActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AModularBuildingActor) \
	NO_API virtual ~AModularBuildingActor();


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_ModularBuildingActor_h_114_PROLOG
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_ModularBuildingActor_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_ModularBuildingActor_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_ModularBuildingActor_h_117_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_ModularBuildingActor_h_117_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AModularBuildingActor;

// ********** End Class AModularBuildingActor ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CityBLD_Source_CityBLDRuntime_Public_ModularBuildingActor_h

// ********** Begin Enum EBuildingGenerationCollision **********************************************
#define FOREACH_ENUM_EBUILDINGGENERATIONCOLLISION(op) \
	op(EBuildingGenerationCollision::EBC_None) \
	op(EBuildingGenerationCollision::EBC_Primitive) \
	op(EBuildingGenerationCollision::EBC_Full) 

enum class EBuildingGenerationCollision : uint8;
template<> struct TIsUEnumClass<EBuildingGenerationCollision> { enum { Value = true }; };
template<> UE_NODEBUG CITYBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EBuildingGenerationCollision>();
// ********** End Enum EBuildingGenerationCollision ************************************************

// ********** Begin Enum EBuildingMeshGenerationType ***********************************************
#define FOREACH_ENUM_EBUILDINGMESHGENERATIONTYPE(op) \
	op(EBuildingMeshGenerationType::EBM_InstancedStaticMeshComponent) \
	op(EBuildingMeshGenerationType::EBM_DynamicMeshComponent) 

enum class EBuildingMeshGenerationType : uint8;
template<> struct TIsUEnumClass<EBuildingMeshGenerationType> { enum { Value = true }; };
template<> UE_NODEBUG CITYBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EBuildingMeshGenerationType>();
// ********** End Enum EBuildingMeshGenerationType *************************************************

// ********** Begin Enum EBuildingRoofType *********************************************************
#define FOREACH_ENUM_EBUILDINGROOFTYPE(op) \
	op(EBuildingRoofType::ERT_Legacy) \
	op(EBuildingRoofType::ERT_Flat) \
	op(EBuildingRoofType::ERT_Hip) \
	op(EBuildingRoofType::ERT_Gable) 

enum class EBuildingRoofType : uint8;
template<> struct TIsUEnumClass<EBuildingRoofType> { enum { Value = true }; };
template<> UE_NODEBUG CITYBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EBuildingRoofType>();
// ********** End Enum EBuildingRoofType ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
