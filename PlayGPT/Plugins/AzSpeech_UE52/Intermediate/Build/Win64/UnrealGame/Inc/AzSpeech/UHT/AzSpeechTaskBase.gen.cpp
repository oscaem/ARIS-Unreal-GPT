// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzSpeech/Tasks/Bases/AzSpeechTaskBase.h"
#include "AzSpeech/Structures/AzSpeechSettingsOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAzSpeechTaskBase() {}
// Cross Module References
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechTaskBase();
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechTaskBase_NoRegister();
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechTaskStatus();
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechTaskStatus_NoRegister();
	AZSPEECH_API UFunction* Z_Construct_UDelegateFunction_AzSpeech_AzSpeechTaskGenericDelegate__DelegateSignature();
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AzSpeech();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AzSpeech_AzSpeechTaskGenericDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AzSpeech_AzSpeechTaskGenericDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AzSpeech_AzSpeechTaskGenericDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AzSpeech, nullptr, "AzSpeechTaskGenericDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AzSpeech_AzSpeechTaskGenericDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzSpeech_AzSpeechTaskGenericDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AzSpeech_AzSpeechTaskGenericDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AzSpeech_AzSpeechTaskGenericDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAzSpeechTaskGenericDelegate_DelegateWrapper(const FMulticastScriptDelegate& AzSpeechTaskGenericDelegate)
{
	AzSpeechTaskGenericDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UAzSpeechTaskBase::execGetSubscriptionOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAzSpeechSubscriptionOptions*)Z_Param__Result=P_THIS->GetSubscriptionOptions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechTaskBase::execGetTaskName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetTaskName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechTaskBase::execStopAzSpeechTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAzSpeechTask();
		P_NATIVE_END;
	}
	void UAzSpeechTaskBase::StaticRegisterNativesUAzSpeechTaskBase()
	{
		UClass* Class = UAzSpeechTaskBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSubscriptionOptions", &UAzSpeechTaskBase::execGetSubscriptionOptions },
			{ "GetTaskName", &UAzSpeechTaskBase::execGetTaskName },
			{ "StopAzSpeechTask", &UAzSpeechTaskBase::execStopAzSpeechTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAzSpeechTaskBase_GetSubscriptionOptions_Statics
	{
		struct AzSpeechTaskBase_eventGetSubscriptionOptions_Parms
		{
			FAzSpeechSubscriptionOptions ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechTaskBase_GetSubscriptionOptions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAzSpeechTaskBase_GetSubscriptionOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechTaskBase_eventGetSubscriptionOptions_Parms, ReturnValue), Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechTaskBase_GetSubscriptionOptions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechTaskBase_GetSubscriptionOptions_Statics::NewProp_ReturnValue_MetaData)) }; // 3252570412
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechTaskBase_GetSubscriptionOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechTaskBase_GetSubscriptionOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechTaskBase_GetSubscriptionOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechTaskBase_GetSubscriptionOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechTaskBase, nullptr, "GetSubscriptionOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechTaskBase_GetSubscriptionOptions_Statics::AzSpeechTaskBase_eventGetSubscriptionOptions_Parms), Z_Construct_UFunction_UAzSpeechTaskBase_GetSubscriptionOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechTaskBase_GetSubscriptionOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechTaskBase_GetSubscriptionOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechTaskBase_GetSubscriptionOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechTaskBase_GetSubscriptionOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechTaskBase_GetSubscriptionOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechTaskBase_GetTaskName_Statics
	{
		struct AzSpeechTaskBase_eventGetTaskName_Parms
		{
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechTaskBase_GetTaskName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAzSpeechTaskBase_GetTaskName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechTaskBase_eventGetTaskName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechTaskBase_GetTaskName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechTaskBase_GetTaskName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechTaskBase_GetTaskName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechTaskBase_GetTaskName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechTaskBase_GetTaskName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechTaskBase_GetTaskName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechTaskBase, nullptr, "GetTaskName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechTaskBase_GetTaskName_Statics::AzSpeechTaskBase_eventGetTaskName_Parms), Z_Construct_UFunction_UAzSpeechTaskBase_GetTaskName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechTaskBase_GetTaskName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechTaskBase_GetTaskName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechTaskBase_GetTaskName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechTaskBase_GetTaskName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechTaskBase_GetTaskName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechTaskBase_StopAzSpeechTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechTaskBase_StopAzSpeechTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "DisplayName", "Stop AzSpeech Task" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechTaskBase_StopAzSpeechTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechTaskBase, nullptr, "StopAzSpeechTask", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechTaskBase_StopAzSpeechTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechTaskBase_StopAzSpeechTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechTaskBase_StopAzSpeechTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechTaskBase_StopAzSpeechTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAzSpeechTaskBase);
	UClass* Z_Construct_UClass_UAzSpeechTaskBase_NoRegister()
	{
		return UAzSpeechTaskBase::StaticClass();
	}
	struct Z_Construct_UClass_UAzSpeechTaskBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAzSpeechTaskBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AzSpeech,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAzSpeechTaskBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzSpeechTaskBase_GetSubscriptionOptions, "GetSubscriptionOptions" }, // 3326840956
		{ &Z_Construct_UFunction_UAzSpeechTaskBase_GetTaskName, "GetTaskName" }, // 574190684
		{ &Z_Construct_UFunction_UAzSpeechTaskBase_StopAzSpeechTask, "StopAzSpeechTask" }, // 1055266418
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechTaskBase_Statics::Class_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "AzSpeech/Tasks/Bases/AzSpeechTaskBase.h" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechTaskBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAzSpeechTaskBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzSpeechTaskBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAzSpeechTaskBase_Statics::ClassParams = {
		&UAzSpeechTaskBase::StaticClass,
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
		0x001002A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAzSpeechTaskBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechTaskBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAzSpeechTaskBase()
	{
		if (!Z_Registration_Info_UClass_UAzSpeechTaskBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzSpeechTaskBase.OuterSingleton, Z_Construct_UClass_UAzSpeechTaskBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAzSpeechTaskBase.OuterSingleton;
	}
	template<> AZSPEECH_API UClass* StaticClass<UAzSpeechTaskBase>()
	{
		return UAzSpeechTaskBase::StaticClass();
	}
	UAzSpeechTaskBase::UAzSpeechTaskBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAzSpeechTaskBase);
	UAzSpeechTaskBase::~UAzSpeechTaskBase() {}
	DEFINE_FUNCTION(UAzSpeechTaskStatus::execIsTaskStillValid)
	{
		P_GET_OBJECT(UAzSpeechTaskBase,Z_Param_Test);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAzSpeechTaskStatus::IsTaskStillValid(Z_Param_Test);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechTaskStatus::execIsTaskReadyToDestroy)
	{
		P_GET_OBJECT(UAzSpeechTaskBase,Z_Param_Test);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAzSpeechTaskStatus::IsTaskReadyToDestroy(Z_Param_Test);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzSpeechTaskStatus::execIsTaskActive)
	{
		P_GET_OBJECT(UAzSpeechTaskBase,Z_Param_Test);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAzSpeechTaskStatus::IsTaskActive(Z_Param_Test);
		P_NATIVE_END;
	}
	void UAzSpeechTaskStatus::StaticRegisterNativesUAzSpeechTaskStatus()
	{
		UClass* Class = UAzSpeechTaskStatus::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsTaskActive", &UAzSpeechTaskStatus::execIsTaskActive },
			{ "IsTaskReadyToDestroy", &UAzSpeechTaskStatus::execIsTaskReadyToDestroy },
			{ "IsTaskStillValid", &UAzSpeechTaskStatus::execIsTaskStillValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskActive_Statics
	{
		struct AzSpeechTaskStatus_eventIsTaskActive_Parms
		{
			const UAzSpeechTaskBase* Test;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Test_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Test;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskActive_Statics::NewProp_Test_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskActive_Statics::NewProp_Test = { "Test", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechTaskStatus_eventIsTaskActive_Parms, Test), Z_Construct_UClass_UAzSpeechTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskActive_Statics::NewProp_Test_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskActive_Statics::NewProp_Test_MetaData)) };
	void Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AzSpeechTaskStatus_eventIsTaskActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AzSpeechTaskStatus_eventIsTaskActive_Parms), &Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskActive_Statics::NewProp_Test,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechTaskStatus, nullptr, "IsTaskActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskActive_Statics::AzSpeechTaskStatus_eventIsTaskActive_Parms), Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskReadyToDestroy_Statics
	{
		struct AzSpeechTaskStatus_eventIsTaskReadyToDestroy_Parms
		{
			const UAzSpeechTaskBase* Test;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Test_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Test;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskReadyToDestroy_Statics::NewProp_Test_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskReadyToDestroy_Statics::NewProp_Test = { "Test", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechTaskStatus_eventIsTaskReadyToDestroy_Parms, Test), Z_Construct_UClass_UAzSpeechTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskReadyToDestroy_Statics::NewProp_Test_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskReadyToDestroy_Statics::NewProp_Test_MetaData)) };
	void Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskReadyToDestroy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AzSpeechTaskStatus_eventIsTaskReadyToDestroy_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskReadyToDestroy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AzSpeechTaskStatus_eventIsTaskReadyToDestroy_Parms), &Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskReadyToDestroy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskReadyToDestroy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskReadyToDestroy_Statics::NewProp_Test,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskReadyToDestroy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskReadyToDestroy_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskReadyToDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechTaskStatus, nullptr, "IsTaskReadyToDestroy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskReadyToDestroy_Statics::AzSpeechTaskStatus_eventIsTaskReadyToDestroy_Parms), Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskReadyToDestroy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskReadyToDestroy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskReadyToDestroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskReadyToDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskReadyToDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskReadyToDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskStillValid_Statics
	{
		struct AzSpeechTaskStatus_eventIsTaskStillValid_Parms
		{
			const UAzSpeechTaskBase* Test;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Test_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Test;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskStillValid_Statics::NewProp_Test_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskStillValid_Statics::NewProp_Test = { "Test", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzSpeechTaskStatus_eventIsTaskStillValid_Parms, Test), Z_Construct_UClass_UAzSpeechTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskStillValid_Statics::NewProp_Test_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskStillValid_Statics::NewProp_Test_MetaData)) };
	void Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskStillValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AzSpeechTaskStatus_eventIsTaskStillValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskStillValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AzSpeechTaskStatus_eventIsTaskStillValid_Parms), &Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskStillValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskStillValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskStillValid_Statics::NewProp_Test,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskStillValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskStillValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechTaskBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskStillValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzSpeechTaskStatus, nullptr, "IsTaskStillValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskStillValid_Statics::AzSpeechTaskStatus_eventIsTaskStillValid_Parms), Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskStillValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskStillValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskStillValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskStillValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskStillValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskStillValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAzSpeechTaskStatus);
	UClass* Z_Construct_UClass_UAzSpeechTaskStatus_NoRegister()
	{
		return UAzSpeechTaskStatus::StaticClass();
	}
	struct Z_Construct_UClass_UAzSpeechTaskStatus_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAzSpeechTaskStatus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AzSpeech,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAzSpeechTaskStatus_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskActive, "IsTaskActive" }, // 3537013040
		{ &Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskReadyToDestroy, "IsTaskReadyToDestroy" }, // 563671954
		{ &Z_Construct_UFunction_UAzSpeechTaskStatus_IsTaskStillValid, "IsTaskStillValid" }, // 73877712
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzSpeechTaskStatus_Statics::Class_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "IncludePath", "AzSpeech/Tasks/Bases/AzSpeechTaskBase.h" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/Bases/AzSpeechTaskBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAzSpeechTaskStatus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzSpeechTaskStatus>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAzSpeechTaskStatus_Statics::ClassParams = {
		&UAzSpeechTaskStatus::StaticClass,
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
		0x001002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAzSpeechTaskStatus_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAzSpeechTaskStatus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAzSpeechTaskStatus()
	{
		if (!Z_Registration_Info_UClass_UAzSpeechTaskStatus.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzSpeechTaskStatus.OuterSingleton, Z_Construct_UClass_UAzSpeechTaskStatus_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAzSpeechTaskStatus.OuterSingleton;
	}
	template<> AZSPEECH_API UClass* StaticClass<UAzSpeechTaskStatus>()
	{
		return UAzSpeechTaskStatus::StaticClass();
	}
	UAzSpeechTaskStatus::UAzSpeechTaskStatus(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAzSpeechTaskStatus);
	UAzSpeechTaskStatus::~UAzSpeechTaskStatus() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAzSpeechTaskBase, UAzSpeechTaskBase::StaticClass, TEXT("UAzSpeechTaskBase"), &Z_Registration_Info_UClass_UAzSpeechTaskBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzSpeechTaskBase), 2529870458U) },
		{ Z_Construct_UClass_UAzSpeechTaskStatus, UAzSpeechTaskStatus::StaticClass, TEXT("UAzSpeechTaskStatus"), &Z_Registration_Info_UClass_UAzSpeechTaskStatus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzSpeechTaskStatus), 2565773673U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_3085624457(TEXT("/Script/AzSpeech"),
		Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_Bases_AzSpeechTaskBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
