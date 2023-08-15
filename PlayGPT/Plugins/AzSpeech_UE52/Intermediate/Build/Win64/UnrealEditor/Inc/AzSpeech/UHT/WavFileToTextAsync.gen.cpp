// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzSpeech/Tasks/WavFileToTextAsync.h"
#include "AzSpeech/Structures/AzSpeechSettingsOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWavFileToTextAsync() {}
// Cross Module References
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechRecognizerTaskBase();
	AZSPEECH_API UClass* Z_Construct_UClass_UWavFileToTextAsync();
	AZSPEECH_API UClass* Z_Construct_UClass_UWavFileToTextAsync_NoRegister();
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions();
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AzSpeech();
// End Cross Module References
	DEFINE_FUNCTION(UWavFileToTextAsync::execWavFileToText_CustomOptions)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FAzSpeechSubscriptionOptions,Z_Param_SubscriptionOptions);
		P_GET_STRUCT(FAzSpeechRecognitionOptions,Z_Param_RecognitionOptions);
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_PROPERTY(FNameProperty,Z_Param_PhraseListGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWavFileToTextAsync**)Z_Param__Result=UWavFileToTextAsync::WavFileToText_CustomOptions(Z_Param_WorldContextObject,Z_Param_SubscriptionOptions,Z_Param_RecognitionOptions,Z_Param_FilePath,Z_Param_FileName,Z_Param_PhraseListGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWavFileToTextAsync::execWavFileToText_DefaultOptions)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Locale);
		P_GET_PROPERTY(FNameProperty,Z_Param_PhraseListGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWavFileToTextAsync**)Z_Param__Result=UWavFileToTextAsync::WavFileToText_DefaultOptions(Z_Param_WorldContextObject,Z_Param_FilePath,Z_Param_FileName,Z_Param_Locale,Z_Param_PhraseListGroup);
		P_NATIVE_END;
	}
	void UWavFileToTextAsync::StaticRegisterNativesUWavFileToTextAsync()
	{
		UClass* Class = UWavFileToTextAsync::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WavFileToText_CustomOptions", &UWavFileToTextAsync::execWavFileToText_CustomOptions },
			{ "WavFileToText_DefaultOptions", &UWavFileToTextAsync::execWavFileToText_DefaultOptions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics
	{
		struct WavFileToTextAsync_eventWavFileToText_CustomOptions_Parms
		{
			UObject* WorldContextObject;
			FAzSpeechSubscriptionOptions SubscriptionOptions;
			FAzSpeechRecognitionOptions RecognitionOptions;
			FString FilePath;
			FString FileName;
			FName PhraseListGroup;
			UWavFileToTextAsync* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubscriptionOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubscriptionOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecognitionOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecognitionOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhraseListGroup_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PhraseListGroup;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WavFileToTextAsync_eventWavFileToText_CustomOptions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::NewProp_SubscriptionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::NewProp_SubscriptionOptions = { "SubscriptionOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WavFileToTextAsync_eventWavFileToText_CustomOptions_Parms, SubscriptionOptions), Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions, METADATA_PARAMS(Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::NewProp_SubscriptionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::NewProp_SubscriptionOptions_MetaData)) }; // 3252570412
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::NewProp_RecognitionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::NewProp_RecognitionOptions = { "RecognitionOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WavFileToTextAsync_eventWavFileToText_CustomOptions_Parms, RecognitionOptions), Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions, METADATA_PARAMS(Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::NewProp_RecognitionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::NewProp_RecognitionOptions_MetaData)) }; // 1382201151
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WavFileToTextAsync_eventWavFileToText_CustomOptions_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WavFileToTextAsync_eventWavFileToText_CustomOptions_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::NewProp_PhraseListGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::NewProp_PhraseListGroup = { "PhraseListGroup", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WavFileToTextAsync_eventWavFileToText_CustomOptions_Parms, PhraseListGroup), METADATA_PARAMS(Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::NewProp_PhraseListGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::NewProp_PhraseListGroup_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WavFileToTextAsync_eventWavFileToText_CustomOptions_Parms, ReturnValue), Z_Construct_UClass_UWavFileToTextAsync_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::NewProp_SubscriptionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::NewProp_RecognitionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::NewProp_PhraseListGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AzSpeech | Custom" },
		{ "Comment", "/* Creates a WavFile-To-Text task that will convert your Wav file to string */" },
		{ "CPP_Default_PhraseListGroup", "None" },
		{ "DisplayName", ".wav File To Text with Custom Options" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/WavFileToTextAsync.h" },
		{ "ToolTip", "Creates a WavFile-To-Text task that will convert your Wav file to string" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWavFileToTextAsync, nullptr, "WavFileToText_CustomOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::WavFileToTextAsync_eventWavFileToText_CustomOptions_Parms), Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics
	{
		struct WavFileToTextAsync_eventWavFileToText_DefaultOptions_Parms
		{
			UObject* WorldContextObject;
			FString FilePath;
			FString FileName;
			FString Locale;
			FName PhraseListGroup;
			UWavFileToTextAsync* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Locale_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Locale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhraseListGroup_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PhraseListGroup;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WavFileToTextAsync_eventWavFileToText_DefaultOptions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WavFileToTextAsync_eventWavFileToText_DefaultOptions_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WavFileToTextAsync_eventWavFileToText_DefaultOptions_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::NewProp_Locale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::NewProp_Locale = { "Locale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WavFileToTextAsync_eventWavFileToText_DefaultOptions_Parms, Locale), METADATA_PARAMS(Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::NewProp_Locale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::NewProp_Locale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::NewProp_PhraseListGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::NewProp_PhraseListGroup = { "PhraseListGroup", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WavFileToTextAsync_eventWavFileToText_DefaultOptions_Parms, PhraseListGroup), METADATA_PARAMS(Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::NewProp_PhraseListGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::NewProp_PhraseListGroup_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WavFileToTextAsync_eventWavFileToText_DefaultOptions_Parms, ReturnValue), Z_Construct_UClass_UWavFileToTextAsync_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::NewProp_Locale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::NewProp_PhraseListGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AzSpeech | Default" },
		{ "Comment", "/* Creates a WavFile-To-Text task that will convert your Wav file to string */" },
		{ "CPP_Default_Locale", "Default" },
		{ "CPP_Default_PhraseListGroup", "None" },
		{ "DisplayName", ".wav File To Text with Default Options" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/WavFileToTextAsync.h" },
		{ "ToolTip", "Creates a WavFile-To-Text task that will convert your Wav file to string" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWavFileToTextAsync, nullptr, "WavFileToText_DefaultOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::WavFileToTextAsync_eventWavFileToText_DefaultOptions_Parms), Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWavFileToTextAsync);
	UClass* Z_Construct_UClass_UWavFileToTextAsync_NoRegister()
	{
		return UWavFileToTextAsync::StaticClass();
	}
	struct Z_Construct_UClass_UWavFileToTextAsync_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWavFileToTextAsync_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAzSpeechRecognizerTaskBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AzSpeech,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWavFileToTextAsync_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_CustomOptions, "WavFileToText_CustomOptions" }, // 2465833839
		{ &Z_Construct_UFunction_UWavFileToTextAsync_WavFileToText_DefaultOptions, "WavFileToText_DefaultOptions" }, // 3387870492
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWavFileToTextAsync_Statics::Class_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "AzSpeech/Tasks/WavFileToTextAsync.h" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/WavFileToTextAsync.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWavFileToTextAsync_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWavFileToTextAsync>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWavFileToTextAsync_Statics::ClassParams = {
		&UWavFileToTextAsync::StaticClass,
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
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWavFileToTextAsync_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWavFileToTextAsync_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWavFileToTextAsync()
	{
		if (!Z_Registration_Info_UClass_UWavFileToTextAsync.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWavFileToTextAsync.OuterSingleton, Z_Construct_UClass_UWavFileToTextAsync_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWavFileToTextAsync.OuterSingleton;
	}
	template<> AZSPEECH_API UClass* StaticClass<UWavFileToTextAsync>()
	{
		return UWavFileToTextAsync::StaticClass();
	}
	UWavFileToTextAsync::UWavFileToTextAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWavFileToTextAsync);
	UWavFileToTextAsync::~UWavFileToTextAsync() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_WavFileToTextAsync_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_WavFileToTextAsync_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWavFileToTextAsync, UWavFileToTextAsync::StaticClass, TEXT("UWavFileToTextAsync"), &Z_Registration_Info_UClass_UWavFileToTextAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWavFileToTextAsync), 3914006324U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_WavFileToTextAsync_h_820089888(TEXT("/Script/AzSpeech"),
		Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_WavFileToTextAsync_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_WavFileToTextAsync_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
