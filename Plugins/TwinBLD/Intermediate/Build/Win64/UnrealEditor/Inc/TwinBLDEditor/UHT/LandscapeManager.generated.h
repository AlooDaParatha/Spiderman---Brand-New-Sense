// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeManager.h"

#ifdef TWINBLDEDITOR_LandscapeManager_generated_h
#error "LandscapeManager.generated.h already included, missing '#pragma once' in LandscapeManager.h"
#endif
#define TWINBLDEDITOR_LandscapeManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTwinBLDLandscapeTileResult;

// ********** Begin ScriptStruct FTwinBLDLandscapeTileResult ***************************************
struct Z_Construct_UScriptStruct_FTwinBLDLandscapeTileResult_Statics;
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTwinBLDLandscapeTileResult(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_LandscapeManager_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTwinBLDLandscapeTileResult_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FTwinBLDLandscapeTileResult(ETypeConstructPhase::Inner); }


struct FTwinBLDLandscapeTileResult;
// ********** End ScriptStruct FTwinBLDLandscapeTileResult *****************************************

// ********** Begin ScriptStruct FLandscapeParameters **********************************************
struct Z_Construct_UScriptStruct_FLandscapeParameters_Statics;
TWINBLDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeParameters(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_LandscapeManager_h_78_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapeParameters_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FLandscapeParameters(ETypeConstructPhase::Inner); }


struct FLandscapeParameters;
// ********** End ScriptStruct FLandscapeParameters ************************************************

// ********** Begin Class ULandscapeManager ********************************************************
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_LandscapeManager_h_132_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLandscapeNavd88MetersToWorldCentimeters); \
	DECLARE_FUNCTION(execWorldCentimetersToAbsoluteMeters); \
	DECLARE_FUNCTION(execAbsoluteMetersToWorldCentimeters); \
	DECLARE_FUNCTION(execApplyHeightmap); \
	DECLARE_FUNCTION(execGenerateLandscapeUE); \
	DECLARE_FUNCTION(execGenerateLandscapeGeo); \
	DECLARE_FUNCTION(execGetLandscapeSize);


struct Z_Construct_UClass_ULandscapeManager_Statics;
TWINBLDEDITOR_API UClass* Z_Construct_UClass_ULandscapeManager(ETypeConstructPhase);

#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_LandscapeManager_h_132_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ULandscapeManager_Statics; \
	friend TWINBLDEDITOR_API UClass* ::Z_Construct_UClass_ULandscapeManager(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ULandscapeManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TwinBLDEditor"), Z_Construct_UClass_ULandscapeManager) \
	DECLARE_SERIALIZER(ULandscapeManager)


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_LandscapeManager_h_132_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeManager(ULandscapeManager&&) = delete; \
	ULandscapeManager(const ULandscapeManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapeManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeManager) \
	NO_API virtual ~ULandscapeManager();


#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_LandscapeManager_h_129_PROLOG
#define FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_LandscapeManager_h_132_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_LandscapeManager_h_132_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_LandscapeManager_h_132_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_LandscapeManager_h_132_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeManager;

// ********** End Class ULandscapeManager **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TwinBLD_Source_TwinBLDEditor_Public_LandscapeManager_h

// ********** Begin Enum ELandscapeSectionSize *****************************************************
#define FOREACH_ENUM_ELANDSCAPESECTIONSIZE(op) \
	op(ELandscapeSectionSize::Quads_0) \
	op(ELandscapeSectionSize::Quads_7) \
	op(ELandscapeSectionSize::Quads_15) \
	op(ELandscapeSectionSize::Quads_31) \
	op(ELandscapeSectionSize::Quads_63) \
	op(ELandscapeSectionSize::Quads_127) \
	op(ELandscapeSectionSize::Quads_255) 

enum class ELandscapeSectionSize : uint8;
template<> struct TIsUEnumClass<ELandscapeSectionSize> { enum { Value = true }; };
template<> UE_NODEBUG TWINBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeSectionSize>();
// ********** End Enum ELandscapeSectionSize *******************************************************

// ********** Begin Enum EHeightmapResampleMethod **************************************************
#define FOREACH_ENUM_EHEIGHTMAPRESAMPLEMETHOD(op) \
	op(EHeightmapResampleMethod::EHR_Nearest) \
	op(EHeightmapResampleMethod::EHR_Lanczos) \
	op(EHeightmapResampleMethod::EHR_Bicubic) 

enum class EHeightmapResampleMethod : uint8;
template<> struct TIsUEnumClass<EHeightmapResampleMethod> { enum { Value = true }; };
template<> UE_NODEBUG TWINBLDEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EHeightmapResampleMethod>();
// ********** End Enum EHeightmapResampleMethod ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
