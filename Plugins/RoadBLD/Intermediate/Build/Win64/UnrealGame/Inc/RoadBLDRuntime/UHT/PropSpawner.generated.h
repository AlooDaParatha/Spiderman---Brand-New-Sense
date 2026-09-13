// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PropSpawner.h"

#ifdef ROADBLDRUNTIME_PropSpawner_generated_h
#error "PropSpawner.generated.h already included, missing '#pragma once' in PropSpawner.h"
#endif
#define ROADBLDRUNTIME_PropSpawner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPropSpawnerSettings **********************************************
struct Z_Construct_UScriptStruct_FPropSpawnerSettings_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPropSpawnerSettings(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_PropSpawner_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPropSpawnerSettings_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FPropSpawnerSettings(ETypeConstructPhase::Inner); }


struct FPropSpawnerSettings;
// ********** End ScriptStruct FPropSpawnerSettings ************************************************

// ********** Begin Class UPropSpawner *************************************************************
struct Z_Construct_UClass_UPropSpawner_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UPropSpawner(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_PropSpawner_h_81_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UPropSpawner_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_UPropSpawner(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UPropSpawner, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_UPropSpawner) \
	DECLARE_SERIALIZER(UPropSpawner)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_PropSpawner_h_81_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPropSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPropSpawner(UPropSpawner&&) = delete; \
	UPropSpawner(const UPropSpawner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropSpawner); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropSpawner) \
	NO_API virtual ~UPropSpawner();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_PropSpawner_h_78_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_PropSpawner_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_PropSpawner_h_81_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_PropSpawner_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPropSpawner;

// ********** End Class UPropSpawner ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_PropSpawner_h

// ********** Begin Enum EEdgeSnap *****************************************************************
#define FOREACH_ENUM_EEDGESNAP(op) \
	op(EEdgeSnap::Centerline) \
	op(EEdgeSnap::LeftEdge) \
	op(EEdgeSnap::RightEdge) 

enum class EEdgeSnap : uint8;
template<> struct TIsUEnumClass<EEdgeSnap> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EEdgeSnap>();
// ********** End Enum EEdgeSnap *******************************************************************

// ********** Begin Enum ESpawnArea ****************************************************************
#define FOREACH_ENUM_ESPAWNAREA(op) \
	op(ESpawnArea::FullSpline) \
	op(ESpawnArea::RoadOnly) \
	op(ESpawnArea::RoadBeginnings) \
	op(ESpawnArea::RoadEnds) \
	op(ESpawnArea::BridgeSegments) 

enum class ESpawnArea : uint8;
template<> struct TIsUEnumClass<ESpawnArea> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ESpawnArea>();
// ********** End Enum ESpawnArea ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
