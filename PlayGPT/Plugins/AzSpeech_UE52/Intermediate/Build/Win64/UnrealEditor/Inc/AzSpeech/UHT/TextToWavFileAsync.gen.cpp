// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzSpeech/Tasks/TextToWavFileAsync.h"
#include "AzSpeech/Structures/AzSpeechSettingsOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextToWavFileAsync() {}
// Cross Module References
	AZSPEECH_API UClass* Z_Construct_UClass_UAzSpeechWavFileSynthesisBase();
	AZSPEECH_API UClass* Z_Construct_UClass_UTextToWavFileAsync();
	AZSPEECH_API UClass* Z_Construct_UClass_UTextToWavFileAsync_NoRegister();
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions();
	AZSPEECH_API UScriptStruct* Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AzSpeech();
// End Cross Module References
	DEFINE_FUNCTION(UTextToWavFileAsync::execTextToWavFile_CustomOptions)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FAzSpeechSubscriptionOptions,Z_Param_SubscriptionOptions);
		P_GET_STRUCT(FAzSpeechSynthesisOptions,Z_Param_SynthesisOptions);
		P_GET_PROPERTY(FStrProperty,Z_Param_SynthesisText);
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextToWavFileAsync**)Z_Param__Result=UTextToWavFileAsync::TextToWavFile_CustomOptions(Z_Param_WorldContextObject,Z_Param_SubscriptionOptions,Z_Param_SynthesisOptions,Z_Param_SynthesisText,Z_Param_FilePath,Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextToWavFileAsync::execTextToWavFile_DefaultOptions)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SynthesisText);
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Voice);
		P_GET_PROPERTY(FStrProperty,Z_Param_Locale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextToWavFileAsync**)Z_Param__Result=UTextToWavFileAsync::TextToWavFile_DefaultOptions(Z_Param_WorldContextObject,Z_Param_SynthesisText,Z_Param_FilePath,Z_Param_FileName,Z_Param_Voice,Z_Param_Locale);
		P_NATIVE_END;
	}
	void UTextToWavFileAsync::StaticRegisterNativesUTextToWavFileAsync()
	{
		UClass* Class = UTextToWavFileAsync::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TextToWavFile_CustomOptions", &UTextToWavFileAsync::execTextToWavFile_CustomOptions },
			{ "TextToWavFile_DefaultOptions", &UTextToWavFileAsync::execTextToWavFile_DefaultOptions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics
	{
		struct TextToWavFileAsync_eventTextToWavFile_CustomOptions_Parms
		{
			UObject* WorldContextObject;
			FAzSpeechSubscriptionOptions SubscriptionOptions;
			FAzSpeechSynthesisOptions SynthesisOptions;
			FString SynthesisText;
			FString FilePath;
			FString FileName;
			UTextToWavFileAsync* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubscriptionOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubscriptionOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SynthesisOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SynthesisOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SynthesisText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SynthesisText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToWavFileAsync_eventTextToWavFile_CustomOptions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::NewProp_SubscriptionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::NewProp_SubscriptionOptions = { "SubscriptionOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToWavFileAsync_eventTextToWavFile_CustomOptions_Parms, SubscriptionOptions), Z_Construct_UScriptStruct_FAzSpeechSubscriptionOptions, METADATA_PARAMS(Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::NewProp_SubscriptionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::NewProp_SubscriptionOptions_MetaData)) }; // 3252570412
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::NewProp_SynthesisOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::NewProp_SynthesisOptions = { "SynthesisOptions", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToWavFileAsync_eventTextToWavFile_CustomOptions_Parms, SynthesisOptions), Z_Construct_UScriptStruct_FAzSpeechSynthesisOptions, METADATA_PARAMS(Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::NewProp_SynthesisOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::NewProp_SynthesisOptions_MetaData)) }; // 2909106233
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::NewProp_SynthesisText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::NewProp_SynthesisText = { "SynthesisText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToWavFileAsync_eventTextToWavFile_CustomOptions_Parms, SynthesisText), METADATA_PARAMS(Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::NewProp_SynthesisText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::NewProp_SynthesisText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToWavFileAsync_eventTextToWavFile_CustomOptions_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToWavFileAsync_eventTextToWavFile_CustomOptions_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::NewProp_FileName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToWavFileAsync_eventTextToWavFile_CustomOptions_Parms, ReturnValue), Z_Construct_UClass_UTextToWavFileAsync_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::NewProp_SubscriptionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::NewProp_SynthesisOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::NewProp_SynthesisText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AzSpeech | Custom" },
		{ "Comment", "/* Creates a Text-To-WavFile task that will convert your string to a .wav audio file */" },
		{ "DisplayName", "Text To .wav File with Custom Options" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/TextToWavFileAsync.h" },
		{ "ToolTip", "Creates a Text-To-WavFile task that will convert your string to a .wav audio file" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextToWavFileAsync, nullptr, "TextToWavFile_CustomOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::TextToWavFileAsync_eventTextToWavFile_CustomOptions_Parms), Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics
	{
		struct TextToWavFileAsync_eventTextToWavFile_DefaultOptions_Parms
		{
			UObject* WorldContextObject;
			FString SynthesisText;
			FString FilePath;
			FString FileName;
			FString Voice;
			FString Locale;
			UTextToWavFileAsync* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SynthesisText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SynthesisText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Voice_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Voice;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToWavFileAsync_eventTextToWavFile_DefaultOptions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::NewProp_SynthesisText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::NewProp_SynthesisText = { "SynthesisText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToWavFileAsync_eventTextToWavFile_DefaultOptions_Parms, SynthesisText), METADATA_PARAMS(Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::NewProp_SynthesisText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::NewProp_SynthesisText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToWavFileAsync_eventTextToWavFile_DefaultOptions_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToWavFileAsync_eventTextToWavFile_DefaultOptions_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::NewProp_Voice_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::NewProp_Voice = { "Voice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToWavFileAsync_eventTextToWavFile_DefaultOptions_Parms, Voice), METADATA_PARAMS(Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::NewProp_Voice_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::NewProp_Voice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::NewProp_Locale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::NewProp_Locale = { "Locale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToWavFileAsync_eventTextToWavFile_DefaultOptions_Parms, Locale), METADATA_PARAMS(Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::NewProp_Locale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::NewProp_Locale_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToWavFileAsync_eventTextToWavFile_DefaultOptions_Parms, ReturnValue), Z_Construct_UClass_UTextToWavFileAsync_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::NewProp_SynthesisText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::NewProp_Voice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::NewProp_Locale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AzSpeech | Default" },
		{ "Comment", "/* Creates a Text-To-WavFile task that will convert your string to a .wav audio file */" },
		{ "CPP_Default_Locale", "Default" },
		{ "CPP_Default_Voice", "Default" },
		{ "DisplayName", "Text To .wav File with Default Options" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/TextToWavFileAsync.h" },
		{ "ToolTip", "Creates a Text-To-WavFile task that will convert your string to a .wav audio file" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextToWavFileAsync, nullptr, "TextToWavFile_DefaultOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::TextToWavFileAsync_eventTextToWavFile_DefaultOptions_Parms), Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextToWavFileAsync);
	UClass* Z_Construct_UClass_UTextToWavFileAsync_NoRegister()
	{
		return UTextToWavFileAsync::StaticClass();
	}
	struct Z_Construct_UClass_UTextToWavFileAsync_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextToWavFileAsync_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAzSpeechWavFileSynthesisBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AzSpeech,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextToWavFileAsync_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_CustomOptions, "TextToWavFile_CustomOptions" }, // 1431325313
		{ &Z_Construct_UFunction_UTextToWavFileAsync_TextToWavFile_DefaultOptions, "TextToWavFile_DefaultOptions" }, // 1252571449
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextToWavFileAsync_Statics::Class_MetaDataParams[] = {
		{ "Category", "AzSpeech" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "AzSpeech/Tasks/TextToWavFileAsync.h" },
		{ "ModuleRelativePath", "Public/AzSpeech/Tasks/TextToWavFileAsync.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextToWavFileAsync_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextToWavFileAsync>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextToWavFileAsync_Statics::ClassParams = {
		&UTextToWavFileAsync::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTextToWavFileAsync_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextToWavFileAsync_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextToWavFileAsync()
	{
		if (!Z_Registration_Info_UClass_UTextToWavFileAsync.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextToWavFileAsync.OuterSingleton, Z_Construct_UClass_UTextToWavFileAsync_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextToWavFileAsync.OuterSingleton;
	}
	template<> AZSPEECH_API UClass* StaticClass<UTextToWavFileAsync>()
	{
		return UTextToWavFileAsync::StaticClass();
	}
	UTextToWavFileAsync::UTextToWavFileAsync(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextToWavFileAsync);
	UTextToWavFileAsync::~UTextToWavFileAsync() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToWavFileAsync_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToWavFileAsync_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextToWavFileAsync, UTextToWavFileAsync::StaticClass, TEXT("UTextToWavFileAsync"), &Z_Registration_Info_UClass_UTextToWavFileAsync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextToWavFileAsync), 880324329U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToWavFileAsync_h_2174785973(TEXT("/Script/AzSpeech"),
		Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToWavFileAsync_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Unreal_Engine_PlayGPT_Plugins_AzSpeech_UE52_Source_AzSpeech_Public_AzSpeech_Tasks_TextToWavFileAsync_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
