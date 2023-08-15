// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzSpeech/Tasks/SpeechToTextAsync.h"
#include "AzSpeech/Structures/AzSpeechSettingsOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeechToTextAsync() {}
// Cross Module References
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechRecognizerTaskBase();
	AZSPEECH_API UClass* Z_Construct_UClass_USpeechToTextAsync();
	AZSPEECH_API UClass* Z_Construct_UClass_USpeechToTextAsync_NoRegister();
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions();
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AzSpeech();
// End Cross Module References
	DEFINE_FUNCTION(USpeechToTextAsync::execIsUsingDefaultAudioInputDevice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingDefaultAudioInputDevice();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpeechToTextAsync::execSpeechToText_CustomOptions)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FAzSpeechSubscriptionOptions,Z_Param_SubscriptionOptions);
		P_GET_STRUCT(FAzSpeechRecognitionOptions,Z_Param_RecognitionOptions);
		P_GET_PROPERTY(FStrProperty,Z_Param_AudioInputDeviceID);
		P_GET_PROPERTY(FNameProperty,Z_Param_PhraseListGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USpeechToTextAsync**)Z_Param__Result=USpeechToTextAsync::SpeechToText_CustomOptions(Z_Param_WorldContextObject,Z_Param_SubscriptionOptions,Z_Param_RecognitionOptions,Z_Param_AudioInputDeviceID,Z_Param_PhraseListGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpeechToTextAsync::execSpeechToText_DefaultOptions)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Locale);
		P_GET_PROPERTY(FStrProperty,Z_Param_AudioInputDeviceID);
		P_GET_PROPERTY(FNameProperty,Z_Param_PhraseListGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USpeechToTextAsync**)Z_Param__Result=USpeechToTextAsync::SpeechToText_DefaultOptions(Z_Param_WorldContextObject,Z_Param_Locale,Z_Param_AudioInputDeviceID,Z_Param_PhraseListGroup);
		P_NATIVE_END;
	}
	void USpeechToTextAsync::StaticRegisterNativesUSpeechToTextAsync()
	{
		UClass* Class = USpeechToTextAsync::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsUsingDefaultAudioInputDevice", &USpeechToTextAsync::execIsUsingDefaultAudioInputDevice },
			{ "SpeechToText_CustomOptions", &USpeechToTextAsync::execSpeechToText_CustomOptions },
			{ "SpeechToText_DefaultOptions", &USpeechToTextAsync::execSpeechToText_DefaultOptions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpeechToTextAsync_IsUsingDefaultAudioInputDevice_Statics
	{
		struct SpeechToTextAsync_eventIsUsingDefaultAudioInputDevice_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USpeechToTextAsync_IsUsingDefaultAudioInputDevice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpeechToTextAsync_eventIsUsingDefaultAudioInputDevice_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpeechToTextAsync_IsUsingDefaultAudioInputDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SpeechToTextAsync_eventIsUsingDefaultAudioInputDevice_Parms), &Z_Construct_UFunction_USpeechToTextAsync_IsUsingDefaultAudioInputDevice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechToTextAsync_IsUsingDefaultAudioInputDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechToTextAsync_IsUsingDefaultAudioInputDevice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechToTextAsync_IsUsingDefaultAudioInputDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/SpeechToTextAsync.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechToTextAsync_IsUsingDefaultAudioInputDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechToTextAsync, nullptr, "IsUsingDefaultAudioInputDevice", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpeechToTextAsync_IsUsingDefaultAudioInputDevice_Statics::SpeechToTextAsync_eventIsUsingDefaultAudioInputDevice_Parms), Z_Construct_UFunction_USpeechToTextAsync_IsUsingDefaultAudioInputDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechToTextAsync_IsUsingDefaultAudioInputDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpeechToTextAsync_IsUsingDefaultAudioInputDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechToTextAsync_IsUsingDefaultAudioInputDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpeechToTextAsync_IsUsingDefaultAudioInputDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechToTextAsync_IsUsingDefaultAudioInputDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics
	{
		struct SpeechToTextAsync_eventSpeechToText_CustomOptions_Parms
		{
			UObject* WorldContextObject;
			FAzSpeechSubscriptionOptions SubscriptionOptions;
			FAzSpeechRecognitionOptions RecognitionOptions;
			FString AudioInputDeviceID;
			FName PhraseListGroup;
			USpeechToTextAsync* ReturnValue;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioInputDeviceID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AudioInputDeviceID;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpeechToTextAsync_eventSpeechToText_CustomOptions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::NewProp_SubscriptionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::NewProp_SubscriptionOptions = { "SubscriptionOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpeechToTextAsync_eventSpeechToText_CustomOptions_Parms, SubscriptionOptions), Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions, METADATA_PARAMS(Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::NewProp_SubscriptionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::NewProp_SubscriptionOptions_MetaData)) }; // 3252570412
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::NewProp_RecognitionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::NewProp_RecognitionOptions = { "RecognitionOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpeechToTextAsync_eventSpeechToText_CustomOptions_Parms, RecognitionOptions), Z_Construct_UScriptStruct_FAzSpeechRecognitionOptions, METADATA_PARAMS(Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::NewProp_RecognitionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::NewProp_RecognitionOptions_MetaData)) }; // 1382201151
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::NewProp_AudioInputDeviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::NewProp_AudioInputDeviceID = { "AudioInputDeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpeechToTextAsync_eventSpeechToText_CustomOptions_Parms, AudioInputDeviceID), METADATA_PARAMS(Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::NewProp_AudioInputDeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::NewProp_AudioInputDeviceID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::NewProp_PhraseListGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::NewProp_PhraseListGroup = { "PhraseListGroup", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpeechToTextAsync_eventSpeechToText_CustomOptions_Parms, PhraseListGroup), METADATA_PARAMS(Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::NewProp_PhraseListGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::NewProp_PhraseListGroup_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpeechToTextAsync_eventSpeechToText_CustomOptions_Parms, ReturnValue), Z_Construct_UClass_USpeechToTextAsync_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::NewProp_SubscriptionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::NewProp_RecognitionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::NewProp_AudioInputDeviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::NewProp_PhraseListGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AzSpeech | Custom" },
		{ "Comment", "/* Creates a Speech-To-Text task that will convert your speech to string */" },
		{ "CPP_Default_AudioInputDeviceID", "Default" },
		{ "CPP_Default_PhraseListGroup", "None" },
		{ "DisplayName", "Speech to Text with Custom Options" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/SpeechToTextAsync.h" },
		{ "ToolTip", "Creates a Speech-To-Text task that will convert your speech to string" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechToTextAsync, nullptr, "SpeechToText_CustomOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::SpeechToTextAsync_eventSpeechToText_CustomOptions_Parms), Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions_Statics
	{
		struct SpeechToTextAsync_eventSpeechToText_DefaultOptions_Parms
		{
			UObject* WorldContextObject;
			FString Locale;
			FString AudioInputDeviceID;
			FName PhraseListGroup;
			USpeechToTextAsync* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Locale_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Locale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioInputDeviceID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AudioInputDeviceID;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpeechToTextAsync_eventSpeechToText_DefaultOptions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions_Statics::NewProp_Locale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions_Statics::NewProp_Locale = { "Locale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpeechToTextAsync_eventSpeechToText_DefaultOptions_Parms, Locale), METADATA_PARAMS(Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions_Statics::NewProp_Locale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions_Statics::NewProp_Locale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions_Statics::NewProp_AudioInputDeviceID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions_Statics::NewProp_AudioInputDeviceID = { "AudioInputDeviceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpeechToTextAsync_eventSpeechToText_DefaultOptions_Parms, AudioInputDeviceID), METADATA_PARAMS(Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions_Statics::NewProp_AudioInputDeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions_Statics::NewProp_AudioInputDeviceID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions_Statics::NewProp_PhraseListGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions_Statics::NewProp_PhraseListGroup = { "PhraseListGroup", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpeechToTextAsync_eventSpeechToText_DefaultOptions_Parms, PhraseListGroup), METADATA_PARAMS(Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions_Statics::NewProp_PhraseListGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions_Statics::NewProp_PhraseListGroup_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpeechToTextAsync_eventSpeechToText_DefaultOptions_Parms, ReturnValue), Z_Construct_UClass_USpeechToTextAsync_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions_Statics::NewProp_Locale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions_Statics::NewProp_AudioInputDeviceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions_Statics::NewProp_PhraseListGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AzSpeech | Default" },
		{ "Comment", "/* Creates a Speech-To-Text task that will convert your speech to string */" },
		{ "CPP_Default_AudioInputDeviceID", "Default" },
		{ "CPP_Default_Locale", "Default" },
		{ "CPP_Default_PhraseListGroup", "None" },
		{ "DisplayName", "Speech to Text with Default Options" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/SpeechToTextAsync.h" },
		{ "ToolTip", "Creates a Speech-To-Text task that will convert your speech to string" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpeechToTextAsync, nullptr, "SpeechToText_DefaultOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions_Statics::SpeechToTextAsync_eventSpeechToText_DefaultOptions_Parms), Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpeechToTextAsync);
	UClass* Z_Construct_UClass_USpeechToTextAsync_NoRegister()
	{
		return USpeechToTextAsync::StaticClass();
	}
	struct Z_Construct_UClass_USpeechToTextAsync_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpeechToTextAsync_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAzSpeechRecognizerTaskBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AzSpeech,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpeechToTextAsync_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpeechToTextAsync_IsUsingDefaultAudioInputDevice, "IsUsingDefaultAudioInputDevice" }, // 459771303
		{ &Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_CustomOptions, "SpeechToText_CustomOptions" }, // 1415517484
		{ &Z_Construct_UFunction_USpeechToTextAsync_SpeechToText_DefaultOptions, "SpeechToText_DefaultOptions" }, // 3157101910
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpeechToTextAsync_Statics::Class_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "AzSpeech/Tasks/SpeechToTextAsync.h" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/SpeechToTextAsync.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpeechToTextAsync_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpeechToTextAsync>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpeechToTextAsync_Statics::ClassParams = {
		&USpeechToTextAsync::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USpeechToTextAsync_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpeechToTextAsync_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpeechToTextAsync()
	{
		if (!Z_Registration_Info_UClass_USpeechToTextAsync.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpeechToTextAsync.OuterSingleton, Z_Construct_UClass_USpeechToTextAsync_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpeechToTextAsync.OuterSingleton;
	}
	template<> AZSPEECH_API UClass* StaticClass<USpeechToTextAsync>()
	{
		return USpeechToTextAsync::StaticClass();
	}
	USpeechToTextAsync::USpeechToTextAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpeechToTextAsync);
	USpeechToTextAsync::~USpeechToTextAsync() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SpeechToTextAsync_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SpeechToTextAsync_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpeechToTextAsync, USpeechToTextAsync::StaticClass, TEXT("USpeechToTextAsync"), &Z_Registration_Info_UClass_USpeechToTextAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpeechToTextAsync), 2883529146U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SpeechToTextAsync_h_1926337185(TEXT("/Script/AzSpeech"),
		Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SpeechToTextAsync_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_SpeechToTextAsync_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
