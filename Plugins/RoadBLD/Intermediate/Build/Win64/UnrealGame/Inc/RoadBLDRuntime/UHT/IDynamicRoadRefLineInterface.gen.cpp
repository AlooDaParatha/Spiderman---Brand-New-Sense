// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicRoad/IDynamicRoadRefLineInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeIDynamicRoadRefLineInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform(ETypeConstructPhase);
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESplineCoordinateSpace(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESplinePointType(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadRefLineInterface(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_IDynamicRoadRefLineInterface(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_UDynamicRoadRefLineInterface(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_IDynamicRoadRefLineInterface(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Interface UDynamicRoadRefLineInterface Function GetDistanceAtInputKey **********
struct DynamicRoadRefLineInterface_eventGetDistanceAtInputKey_Parms
{
	double InputKey;
	double ReturnValue;

	/** Constructor, initializes return property only **/
	DynamicRoadRefLineInterface_eventGetDistanceAtInputKey_Parms()
		: ReturnValue(0)
	{
	}
};
double IDynamicRoadRefLineInterface::GetDistanceAtInputKey(double InputKey) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDistanceAtInputKey instead.");
	DynamicRoadRefLineInterface_eventGetDistanceAtInputKey_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDynamicRoadRefLineInterface_GetDistanceAtInputKey = FName(TEXT("GetDistanceAtInputKey"));
double IDynamicRoadRefLineInterface::Execute_GetDistanceAtInputKey(const UObject* O, double InputKey)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDynamicRoadRefLineInterface::StaticClass()));
	DynamicRoadRefLineInterface_eventGetDistanceAtInputKey_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDynamicRoadRefLineInterface_GetDistanceAtInputKey);
	if (Func)
	{
		Parms.InputKey=std::move(InputKey);
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDynamicRoadRefLineInterface*)(O->GetNativeInterfaceAddress(UDynamicRoadRefLineInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetDistanceAtInputKey_Implementation(InputKey);
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetDistanceAtInputKey_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "ModuleRelativePath", "Classes/DynamicRoad/IDynamicRoadRefLineInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDistanceAtInputKey constinit property declarations *****************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InputKey;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDistanceAtInputKey constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDistanceAtInputKey Property Definitions ****************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventGetDistanceAtInputKey_Parms, InputKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventGetDistanceAtInputKey_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InputKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDistanceAtInputKey Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDynamicRoadRefLineInterface, nullptr, "GetDistanceAtInputKey", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DynamicRoadRefLineInterface_eventGetDistanceAtInputKey_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DynamicRoadRefLineInterface_eventGetDistanceAtInputKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetDistanceAtInputKey(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDynamicRoadRefLineInterface::execGetDistanceAtInputKey)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_InputKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetDistanceAtInputKey_Implementation(Z_Param_InputKey);
	P_NATIVE_END;
}
// ********** End Interface UDynamicRoadRefLineInterface Function GetDistanceAtInputKey ************

// ********** Begin Interface UDynamicRoadRefLineInterface Function GetDistanceAtLocation **********
struct DynamicRoadRefLineInterface_eventGetDistanceAtLocation_Parms
{
	FVector Location;
	TEnumAsByte<ESplineCoordinateSpace::Type> CoordSpace;
	double ReturnValue;

	/** Constructor, initializes return property only **/
	DynamicRoadRefLineInterface_eventGetDistanceAtLocation_Parms()
		: ReturnValue(0)
	{
	}
};
double IDynamicRoadRefLineInterface::GetDistanceAtLocation(FVector const& Location, ESplineCoordinateSpace::Type CoordSpace) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDistanceAtLocation instead.");
	DynamicRoadRefLineInterface_eventGetDistanceAtLocation_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDynamicRoadRefLineInterface_GetDistanceAtLocation = FName(TEXT("GetDistanceAtLocation"));
double IDynamicRoadRefLineInterface::Execute_GetDistanceAtLocation(const UObject* O, FVector const& Location, ESplineCoordinateSpace::Type CoordSpace)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDynamicRoadRefLineInterface::StaticClass()));
	DynamicRoadRefLineInterface_eventGetDistanceAtLocation_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDynamicRoadRefLineInterface_GetDistanceAtLocation);
	if (Func)
	{
		Parms.Location=std::move(Location);
		Parms.CoordSpace=std::move(CoordSpace);
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDynamicRoadRefLineInterface*)(O->GetNativeInterfaceAddress(UDynamicRoadRefLineInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetDistanceAtLocation_Implementation(Location,CoordSpace);
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetDistanceAtLocation_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "ModuleRelativePath", "Classes/DynamicRoad/IDynamicRoadRefLineInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDistanceAtLocation constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CoordSpace;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDistanceAtLocation constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDistanceAtLocation Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventGetDistanceAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CoordSpace = { "CoordSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventGetDistanceAtLocation_Parms, CoordSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(0, nullptr) }; // f1ff63ca626fc6ad1b70269cfb065da1c8a422dc
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventGetDistanceAtLocation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CoordSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDistanceAtLocation Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDynamicRoadRefLineInterface, nullptr, "GetDistanceAtLocation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DynamicRoadRefLineInterface_eventGetDistanceAtLocation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DynamicRoadRefLineInterface_eventGetDistanceAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetDistanceAtLocation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDynamicRoadRefLineInterface::execGetDistanceAtLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_PROPERTY(FByteProperty,Z_Param_CoordSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetDistanceAtLocation_Implementation(Z_Param_Out_Location,ESplineCoordinateSpace::Type(Z_Param_CoordSpace));
	P_NATIVE_END;
}
// ********** End Interface UDynamicRoadRefLineInterface Function GetDistanceAtLocation ************

// ********** Begin Interface UDynamicRoadRefLineInterface Function GetInputKeyAtDistance **********
struct DynamicRoadRefLineInterface_eventGetInputKeyAtDistance_Parms
{
	double Distance;
	double ReturnValue;

	/** Constructor, initializes return property only **/
	DynamicRoadRefLineInterface_eventGetInputKeyAtDistance_Parms()
		: ReturnValue(0)
	{
	}
};
double IDynamicRoadRefLineInterface::GetInputKeyAtDistance(double Distance) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInputKeyAtDistance instead.");
	DynamicRoadRefLineInterface_eventGetInputKeyAtDistance_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDynamicRoadRefLineInterface_GetInputKeyAtDistance = FName(TEXT("GetInputKeyAtDistance"));
double IDynamicRoadRefLineInterface::Execute_GetInputKeyAtDistance(const UObject* O, double Distance)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDynamicRoadRefLineInterface::StaticClass()));
	DynamicRoadRefLineInterface_eventGetInputKeyAtDistance_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDynamicRoadRefLineInterface_GetInputKeyAtDistance);
	if (Func)
	{
		Parms.Distance=std::move(Distance);
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDynamicRoadRefLineInterface*)(O->GetNativeInterfaceAddress(UDynamicRoadRefLineInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetInputKeyAtDistance_Implementation(Distance);
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetInputKeyAtDistance_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "ModuleRelativePath", "Classes/DynamicRoad/IDynamicRoadRefLineInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetInputKeyAtDistance constinit property declarations *****************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInputKeyAtDistance constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInputKeyAtDistance Property Definitions ****************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventGetInputKeyAtDistance_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventGetInputKeyAtDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetInputKeyAtDistance Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDynamicRoadRefLineInterface, nullptr, "GetInputKeyAtDistance", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DynamicRoadRefLineInterface_eventGetInputKeyAtDistance_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DynamicRoadRefLineInterface_eventGetInputKeyAtDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetInputKeyAtDistance(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDynamicRoadRefLineInterface::execGetInputKeyAtDistance)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Distance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetInputKeyAtDistance_Implementation(Z_Param_Distance);
	P_NATIVE_END;
}
// ********** End Interface UDynamicRoadRefLineInterface Function GetInputKeyAtDistance ************

// ********** Begin Interface UDynamicRoadRefLineInterface Function GetInputKeyAtLocation **********
struct DynamicRoadRefLineInterface_eventGetInputKeyAtLocation_Parms
{
	FVector Location;
	TEnumAsByte<ESplineCoordinateSpace::Type> CoordSpace;
	double ReturnValue;

	/** Constructor, initializes return property only **/
	DynamicRoadRefLineInterface_eventGetInputKeyAtLocation_Parms()
		: ReturnValue(0)
	{
	}
};
double IDynamicRoadRefLineInterface::GetInputKeyAtLocation(FVector const& Location, ESplineCoordinateSpace::Type CoordSpace) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetInputKeyAtLocation instead.");
	DynamicRoadRefLineInterface_eventGetInputKeyAtLocation_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDynamicRoadRefLineInterface_GetInputKeyAtLocation = FName(TEXT("GetInputKeyAtLocation"));
double IDynamicRoadRefLineInterface::Execute_GetInputKeyAtLocation(const UObject* O, FVector const& Location, ESplineCoordinateSpace::Type CoordSpace)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDynamicRoadRefLineInterface::StaticClass()));
	DynamicRoadRefLineInterface_eventGetInputKeyAtLocation_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDynamicRoadRefLineInterface_GetInputKeyAtLocation);
	if (Func)
	{
		Parms.Location=std::move(Location);
		Parms.CoordSpace=std::move(CoordSpace);
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDynamicRoadRefLineInterface*)(O->GetNativeInterfaceAddress(UDynamicRoadRefLineInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetInputKeyAtLocation_Implementation(Location,CoordSpace);
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetInputKeyAtLocation_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "ModuleRelativePath", "Classes/DynamicRoad/IDynamicRoadRefLineInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetInputKeyAtLocation constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CoordSpace;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInputKeyAtLocation constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInputKeyAtLocation Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventGetInputKeyAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CoordSpace = { "CoordSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventGetInputKeyAtLocation_Parms, CoordSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(0, nullptr) }; // f1ff63ca626fc6ad1b70269cfb065da1c8a422dc
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventGetInputKeyAtLocation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CoordSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetInputKeyAtLocation Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDynamicRoadRefLineInterface, nullptr, "GetInputKeyAtLocation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DynamicRoadRefLineInterface_eventGetInputKeyAtLocation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DynamicRoadRefLineInterface_eventGetInputKeyAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetInputKeyAtLocation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDynamicRoadRefLineInterface::execGetInputKeyAtLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_PROPERTY(FByteProperty,Z_Param_CoordSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetInputKeyAtLocation_Implementation(Z_Param_Out_Location,ESplineCoordinateSpace::Type(Z_Param_CoordSpace));
	P_NATIVE_END;
}
// ********** End Interface UDynamicRoadRefLineInterface Function GetInputKeyAtLocation ************

