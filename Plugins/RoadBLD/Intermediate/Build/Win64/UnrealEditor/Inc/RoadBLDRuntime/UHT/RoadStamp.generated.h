// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoadStamp.h"

#ifdef ROADBLDRUNTIME_RoadStamp_generated_h
#error "RoadStamp.generated.h already included, missing '#pragma once' in RoadStamp.h"
#endif
#define ROADBLDRUNTIME_RoadStamp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRoadStampSettings ************************************************
struct Z_Construct_UScriptStruct_FRoadStampSettings_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRoadStampSettings(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadStamp_h_34_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRoadStampSettings_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FRoadStampSettings(ETypeConstructPhase::Inner); }


struct FRoadStampSettings;
// ********** End ScriptStruct FRoadStampSettings **************************************************

// ********** Begin Class URoadStamp ***************************************************************
struct Z_Construct_UClass_URoadStamp_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_URoadStamp(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadStamp_h_76_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URoadStamp_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_URoadStamp(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URoadStamp, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_URoadStamp) \
	DECLARE_SERIALIZER(URoadStamp)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadStamp_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoadStamp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoadStamp(URoadStamp&&) = delete; \
	URoadStamp(const URoadStamp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoadStamp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoadStamp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoadStamp) \
	NO_API virtual ~URoadStamp();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadStamp_h_73_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadStamp_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadStamp_h_76_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadStamp_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoadStamp;

// ********** End Class URoadStamp *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_RoadStamp_h

// ********** Begin Enum EStampEdgeSnap ************************************************************
#define FOREACH_ENUM_ESTAMPEDGESNAP(op) \
	op(EStampEdgeSnap::None) \
	op(EStampEdgeSnap::Centerline) \
	op(EStampEdgeSnap::LeftEdge) \
	op(EStampEdgeSnap::RightEdge) \
	op(EStampEdgeSnap::Lane) 

enum class EStampEdgeSnap : uint8;
template<> struct TIsUEnumClass<EStampEdgeSnap> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EStampEdgeSnap>();
// ********** End Enum EStampEdgeSnap **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
