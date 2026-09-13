// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CrossingStyle.h"

#ifdef ROADBLDRUNTIME_CrossingStyle_generated_h
#error "CrossingStyle.generated.h already included, missing '#pragma once' in CrossingStyle.h"
#endif
#define ROADBLDRUNTIME_CrossingStyle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCrossingStyle ***********************************************************
struct Z_Construct_UClass_UCrossingStyle_Statics;
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UCrossingStyle(ETypeConstructPhase);

#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_CrossingStyle_h_23_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UCrossingStyle_Statics; \
	friend ROADBLDRUNTIME_API UClass* ::Z_Construct_UClass_UCrossingStyle(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCrossingStyle, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RoadBLDRuntime"), Z_Construct_UClass_UCrossingStyle) \
	DECLARE_SERIALIZER(UCrossingStyle)


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_CrossingStyle_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCrossingStyle(UCrossingStyle&&) = delete; \
	UCrossingStyle(const UCrossingStyle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrossingStyle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrossingStyle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCrossingStyle) \
	NO_API virtual ~UCrossingStyle();


#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_CrossingStyle_h_20_PROLOG
#define FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_CrossingStyle_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_CrossingStyle_h_23_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_CrossingStyle_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCrossingStyle;

// ********** End Class UCrossingStyle *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Public_CrossingStyle_h

// ********** Begin Enum ECrossingType *************************************************************
#define FOREACH_ENUM_ECROSSINGTYPE(op) \
	op(ECrossingType::Zebra) \
	op(ECrossingType::Ladder) \
	op(ECrossingType::ParallelLines) 

enum class ECrossingType : uint8;
template<> struct TIsUEnumClass<ECrossingType> { enum { Value = true }; };
template<> UE_NODEBUG ROADBLDRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ECrossingType>();
// ********** End Enum ECrossingType ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