// ********** Begin Interface UDynamicRoadRefLineInterface Function GetLength **********************
struct DynamicRoadRefLineInterface_eventGetLength_Parms
{
	double ReturnValue;

	/** Constructor, initializes return property only **/
	DynamicRoadRefLineInterface_eventGetLength_Parms()
		: ReturnValue(0)
	{
	}
};
double IDynamicRoadRefLineInterface::GetLength() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetLength instead.");
	DynamicRoadRefLineInterface_eventGetLength_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDynamicRoadRefLineInterface_GetLength = FName(TEXT("GetLength"));
double IDynamicRoadRefLineInterface::Execute_GetLength(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDynamicRoadRefLineInterface::StaticClass()));
	DynamicRoadRefLineInterface_eventGetLength_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDynamicRoadRefLineInterface_GetLength);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDynamicRoadRefLineInterface*)(O->GetNativeInterfaceAddress(UDynamicRoadRefLineInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetLength_Implementation();
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetLength_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "ModuleRelativePath", "Classes/DynamicRoad/IDynamicRoadRefLineInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLength constinit property declarations *****************************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLength constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLength Property Definitions ****************************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventGetLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetLength Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDynamicRoadRefLineInterface, nullptr, "GetLength", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DynamicRoadRefLineInterface_eventGetLength_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DynamicRoadRefLineInterface_eventGetLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetLength(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDynamicRoadRefLineInterface::execGetLength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetLength_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UDynamicRoadRefLineInterface Function GetLength ************************

// ********** Begin Interface UDynamicRoadRefLineInterface Function GetLocationAtDistance **********
struct DynamicRoadRefLineInterface_eventGetLocationAtDistance_Parms
{
	double Distance;
	TEnumAsByte<ESplineCoordinateSpace::Type> CoordSpace;
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	DynamicRoadRefLineInterface_eventGetLocationAtDistance_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
FVector IDynamicRoadRefLineInterface::GetLocationAtDistance(double Distance, ESplineCoordinateSpace::Type CoordSpace) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetLocationAtDistance instead.");
	DynamicRoadRefLineInterface_eventGetLocationAtDistance_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDynamicRoadRefLineInterface_GetLocationAtDistance = FName(TEXT("GetLocationAtDistance"));
FVector IDynamicRoadRefLineInterface::Execute_GetLocationAtDistance(const UObject* O, double Distance, ESplineCoordinateSpace::Type CoordSpace)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDynamicRoadRefLineInterface::StaticClass()));
	DynamicRoadRefLineInterface_eventGetLocationAtDistance_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDynamicRoadRefLineInterface_GetLocationAtDistance);
	if (Func)
	{
		Parms.Distance=std::move(Distance);
		Parms.CoordSpace=std::move(CoordSpace);
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDynamicRoadRefLineInterface*)(O->GetNativeInterfaceAddress(UDynamicRoadRefLineInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetLocationAtDistance_Implementation(Distance,CoordSpace);
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetLocationAtDistance_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "ModuleRelativePath", "Classes/DynamicRoad/IDynamicRoadRefLineInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLocationAtDistance constinit property declarations *****************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CoordSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLocationAtDistance constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLocationAtDistance Property Definitions ****************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventGetLocationAtDistance_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CoordSpace = { "CoordSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventGetLocationAtDistance_Parms, CoordSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(0, nullptr) }; // f1ff63ca626fc6ad1b70269cfb065da1c8a422dc
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventGetLocationAtDistance_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CoordSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetLocationAtDistance Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDynamicRoadRefLineInterface, nullptr, "GetLocationAtDistance", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DynamicRoadRefLineInterface_eventGetLocationAtDistance_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DynamicRoadRefLineInterface_eventGetLocationAtDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetLocationAtDistance(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDynamicRoadRefLineInterface::execGetLocationAtDistance)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Distance);
	P_GET_PROPERTY(FByteProperty,Z_Param_CoordSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetLocationAtDistance_Implementation(Z_Param_Distance,ESplineCoordinateSpace::Type(Z_Param_CoordSpace));
	P_NATIVE_END;
}
// ********** End Interface UDynamicRoadRefLineInterface Function GetLocationAtDistance ************

