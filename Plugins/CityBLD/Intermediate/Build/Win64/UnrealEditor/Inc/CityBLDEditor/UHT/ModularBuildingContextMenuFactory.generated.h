// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContextMenu/ModularBuildingContextMenuFactory.h"

#ifdef CITYBLDEDITOR_ModularBuildingContextMenuFactory_generated_h
#error "ModularBuildingContextMenuFactory.generated.h already included, missing '#pragma once' in ModularBuildingContextMenuFactory.h"
#endif
#define CITYBLDEDITOR_ModularBuildingContextMenuFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UModularBuildingContextMenuFactory ***************************************
struct Z_Construct_UClass_UModularBuildingContextMenuFactory_Statics;
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UModularBuildingContextMenuFactory(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ContextMenu_ModularBuildingContextMenuFactory_h_17_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UModularBuildingContextMenuFactory_Statics; \
	friend CITYBLDEDITOR_API UClass* ::Z_Construct_UClass_UModularBuildingContextMenuFactory(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UModularBuildingContextMenuFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CityBLDEditor"), Z_Construct_UClass_UModularBuildingContextMenuFactory) \
	DECLARE_SERIALIZER(UModularBuildingContextMenuFactory) \
	[[deprecated("Do not call _getUObject(), use Cast.")]] virtual UObject* _getUObject() const override { return const_cast<UModularBuildingContextMenuFactory*>(this); }


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ContextMenu_ModularBuildingContextMenuFactory_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModularBuildingContextMenuFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModularBuildingContextMenuFactory(UModularBuildingContextMenuFactory&&) = delete; \
	UModularBuildingContextMenuFactory(const UModularBuildingContextMenuFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularBuildingContextMenuFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularBuildingContextMenuFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularBuildingContextMenuFactory) \
	NO_API virtual ~UModularBuildingContextMenuFactory();


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ContextMenu_ModularBuildingContextMenuFactory_h_14_PROLOG
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ContextMenu_ModularBuildingContextMenuFactory_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ContextMenu_ModularBuildingContextMenuFactory_h_17_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ContextMenu_ModularBuildingContextMenuFactory_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModularBuildingContextMenuFactory;

// ********** End Class UModularBuildingContextMenuFactory *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ContextMenu_ModularBuildingContextMenuFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
