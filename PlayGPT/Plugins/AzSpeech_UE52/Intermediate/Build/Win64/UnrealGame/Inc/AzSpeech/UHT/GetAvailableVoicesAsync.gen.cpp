// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzSpeech/Tasks/GetAvailableVoicesAsync.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetAvailableVoicesAsync() {}
// Cross Module References
	AZSPEECH_API UClass* Z_Construct_UClass_UGetAvailableVoicesAsync();
	AZSPEECH_API UClass* Z_Construct_UClass_UGetAvailableVoicesAsync_NoRegister();
	AZSPEECH_API UFunction* Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesFailDelegate__DelegateSignature();
	AZSPEECH_API UFunction* Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesResultDelegate__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_AzSpeech();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesFailDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesFailDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/GetAvailableVoicesAsync.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesFailDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AzSpeech, nullptr, "AzSpeechFindAvailableVoicesFailDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesFailDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesFailDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesFailDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesFailDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAzSpeechFindAvailableVoicesFailDelegate_DelegateWrapper(const FMulticastScriptDelegate& AzSpeechFindAvailableVoicesFailDelegate)
{
	AzSpeechFindAvailableVoicesFailDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesResultDelegate__DelegateSignature_Statics
	{
		struct _Script_AzSpeech_eventAzSpeechFindAvailableVoicesResultDelegate_Parms
		{
			TArray<FString> AvailableVoices;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AvailableVoices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableVoices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableVoices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesResultDelegate__DelegateSignature_Statics::NewProp_AvailableVoices_Inner = { "AvailableVoices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesResultDelegate__DelegateSignature_Statics::NewProp_AvailableVoices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesResultDelegate__DelegateSignature_Statics::NewProp_AvailableVoices = { "AvailableVoices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AzSpeech_eventAzSpeechFindAvailableVoicesResultDelegate_Parms, AvailableVoices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesResultDelegate__DelegateSignature_Statics::NewProp_AvailableVoices_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesResultDelegate__DelegateSignature_Statics::NewProp_AvailableVoices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesResultDelegate__DelegateSignature_Statics::NewProp_AvailableVoices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesResultDelegate__DelegateSignature_Statics::NewProp_AvailableVoices,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/GetAvailableVoicesAsync.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AzSpeech, nullptr, "AzSpeechFindAvailableVoicesResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesResultDelegate__DelegateSignature_Statics::_Script_AzSpeech_eventAzSpeechFindAvailableVoicesResultDelegate_Parms), Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAzSpeechFindAvailableVoicesResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& AzSpeechFindAvailableVoicesResultDelegate, TArray<FString> const& AvailableVoices)
{
	struct _Script_AzSpeech_eventAzSpeechFindAvailableVoicesResultDelegate_Parms
	{
		TArray<FString> AvailableVoices;
	};
	_Script_AzSpeech_eventAzSpeechFindAvailableVoicesResultDelegate_Parms Parms;
	Parms.AvailableVoices=AvailableVoices;
	AzSpeechFindAvailableVoicesResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UGetAvailableVoicesAsync::execGetAvailableVoicesAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Locale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGetAvailableVoicesAsync**)Z_Param__Result=UGetAvailableVoicesAsync::GetAvailableVoicesAsync(Z_Param_WorldContextObject,Z_Param_Locale);
		P_NATIVE_END;
	}
	void UGetAvailableVoicesAsync::StaticRegisterNativesUGetAvailableVoicesAsync()
	{
		UClass* Class = UGetAvailableVoicesAsync::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAvailableVoicesAsync", &UGetAvailableVoicesAsync::execGetAvailableVoicesAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGetAvailableVoicesAsync_GetAvailableVoicesAsync_Statics
	{
		struct GetAvailableVoicesAsync_eventGetAvailableVoicesAsync_Parms
		{
			UObject* WorldContextObject;
			FString Locale;
			UGetAvailableVoicesAsync* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Locale_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Locale;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetAvailableVoicesAsync_GetAvailableVoicesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GetAvailableVoicesAsync_eventGetAvailableVoicesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetAvailableVoicesAsync_GetAvailableVoicesAsync_Statics::NewProp_Locale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGetAvailableVoicesAsync_GetAvailableVoicesAsync_Statics::NewProp_Locale = { "Locale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GetAvailableVoicesAsync_eventGetAvailableVoicesAsync_Parms, Locale), METADATA_PARAMS(Z_Construct_UFunction_UGetAvailableVoicesAsync_GetAvailableVoicesAsync_Statics::NewProp_Locale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetAvailableVoicesAsync_GetAvailableVoicesAsync_Statics::NewProp_Locale_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetAvailableVoicesAsync_GetAvailableVoicesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GetAvailableVoicesAsync_eventGetAvailableVoicesAsync_Parms, ReturnValue), Z_Construct_UClass_UGetAvailableVoicesAsync_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetAvailableVoicesAsync_GetAvailableVoicesAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetAvailableVoicesAsync_GetAvailableVoicesAsync_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetAvailableVoicesAsync_GetAvailableVoicesAsync_Statics::NewProp_Locale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetAvailableVoicesAsync_GetAvailableVoicesAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetAvailableVoicesAsync_GetAvailableVoicesAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AzSpeech" },
		{ "Comment", "/* Get the available synthesis voices */" },
		{ "CPP_Default_Locale", "" },
		{ "DisplayName", "Get Available Voices Async" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/GetAvailableVoicesAsync.h" },
		{ "ToolTip", "Get the available synthesis voices" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetAvailableVoicesAsync_GetAvailableVoicesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetAvailableVoicesAsync, nullptr, "GetAvailableVoicesAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGetAvailableVoicesAsync_GetAvailableVoicesAsync_Statics::GetAvailableVoicesAsync_eventGetAvailableVoicesAsync_Parms), Z_Construct_UFunction_UGetAvailableVoicesAsync_GetAvailableVoicesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetAvailableVoicesAsync_GetAvailableVoicesAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetAvailableVoicesAsync_GetAvailableVoicesAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetAvailableVoicesAsync_GetAvailableVoicesAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetAvailableVoicesAsync_GetAvailableVoicesAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGetAvailableVoicesAsync_GetAvailableVoicesAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGetAvailableVoicesAsync);
	UClass* Z_Construct_UClass_UGetAvailableVoicesAsync_NoRegister()
	{
		return UGetAvailableVoicesAsync::StaticClass();
	}
	struct Z_Construct_UClass_UGetAvailableVoicesAsync_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fail_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Fail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGetAvailableVoicesAsync_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AzSpeech,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGetAvailableVoicesAsync_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGetAvailableVoicesAsync_GetAvailableVoicesAsync, "GetAvailableVoicesAsync" }, // 377003414
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetAvailableVoicesAsync_Statics::Class_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "AzSpeech/Tasks/GetAvailableVoicesAsync.h" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/GetAvailableVoicesAsync.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetAvailableVoicesAsync_Statics::NewProp_Success_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/* Task delegate that will be called when the available voices are returned by Azure */" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/GetAvailableVoicesAsync.h" },
		{ "ToolTip", "Task delegate that will be called when the available voices are returned by Azure" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetAvailableVoicesAsync_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGetAvailableVoicesAsync, Success), Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGetAvailableVoicesAsync_Statics::NewProp_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGetAvailableVoicesAsync_Statics::NewProp_Success_MetaData)) }; // 1656782735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetAvailableVoicesAsync_Statics::NewProp_Fail_MetaData[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/* Task delegate that will be called when the task fails to get the available voices */" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/GetAvailableVoicesAsync.h" },
		{ "ToolTip", "Task delegate that will be called when the task fails to get the available voices" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGetAvailableVoicesAsync_Statics::NewProp_Fail = { "Fail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGetAvailableVoicesAsync, Fail), Z_Construct_UDelegateFunction_AzSpeech_AzSpeechFindAvailableVoicesFailDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGetAvailableVoicesAsync_Statics::NewProp_Fail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGetAvailableVoicesAsync_Statics::NewProp_Fail_MetaData)) }; // 32618968
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGetAvailableVoicesAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetAvailableVoicesAsync_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGetAvailableVoicesAsync_Statics::NewProp_Fail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetAvailableVoicesAsync_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetAvailableVoicesAsync>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGetAvailableVoicesAsync_Statics::ClassParams = {
		&UGetAvailableVoicesAsync::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGetAvailableVoicesAsync_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGetAvailableVoicesAsync_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGetAvailableVoicesAsync_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGetAvailableVoicesAsync_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGetAvailableVoicesAsync()
	{
		if (!Z_Registration_Info_UClass_UGetAvailableVoicesAsync.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGetAvailableVoicesAsync.OuterSingleton, Z_Construct_UClass_UGetAvailableVoicesAsync_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGetAvailableVoicesAsync.OuterSingleton;
	}
	template<> AZSPEECH_API UClass* StaticClass<UGetAvailableVoicesAsync>()
	{
		return UGetAvailableVoicesAsync::StaticClass();
	}
	UGetAvailableVoicesAsync::UGetAvailableVoicesAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetAvailableVoicesAsync);
	UGetAvailableVoicesAsync::~UGetAvailableVoicesAsync() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_GetAvailableVoicesAsync_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_GetAvailableVoicesAsync_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGetAvailableVoicesAsync, UGetAvailableVoicesAsync::StaticClass, TEXT("UGetAvailableVoicesAsync"), &Z_Registration_Info_UClass_UGetAvailableVoicesAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGetAvailableVoicesAsync), 3522480663U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_GetAvailableVoicesAsync_h_4150272259(TEXT("/Script/AzSpeech"),
		Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_GetAvailableVoicesAsync_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_Cut_Down_Export_Version_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_GetAvailableVoicesAsync_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