// ********** Begin Interface UDynamicRoadRefLineInterface Function GetLocationAtInputKey **********
struct DynamicRoadRefLineInterface_eventGetLocationAtInputKey_Parms
{
	double InputKey;
	TEnumAsByte<ESplineCoordinateSpace::Type> CoordSpace;
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	DynamicRoadRefLineInterface_eventGetLocationAtInputKey_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
FVector IDynamicRoadRefLineInterface::GetLocationAtInputKey(double InputKey, ESplineCoordinateSpace::Type CoordSpace) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetLocationAtInputKey instead.");
	DynamicRoadRefLineInterface_eventGetLocationAtInputKey_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDynamicRoadRefLineInterface_GetLocationAtInputKey = FName(TEXT("GetLocationAtInputKey"));
FVector IDynamicRoadRefLineInterface::Execute_GetLocationAtInputKey(const UObject* O, double InputKey, ESplineCoordinateSpace::Type CoordSpace)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDynamicRoadRefLineInterface::StaticClass()));
	DynamicRoadRefLineInterface_eventGetLocationAtInputKey_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDynamicRoadRefLineInterface_GetLocationAtInputKey);
	if (Func)
	{
		Parms.InputKey=std::move(InputKey);
		Parms.CoordSpace=std::move(CoordSpace);
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDynamicRoadRefLineInterface*)(O->GetNativeInterfaceAddress(UDynamicRoadRefLineInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetLocationAtInputKey_Implementation(InputKey,CoordSpace);
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetLocationAtInputKey_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "ModuleRelativePath", "Classes/DynamicRoad/IDynamicRoadRefLineInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLocationAtInputKey constinit property declarations *****************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InputKey;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CoordSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLocationAtInputKey constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLocationAtInputKey Property Definitions ****************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventGetLocationAtInputKey_Parms, InputKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CoordSpace = { "CoordSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventGetLocationAtInputKey_Parms, CoordSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(0, nullptr) }; // f1ff63ca626fc6ad1b70269cfb065da1c8a422dc
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventGetLocationAtInputKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InputKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CoordSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetLocationAtInputKey Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDynamicRoadRefLineInterface, nullptr, "GetLocationAtInputKey", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DynamicRoadRefLineInterface_eventGetLocationAtInputKey_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DynamicRoadRefLineInterface_eventGetLocationAtInputKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetLocationAtInputKey(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDynamicRoadRefLineInterface::execGetLocationAtInputKey)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_InputKey);
	P_GET_PROPERTY(FByteProperty,Z_Param_CoordSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetLocationAtInputKey_Implementation(Z_Param_InputKey,ESplineCoordinateSpace::Type(Z_Param_CoordSpace));
	P_NATIVE_END;
}
// ********** End Interface UDynamicRoadRefLineInterface Function GetLocationAtInputKey ************

