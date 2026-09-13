// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CrossingController.h"

#ifdef ROADBLDEDITORTOOLKIT_CrossingController_generated_h
#error "CrossingController.generated.h already included, missing '#pragma once' in CrossingController.h"
#endif
#define ROADBLDEDITORTOOLKIT_CrossingController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACrossing;
class UClass;
class UCrossingController;

// ********** Begin Class UCrossingController ******************************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CrossingController_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateCrossingController);


struct Z_Construct_UClass_UCrossingController_Statics;
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UCrossingController(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CrossingController_h_33_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UCrossingController_Statics; \
	friend ROADBLDEDITORTOOLKIT_API UClass* ::Z_Construct_UClass_UCrossingController(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCrossingController, UWorldBLDEditController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadBLDEditorToolkit"), Z_Construct_UClass_UCrossingController) \
	DECLARE_SERIALIZER(UCrossingController)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CrossingController_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCrossingController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCrossingController(UCrossingController&&) = delete; \
	UCrossingController(const UCrossingController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrossingController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrossingController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrossingController) \
	NO_API virtual ~UCrossingController();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CrossingController_h_30_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CrossingController_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CrossingController_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CrossingController_h_33_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CrossingController_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCrossingController;

// ********** End Class UCrossingController ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_CrossingController_h

// ********** Begin Enum ECrossingToolState ********************************************************
#define FOREACH_ENUM_ECROSSINGTOOLSTATE(op) \
	op(ECrossingToolState::PlacingPointA) \
	op(ECrossingToolState::PlacingPointB) 

enum class ECrossingToolState : uint8;
template<> struct TIsUEnumClass<ECrossingToolState> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDEDITORTOOLKIT_NON_ATTRIBUTED_API UEnum* StaticEnum<ECrossingToolState>();
// ********** End Enum ECrossingToolState **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
