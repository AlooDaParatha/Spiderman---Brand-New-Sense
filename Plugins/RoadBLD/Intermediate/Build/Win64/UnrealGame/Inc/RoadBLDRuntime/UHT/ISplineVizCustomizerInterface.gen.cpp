// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ISplineVizCustomizerInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeISplineVizCustomizerInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase);
ROADBLDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSplineVizCustomizations(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_USplineVizCustomizerInterface(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ISplineVizCustomizerInterface(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_USplineVizCustomizerInterface(ETypeConstructPhase);
ROADBLDRUNTIME_API UClass* Z_Construct_UClass_ISplineVizCustomizerInterface(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FSplineVizCustomizations ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FSplineVizCustomizations_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FSplineVizCustomizations>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FSplineVizCustomizations); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Classes/ISplineVizCustomizerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRender_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Classes/ISplineVizCustomizerInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FSplineVizCustomizations constinit property declarations **********
	static void NewProp_bRender_SetBit(void* Obj)
	{
		((FSplineVizCustomizations*)Obj)->bRender = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FSplineVizCustomizations constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSplineVizCustomizations>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FSplineVizCustomizations Property Definitions *********************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bRender = { "bRender", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(FSplineVizCustomizations), &UHT_STATICS::NewProp_bRender_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRender_MetaData), NewProp_bRender_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bRender,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FSplineVizCustomizations Property Definitions ***********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
	nullptr,
	&NewStructOps,
	"SplineVizCustomizations",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FSplineVizCustomizations>(),
	alignof(FSplineVizCustomizations),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSplineVizCustomizations;
UScriptStruct* Z_Construct_UScriptStruct_FSplineVizCustomizations(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FSplineVizCustomizations.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FSplineVizCustomizations.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSplineVizCustomizations, (UObject*)Z_Construct_UPackage__Script_RoadBLDRuntime(ETypeConstructPhase::Outer), TEXT("SplineVizCustomizations"));
		}
		return Z_Registration_Info_UScriptStruct_FSplineVizCustomizations.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FSplineVizCustomizations.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSplineVizCustomizations.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FSplineVizCustomizations.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FSplineVizCustomizations ********************************************

// ********** Begin Interface USplineVizCustomizerInterface Function SplineViz_GetCustomizations ***
struct SplineVizCustomizerInterface_eventSplineViz_GetCustomizations_Parms
{
	const UActorComponent* Component;
	FSplineVizCustomizations ReturnValue;
};
FSplineVizCustomizations ISplineVizCustomizerInterface::SplineViz_GetCustomizations(const UActorComponent* Component) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SplineViz_GetCustomizations instead.");
	SplineVizCustomizerInterface_eventSplineViz_GetCustomizations_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_USplineVizCustomizerInterface_SplineViz_GetCustomizations = FName(TEXT("SplineViz_GetCustomizations"));
FSplineVizCustomizations ISplineVizCustomizerInterface::Execute_SplineViz_GetCustomizations(const UObject* O, const UActorComponent* Component)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USplineVizCustomizerInterface::StaticClass()));
	SplineVizCustomizerInterface_eventSplineViz_GetCustomizations_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USplineVizCustomizerInterface_SplineViz_GetCustomizations);
	if (Func)
	{
		Parms.Component=std::move(Component);
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ISplineVizCustomizerInterface*)(O->GetNativeInterfaceAddress(USplineVizCustomizerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->SplineViz_GetCustomizations_Implementation(Component);
	}
	return Parms.ReturnValue;
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_USplineVizCustomizerInterface_SplineViz_GetCustomizations_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Debug" },
		{ "Comment", "// Gets the properties of this element.\n" },
		{ "ModuleRelativePath", "Classes/ISplineVizCustomizerInterface.h" },
		{ "ToolTip", "Gets the properties of this element." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SplineViz_GetCustomizations constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SplineViz_GetCustomizations constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SplineViz_GetCustomizations Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(SplineVizCustomizerInterface_eventSplineViz_GetCustomizations_Parms, Component), Z_Construct_UClass_UActorComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(SplineVizCustomizerInterface_eventSplineViz_GetCustomizations_Parms, ReturnValue), Z_Construct_UScriptStruct_FSplineVizCustomizations, METADATA_PARAMS(0, nullptr) }; // 040f5313ac7439c331ae8b3f950de55b6d7a0088
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function SplineViz_GetCustomizations Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_USplineVizCustomizerInterface, nullptr, "SplineViz_GetCustomizations", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<SplineVizCustomizerInterface_eventSplineViz_GetCustomizations_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(SplineVizCustomizerInterface_eventSplineViz_GetCustomizations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USplineVizCustomizerInterface_SplineViz_GetCustomizations(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ISplineVizCustomizerInterface::execSplineViz_GetCustomizations)
{
	P_GET_OBJECT(UActorComponent,Z_Param_Component);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSplineVizCustomizations*)Z_Param__Result=P_THIS->SplineViz_GetCustomizations_Implementation(Z_Param_Component);
	P_NATIVE_END;
}
// ********** End Interface USplineVizCustomizerInterface Function SplineViz_GetCustomizations *****

// ********** Begin Interface USplineVizCustomizerInterface ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_USplineVizCustomizerInterface_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/ISplineVizCustomizerInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface USplineVizCustomizerInterface constinit property declarations ********
// ********** End Interface USplineVizCustomizerInterface constinit property declarations **********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SplineViz_GetCustomizations"), .Pointer = &ISplineVizCustomizerInterface::execSplineViz_GetCustomizations },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USplineVizCustomizerInterface_SplineViz_GetCustomizations, "SplineViz_GetCustomizations" }, // 3224f91fbfa6997cdd2c7a116019eae2b29fee29
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISplineVizCustomizerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UInterface,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RoadBLDRuntime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_USplineVizCustomizerInterface,
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
static void USplineVizCustomizerInterface_StaticRegisterNativesUSplineVizCustomizerInterface()
{
	UClass* Class = USplineVizCustomizerInterface::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USplineVizCustomizerInterface;
UClass* Z_Construct_UClass_USplineVizCustomizerInterface(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = USplineVizCustomizerInterface;
		if (!Z_Registration_Info_UClass_USplineVizCustomizerInterface.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("SplineVizCustomizerInterface"),
				Z_Registration_Info_UClass_USplineVizCustomizerInterface.InnerSingleton,
				USplineVizCustomizerInterface_StaticRegisterNativesUSplineVizCustomizerInterface,
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
		return Z_Registration_Info_UClass_USplineVizCustomizerInterface.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_USplineVizCustomizerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USplineVizCustomizerInterface.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_USplineVizCustomizerInterface.OuterSingleton;
}
#undef UHT_STATICS
USplineVizCustomizerInterface::USplineVizCustomizerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USplineVizCustomizerInterface);
// ********** End Interface USplineVizCustomizerInterface ******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_ISplineVizCustomizerInterface_h__Script_RoadBLDRuntime_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FSplineVizCustomizations, Z_Construct_UScriptStruct_FSplineVizCustomizations_Statics::NewStructOps, TEXT("SplineVizCustomizations"),&Z_Registration_Info_UScriptStruct_FSplineVizCustomizations, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSplineVizCustomizations), 68113171U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USplineVizCustomizerInterface, TEXT("USplineVizCustomizerInterface"), &Z_Registration_Info_UClass_USplineVizCustomizerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USplineVizCustomizerInterface), 1852413U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RoadBLD_Source_RoadBLDRuntime_Classes_ISplineVizCustomizerInterface_h__Script_RoadBLDRuntime_84de0aca97aa5dcc8e1f56536c3ea1c6ba61e24a{
	TEXT("/Script/RoadBLDRuntime"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