// ********** Begin Interface UDynamicRoadRefLineInterface Function GetNumberOfPoints **************
struct DynamicRoadRefLineInterface_eventGetNumberOfPoints_Parms
{
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	DynamicRoadRefLineInterface_eventGetNumberOfPoints_Parms()
		: ReturnValue(0)
	{
	}
};
int32 IDynamicRoadRefLineInterface::GetNumberOfPoints() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetNumberOfPoints instead.");
	DynamicRoadRefLineInterface_eventGetNumberOfPoints_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDynamicRoadRefLineInterface_GetNumberOfPoints = FName(TEXT("GetNumberOfPoints"));
int32 IDynamicRoadRefLineInterface::Execute_GetNumberOfPoints(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDynamicRoadRefLineInterface::StaticClass()));
	DynamicRoadRefLineInterface_eventGetNumberOfPoints_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDynamicRoadRefLineInterface_GetNumberOfPoints);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDynamicRoadRefLineInterface*)(O->GetNativeInterfaceAddress(UDynamicRoadRefLineInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetNumberOfPoints_Implementation();
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetNumberOfPoints_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "ModuleRelativePath", "Classes/DynamicRoad/IDynamicRoadRefLineInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNumberOfPoints constinit property declarations *********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNumberOfPoints constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNumberOfPoints Property Definitions ********************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventGetNumberOfPoints_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNumberOfPoints Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDynamicRoadRefLineInterface, nullptr, "GetNumberOfPoints", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DynamicRoadRefLineInterface_eventGetNumberOfPoints_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DynamicRoadRefLineInterface_eventGetNumberOfPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetNumberOfPoints(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDynamicRoadRefLineInterface::execGetNumberOfPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumberOfPoints_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UDynamicRoadRefLineInterface Function GetNumberOfPoints ****************

// ********** Begin Interface UDynamicRoadRefLineInterface Function GetNumberOfSegments ************
struct DynamicRoadRefLineInterface_eventGetNumberOfSegments_Parms
{
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	DynamicRoadRefLineInterface_eventGetNumberOfSegments_Parms()
		: ReturnValue(0)
	{
	}
};
int32 IDynamicRoadRefLineInterface::GetNumberOfSegments() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetNumberOfSegments instead.");
	DynamicRoadRefLineInterface_eventGetNumberOfSegments_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDynamicRoadRefLineInterface_GetNumberOfSegments = FName(TEXT("GetNumberOfSegments"));
int32 IDynamicRoadRefLineInterface::Execute_GetNumberOfSegments(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDynamicRoadRefLineInterface::StaticClass()));
	DynamicRoadRefLineInterface_eventGetNumberOfSegments_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDynamicRoadRefLineInterface_GetNumberOfSegments);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDynamicRoadRefLineInterface*)(O->GetNativeInterfaceAddress(UDynamicRoadRefLineInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetNumberOfSegments_Implementation();
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetNumberOfSegments_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "ModuleRelativePath", "Classes/DynamicRoad/IDynamicRoadRefLineInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNumberOfSegments constinit property declarations *******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNumberOfSegments constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNumberOfSegments Property Definitions ******************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventGetNumberOfSegments_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNumberOfSegments Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDynamicRoadRefLineInterface, nullptr, "GetNumberOfSegments", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DynamicRoadRefLineInterface_eventGetNumberOfSegments_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DynamicRoadRefLineInterface_eventGetNumberOfSegments_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetNumberOfSegments(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDynamicRoadRefLineInterface::execGetNumberOfSegments)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumberOfSegments_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UDynamicRoadRefLineInterface Function GetNumberOfSegments **************

// ********** Begin Interface UDynamicRoadRefLineInterface Function GetTransformAtDistance *********
struct DynamicRoadRefLineInterface_eventGetTransformAtDistance_Parms
{
	double Distance;
	TEnumAsByte<ESplineCoordinateSpace::Type> CoordSpace;
	FTransform ReturnValue;
};
FTransform IDynamicRoadRefLineInterface::GetTransformAtDistance(double Distance, ESplineCoordinateSpace::Type CoordSpace) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTransformAtDistance instead.");
	DynamicRoadRefLineInterface_eventGetTransformAtDistance_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDynamicRoadRefLineInterface_GetTransformAtDistance = FName(TEXT("GetTransformAtDistance"));
FTransform IDynamicRoadRefLineInterface::Execute_GetTransformAtDistance(const UObject* O, double Distance, ESplineCoordinateSpace::Type CoordSpace)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDynamicRoadRefLineInterface::StaticClass()));
	DynamicRoadRefLineInterface_eventGetTransformAtDistance_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDynamicRoadRefLineInterface_GetTransformAtDistance);
	if (Func)
	{
		Parms.Distance=std::move(Distance);
		Parms.CoordSpace=std::move(CoordSpace);
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDynamicRoadRefLineInterface*)(O->GetNativeInterfaceAddress(UDynamicRoadRefLineInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetTransformAtDistance_Implementation(Distance,CoordSpace);
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetTransformAtDistance_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "ModuleRelativePath", "Classes/DynamicRoad/IDynamicRoadRefLineInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTransformAtDistance constinit property declarations ****************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CoordSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTransformAtDistance constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTransformAtDistance Property Definitions ***************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventGetTransformAtDistance_Parms, Distance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CoordSpace = { "CoordSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventGetTransformAtDistance_Parms, CoordSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(0, nullptr) }; // f1ff63ca626fc6ad1b70269cfb065da1c8a422dc
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventGetTransformAtDistance_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CoordSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetTransformAtDistance Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDynamicRoadRefLineInterface, nullptr, "GetTransformAtDistance", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DynamicRoadRefLineInterface_eventGetTransformAtDistance_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DynamicRoadRefLineInterface_eventGetTransformAtDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetTransformAtDistance(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDynamicRoadRefLineInterface::execGetTransformAtDistance)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Distance);
	P_GET_PROPERTY(FByteProperty,Z_Param_CoordSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetTransformAtDistance_Implementation(Z_Param_Distance,ESplineCoordinateSpace::Type(Z_Param_CoordSpace));
	P_NATIVE_END;
}
// ********** End Interface UDynamicRoadRefLineInterface Function GetTransformAtDistance ***********

