// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HttpGPTCommonModule/Public/Tasks/HttpGPTBaseTask.h"
#include "HttpGPTCommonModule/Public/Structures/HttpGPTCommonTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpGPTBaseTask() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	HTTPGPTCOMMONMODULE_API UClass* Z_Construct_UClass_UHttpGPTBaseTask();
	HTTPGPTCOMMONMODULE_API UClass* Z_Construct_UClass_UHttpGPTBaseTask_NoRegister();
	HTTPGPTCOMMONMODULE_API UClass* Z_Construct_UClass_UHttpGPTTaskStatus();
	HTTPGPTCOMMONMODULE_API UClass* Z_Construct_UClass_UHttpGPTTaskStatus_NoRegister();
	HTTPGPTCOMMONMODULE_API UFunction* Z_Construct_UDelegateFunction_HttpGPTCommonModule_HttpGPTGenericDelegate__DelegateSignature();
	HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTCommonOptions();
	UPackage* Z_Construct_UPackage__Script_HttpGPTCommonModule();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_HttpGPTCommonModule_HttpGPTGenericDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HttpGPTCommonModule_HttpGPTGenericDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTBaseTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HttpGPTCommonModule_HttpGPTGenericDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HttpGPTCommonModule, nullptr, "HttpGPTGenericDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HttpGPTCommonModule_HttpGPTGenericDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpGPTCommonModule_HttpGPTGenericDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HttpGPTCommonModule_HttpGPTGenericDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HttpGPTCommonModule_HttpGPTGenericDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FHttpGPTGenericDelegate_DelegateWrapper(const FMulticastScriptDelegate& HttpGPTGenericDelegate)
{
	HttpGPTGenericDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UHttpGPTBaseTask::execGetCommonOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHttpGPTCommonOptions*)Z_Param__Result=P_THIS->GetCommonOptions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpGPTBaseTask::execStopHttpGPTTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopHttpGPTTask();
		P_NATIVE_END;
	}
	void UHttpGPTBaseTask::StaticRegisterNativesUHttpGPTBaseTask()
	{
		UClass* Class = UHttpGPTBaseTask::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCommonOptions", &UHttpGPTBaseTask::execGetCommonOptions },
			{ "StopHttpGPTTask", &UHttpGPTBaseTask::execStopHttpGPTTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions_Statics
	{
		struct HttpGPTBaseTask_eventGetCommonOptions_Parms
		{
			FHttpGPTCommonOptions ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTBaseTask_eventGetCommonOptions_Parms, ReturnValue), Z_Construct_UScriptStruct_FHttpGPTCommonOptions, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions_Statics::NewProp_ReturnValue_MetaData)) }; // 2823106801
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "HttpGPT" },
		{ "DisplayName", "Get API Key" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTBaseTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTBaseTask, nullptr, "GetCommonOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions_Statics::HttpGPTBaseTask_eventGetCommonOptions_Parms), Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpGPTBaseTask_StopHttpGPTTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTBaseTask_StopHttpGPTTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "HttpGPT" },
		{ "DisplayName", "Stop HttpGPT Task" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTBaseTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTBaseTask_StopHttpGPTTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTBaseTask, nullptr, "StopHttpGPTTask", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTBaseTask_StopHttpGPTTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTBaseTask_StopHttpGPTTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpGPTBaseTask_StopHttpGPTTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTBaseTask_StopHttpGPTTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHttpGPTBaseTask);
	UClass* Z_Construct_UClass_UHttpGPTBaseTask_NoRegister()
	{
		return UHttpGPTBaseTask::StaticClass();
	}
	struct Z_Construct_UClass_UHttpGPTBaseTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RequestFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestSent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_RequestSent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHttpGPTBaseTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHttpGPTBaseTask_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHttpGPTBaseTask_GetCommonOptions, "GetCommonOptions" }, // 2632339405
		{ &Z_Construct_UFunction_UHttpGPTBaseTask_StopHttpGPTTask, "StopHttpGPTTask" }, // 1010936733
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpGPTBaseTask_Statics::Class_MetaDataParams[] = {
		{ "Category", "HttpGPT" },
		{ "Comment", "/**\n * \n */" },
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "IncludePath", "Tasks/HttpGPTBaseTask.h" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTBaseTask.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpGPTBaseTask_Statics::NewProp_RequestFailed_MetaData[] = {
		{ "Category", "HttpGPT" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTBaseTask.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHttpGPTBaseTask_Statics::NewProp_RequestFailed = { "RequestFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHttpGPTBaseTask, RequestFailed), Z_Construct_UDelegateFunction_HttpGPTCommonModule_HttpGPTGenericDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHttpGPTBaseTask_Statics::NewProp_RequestFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTBaseTask_Statics::NewProp_RequestFailed_MetaData)) }; // 992195430
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpGPTBaseTask_Statics::NewProp_RequestSent_MetaData[] = {
		{ "Category", "HttpGPT" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTBaseTask.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHttpGPTBaseTask_Statics::NewProp_RequestSent = { "RequestSent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHttpGPTBaseTask, RequestSent), Z_Construct_UDelegateFunction_HttpGPTCommonModule_HttpGPTGenericDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHttpGPTBaseTask_Statics::NewProp_RequestSent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTBaseTask_Statics::NewProp_RequestSent_MetaData)) }; // 992195430
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHttpGPTBaseTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpGPTBaseTask_Statics::NewProp_RequestFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpGPTBaseTask_Statics::NewProp_RequestSent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHttpGPTBaseTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpGPTBaseTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHttpGPTBaseTask_Statics::ClassParams = {
		&UHttpGPTBaseTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHttpGPTBaseTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTBaseTask_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHttpGPTBaseTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTBaseTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHttpGPTBaseTask()
	{
		if (!Z_Registration_Info_UClass_UHttpGPTBaseTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHttpGPTBaseTask.OuterSingleton, Z_Construct_UClass_UHttpGPTBaseTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHttpGPTBaseTask.OuterSingleton;
	}
	template<> HTTPGPTCOMMONMODULE_API UClass* StaticClass<UHttpGPTBaseTask>()
	{
		return UHttpGPTBaseTask::StaticClass();
	}
	UHttpGPTBaseTask::UHttpGPTBaseTask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpGPTBaseTask);
	UHttpGPTBaseTask::~UHttpGPTBaseTask() {}
	DEFINE_FUNCTION(UHttpGPTTaskStatus::execIsTaskStillValid)
	{
		P_GET_OBJECT(UHttpGPTBaseTask,Z_Param_Test);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHttpGPTTaskStatus::IsTaskStillValid(Z_Param_Test);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpGPTTaskStatus::execIsTaskReadyToDestroy)
	{
		P_GET_OBJECT(UHttpGPTBaseTask,Z_Param_Test);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHttpGPTTaskStatus::IsTaskReadyToDestroy(Z_Param_Test);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpGPTTaskStatus::execIsTaskActive)
	{
		P_GET_OBJECT(UHttpGPTBaseTask,Z_Param_Test);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHttpGPTTaskStatus::IsTaskActive(Z_Param_Test);
		P_NATIVE_END;
	}
	void UHttpGPTTaskStatus::StaticRegisterNativesUHttpGPTTaskStatus()
	{
		UClass* Class = UHttpGPTTaskStatus::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsTaskActive", &UHttpGPTTaskStatus::execIsTaskActive },
			{ "IsTaskReadyToDestroy", &UHttpGPTTaskStatus::execIsTaskReadyToDestroy },
			{ "IsTaskStillValid", &UHttpGPTTaskStatus::execIsTaskStillValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics
	{
		struct HttpGPTTaskStatus_eventIsTaskActive_Parms
		{
			const UHttpGPTBaseTask* Test;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::NewProp_Test_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::NewProp_Test = { "Test", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTTaskStatus_eventIsTaskActive_Parms, Test), Z_Construct_UClass_UHttpGPTBaseTask_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::NewProp_Test_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::NewProp_Test_MetaData)) };
	void Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HttpGPTTaskStatus_eventIsTaskActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HttpGPTTaskStatus_eventIsTaskActive_Parms), &Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::NewProp_Test,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "HttpGPT" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTBaseTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTTaskStatus, nullptr, "IsTaskActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::HttpGPTTaskStatus_eventIsTaskActive_Parms), Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics
	{
		struct HttpGPTTaskStatus_eventIsTaskReadyToDestroy_Parms
		{
			const UHttpGPTBaseTask* Test;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::NewProp_Test_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::NewProp_Test = { "Test", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTTaskStatus_eventIsTaskReadyToDestroy_Parms, Test), Z_Construct_UClass_UHttpGPTBaseTask_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::NewProp_Test_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::NewProp_Test_MetaData)) };
	void Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HttpGPTTaskStatus_eventIsTaskReadyToDestroy_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HttpGPTTaskStatus_eventIsTaskReadyToDestroy_Parms), &Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::NewProp_Test,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::Function_MetaDataParams[] = {
		{ "Category", "HttpGPT" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTBaseTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTTaskStatus, nullptr, "IsTaskReadyToDestroy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::HttpGPTTaskStatus_eventIsTaskReadyToDestroy_Parms), Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics
	{
		struct HttpGPTTaskStatus_eventIsTaskStillValid_Parms
		{
			const UHttpGPTBaseTask* Test;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::NewProp_Test_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::NewProp_Test = { "Test", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTTaskStatus_eventIsTaskStillValid_Parms, Test), Z_Construct_UClass_UHttpGPTBaseTask_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::NewProp_Test_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::NewProp_Test_MetaData)) };
	void Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HttpGPTTaskStatus_eventIsTaskStillValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(HttpGPTTaskStatus_eventIsTaskStillValid_Parms), &Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::NewProp_Test,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "HttpGPT" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTBaseTask.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTTaskStatus, nullptr, "IsTaskStillValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::HttpGPTTaskStatus_eventIsTaskStillValid_Parms), Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHttpGPTTaskStatus);
	UClass* Z_Construct_UClass_UHttpGPTTaskStatus_NoRegister()
	{
		return UHttpGPTTaskStatus::StaticClass();
	}
	struct Z_Construct_UClass_UHttpGPTTaskStatus_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHttpGPTTaskStatus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTCommonModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHttpGPTTaskStatus_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskActive, "IsTaskActive" }, // 4239285841
		{ &Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskReadyToDestroy, "IsTaskReadyToDestroy" }, // 2424954557
		{ &Z_Construct_UFunction_UHttpGPTTaskStatus_IsTaskStillValid, "IsTaskStillValid" }, // 2759608793
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpGPTTaskStatus_Statics::Class_MetaDataParams[] = {
		{ "Category", "HttpGPT" },
		{ "IncludePath", "Tasks/HttpGPTBaseTask.h" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTBaseTask.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHttpGPTTaskStatus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpGPTTaskStatus>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHttpGPTTaskStatus_Statics::ClassParams = {
		&UHttpGPTTaskStatus::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHttpGPTTaskStatus_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTTaskStatus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHttpGPTTaskStatus()
	{
		if (!Z_Registration_Info_UClass_UHttpGPTTaskStatus.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHttpGPTTaskStatus.OuterSingleton, Z_Construct_UClass_UHttpGPTTaskStatus_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHttpGPTTaskStatus.OuterSingleton;
	}
	template<> HTTPGPTCOMMONMODULE_API UClass* StaticClass<UHttpGPTTaskStatus>()
	{
		return UHttpGPTTaskStatus::StaticClass();
	}
	UHttpGPTTaskStatus::UHttpGPTTaskStatus(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpGPTTaskStatus);
	UHttpGPTTaskStatus::~UHttpGPTTaskStatus() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Tasks_HttpGPTBaseTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Tasks_HttpGPTBaseTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHttpGPTBaseTask, UHttpGPTBaseTask::StaticClass, TEXT("UHttpGPTBaseTask"), &Z_Registration_Info_UClass_UHttpGPTBaseTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHttpGPTBaseTask), 4111734339U) },
		{ Z_Construct_UClass_UHttpGPTTaskStatus, UHttpGPTTaskStatus::StaticClass, TEXT("UHttpGPTTaskStatus"), &Z_Registration_Info_UClass_UHttpGPTTaskStatus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHttpGPTTaskStatus), 3308367479U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Tasks_HttpGPTBaseTask_h_873596913(TEXT("/Script/HttpGPTCommonModule"),
		Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Tasks_HttpGPTBaseTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTCommonModule_Public_Tasks_HttpGPTBaseTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
