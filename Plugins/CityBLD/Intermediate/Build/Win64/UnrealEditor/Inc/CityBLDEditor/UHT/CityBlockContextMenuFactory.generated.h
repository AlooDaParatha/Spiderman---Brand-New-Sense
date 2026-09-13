// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContextMenu/CityBlockContextMenuFactory.h"

#ifdef CITYBLDEDITOR_CityBlockContextMenuFactory_generated_h
#error "CityBlockContextMenuFactory.generated.h already included, missing '#pragma once' in CityBlockContextMenuFactory.h"
#endif
#define CITYBLDEDITOR_CityBlockContextMenuFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCityBlockContextMenuFactory *********************************************
struct Z_Construct_UClass_UCityBlockContextMenuFactory_Statics;
CITYBLDEDITOR_API UClass* Z_Construct_UClass_UCityBlockContextMenuFactory(ETypeConstructPhase);

#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ContextMenu_CityBlockContextMenuFactory_h_17_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UCityBlockContextMenuFactory_Statics; \
	friend CITYBLDEDITOR_API UClass* ::Z_Construct_UClass_UCityBlockContextMenuFactory(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCityBlockContextMenuFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CityBLDEditor"), Z_Construct_UClass_UCityBlockContextMenuFactory) \
	DECLARE_SERIALIZER(UCityBlockContextMenuFactory) \
	[[deprecated("Do not call _getUObject(), use Cast.")]] virtual UObject* _getUObject() const override { return const_cast<UCityBlockContextMenuFactory*>(this); }


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ContextMenu_CityBlockContextMenuFactory_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCityBlockContextMenuFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCityBlockContextMenuFactory(UCityBlockContextMenuFactory&&) = delete; \
	UCityBlockContextMenuFactory(const UCityBlockContextMenuFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCityBlockContextMenuFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCityBlockContextMenuFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCityBlockContextMenuFactory) \
	NO_API virtual ~UCityBlockContextMenuFactory();


#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ContextMenu_CityBlockContextMenuFactory_h_14_PROLOG
#define FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ContextMenu_CityBlockContextMenuFactory_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ContextMenu_CityBlockContextMenuFactory_h_17_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ContextMenu_CityBlockContextMenuFactory_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCityBlockContextMenuFactory;

// ********** End Class UCityBlockContextMenuFactory ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_CityBLD_Source_CityBLDEditor_Public_ContextMenu_CityBlockContextMenuFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