// ********** Begin Interface UDynamicRoadRefLineInterface Function GetTransformAtInputKey *********
struct DynamicRoadRefLineInterface_eventGetTransformAtInputKey_Parms
{
	double InputKey;
	TEnumAsByte<ESplineCoordinateSpace::Type> CoordSpace;
	FTransform ReturnValue;
};
FTransform IDynamicRoadRefLineInterface::GetTransformAtInputKey(double InputKey, ESplineCoordinateSpace::Type CoordSpace) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTransformAtInputKey instead.");
	DynamicRoadRefLineInterface_eventGetTransformAtInputKey_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDynamicRoadRefLineInterface_GetTransformAtInputKey = FName(TEXT("GetTransformAtInputKey"));
FTransform IDynamicRoadRefLineInterface::Execute_GetTransformAtInputKey(const UObject* O, double InputKey, ESplineCoordinateSpace::Type CoordSpace)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDynamicRoadRefLineInterface::StaticClass()));
	DynamicRoadRefLineInterface_eventGetTransformAtInputKey_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDynamicRoadRefLineInterface_GetTransformAtInputKey);
	if (Func)
	{
		Parms.InputKey=std::move(InputKey);
		Parms.CoordSpace=std::move(CoordSpace);
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDynamicRoadRefLineInterface*)(O->GetNativeInterfaceAddress(UDynamicRoadRefLineInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetTransformAtInputKey_Implementation(InputKey,CoordSpace);
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetTransformAtInputKey_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "ModuleRelativePath", "Classes/DynamicRoad/IDynamicRoadRefLineInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTransformAtInputKey constinit property declarations ****************
	static const UECodeGen_Private::FDoublePropertyParams NewProp_InputKey;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CoordSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTransformAtInputKey constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTransformAtInputKey Property Definitions ***************************
const UECodeGen_Private::FDoublePropertyParams UHT_STATICS::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventGetTransformAtInputKey_Parms, InputKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CoordSpace = { "CoordSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventGetTransformAtInputKey_Parms, CoordSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(0, nullptr) }; // f1ff63ca626fc6ad1b70269cfb065da1c8a422dc
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventGetTransformAtInputKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InputKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CoordSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetTransformAtInputKey Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDynamicRoadRefLineInterface, nullptr, "GetTransformAtInputKey", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DynamicRoadRefLineInterface_eventGetTransformAtInputKey_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DynamicRoadRefLineInterface_eventGetTransformAtInputKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetTransformAtInputKey(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDynamicRoadRefLineInterface::execGetTransformAtInputKey)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_InputKey);
	P_GET_PROPERTY(FByteProperty,Z_Param_CoordSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetTransformAtInputKey_Implementation(Z_Param_InputKey,ESplineCoordinateSpace::Type(Z_Param_CoordSpace));
	P_NATIVE_END;
}
// ********** End Interface UDynamicRoadRefLineInterface Function GetTransformAtInputKey ***********

// ********** Begin Interface UDynamicRoadRefLineInterface Function GetTransformAtLocation *********
struct DynamicRoadRefLineInterface_eventGetTransformAtLocation_Parms
{
	FVector Location;
	TEnumAsByte<ESplineCoordinateSpace::Type> CoordSpace;
	FTransform ReturnValue;
};
FTransform IDynamicRoadRefLineInterface::GetTransformAtLocation(FVector const& Location, ESplineCoordinateSpace::Type CoordSpace) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTransformAtLocation instead.");
	DynamicRoadRefLineInterface_eventGetTransformAtLocation_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDynamicRoadRefLineInterface_GetTransformAtLocation = FName(TEXT("GetTransformAtLocation"));
FTransform IDynamicRoadRefLineInterface::Execute_GetTransformAtLocation(const UObject* O, FVector const& Location, ESplineCoordinateSpace::Type CoordSpace)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDynamicRoadRefLineInterface::StaticClass()));
	DynamicRoadRefLineInterface_eventGetTransformAtLocation_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDynamicRoadRefLineInterface_GetTransformAtLocation);
	if (Func)
	{
		Parms.Location=std::move(Location);
		Parms.CoordSpace=std::move(CoordSpace);
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDynamicRoadRefLineInterface*)(O->GetNativeInterfaceAddress(UDynamicRoadRefLineInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetTransformAtLocation_Implementation(Location,CoordSpace);
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetTransformAtLocation_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "ModuleRelativePath", "Classes/DynamicRoad/IDynamicRoadRefLineInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTransformAtLocation constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CoordSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTransformAtLocation constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTransformAtLocation Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventGetTransformAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CoordSpace = { "CoordSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventGetTransformAtLocation_Parms, CoordSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(0, nullptr) }; // f1ff63ca626fc6ad1b70269cfb065da1c8a422dc
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventGetTransformAtLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CoordSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetTransformAtLocation Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDynamicRoadRefLineInterface, nullptr, "GetTransformAtLocation", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DynamicRoadRefLineInterface_eventGetTransformAtLocation_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DynamicRoadRefLineInterface_eventGetTransformAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetTransformAtLocation(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDynamicRoadRefLineInterface::execGetTransformAtLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_PROPERTY(FByteProperty,Z_Param_CoordSpace);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetTransformAtLocation_Implementation(Z_Param_Out_Location,ESplineCoordinateSpace::Type(Z_Param_CoordSpace));
	P_NATIVE_END;
}
// ********** End Interface UDynamicRoadRefLineInterface Function GetTransformAtLocation ***********

// ********** Begin Interface UDynamicRoadRefLineInterface Function InsertPoint ********************
struct DynamicRoadRefLineInterface_eventInsertPoint_Parms
{
	int32 PointIndex;
	FVector WorldLocation;
	TEnumAsByte<ESplinePointType::Type> SplinePointType;
	bool KeepCurve;
};
void IDynamicRoadRefLineInterface::InsertPoint(int32 PointIndex, FVector WorldLocation, ESplinePointType::Type SplinePointType, bool KeepCurve)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InsertPoint instead.");
}
static FName NAME_UDynamicRoadRefLineInterface_InsertPoint = FName(TEXT("InsertPoint"));
void IDynamicRoadRefLineInterface::Execute_InsertPoint(UObject* O, int32 PointIndex, FVector WorldLocation, ESplinePointType::Type SplinePointType, bool KeepCurve)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDynamicRoadRefLineInterface::StaticClass()));
	DynamicRoadRefLineInterface_eventInsertPoint_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDynamicRoadRefLineInterface_InsertPoint);
	if (Func)
	{
		Parms.PointIndex=std::move(PointIndex);
		Parms.WorldLocation=std::move(WorldLocation);
		Parms.SplinePointType=std::move(SplinePointType);
		Parms.KeepCurve=std::move(KeepCurve);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IDynamicRoadRefLineInterface*)(O->GetNativeInterfaceAddress(UDynamicRoadRefLineInterface::StaticClass())))
	{
		I->InsertPoint_Implementation(PointIndex,WorldLocation,SplinePointType,KeepCurve);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDynamicRoadRefLineInterface_InsertPoint_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "CPP_Default_KeepCurve", "false" },
		{ "ModuleRelativePath", "Classes/DynamicRoad/IDynamicRoadRefLineInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function InsertPoint constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SplinePointType;
	static void NewProp_KeepCurve_SetBit(void* Obj)
	{
		((DynamicRoadRefLineInterface_eventInsertPoint_Parms*)Obj)->KeepCurve = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_KeepCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function InsertPoint constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function InsertPoint Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventInsertPoint_Parms, PointIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventInsertPoint_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_SplinePointType = { "SplinePointType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventInsertPoint_Parms, SplinePointType), Z_Construct_UEnum_Engine_ESplinePointType, METADATA_PARAMS(0, nullptr) }; // a36fe1683c8c90d7da2ea8b7d1336029399b5336
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_KeepCurve = { "KeepCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicRoadRefLineInterface_eventInsertPoint_Parms), &UHT_STATICS::NewProp_KeepCurve_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SplinePointType,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_KeepCurve,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function InsertPoint Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDynamicRoadRefLineInterface, nullptr, "InsertPoint", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DynamicRoadRefLineInterface_eventInsertPoint_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DynamicRoadRefLineInterface_eventInsertPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicRoadRefLineInterface_InsertPoint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDynamicRoadRefLineInterface::execInsertPoint)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PointIndex);
	P_GET_STRUCT(FVector,Z_Param_WorldLocation);
	P_GET_PROPERTY(FByteProperty,Z_Param_SplinePointType);
	P_GET_UBOOL(Z_Param_KeepCurve);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InsertPoint_Implementation(Z_Param_PointIndex,Z_Param_WorldLocation,ESplinePointType::Type(Z_Param_SplinePointType),Z_Param_KeepCurve);
	P_NATIVE_END;
}
// ********** End Interface UDynamicRoadRefLineInterface Function InsertPoint **********************

// ********** Begin Interface UDynamicRoadRefLineInterface Function IsLoop *************************
struct DynamicRoadRefLineInterface_eventIsLoop_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	DynamicRoadRefLineInterface_eventIsLoop_Parms()
		: ReturnValue(false)
	{
	}
};
bool IDynamicRoadRefLineInterface::IsLoop() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsLoop instead.");
	DynamicRoadRefLineInterface_eventIsLoop_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDynamicRoadRefLineInterface_IsLoop = FName(TEXT("IsLoop"));
bool IDynamicRoadRefLineInterface::Execute_IsLoop(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDynamicRoadRefLineInterface::StaticClass()));
	DynamicRoadRefLineInterface_eventIsLoop_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDynamicRoadRefLineInterface_IsLoop);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDynamicRoadRefLineInterface*)(O->GetNativeInterfaceAddress(UDynamicRoadRefLineInterface::StaticClass())))
	{
		Parms.ReturnValue = I->IsLoop_Implementation();
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDynamicRoadRefLineInterface_IsLoop_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "ModuleRelativePath", "Classes/DynamicRoad/IDynamicRoadRefLineInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsLoop constinit property declarations ********************************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DynamicRoadRefLineInterface_eventIsLoop_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsLoop constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsLoop Property Definitions *******************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicRoadRefLineInterface_eventIsLoop_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function IsLoop Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDynamicRoadRefLineInterface, nullptr, "IsLoop", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DynamicRoadRefLineInterface_eventIsLoop_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DynamicRoadRefLineInterface_eventIsLoop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicRoadRefLineInterface_IsLoop(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDynamicRoadRefLineInterface::execIsLoop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLoop_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UDynamicRoadRefLineInterface Function IsLoop ***************************

// ********** Begin Interface UDynamicRoadRefLineInterface Function RemovePoint ********************
struct DynamicRoadRefLineInterface_eventRemovePoint_Parms
{
	int32 Index;
	bool UpdateCurve;
};
void IDynamicRoadRefLineInterface::RemovePoint(int32 Index, bool UpdateCurve)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RemovePoint instead.");
}
static FName NAME_UDynamicRoadRefLineInterface_RemovePoint = FName(TEXT("RemovePoint"));
void IDynamicRoadRefLineInterface::Execute_RemovePoint(UObject* O, int32 Index, bool UpdateCurve)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDynamicRoadRefLineInterface::StaticClass()));
	DynamicRoadRefLineInterface_eventRemovePoint_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDynamicRoadRefLineInterface_RemovePoint);
	if (Func)
	{
		Parms.Index=std::move(Index);
		Parms.UpdateCurve=std::move(UpdateCurve);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IDynamicRoadRefLineInterface*)(O->GetNativeInterfaceAddress(UDynamicRoadRefLineInterface::StaticClass())))
	{
		I->RemovePoint_Implementation(Index,UpdateCurve);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDynamicRoadRefLineInterface_RemovePoint_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "ModuleRelativePath", "Classes/DynamicRoad/IDynamicRoadRefLineInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemovePoint constinit property declarations ***************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_UpdateCurve_SetBit(void* Obj)
	{
		((DynamicRoadRefLineInterface_eventRemovePoint_Parms*)Obj)->UpdateCurve = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UpdateCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemovePoint constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemovePoint Property Definitions **************************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(DynamicRoadRefLineInterface_eventRemovePoint_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_UpdateCurve = { "UpdateCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(DynamicRoadRefLineInterface_eventRemovePoint_Parms), &UHT_STATICS::NewProp_UpdateCurve_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_UpdateCurve,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function RemovePoint Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDynamicRoadRefLineInterface, nullptr, "RemovePoint", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<DynamicRoadRefLineInterface_eventRemovePoint_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(DynamicRoadRefLineInterface_eventRemovePoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDynamicRoadRefLineInterface_RemovePoint(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDynamicRoadRefLineInterface::execRemovePoint)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_UBOOL(Z_Param_UpdateCurve);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemovePoint_Implementation(Z_Param_Index,Z_Param_UpdateCurve);
	P_NATIVE_END;
}
// ********** End Interface UDynamicRoadRefLineInterface Function RemovePoint **********************

// ********** Begin Interface UDynamicRoadRefLineInterface Function UpdateCurve ********************
void IDynamicRoadRefLineInterface::UpdateCurve()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateCurve instead.");
}
static FName NAME_UDynamicRoadRefLineInterface_UpdateCurve = FName(TEXT("UpdateCurve"));
void IDynamicRoadRefLineInterface::Execute_UpdateCurve(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDynamicRoadRefLineInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UDynamicRoadRefLineInterface_UpdateCurve);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IDynamicRoadRefLineInterface*)(O->GetNativeInterfaceAddress(UDynamicRoadRefLineInterface::StaticClass())))
	{
		I->UpdateCurve_Implementation();
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UDynamicRoadRefLineInterface_UpdateCurve_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "DynamicRoad" },
		{ "ModuleRelativePath", "Classes/DynamicRoad/IDynamicRoadRefLineInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateCurve constinit property declarations ***************************
// ********** End Function UpdateCurve constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UDynamicRoadRefLineInterface, nullptr, "UpdateCurve", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UDynamicRoadRefLineInterface_UpdateCurve(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(IDynamicRoadRefLineInterface::execUpdateCurve)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCurve_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UDynamicRoadRefLineInterface Function UpdateCurve **********************

// ********** Begin Interface UDynamicRoadRefLineInterface *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDynamicRoadRefLineInterface_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DynamicRoad/IDynamicRoadRefLineInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UDynamicRoadRefLineInterface constinit property declarations *********
// ********** End Interface UDynamicRoadRefLineInterface constinit property declarations ***********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetDistanceAtInputKey"), .Pointer = &IDynamicRoadRefLineInterface::execGetDistanceAtInputKey },
		{ .NameUTF8 = UTF8TEXT("GetDistanceAtLocation"), .Pointer = &IDynamicRoadRefLineInterface::execGetDistanceAtLocation },
		{ .NameUTF8 = UTF8TEXT("GetInputKeyAtDistance"), .Pointer = &IDynamicRoadRefLineInterface::execGetInputKeyAtDistance },
		{ .NameUTF8 = UTF8TEXT("GetInputKeyAtLocation"), .Pointer = &IDynamicRoadRefLineInterface::execGetInputKeyAtLocation },
		{ .NameUTF8 = UTF8TEXT("GetLength"), .Pointer = &IDynamicRoadRefLineInterface::execGetLength },
		{ .NameUTF8 = UTF8TEXT("GetLocationAtDistance"), .Pointer = &IDynamicRoadRefLineInterface::execGetLocationAtDistance },
		{ .NameUTF8 = UTF8TEXT("GetLocationAtInputKey"), .Pointer = &IDynamicRoadRefLineInterface::execGetLocationAtInputKey },
		{ .NameUTF8 = UTF8TEXT("GetNumberOfPoints"), .Pointer = &IDynamicRoadRefLineInterface::execGetNumberOfPoints },
		{ .NameUTF8 = UTF8TEXT("GetNumberOfSegments"), .Pointer = &IDynamicRoadRefLineInterface::execGetNumberOfSegments },
		{ .NameUTF8 = UTF8TEXT("GetTransformAtDistance"), .Pointer = &IDynamicRoadRefLineInterface::execGetTransformAtDistance },
		{ .NameUTF8 = UTF8TEXT("GetTransformAtInputKey"), .Pointer = &IDynamicRoadRefLineInterface::execGetTransformAtInputKey },
		{ .NameUTF8 = UTF8TEXT("GetTransformAtLocation"), .Pointer = &IDynamicRoadRefLineInterface::execGetTransformAtLocation },
		{ .NameUTF8 = UTF8TEXT("InsertPoint"), .Pointer = &IDynamicRoadRefLineInterface::execInsertPoint },
		{ .NameUTF8 = UTF8TEXT("IsLoop"), .Pointer = &IDynamicRoadRefLineInterface::execIsLoop },
		{ .NameUTF8 = UTF8TEXT("RemovePoint"), .Pointer = &IDynamicRoadRefLineInterface::execRemovePoint },
		{ .NameUTF8 = UTF8TEXT("UpdateCurve"), .Pointer = &IDynamicRoadRefLineInterface::execUpdateCurve },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetDistanceAtInputKey, "GetDistanceAtInputKey" }, // f9c1094d26b1f2f217bf993ae697f344c2390dc1
		{ &Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetDistanceAtLocation, "GetDistanceAtLocation" }, // aa4cb4a37c784f7e2846e28bc867670e44196c17
		{ &Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetInputKeyAtDistance, "GetInputKeyAtDistance" }, // 6c7a0198cffe841bc673497c49a1a64c3b2e0f5e
		{ &Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetInputKeyAtLocation, "GetInputKeyAtLocation" }, // fbe86365a1e4831770c0f8e2165e1c6e3bdd69de
		{ &Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetLength, "GetLength" }, // 9a74edac9bcff5e0571f13f574296334a5c33e9f
		{ &Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetLocationAtDistance, "GetLocationAtDistance" }, // 352dd89a540acf5e3bfb38a08350656c9946784c
		{ &Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetLocationAtInputKey, "GetLocationAtInputKey" }, // b20de389e1c0f897e085ee8ac1998c8d596de1cf
		{ &Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetNumberOfPoints, "GetNumberOfPoints" }, // e1a3b36d770d190cd5d78cb6f251f0946ce6a0b0
		{ &Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetNumberOfSegments, "GetNumberOfSegments" }, // 5886e8f9159488e96d6154fb58c380b3606f7514
		{ &Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetTransformAtDistance, "GetTransformAtDistance" }, // a1baaa04d79b2c84c0b2eca980b1946e3de58aeb
		{ &Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetTransformAtInputKey, "GetTransformAtInputKey" }, // 06a09b592bce194e770cdc60fc114a557c899812
		{ &Z_Construct_UFunction_UDynamicRoadRefLineInterface_GetTransformAtLocation, "GetTransformAtLocation" }, // f6953911b1b54235facaab2ba99ad5394abe4a4c
		{ &Z_Construct_UFunction_UDynamicRoadRefLineInterface_InsertPoint, "InsertPoint" }, // a81cf577a723b99edeadde454b1d3cbdd0c48dfe
		{ &Z_Construct_UFunction_UDynamicRoadRefLineInterface_IsLoop, "IsLoop" }, // ecb3fe2336599e94a9e6bed2c6a207e8ca4b2314
		{ &Z_Construct_UFunction_UDynamicRoadRefLineInterface_RemovePoint, "RemovePoint" }, // bb53308355377dce83a481d2a9cae167170f84c3
		{ &Z_Construct_UFunction_UDynamicRoadRefLineInterface_UpdateCurve, "UpdateCurve" }, // cd0b3f08b76e9e53e8dd8ea85447f7218a553996
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDynamicRoadRefLineInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UInterface,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDynamicRoadRefLineInterface,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UDynamicRoadRefLineInterface_StaticRegisterNativesUDynamicRoadRefLineInterface()
{
	UClass* Class = UDynamicRoadRefLineInterface::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDynamicRoadRefLineInterface;
UClass* Z_Construct_UClass_UDynamicRoadRefLineInterface(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDynamicRoadRefLineInterface;
		if (!Z_Registration_Info_UClass_UDynamicRoadRefLineInterface.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DynamicRoadRefLineInterface"),
				Z_Registration_Info_UClass_UDynamicRoadRefLineInterface.InnerSingleton,
				UDynamicRoadRefLineInterface_StaticRegisterNativesUDynamicRoadRefLineInterface,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UDynamicRoadRefLineInterface.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDynamicRoadRefLineInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicRoadRefLineInterface.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDynamicRoadRefLineInterface.OuterSingleton;
}
#undef UHT_STATICS
UDynamicRoadRefLineInterface::UDynamicRoadRefLineInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDynamicRoadRefLineInterface);
// ********** End Interface UDynamicRoadRefLineInterface *******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_IDynamicRoadRefLineInterface_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDynamicRoadRefLineInterface, TEXT("UDynamicRoadRefLineInterface"), &Z_Registration_Info_UClass_UDynamicRoadRefLineInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicRoadRefLineInterface), 3078099128U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_DynamicRoad_IDynamicRoadRefLineInterface_h__Script_RoadBLDRuntime_af9d1bed069b52be3a3ce88a0478144a6666b831{
	TEXT("/Script/RoadBLDRuntime"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
