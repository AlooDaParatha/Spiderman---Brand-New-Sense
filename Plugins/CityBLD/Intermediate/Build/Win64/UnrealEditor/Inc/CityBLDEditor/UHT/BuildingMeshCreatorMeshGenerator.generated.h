// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BuildingMeshCreatorMeshGenerator.h"

#ifdef CITYBLDEDITOR_BuildingMeshCreatorMeshGenerator_generated_h
#error "BuildingMeshCreatorMeshGenerator.generated.h already included, missing '#pragma once' in BuildingMeshCreatorMeshGenerator.h"
#endif
#define CITYBLDEDITOR_BuildingMeshCreatorMeshGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FBuildingMeshCreatorCutParameters *********************************
struct Z_Construct_UScriptStruct_FBuildingMeshCreatorCutParameters_Statics;
CITYBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FBuildingMeshCreatorCutParameters(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_BuildingMeshCreatorMeshGenerator_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBuildingMeshCreatorCutParameters_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FBuildingMeshCreatorCutParameters(ETypeConstructPhase::Inner); }


struct FBuildingMeshCreatorCutParameters;
// ********** End ScriptStruct FBuildingMeshCreatorCutParameters ***********************************

// ********** Begin ScriptStruct FMeshInsertEntry **************************************************
struct Z_Construct_UScriptStruct_FMeshInsertEntry_Statics;
CITYBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMeshInsertEntry(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_BuildingMeshCreatorMeshGenerator_h_72_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMeshInsertEntry_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FMeshInsertEntry(ETypeConstructPhase::Inner); }


struct FMeshInsertEntry;
// ********** End ScriptStruct FMeshInsertEntry ****************************************************

// ********** Begin ScriptStruct FSocketMeshEntry **************************************************
struct Z_Construct_UScriptStruct_FSocketMeshEntry_Statics;
CITYBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSocketMeshEntry(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_BuildingMeshCreatorMeshGenerator_h_90_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSocketMeshEntry_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FSocketMeshEntry(ETypeConstructPhase::Inner); }


struct FSocketMeshEntry;
// ********** End ScriptStruct FSocketMeshEntry ****************************************************

// ********** Begin ScriptStruct FBuildingMeshCreatorParameters ************************************
struct Z_Construct_UScriptStruct_FBuildingMeshCreatorParameters_Statics;
CITYBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FBuildingMeshCreatorParameters(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_BuildingMeshCreatorMeshGenerator_h_108_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FBuildingMeshCreatorParameters_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FBuildingMeshCreatorParameters(ETypeConstructPhase::Inner); }


struct FBuildingMeshCreatorParameters;
// ********** End ScriptStruct FBuildingMeshCreatorParameters **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Private_BuildingMeshCreatorMeshGenerator_h

// ********** Begin Enum EBuildingMeshCreatorCutType ***********************************************
#define FOREACH_ENUM_EBUILDINGMESHCREATORCUTTYPE(op) \
	op(EBuildingMeshCreatorCutType::Window) \
	op(EBuildingMeshCreatorCutType::Door) 

enum class EBuildingMeshCreatorCutType : uint8;
template<> struct TIsUEnumClass<EBuildingMeshCreatorCutType> { enum { Value = true }; };
template<> UE_NODEBUG CITYBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EBuildingMeshCreatorCutType>();
// ********** End Enum EBuildingMeshCreatorCutType *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
