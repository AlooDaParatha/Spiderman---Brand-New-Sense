// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ISplineVizCustomizerInterface.h"

#ifdef ROADBLDRUNTIME_ISplineVizCustomizerInterface_generated_h
#error "ISplineVizCustomizerInterface.generated.h already included, missing '#pragma once' in ISplineVizCustomizerInterface.h"
#endif
#define ROADBLDRUNTIME_ISplineVizCustomizerInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActorComponent;
struct FSplineVizCustomizations;

// ********** Begin ScriptStruct FSplineVizCustomizations ******************************************
struct Z_Construct_UScriptStruct_FSplineVizCustomizations_Statics;
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSplineVizCustomizations(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_ISplineVizCustomizerInterface_h_13_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSplineVizCustomizations_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FSplineVizCustomizations(ETypeConstructPhase::Inner); }


struct FSplineVizCustomizations;
// ********** End ScriptStruct FSplineVizCustomizations ********************************************

// ********** Begin Interface USplineVizCustomizerInterface ****************************************
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_ISplineVizCustomizerInterface_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSplineViz_GetCustomizations);


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_ISplineVizCustomizerInterface_h_23_CALLBACK_WRAPPERS
struct Z_Construct_UClass_USplineVizCustomizerInterface_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_USplineVizCustomizerInterface(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_ISplineVizCustomizerInterface_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ROADBLDRUNTIME_API USplineVizCustomizerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USplineVizCustomizerInterface(USplineVizCustomizerInterface&&) = delete; \
	USplineVizCustomizerInterface(const USplineVizCustomizerInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ROADBLDRUNTIME_API, USplineVizCustomizerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineVizCustomizerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineVizCustomizerInterface) \
	virtual ~USplineVizCustomizerInterface() = default;


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_ISplineVizCustomizerInterface_h_23_GENERATED_UINTERFACE_BODY() \
private: \
	friend struct ::Z_Construct_UClass_USplineVizCustomizerInterface_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_USplineVizCustomizerInterface(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(USplineVizCustomizerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_USplineVizCustomizerInterface) \
	DECLARE_SERIALIZER(USplineVizCustomizerInterface)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_ISplineVizCustomizerInterface_h_23_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_ISplineVizCustomizerInterface_h_23_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_ISplineVizCustomizerInterface_h_23_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_ISplineVizCustomizerInterface_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISplineVizCustomizerInterface() {} \
public: \
	typedef USplineVizCustomizerInterface UClassType; \
	typedef ISplineVizCustomizerInterface ThisClass; \
	static FSplineVizCustomizations Execute_SplineViz_GetCustomizations(const UObject* O, const UActorComponent* Component); \
	[[deprecated("Do not call _getUObject(), use Cast.")]] virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_ISplineVizCustomizerInterface_h_22_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_ISplineVizCustomizerInterface_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_ISplineVizCustomizerInterface_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_ISplineVizCustomizerInterface_h_23_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_ISplineVizCustomizerInterface_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USplineVizCustomizerInterface;

// ********** End Interface USplineVizCustomizerInterface ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_ISplineVizCustomizerInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
