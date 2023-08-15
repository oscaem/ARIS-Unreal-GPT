// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HttpGPTEditorModule/Private/SHttpGPTChatView.h"
#include "HttpGPTCommonModule/Public/Structures/HttpGPTChatTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSHttpGPTChatView() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTChatResponse();
	HTTPGPTEDITORMODULE_API UClass* Z_Construct_UClass_UHttpGPTMessagingHandler();
	HTTPGPTEDITORMODULE_API UClass* Z_Construct_UClass_UHttpGPTMessagingHandler_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HttpGPTEditorModule();
// End Cross Module References
	DEFINE_FUNCTION(UHttpGPTMessagingHandler::execProcessCompleted)
	{
		P_GET_STRUCT_REF(FHttpGPTChatResponse,Z_Param_Out_Response);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProcessCompleted(Z_Param_Out_Response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpGPTMessagingHandler::execProcessUpdated)
	{
		P_GET_STRUCT_REF(FHttpGPTChatResponse,Z_Param_Out_Response);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProcessUpdated(Z_Param_Out_Response);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpGPTMessagingHandler::execRequestFailed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestFailed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpGPTMessagingHandler::execRequestSent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestSent();
		P_NATIVE_END;
	}
	void UHttpGPTMessagingHandler::StaticRegisterNativesUHttpGPTMessagingHandler()
	{
		UClass* Class = UHttpGPTMessagingHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ProcessCompleted", &UHttpGPTMessagingHandler::execProcessCompleted },
			{ "ProcessUpdated", &UHttpGPTMessagingHandler::execProcessUpdated },
			{ "RequestFailed", &UHttpGPTMessagingHandler::execRequestFailed },
			{ "RequestSent", &UHttpGPTMessagingHandler::execRequestSent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted_Statics
	{
		struct HttpGPTMessagingHandler_eventProcessCompleted_Parms
		{
			FHttpGPTChatResponse Response;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted_Statics::NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTMessagingHandler_eventProcessCompleted_Parms, Response), Z_Construct_UScriptStruct_FHttpGPTChatResponse, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted_Statics::NewProp_Response_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted_Statics::NewProp_Response_MetaData)) }; // 2434160593
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SHttpGPTChatView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTMessagingHandler, nullptr, "ProcessCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted_Statics::HttpGPTMessagingHandler_eventProcessCompleted_Parms), Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated_Statics
	{
		struct HttpGPTMessagingHandler_eventProcessUpdated_Parms
		{
			FHttpGPTChatResponse Response;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Response;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated_Statics::NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTMessagingHandler_eventProcessUpdated_Parms, Response), Z_Construct_UScriptStruct_FHttpGPTChatResponse, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated_Statics::NewProp_Response_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated_Statics::NewProp_Response_MetaData)) }; // 2434160593
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SHttpGPTChatView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTMessagingHandler, nullptr, "ProcessUpdated", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated_Statics::HttpGPTMessagingHandler_eventProcessUpdated_Parms), Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestFailed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SHttpGPTChatView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTMessagingHandler, nullptr, "RequestFailed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestSent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestSent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SHttpGPTChatView.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestSent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTMessagingHandler, nullptr, "RequestSent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestSent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestSent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestSent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestSent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHttpGPTMessagingHandler);
	UClass* Z_Construct_UClass_UHttpGPTMessagingHandler_NoRegister()
	{
		return UHttpGPTMessagingHandler::StaticClass();
	}
	struct Z_Construct_UClass_UHttpGPTMessagingHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHttpGPTMessagingHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTEditorModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHttpGPTMessagingHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessCompleted, "ProcessCompleted" }, // 1336312296
		{ &Z_Construct_UFunction_UHttpGPTMessagingHandler_ProcessUpdated, "ProcessUpdated" }, // 1789972815
		{ &Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestFailed, "RequestFailed" }, // 331336257
		{ &Z_Construct_UFunction_UHttpGPTMessagingHandler_RequestSent, "RequestSent" }, // 2984645245
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpGPTMessagingHandler_Statics::Class_MetaDataParams[] = {
		{ "Category", "Implementation" },
		{ "IncludePath", "SHttpGPTChatView.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/SHttpGPTChatView.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHttpGPTMessagingHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpGPTMessagingHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHttpGPTMessagingHandler_Statics::ClassParams = {
		&UHttpGPTMessagingHandler::StaticClass,
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
		0x000802A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHttpGPTMessagingHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTMessagingHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHttpGPTMessagingHandler()
	{
		if (!Z_Registration_Info_UClass_UHttpGPTMessagingHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHttpGPTMessagingHandler.OuterSingleton, Z_Construct_UClass_UHttpGPTMessagingHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHttpGPTMessagingHandler.OuterSingleton;
	}
	template<> HTTPGPTEDITORMODULE_API UClass* StaticClass<UHttpGPTMessagingHandler>()
	{
		return UHttpGPTMessagingHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpGPTMessagingHandler);
	UHttpGPTMessagingHandler::~UHttpGPTMessagingHandler() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTEditorModule_Private_SHttpGPTChatView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTEditorModule_Private_SHttpGPTChatView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHttpGPTMessagingHandler, UHttpGPTMessagingHandler::StaticClass, TEXT("UHttpGPTMessagingHandler"), &Z_Registration_Info_UClass_UHttpGPTMessagingHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHttpGPTMessagingHandler), 1113158504U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTEditorModule_Private_SHttpGPTChatView_h_927801067(TEXT("/Script/HttpGPTEditorModule"),
		Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTEditorModule_Private_SHttpGPTChatView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTEditorModule_Private_SHttpGPTChatView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
