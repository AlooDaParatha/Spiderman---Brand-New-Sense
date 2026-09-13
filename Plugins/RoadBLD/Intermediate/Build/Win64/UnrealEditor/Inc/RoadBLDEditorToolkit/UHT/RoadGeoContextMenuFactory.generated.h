// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContextMenu/RoadGeoContextMenuFactory.h"

#ifdef ROADBLDEDITORTOOLKIT_RoadGeoContextMenuFactory_generated_h
#error "RoadGeoContextMenuFactory.generated.h already included, missing '#pragma once' in RoadGeoContextMenuFactory.h"
#endif
#define ROADBLDEDITORTOOLKIT_RoadGeoContextMenuFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URoadGeoContextMenuFactory ***********************************************
struct Z_Construct_UClass_URoadGeoContextMenuFactory_Statics;
ROADBLDEDITORTOOLKIT_API UClass* Z_Construct_UClass_URoadGeoContextMenuFactory(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ContextMenu_RoadGeoContextMenuFactory_h_15_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_URoadGeoContextMenuFactory_Statics; \
	friend ROADBLDEDITORTOOLKIT_API UClass* ::Z_Construct_UClass_URoadGeoContextMenuFactory(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(URoadGeoContextMenuFactory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDEditorToolkit"), Z_Construct_UClass_URoadGeoContextMenuFactory) \
	DECLARE_SERIALIZER(URoadGeoContextMenuFactory) \
	[[deprecated("Do not call _getUObject(), use Cast.")]] virtual UObject* _getUObject() const override { return const_cast<URoadGeoContextMenuFactory*>(this); }


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ContextMenu_RoadGeoContextMenuFactory_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URoadGeoContextMenuFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URoadGeoContextMenuFactory(URoadGeoContextMenuFactory&&) = delete; \
	URoadGeoContextMenuFactory(const URoadGeoContextMenuFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URoadGeoContextMenuFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URoadGeoContextMenuFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URoadGeoContextMenuFactory) \
	NO_API virtual ~URoadGeoContextMenuFactory();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ContextMenu_RoadGeoContextMenuFactory_h_12_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ContextMenu_RoadGeoContextMenuFactory_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ContextMenu_RoadGeoContextMenuFactory_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ContextMenu_RoadGeoContextMenuFactory_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URoadGeoContextMenuFactory;

// ********** End Class URoadGeoContextMenuFactory *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDEditorToolkit_Public_ContextMenu_RoadGeoContextMenuFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
