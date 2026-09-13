// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContextMenu/DynamicRoadContextMenuFactory.h"

#ifdef ROADBLDEDITORTOOLKIT_DynamicRoadContextMenuFactory_generated_h
#error "DynamicRoadContextMenuFactory.generated.h already included, missing '#pragma once' in DynamicRoadContextMenuFactory.h"
#endif
#define ROADBLDEDITORTOOLKIT_DynamicRoadContextMenuFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDynamicRoadContextMenuFactory *******************************************
struct Z_Construct_UClass_UDynamicRoadContextMenuFactory_Statics;
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_UDynamicRoadContextMenuFactory(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ContextMenu_DynamicRoadContextMenuFactory_h_20_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UDynamicRoadContextMenuFactory_Statics; \
	friend ROADBLDEDITORTOOLKIT_API UClass* ::Z_Construct_UClass_UDynamicRoadContextMenuFactory(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UDynamicRoadContextMenuFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDEditorToolkit"), Z_Construct_UClass_UDynamicRoadContextMenuFactory) \
	DECLARE_SERIALIZER(UDynamicRoadContextMenuFactory) \
	[[deprecated("Do not call _getUObject(), use Cast.")]] virtual UObject* _getUObject() const override { return const_cast<UDynamicRoadContextMenuFactory*>(this); }


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ContextMenu_DynamicRoadContextMenuFactory_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicRoadContextMenuFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDynamicRoadContextMenuFactory(UDynamicRoadContextMenuFactory&&) = delete; \
	UDynamicRoadContextMenuFactory(const UDynamicRoadContextMenuFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicRoadContextMenuFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicRoadContextMenuFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicRoadContextMenuFactory) \
	NO_API virtual ~UDynamicRoadContextMenuFactory();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ContextMenu_DynamicRoadContextMenuFactory_h_17_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ContextMenu_DynamicRoadContextMenuFactory_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ContextMenu_DynamicRoadContextMenuFactory_h_20_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ContextMenu_DynamicRoadContextMenuFactory_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDynamicRoadContextMenuFactory;

// ********** End Class UDynamicRoadContextMenuFactory *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ContextMenu_DynamicRoadContextMenuFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
