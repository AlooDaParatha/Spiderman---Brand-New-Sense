// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoadSign.h"

#ifdef ROADBLDRUNTIME_RoadSign_generated_h
#error "RoadSign.generated.h already included, missing '#pragma once' in RoadSign.h"
#endif
#define ROADBLDRUNTIME_RoadSign_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRoadSignTextEntry ************************************************
struct Z_Construct_UScriptStruct_FRoadSignTextEntry_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadSignTextEntry(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadSign_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRoadSignTextEntry_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FRoadSignTextEntry(ETypeConstructPhase::Inner); }


struct FRoadSignTextEntry;
// ********** End ScriptStruct FRoadSignTextEntry **************************************************

// ********** Begin Class ARoadSign ****************************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadSign_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateSign);


struct Z_Construct_UClass_ARoadSign_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ARoadSign(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadSign_h_70_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ARoadSign_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_ARoadSign(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ARoadSign, AWorldBLDPrefab, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_ARoadSign) \
	DECLARE_SERIALIZER(ARoadSign)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadSign_h_70_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARoadSign(ARoadSign&&) = delete; \
	ARoadSign(const ARoadSign&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoadSign); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoadSign); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARoadSign) \
	NO_API virtual ~ARoadSign();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadSign_h_67_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadSign_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadSign_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadSign_h_70_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadSign_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARoadSign;

// ********** End Class ARoadSign ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_RoadSign_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
