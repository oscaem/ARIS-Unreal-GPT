// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HttpGPTImageModule/Public/Tasks/HttpGPTImageRequest.h"
#include "HttpGPTCommonModule/Public/Structures/HttpGPTCommonTypes.h"
#include "HttpGPTCommonModule/Public/Structures/HttpGPTImageTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpGPTImageRequest() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	HTTPGPTCOMMONMODULE_API UClass* Z_Construct_UClass_UHttpGPTBaseTask();
	HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTCommonOptions();
	HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTImageData();
	HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTImageOptions();
	HTTPGPTCOMMONMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FHttpGPTImageResponse();
	HTTPGPTIMAGEMODULE_API UClass* Z_Construct_UClass_UHttpGPTImageHelper();
	HTTPGPTIMAGEMODULE_API UClass* Z_Construct_UClass_UHttpGPTImageHelper_NoRegister();
	HTTPGPTIMAGEMODULE_API UClass* Z_Construct_UClass_UHttpGPTImageRequest();
	HTTPGPTIMAGEMODULE_API UClass* Z_Construct_UClass_UHttpGPTImageRequest_NoRegister();
	HTTPGPTIMAGEMODULE_API UFunction* Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature();
	HTTPGPTIMAGEMODULE_API UFunction* Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_HttpGPTImageModule();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature_Statics
	{
		struct _Script_HttpGPTImageModule_eventHttpGPTImageResponseDelegate_Parms
		{
			FHttpGPTImageResponse Response;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature_Statics::NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_HttpGPTImageModule_eventHttpGPTImageResponseDelegate_Parms, Response), Z_Construct_UScriptStruct_FHttpGPTImageResponse, METADATA_PARAMS(Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature_Statics::NewProp_Response_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature_Statics::NewProp_Response_MetaData)) }; // 1292637480
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature_Statics::NewProp_Response,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTImageRequest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HttpGPTImageModule, nullptr, "HttpGPTImageResponseDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature_Statics::_Script_HttpGPTImageModule_eventHttpGPTImageResponseDelegate_Parms), Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FHttpGPTImageResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& HttpGPTImageResponseDelegate, FHttpGPTImageResponse const& Response)
{
	struct _Script_HttpGPTImageModule_eventHttpGPTImageResponseDelegate_Parms
	{
		FHttpGPTImageResponse Response;
	};
	_Script_HttpGPTImageModule_eventHttpGPTImageResponseDelegate_Parms Parms;
	Parms.Response=Response;
	HttpGPTImageResponseDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UHttpGPTImageRequest::execGetPrompt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPrompt();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpGPTImageRequest::execGetImageOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHttpGPTImageOptions*)Z_Param__Result=P_THIS->GetImageOptions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpGPTImageRequest::execRequestImages_CustomOptions)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prompt);
		P_GET_STRUCT(FHttpGPTCommonOptions,Z_Param_CommonOptions);
		P_GET_STRUCT(FHttpGPTImageOptions,Z_Param_ImageOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHttpGPTImageRequest**)Z_Param__Result=UHttpGPTImageRequest::RequestImages_CustomOptions(Z_Param_WorldContextObject,Z_Param_Prompt,Z_Param_CommonOptions,Z_Param_ImageOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpGPTImageRequest::execRequestImages_DefaultOptions)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prompt);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHttpGPTImageRequest**)Z_Param__Result=UHttpGPTImageRequest::RequestImages_DefaultOptions(Z_Param_WorldContextObject,Z_Param_Prompt);
		P_NATIVE_END;
	}
	void UHttpGPTImageRequest::StaticRegisterNativesUHttpGPTImageRequest()
	{
		UClass* Class = UHttpGPTImageRequest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetImageOptions", &UHttpGPTImageRequest::execGetImageOptions },
			{ "GetPrompt", &UHttpGPTImageRequest::execGetPrompt },
			{ "RequestImages_CustomOptions", &UHttpGPTImageRequest::execRequestImages_CustomOptions },
			{ "RequestImages_DefaultOptions", &UHttpGPTImageRequest::execRequestImages_DefaultOptions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions_Statics
	{
		struct HttpGPTImageRequest_eventGetImageOptions_Parms
		{
			FHttpGPTImageOptions ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTImageRequest_eventGetImageOptions_Parms, ReturnValue), Z_Construct_UScriptStruct_FHttpGPTImageOptions, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions_Statics::NewProp_ReturnValue_MetaData)) }; // 1009240069
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Image" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTImageRequest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTImageRequest, nullptr, "GetImageOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions_Statics::HttpGPTImageRequest_eventGetImageOptions_Parms), Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt_Statics
	{
		struct HttpGPTImageRequest_eventGetPrompt_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTImageRequest_eventGetPrompt_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt_Statics::Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Image" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTImageRequest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTImageRequest, nullptr, "GetPrompt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt_Statics::HttpGPTImageRequest_eventGetPrompt_Parms), Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics
	{
		struct HttpGPTImageRequest_eventRequestImages_CustomOptions_Parms
		{
			UObject* WorldContextObject;
			FString Prompt;
			FHttpGPTCommonOptions CommonOptions;
			FHttpGPTImageOptions ImageOptions;
			UHttpGPTImageRequest* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Prompt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Prompt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommonOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImageOptions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTImageRequest_eventRequestImages_CustomOptions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::NewProp_Prompt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::NewProp_Prompt = { "Prompt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTImageRequest_eventRequestImages_CustomOptions_Parms, Prompt), METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::NewProp_Prompt_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::NewProp_Prompt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::NewProp_CommonOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::NewProp_CommonOptions = { "CommonOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTImageRequest_eventRequestImages_CustomOptions_Parms, CommonOptions), Z_Construct_UScriptStruct_FHttpGPTCommonOptions, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::NewProp_CommonOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::NewProp_CommonOptions_MetaData)) }; // 2823106801
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::NewProp_ImageOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::NewProp_ImageOptions = { "ImageOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTImageRequest_eventRequestImages_CustomOptions_Parms, ImageOptions), Z_Construct_UScriptStruct_FHttpGPTImageOptions, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::NewProp_ImageOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::NewProp_ImageOptions_MetaData)) }; // 1009240069
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTImageRequest_eventRequestImages_CustomOptions_Parms, ReturnValue), Z_Construct_UClass_UHttpGPTImageRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::NewProp_Prompt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::NewProp_CommonOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::NewProp_ImageOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "HttpGPT | Image | Custom" },
		{ "DisplayName", "Request Images with Custom Options" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTImageRequest.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTImageRequest, nullptr, "RequestImages_CustomOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::HttpGPTImageRequest_eventRequestImages_CustomOptions_Parms), Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics
	{
		struct HttpGPTImageRequest_eventRequestImages_DefaultOptions_Parms
		{
			UObject* WorldContextObject;
			FString Prompt;
			UHttpGPTImageRequest* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Prompt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Prompt;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTImageRequest_eventRequestImages_DefaultOptions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::NewProp_Prompt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::NewProp_Prompt = { "Prompt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTImageRequest_eventRequestImages_DefaultOptions_Parms, Prompt), METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::NewProp_Prompt_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::NewProp_Prompt_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTImageRequest_eventRequestImages_DefaultOptions_Parms, ReturnValue), Z_Construct_UClass_UHttpGPTImageRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::NewProp_Prompt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "HttpGPT | Image | Default" },
		{ "DisplayName", "Request Images with Default Options" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTImageRequest.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTImageRequest, nullptr, "RequestImages_DefaultOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::HttpGPTImageRequest_eventRequestImages_DefaultOptions_Parms), Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHttpGPTImageRequest);
	UClass* Z_Construct_UClass_UHttpGPTImageRequest_NoRegister()
	{
		return UHttpGPTImageRequest::StaticClass();
	}
	struct Z_Construct_UClass_UHttpGPTImageRequest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcessCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ProcessCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ProgressUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ProgressStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ErrorReceived;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHttpGPTImageRequest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHttpGPTBaseTask,
		(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTImageModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHttpGPTImageRequest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHttpGPTImageRequest_GetImageOptions, "GetImageOptions" }, // 695458520
		{ &Z_Construct_UFunction_UHttpGPTImageRequest_GetPrompt, "GetPrompt" }, // 2797167011
		{ &Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_CustomOptions, "RequestImages_CustomOptions" }, // 2201652064
		{ &Z_Construct_UFunction_UHttpGPTImageRequest_RequestImages_DefaultOptions, "RequestImages_DefaultOptions" }, // 566244116
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpGPTImageRequest_Statics::Class_MetaDataParams[] = {
		{ "Category", "HttpGPT | Image" },
		{ "Comment", "/**\n * \n */" },
		{ "ExposedAsyncProxy", "AsyncTask" },
		{ "IncludePath", "Tasks/HttpGPTImageRequest.h" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTImageRequest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpGPTImageRequest_Statics::NewProp_ProcessCompleted_MetaData[] = {
		{ "Category", "HttpGPT | Image" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTImageRequest.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHttpGPTImageRequest_Statics::NewProp_ProcessCompleted = { "ProcessCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHttpGPTImageRequest, ProcessCompleted), Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHttpGPTImageRequest_Statics::NewProp_ProcessCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTImageRequest_Statics::NewProp_ProcessCompleted_MetaData)) }; // 2074798508
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpGPTImageRequest_Statics::NewProp_ProgressUpdated_MetaData[] = {
		{ "Category", "HttpGPT | Image" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTImageRequest.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHttpGPTImageRequest_Statics::NewProp_ProgressUpdated = { "ProgressUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHttpGPTImageRequest, ProgressUpdated), Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHttpGPTImageRequest_Statics::NewProp_ProgressUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTImageRequest_Statics::NewProp_ProgressUpdated_MetaData)) }; // 2074798508
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpGPTImageRequest_Statics::NewProp_ProgressStarted_MetaData[] = {
		{ "Category", "HttpGPT | Image" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTImageRequest.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHttpGPTImageRequest_Statics::NewProp_ProgressStarted = { "ProgressStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHttpGPTImageRequest, ProgressStarted), Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHttpGPTImageRequest_Statics::NewProp_ProgressStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTImageRequest_Statics::NewProp_ProgressStarted_MetaData)) }; // 2074798508
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpGPTImageRequest_Statics::NewProp_ErrorReceived_MetaData[] = {
		{ "Category", "HttpGPT | Image" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTImageRequest.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHttpGPTImageRequest_Statics::NewProp_ErrorReceived = { "ErrorReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHttpGPTImageRequest, ErrorReceived), Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageResponseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UHttpGPTImageRequest_Statics::NewProp_ErrorReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTImageRequest_Statics::NewProp_ErrorReceived_MetaData)) }; // 2074798508
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHttpGPTImageRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpGPTImageRequest_Statics::NewProp_ProcessCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpGPTImageRequest_Statics::NewProp_ProgressUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpGPTImageRequest_Statics::NewProp_ProgressStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHttpGPTImageRequest_Statics::NewProp_ErrorReceived,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHttpGPTImageRequest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpGPTImageRequest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHttpGPTImageRequest_Statics::ClassParams = {
		&UHttpGPTImageRequest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHttpGPTImageRequest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTImageRequest_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHttpGPTImageRequest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTImageRequest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHttpGPTImageRequest()
	{
		if (!Z_Registration_Info_UClass_UHttpGPTImageRequest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHttpGPTImageRequest.OuterSingleton, Z_Construct_UClass_UHttpGPTImageRequest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHttpGPTImageRequest.OuterSingleton;
	}
	template<> HTTPGPTIMAGEMODULE_API UClass* StaticClass<UHttpGPTImageRequest>()
	{
		return UHttpGPTImageRequest::StaticClass();
	}
	UHttpGPTImageRequest::UHttpGPTImageRequest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpGPTImageRequest);
	UHttpGPTImageRequest::~UHttpGPTImageRequest() {}
	struct Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature_Statics
	{
		struct _Script_HttpGPTImageModule_eventHttpGPTImageGenerate_Parms
		{
			UTexture2D* Image;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_HttpGPTImageModule_eventHttpGPTImageGenerate_Parms, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature_Statics::NewProp_Image,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTImageRequest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HttpGPTImageModule, nullptr, "HttpGPTImageGenerate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature_Statics::_Script_HttpGPTImageModule_eventHttpGPTImageGenerate_Parms), Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FHttpGPTImageGenerate_DelegateWrapper(const FScriptDelegate& HttpGPTImageGenerate, UTexture2D* Image)
{
	struct _Script_HttpGPTImageModule_eventHttpGPTImageGenerate_Parms
	{
		UTexture2D* Image;
	};
	_Script_HttpGPTImageModule_eventHttpGPTImageGenerate_Parms Parms;
	Parms.Image=Image;
	HttpGPTImageGenerate.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UHttpGPTImageHelper::execGenerateImage)
	{
		P_GET_STRUCT_REF(FHttpGPTImageData,Z_Param_Out_ImageData);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UHttpGPTImageHelper::GenerateImage(Z_Param_Out_ImageData,FHttpGPTImageGenerate(Z_Param_Out_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHttpGPTImageHelper::execCastToHttpGPTImageRequest)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHttpGPTImageRequest**)Z_Param__Result=UHttpGPTImageHelper::CastToHttpGPTImageRequest(Z_Param_Object);
		P_NATIVE_END;
	}
	void UHttpGPTImageHelper::StaticRegisterNativesUHttpGPTImageHelper()
	{
		UClass* Class = UHttpGPTImageHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CastToHttpGPTImageRequest", &UHttpGPTImageHelper::execCastToHttpGPTImageRequest },
			{ "GenerateImage", &UHttpGPTImageHelper::execGenerateImage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest_Statics
	{
		struct HttpGPTImageHelper_eventCastToHttpGPTImageRequest_Parms
		{
			UObject* Object;
			UHttpGPTImageRequest* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTImageHelper_eventCastToHttpGPTImageRequest_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTImageHelper_eventCastToHttpGPTImageRequest_Parms, ReturnValue), Z_Construct_UClass_UHttpGPTImageRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Image" },
		{ "DisplayName", "Cast to HttpGPT Image Request" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTImageRequest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTImageHelper, nullptr, "CastToHttpGPTImageRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest_Statics::HttpGPTImageHelper_eventCastToHttpGPTImageRequest_Parms), Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics
	{
		struct HttpGPTImageHelper_eventGenerateImage_Parms
		{
			FHttpGPTImageData ImageData;
			FScriptDelegate Callback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImageData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::NewProp_ImageData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::NewProp_ImageData = { "ImageData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTImageHelper_eventGenerateImage_Parms, ImageData), Z_Construct_UScriptStruct_FHttpGPTImageData, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::NewProp_ImageData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::NewProp_ImageData_MetaData)) }; // 319914800
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HttpGPTImageHelper_eventGenerateImage_Parms, Callback), Z_Construct_UDelegateFunction_HttpGPTImageModule_HttpGPTImageGenerate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::NewProp_Callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::NewProp_Callback_MetaData)) }; // 3053795110
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::NewProp_ImageData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "HttpGPT | Image" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTImageRequest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpGPTImageHelper, nullptr, "GenerateImage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::HttpGPTImageHelper_eventGenerateImage_Parms), Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHttpGPTImageHelper);
	UClass* Z_Construct_UClass_UHttpGPTImageHelper_NoRegister()
	{
		return UHttpGPTImageHelper::StaticClass();
	}
	struct Z_Construct_UClass_UHttpGPTImageHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHttpGPTImageHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HttpGPTImageModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHttpGPTImageHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHttpGPTImageHelper_CastToHttpGPTImageRequest, "CastToHttpGPTImageRequest" }, // 2670711662
		{ &Z_Construct_UFunction_UHttpGPTImageHelper_GenerateImage, "GenerateImage" }, // 262245783
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHttpGPTImageHelper_Statics::Class_MetaDataParams[] = {
		{ "Category", "HttpGPT | Image" },
		{ "DisplayName", "HttpGPT Image Helper" },
		{ "IncludePath", "Tasks/HttpGPTImageRequest.h" },
		{ "ModuleRelativePath", "Public/Tasks/HttpGPTImageRequest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHttpGPTImageHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHttpGPTImageHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHttpGPTImageHelper_Statics::ClassParams = {
		&UHttpGPTImageHelper::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHttpGPTImageHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHttpGPTImageHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHttpGPTImageHelper()
	{
		if (!Z_Registration_Info_UClass_UHttpGPTImageHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHttpGPTImageHelper.OuterSingleton, Z_Construct_UClass_UHttpGPTImageHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHttpGPTImageHelper.OuterSingleton;
	}
	template<> HTTPGPTIMAGEMODULE_API UClass* StaticClass<UHttpGPTImageHelper>()
	{
		return UHttpGPTImageHelper::StaticClass();
	}
	UHttpGPTImageHelper::UHttpGPTImageHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpGPTImageHelper);
	UHttpGPTImageHelper::~UHttpGPTImageHelper() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTImageModule_Public_Tasks_HttpGPTImageRequest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTImageModule_Public_Tasks_HttpGPTImageRequest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHttpGPTImageRequest, UHttpGPTImageRequest::StaticClass, TEXT("UHttpGPTImageRequest"), &Z_Registration_Info_UClass_UHttpGPTImageRequest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHttpGPTImageRequest), 21644420U) },
		{ Z_Construct_UClass_UHttpGPTImageHelper, UHttpGPTImageHelper::StaticClass, TEXT("UHttpGPTImageHelper"), &Z_Registration_Info_UClass_UHttpGPTImageHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHttpGPTImageHelper), 3439363079U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTImageModule_Public_Tasks_HttpGPTImageRequest_h_2119548720(TEXT("/Script/HttpGPTImageModule"),
		Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTImageModule_Public_Tasks_HttpGPTImageRequest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_HttpGPT_UE51_Source_HttpGPTImageModule_Public_Tasks_HttpGPTImageRequest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
